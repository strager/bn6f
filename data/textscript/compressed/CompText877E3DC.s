	.include "charmap.inc"
	.include "include/macros/enum.inc"
	.include "include/bytecode/text_script.inc"

	.data

CompText877E3DC::
	.word 0x19C00

	text_archive_start

	def_text_script CompText877E3DC_unk0
	ts_mugshot_show 0x37
	ts_msg_open
	.string "No! There are a lot\n"
	.string "of Punishment Robots\n"
	.string "in the courtroom!"
	ts_key_wait 0x0
	ts_end

	def_text_script CompText877E3DC_unk1

	def_text_script CompText877E3DC_unk2

	def_text_script CompText877E3DC_unk3

	def_text_script CompText877E3DC_unk4

	def_text_script CompText877E3DC_unk5
	ts_check_flag 0x26, 0x11, 0x6, 0xFF
	ts_flag_set 0x26, 0x11
	ts_mugshot_show 0x3C
	ts_msg_open
	.string "I'M THE PROGRAM\n"
	.string "HIDDEN IN THE\n"
	.string "PUNISHMENT ROOM."
	ts_key_wait 0x0
	ts_clear_msg
	.string "NICE JOB FINDING\n"
	.string "ME. I MUST REWARD\n"
	.string "YOU FOR THAT."
	ts_key_wait 0x0
	ts_clear_msg
	ts_mugshot_hide
	ts_item_give_navi_cust_program 0x60, 0x1, 0x2
	ts_player_animate_object 0x18
	.string "Lan got:\n"
	.string "\""
	ts_print_navi_cust_program5 0x1, 0x80
	.string "\"!!"
	ts_key_wait 0x0
	ts_player_finish
	ts_player_reset_object
	ts_clear_msg
	ts_mugshot_show 0x3C
	.string "INSTALLING THAT\n"
	.string "WILL GIVE BIRTH\n"
	.string "TO MANY POEMS."
	ts_key_wait 0x0
	ts_end

	def_text_script CompText877E3DC_unk6
	ts_mugshot_show 0x3C
	ts_msg_open
	.string "JUST INSTALLING THAT\n"
	.string "IN NAVICUST WILL LET\n"
	.string "YOU READ POEMS."
	ts_key_wait 0x0
	ts_clear_msg
	.string "THE POEM PROGRAM IS\n"
	.string "A WONDERFUL PIECE OF\n"
	.string "PROGRAMMING."
	ts_key_wait 0x0
	ts_end

	