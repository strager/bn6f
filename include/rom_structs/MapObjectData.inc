
	.macro map_object_data_struct unk_0, sprite_index, unk_2, unk_3, unk_4, palette, unk_9, unk_a, unk_c, unk_e
	init_rom_struct map_object_data_struct
	u8 Unk_0, \unk_0 // loc=0x0
	u8 SpriteIndex, \sprite_index // loc=0x1
	u8 Unk_2, \unk_2 // loc=0x2
	u8 Unk_3, \unk_3 // loc=0x3
	u32 Unk_4, \unk_4 // loc=0x4
	u8 Palette, \palette // loc=0x8
	u8 Unk_9, \unk_9 // loc=0x9
	// MMBN3: bit index into event array (0x02000030), or -1 (0xffff) if
	// object should always show. event-bit-test routine at 0x08021d44.
	u16 Unk_A, \unk_a // loc=0xa
	u16 Unk_C, \unk_c // loc=0xc
	u16 Unk_E, \unk_e // loc=0xe
	u0 Size // loc=0x10
	.endm

	def_rom_struct_offsets map_object_data_struct, oMapObjectData

	// A sprite whose palette and tileset needs to be loaded into memory.
	// Used by uncompSprite_8002906 during overworld map loading.
	.macro sprite_load_data_struct sprite_type_offset, sprite_index
	init_rom_struct sprite_load_data_struct
	// Byte offset into the SpritePointersList array.
	u8 SpriteTypeOffset, \sprite_type_offset // loc=0x0
	u8 SpriteIndex, \sprite_index // loc=0x1
	u0 Size // loc=0x2
	.endm

	def_rom_struct_offsets sprite_load_data_struct, oSpriteLoadData
