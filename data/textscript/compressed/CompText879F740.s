	.include "charmap.inc"
	.include "include/macros/enum.inc"
	.include "include/bytecode/text_script.inc"

	.data

CompText879F740::
	.word 0x4D200

	text_archive_start

	def_text_script CompText879F740_unk0
	ts_check_flag 0x3C, 0x11, 0x4, 0xFF
	ts_check_flag 0x3A, 0x11, 0x1, 0xFF
	ts_flag_set 0x3A, 0x11
	ts_mugshot_show 0x43
	ts_msg_open
	.string "Hey! You...\n"
	.string "You look tough,\n"
	.string "huh?"
	ts_key_wait 0x0
	ts_clear_msg
	.string "Trying to hide it?\n"
	.string "That's not cool.\n"
	.string "You smell tough!!"
	ts_key_wait 0x0
	ts_clear_msg
	.string "How about showing\n"
	.string "me what you got?"
	ts_key_wait 0x0
	ts_clear_msg
	ts_mugshot_hide
	ts_position_option_horizontal 0x7
	ts_option 0x0, 0x11, 0x0
	ts_space 0x1
	.string " Yes  "
	ts_option 0x0, 0x0, 0x11
	ts_space 0x1
	.string " No"
	ts_select 0x6, 0x80, 0x2, 0xFF, 0xFF
	ts_clear_msg
	ts_mugshot_show 0x43
	.string "Ahhh,you're smarter\n"
	.string "than you look..."
	ts_key_wait 0x0
	ts_clear_msg
	.string "Must have figured\n"
	.string "out how strong I\n"
	.string "am..."
	ts_key_wait 0x0
	ts_end

	def_text_script CompText879F740_unk1
	ts_mugshot_show 0x43
	ts_msg_open
	.string "Yo,up for a fight\n"
	.string "with me?"
	ts_key_wait 0x0
	ts_clear_msg
	.string "Of course it'll be\n"
	.string "fair!!\n"
	.string "How bout it?"
	ts_key_wait 0x0
	ts_clear_msg
	ts_mugshot_hide
	ts_position_option_horizontal 0x7
	ts_option 0x0, 0x11, 0x0
	ts_space 0x1
	.string " Yes  "
	ts_option 0x0, 0x0, 0x11
	ts_space 0x1
	.string " No"
	ts_select 0x6, 0x80, 0x2, 0xFF, 0xFF
	ts_clear_msg
	ts_mugshot_show 0x43
	.string "Smart choice..."
	ts_key_wait 0x0
	ts_clear_msg
	.string "The kind of choice\n"
	.string "that saves you from\n"
	.string "a certain death..."
	ts_key_wait 0x0
	ts_end

	def_text_script CompText879F740_unk2
	ts_mugshot_show 0x43
	ts_msg_open
	.string "Time to face my\n"
	.string "Underhand technique,"
	ts_key_wait 0x0
	ts_clear_msg
	.string "honed by hours of\n"
	.string "training on the\n"
	.string "Undernet!"
	ts_key_wait 0x0
	ts_clear_msg
	.string "Can you really\n"
	.string "lay it on the\n"
	.string "line!?"
	ts_key_wait 0x0
	ts_clear_msg
	.string "Hyaaaaaa!!"
	ts_key_wait 0x0
	ts_flag_set 0x15, 0x17
	ts_flag_set 0x3B, 0x11
	ts_end

	def_text_script CompText879F740_unk3
	ts_mugshot_show 0x43
	ts_msg_open
	.string "My Underhanded\n"
	.string "technique was\n"
	.string "defeated..."
	ts_key_wait 0x0
	ts_clear_msg
	.string "Thinking I was\n"
	.string "strong made me too\n"
	.string "arrogant..."
	ts_key_wait 0x0
	ts_clear_msg
	.string "I saw myself when\n"
	.string "I lost to you..."
	ts_key_wait 0x0
	ts_clear_msg
	.string "I'm going to lead\n"
	.string "by example and teach\n"
	.string "you something nice."
	ts_key_wait 0x0
	ts_clear_msg
	.string "It's a lotto number.\n"
	.string "\"09256524\"."
	ts_key_wait 0x0
	ts_clear_msg
	.string "I guess I should\n"
	.string "reset my training\n"
	.string "routines,huh?"
	ts_key_wait 0x0
	ts_end

	def_text_script CompText879F740_unk4
	ts_mugshot_show 0x43
	ts_msg_open
	.string "A lotto number?\n"
	.string "Remember this one!\n"
	.string "\"09256524\"."
	ts_key_wait 0x0
	ts_end

	def_text_script CompText879F740_unk5

	def_text_script CompText879F740_unk6

	def_text_script CompText879F740_unk7

	def_text_script CompText879F740_unk8

	def_text_script CompText879F740_unk9

	def_text_script CompText879F740_unk10
	ts_mugshot_show 0x3C
	ts_msg_open
	.string "...THIS IS THE\n"
	.string "ELEVATOR COMP."
	ts_key_wait 0x0
	ts_clear_msg
	.string "I'VE GOT SOMETHING\n"
	.string "I WANT TO SAY,SO\n"
	.string "PLEASE LISTEN UP!"
	ts_key_wait 0x0
	ts_clear_msg
	.string "PLEASE QUIT PACKING\n"
	.string "INTO THE ELEVATOR\n"
	.string "LIKE A HERD OF"
	ts_key_wait 0x0
	ts_clear_msg
	.string "ELEPHANTS! YOU GUYS\n"
	.string "NEED TO LAY OFF THE\n"
	.string "FAST FOOD!!"
	ts_key_wait 0x0
	ts_clear_msg
	.string "*HUFF! HUFF!*\n"
	.string "I'M SORRY...\n"
	.string "I'M BETTER NOW."
	ts_key_wait 0x0
	ts_end

	