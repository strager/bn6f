.include "asm/asm12.inc"

.func
.thumb_func
sub_806D8F8:
	push {R4-R7,lr}
	mov R7, R10
	ldr R0, off_806D950 // =off_806D6B0 
	ldr R1, [R7,#0x14]
	ldrb R2, [R5,#5]
	lsl r4, r2, #2
	add r0, r0, r4
	ldr R0, [R0]
	str R0, [R1,#0x14]
	bl sub_806DA58
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
	ldr R0, off_806D954 // =unk_2037800 
	bl sub_80028D4
	ldrb R1, [R5,#5]
	lsl r1, r1, #2
	ldr R0, off_806D958 // =off_806D95C 
	ldr R0, [R0,R1]
	bl sub_8002906
	bl chatbox_uncomp_803FD08 // () -> int
	bl sub_806DCD4
	bl sub_8034FB8
	pop {R4-R7,pc}
off_806D950: .word off_806D6B0
off_806D954: .word unk_2037800
off_806D958: .word off_806D95C
off_806D95C: .word dword_806D99C
	.word 0x806D9A2, 0x806D9A6, 0x806D9B0, 0x806D9B8, 0x806D9BC
	.word 0x806D9C2, 0x806D9CA, 0x806D9D2, 0x806D9D6, 0x806D9DC
	.word 0x806D9E0, 0x806D9E6, 0x806D9EC, 0x806D9F2, 0x806D9F8
dword_806D99C: .word 0x121C061C, 0x61CFFFF, 0x1B1CFFFF, 0x61C1C1C, 0xFFFF121C
	.word 0x61C291C, 0xFFFF121C, 0xFFFF061C, 0x121C061C, 0x291CFFFF
	.word 0x121C061C, 0x5E1CFFFF, 0x121C061C, 0x61CFFFF, 0x5C1CFFFF
	.word 0xFFFF061C, 0xFFFF061C, 0x61C5C1C, 0x5C1CFFFF, 0xFFFF061C
	.word 0x61C5C1C, 0x5C1CFFFF, 0xFFFF061C, 0xFFFF061C
.endfunc // sub_806D8F8

.func
.thumb_func
sub_806D9FC:
	push {lr}
	lsl r1, r1, #2
	ldr R0, off_806DA0C // =off_806DA10 
	ldr R0, [R0,R1]
	bl sub_8002354
	pop {pc}
	.balign 4, 0x00
off_806DA0C: .word off_806DA10
off_806DA10: .word off_806DA50
	.word off_806DA50
	.word off_806DA50
	.word off_806DA50
	.word off_806DA50
	.word off_806DA50
	.word off_806DA50
	.word off_806DA50
	.word off_806DA50
	.word off_806DA50
	.word off_806DA50
	.word off_806DA50
	.word off_806DA50
	.word off_806DA50
	.word off_806DA50
	.word off_806DA50
off_806DA50: .word byte_806D820
	.word 0xFFFFFFFF
.endfunc // sub_806D9FC

.func
.thumb_func
sub_806DA58:
	push {R4-R7,lr}
	mov R5, R10
	ldr R5, [R5,#0x3C]
	ldrb R1, [R5,#5]
	lsl r1, r1, #4
	ldr R7, off_806DA8C // =off_806DA90 
	add r7, r7, r1
	ldr R0, [R7]
	ldr R1, [R7,#4]
	ldr R2, [R7,#8]
	bl sub_800195C
	bl sub_8001780
	ldr R1, [R7,#0xC]
	orr R0, R1
	bl sub_8001778
	ldr R0, off_806DB90 // =off_806DB94 
	ldrb R1, [R5,#5]
	lsl r1, r1, #2
	ldr R0, [R0,R1]
	bl sub_80304E8
	pop {R4-R7,pc}
	.balign 4, 0x00
off_806DA8C: .word off_806DA90
off_806DA90: .word locret_8001AB4+1
	.word sub_80019D0+1
	.word 0x3005CD9, 0x800, 0x8001AB5, 0x80019D1, 0x3005CD9
	.word 0x800, 0x8001AB5, 0x80019D1, 0x3005CD9, 0x800
	.word 0x8001AB5, 0x80019D1, 0x3005CD9, 0x800, 0x8001AB5
	.word 0x80019D1, 0x3005CD9, 0x800, 0x8001AB5, 0x80019D1
	.word 0x3005CD9, 0x800, 0x8001AB5, 0x80019D1, 0x3005CD9
	.word 0x800, 0x8001AB5, 0x80019D1, 0x3005CD9, 0x800
	.word 0x8001AB5, 0x80019D1, 0x3005CD9, 0x800, 0x8001AB5
	.word 0x80019D1, 0x3005CD9, 0x800, 0x8001AB5, 0x80019D1
	.word 0x3005CD9, 0x800, 0x8001AB5, 0x80019D1, 0x3005CD9
	.word 0x800, 0x8001AB5, 0x80019D1, 0x3005CD9, 0x800
	.word 0x8001AB5, 0x80019D1, 0x3005CD9, 0x800, 0x8001AB5
	.word 0x80019D1, 0x3005CD9, 0x800, 0x8001AB5, 0x80019D1
	.word 0x3005CD9, 0x800
off_806DB90: .word off_806DB94
off_806DB94: .word off_806DBD4
	.word off_806DBF0
	.word off_806DBD4
	.word off_806DBD4
	.word off_806DBD4
	.word off_806DBD4
	.word off_806DBD4
	.word off_806DBD4
	.word off_806DBD4
	.word off_806DBD4
	.word off_806DBF0
	.word off_806DBD4
	.word off_806DBD4
	.word off_806DBD4
	.word off_806DBD4
	.word off_806DBF0
off_806DBD4: .word off_8616598
	.word 0x6008020, 0x8616634, 0x1800, 0x8616760, 0x3001960
	.word 0x20
off_806DBF0: .word off_8616598
	.word 0x6008020, 0x8616634, 0x1800, 0x8616EC4, 0x3001960
	.word 0x20
.endfunc // sub_806DA58

.func
.thumb_func
sub_806DC0C:
	push {R4-R7,lr}
	push {r0,r1}
	mov R0, #0
	mov R1, #0x8E
	bl setFlag_2001C88_entry // (u8 entryIdx, u8 byteFlagIdx) -> void
	mov R0, #0
	mov R1, #0x8F
	bl clearFlag_2001C88_entry // (u8 entryIdx, u8 byteFlagIdx) -> void
	pop {r0,r1}
	mov R5, R10
	ldr R5, [R5,#0x3C]
	ldrb R6, [R5,#5]
	lsl r6, r6, #2
	ldr R7, off_806DC34 // =off_806DC38 
	ldr R7, [R7,R6]
	mov LR, PC
	bx r7
	pop {R4-R7,pc}
off_806DC34: .word off_806DC38
off_806DC38: .word locret_806DC78+1
	.word sub_806DC7A+1
	.word locret_806DC78+1
	.word locret_806DC78+1
	.word locret_806DC78+1
	.word locret_806DC78+1
	.word locret_806DC78+1
	.word locret_806DC78+1
	.word locret_806DC78+1
	.word locret_806DC78+1
	.word sub_806DC98+1
	.word locret_806DC78+1
	.word locret_806DC78+1
	.word locret_806DC78+1
	.word locret_806DC78+1
	.word sub_806DCB6+1
.endfunc // sub_806DC0C

locret_806DC78:
	mov PC, LR
.func
.thumb_func
sub_806DC7A:
	push {lr}
	cmp R0, #2
	bne loc_806DC86
	cmp R1, #9
	bne loc_806DC86
	pop {pc}
loc_806DC86:
	mov R0, #0
	mov R1, #0x8E
	bl clearFlag_2001C88_entry // (u8 entryIdx, u8 byteFlagIdx) -> void
	// entryIdx
	mov R0, #0
	// byteFlagIdx
	mov R1, #0x8F
	bl setFlag_2001C88_entry // (u8 entryIdx, u8 byteFlagIdx) -> void
	pop {pc}
.endfunc // sub_806DC7A

.func
.thumb_func
sub_806DC98:
	push {lr}
	cmp R0, #4
	bne loc_806DCA4
	cmp R1, #0
	bne loc_806DCA4
	pop {pc}
loc_806DCA4:
	mov R0, #0
	mov R1, #0x8E
	bl clearFlag_2001C88_entry // (u8 entryIdx, u8 byteFlagIdx) -> void
	// entryIdx
	mov R0, #0
	// byteFlagIdx
	mov R1, #0x8F
	bl setFlag_2001C88_entry // (u8 entryIdx, u8 byteFlagIdx) -> void
	pop {pc}
.endfunc // sub_806DC98

.func
.thumb_func
sub_806DCB6:
	push {lr}
	cmp R0, #5
	bne loc_806DCC2
	cmp R1, #0
	bne loc_806DCC2
	pop {pc}
loc_806DCC2:
	mov R0, #0
	mov R1, #0x8E
	bl clearFlag_2001C88_entry // (u8 entryIdx, u8 byteFlagIdx) -> void
	// entryIdx
	mov R0, #0
	// byteFlagIdx
	mov R1, #0x8F
	bl setFlag_2001C88_entry // (u8 entryIdx, u8 byteFlagIdx) -> void
	pop {pc}
.endfunc // sub_806DCB6

.func
.thumb_func
sub_806DCD4:
	push {lr}
	mov R0, R10
	ldr R0, [R0,#0x3C]
	ldrb R0, [R0,#5]
	lsl r0, r0, #2
	ldr R1, off_806DCE8 // =pt_806DCEC 
	ldr R0, [R1,R0]
	bl sub_8003570
	pop {pc}
off_806DCE8: .word pt_806DCEC
pt_806DCEC:
	// <endpool> <endfile>
	.word dword_806DD2C
	.word dword_806DD44
	.word dword_806DD84
	.word dword_806DD9C
	.word dword_806DDB4
	.word dword_806DDCC
	.word dword_806DDE4
	.word dword_806DDFC
	.word dword_806DE3C
	.word dword_806DE54
	.word dword_806DE80
	.word dword_806DEC0
	.word dword_806DEEC
	.word dword_806DF18
	.word dword_806DF44
	.word dword_806DF70
.endfunc // sub_806DCD4

/*For debugging purposes, connect comment at any range!*/
