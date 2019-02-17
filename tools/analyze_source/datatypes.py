from enum import Enum
from abc import ABC, abstractmethod
import functools
import math
import numbers
import re
import collections

import parser
import readelf
from analyze_source import *

"""
from analyze_source import *
import analyzer
import opcodes
import parser
import readelf
import scanner
"""

syms = {}
scanned_files = {}

def set_syms_and_scanned_files(_syms, _scanned_files):
    global syms
    global scanned_files
    syms = _syms
    scanned_files = _scanned_files

ROM_END = 0x87FB2F4

class Size(Enum):
    DEFAULT = -1
    UNKNOWN = 0
    BYTE = 1
    HWORD = 2
    WORD = 4

class DataTypeContainer:
    __slots__ = ("_ref",)
    def __init__(self, _ref=None):
        if _ref is None:
            _ref = UnknownDataType()
        self._ref = _ref
        super().__init__()

    @property
    def type(self):
        return self.ref.type

    @property
    def ref(self):
        return self._ref

    @ref.setter
    def ref(self, _ref):
        self._ref = _ref

class DataType(ABC):
    UNKNOWN = 1 << 0
    PRIMITIVE = 1 << 2
    POINTER = 1 << 4

    def __init__(self):
        super().__init__()

    @property
    @abstractmethod
    def type(self):
        pass
    
    @property
    @abstractmethod
    def size(self):
        pass

    @property
    def size(self, _size):
        return self._size

    def wrap(self):
        return DataTypeContainer(self)

    @property
    def ref(self):
        global_fileline_error("\"%s\" object should not exist here, check code for missing wrap()!" % type(self).__name__)

class UnknownDataType(DataType):
    def __init__(self):
        super().__init__()

    @property
    def type(self):
        return DataType.UNKNOWN

    @property
    def size(self):
        return Size.WORD

class Primitive(DataType):
    new_byte = None
    new_hword = None
    new_word = None

    __slots__ = ("_size", "_value")

    def __init__(self, size=Size.UNKNOWN, value=None):
        super().__init__()
        self._size = size
        if value is None:
            value = NaN
        self._value = value

    @property
    def type(self):
        return DataType.PRIMITIVE

    @property
    def size(self):
        return self._size

    @property
    def value(self):
        return self._value

    @value.setter
    def value(self, value):
        self._value = value

    @property
    def is_immediate(self):
        return False

Primitive.new_byte = functools.partial(Primitive, Size.BYTE)
Primitive.new_hword = functools.partial(Primitive, Size.HWORD)
Primitive.new_word = functools.partial(Primitive, Size.WORD)

class Immediate(Primitive):
    def __init__(self, size=Size.BYTE, value=0):
        super().__init__(size, value)

    @property
    def is_immediate(self):
        return True

class Pointer(DataType):
    null_sym = readelf.SymInfo(value=NaN, scope="l", debug=" ", type=" ", section="*UND*", name="null", filename="dummy", line_num=0)
    __slots__ = ("_possible_syms", "_offset")
    def __init__(self, offset=0, possible_syms=None):
        super().__init__()
        if not possible_syms:
            possible_syms = [Pointer.null_sym]
        elif not isinstance(possible_syms, list):
            possible_syms = [possible_syms]
        self._possible_syms = possible_syms
        self._offset = offset

    @property
    def type(self):
        return DataType.POINTER

    @abstractmethod
    def load(self, size, fileline, offset=None):
        pass

    @abstractmethod
    def store(self, datatype, size, fileline, offset=None):
        pass

    def add_offset(self, offset):
        # if not isinstance(self.offset, numbers.Number):
        #     global_fileline_error("Trying to add variable of type \"%s\" to pointer!" % type(self.offset).__name__)
        
        self.offset = self.offset + offset

    @property
    def offset(self):
        if isinstance(self._offset, readelf.SymInfo):
            global_fileline_error("Pointer offset is somehow SymInfo!")
        return self._offset

    @offset.setter
    def offset(self, offset):
        # if isinstance(offset, readelf.SymInfo):
        #     global_fileline_error("Pointer offset assigned with type \"%s\"!" % type(offset).__name__)
        self._offset = offset

    @property
    def size(self):
        return Size.WORD
    
    @property
    def possible_syms(self):
        return self._possible_syms
    
class UnkPointer(Pointer):
    def __init__(self):
        super().__init__()

    # TODO mark offsets
    def load(self, size, fileline, offset=None):
        #total_offset = offset + self.offset
        #if math.isnan(total_offset):
        return new_unk_datatype_from_size(size)
        #pass

    # TODO mark offsets
    def store(self, datatype, size, fileline, offset=None):
        pass
    
class RAMPointer(Pointer):
    def __init__(self, offset=0, possible_syms=None):
        super().__init__(offset, possible_syms)

    # TODO mark offsets
    def load(self, size, fileline, offset=None):
        return new_unk_datatype_from_size(size)
    
    # TODO mark offsets
    def store(self, datatype, size, fileline, offset=None):
        pass

class ROMPointer(Pointer):
    def __init__(self, possible_syms=None):
        super().__init__(0, possible_syms)

    def load(self, size, fileline, offset=None):
        global syms
        global scanned_files
    
        if size == Size.BYTE or size == Size.HWORD:
            return Primitive(size).wrap()

        read_syms = []
        for possible_sym in self.possible_syms:
            if possible_sym.section == "*UND*":
                return new_unk_datatype_from_size(size)
            elif possible_sym.type == "F":
                global_fileline_error("Cannot read from a function! (function: %s)" % possible_sym.name)

            words = parser.try_parse_word_directives_from_sym(possible_sym)
            if len(words) == 0:
                return new_unk_datatype_from_size(size)
            
            # assume that the elements of the pointer table have the same attributes
            # so we only check one non-ambiguous element here
            for word in words:
                word = parser.strip_plus1(word)
                if word in syms:
                    if syms[word].section == "*ABS*":
                        return new_unk_datatype_from_size(size)
                    elif syms[word].section in RAM_SECTIONS_SYMBOLS:
                        return new_unk_datatype_from_size(size)
                    else:
                        read_syms.append(syms[word])
                else:
                    try:
                        if int(word, 0) != 0:
                            return new_unk_datatype_from_size(size)
                    except ValueError:
                        global_fileline_error("Unknown .word parameter \"%s\" found!" % word)

        if len(read_syms) == 0:
            return new_unk_datatype_from_size(size)

        return ROMPointer(read_syms).wrap()

    def store(self, datatype, size, fileline, offset=None):
        if len(self.possible_syms) == 1:
            global_fileline_error("Cannot write to ROMPointer \"%s\"!" % self.sym.name)
        else:
            names = ", ".join(sym.name for sym in self.possible_syms)
            if names == "sub_80104E0, sub_80CA4F6, sub_8010474, sub_8010488, sub_80D2596, sub_800AF34, sub_801050C, sub_80CFE08, sub_8015AA6, sub_8010820, sub_802E1BE, sub_80DEDE0, sub_80EC44C, sub_80EA11C, sub_80E94DC, sub_80E5A64, sub_80C6330, sub_80DB4B4, sub_80CD4AC, sub_80E4FCA, sub_80C9ECE":
                global_fileline_msg("ROMWriteWarning: Cannot write to ROMPointer \"%s\"!" % names)
            else:
                global_fileline_error("Cannot write to ROMPointer \"%s\"!" % names)

    @property
    def sym(self):
        if len(self.possible_syms) != 1:
            global_fileline_error("Tried getting single sym when more than one possible sym exists!")
        return self.possible_syms[0]

    @property
    def filename(self):
        return self.sym.filename
    
    @filename.setter
    def filename(self, filename):
        global_fileline_error("Cannot set filename of ROMPointer!")

    @property
    def line_num(self):
        return self.sym.line_num

    @line_num.setter
    def line_num(self, line_num):
        global_fileline_error("Cannot set line num of ROMPointer!")

class ProgramCounter(ROMPointer):
    __slots__ = ("_filename", "_line_num")

    def __init__(self, filename, line_num):
        super().__init__()
        self._filename = filename
        self._line_num = line_num

    @property
    def type(self):
        return DataType.POINTER

    def load(self, size, fileline, offset=None):
        global_fileline_error("Cannot read from program counter \"%s\"!" % self.sym)

    def store(self, datatype, size, fileline, offset=None):
        global_fileline_error("Cannot write to program counter \"%s\"!" % self.sym)

    def add_offset(self, offset):
        global_fileline_error("Cannot add an offset to function \"%s\"!" % self.sym)

    @property
    def offset(self):
        global_fileline_error("Function \"%s\" has no offset!" % self.sym)

    @offset.setter
    def offset(self, offset):
        global_fileline_error("Cannot set offset of function \"%s\"!" % self.sym)

    @property
    def size(self):
        return Size.WORD

    @property
    def filename(self):
        return self._filename

    @filename.setter
    def filename(self, filename):
        self._filename = filename

    @property
    def line_num(self):
        return self._line_num

    @line_num.setter
    def line_num(self, line_num):
        self._line_num = line_num

class Memory(ABC):
    def __init__(self):
        super().__init__()

    @abstractmethod
    def load(self, struct, size):
        pass

    @abstractmethod
    def store(self, struct, datatype, size):
        pass

# Does not carry state or provide struct and size args.
class AnonMemory(Memory):
    __slots__ = ("read_action", "write_action")
    dummy_func = lambda x: None
    def __init__(self, read_action, write_action=dummy_func):
        super().__init__()
        self.read_action = read_action
        self.write_action = write_action
    
    def load(self, struct, size):
        return self.read_action().wrap()

    def store(self, struct, datatype, size):
        self.write_action(datatype)

class UnkMemory(Memory):
    def __init__(self):
        super().__init__()

    def load(self, struct, size):
        return new_unk_datatype_from_size(size)

    def store(self, struct, datatype, size):
        pass

class UnkPrimitiveMemory(Memory):
    def __init__(self):
        super().__init__()

    def load(self, struct, size):
        return Primitive(size).wrap()

    def store(self, struct, datatype, size):
        pass

class StructField:
    __slots__ = ("offset_name", "memory")
    def __init__(self, offset_name, memory):
        self.offset_name = offset_name
        self.memory = memory

class Struct(Pointer):
    unk_memory = UnkMemory()
    unk_primitive_memory = UnkPrimitiveMemory()
    barebones_struct_field = StructField("", UnkMemory())
    zero_immediate = Immediate().wrap()
    imm_value_regex = re.compile(r"# *([^\]]+)|(?= *\])")

    def __init__(self, offset=0):
        super().__init__(offset)

    def load(self, size, fileline, offset=None):
        if offset is None:
            offset = Struct.zero_immediate
        struct_field = self.get_struct_offset_field(offset, fileline, size)
        if struct_field.offset_name != "":
            self.mark_struct_access(offset, fileline, size, struct_field)
        return struct_field.memory.load(self, size)

    def store(self, datatype, size, fileline, offset=None):
        if offset is None:
            offset = Struct.zero_immediate
        struct_field = self.get_struct_offset_field(offset, fileline, size)
        if struct_field.offset_name != "":
            self.mark_struct_access(offset, fileline, size, struct_field)
        struct_field.memory.store(self, datatype, size)

    def mark_struct_access(self, offset, fileline, size, struct_field):
        if offset.ref.is_immediate and self.offset == 0 and fileline not in self.marked_accesses_case_1:
            self.marked_accesses_case_1.add(fileline)
            src_file = scanned_files[fileline.filename]
            uncommented_line = src_file.lines[fileline.line_num]
            search_obj = Struct.imm_value_regex.search(uncommented_line)
            if search_obj[1] is not None:
                if '0' <= search_obj[1][0] < '9':
                    commented_line = src_file.commented_lines[fileline.line_num]
                    prefix_and_offset_name = self.get_prefix(offset.ref.value) + struct_field.offset_name
                    src_file.commented_lines[fileline.line_num] = commented_line[:search_obj.start(1)] + prefix_and_offset_name + commented_line[search_obj.end(1):]
                    fileline_msg("Marked \"%s\" offset \"%s\"." % (self.struct_name, prefix_and_offset_name), fileline)
            else:
                commented_line = src_file.commented_lines[fileline.line_num]
                prefix_and_offset_name = self.get_prefix(offset.ref.value) + struct_field.offset_name
                src_file.commented_lines[fileline.line_num] = commented_line[:search_obj.start(0)] + ",#" + prefix_and_offset_name + commented_line[search_obj.end(0):]
                fileline_msg("Marked \"%s\" offset \"%s\"." % (self.struct_name, prefix_and_offset_name), fileline)

    @abstractmethod
    def get_struct_offset_field(self, offset, fileline, size):
        pass

    @property
    @abstractmethod
    def marked_accesses_case_1(self):
        pass

    # @marked_accesses_case_1.setter
    # @abstractmethod
    # def marked_accesses_case_1(self, val):
        # pass

    @abstractmethod
    def get_prefix(self, offset):
        pass

"""
class StructEntry:
    __slots__ = ("offset_name", "read_action", "write_action", "size")
    def __init__(self, offset_name, memory, size=0):
        self.offset_name = offset_name
        self.memory = memory
        self.size = size
        
class StructInfo:
    def __init__(self, struct_prefix, start_offset, *struct_fields):
        self.struct_prefix = struct_prefix
        self.start_offset = start_offset
        self.struct_fields = struct_fields
"""

class Toolkit(Struct):
    def __init__(self):
        super().__init__()

class BattleObject(Struct):
    __slots__ = ("basic_struct_fields",)
    _marked_accesses_case_1 = set()

    def __init__(self, offset=0):
        super().__init__(offset)
        self.basic_struct_fields = BattleObject.generate_basic_struct_fields()

    @staticmethod
    def generate_basic_struct_fields():
        struct_fields = collections.defaultdict(lambda: {})
        struct_fields.update({
                -0x10: {Size.WORD: StructField("_LinkedList_Prev", AnonMemory(functools.partial(BattleObject, -0x10)))},
                -0x0c: {Size.WORD: StructField("_LinkedList_Next", AnonMemory(functools.partial(BattleObject, -0x10)))},
                0x0: {Size.BYTE: StructField("_Flags", UnkPrimitiveMemory())},
                0x1: {Size.BYTE: StructField("_Index", UnkPrimitiveMemory())},
                0x2: {Size.BYTE: StructField("_TypeAndSpriteOffset", AnonMemory(functools.partial(Primitive, Size.BYTE, 0x91)))},
                0x3: {Size.BYTE: StructField("_ListIndex", UnkPrimitiveMemory())},
                0x4: {Size.WORD: StructField("_Params", UnkPrimitiveMemory()),
                      Size.DEFAULT: StructField("_Param1", UnkPrimitiveMemory())},
                0x5: {Size.BYTE: StructField("_Param2", UnkPrimitiveMemory())},
                0x6: {Size.DEFAULT: StructField("_Param3", UnkPrimitiveMemory())},
                0x7: {Size.BYTE: StructField("_Param4", UnkPrimitiveMemory())},
                0x8: {Size.BYTE: StructField("_CurState", UnkPrimitiveMemory()),
                      Size.WORD: StructField("_CurStateActionPhaseAndPhaseInitialized", UnkPrimitiveMemory())},
                0x9: {Size.BYTE: StructField("_CurAction", UnkPrimitiveMemory())},
                0xa: {Size.BYTE: StructField("_CurPhase", UnkPrimitiveMemory()),
                      Size.HWORD: StructField("_CurPhaseAndPhaseInitialized", UnkPrimitiveMemory())},
                0xb: {Size.BYTE: StructField("_PhaseInitialized", UnkPrimitiveMemory())},
                0xc: {Size.BYTE: StructField("_Unk_0c", UnkPrimitiveMemory())},
                0xd: {Size.BYTE: StructField("_Unk_0d", UnkPrimitiveMemory())},
                0xe: {Size.BYTE: StructField("_Element", UnkPrimitiveMemory())},
                0xf: {Size.BYTE: StructField("_Unk_0f", UnkPrimitiveMemory())},
                0x10: {Size.BYTE: StructField("_CurAnim", UnkPrimitiveMemory()),
                       Size.HWORD: StructField("_CurAnimAndCurAnimCopy", UnkPrimitiveMemory())},
                0x11: {Size.BYTE: StructField("_CurAnimCopy", UnkPrimitiveMemory())},
                0x12: {Size.BYTE: StructField("_PanelX", UnkPrimitiveMemory()),
                       Size.HWORD: StructField("_PanelXY", UnkPrimitiveMemory())},
                0x13: {Size.BYTE: StructField("_PanelY", UnkPrimitiveMemory())},
                0x14: {Size.BYTE: StructField("_FuturePanelX", UnkPrimitiveMemory())},
                0x15: {Size.BYTE: StructField("_FuturePanelY", UnkPrimitiveMemory())},
                0x16: {Size.BYTE: StructField("_Alliance", UnkPrimitiveMemory()),
                       Size.HWORD: StructField("_AllianceAndDirectionFlip", UnkPrimitiveMemory())},
                0x17: {Size.BYTE: StructField("_DirectionFlip", UnkPrimitiveMemory())},
                0x18: {Size.BYTE: StructField("_PreventAnim", UnkPrimitiveMemory())},
                0x19: {Size.BYTE: StructField("_Unk_19", UnkPrimitiveMemory())},
                0x1a: {Size.BYTE: StructField("_ChipsHeld", UnkPrimitiveMemory())},
                0x1b: {Size.BYTE: StructField("_Unk_1b", UnkPrimitiveMemory())},
                0x1c: {Size.BYTE: StructField("_Unk_1c", UnkPrimitiveMemory())},
                0x1d: {Size.BYTE: StructField("_Unk_1d", UnkPrimitiveMemory())},
                0x1e: {Size.BYTE: StructField("_Unk_1e", UnkPrimitiveMemory())},
                0x1f: {Size.BYTE: StructField("_Unk_1f", UnkPrimitiveMemory())},
                0x20: {Size.HWORD: StructField("_Timer", UnkPrimitiveMemory())},
                0x22: {Size.HWORD: StructField("_Timer2", UnkPrimitiveMemory())},
                0x24: {Size.HWORD: StructField("_HP", UnkPrimitiveMemory())},
                0x26: {Size.HWORD: StructField("_MaxHP", UnkPrimitiveMemory())},
                0x28: {Size.HWORD: StructField("_NameID", UnkPrimitiveMemory())},
                0x2a: {Size.HWORD: StructField("_Chip", UnkPrimitiveMemory())},
                0x2c: {Size.HWORD: StructField("_Damage", UnkPrimitiveMemory()),
                       Size.WORD: StructField("_DamageAndStaminaDamageCounterDisabler", UnkPrimitiveMemory())},
                0x2e: {Size.HWORD: StructField("_StaminaDamageCounterDisabler", UnkPrimitiveMemory())},
                0x30: {Size.WORD: StructField("_Unk_30", UnkPrimitiveMemory())},
                0x34: {Size.WORD: StructField("_X", UnkPrimitiveMemory())},
                0x36: {Size.HWORD: StructField("_X16", UnkPrimitiveMemory())},
                0x38: {Size.WORD: StructField("_Y", UnkPrimitiveMemory())},
                0x3a: {Size.HWORD: StructField("_Y16", UnkPrimitiveMemory())},
                0x3c: {Size.WORD: StructField("_Z", UnkPrimitiveMemory())},
                0x3e: {Size.HWORD: StructField("_Z16", UnkPrimitiveMemory())},
                0x40: {Size.WORD: StructField("_XVelocity", UnkPrimitiveMemory())},
                0x44: {Size.WORD: StructField("_YVelocity", UnkPrimitiveMemory())},
                0x48: {Size.WORD: StructField("_ZVelocity", UnkPrimitiveMemory())},
                0x4c: {Size.WORD: StructField("_RelatedObject1Ptr", AnonMemory(BattleObject))},
                0x50: {Size.WORD: StructField("_RelatedObject2Ptr", AnonMemory(BattleObject))},
                0x54: {Size.WORD: StructField("_CollisionDataPtr", AnonMemory(RAMPointer))},
                0x58: {Size.WORD: StructField("_AIPtr", AnonMemory(RAMPointer))},
                0x5c: {Size.WORD: StructField("_Unk_5c", UnkPrimitiveMemory())},
                #0x60: {Size.WORD: StructField("_ExtraVars", AnonMemory(UnknownDataType))},
                #0x64: {Size.WORD: StructField("_ExtraVars+4", AnonMemory(UnknownDataType))},
                #0x68: {Size.WORD: StructField("_ExtraVars+8", AnonMemory(UnknownDataType))},
                #0x6c: {Size.WORD: StructField("_ExtraVars+0xc", AnonMemory(UnknownDataType))},
                #0x70: {Size.WORD: StructField("_ExtraVars+0x10", AnonMemory(UnknownDataType))},
                #0x74: {Size.WORD: StructField("_ExtraVars+0x14", AnonMemory(UnknownDataType))},
                #0x78: {Size.WORD: StructField("_ExtraVars+0x18", AnonMemory(UnknownDataType))},
                #0x7c: {Size.WORD: StructField("_ExtraVars+0x1c", AnonMemory(UnknownDataType))},
                #0x80: {Size.WORD: StructField("_ExtraVars+0x20", AnonMemory(UnknownDataType))},
                #0x84: {Size.WORD: StructField("_ExtraVars+0x24", AnonMemory(UnknownDataType))},
                #0x88: {Size.WORD: StructField("_ExtraVars+0x28", AnonMemory(UnknownDataType))}
            })
        return struct_fields

    def get_struct_offset_field(self, offset, fileline, size):
        total_offset = self.offset + offset.ref.value
        if math.isnan(total_offset):
            raise NotImplementedError("Context information: struct operation with NaN offset")
            
        if total_offset in self.basic_struct_fields:
            struct_field_possible_entries = self.basic_struct_fields[total_offset]
            if size in struct_field_possible_entries:
                return struct_field_possible_entries[size]
            elif Size.DEFAULT in struct_field_possible_entries:
                return struct_field_possible_entries[Size.DEFAULT]
            elif not (0x60 <= total_offset < 0x8c):
                global_fileline_error("Did not find size \"%s\" in struct for struct offset \"0x%x\"!" % (size, total_offset))
        if 0x60 <= total_offset < 0x8c:
            if total_offset == 0x60:
                self.basic_struct_fields[total_offset] = {size: StructField("_ExtraVars", AnonMemory(UnknownDataType))}
            elif 0x60 <= total_offset <= 0x69:
                self.basic_struct_fields[total_offset] = {size: StructField("_ExtraVars+%s" % (total_offset - 0x60), AnonMemory(UnknownDataType))}
            else:
                self.basic_struct_fields[total_offset] = {size: StructField("_ExtraVars+0x%x" % (total_offset - 0x60), AnonMemory(UnknownDataType))}
            return self.basic_struct_fields[total_offset][size]
        elif 0x90 <= total_offset < 0xd8:
            return Struct.barebones_struct_field
        else:
            global_fileline_error("Invalid struct offset \"%s\"!" % total_offset)

    @property
    def marked_accesses_case_1(self):
        return BattleObject._marked_accesses_case_1

    # @marked_accesses_case_1.setter
    # def marked_accesses_case_1(self, val):
        # BattleObject.marked_accesses_case_1 = val

    def get_prefix(self, offset):
        if offset < 0 or 0x4 <= offset < 0x90:
            return "oBattleObject"
        elif 0 <= offset < 0x4:
            return "oObjectHeader"
        else:
            global_fileline_error("Struct offset \"%s\" does not have prefix!" % offset)

    @property
    def struct_name(self):
        return "BattleObject"

class Stack(Pointer):
    __slots__ = ("datatypes",)
    def __init__(self, datatypes={}):
        super().__init__()
        self.datatypes = datatypes

    def load(self, size, fileline, offset=None):
        if offset is None:
            total_offset = self.offset
        else:
            total_offset = self.offset + offset.ref.value
        if math.isnan(total_offset):
            global_fileline_msg("StackWarning: Stack offset is NaN for load!")
            return new_unk_datatype_from_size(size)
        if total_offset % size.value != 0:
            global_fileline_error("Misaligned stack read detected (size: %s, offset=%s)!" % (size, total_offset))
        try:
            return self.datatypes[(total_offset, size)]
        except KeyError:
            if total_offset >= self.offset:
                global_fileline_msg("StackWarning: Stack read of (%s, %s) is likely valid (e.g. overloads with other datatype) but not in datatypes!" % (total_offset, size))
                return new_unk_datatype_from_size(size)
            else:
                global_fileline_error("Bad stack read of (%s, %s)! (stack size: %s)" % (total_offset, size, self.offset))

    # note: storing values may be risky. figure this out
    def store(self, datatype, size, fileline, offset=None):
        if offset is None:
            total_offset = self.offset
        else:
            total_offset = self.offset + offset.ref.value
        if math.isnan(total_offset):
            global_fileline_msg("StackWarning: Stack offset is NaN for store!")
            return
        if total_offset % size.value != 0:
            global_fileline_error("Misaligned stack write detected (size: %s, offset=%s)!" % (size, total_offset))

        self.datatypes[(total_offset, size)] = datatype

def new_unk_datatype_from_size(size):
    if size == Size.BYTE or size == Size.HWORD:
        return Primitive(size).wrap()
    else:
        return UnknownDataType().wrap()

if __name__ == "__main__":
    struct_fields = BattleObject.generate_basic_struct_fields()
    struct_fields[0x60][Size.BYTE] = StructField("_ExtraVars", AnonMemory(UnknownDataType))
    print(struct_fields)