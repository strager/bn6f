.include "asm/asm06.inc"

.func
.thumb_func
sub_80595B8:
	push {R4-R7,lr}
	mov R7, R10
	ldr R0, off_8059614 // =off_8059294 
	ldr R1, [R7,#0x14]
	ldrb R2, [R5,#5]
	lsl r4, r2, #2
	add r0, r0, r4
	ldr R0, [R0]
	str R0, [R1,#0x14]
	ldrb R0, [R5,#4]
	ldrb R1, [R5,#5]
	bl sub_803037C
	ldrb R0, [R5,#4]
	ldrb R1, [R5,#5]
	bl sub_8030AA4
	ldr R0, [R5,#0x24]
	ldr R1, [R5,#0x28]
	ldr R2, [R5,#0x2C]
	ldrb R3, [R5,#4]
	ldrb R4, [R5,#5]
	bl sub_802FF4C
	bl loc_8030472
	ldr R0, off_8059618 // =unk_2037800 
	bl sub_80028D4
	ldrb R1, [R5,#5]
	lsl r1, r1, #2
	ldr R0, off_8059620 // =off_8059624 
	ldr R0, [R0,R1]
	bl sub_8002906
	bl chatbox_uncomp_803FD08 // () -> int
	bl sub_80596C8
	ldr R0, off_805961C // =off_8059DE8 
	ldrb R1, [R5,#5]
	lsl r1, r1, #2
	ldr R0, [R0,R1]
	str R0, [R5,#0x64]
	pop {R4-R7,pc}
	.balign 4, 0x00
off_8059614: .word off_8059294
off_8059618: .word unk_2037800
off_805961C: .word off_8059DE8
off_8059620: .word off_8059624
off_8059624: .word byte_8059638
	.word byte_8059646
	.word byte_805964E
	.word byte_805965A
	.word byte_8059662
byte_8059638: .byte 0x1C, 0x3D, 0x1C, 0x3E, 0x1C, 0x13, 0x1C, 0x32, 0x1C
	.byte 0x2F, 0x18, 0x1B, 0xFF, 0xFF
byte_8059646: .byte 0x1C, 0x35, 0x1C, 0x45, 0x1C, 0x46, 0xFF, 0xFF
byte_805964E: .byte 0x1C, 0x35, 0x1C, 0x4D, 0x1C, 0x2F, 0x18, 0x25, 0x18
	.byte 0x1C, 0xFF, 0xFF
byte_805965A: .byte 0x1C, 0x35, 0x1C, 0x40, 0x1C, 0x48, 0xFF, 0xFF
byte_8059662: .byte 0xFF, 0xFF
.endfunc // sub_80595B8

.func
.thumb_func
sub_8059664:
	push {lr}
	lsl r1, r1, #2
	ldr R0, off_8059674 // =off_8059678 
	ldr R0, [R0,R1]
	bl sub_8002354
	pop {pc}
	.balign 4, 0x00
off_8059674: .word off_8059678
off_8059678: .word off_805968C
	.word off_80596A0
	.word off_80596AC
	.word off_80596B4
	.word off_80596BC
off_805968C: .word off_8059378
	.word unk_80593B8
	.word unk_80593F8
	.word unk_8059438
	.word 0xFFFFFFFF
off_80596A0: .word unk_8059468
	.word unk_80594A8
	.word 0xFFFFFFFF
off_80596AC: .word unk_80594E8
	.word 0xFFFFFFFF
off_80596B4: .word unk_8059528
	.word 0xFFFFFFFF
off_80596BC: .word unk_8059558
	.word unk_8059588
	.word 0xFFFFFFFF
.endfunc // sub_8059664

.func
.thumb_func
sub_80596C8:
	push {lr}
	mov R0, R10
	ldr R0, [R0,#0x3C]
	ldrb R0, [R0,#5]
	lsl r0, r0, #2
	ldr R1, off_80596DC // =off_80596E0 
	ldr R0, [R1,R0]
	bl sub_8003570
	pop {pc}
off_80596DC: .word off_80596E0
off_80596E0:
	// <endpool> <endfile>
	.word dword_80596F4
	.word dword_805975C
	.word dword_8059A58
	.word dword_8059C00
	.word dword_8059D30
.endfunc // sub_80596C8

/*For debugging purposes, connect comment at any range!*/
