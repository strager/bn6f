	.include "charmap.inc"
	.include "include/macros/enum.inc"
	.include "include/bytecode/text_script.inc"

	.data

CompText8770D20::
	.word 0x1CD00

	text_archive_start

	def_text_script CompText8770D20_unk0

	def_text_script CompText8770D20_unk1

	def_text_script CompText8770D20_unk2

	def_text_script CompText8770D20_unk3

	def_text_script CompText8770D20_unk4

	def_text_script CompText8770D20_unk5
	ts_mugshot_show 0xD
	ts_msg_open
	.string "Mr.Mach gave notice\n"
	.string "that he would take\n"
	.string "a long break,but"
	ts_key_wait 0x0
	ts_clear_msg
	.string "that doesn't seem\n"
	.string "like him at all. Do\n"
	.string "you know anything?"
	ts_key_wait 0x0
	ts_clear_msg
	.string "Hmm... But why\n"
	.string "would you know..."
	ts_key_wait 0x0
	ts_end

	def_text_script CompText8770D20_unk6
	ts_mugshot_show 0xE
	ts_msg_open
	.string "The Teachers' Room\n"
	.string "is dark without\n"
	.string "Mr.Mach around..."
	ts_key_wait 0x0
	ts_clear_msg
	.string "He is our \"mood\n"
	.string "maker\"..."
	ts_key_wait 0x0
	ts_end

	def_text_script CompText8770D20_unk7

	def_text_script CompText8770D20_unk8

	def_text_script CompText8770D20_unk9

	def_text_script CompText8770D20_unk10
	ts_msg_open
	.string "A CopyBot..."
	ts_key_wait 0x0
	ts_clear_msg
	.string "It got damaged by an\n"
	.string "attack in battle...\n"
	.string "It can't move..."
	ts_key_wait 0x0
	ts_end

	def_text_script CompText8770D20_unk11
	ts_check_flag 0x7C, 0xE, 0xA, 0xFF
	ts_mugshot_show 0x43
	ts_msg_open
	.string "You!! Don't run away\n"
	.string "from here!!"
	ts_key_wait 0x0
	ts_flag_set 0x7B, 0xE
	ts_flag_set 0x15, 0x17
	ts_end

	def_text_script CompText8770D20_unk12
	ts_check_flag 0x7E, 0xE, 0xA, 0xFF
	ts_mugshot_show 0x43
	ts_msg_open
	.string "I found you Hikari!"
	ts_key_wait 0x0
	ts_flag_set 0x7D, 0xE
	ts_flag_set 0x15, 0x17
	ts_end

	