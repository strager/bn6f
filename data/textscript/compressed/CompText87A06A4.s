	.include "charmap.inc"
	.include "include/macros/enum.inc"
	.include "include/bytecode/text_script.inc"

	.data

CompText87A06A4::
	.word 0x8100

	text_archive_start

	def_text_script CompText87A06A4_unk0
	ts_mugshot_show 0x3C
	ts_msg_open
	.string "VROOOM! VROOOM!\n"
	.string "VROOOM! VROOOM!"
	ts_key_wait 0x0
	ts_clear_msg
	.string "THE ROTATION OF THE\n"
	.string "FAN IS PERFECT AGAIN\n"
	.string "TODAY!"
	ts_key_wait 0x0
	ts_clear_msg
	.string "VROOOM! VROOOM!\n"
	.string "VROOOM! VROOOM!"
	ts_key_wait 0x0
	ts_end

	