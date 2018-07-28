#ifndef S_02009F40_H
#define S_02009F40_H

#include "inttypes.h"


typedef struct {
	u8 invisCtrlSwitch;     // loc=0x0
	u8 unk_01;              // loc=0x1
	u8 unk_02;              // loc=0x2
		u8 pad_03[0x01];
	u32 unk_04;             // loc=0x4
	u8 contTrigger;         // loc=0x8
	u8 walkingFlag;         // loc=0x9
	u8 unk_0A;              // loc=0xA
		u8 pad_0B[0x01];
	u8 collision;           // loc=0xC
		u8 pad_0D[0x03];
	u8 unk_10;              // loc=0x10
	u8 unk_11;              // loc=0x11
		u8 pad_12[0x02];
	u8 animationSelect;     // loc=0x14
	u8 ROAnimationSel;      // loc=0x15
		u8 pad_16[0x06];
	u32 x;                  // loc=0x1C
	u32 y;                  // loc=0x20
	u32 unk_24;             // loc=0x24
	u32 RO_x;               // loc=0x28
	u32 RO_y;               // loc=0x2C
		u8 pad_30[0x1C];
	u16 unk_4C;             // loc=0x4C
		u8 pad_4E[0x08];
	u8 unk_56;              // loc=0x56
		u8 pad_57[0x51];
	u32 *unk_A8;            // loc=0xA8
	u32 *unk_AC;            // loc=0xAC
		u8 pad_B0[0x100];
	// size=0x1B0
}OWPlayer;


// Accesses (TODO: MMBN6F)
/*
Format: <subroutine_Addr>::<Address of access> <type>(<value>)
If an access has eben shown before: subAddr, type and register are not shown.
Writes:
    A: (Entering a submenu)
    08003B86::08003B9A u8(0x00)
    B: (Exiting a submenu)
    08003B4C::08003B6E u8(0x00), 08003B4C::08003B72 u8(0x01) u32(0x1C) u32(0x20) u32(0x24) u32(0x04)
    08003B4C::08003B7E u32(0x08), 0809F59C::0809F5B2 u32(0x1C), 0809F59C::0809F5B6 u32(0x20),
    08003B4C::0809F5BA u32(0x24), 0809E7A8::0809E7AC u8(0x00), 0809E7A8::0809E7F6 u8(0x14),
    0809E7A8::0809E7FA u8(0x15), 0809E7A8::0809E808 u8(0x08) CONFLICT, 0809E7A8::0809E828 u8(0x11),
    0809E9A8::0809E9B6 u8(0x14), 0809E9A8::0809E9BA u8(0xA),
    C: (U/D/L/R)
    0809EF18::0809EFBC u16(0x4C), 0809EF18::0809EFC6 u8(0x10), 0809F53C::0809F540 u8(0x0A),
    0809F53C::0809F54C u8(0x09), 0809F4F8::0809F520 u8(0x56), 0809EF18::0809EF4C u8(0x11),
    ::0809EFBC, ::0809F54C, ::0809F510, ::0809E9B6, ::0809E9BA, ::0809E71C u8(0x15),
    D0: (BEFORE Jacking in chat)
    ::0809F540, ::0809F54C, ?::0809F7EC u8(0x10), 0809ED38::0809ED5C u8(0x14),
    ::0809E71C
    D1: (Jacking in AFTER chat)
    ::0809ED5C, ::0809E71C
    D2: (BEFORE Jacking in animation)
    0809ED38::0809ED7A u32(0x08), A, B?
---
*/

// Accesses (TODO: MMBN6F)
/*
	name=OWPlayer, size=0x1B0
	08031686?::080316FA u16(0x1C+0x02), 08031686?::080316FE u16(0x1C+0x06), 08031686?::0803171A u16(0x1C+0x02),
	08031686?::0803171E u16(0x1C+0x06), 08003BA2::08003BBA u8(0x00), 08003BA2::08003BD2 u8(0x01),
	0809E6D4::0809E70C u8(0x08), 0809E880::0809E88A u8(0x13), 0809E880::0809E88C u8(0x13),
	0809E880::0809E88E u8(0x0E), 0809E880::0809E890 u8(0x0F), 0809E880::0809E892 u8(0x0D),
	0809E880::0809E894 u8(0x0E), 0809E880::0809E896 u8(0x0D), 0809E880::0809E898 u32(0x1C),
	0809E880::0809E89A u32(0x20), 0809E880::0809E89C u32(0x24), 0809E880::0809E89E u32(0x28),
	0809E880::0809E8A0 u32(0x2C), 0809E880::0809E8A2 u32(0x30), 0809E880::0809E8A6 u8(0x09),
	0809EF18::0809EF4A u8(0x10), 0809EF18::0809EF4C u8(0x11), 0809EF18::0809EFBC u16(0x4C),
	0809E9A8::0809E9AE u8(0x0A), 0809F00C?::0809F032 u16(0x4C), 0809F03A::0809F03E u16(0x4C),
	0809F40C::0809F422 u8(0x07), 0809F44E?::0809F44E u8(0x0F), 0809F460::0809F464 u8(0x09),
	0809E880::0809E8AE u8(0x0C), 08030CAC::08030CB2 u16(0x1C+0x0E), 08030CAC::08030CB6 u16(0x1C+0x12),
	08030CAC::08030CBE u16(0x1C+0x02), 08030CAC::08030CC2 u16(0x1C+0x0E), 08030CAC::08030CD0 u16(0x1C+0x06),
	08030CAC::08030CD4 u16(0x1C+0x12), 08030CAC::08030D96 u16(0x1C+0x02), 08030CAC::08030D9A u16(0x1C+0x06),
	0809F0FC::0809F102 u32(0x34+0x00), 0809F0FC::0809F106 u32(0x1C), 0809F0FC::0809F10C u32(0x20),
	0809F0FC::0809F112 u32(0x24), 0809F098::0809F0E8 u32(0x34), 0809F098::0809F0EC u32(0x48),
	0809F098::0809F0F0 u32(0x50), 0809E880::0809E902 u8(0x17), 0809E880::0809E91C u32(0x24),
	0809E880::0809E934 u8(0x16), 08002E14?::08002E14 u8(0x02), 08002E14?::08002E1E u8(0x90+0x15),
	08002E14?::08002E26 u8(0x90+0x15), 0809F4D8::0809F4DC u32(0x1C), 0809F4D8::0809F4DE u32(0x28),
	0809F4D8::0809F4E4 u32(0x20), 0809F4D8::0809F4E6 u32(0x2C), 0809F4D8::0809F4EC u32(0x24),
	0809F4D8::0809F4EE u32(0x30), 0809F4F8::0809F4FA u8(0x09), 0809F4F8::0809F510 u16(0x56),
	0809E6D4::0809E714 u8(0x14), 0809E6D4::0809E716 u8(0x15), 08002EE8?::08002EE8 u8(0x02),
	08002EE8?::08002EF2 u16(0x90+0x06), 08002D80?::08002D80 u8(0x02), 08002D80?::08002D88 u8(0x90+0x04),
	080026C4::080026C6 u8(0x02), 03006792::03006794 u8(0x90+0x01), 03006792::03006798 u8(0x90+0x01),
	03006792::0300679E u8(0x90+0x03), 03006792::030067C0 u32(0x90+0x1C), 03006792::030067EE u8(0x90+0x01),
	03006792::030067F8 u32(0x90+0x20), 03006792::030067FE u32(0x90+0x1C), 03006792::03006802 u32(0x90+0x18),
	03006792::0300680E u8(0x90+0x05), 08030126?::08030128 u32(0x1C+0x00), 08030126?::0803012C u32(0x1C+0x04),
	08030126?::08030130 u32(0x1C+0x08), 08003BF4::08003C04 u8(0x00), 030061E8::030061EE u8(0x00),
	030061E8::030061F6 u8(0x02), 0300631C::03006320 u8(0x90+0x03), 0300631C::03006336 u32(0x1C+0x08),
	0300631C::0300633E u32(0x1C+0x00), 0300631C::03006346 u32(0x1C+0x04), 0300631C::03006352 u16(0x90+0x0C),
	0300631C::03006368 u16(0x90+0x0A), 0300631C::0300636A u32(0x1C+0x08), 0300631C::03006376 u8(0x90+0x0E),
	0300631C::03006384 u8(0x90+0x0F), 030061E8::0300621A u8(0x90+0x03), 030061E8::03006226 u8(0x90+0x13),
	030061E8::03006234 u8(0x90+0x13), 030061E8::03006240 u32(0x90+0x20), 030061E8::03006246 u32(0x90+0x1C),
	030061E8::0300624A u32(0x90+0x18), 030061E8::030062CC u8(0x90+0x03), 030061E8::030062FC u8(0x90+0x03),
	030061E8::030062FE u32(0x90+0x28), 03006028::0300602A u8(0x02), 03006028::03006032 u8(0x90+0x03),
	03006028::03006038 u8(0x90+0x03), 03006028::03006052 u32(0x90+0x1C), 03006028::03006056 u32(0x90+0x18),
	03006028::03006062 u16(0x90+0x08), 03006028::03006090 u16(0x90+0x08), 03006028::03006096 u32(0x90+0x24),
	03006028::030060BE u8(0x90+0x15), 03006028::030060CA u8(0x90+0x03), 03006108::0300610A u32(0x90+0x1C),
	03006108::03006110 u32(0x90+0x18), 03006108::03006114 u8(0x90+0x04), 03006108::03006116 u8(0x90+0x05),
	03006108::0300611E u16(0x90+0x06), 03006028::030060D6 u8(0x90+0x15), 03006028::030060E0 u8(0x90+0x15),
	03006440::03006442 u8(0x90+0x03), 03006452?::03006460 u32(0x90+0x30), 03006452?::03006466 u32(0x90+0x20),
	03006452?::0300646C u32(0x90+0x1C), 03006452?::03006470 u32(0x90+0x18), 03006452?::03006478 u32(0x90+0x28),
	03006452?::0300647C u32(0x90+0x2C), 03006452?::03006482 u32(0x90+0x28), 03006452?::03006484 u8(0x90+0x16),
	03006452?::03006498 u8(0x90+0x16), 03006452?::0300649A u8(0x90+0x03), 03006452?::030064BC u32(0x90+0x28),
	03006452?::030064C0 u32(0x90+0x28), 03006452?::030064C6 u32(0x90+0x10), 03006452?::030064C8 u8(0x90+0x16),
	0300658A?::030065A6 u8(0x90+0x13), 0300658A?::030065C4 u8(0x90+0x13), 03006452?::030064DE u16(0x90+0x0C),
	03006452?::03006500 u8(0x90+0x0E), 03006452?::03006514 u16(0x90+0x14), 03006452?::03006528 u16(0x90+0x08),
	03006452?::0300653E u16(0x90+0x0A), 03006452?::03006564 u8(0x90+0x03), 03006452?::03006584 u32(0x90+0x28),
	0809EF18::0809EFC6 u8(0x10), 0809F53C::0809F540 u8(0x0A), 0809F53C::0809F542 u8(0x09),
	0809F54C?::0809F54C u8(0x09), 0809F098::0809F0BA u8(0x10), 0809F4F8::0809F516 u8(0x56),
	0809F4F8::0809F518 u8(0x10), 0809F4F8::0809F520 u8(0x56), 0809EB52::0809EB70 u8(0x10),
	0809EB52::0809EB72 u8(0x11), 0809EB52::0809EB80 u8(0x0A), 0809EBF4::0809EC06 u8(0x10),
	0809EBF4::0809EC3A u32(0x38), 0809EBF4::0809EC3E u32(0x3C), 0809EBF4::0809EC42 u8(0x14),
	0809EBF4::0809EC46 u8(0x0A), 0809E6D4::0809E71C u8(0x15), 08002DA4?::08002DA4 u8(0x02),
	08002DA4?::08002DAC u8(0x90+0x00), 080026A4::080026A6 u8(0x02), 03006730::03006732 u8(0x90+0x03),
	03006730::0300675A u8(0x90+0x00), 03006730::0300675E u32(0x90+0x18), 03006730::03006764 u32(0x90+0x1C),
	03006730::0300676E u32(0x90+0x20), 03006730::03006772 u8(0x90+0x01), 03006730::03006776 u8(0x90+0x02),
	03006730::03006778 u32(0x90+0x20), 03006730::0300677E u32(0x90+0x1C), 03006730::03006782 u32(0x90+0x18),
	03006730::0300678E u8(0x90+0x05), 03006028::0300609E u32(0x90+0x24), 03006028::030060A8 u16(0x90+0x08),
	0809EB52::0809EB7A u8(0x0A), 0809F304::0809F308 u16(0x18), 0809F304::0809F316 u32(0x50),
	0809EC68::0809EC72 u32(0x38), 0809EC68::0809EC74 u32(0x1C), 0809EC68::0809EC78 u32(0x1C),
	0809EC68::0809EC7A u32(0x3C), 0809EC68::0809EC7C u32(0x20), 0809EC68::0809EC80 u32(0x20),
	0809EC68::0809EC84 u8(0x13), 08030CAC::08030CEE u16(0x1C+0x0E), 08030CAC::08030CF2 u16(0x1C+0x02),
	08030CAC::08030CF6 u16(0x1C+0x12), 0809E880::0809E956 u8(0x13), 08030CAC::08030D66 u16(0x1C+0x12),
	08030CAC::08030D6A u16(0x1C+0x06), 08030CAC::08030D6E u16(0x1C+0x0E), 03006792::030067CE u32(0x90+0x1C),
	03006792::030067D0 u32(0x90+0x18), 03006792::030067DA u32(0x90+0x20), 03006792::030067DE u8(0x90+0x01),
	03006792::030067E2 u8(0x90+0x02), 0809EA14::0809EA1E u8(0x10), 0809EA14::0809EA20 u8(0x11),
	0809EA14::0809EA2C u8(0x0A), 0809EA98::0809EAAA u8(0x10), 0809EA98::0809EAD4 u32(0x38),
	0809EA98::0809EAD8 u32(0x3C), 0809EA98::0809EADC u8(0x14), 0809EA98::0809EAE0 u8(0x0A),
	0809EA14::0809EA86 u8(0x13), 0809EA14::0809EA88 u8(0x13), 0809EAFC::0809EB2C u8(0x13),
	0809EAFC::0809EB2E u32(0x38), 0809EAFC::0809EB32 u32(0x1C), 0809EAFC::0809EB36 u32(0x1C),
	0809EAFC::0809EB38 u32(0x3C), 0809EAFC::0809EB3C u32(0x20), 0809EAFC::0809EB40 u32(0x20),
	08030CAC::08030D2A u16(0x1C+0x12), 08030CAC::08030D2E u16(0x1C+0x06), 08030CAC::08030D32 u16(0x1C+0x0E),
	08031A7A::08031AA8 u16(0x1C+0x0A), 08034CB6::08034CFE u32(0x1C), 08034CB6::08034D00 u32(0x20),
	08034CB6::08034D02 u32(0x24), 0809F600::0809F60A u32(0x1C), 0809F600::0809F60E u32(0x20),
	0809F600::0809F612 u32(0x24), 0809F600::0809F62A u8(0x10), 0809F7E6?::0809F7EC u8(0x10),
	0809ED38::0809ED3C u32(0x1C), 0809ED38::0809ED3E u32(0x20), 0809ED38::0809ED40 u32(0x24),
	0809ED38::0809ED42 u32(0x28), 0809ED38::0809ED44 u32(0x2C), 0809ED38::0809ED46 u32(0x30),
	0809ED38::0809ED4A u32(0x1C), 0809ED38::0809ED4E u32(0x20), 0809ED38::0809ED52 u32(0x24),
	0809ED38::0809ED5C u8(0x14), 0809ED38::0809ED7C u8(0x0C), 0809ED38::0809ED90 u32(0x1C),
	0809ED38::0809ED94 u32(0x20), 0809ED38::0809ED98 u32(0x24), 0809ED38::0809EDA2 u8(0x17),
	0809ED38::0809EDBC u32(0x24), 0809ED38::0809EDBE u8(0x16), 0809F6E6?::0809F6EC u32(0x1C),
	0809F6E6?::0809F6EE u32(0x20), 0809F6E6?::0809F6F0 u32(0x24), 08002DEA?::08002DEA u8(0x02),
	08002DEA?::08002DF2 u8(0x90+0x02), 08002DEA?::08002DF4 u8(0x90+0x01), 08002DEA?::08002DFE u8(0x90+0x00),
	08002DEA?::08002E00 u8(0x90+0x00), 0809ED38::0809ED7A u32(0x08), 08003B86::08003B8C u8(0x03),
	08003B86::08003B9A u8(0x00), 08002D52::08002D54 u8(0x02), 08002D5E::08002D60 u8(0x90+0x11),
	08005C04::08005C64 u32(0x1C), 08005C04::08005C66 u32(0x20), 08005C04::08005C68 u32(0x24),
	08005C04::08005C6A u8(0x10), 08003B4C::08003B6E u8(0x00), 08003B4C::08003B72 u8(0x01),
	08003B4C::08003B74 u32(0x1C), 08003B4C::08003B76 u32(0x20), 08003B4C::08003B78 u32(0x24),
	08003B4C::08003B7A u32(0x04), 08003B4C::08003B7E u32(0x08), 0809F59C::0809F5B2 u32(0x1C),
	0809F59C::0809F5B6 u32(0x20), 0809F59C::0809F5BA u32(0x24), 0809F59C::0809F5BE u8(0x10),
	0809E7A8::0809E7AC u8(0x00), 080026E4::080026E6 u8(0x00), 080026E4::080026EC u8(0x00),
	080026E4::080026EE u8(0x02), 08002722?::0800272E u32(0x90+0x18), 08002722?::08002732 u8(0x90+0x03),
	08002722?::08002734 u8(0x90+0x00), 08002722?::08002736 u32(0x90+0x24), 08002722?::08002738 u8(0x90+0x04),
	08002722?::0800273A u16(0x90+0x0A), 08002722?::0800273C u16(0x90+0x06), 08002722?::0800273E u32(0x90+0x2C),
	08002722?::08002740 u16(0x90+0x10), 08002722?::08002742 u16(0x90+0x12), 08002722?::08002744 u8(0x90+0x14),
	08002722?::08002746 u8(0x90+0x05), 08002722?::08002748 u32(0x90+0x30), 08002722?::0800274A u32(0x90+0x34),
	08002722?::0800274E u32(0x90+0x28), 08002722?::08002752 u8(0x90+0x15), 08002722?::08002756 u16(0x90+0x16),
	080026E4::0800271E u8(0x90+0x03), 0809E7A8::0809E7F6 u8(0x14), 0809E7A8::0809E7FA u8(0x15),
	08002F90?::08002F90 u8(0x02), 08002F90?::08002F98 u8(0x90+0x03), 08002F90?::08002FA2 u8(0x90+0x03),
	0809E7A8::0809E808 u8(0x08), 0809E7A8::0809E816 u8(0x17), 0809E7A8::0809E818 u8(0x0C),
	0809E7A8::0809E81C u8(0x16), 0809E7A8::0809E81E u8(0x10), 0809E7A8::0809E824 u8(0x10),
	0809E7A8::0809E828 u8(0x11), 0809E7A8::0809E82E u16(0x4C), 0809E7A8::0809E832 u16(0x4E),
	0809E7A8::0809E834 u32(0x38), 0809E7A8::0809E836 u32(0x3C), 0809E7A8::0809E838 u32(0x40),
	0809E7A8::0809E83A u32(0x44), 0809E7A8::0809E83C u8(0x0D), 0809E7A8::0809E83E u8(0x0E),
	0809E7A8::0809E840 u8(0x0F), 0809E7A8::0809E842 u16(0x18), 0809E7A8::0809E84A u32(0x1C),
	0809E7A8::0809E84C u32(0x20), 0809E7A8::0809E84E u32(0x24), 0809E7A8::0809E850 u32(0x28),
	0809E7A8::0809E852 u32(0x2C), 0809E7A8::0809E854 u32(0x30), 0809E9A8::0809E9B4 u8(0x10),
	0809E9A8::0809E9B6 u8(0x14), 0809E9A8::0809E9BA u8(0x0A), 0809F40C::0809F41E u8(0x07),
	08002D14::08002D16 u8(0x02), 08002D20::08002D22 u8(0x90+0x11), 08002D20::08002D32 u8(0x90+0x11),
	08002D20::08002D38 u8(0x90+0x11), 08002D20::08002D3C u8(0x90+0x13), 08002D20::08002D46 u8(0x90+0x13),
	08002D5E::08002D6A u8(0x90+0x11), 08002D5E::08002D6C u8(0x90+0x13), 08002D5E::08002D78 u8(0x90+0x13),
	0809F98A?::0809F990 u8(0x00), 0809F98A?::0809F996 u8(0x00), 08003BF4::08003C36 u32(0x90+0x24),
	0809F97A?::0809F980 u8(0x00), 0809F97A?::0809F986 u8(0x00), 0809F7F0?::0809F7F6 u8(0x10),
	0800107A?::08001080 u32(0x1C), 0800107A?::08001084 u32(0x20), 0800107A?::08001088 u32(0x24),
	0800107A?::0800108C u8(0x10), 0800B6CE?::0800B6D0 u16(0xC8+0x04), 0800B6DA?::0800B6DC u16(0xC8+0x06),
	0800B6B6?::0800B6B8 u8(0xC8+0x00), 0800B6C2?::0800B6C4 u8(0xC8+0x02), 0800B6E6?::0800B6E8 u8(0xC8+0x03),
	0800B6AA?::0800B6AC u8(0xC8+0x01), 0800B6D4?::0800B6D6 u16(0xC8+0x04), 0800B6E0?::0800B6E2 u16(0xC8+0x06),
	0809F584::0809F58A u8(0x0D), 0809F584::0809F58C u8(0x0E), 0809F584::0809F58E u8(0x0F),
	0809EF18::0809EF64 u8(0x10), 0809EF18::0809EF6E u32(0x1C), 0809EF18::0809EF76 u32(0x20),
	0809EF18::0809EF7E u32(0x24), 0809EF18::0809EF8E u8(0x0D), 0809F098::0809F0D4 u8(0x10),
	0809EA14::0809EA28 u8(0x0A), 0803172E?::0803173A u32(0x1C+0x00), 0803172E?::08031742 u32(0x1C+0x04),
	0803172E?::0803174A u32(0x1C+0x0C), 0803172E?::08031752 u32(0x1C+0x10), 080037F4::08003836 u32(0x50+0x00),
	080037F4::0800383A u32(0x50+0x00), 080037F4::0800384C u16(0x72), 080037F4::08003852 u16(0x74),
	080037F4::08003858 u16(0x76), 080037F4::08003862 u32(0x50+0x00), 080037F4::08003866 u32(0x50+0x00),
	0809EC88?::0809EC88 u32(0x28), 0809EC88?::0809EC8A u32(0x2C), 0809EC88?::0809EC8C u32(0x30),
	0809EC88?::0809EC8E u32(0x1C), 0809EC88?::0809EC90 u32(0x20), 0809EC88?::0809EC92 u32(0x24),
	0809F554::0809F56C u32(0x58), 0809EC96::0809EC9A u8(0x0A), 0809ECE0::0809ECEA u8(0x10),
	0809ECE0::0809ECEC u8(0x14), 0809ECE0::0809ECEE u32(0x58), 0809ECE0::0809ECFC u8(0x0A),
	0809ED00::0809ED02 u32(0x58), 080A0058::080A0068 u32(0x20), 080A0058::080A006E u32(0x1C),
	0809ED00::0809ED0C u8(0x0A), 0809ED10::0809ED24 u8(0x07), 0809ED10::0809ED28 u8(0x09),
	0809ED10::0809ED2C u8(0x0A), 08030B6A::08030BC2 u16(0x1C+0x0A), 08031136::0803113C u32(0x1C+0x0C),
	08031136::0803113E u32(0x1C+0x00), 08031136::08031144 u32(0x1C+0x10), 08031136::08031146 u32(0x1C+0x04),
	080310EC::080310F8 u32(0x1C+0x00), 080310EC::08031104 u32(0x1C+0x04), 080310EC::08031110 u32(0x1C+0x0C),
	080310EC::08031118 u32(0x1C+0x10), 080310B0::080310D0 u32(0x1C+0x00), 080310B0::080310D8 u32(0x1C+0x00),
	080310B0::080310DA u32(0x1C+0x04), 080310B0::080310E2 u32(0x1C+0x04), 080318B0::080318DE u16(0x1C+0x0A),
	0809EB44?::0809EB44 u32(0x28), 0809EB44?::0809EB46 u32(0x2C), 0809EB44?::0809EB48 u32(0x30),
	0809EB44?::0809EB4A u32(0x1C), 0809EB44?::0809EB4C u32(0x20), 0809EB44?::0809EB4E u32(0x24),
	08031176::0803117C u32(0x1C+0x0C), 08031176::0803117E u32(0x1C+0x00), 08031176::08031184 u32(0x1C+0x10),
	08031176::08031186 u32(0x1C+0x04), 08005D5C?::08005D68 u32(0x1C), 08005D5C?::08005D6C u32(0x20),
	08005D5C?::08005D70 u32(0x24), 08005D5C?::08005D74 u8(0x10), 0809F78C?::0809F794 u8(0x0C),
	0809F774?::0809F77C u8(0x17), 08002C7A?::08002C7E u8(0x02), 08002C7A?::08002C88 u8(0x90+0x11),
	08002C7A?::08002C90 u8(0x90+0x11), 08002CCE?::08002CCE u8(0x02), 08002CCE?::08002CD6 u8(0x90+0x11),
	08002CCE?::08002CDC u8(0x90+0x11), 0809F780?::0809F788 u8(0x0C), 0809F764?::0809F770 u8(0x17),
	0809EC96::0809ECC6 u8(0x07), 08031612::08031642 u16(0x1C+0x0A),

Accesses*/

/*
a new struct found at s_02009F5C due to overestimating size.
However, s_02009F5C is actually accessed through this...
It might be a struct within a struct.

Callbacks encountered in Accesses:
    0809ED38
*/

#endif /* S_02009F40_H */
