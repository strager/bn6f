from enum import Enum
import re
import pathlib

import parser
from analyze_source import debug_print

class LineType(Enum):
    UNCOMMENTED = 0
    COMMENTED = 1

class SrcFile:
    __slots__ = ("_line_num", "_commented_lines", "_uncommented_lines", "_filename")
    def __init__(self, filename):
        self._line_num = 0
        self._commented_lines = []
        self._uncommented_lines = []
        # self._line_type = LineType.UNCOMMENTED
        self._filename = filename

    def __iter__(self):
        while self._line_num < len(self.lines):
            yield self.lines[self._line_num]
            self._line_num += 1

    """
    def __next__(self):
        if self._line_num < len(self.lines):
            self._line_num += 1
            return self.lines[self._line_num - 1]
        else:
            raise StopIteration
    """

    def __getitem__(self, index):
        return self.lines[index]

    def __len__(self):
        return len(self.lines)

    @property
    def cur_line(self):
        return self.lines[self._line_num]

    @property
    def line_num(self):
        return self._line_num

    @line_num.setter
    def line_num(self, value):
        self._line_num = value

    @property
    def lines(self):
        #if self._line_type == LineType.COMMENTED:
        #    return self._commented_lines
        #else:
        return self._uncommented_lines

    def set_commented_line(self, line, index):
        self._commented_lines[index] = line

    @property
    def commented_lines(self):
        return self._commented_lines

    @property
    def line_type(self):
        return self._line_type
    
    @line_type.setter
    def line_type(self, value):
        self._line_type = value

    def append_commented_and_uncommented_lines(self, commented_line, uncommented_line):
        self._commented_lines.append(commented_line)
        self._uncommented_lines.append(uncommented_line)
    
    @property
    def filename(self):
        return self._filename

class IterStr:
    __slots__ = ("str", "_index")
    def __init__(self, str):
        self.str = str

    def __iter__(self):
        self._index = 0
        return self

    def __next__(self):
        if self._index < len(self.str):
            self._index += 1
            return self.str[self._index - 1]
        else:
            raise StopIteration

    def next(self):
        return self.__next__()

    @property
    def index(self):
        return self._index

recursion_depth = 0
#scanned_files = {}

def recursive_scan_includes(filepath, scanned_files, syms=None, callbacks=None):
    global recursion_depth
    debug_print("recursion depth: %s | file: %s" % (recursion_depth, filepath))
    recursion_depth += 1
    
    in_block_comment = False

    with open(filepath, "r") as f:
        scanned_files[filepath] = SrcFile(filepath)
        for line_num, line in enumerate(f):
            include_file_list = re.findall(r"\t\.include \"([^\"]+)\"", line)
            if len(include_file_list) > 1:
                raise RuntimeError("More than one group found!")
            elif len(include_file_list) == 1:
                include_given_pathname = include_file_list[0]
                include_real_pathname = include_given_pathname
                if include_given_pathname.endswith(".inc"):
                    if pathlib.Path(include_given_pathname).is_file():
                        pass # already defined as default
                    elif pathlib.Path("include/" + include_given_pathname).is_file():
                        include_real_pathname = "include/" + include_given_pathname
                    else:
                        raise RuntimeError("Path specified by \"%s\" not found!" % include_given_pathname)

                if include_real_pathname not in scanned_files:
                    try:
                        recursive_scan_includes(include_real_pathname, scanned_files, syms, callbacks)
                    except IOError:
                        raise

            line = line.rstrip("\r\n")

            uncommented_line = ""
            in_line_comment = False
            iter_line = IterStr(line)
            # faster to do this naive check for most cases because "in" is native
            if not in_block_comment and "/*" not in line:
                slash_line_comment_index = line.find("//") * -1
                at_line_comment_index = line.find("@") * -1
                if at_line_comment_index == 1 or slash_line_comment_index == 1:
                    line_comment_index = min(slash_line_comment_index, at_line_comment_index) * -1
                else:
                    line_comment_index = max(slash_line_comment_index, at_line_comment_index) * -1

                if line_comment_index == -1:
                    uncommented_line = line
                else:
                    uncommented_line = line[:line_comment_index] + " " * (len(line) - line_comment_index - 1)
            else:
                for char in iter_line:
                    if in_block_comment:
                        uncommented_line += " "
                        if char == "*":
                            try:
                                char = iter_line.next()
                            except StopIteration:
                                break

                            uncommented_line += " "
                            if char == "/":
                                in_block_comment = False
                    elif char == "@":
                        uncommented_line += " " * (len(line) - iter_line.index - 1)
                        break
                    elif char == "/":
                        try:
                            char = iter_line.next()
                        except StopIteration:
                            break

                        if char == "/":
                            uncommented_line += "  " + " " * (len(line) - iter_line.index - 1)
                            break
                        elif char == "*":
                            uncommented_line += "  "
                            in_block_comment = True
                    else:
                        uncommented_line += char

            if syms is not None:
                label_name = parser.check_and_parse_colon_label(uncommented_line)
                if label_name is not None:
                    syms[label_name].filename = filepath
                    syms[label_name].line_num = line_num

            if callbacks is not None:
                for callback in callbacks:
                    callback(line, uncommented_line)
            scanned_files[filepath].append_commented_and_uncommented_lines(line, uncommented_line)

    recursion_depth -= 1
