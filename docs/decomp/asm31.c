// 0x80b81ec
int __usercall sub_80B81EC@<R0>(Battle *obj@<R5>)
{
    return (*(&off_80B8204 + obj->ai->naviVirusIndicator))();
}


// 0x80b8210
int sub_80B8210()
{
    int v0; // r5

    return (*(&off_80B8220 + *(v0 + oBattleObject_CurState)))();
}


// 0x80b8230
signed int __noreturn sub_80B8230()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    int v3; // r1
    signed int result; // r0

    sprite_decompress(8, 18);
    sprite_load(v0, 128, 8, 18);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    sprite_setPallete(byte_80B8294[*(v0 + 4)]);
    v2 = sprite_setColorShader(v0, 0x7FFF);
    *(v0 + 96) = sub_80C468C(v2, v3, 0, 255);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80b829c
int sub_80B829C()
{
    int v0; // r5

    (*(&off_80B82B4 + *(v0 + 9)))();
    object_updateSpriteTimestop();
    return sub_80B844A();
}


// 0x80b82c4
int sub_80B82C4()
{
    int v0; // r5

    return (*(&off_80B82D8 + *(v0 + 10)))();
}


// 0x80b82e0
int __fastcall sub_80B82E0(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    __int16 v5; // r0
    int v6; // r0
    unsigned __int8 v7; // vf

    if ( *(v3 + 11) )
    {
        *v3 |= 2u;
        v5 = *(v3 + 32) + 1;
        *(v3 + 32) = v5;
        if ( v5 & 1 )
            *v3 &= 0xFDu;
        v6 = *(v3 + 25);
        v7 = __OFSUB__(v6, 2);
        result = v6 - 2;
        *(v3 + 25) = result;
        if ( ((result < 0) ^ v7) | (result == 0) )
        {
            *v3 |= 2u;
            *(v3 + 25) = 0;
            result = 4;
            *(v3 + 10) = 4;
        }
    }
    else
    {
        *v3 |= 2u;
        *(v3 + 25) = 31;
        PlaySoundEffect(148, 2, a3);
        *(v3 + 32) = 0;
        result = 4;
        *(v3 + 11) = 4;
    }
    return result;
}


// 0x80b8338
int sub_80B8338()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            if ( object_checkPanelParameters(*(v0 + 18), *(v0 + 19), 16, 0) )
                *(v0 + 9) = 4;
            else
                *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 32) = 30;
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80b8376
int sub_80B8376()
{
    int v0; // r5

    return (*(&off_80B8388 + *(v0 + 10)))();
}


// 0x80b8390
int sub_80B8390()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 1;
        *(v0 + 32) = 40;
    }
    *(v0 + 16) = 6;
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 16) = 5;
        *(v0 + 10) = 4;
        result = sub_80B8E30(4);
    }
    return result;
}


// 0x80b83c0
int __fastcall sub_80B83C0(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    unsigned __int8 v5; // vf
    int result; // r0

    if ( !*(v3 + 11) )
    {
        PlaySoundEffect(199, a2, a3);
        *(v3 + 32) = 40;
        *(v3 + 11) = 4;
    }
    if ( *(v3 + 32) == 32 )
    {
        if ( *(v3 + 6) )
            sub_80B8564();
        else
            sub_80B8512();
        camera_initShakeEffect_80302a8(3, 35);
    }
    v4 = *(v3 + 32);
    v5 = __OFSUB__(v4, 1);
    result = v4 - 1;
    *(v3 + 32) = result;
    if ( ((result < 0) ^ v5) | (result == 0) )
    {
        *(v3 + 9) = 8;
        result = 0;
        *(v3 + 10) = 0;
    }
    return result;
}


// 0x80b8406
int sub_80B8406()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *v0 &= 0xFDu;
            sub_80C46B0(*(v0 + 96));
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 76) = 0;
        *(v0 + 16) = 4;
        *(v0 + 32) = 5;
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80b843c
int sub_80B843C()
{
    int v0; // r5

    **(v0 + 100) = 0;
    return object_freeMemory();
}


// 0x80b844a
int sub_80B844A()
{
    Battle *v0; // r5

    return sprite_setColorShader(v0, 1057 * v0->unk_19);
}


// 0x80b845c
int __noreturn sub_80B845C()
{
    Battle *v0; // r5
    int v1; // r4
    int v2; // r2
    int v3; // r0
    int v4; // r1
    int v5; // r2
    int v6; // r3
    int v7; // ST04_4
    int v8; // ST08_4
    int v9; // r0
    bool v10; // nf
    unsigned __int8 v11; // vf
    int result; // r0
    int v13; // [sp-Ch] [bp-20h]

    v1 = object_getFrontDirection(v0);
    sub_81096FA(v1 + v0->panelX, v0->panelX, v2, byte_80B8494);
    while ( 1 )
    {
        v13 = v3;
        v7 = v5;
        v8 = v6;
        v9 = object_getPanelsInColumnFiltered(v3, v4, v5, v6);
        v11 = __OFSUB__(v9, 3);
        v10 = v9 - 3 < 0;
        result = v13;
        v5 = v7;
        v6 = v8;
        if ( !(v10 ^ v11) )
            break;
        v3 = v13 + v1;
    }
    return result;
}


// 0x80b84a4
int __noreturn sub_80B84A4()
{
    Battle *v0; // r5
    int v1; // r3
    int v2; // r4
    int v3; // r0
    int v4; // r1
    int v5; // r2
    int v6; // r6
    int v7; // ST04_4
    int v8; // ST08_4
    int v9; // ST0C_4
    bool v10; // zf
    int result; // r0
    int v12; // [sp-10h] [bp-28h]

    v2 = object_getFrontDirection(v0);
    v3 = v2 + v0->panelX;
    v4 = v0->panelY;
    v5 = 4 * v0->Alliance;
    v6 = *&byte_80B84E4[v5];
    while ( 1 )
    {
        v12 = v3;
        v7 = v4;
        v8 = v5;
        v9 = v1;
        v10 = (object_getPanelParameters(v3, v4) & v6) == 0;
        result = v12;
        v4 = v7;
        v5 = v8;
        v1 = v9;
        if ( !v10 )
            break;
        v3 = v12 + v2;
        if ( !(v12 + v2) || v3 > 6 )
            return 3 * v2 + v0->panelX;
    }
    return result;
}


// 0x80b84ec
int __fastcall sub_80B84EC(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(1, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 76) = v11;
        *(v4 + 44) = v5;
        *(v4 + 100) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80b8512
int sub_80B8512()
{
    int v0; // r5
    int result; // r0

    result = 5 * (*(v0 + 22) ^ 1) + 1;
    if ( result != *(v0 + 18) )
        sub_80B845C();
    return result;
}


// 0x80b8564
int sub_80B8564()
{
    int v0; // r5
    int result; // r0

    result = 5 * (*(v0 + 22) ^ 1) + 1;
    if ( result != *(v0 + 18) )
        sub_80B84A4();
    return result;
}


// 0x80b85e0
int sub_80B85E0()
{
    int v0; // r5

    return (*(&off_80B85F4 + *(v0 + 8)))();
}


// 0x80b8600
void __noreturn sub_80B8600()
{
    int v0; // r5
    int v1; // r0
    __int16 v2; // r0

    sprite_load(v0, 128, 16, 48);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    v1 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v1);
    v2 = *(*(v0 + 76) + 16);
    *(v0 + 16) = v2;
    sprite_setAnimation(v0, v2);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    *(v0 + 8) = 4;
    sub_80B863A();
}


// 0x80b863a
int sub_80B863A()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    unsigned int v3; // r0
    int v4; // r0
    int v5; // r0

    *v0 = *v0 & 0xFD | **(v0 + 76) & 2;
    v1 = sprite_getColorShader(*(v0 + 76));
    sprite_setColorShader(v0, v1);
    v2 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v2);
    v3 = sub_8002F3E(*(v0 + 76));
    (loc_8002F02)(v3);
    *(v0 + 23) = *(*(v0 + 76) + 23);
    v4 = object_getFlip(v0);
    sprite_setFlip(v0, v4);
    v5 = sprite_getMosaicScalingParameters(*(v0 + 76));
    (sprite_setAlpha)(v5);
    return (*(&off_80B8698 + *(v0 + 9)))();
}


// 0x80b86a4
int sub_80B86A4()
{
    int v0; // r5
    unsigned int v1; // r0
    unsigned __int8 v2; // cf
    int result; // r0

    sub_80B8800();
    sub_80B8810();
    v1 = sub_800139A();
    v2 = __CFSHR__(v1, 2);
    result = v1 >> 2;
    if ( v2 )
    {
        *(v0 + 9) = 4;
        *(v0 + 10) = 0;
        result = sub_80B86C4();
    }
    return result;
}


// 0x80b86c4
int sub_80B86C4()
{
    sub_80B8800();
    sub_80B8810();
    return sub_80B881E();
}


// 0x80b86d4
int __fastcall sub_80B86D4(int a1)
{
    int v1; // r5
    int result; // r0

    result = sub_80B881E();
    if ( result )
        result = (*(&off_80B86F0 + *(v1 + 10)))();
    return result;
}


// 0x80b86f8
int sub_80B86F8()
{
    int v0; // r5
    int result; // r0
    int v2; // r4
    int v3; // r6

    *(v0 + 52) += *(v0 + 64);
    *(v0 + 60) -= *(v0 + 72);
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        if ( object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & 0x10 )
            sub_80B8844();
        v2 = *(v0 + 100);
        v3 = *(v0 + 44);
        object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), 0, 0);
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
        *(v0 + 18) = 0;
        object_setCoordinatesFromPanels(v0);
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80b8784
void nullsub_8()
{
    ;
}


// 0x80b8786
int __fastcall sub_80B8786(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+4h] [bp-8h]

    object_spawnType1(2, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v6;
        *(v4 + 22) = *(v6 + 22);
        *v4 |= 4u;
    }
    return result;
}


// 0x80b87a6
int __fastcall sub_80B87A6(int result)
{
    *(result + 8) = 8;
    return result;
}


// 0x80b87ac
signed int __fastcall sub_80B87AC(signed int result, int a2, char a3, char a4)
{
    signed int v4; // r5
    int v5; // r0

    v4 = result;
    if ( result )
    {
        result = *(result + 9);
        if ( result == 4 )
        {
            *(v4 + 44) = a2;
            *(v4 + 18) = a3;
            *(v4 + 19) = a4;
            object_setCoordinatesFromPanels(v4);
            v5 = object_getFrontDirection(v4);
            *(v4 + 52) -= 1310720 * v5;
            *(v4 + 60) = 2621440;
            *(v4 + 64) = 436906 * v5;
            *(v4 + 72) = 873813;
            *(v4 + 32) = 3;
            result = 3;
            *(v4 + 16) = 3;
            *(v4 + 9) = 8;
            *(v4 + 10) = 0;
        }
    }
    return result;
}


// 0x80b87f0
int __fastcall sub_80B87F0(int result)
{
    if ( *(result + 9) == 8 )
    {
        *(result + 9) = 4;
        *(result + 10) = 0;
    }
    return result;
}


// 0x80b8800
int sub_80B8800()
{
    int v0; // r5
    int v1; // r2
    int v2; // r3
    _DWORD *v3; // r0

    v1 = *(*(v0 + 76) + 56);
    v2 = *(*(v0 + 76) + 60);
    v3 = (v0 + 52);
    *v3 = *(*(v0 + 76) + 52);
    v3[1] = v1;
    v3[2] = v2;
    return v0 + 64;
}


// 0x80b8810
signed int sub_80B8810()
{
    int v0; // r5
    signed int result; // r0

    result = *(*(v0 + 76) + 16);
    if ( result > 3 )
        result = 3;
    *(v0 + 16) = result;
    return result;
}


// 0x80b881e
signed int sub_80B881E()
{
    int v0; // r5
    signed int v1; // r4
    char v2; // zf
    int v3; // r3

    v1 = 0;
    battle_isPaused();
    if ( v2 )
    {
        v3 = *(v0 + 76);
        if ( *(v3 + 36) )
        {
            if ( !(*(*(v3 + 84) + 60) & 0x80110C00) )
            {
                object_updateSpritePaused();
                v1 = 1;
            }
        }
    }
    return v1;
}


// 0x80b8844
void __noreturn sub_80B8844()
{
    int v0; // r5
    signed int v1; // r1

    v1 = 0;
    if ( *(v0 + 4) >= 4 )
        v1 = 4;
    *(v0 + 100) = *&byte_80B88B4[v1];
    sub_80B8870(*(v0 + 18), *(v0 + 19));
}


// 0x80b8870
void __fastcall __noreturn sub_80B8870(int a1, int a2)
{
    int v2; // r5
    int v3; // r4
    int v4; // r6
    int v5; // r0
    int v6; // r1
    char v7; // [sp+0h] [bp-20h]
    int v8; // [sp+4h] [bp-1Ch]

    v7 = a1;
    v8 = a2;
    if ( object_getPanelParameters(a1, a2) & 0x10 )
    {
        v3 = *(v2 + 100);
        v4 = *(v2 + 44);
        object_spawnCollisionRegion(v7, v8, 0, 3145728);
        v5 = object_getCoordinatesForPanels(v7);
        SpawnT4BattleObjectWithId0(v2, v5, v5, v6, 0);
    }
}


// 0x80b88d0
int sub_80B88D0()
{
    int v0; // r5

    return (*(&off_80B88E4 + *(v0 + 8)))();
}


// 0x80b88f0
signed int __noreturn sub_80B88F0()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setPanelsFromCoordinates(v0);
    sprite_load(v0, 128, 16, 61);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80b8932
void sub_80B8932()
{
    int v0; // r5
    int v1; // r6
    _DWORD *v2; // r4
    int v3; // r2
    int v4; // r3
    _DWORD *v5; // r0
    int v6; // r1
    int v7; // r0
    int v8; // r0
    unsigned int v9; // r0
    int v10; // r0
    int v11; // r0
    char v12; // zf

    v1 = object_getFrontDirection(v0);
    v2 = *(v0 + 76);
    v3 = v2[14];
    v4 = v2[15];
    v5 = (v0 + 52);
    *v5 = v2[13];
    v5[1] = v3;
    v5[2] = v4;
    *(v0 + 58) += 32;
    *(v0 + 62) += 31;
    *(v0 + 52) += (sub_80030BA(v2, 1) << 16) * v1;
    *(v0 + 56) += v6 << 16;
    *v0 = *v0 & 0xFD | **(v0 + 76) & 2;
    v7 = sprite_getColorShader(*(v0 + 76));
    sprite_setColorShader(v0, v7);
    v8 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v8);
    v9 = sub_8002F3E(*(v0 + 76));
    (loc_8002F02)(v9);
    if ( !*(v0 + 96) )
    {
        *(v0 + 23) = *(*(v0 + 76) + 23);
        v10 = object_getFlip(v0);
        sprite_setFlip(v0, v10);
    }
    v11 = sprite_getMosaicScalingParameters(*(v0 + 76));
    (sprite_setAlpha)(v11);
    battle_isTimeStop();
    if ( v12 )
    {
        if ( !(*(*(*(v0 + 76) + 84) + 60) & 0x80110C00) )
            object_updateSprite();
    }
}


// 0x80b89dc
int __fastcall sub_80B89DC(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+0h] [bp-Ch]
    int v7; // [sp+4h] [bp-8h]

    v6 = a4;
    object_spawnType1(3, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 96) = v6;
        *(v4 + 52) = *(v7 + 52);
        *(v4 + 56) = *(v7 + 56);
        *(v4 + 60) = *(v7 + 60);
        *(v4 + 22) = *(v7 + 22);
        *(v4 + 76) = v7;
        *v4 |= 0x14u;
    }
    return result;
}


// 0x80b8a0a
int __fastcall sub_80B8A0A(int result)
{
    if ( result )
        *(result + 8) = 8;
    return result;
}


// 0x80b8a18
void sub_80B8A18()
{
    int v0; // r5

    (*(&off_80B8A30 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80b8a3c
int __noreturn sub_80B8A3C()
{
    Battle *v0; // r5
    u32 *v1; // r4
    Battle *v2; // ST04_4
    u32 *v3; // r5
    int v4; // r0
    int v5; // ST00_4
    char *v6; // r0
    int v7; // r1
    int v8; // r2
    int v9; // r0
    int v10; // r1
    u32 v11; // r2
    u32 v12; // r3
    u32 *v13; // r0
    Battle *v14; // ST04_4
    u32 *v15; // r5
    int v16; // r0
    int v17; // r0
    int v18; // r0
    int v19; // r1

    v1 = v0->parent;
    if ( sub_800F29C(*(v1 + 20)) == 2 )
    {
        v2 = v0;
        v3 = v0->parent;
        v4 = sub_8013774(2, 44);
        v5 = v4;
        v6 = sub_8013774(v4, 41);
        v0 = v2;
        sub_800FC9E(v6, v5);
    }
    else
    {
        v9 = sub_800F26C(*(v1 + 20));
        v8 = v10;
        v7 = v9;
    }
    sprite_load(v0, 128, v7, v8);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    v0->currAnimation = 0;
    v0->currAnimationCpy = -1;
    v0->objFlags |= 2u;
    v11 = v0->parent[14];
    v12 = v0->parent[15];
    v13 = &v0->x;
    *v13 = v0->parent[13];
    v13[1] = v11;
    v13[2] = v12;
    object_setPanelsFromCoordinates(v0);
    v14 = v0;
    v15 = v0->parent;
    v16 = sub_801002C();
    sprite_setPallete(v16);
    v17 = object_getFlip(v14);
    sprite_setFlip(v14, v17);
    v18 = sub_800F29C(*(v1 + 20));
    sub_8010DF6(v18, v19);
    sub_80E1352(v14->parent, 0xFu);
    *&v14->currState = 4;
    return sub_80B8AD4();
}


// 0x80b8ad4
int sub_80B8AD4()
{
    _BYTE *v0; // r5

    *v0 |= 2u;
    if ( !sub_800EB6C(v0[22]) )
        *v0 &= 0xFDu;
    return (*(&off_80B8B00 + v0[10]))();
}


// 0x80b8b08
int sub_80B8B08()
{
    int v0; // r5
    int v1; // r2
    signed __int16 v2; // r0
    int v3; // r0
    unsigned __int8 v4; // vf
    int result; // r0
    int v6; // r0
    int v7; // r6
    int v8; // r3
    int v9; // r1
    int v10; // r2

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 34;
        *(v0 + 11) = 4;
    }
    if ( *(v0 + 32) == 4 )
    {
        if ( !(object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & 0x10) )
        {
            v2 = 1;
LABEL_10:
            *(v0 + 32) = v2;
            result = 4;
            *(v0 + 10) = 4;
            return result;
        }
        *(v0 + 16) = 12;
        PlaySoundEffect(306, 16, v1);
    }
    v3 = *(v0 + 32);
    v4 = __OFSUB__(v3, 1);
    result = v3 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v4 )
    {
        v6 = object_getFrontDirection(v0);
        v7 = *(v0 + 44);
        sub_80DBB0C(655360 * v6 + *(v0 + 52), *(v0 + 56), *(v0 + 14), v8);
        PlaySoundEffect(427, v9, v10);
        v2 = 90;
        goto LABEL_10;
    }
    return result;
}


// 0x80b8b6e
int sub_80B8B6E()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r0
    int v5; // r1

    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        v4 = sub_800F29C(*(*(v0 + 76) + 40));
        sub_8011044(v4, v5);
        *v0 &= 0xFDu;
        *(v0 + 8) = 8;
        sub_80E13DC(*(v0 + 76));
        result = 0;
        **(v0 + 96) = 0;
    }
    return result;
}


// 0x80b8ba0
int __fastcall sub_80B8BA0(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(4, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 76) = v11;
        *(v4 + 96) = v6;
        *v6 = 1;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 40) = *(v11 + 40);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80b8cd8
int sub_80B8CD8()
{
    int v0; // r5

    return (*(&off_80B8CEC + *(v0 + 8)))();
}


// 0x80b8cf8
void __noreturn sub_80B8CF8()
{
    int v0; // r5
    unsigned __int8 *v1; // r4
    signed int v2; // r0
    char v3; // r0
    u8 v4; // r0
    int v5; // r3
    int v6; // r0
    signed int v7; // r1

    v1 = &byte_80B8BD4[5 * *(v0 + 4)];
    sprite_load(v0, 128, *v1, v1[1]);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    v2 = *(*(v0 + 76) + 40);
    if ( v2 >= 428 && v2 <= 437 && sub_80136CC(*(v0 + 22), 44) )
        v3 = -8;
    else
        v3 = v1[3];
    *(v0 + 12) = v3;
    v4 = *(v0 + 5);
    *(v0 + 16) = v4;
    *(v0 + 17) = v4;
    sprite_setAnimation(v0, v4);
    sprite_loadAnimationData(v0);
    *v0 |= 2u;
    sprite_setPallete(v1[2] + *(v0 + 7));
    *(v0 + 64) = 0;
    *(v0 + 72) = 0;
    if ( *(v0 + 4) == 15 )
    {
        v5 = *(*(v0 + 76) + 40);
        if ( v5 != 416 )
        {
            v6 = 11;
            v7 = -7;
            if ( v5 != 438 )
            {
                v6 = 0;
                v7 = 13;
            }
            goto LABEL_12;
        }
    }
    else if ( v1[4] )
    {
        v6 = sub_8018810(*(*(v0 + 76) + 40), v1[4], *(v0 + 22), *(v0 + 23));
LABEL_12:
        *(v0 + 64) = v6 << 16;
        *(v0 + 72) = v7 << 16;
        goto LABEL_13;
    }
LABEL_13:
    *(v0 + 8) = 4;
    sub_80B8DA6();
}


// 0x80b8da6
void sub_80B8DA6()
{
    int v0; // r5
    int v1; // r4
    int v2; // r0
    int v3; // r2
    int v4; // r3
    _DWORD *v5; // r0
    int v6; // r0
    int v7; // r0
    int v8; // r0
    int v9; // r0
    char v10; // zf

    v1 = *(v0 + 76);
    v2 = *(v0 + 12) << 16;
    v3 = *(v1 + 56) - v2;
    v4 = *(v1 + 60) + *(v0 + 72) - v2;
    v5 = (v0 + 52);
    *v5 = *(v1 + 52) + *(v0 + 64);
    v5[1] = v3;
    v5[2] = v4;
    *v0 = *v0 & 0xFD | *v1 & 2;
    v6 = sprite_getColorShader(*(v0 + 76));
    sprite_setColorShader(v0, v6);
    v7 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v7);
    v8 = sprite_getMosaicScalingParameters(*(v0 + 76));
    (sprite_setAlpha)(v8);
    v9 = sprite_getFlip(*(v0 + 76));
    sprite_setFlip(v0, v9);
    if ( **(v0 + 96) )
    {
        if ( *(v0 + 6) || (battle_isTimeStop(), v10) )
        {
            battle_isPaused();
            if ( v10 )
                object_updateSprite();
        }
    }
    else
    {
        *v0 &= 0xFDu;
        *(v0 + 8) = 8;
    }
}


// 0x80b8e30
int sub_80B8E30() { // could not decompile
    asm(".func\
    .thumb_func\
    sub_80B8E30:\
        push {lr}\
        push {r0,r5-r7}\
        mov r0, #5\
        bl object_spawnType1\
        mov r0, r5\
        pop {r1,r5-r7}\
        beq loc_80B8E54\
        str r5, [r0,#0x4c]\
        str r7, [r0,#0x60]\
        ldrh r1, [r5,#0x12]\
        strh r1, [r0,#0x12]\
        ldrh r1, [r5,#0x16]\
        strh r1, [r0,#0x16]\
        mov r1, #0x14\
        ldrb r2, [r0]\
        orr r2, r1\
        strb r2, [r0]\
    loc_80B8E54:\
        str r0, [r7]\
        pop {pc}\
    .endfunc // sub_80B8E30"
    );
}

// 0x80b8e58
int __fastcall sub_80B8E58(int result)
{
    if ( result )
        *(result + 8) = 8;
    return result;
}


// 0x80b8e62
int __fastcall sub_80B8E62(int a1)
{
    char *v1; // r2
    int result; // r0
    int v3; // r1

    v1 = &byte_80B8BD4[5 * a1];
    result = *v1;
    v3 = v1[1];
    return result;
}


// 0x80b8e70
int __fastcall sub_80B8E70(int result, char a2)
{
    if ( result )
    {
        *(result + 16) = a2;
        *(result + 17) = -1;
    }
    return result;
}


// 0x80b8e7c
int __fastcall sub_80B8E7C(int result)
{
    if ( result )
        *(result + 17) = -1;
    return result;
}


// 0x80b8ea0
void sub_80B8EA0()
{
    int v0; // r5

    (*(&off_80B8EB8 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80b8ec4
signed int __noreturn sub_80B8EC4()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    sprite_decompress(8, 12);
    sprite_load(v0, 128, 8, 12);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80b8f0a
int sub_80B8F0A()
{
    int v0; // r5

    return (*(&off_80B8F1C + *(v0 + 9)))();
}


// 0x80b8f30
int __fastcall sub_80B8F30(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *(v3 + 9) = 4;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 3;
        PlaySoundEffect(148, 4, a3);
        *v3 |= 2u;
        result = 3;
        *(v3 + 32) = 3;
    }
    return result;
}


// 0x80b8f66
int sub_80B8F66()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 0;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80b8f8e
int sub_80B8F8E()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 10;
        result = 20;
        *(v0 + 32) = 20;
    }
    return result;
}


// 0x80b8fb6
int sub_80B8FB6()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int result; // r0
    int v4; // r0
    unsigned __int8 v5; // vf

    if ( *(v0 + 10) )
    {
        v4 = *(v0 + 32);
        v5 = __OFSUB__(v4, 1);
        result = v4 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v5 )
        {
            *(v0 + 9) = 16;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 11;
        sub_80B903A();
        PlaySoundEffect(383, v1, v2);
        result = 60;
        *(v0 + 32) = 60;
    }
    return result;
}


// 0x80b8fea
int sub_80B8FEA()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 4;
        result = 3;
        *(v0 + 32) = 3;
    }
    return result;
}


// 0x80b9014
int __fastcall sub_80B9014(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(6, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80b903a
int sub_80B903A()
{
    int v0; // r5
    signed int v1; // r7
    int result; // r0
    char v3; // r0
    int v4; // r6
    int v5; // [sp-4h] [bp-14h]

    v1 = 0;
    do
    {
        v5 = *(v0 + 19) - 1 + v1;
        result = object_isValidPanel(*(v0 + 18), v5);
        if ( result )
        {
            v3 = 0;
            if ( *(v0 + 22) )
                v3 = 7;
            v4 = *(v0 + 44);
            result = sub_80C8514(v3, v5, *(v0 + 14), 4);
        }
        ++v1;
    }
    while ( v1 < 3 );
    return result;
}


// 0x80b9078
void sub_80B9078()
{
    int v0; // r5

    (*(&off_80B9090 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80b909c
signed int __noreturn sub_80B909C()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 8, 1);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    sub_8010DF6(2, 1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80b90e4
int sub_80B90E4()
{
    int v0; // r5

    return (*(&off_80B90F8 + *(v0 + 9)))();
}


// 0x80b910c
int __fastcall sub_80B910C(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            if ( (object_getPanelParameters(*(v3 + 18), *(v3 + 19)) & 0x10010) == 65552 )
                *(v3 + 9) = 4;
            else
                *(v3 + 9) = 16;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 3;
        PlaySoundEffect(148, 4, a3);
        *v3 |= 2u;
        result = 5;
        *(v3 + 32) = 5;
    }
    return result;
}


// 0x80b9160
int sub_80B9160()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 0;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80b9188
int sub_80B9188()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 15;
        result = 10;
        *(v0 + 32) = 10;
    }
    return result;
}


// 0x80b91b0
int sub_80B91B0()
{
    int v0; // r5
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 21;
        sub_80B9240();
    }
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( result == 52 )
    {
        result = 16;
        *(v0 + 16) = 16;
    }
    else if ( result < 0 )
    {
        *(v0 + 9) = 16;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80b91e8
int sub_80B91E8()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            sub_8011044(2, 1);
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 4;
        result = 4;
        *(v0 + 32) = 4;
    }
    return result;
}


// 0x80b921a
int __fastcall sub_80B921A(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(7, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80b9240
void __noreturn sub_80B9240()
{
    Battle *v0; // r5
    int v1; // r0

    v1 = object_getFrontDirection(v0);
    sub_80B9288(v0->panelX + v1, v0->panelY);
}


// 0x80b9288
int __fastcall __noreturn sub_80B9288(int a1, int a2)
{
    int v2; // r5
    bool v3; // zf
    int result; // r0
    int v5; // r6
    int v6; // [sp+0h] [bp-14h]
    int v7; // [sp+4h] [bp-10h]

    v6 = a1;
    v7 = a2;
    v3 = (object_getPanelParameters(a1, a2) & 0x10010) == 65552;
    result = v6;
    if ( v3 )
    {
        v5 = *(v2 + 44);
        result = sub_80C8DE0(v6, v7, *(v2 + 14), 0);
    }
    return result;
}


// 0x80b92b8
void sub_80B92B8()
{
    int v0; // r5

    (*(&off_80B92D0 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80b92dc
signed int __noreturn sub_80B92DC()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    sprite_load(v0, 128, 8, 2);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80b931a
int sub_80B931A()
{
    int v0; // r5

    return (*(&off_80B932C + *(v0 + 9)))();
}


// 0x80b9340
int __fastcall sub_80B9340(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *(v3 + 9) = 4;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 3;
        PlaySoundEffect(148, 4, a3);
        *v3 |= 2u;
        result = 3;
        *(v3 + 32) = 3;
    }
    return result;
}


// 0x80b9376
int sub_80B9376()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 0;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80b939e
int sub_80B939E()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 18;
        result = 13;
        *(v0 + 32) = 13;
    }
    return result;
}


// 0x80b93c6
int __fastcall sub_80B93C6(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0

    if ( *(v3 + 10) )
    {
        result = *(v3 + 32) - 1;
        *(v3 + 32) = result;
        if ( result == 60 )
        {
            result = sub_80B9458(1);
        }
        else if ( result <= 0 )
        {
            *(v3 + 9) = 16;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 19;
        PlaySoundEffect(198, 4, a3);
        sub_80B9458(0);
        result = 120;
        *(v3 + 32) = 120;
    }
    return result;
}


// 0x80b9408
int sub_80B9408()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 4;
        result = 3;
        *(v0 + 32) = 3;
    }
    return result;
}


// 0x80b9432
int __fastcall sub_80B9432(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(8, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80b9458
int __fastcall sub_80B9458(int a1)
{
    int v1; // r5
    int v2; // r6
    int result; // r0
    int v4; // r3
    int v5; // r6
    unsigned int v6; // r0
    int v7; // ST00_4
    int v8; // r6
    int v9; // [sp+0h] [bp-4h]
    int v10; // [sp+4h] [bp+0h]

    v9 = a1;
    v2 = *(v1 + 22);
    result = object_getPanelRegion(*(v1 + 18), *(v1 + 19), *&byte_80B94AC[8 * a1 + 4 * v2], 0);
    if ( result )
    {
        v5 = result - 1;
        do
        {
            v6 = *(&v10 + v5);
            v7 = v5;
            v8 = *(v1 + 44);
            result = sub_80D0F0C(v6 & 7, v6 >> 4, *(v1 + 14), v4);
            v5 = v7 - 1;
        }
        while ( v7 - 1 >= 0 );
    }
    return result;
}


// 0x80b94bc
void sub_80B94BC()
{
    int v0; // r5

    (*(&off_80B94D4 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80b94e0
signed int __noreturn sub_80B94E0()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 8, 6);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80b951e
int sub_80B951E()
{
    int v0; // r5

    return (*(&off_80B9530 + *(v0 + 9)))();
}


// 0x80b954c
int __fastcall sub_80B954C(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            if ( (object_getPanelParameters(*(v3 + 18), *(v3 + 19)) & 0x10010) == 65552 )
                *(v3 + 9) = 4;
            else
                *(v3 + 9) = 24;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 3;
        PlaySoundEffect(148, 4, a3);
        sub_8010DF6(2, 6);
        *v3 |= 2u;
        result = 6;
        *(v3 + 32) = 6;
    }
    return result;
}


// 0x80b95ac
int sub_80B95AC()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    signed int v4; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 0;
        result = 30;
        *(v0 + 32) = 30;
        return result;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v3) | (result == 0) )
    {
        v4 = *(v0 + 18);
        if ( *(v0 + 22) )
        {
            if ( v4 >= 5 )
            {
LABEL_10:
                *(v0 + 9) = 16;
                result = 0;
                *(v0 + 10) = 0;
                return result;
            }
        }
        else if ( v4 <= 2 )
        {
            goto LABEL_10;
        }
        *(v0 + 9) = 8;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80b95f2
int sub_80B95F2()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 19;
        result = 20;
        *(v0 + 32) = 20;
    }
    return result;
}


// 0x80b961a
int __fastcall sub_80B961A(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r0
    int v7; // r1
    int v8; // r2
    int result; // r0
    int v10; // r0
    unsigned __int8 v11; // vf

    if ( *(v4 + 10) )
    {
        v10 = *(v4 + 32);
        v11 = __OFSUB__(v10, 1);
        result = v10 - 1;
        *(v4 + 32) = result;
        if ( ((result < 0) ^ v11) | (result == 0) )
        {
            *(v4 + 9) = 24;
            result = 0;
            *(v4 + 10) = 0;
        }
    }
    else
    {
        *(v4 + 10) = 4;
        *(v4 + 16) = 20;
        v5 = *(v4 + 44);
        sub_80C86B0(*(v4 + 18), *(v4 + 19), *(v4 + 14), a4);
        v6 = object_getFlip(v4);
        SpawnT4BattleObjectWithId0(v4, v6 << 8, *(v4 + 52), *(v4 + 56), 0);
        PlaySoundEffect(301, v7, v8);
        result = 60;
        *(v4 + 32) = 60;
    }
    return result;
}


// 0x80b966c
int __fastcall sub_80B966C(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0

    if ( *(v4 + 10) )
    {
        result = *(v4 + 32) - 1;
        *(v4 + 32) = result;
        if ( result == 57 )
        {
            result = 16;
            *(v4 + 16) = 16;
        }
        else if ( result == 27 )
        {
            result = *(v4 + 96);
            if ( result )
                *(result + 11) = 1;
        }
        else if ( result <= 0 )
        {
            *(v4 + 9) = 20;
            result = 0;
            *(v4 + 10) = 0;
        }
    }
    else
    {
        *(v4 + 10) = 4;
        *(v4 + 16) = 15;
        sub_80E3976(*(v4 + 18), *(v4 + 19), 96, a4);
        result = 66;
        *(v4 + 32) = 66;
    }
    return result;
}


// 0x80b96c2
int __fastcall sub_80B96C2(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    unsigned __int8 v5; // vf
    int result; // r0
    int v7; // r0

    if ( !*(v3 + 10) )
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 21;
        PlaySoundEffect(393, 4, a3);
        *(v3 + 32) = 90;
        sub_80B9776();
    }
    v4 = *(v3 + 32);
    v5 = __OFSUB__(v4, 1);
    result = v4 - 1;
    *(v3 + 32) = result;
    if ( ((result < 0) ^ v5) | (result == 0) )
    {
        *(v3 + 16) = 0;
        v7 = *(v3 + 96);
        if ( v7 )
            *(v7 + 11) = 2;
        *(v3 + 9) = 24;
        result = 0;
        *(v3 + 10) = 0;
    }
    return result;
}


// 0x80b971e
int sub_80B971E()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            sub_8011044(2, 6);
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 4;
        result = 8;
        *(v0 + 32) = 8;
    }
    return result;
}


// 0x80b9750
int __fastcall sub_80B9750(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(9, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80b9776
int __noreturn sub_80B9776()
{
    Battle *v0; // r5
    int v1; // r6
    signed int i; // r4
    bool v3; // zf
    int result; // r0
    int v5; // [sp-4h] [bp-2Ch]

    v1 = object_getFrontDirection(v0);
    for ( i = 1; ; ++i )
    {
        v5 = v0->panelX + i * v1;
        v3 = object_getPanelsInColumnFiltered(v5, i * v1, *(&off_80B97B8 + v0->Alliance), 0) == 0;
        result = v5;
        if ( !v3 || v5 <= 1 || v5 >= 6 )
            break;
    }
    return result;
}


// 0x80b97c0
void sub_80B97C0()
{
    int v0; // r5

    (*(&off_80B97D8 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80b97e4
signed int __noreturn sub_80B97E4()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 8, 7);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80b9822
int sub_80B9822()
{
    int v0; // r5

    return (*(&off_80B9834 + *(v0 + 9)))();
}


// 0x80b9848
int __fastcall sub_80B9848(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            if ( (object_getPanelParameters(*(v3 + 18), *(v3 + 19)) & 0x10010) == 65552 )
                *(v3 + 9) = 4;
            else
                *(v3 + 9) = 16;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 3;
        PlaySoundEffect(148, 4, a3);
        *v3 |= 2u;
        result = 3;
        *(v3 + 32) = 3;
    }
    return result;
}


// 0x80b989c
int sub_80B989C()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 0;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80b98c4
int sub_80B98C4()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 15;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80b98ec
int sub_80B98EC()
{
    int v0; // r5
    int result; // r0
    char v2; // r0
    int v3; // r6
    char v4; // r0
    int v5; // r1
    int v6; // r0
    int v7; // r1
    int v8; // r1
    int v9; // r2

    if ( *(v0 + 11) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 55 )
        {
            v2 = object_getFrontDirection(v0);
            v3 = *(v0 + 44);
            sub_80C53A6(v2 + *(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
            object_getFlip(v0);
            v4 = object_getFrontDirection(v0);
            v5 = *(v0 + 19);
            v6 = object_getCoordinatesForPanels(v4 + *(v0 + 18));
            SpawnT4BattleObjectWithId0(v0, v6, v6, v7, 0x100000);
            PlaySoundEffect(266, v8, v9);
            result = camera_initShakeEffect_80302a8(1, 30);
        }
        else if ( result < 0 )
        {
            *(v0 + 9) = 16;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 16;
        result = 60;
        *(v0 + 32) = 60;
    }
    return result;
}


// 0x80b9970
int sub_80B9970()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 4;
        result = 3;
        *(v0 + 32) = 3;
    }
    return result;
}


// 0x80b999a
int __fastcall sub_80B999A(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(10, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80b99c0
void sub_80B99C0()
{
    int v0; // r5

    (*(&off_80B99D8 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80b99e4
signed int __noreturn sub_80B99E4()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_decompress(8, 13);
    sprite_load(v0, 128, 8, 13);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    sub_8010DF6(2, 13);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80b9a34
int sub_80B9A34()
{
    int v0; // r5

    return (*(&off_80B9A48 + *(v0 + 9)))();
}


// 0x80b9a60
int __fastcall sub_80B9A60(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *(v3 + 9) = 4;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 7;
        PlaySoundEffect(225, 4, a3);
        *v3 |= 2u;
        result = 19;
        *(v3 + 32) = 19;
    }
    return result;
}


// 0x80b9a96
int sub_80B9A96()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80b9aba
int sub_80B9ABA()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 4;
        *(v0 + 32) = 30;
        result = camera_initShakeEffect_80302a8(0, *(v0 + 32));
    }
    return result;
}


// 0x80b9aea
int sub_80B9AEA()
{
    int v0; // r5
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 5;
        sub_80B9B94();
    }
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( result == 30 )
        return camera_initShakeEffect_80302a8(2, 30);
    if ( result == 20 )
    {
        result = 0;
        *(v0 + 16) = 0;
    }
    else if ( result <= 0 )
    {
        *(v0 + 9) = 16;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80b9b30
int sub_80B9B30()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 20;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 8;
        result = 14;
        *(v0 + 32) = 14;
    }
    return result;
}


// 0x80b9b58
signed int sub_80B9B58()
{
    int v0; // r5
    signed int result; // r0

    sub_8011044(2, 13);
    **(v0 + 84) = 0;
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80b9b6e
int __fastcall sub_80B9B6E(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(11, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80b9b94
int __noreturn sub_80B9B94()
{
    int v0; // r5
    int v1; // r6
    int v2; // r4
    int result; // r0
    int v4; // r1
    int v5; // ST04_4
    bool v6; // zf
    int v7; // r3
    int v8; // r1
    int v9; // ST04_4
    int v10; // r6
    int v11; // [sp-8h] [bp-18h]

    v2 = 1;
    do
    {
        result = object_getClosestPanelMatchingRowFiltered(
                             *(v0 + 22),
                             v2,
                             *&byte_80B9BF0[8 * *(v0 + 22)],
                             *&byte_80B9BF0[8 * *(v0 + 22) + 4]);
        if ( result )
        {
            *(v0 + 22);
            v11 = result;
            v5 = v4;
            v6 = object_checkPanelParameters(result, v4, *&byte_80B9C04[8 * *(v0 + 22)], *&byte_80B9C04[8 * *(v0 + 22) + 4]) == 0;
            result = v11;
            v8 = v5;
            if ( !v6 )
            {
                v9 = v1;
                v10 = *(v0 + 44);
                result = sub_80CB1E2(v11, v8, *(v0 + 14), v7);
                v1 = v9;
            }
        }
        ++v2;
    }
    while ( v2 <= 3 );
    return result;
}


// 0x80b9c14
void sub_80B9C14()
{
    int v0; // r5

    (*(&off_80B9C2C + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80b9c38
signed int __noreturn sub_80B9C38()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v3; // r0
    int v4; // r1
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 8, 8);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( v2 )
    {
        object_setupCollisionData(v2, 4, 5, 3);
        object_setCollisionHitEffect(6);
        v3 = object_clearCollisionRegion();
        object_presentCollisionData(v3, v4);
        result = 4;
        *(v0 + 8) = 4;
    }
    else
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80b9c9c
void __noreturn sub_80B9C9C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( *(*(v0 + 84) + 112) )
        object_clearCollisionRegion();
    v1 = (*(&off_80B9CC8 + *(v0 + 9)))();
    object_presentCollisionData(v1, v2);
}


// 0x80b9cdc
int __fastcall sub_80B9CDC(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *(v3 + 9) = 4;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 3;
        PlaySoundEffect(148, 4, a3);
        *v3 |= 2u;
        result = 3;
        *(v3 + 32) = 3;
    }
    return result;
}


// 0x80b9d12
int sub_80B9D12()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80b9d36
int sub_80B9D36()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 10) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 20 )
        {
            *(v0 + 62) = 255;
            result = sprite_noShadow(v0);
        }
        else if ( result <= 0 )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 4;
        result = 23;
        *(v0 + 32) = 23;
    }
    return result;
}


// 0x80b9d6e
int sub_80B9D6E()
{
    int v0; // r5
    int v1; // r0
    char v2; // r1
    int result; // r0
    int v4; // r4
    int v5; // r0
    int v6; // r2
    int v7; // r1
    int v8; // r0

    if ( *(v0 + 10) )
    {
        *(v0 + 52) += *(v0 + 64);
        *(v0 + 56) += *(v0 + 68);
        v4 = *(v0 + 18);
        object_setPanelsFromCoordinates(v0);
        object_updateCollisionPanels(v0);
        v5 = object_getFrontDirection(v0);
        v7 = *(v0 + 64);
        *(v0 + 64) = 40960 * v5 + v7;
        if ( *(v0 + 18) != v4 )
            object_setCollisionRegion(4);
        v8 = *(v0 + 34) + 1;
        *(v0 + 34) = v8;
        if ( !__CFSHR__(v8, 3) )
            object_highlightPanelRegion(
                *(&dword_80B9E3C + 2 * *(v0 + 22)),
                *(&dword_80B9E3C + 2 * *(v0 + 22) + 1),
                35,
                *(v0 + 22));
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 30 )
        {
            result = PlaySoundEffect(316, v7, v6);
        }
        else if ( result <= 0 )
        {
            *(v0 + 9) = 16;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        object_setCollisionRegion(4);
        *(v0 + 16) = 19;
        *(v0 + 62) = 16;
        sprite_hasShadow();
        v1 = 2 * *(v0 + 22);
        v2 = *(&dword_80B9E34 + v1 + 1);
        *(v0 + 18) = *(&dword_80B9E34 + v1);
        *(v0 + 19) = v2;
        object_setCoordinatesFromPanels(v0);
        object_updateCollisionPanels(v0);
        *(v0 + 64) = 327680 * object_getFrontDirection(v0);
        *(v0 + 68) = 0;
        *(v0 + 32) = 40;
        result = 0;
        *(v0 + 34) = 0;
    }
    return result;
}


// 0x80b9e40
int sub_80B9E40()
{
    int v0; // r5
    int v1; // r0
    char v2; // r1
    int v7; // r2
    int result; // r0
    int v9; // r4
    int v10; // r0
    int v11; // r0

    if ( *(v0 + 10) )
    {
        *(v0 + 52) += *(v0 + 64);
        *(v0 + 56) += *(v0 + 68);
        v9 = *(v0 + 18);
        object_setPanelsFromCoordinates(v0);
        object_updateCollisionPanels(v0);
        if ( *(v0 + 18) != v9 )
            object_setCollisionRegion(4);
        v10 = *(v0 + 34) + 1;
        *(v0 + 34) = v10;
        if ( !__CFSHR__(v10, 3) )
            object_highlightPanelRegion(
                *(&off_80B9EFC + 2 * *(v0 + 22)),
                *(&off_80B9EFC + 2 * *(v0 + 22) + 1),
                37,
                *(v0 + 22));
        v11 = *(v0 + 32);
        _VF = __OFSUB__(v11, 1);
        result = v11 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ _VF) | (result == 0) )
        {
            object_clearCollisionRegion();
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 20;
        *(v0 + 62) = 16;
        sprite_hasShadow();
        v1 = 2 * *(v0 + 22);
        v2 = *(&dword_80B9EF4 + v1 + 1);
        *(v0 + 18) = *(&dword_80B9EF4 + v1);
        *(v0 + 19) = v2;
        object_setCoordinatesFromPanels(v0);
        object_updateCollisionPanels(v0);
        *(v0 + 64) = 786432 * object_getFrontDirection(v0);
        *(v0 + 68) = 471859;
        __asm { SVC         6 }
        *(v0 + 32) = 0;
        PlaySoundEffect(316, 786432, v7);
        result = 0;
        *(v0 + 34) = 0;
    }
    return result;
}


// 0x80b9f00
int sub_80B9F00()
{
    int v0; // r5

    **(v0 + 96) = 0;
    return object_freeMemory();
}


// 0x80b9f0e
int __fastcall sub_80B9F0E(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(12, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80b9f44
void sub_80B9F44()
{
    int v0; // r5

    (*(&off_80B9F5C + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80b9f68
signed int __noreturn sub_80B9F68()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    sprite_load(v0, 128, 8, 3);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80b9fa6
int sub_80B9FA6()
{
    int v0; // r5

    return (*(&off_80B9FB8 + *(v0 + 9)))();
}


// 0x80b9fd8
int __fastcall sub_80B9FD8(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            if ( (object_getPanelParameters(*(v3 + 18), *(v3 + 19)) & 0x10010) == 65552 )
                *(v3 + 9) = 4;
            else
                *(v3 + 9) = 28;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 3;
        PlaySoundEffect(148, 4, a3);
        *v3 |= 2u;
        result = 3;
        *(v3 + 32) = 3;
    }
    return result;
}


// 0x80ba02c
int sub_80BA02C()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 0;
        result = 10;
        *(v0 + 32) = 10;
    }
    return result;
}


// 0x80ba054
int sub_80BA054()
{
    int v0; // r5
    int v1; // r0
    int result; // r0
    int v3; // r0
    unsigned __int8 v4; // vf

    if ( *(v0 + 10) )
    {
        v3 = *(v0 + 32);
        v4 = __OFSUB__(v3, 1);
        result = v3 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v4) | (result == 0) )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        v1 = sub_80BA1D6();
        if ( v1 )
        {
            *(v0 + 5) = v1;
            *(v0 + 16) = 20;
            result = 10;
            *(v0 + 32) = 10;
        }
        else
        {
            *(v0 + 9) = 16;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80ba090
int sub_80BA090()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 32) = 0;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
        sub_80BA238(*(v0 + 5));
    return result;
}


// 0x80ba0d8
int sub_80BA0D8()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 20;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        result = 60;
        *(v0 + 32) = 60;
    }
    return result;
}


// 0x80ba0fc
int sub_80BA0FC()
{
    int v0; // r5
    int v1; // r0
    char v2; // r1
    int result; // r0
    char v4; // r1

    if ( *(v0 + 10) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 13 )
        {
            v4 = *(v0 + 21);
            *(v0 + 18) = *(v0 + 20);
            *(v0 + 19) = v4;
            object_setCoordinatesFromPanels(v0);
            result = 3;
            *(v0 + 16) = 3;
        }
        else if ( result <= 0 )
        {
            *(v0 + 9) = 24;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        v1 = sub_80BA294();
        if ( v1 )
        {
            *(v0 + 20) = v1;
            *(v0 + 21) = v2;
            *(v0 + 16) = 4;
            result = 16;
            *(v0 + 32) = 16;
        }
        else
        {
            *(v0 + 9) = 28;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80ba152
int __fastcall sub_80BA152(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *(v3 + 9) = 28;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 16;
        PlaySoundEffect(344, 4, a3);
        sub_80BA31C();
        result = 30;
        *(v3 + 32) = 30;
    }
    return result;
}


// 0x80ba186
int sub_80BA186()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 4;
        result = 3;
        *(v0 + 32) = 3;
    }
    return result;
}


// 0x80ba1b0
int __fastcall sub_80BA1B0(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(13, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80ba1d6
int sub_80BA1D6()
{
    Battle *v0; // r5
    int v1; // r4
    int *v2; // r1
    int v4; // [sp+0h] [bp-2Ch]

    v4 = -object_getFrontDirection(v0);
    v1 = 6;
    if ( v0->Alliance )
        v1 = 1;
    do
    {
        if ( v1 == v0->panelX )
            break;
        v2 = &byte_80BA228[8 * v0->Alliance];
        if ( object_getPanelsInColumnFiltered(v1, v2, *v2, v2[1]) )
            return v1;
        v1 += v4;
        if ( v1 < 1 )
            break;
    }
    while ( v1 <= 6 );
    return 0;
}


// 0x80ba238
int __fastcall __noreturn sub_80BA238(int a1)
{
    int v1; // r5
    int v2; // r4
    int v3; // r6
    bool v4; // zf
    int result; // r0
    int v6; // r1
    int v7; // ST08_4
    int v8; // r3
    int v9; // r6
    int v10; // ST00_4
    int v11; // r5

    v2 = a1;
    v3 = 1;
    do
    {
        v4 = object_checkPanelParameters(v2, v3, *&byte_80BA284[8 * *(v1 + 22)], *&byte_80BA284[8 * *(v1 + 22) + 4]) == 0;
        result = v2;
        v6 = v3;
        if ( !v4 )
        {
            v7 = v3;
            v8 = *(v1 + 44) >> 12 << 12;
            v9 = *(v1 + 4) | v8;
            v10 = v1;
            v11 = *(v1 + 76);
            result = sub_80D0996(v2, v6, 0, v8);
            v1 = v10;
            v3 = v7;
        }
        ++v3;
    }
    while ( v3 <= 3 );
    return result;
}


// 0x80ba294
int sub_80BA294()
{
    Battle *v0; // r5
    signed int v1; // r4
    bool v2; // zf
    int result; // r0
    int v4; // [sp-8h] [bp-2Ch]
    int v5; // [sp-8h] [bp-2Ch]
    unsigned __int8 v6; // [sp+0h] [bp-24h]

    v1 = 1;
    while ( 1 )
    {
        v4 = object_getFrontDirection(v0) * v1 + v0->panelX;
        if ( !object_isValidPanel(v4, 1) )
            return 0;
        if ( object_getPanelsInColumnFiltered(v4, 4 * v0->Alliance, *(&off_80BA308 + v0->Alliance), 0) )
            break;
        if ( ++v1 >= 6 )
            return 0;
    }
    v5 = (v6 & 7) - object_getFrontDirection(v0);
    v2 = object_checkPanelParameters(v5, v6 >> 4, 16, 260571264) == 0;
    result = v5;
    if ( v2 && (v5 != v0->panelX || v6 >> 4 != v0->panelY) )
        return 0;
    return result;
}


// 0x80ba31c
void sub_80BA31C()
{
    int v0; // r5
    char v1; // r0
    int v2; // r6
    char v3; // r0
    int v4; // r1
    int v5; // r0
    int v6; // r1

    v1 = object_getFrontDirection(v0);
    v2 = *(v0 + 44);
    sub_80C53A6(v1 + *(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
    object_getFlip(v0);
    v3 = object_getFrontDirection(v0);
    v4 = *(v0 + 19);
    v5 = object_getCoordinatesForPanels(v3 + *(v0 + 18));
    SpawnT4BattleObjectWithId0(v0, v5, v5, v6, 0x100000);
}


// 0x80ba364
void sub_80BA364()
{
    int v0; // r5

    (*(&off_80BA37C + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80ba388
signed int __noreturn sub_80BA388()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_decompress(8, 14);
    sprite_load(v0, 128, 8, 14);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    sub_8010DF6(2, 14);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80ba3d8
int sub_80BA3D8()
{
    int v0; // r5

    return (*(&off_80BA3EC + *(v0 + 9)))();
}


// 0x80ba414
int __fastcall sub_80BA414(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            if ( (object_getPanelParameters(*(v3 + 18), *(v3 + 19)) & 0x10010) == 65552 )
                *(v3 + 9) = 4;
            else
                *(v3 + 9) = 36;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 19;
        PlaySoundEffect(148, 4, a3);
        *v3 |= 2u;
        result = 10;
        *(v3 + 32) = 10;
    }
    return result;
}


// 0x80ba468
int sub_80BA468()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 0;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80ba490
int sub_80BA490()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 13;
        result = 19;
        *(v0 + 32) = 19;
    }
    return result;
}


// 0x80ba4ba
int sub_80BA4BA()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        *(v0 + 62) -= 6;
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            if ( object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & *(&off_80BA520 + *(v0 + 22)) )
                *(v0 + 9) = 16;
            else
                *(v0 + 9) = 28;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 18) += 3 * object_getFrontDirection(v0);
        object_setCoordinatesFromPanels(v0);
        *(v0 + 62) = 30;
        *(v0 + 16) = 14;
        result = 5;
        *(v0 + 32) = 5;
    }
    return result;
}


// 0x80ba528
int __fastcall sub_80BA528(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r1
    int v5; // r2
    int result; // r0

    if ( *(v3 + 10) )
    {
        result = *(v3 + 32) - 1;
        *(v3 + 32) = result;
        if ( result == 21 )
        {
            result = PlaySoundEffect(276, a2, a3);
        }
        else if ( result <= 0 )
        {
            *(v3 + 9) = 20;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 15;
        sub_80BA6A4();
        PlaySoundEffect(426, v4, v5);
        result = 46;
        *(v3 + 32) = 46;
    }
    return result;
}


// 0x80ba56c
int sub_80BA56C()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int v3; // r0
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 16;
        *(v0 + 32) = 72;
        *(v0 + 34) = 0;
    }
    v1 = *(v0 + 34);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 34) = v1;
    if ( ((v1 < 0) ^ v2) | (v1 == 0) )
    {
        sub_80BA686();
        *(v0 + 34) = 12;
        sub_80BA6B6();
    }
    v3 = *(v0 + 32);
    v2 = __OFSUB__(v3, 1);
    result = v3 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 24;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80ba5aa
int sub_80BA5AA()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 32;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 17;
        result = 7;
        *(v0 + 32) = 7;
    }
    return result;
}


// 0x80ba5d2
int sub_80BA5D2()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 32;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        result = 20;
        *(v0 + 32) = 20;
    }
    return result;
}


// 0x80ba5f6
int sub_80BA5F6()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        *(v0 + 62) += 6;
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            sub_8011044(2, 14);
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 18;
        result = 5;
        *(v0 + 32) = 5;
    }
    return result;
}


// 0x80ba62e
int sub_80BA62E()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            sub_8011044(2, 14);
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 13;
        result = 19;
        *(v0 + 32) = 19;
    }
    return result;
}


// 0x80ba660
int __fastcall sub_80BA660(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(14, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80ba686
_BYTE *sub_80BA686()
{
    int v0; // r5
    int v1; // r6

    v1 = *(v0 + 44);
    return sub_80C53A6(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
}


// 0x80ba6a4
signed int sub_80BA6A4()
{
    int v0; // r5
    signed int result; // r0

    result = 1;
    ++*(v0 + 58);
    ++*(v0 + 62);
    return result;
}


// 0x80ba6b6
void sub_80BA6B6()
{
    Battle *v0; // r5
    int v1; // r1
    int v2; // r6
    int v3; // r1
    int v4; // r7
    char v5; // r0
    char v6; // r2
    int v7; // r0
    char v8; // r0
    char v9; // r2
    int v10; // r0
    int v11; // [sp-8h] [bp-18h]

    v1 = v0->panelY;
    v2 = object_getCoordinatesForPanels(v0->panelX);
    v4 = v3;
    GetPositiveSignedRNG2();
    v6 = v5;
    v7 = (v5 & 0x1F) << 16;
    if ( !(v6 & 1) )
        v7 = -v7;
    v11 = v2 + v7;
    GetPositiveSignedRNG2();
    v9 = v8;
    v10 = (v8 & 0xF) << 16;
    if ( !(v9 & 1) )
        v10 = -v10;
    SpawnT4BattleObjectWithId0(v0, v10, v11, v4 + 0x100000, v10 + 2359296);
}


// 0x80ba708
void sub_80BA708()
{
    int v0; // r5

    (*(&off_80BA720 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80ba72c
signed int __noreturn sub_80BA72C()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_decompress(8, 15);
    sprite_load(v0, 128, 8, 15);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80ba772
int sub_80BA772()
{
    int v0; // r5

    return (*(&off_80BA784 + *(v0 + 9)))();
}


// 0x80ba7a0
int __fastcall sub_80BA7A0(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            if ( (object_getPanelParameters(*(v3 + 18), *(v3 + 19)) & 0x10010) == 65552 )
                *(v3 + 9) = 4;
            else
                *(v3 + 9) = 24;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 3;
        PlaySoundEffect(148, 4, a3);
        *v3 |= 2u;
        result = 2;
        *(v3 + 32) = 2;
    }
    return result;
}


// 0x80ba7f4
int sub_80BA7F4()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 0;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80ba81c
int __fastcall sub_80BA81C(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // r0
    unsigned __int8 v7; // vf

    if ( *(v4 + 10) )
    {
        v6 = *(v4 + 32);
        v7 = __OFSUB__(v6, 1);
        result = v6 - 1;
        *(v4 + 32) = result;
        if ( ((result < 0) ^ v7) | (result == 0) )
        {
            *(v4 + 9) = 12;
            result = 0;
            *(v4 + 10) = 0;
        }
    }
    else
    {
        *(v4 + 10) = 4;
        *(v4 + 16) = 6;
        *(v4 + 96) = sub_80E71A0(6, a2, a3, a4);
        result = 15;
        *(v4 + 32) = 15;
    }
    return result;
}


// 0x80ba84c
int sub_80BA84C()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int result; // r0
    int v4; // r0
    unsigned __int8 v5; // vf
    int v6; // r0

    if ( *(v0 + 10) )
    {
        v4 = *(v0 + 32);
        v5 = __OFSUB__(v4, 1);
        result = v4 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v5) | (result == 0) )
        {
            v6 = *(v0 + 96);
            if ( v6 )
                sub_80E71B8(v6);
            sub_80BA9A4();
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 7;
        sub_80BA946();
        PlaySoundEffect(186, v1, v2);
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80ba89c
int sub_80BA89C()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 10) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 15 )
        {
            result = sub_80BAA0C();
        }
        else if ( result <= 0 )
        {
            *(v0 + 9) = 20;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 5;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80ba8d0
int sub_80BA8D0()
{
    int v0; // r5
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 0;
    }
    result = *(v0 + 116);
    if ( result == *(v0 + 100) )
        sub_80BAA4C();
    return result;
}


// 0x80ba8f6
int sub_80BA8F6()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 4;
        result = 2;
        *(v0 + 32) = 2;
    }
    return result;
}


// 0x80ba920
int __fastcall sub_80BA920(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(15, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80ba946
_BYTE *sub_80BA946()
{
    int v0; // r5
    char v1; // r0
    int v2; // r6
    char v3; // r0
    int v4; // r6
    char v5; // r0
    int v6; // r6

    v1 = object_getFrontDirection(v0);
    v2 = *(v0 + 44);
    sub_80C53A6(v1 + *(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
    v3 = object_getFrontDirection(v0);
    v4 = *(v0 + 44);
    sub_80C53A6(2 * v3 + *(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
    v5 = object_getFrontDirection(v0);
    v6 = *(v0 + 44);
    return sub_80C53A6(3 * v5 + *(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
}


// 0x80ba9a4
void __noreturn sub_80BA9A4()
{
    int v0; // r5

    sub_800D618(byte_80BA9F8[4 * *(v0 + 22)], 1, *(v0 + 22));
}


// 0x80baa0c
int sub_80BAA0C()
{
    int v0; // r5
    int v1; // r7
    int v2; // r3
    int v3; // r6
    int result; // r0

    v1 = 0;
    do
    {
        v2 = *(v0 + 44) >> 12 << 12;
        v3 = *(v0 + 4) | (*(v0 + 46) << 16) | v2;
        sub_80D7C7E(*(v0 + v1 + 104) & 7, *(v0 + v1 + 104) >> 4, 0, v2);
        ++v1;
        result = *(v0 + 100);
    }
    while ( v1 < result );
    return result;
}


// 0x80baa4c
void __noreturn sub_80BAA4C()
{
    int v0; // r5

    sub_800D618(*(&off_80BAA84 + 4 * *(v0 + 22)), 1, *(v0 + 22));
}


// 0x80baa8c
void sub_80BAA8C()
{
    int v0; // r5

    (*(&off_80BAAA4 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80baab0
signed int __noreturn sub_80BAAB0()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    sprite_decompress(8, 16);
    sprite_load(v0, 128, 8, 16);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    sub_8010DF6(2, 16);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80bab00
int sub_80BAB00()
{
    int v0; // r5

    return (*(&off_80BAB14 + *(v0 + 9)))();
}


// 0x80bab30
int __fastcall sub_80BAB30(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 11) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            if ( (object_getPanelParameters(*(v3 + 18), *(v3 + 19)) & 0x10010) == 65552 )
                *(v3 + 9) = 4;
            else
                *(v3 + 9) = 24;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 11) = 4;
        *(v3 + 16) = 3;
        PlaySoundEffect(148, 4, a3);
        *v3 |= 2u;
        result = 2;
        *(v3 + 32) = 2;
    }
    return result;
}


// 0x80bab84
int sub_80BAB84()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 0;
        result = 10;
        *(v0 + 32) = 10;
    }
    return result;
}


// 0x80babac
int __fastcall sub_80BABAC(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r1
    int v5; // r2
    int v6; // r0
    int result; // r0
    int v8; // r0
    unsigned __int8 v9; // vf
    int v10; // r1
    int v11; // r2
    int v12; // r0
    char v13; // r0

    if ( *(v3 + 11) )
    {
        if ( *(*(*(v3 + 76) + 88) + 44) & 1 )
        {
            PlaySoundEffect(386, 1, a3);
            *(v3 + 9) = 12;
            result = 0;
            *(v3 + 10) = 0;
        }
        else
        {
            v8 = *(v3 + 32);
            v9 = __OFSUB__(v8--, 1);
            *(v3 + 32) = v8;
            if ( ((v8 < 0) ^ v9) | (v8 == 0) )
            {
                *(v3 + 96) = (*(v3 + 96) + 1) & 3;
                sprite_setPallete(*(&dword_80BAC4C + *(v3 + 96)));
                PlaySoundEffect(308, v10, v11);
                *(v3 + 32) = *(v3 + 4);
            }
            v12 = *(v3 + 34);
            v9 = __OFSUB__(v12, 1);
            result = v12 - 1;
            *(v3 + 34) = result;
            if ( ((result < 0) ^ v9) | (result == 0) )
            {
                GetPositiveSignedRNG2();
                *(v3 + 96) = v13 & 3;
                sprite_setPallete(*(&dword_80BAC4C + *(v3 + 96)));
                *(v3 + 9) = 12;
                result = 0;
                *(v3 + 10) = 0;
            }
        }
    }
    else
    {
        *(v3 + 11) = 4;
        *(v3 + 96) = 0;
        sprite_setPallete(*(&dword_80BAC4C + *(v3 + 96)));
        PlaySoundEffect(308, v4, v5);
        v6 = *(v3 + 4);
        *(v3 + 32) = v6;
        result = 20 * v6;
        *(v3 + 34) = result;
    }
    return result;
}


// 0x80bac50
int sub_80BAC50()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 11) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 16 )
        {
            result = 7;
            *(v0 + 16) = 7;
        }
        else if ( result <= 0 )
        {
            *(v0 + 9) = 16;
            result = 4 * *(v0 + 96);
            *(v0 + 10) = result;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 5;
        *(v0 + 32) = 35;
        result = *(v0 + 96);
        if ( result == 3 )
            sub_80BAF06();
    }
    return result;
}


// 0x80bac98
int sub_80BAC98()
{
    int v0; // r5

    return (*(&off_80BACAC + *(v0 + 10)))();
}


// 0x80bacbc
int __fastcall sub_80BACBC(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r0
    unsigned __int8 v6; // vf
    int result; // r0
    int v8; // r0

    if ( !*(v4 + 11) )
    {
        *(v4 + 11) = 4;
        sub_80BAE3C();
    }
    v5 = *(v4 + 32);
    v6 = __OFSUB__(v5, 1);
    result = v5 - 1;
    *(v4 + 32) = result;
    if ( ((result < 0) ^ v6) | (result == 0) )
    {
        sub_80BAE60(*(v4 + 6), a2, a3, a4);
        v8 = *(v4 + 6) + 1;
        *(v4 + 6) = v8;
        if ( v8 >= *(v4 + 5) )
        {
            *(v4 + 9) = 20;
            result = 0;
            *(v4 + 10) = 0;
        }
        else
        {
            result = 12;
            *(v4 + 32) = 12;
        }
    }
    return result;
}


// 0x80bad06
int sub_80BAD06()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 4;
        sub_80BAE7A();
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 20;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bad34
int sub_80BAD34()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
            sub_80BAEDC(*(v0 + 6));
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 6) = 0;
        result = 0;
        *(v0 + 32) = 0;
    }
    return result;
}


// 0x80bad76
int sub_80BAD76()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // r0

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            sub_80BAEC0(*(v0 + 6));
            v4 = *(v0 + 6) + 1;
            *(v0 + 6) = v4;
            if ( v4 >= 3 )
            {
                *(v0 + 9) = 20;
                result = 0;
                *(v0 + 10) = 0;
            }
            else
            {
                result = 16;
                *(v0 + 32) = 16;
            }
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 6) = 0;
        result = 0;
        *(v0 + 32) = 0;
    }
    return result;
}


// 0x80badb4
int sub_80BADB4()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 11) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 5 )
        {
            result = 8;
            *(v0 + 16) = 8;
        }
        else if ( result <= 0 )
        {
            *(v0 + 9) = 24;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        result = 20;
        *(v0 + 32) = 20;
    }
    return result;
}


// 0x80bade4
int sub_80BADE4()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            sub_8011044(2, 16);
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 4;
        result = 2;
        *(v0 + 32) = 2;
    }
    return result;
}


// 0x80bae16
int __fastcall sub_80BAE16(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(16, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80bae3c
int __noreturn sub_80BAE3C()
{
    int v0; // r5

    return object_getPanelsExceptCurrentFilterred(4 * *(v0 + 22), &off_80BAE58, *(&off_80BAE58 + *(v0 + 22)), 0);
}


// 0x80bae60
int __fastcall sub_80BAE60(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6

    v5 = *(v4 + 44);
    return sub_80D6D18(*(v4 + a1 + 100) & 7, *(v4 + a1 + 100) >> 4, 1, a4);
}


// 0x80bae7a
__int64 __noreturn sub_80BAE7A()
{
    int v0; // r5
    signed int v1; // r7
    int v2; // r0
    int v3; // r6
    bool v4; // zf
    __int64 result; // r0
    __int64 v6; // [sp-8h] [bp-18h]

    v1 = -1;
    do
    {
        v2 = object_getFrontDirection(v0);
        v3 = *(v0 + 44);
        LODWORD(v6) = v2 + *(v0 + 18);
        HIDWORD(v6) = *(v0 + 19) + v1;
        sub_80D6EB0(v6, SHIDWORD(v6), 2, 0x10000);
        v4 = object_isPanelSolid(v6, SHIDWORD(v6)) == 0;
        result = v6;
        if ( !v4 )
            object_setPanelType(v6, SHIDWORD(v6), 7);
        ++v1;
    }
    while ( v1 <= 1 );
    return result;
}


// 0x80baec0
int __fastcall sub_80BAEC0(int a1)
{
    int v1; // r5
    int v2; // r4
    char v3; // r0
    int v4; // r6
    int v5; // r3

    v2 = a1;
    v3 = object_getFrontDirection(v1);
    v4 = *(v1 + 44);
    return sub_80DC4B8(3 * v3 + *(v1 + 18), v2 + 1, 3, v5);
}


// 0x80baedc
int __fastcall __noreturn sub_80BAEDC(int a1)
{
    int v1; // r5
    int v2; // r3
    int v3; // r6
    int v5; // [sp-8h] [bp-18h]
    int v6; // [sp-4h] [bp-14h]

    v5 = object_getFrontDirection(v1) * (a1 + 1) + *(v1 + 18);
    v6 = *(v1 + 19);
    if ( !object_isPanelSolid(v5, v6) )
        return 0;
    v3 = *(v1 + 44);
    return sub_80DC5B4(v5, v6, 4, v2);
}


// 0x80baf06
unsigned __int64 __noreturn sub_80BAF06()
{
    int v0; // r4
    int v1; // r6
    bool v2; // zf
    unsigned __int64 result; // r0

    v0 = 1;
    do
    {
        v1 = 1;
        do
        {
            v2 = object_isPanelSolid(v0, v1) == 0;
            result = __PAIR__(v1, v0);
            if ( !v2 )
                object_setPanelType(v0, v1, 6);
            ++v1;
        }
        while ( v1 <= 3 );
        ++v0;
    }
    while ( v0 <= 6 );
    return result;
}


// 0x80baf50
void sub_80BAF50()
{
    int v0; // r5

    (*(&off_80BAF68 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80baf74
int __noreturn sub_80BAF74()
{
    Battle *v0; // r5
    u32 *v1; // r4
    Battle *v2; // ST04_4
    u32 *v3; // r5
    int v4; // r0
    int v5; // ST00_4
    char *v6; // r0
    int v7; // r1
    int v8; // r2
    int v9; // r0
    int v10; // r1
    u32 v11; // r2
    u32 v12; // r3
    u32 *v13; // r0
    Battle *v14; // ST04_4
    u32 *v15; // r5
    int v16; // r0
    int v17; // r0
    int v18; // r0
    int v19; // r1

    v1 = v0->parent;
    if ( sub_800F29C(*(v1 + 20)) == 2 )
    {
        v2 = v0;
        v3 = v0->parent;
        v4 = sub_8013774(2, 44);
        v5 = v4;
        v6 = sub_8013774(v4, 41);
        v0 = v2;
        sub_800FC9E(v6, v5);
    }
    else
    {
        v9 = sub_800F26C(*(v1 + 20));
        v8 = v10;
        v7 = v9;
    }
    sprite_load(v0, 128, v7, v8);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    v0->currAnimation = 0;
    v0->currAnimationCpy = -1;
    v0->objFlags |= 2u;
    v11 = v0->parent[14];
    v12 = v0->parent[15];
    v13 = &v0->x;
    *v13 = v0->parent[13];
    v13[1] = v11;
    v13[2] = v12;
    object_setPanelsFromCoordinates(v0);
    v14 = v0;
    v15 = v0->parent;
    v16 = sub_801002C();
    sprite_setPallete(v16);
    v17 = object_getFlip(v14);
    sprite_setFlip(v14, v17);
    v18 = sub_800F29C(*(v1 + 20));
    sub_8010DF6(v18, v19);
    sub_80E1352(v14->parent, 0xFu);
    *&v14->currState = 4;
    return sub_80BB00C();
}


// 0x80bb00c
int sub_80BB00C()
{
    _BYTE *v0; // r5

    *v0 |= 2u;
    if ( !sub_800EB6C(v0[22]) )
        *v0 &= 0xFDu;
    return (*(&off_80BB038 + v0[10]))();
}


// 0x80bb048
int sub_80BB048()
{
    int v0; // r5
    int v1; // r0
    int v2; // r6
    int v3; // r1
    int v4; // r2
    int v5; // r1
    int v6; // r2

    object_getFrontDirection(v0);
    v1 = *(v0 + 22);
    v2 = *(&dword_80BB094 + v1);
    *(v0 + 108) = v2;
    *(v0 + 116) = v2;
    *(v0 + 112) = *(&dword_80BB094 + v1 + 2);
    *(v0 + 120) = 1;
    sub_80BB23E();
    PlaySoundEffect(270, v3, v4);
    *(v0 + 34) = byte_12C;
    *(v0 + 32) = 6;
    *(v0 + 10) = 4;
    return sub_80BB098(4, v5, v6);
}


// 0x80bb098
signed int __fastcall sub_80BB098(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r2
    signed int result; // r0

    v4 = *(v3 + 34) - 1;
    *(v3 + 34) = v4;
    if ( !v4 )
        goto LABEL_8;
    v5 = *(v3 + 32) - 1;
    *(v3 + 32) = v5;
    if ( !v5 )
    {
        *(v3 + 32) = 6;
        ho_80BB170();
        PlaySoundEffect(270, v6, v7);
    }
    result = *(*(*(v3 + 76) + 88) + 44);
    a2 = 1;
    if ( result & 1 )
    {
LABEL_8:
        PlaySoundEffect(189, a2, a3);
        result = 8;
        *(v3 + 10) = 8;
    }
    return result;
}


// 0x80bb0d2
int sub_80BB0D2()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 16;
        *(v0 + 11) = 4;
    }
    sub_80BB1D8();
    --*(v0 + 34);
    if ( *(v0 + 32) == 4 )
        *(v0 + 16) = 12;
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
        sub_80BB1FE();
    return result;
}


// 0x80bb10c
int sub_80BB10C()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r0
    int v5; // r1

    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        v4 = sub_800F29C(*(*(v0 + 76) + 40));
        sub_8011044(v4, v5);
        *v0 &= 0xFDu;
        *(v0 + 8) = 8;
        sub_80E13DC(*(v0 + 76));
        result = 0;
        **(v0 + 96) = 0;
    }
    return result;
}


// 0x80bb13e
int __fastcall sub_80BB13E(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(19, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 76) = v11;
        *(v4 + 96) = v6;
        *v6 = 1;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 40) = *(v11 + 40);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80bb170
int ho_80BB170()
{
    Battle *v0; // r5

    object_getFrontDirection(v0);
    (*(jt_80BB18C + v0->bPhaseInitialized))();
    return sub_80BB23E();
}


// 0x80bb19c
signed int sub_80BB19C()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 120) = 2;
    result = 4;
    *(v0 + 11) = 4;
    return result;
}


// 0x80bb1a6
signed int sub_80BB1A6()
{
    int v0; // r5
    int v1; // r6
    int v2; // r1
    signed int result; // r0

    v2 = *(v0 + 116) - v1;
    *(v0 + 116) = v2;
    result = *(v0 + 112);
    if ( result == v2 )
    {
        result = 8;
        *(v0 + 11) = 8;
    }
    return result;
}


// 0x80bb1ba
signed int sub_80BB1BA()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 120) = 1;
    result = 12;
    *(v0 + 11) = 12;
    return result;
}


// 0x80bb1c4
int sub_80BB1C4()
{
    int v0; // r5
    int v1; // r6
    int v2; // r1
    int result; // r0

    v2 = *(v0 + 116) + v1;
    *(v0 + 116) = v2;
    result = *(v0 + 108);
    if ( result == v2 )
    {
        result = 0;
        *(v0 + 11) = 0;
    }
    return result;
}


// 0x80bb1d8
int sub_80BB1D8()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 34);
    if ( !(result & 4) )
    {
        sub_8109660(*(v0 + 116), *(v0 + 120), 2, *(v0 + 22));
        result = sub_8109660(*(v0 + 116), *(v0 + 120) + 1, 2, *(v0 + 22));
    }
    return result;
}


// 0x80bb1fe
void __noreturn sub_80BB1FE()
{
    int v0; // r5
    int v1; // r3
    int v2; // r6

    object_getFrontDirection(v0);
    v2 = *(v0 + 44);
    sub_80BB228(*(v0 + 116), *(v0 + 120), 1, v1);
}


// 0x80bb228
void __fastcall __noreturn sub_80BB228(int a1, int a2, int a3, int a4)
{
    char v4; // [sp+0h] [bp-24h]
    int v5; // [sp+4h] [bp-20h]
    int v6; // [sp+8h] [bp-1Ch]
    int v7; // [sp+Ch] [bp-18h]

    v4 = a1;
    v5 = a2;
    v6 = a3;
    v7 = a4;
    if ( object_getPanelParameters(a1, a2) & 0x10 )
        sub_80C8DE0(v4, v5, v6, v7);
}


// 0x80bb23e
void sub_80BB23E()
{
    int v0; // r5
    int v1; // r6
    int v2; // r1
    int v3; // r0
    int v4; // r1
    int v5; // r1
    int v6; // r2
    int v7; // r3
    int v8; // r2
    int v9; // r1
    int v10; // r3
    int v11; // r1
    int v12; // r2
    int v13; // r3

    v1 = object_getFrontDirection(v0);
    v2 = *(v0 + 120);
    v3 = object_getCoordinatesForPanels(*(v0 + 116));
    sub_80BB278(v3, v3, v4, 0);
    sub_80BB278(2621440 * v1, v5 + 2621440 * v1, v6, v7);
    sub_80BB278(1572864, v9, v8 + 1572864, v10);
    sub_80BB278(2621440 * v1, v11 - 2621440 * v1, v12, v13);
}


// 0x80bb278
void __fastcall sub_80BB278(int a1, int a2, int a3, int a4)
{
    Battle *v4; // r5
    int v5; // r0

    SpawnT4BattleObjectWithId0(v4, a1, a2, a3, a4);
    if ( v5 )
        *(v5 + 32) = 6;
}


// 0x80bb2a0
void sub_80BB2A0()
{
    int v0; // r5

    (*(&off_80BB2B8 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80bb2c4
int __noreturn sub_80BB2C4()
{
    Battle *obj; // r5
    u32 *v1; // r4
    Battle *v2; // ST04_4
    u32 *v3; // r5
    int v4; // r0
    int v5; // ST00_4
    char *v6; // r0
    int v7; // r1
    int v8; // r2
    int v9; // r0
    int v10; // r1
    u32 v11; // r2
    u32 v12; // r3
    u32 *v13; // r0
    Battle *v14; // ST04_4
    u32 *v15; // r5
    int v16; // r0
    int v17; // r0
    int v18; // r0
    int v19; // r1

    v1 = obj->parent;
    if ( sub_800F29C(*(v1 + 20)) == 2 )
    {
        v2 = obj;
        v3 = obj->parent;
        v4 = sub_8013774(2, 44);
        v5 = v4;
        v6 = sub_8013774(v4, 41);
        obj = v2;
        sub_800FC9E(v6, v5);
    }
    else
    {
        v9 = sub_800F26C(*(v1 + 20));
        v8 = v10;
        v7 = v9;
    }
    sprite_load(obj, 128, v7, v8);
    sprite_loadAnimationData(obj);
    sprite_hasShadow();
    obj->currAnimation = 0;
    obj->currAnimationCpy = -1;
    obj->objFlags |= 2u;
    v11 = obj->parent[14];
    v12 = obj->parent[15];
    v13 = &obj->x;
    *v13 = obj->parent[13];
    v13[1] = v11;
    v13[2] = v12;
    object_setPanelsFromCoordinates(obj);
    v14 = obj;
    v15 = obj->parent;
    v16 = sub_801002C();
    sprite_setPallete(v16);
    v17 = object_getFlip(v14);
    sprite_setFlip(v14, v17);
    v18 = sub_800F29C(*(v1 + 20));
    sub_8010DF6(v18, v19);
    sub_80E1352(v14->parent, 0xFu);
    *&v14->currState = 4;
    return sub_80BB35C();
}


// 0x80bb35c
int sub_80BB35C()
{
    _BYTE *v0; // r5

    *v0 |= 2u;
    if ( !sub_800EB6C(v0[22]) )
        *v0 &= 0xFDu;
    return (*(&off_80BB388 + v0[10]))();
}


// 0x80bb398
void __noreturn sub_80BB398()
{
    int v0; // r5
    int v1; // r6

    object_getFrontDirection(v0);
    *(v0 + 120) = 2;
    v1 = byte_80BB3F4[*(v0 + 22)];
    *(v0 + 108) = v1;
    sub_800D5F0(v1, *(v0 + 22));
}


// 0x80bb3f6
signed int sub_80BB3F6()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    int v3; // r1
    int v4; // r2
    signed int result; // r0

    v1 = *(v0 + 34) - 1;
    *(v0 + 34) = v1;
    if ( !v1 )
        goto LABEL_8;
    v2 = *(v0 + 32) - 1;
    *(v0 + 32) = v2;
    if ( !v2 )
    {
        *(v0 + 32) = 12;
        sub_80BB4CE();
        PlaySoundEffect(270, v3, v4);
    }
    result = *(*(*(v0 + 76) + 88) + 44);
    if ( result & 1 )
    {
LABEL_8:
        *(v0 + 124) = *(v0 + 11);
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80bb42e
int __fastcall sub_80BB42E(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    unsigned __int8 v5; // vf
    int result; // r0

    if ( !*(v3 + 11) )
    {
        *(v3 + 32) = 16;
        *(v3 + 11) = 4;
    }
    --*(v3 + 34);
    if ( *(v3 + 32) == 4 )
        *(v3 + 16) = 12;
    v4 = *(v3 + 32);
    v5 = __OFSUB__(v4, 1);
    result = v4 - 1;
    *(v3 + 32) = result;
    if ( (result < 0) ^ v5 )
    {
        PlaySoundEffect(180, a2, a3);
        sub_80BB52E();
        *(v3 + 32) = 60;
        result = 12;
        *(v3 + 10) = 12;
    }
    return result;
}


// 0x80bb46a
int sub_80BB46A()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r0
    int v5; // r1

    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        v4 = sub_800F29C(*(*(v0 + 76) + 40));
        sub_8011044(v4, v5);
        *v0 &= 0xFDu;
        *(v0 + 8) = 8;
        sub_80E13DC(*(v0 + 76));
        result = 0;
        **(v0 + 96) = 0;
    }
    return result;
}


// 0x80bb49c
int __fastcall sub_80BB49C(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(20, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 76) = v11;
        *(v4 + 96) = v6;
        *v6 = 1;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 40) = *(v11 + 40);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80bb4ce
int sub_80BB4CE()
{
    Battle *v0; // r5

    object_getFrontDirection(v0);
    (*(&off_80BB4F0 + v0->bPhaseInitialized))();
    return sub_80BB59A();
}


// 0x80bb4f8
signed int sub_80BB4F8()
{
    int v0; // r5
    int v1; // r6
    int v2; // r1
    signed int result; // r0

    v2 = *(v0 + 116);
    result = *(v0 + 108);
    if ( result == v2 )
    {
        *(v0 + 116) = result - v1;
        *(v0 + 120) = 1;
        result = 4;
        *(v0 + 11) = 4;
    }
    else
    {
        *(v0 + 116) = v2 + v1;
    }
    return result;
}


// 0x80bb514
int sub_80BB514()
{
    int v0; // r5
    signed int v1; // r1
    int result; // r0

    v1 = *(v0 + 120);
    if ( v1 < 3 )
    {
        *(v0 + 120) = v1 + 1;
    }
    else
    {
        *(v0 + 116) = *(v0 + 112);
        *(v0 + 120) = 2;
        result = 0;
        *(v0 + 11) = 0;
    }
    return result;
}


// 0x80bb52e
int sub_80BB52E()
{
    int v0; // r5
    int v1; // r2
    signed int v2; // r0
    int v3; // r1
    char *v4; // r7
    int v5; // r0
    int v6; // r6
    int v8; // [sp-Ch] [bp-1Ch]
    int v9; // [sp-8h] [bp-18h]

    object_getFrontDirection(v0);
    v2 = 4;
    v3 = *(v0 + 124);
    if ( v3 )
        v2 = 29;
    v4 = *(&off_8019B78 + v2);
    v5 = *v4;
    if ( v5 != 127 )
    {
        v8 = v5 + *(v0 + 116);
        v9 = v4[1] + *(v0 + 120);
        v6 = *(v0 + 44);
        sub_80C53A6(v8, v9, *(v0 + 14), 0);
        object_breakPanel_dup2(v8, v9);
    }
    PlaySoundEffect(271, v3, v1);
    return camera_initShakeEffect_80302a8(1, 30);
}


// 0x80bb59a
void sub_80BB59A()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r1
    int v4; // r1
    int v5; // r2
    int v6; // r3
    int v7; // r2
    int v8; // r1
    int v9; // r3
    int v10; // r1
    int v11; // r2
    int v12; // r3

    v1 = *(v0 + 120);
    v2 = object_getCoordinatesForPanels(*(v0 + 116));
    sub_80BB5DC(v2, v2, v3, 0);
    if ( *(v0 + 11) )
    {
        sub_80BB5DC(2621440, v4 - 2621440, v5, v6);
        sub_80BB5DC(5242880, v10 + 5242880, v11, v12);
    }
    else
    {
        sub_80BB5DC(1572864, v4, v5 - 1572864, v6);
        sub_80BB5DC(3145728, v8, v7 + 3145728, v9);
    }
}


// 0x80bb5dc
void __fastcall sub_80BB5DC(int a1, int a2, int a3, int a4)
{
    Battle *v4; // r5
    __int16 v5; // r7
    int v6; // r0

    SpawnT4BattleObjectWithId0(v4, a1, a2, a3, a4);
    if ( v6 )
        *(v6 + 32) = v5;
}


// 0x80bb608
void sub_80BB608()
{
    int v0; // r5

    (*(&off_80BB620 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80bb62c
signed int __noreturn sub_80BB62C()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    sprite_load(v0, 128, 8, 4);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80bb66a
int sub_80BB66A()
{
    int v0; // r5

    return (*(&off_80BB67C + *(v0 + 9)))();
}


// 0x80bb694
int __fastcall sub_80BB694(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            if ( (object_getPanelParameters(*(v3 + 18), *(v3 + 19)) & 0x10010) == 65552 )
                *(v3 + 9) = 4;
            else
                *(v3 + 9) = 20;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 3;
        PlaySoundEffect(148, 4, a3);
        *v3 |= 2u;
        result = 3;
        *(v3 + 32) = 3;
    }
    return result;
}


// 0x80bb6e8
int sub_80BB6E8()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 0;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80bb710
int sub_80BB710()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int result; // r0
    int v4; // r0
    unsigned __int8 v5; // vf
    int v6; // r0
    int v7; // r1
    int v8; // r2

    if ( *(v0 + 10) )
    {
        if ( sub_80BB89C() || (v4 = *(v0 + 32), v5 = __OFSUB__(v4, 1), --v4, *(v0 + 32) = v4, ((v4 < 0) ^ v5) | (v4 == 0)) )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
        else
        {
            v6 = *(v0 + 34);
            v5 = __OFSUB__(v6, 1);
            result = v6 - 1;
            *(v0 + 34) = result;
            if ( ((result < 0) ^ v5) | (result == 0) )
            {
                sub_80BB866();
                sub_80BB81C();
                PlaySoundEffect(270, v7, v8);
                result = *(v0 + 4);
                *(v0 + 34) = result;
            }
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 96) = 3;
        sub_80BB866();
        sub_80BB81C();
        PlaySoundEffect(270, v1, v2);
        *(v0 + 32) = dword_168;
        result = *(v0 + 4);
        *(v0 + 34) = result;
    }
    return result;
}


// 0x80bb772
int sub_80BB772()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 16;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 17;
        result = 10;
        *(v0 + 32) = 10;
    }
    return result;
}


// 0x80bb79a
int sub_80BB79A()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int result; // r0
    int v4; // r0
    unsigned __int8 v5; // vf

    if ( *(v0 + 10) )
    {
        v4 = *(v0 + 32);
        v5 = __OFSUB__(v4, 1);
        result = v4 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v5) | (result == 0) )
        {
            *(v0 + 9) = 20;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 18;
        sub_80BB8B0();
        PlaySoundEffect(186, v1, v2);
        result = 60;
        *(v0 + 32) = 60;
    }
    return result;
}


// 0x80bb7cc
int sub_80BB7CC()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 4;
        result = 3;
        *(v0 + 32) = 3;
    }
    return result;
}


// 0x80bb7f6
int __fastcall sub_80BB7F6(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(21, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80bb81c
int sub_80BB81C()
{
    int v0; // r5
    signed int v1; // r6
    int v2; // r0
    char *v3; // r2
    bool v4; // zf
    int v5; // r2
    int v6; // r3
    int result; // r0
    int v8; // r4
    int v9; // [sp-8h] [bp-14h]
    int v10; // [sp-4h] [bp-10h]

    v1 = 1;
    do
    {
        v2 = object_getFrontDirection(v0);
        v3 = &byte_80BB860[2 * *(v0 + 100)];
        v9 = *(v0 + 18) + *v3 * v2 * v1;
        v10 = *(v0 + 19) + v3[1] * v1;
        v4 = object_isValidPanel(v9, v10) == 0;
        result = v9;
        if ( v4 )
            break;
        v8 = *(v0 + 4);
        result = sub_80E7942(v9, v10, v5, v6);
        ++v1;
    }
    while ( v1 <= 5 );
    return result;
}


// 0x80bb866
int sub_80BB866()
{
    int v0; // r5
    char *v1; // r2
    __int64 v2; // r0

    v1 = &byte_80BB88C[5 * (*(v0 + 19) - 1)];
    HIDWORD(v2) = *(v0 + 96) + 1;
    LODWORD(v2) = v1[HIDWORD(v2)];
    if ( v2 == 255 )
        v2 = *v1;
    *(v0 + 100) = v2;
    *(v0 + 96) = HIDWORD(v2);
    return v2;
}


// 0x80bb89c
signed int sub_80BB89C()
{
    int v0; // r5
    signed int result; // r0

    result = 0;
    if ( *(*(*(v0 + 76) + 88) + 44) & 1 )
        result = 1;
    return result;
}


// 0x80bb8b0
int sub_80BB8B0()
{
    int v0; // r5
    int v1; // r6
    int v2; // r0
    char *v3; // r2
    int v4; // ST04_4
    bool v5; // zf
    int result; // r0
    int v7; // r1
    int v8; // ST04_4
    int v9; // r4
    int v10; // r6
    int v11; // [sp-8h] [bp-14h]

    v1 = 1;
    do
    {
        v2 = object_getFrontDirection(v0);
        v3 = &byte_80BB908[2 * *(v0 + 100)];
        v11 = *(v0 + 18) + *v3 * v2 * v1;
        v4 = *(v0 + 19) + v3[1] * v1;
        v5 = object_isValidPanel(v11, v4) == 0;
        result = v11;
        v7 = v4;
        if ( v5 )
            break;
        v8 = v1;
        v9 = *(v0 + 100) | 0x3C00;
        v10 = *(v0 + 44);
        result = sub_80DDA5A(v11, v7, *(v0 + 14), 0);
        v1 = v8 + 1;
    }
    while ( v8 + 1 <= 5 );
    return result;
}


// 0x80bb914
void sub_80BB914()
{
    int v0; // r5

    (*(&off_80BB92C + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80bb938
signed int __noreturn sub_80BB938()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    sprite_load(v0, 128, 8, 5);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80bb976
int sub_80BB976()
{
    int v0; // r5

    return (*(&off_80BB988 + *(v0 + 9)))();
}


// 0x80bb99c
int __fastcall sub_80BB99C(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            if ( (object_getPanelParameters(*(v3 + 18), *(v3 + 19)) & 0x10010) == 65552 )
                *(v3 + 9) = 4;
            else
                *(v3 + 9) = 12;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 3;
        PlaySoundEffect(148, 4, a3);
        *v3 |= 2u;
        result = 3;
        *(v3 + 32) = 3;
    }
    return result;
}


// 0x80bb9f0
int sub_80BB9F0()
{
    int v0; // r5
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        sub_80BBB38();
    }
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( result == 30 )
    {
        result = 15;
        *(v0 + 16) = 15;
    }
    else if ( result <= 0 )
    {
        *(v0 + 9) = 8;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bba26
int __fastcall sub_80BBA26(int a1, int a2, int a3)
{
    Battle *v3; // r5
    int result; // r0
    int v5; // r4
    u32 v6; // r1
    int v7; // r1
    int v8; // r0
    unsigned __int8 v9; // vf
    int v10; // [sp-8h] [bp-10h]
    int v11; // [sp-4h] [bp-Ch]

    if ( !v3->currPhase )
    {
        v3->currPhase = 4;
        PlaySoundEffect(227, a2, a3);
        return sub_80BBAEC();
    }
    v5 = v3->panelX;
    v3->x += v3->vx;
    v6 = v3->y;
    v10 = sub_800E258(v3->x);
    v11 = v7;
    if ( object_isValidPanel(v10, v7) )
    {
        if ( !object_isPanelSolid(v10, v11) )
        {
            v3->currAction = 12;
            result = 0;
            *&v3->currPhase = 0;
            return result;
        }
        object_setPanelsFromCoordinates(v3);
        if ( v3->panelX != v5 )
            sub_80BBB18();
    }
    v8 = v3->Timer;
    v9 = __OFSUB__(v8, 1);
    result = v8 - 1;
    v3->Timer = result;
    if ( ((result < 0) ^ v9) | (result == 0) )
    {
        v3->currAction = 16;
        result = 0;
        *&v3->currPhase = 0;
    }
    return result;
}


// 0x80bba8e
int sub_80BBA8E()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 4;
        result = 3;
        *(v0 + 32) = 3;
    }
    return result;
}


// 0x80bbab8
signed int sub_80BBAB8()
{
    int v0; // r5
    signed int result; // r0

    **(v0 + 84) = 0;
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80bbac6
int __fastcall sub_80BBAC6(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(22, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80bbaec
int sub_80BBAEC()
{
    Battle *v0; // r5
    signed int v1; // r0
    int v2; // r0
    int result; // r0

    v0->vx = object_getFrontDirection(v0) << 18;
    v1 = 7;
    if ( v0->Alliance )
        v1 = 0;
    v2 = v1 - v0->panelX;
    if ( v2 < 0 )
        v2 = -v2;
    result = 2621440 * v2;
    __asm { SVC         6 }
    v0->Timer = result;
    return result;
}


// 0x80bbb18
_BYTE *sub_80BBB18()
{
    int v0; // r5
    int v1; // r6

    v1 = *(v0 + 44);
    return sub_80C53A6(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
}


// 0x80bbb38
signed int __noreturn sub_80BBB38()
{
    int v0; // r5
    signed int v1; // r4
    int v2; // r6
    int v4; // [sp-8h] [bp-18h]
    int v5; // [sp-4h] [bp-14h]

    v1 = 0;
    do
    {
        v4 = -object_getFrontDirection(v0) * (v1 + 1) + *(v0 + 18);
        v5 = *(v0 + 19);
        if ( !object_checkPanelParameters(v4, v5, 16, 260046848) )
            break;
        v2 = *(v0 + 44);
        sub_80DB014(v4, v5, *(v0 + 14), -16777216);
        ++v1;
    }
    while ( v1 <= 4 );
    return v1;
}


// 0x80bbb98
void sub_80BBB98()
{
    int v0; // r5

    (*(&off_80BBBB0 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80bbbbc
signed int __noreturn sub_80BBBBC()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    sprite_load(v0, 128, 8, 9);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    sub_8010DF6(2, 9);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80bbc04
int sub_80BBC04()
{
    int v0; // r5

    return (*(&off_80BBC18 + *(v0 + 9)))();
}


// 0x80bbc2c
int __fastcall sub_80BBC2C(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            if ( (object_getPanelParameters(*(v3 + 18), *(v3 + 19)) & 0x10010) == 65552 )
                *(v3 + 9) = 4;
            else
                *(v3 + 9) = 16;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 3;
        PlaySoundEffect(148, 4, a3);
        *v3 |= 2u;
        result = 9;
        *(v3 + 32) = 9;
    }
    return result;
}


// 0x80bbc80
int __fastcall sub_80BBC80(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    signed int v5; // r0

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        if ( v5 <= 25 && v5 >= 10 )
        {
            a2 = *(v3 + 52);
            *(v3 + 52) = *(v3 + 64) + a2;
        }
        result = *(v3 + 32) - 1;
        *(v3 + 32) = result;
        if ( result == 25 )
        {
            *(v3 + 16) = 17;
            result = PlaySoundEffect(230, a2, a3);
        }
        else if ( result <= 0 )
        {
            *(v3 + 9) = 8;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 0;
        *(v3 + 64) = -32768 * object_getFrontDirection(v3);
        result = 40;
        *(v3 + 32) = 40;
    }
    return result;
}


// 0x80bbcd8
int sub_80BBCD8()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r0
    int v4; // r1
    int v5; // r2
    int v6; // r3
    int result; // r0
    int v8; // r4
    int v9; // r0
    unsigned __int8 v10; // vf

    if ( *(v0 + 10) )
    {
        v8 = *(v0 + 18);
        *(v0 + 52) += *(v0 + 64);
        object_setPanelsFromCoordinates(v0);
        if ( *(v0 + 18) != v8 )
            sub_80BBE3A();
        if ( object_checkPanelParameters(
                     *(v0 + 18),
                     *(v0 + 19),
                     *&byte_80BBD50[8 * *(v0 + 22)],
                     *&byte_80BBD50[8 * *(v0 + 22) + 4]) )
        {
            v9 = *(v0 + 32);
            v10 = __OFSUB__(v9, 1);
            result = v9 - 1;
            *(v0 + 32) = result;
            if ( ((result < 0) ^ v10) | (result == 0) )
            {
                *(v0 + 9) = 12;
                result = 0;
                *(v0 + 10) = 0;
            }
        }
        else
        {
            *(v0 + 9) = 16;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 18;
        sub_80BBE0E();
        v3 = PlaySoundEffect(448, v1, v2);
        result = sub_80E7896(v3, v4, v5, v6);
        *(v0 + 96) = result;
    }
    return result;
}


// 0x80bbd60
int __fastcall sub_80BBD60(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    unsigned __int8 v5; // vf
    int v6; // r0
    int result; // r0

    if ( !*(v3 + 10) )
    {
        *(v3 + 10) = 4;
        *(v3 + 32) = 150;
        *(v3 + 34) = 0;
        *(v3 + 100) = 0;
        *(v3 + 104) = 0;
        PlaySoundEffect(229, 4, a3);
        camera_initShakeEffect_80302a8(2, *(v3 + 32));
    }
    v4 = *(v3 + 32);
    v5 = __OFSUB__(v4--, 1);
    *(v3 + 32) = v4;
    if ( ((v4 < 0) ^ v5) | (v4 == 0) )
    {
        *(v3 + 9) = 16;
        result = 0;
        *(v3 + 10) = 0;
    }
    else
    {
        v6 = *(v3 + 34);
        v5 = __OFSUB__(v6, 1);
        result = v6 - 1;
        *(v3 + 34) = result;
        if ( ((result < 0) ^ v5) | (result == 0) )
            sub_80BBE58();
    }
    return result;
}


// 0x80bbdac
int sub_80BBDAC()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            sub_8011044(2, 9);
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 4;
        *(v0 + 32) = 4;
        result = *(v0 + 96);
        if ( result )
            result = sub_80E78AE(result);
    }
    return result;
}


// 0x80bbde8
int __fastcall sub_80BBDE8(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(23, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80bbe0e
int sub_80BBE0E()
{
    Battle *v0; // r5
    signed int v1; // r0
    int v2; // r0
    int result; // r0

    v0->vx = object_getFrontDirection(v0) << 19;
    v1 = 6;
    if ( v0->Alliance )
        v1 = 1;
    v2 = v1 - v0->panelX;
    if ( v2 < 0 )
        v2 = -v2;
    result = 2621440 * v2;
    __asm { SVC         6 }
    v0->Timer = result;
    return result;
}


// 0x80bbe3a
_BYTE *sub_80BBE3A()
{
    int v0; // r5
    int v1; // r6

    v1 = *(v0 + 44);
    return sub_80C53A6(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
}


// 0x80bbe58
int __noreturn sub_80BBE58()
{
    int v0; // r5
    int v1; // r1
    int v2; // r6
    unsigned int v7; // r0
    int v8; // r1
    int v9; // r0
    int v10; // r6
    int result; // r0
    int v12; // [sp+0h] [bp-8h]
    char v13; // [sp+4h] [bp-4h]
    int v14; // [sp+8h] [bp+0h]

    v12 = *(v0 + 18);
    v13 = *(v0 + 19);
    v1 = *(v0 + 104);
    *(v0 + 18) = *(v0 + 100);
    *(v0 + 19) = v1;
    v2 = object_getPanelsExceptCurrentFilterred(
                 8 * *(v0 + 22),
                 &off_80BBEE0 + 8 * *(v0 + 22),
                 *(&off_80BBEE0 + 2 * *(v0 + 22)),
                 *(&off_80BBEE0 + 2 * *(v0 + 22) + 1));
    if ( v2
        || (v2 = object_getPanelsExceptCurrentFilterred(
                             8 * *(v0 + 22),
                             &byte_80BBEF4[8 * *(v0 + 22)],
                             *&byte_80BBEF4[8 * *(v0 + 22)],
                             *&byte_80BBEF4[8 * *(v0 + 22) + 4])) != 0 )
    {
        GetPositiveSignedRNG2();
        __asm { SVC         6 }
        v7 = *(&v14 + v2);
        v8 = v7 >> 4;
        v9 = v7 & 7;
        *(v0 + 100) = v9;
        *(v0 + 104) = v8;
        v10 = *(v0 + 44);
        sub_80D54F0(v9, v8, *(v0 + 14), 0);
    }
    result = v12;
    *(v0 + 18) = v12;
    *(v0 + 19) = v13;
    return result;
}


// 0x80bbf0c
void sub_80BBF0C()
{
    int v0; // r5

    (*(&off_80BBF24 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80bbf30
signed int __noreturn sub_80BBF30()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 8, 10);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80bbf6e
int sub_80BBF6E()
{
    int v0; // r5

    return (*(&off_80BBF80 + *(v0 + 9)))();
}


// 0x80bbf94
int __fastcall sub_80BBF94(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            if ( (object_getPanelParameters(*(v3 + 18), *(v3 + 19)) & 0x10010) == 65552 )
                *(v3 + 9) = 4;
            else
                *(v3 + 9) = 16;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 3;
        PlaySoundEffect(148, 4, a3);
        *v3 |= 2u;
        result = 10;
        *(v3 + 32) = 10;
    }
    return result;
}


// 0x80bbfe8
int sub_80BBFE8()
{
    int v0; // r5
    int result; // r0
    int v2; // r1
    int v3; // r2

    if ( *(v0 + 10) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 10 )
        {
            result = sub_80BC100();
            *(v0 + 4) = result;
            if ( result )
                result = PlaySoundEffect(173, v2, v3);
        }
        else if ( result <= 0 )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        result = 20;
        *(v0 + 32) = 20;
    }
    return result;
}


// 0x80bc024
int sub_80BC024()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 10) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 9 )
        {
            result = 17;
            *(v0 + 16) = 17;
        }
        else if ( result <= 0 )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 15;
        result = 34;
        *(v0 + 32) = 34;
    }
    return result;
}


// 0x80bc058
int __fastcall sub_80BC058(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r0
    int v6; // r1
    int v7; // r2
    int result; // r0
    int v9; // r0
    unsigned __int8 v10; // vf
    int v11; // r0
    int v12; // r1
    int v13; // r2

    v5 = *(v4 + 10);
    if ( *(v4 + 10) )
    {
        v9 = *(v4 + 32);
        v10 = __OFSUB__(v9--, 1);
        *(v4 + 32) = v9;
        if ( ((v9 < 0) ^ v10) | (v9 == 0) )
        {
            *(v4 + 9) = 16;
            result = 0;
            *(v4 + 10) = 0;
        }
        else
        {
            v11 = *(v4 + 34);
            v10 = __OFSUB__(v11, 1);
            result = v11 - 1;
            *(v4 + 34) = result;
            if ( ((result < 0) ^ v10) | (result == 0) )
            {
                sub_80BC160(result, a2, a3, a4);
                PlaySoundEffect(255, v12, v13);
                result = *(v4 + 5) + 1;
                *(v4 + 5) = result;
                *(v4 + 34) = 20;
            }
        }
    }
    else
    {
        *(v4 + 10) = 4;
        sub_80BC13E(v5, 4, a3, a4);
        PlaySoundEffect(255, v6, v7);
        *(v4 + 5) = 0;
        result = 20 * (*(v4 + 4) + 1);
        *(v4 + 32) = result;
        *(v4 + 34) = 20;
    }
    return result;
}


// 0x80bc0b0
int sub_80BC0B0()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 4;
        result = 4;
        *(v0 + 32) = 4;
    }
    return result;
}


// 0x80bc0da
int __fastcall sub_80BC0DA(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(24, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80bc100
int sub_80BC100()
{
    int v0; // r5
    int v1; // r10
    int v2; // r7
    signed int v3; // r4
    int v4; // r6
    int v5; // r0
    int v7; // [sp-Ch] [bp-1Ch]
    int v8; // [sp-4h] [bp-14h]

    v2 = *(v1 + oToolkit_S2034880_Ptr) + 160;
    v3 = 0;
    v4 = 0;
    do
    {
        v5 = *(v2 + v3);
        if ( v5 )
        {
            v7 = *(v2 + v3);
            v8 = *(v5 + 40);
            if ( sub_800F486(v8) )
            {
                *(v0 + 4 * v4++ + 96) = v8;
                sub_800F884(v7);
            }
        }
        v3 += 4;
    }
    while ( v3 <= 28 );
    return v4;
}


// 0x80bc13e
signed int __fastcall sub_80BC13E(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    signed int result; // r0
    int v7; // r1
    int v8; // r2
    int v9; // r3

    v5 = *(v4 + 44);
    sub_80DB800(*(v4 + 18), *(v4 + 19), *(v4 + 14), a4);
    object_getFlip(v4);
    result = 81;
    v7 = *(v4 + 52);
    v8 = *(v4 + 56);
    v9 = *(v4 + 60);
    return result;
}


// 0x80bc160
int __fastcall sub_80BC160(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r7
    int v6; // r6

    v5 = *(v4 + 4 * *(v4 + 5) + 96);
    v6 = *(v4 + 44);
    return sub_80DBC90(*(v4 + 18), *(v4 + 19), *(v4 + 14), a4);
}


// 0x80bc17c
int sub_80BC17C()
{
    int v0; // r5

    return (*(&off_80BC190 + *(v0 + 8)))();
}


// 0x80bc19c
void __noreturn sub_80BC19C()
{
    int v0; // r5
    int v1; // r0

    sprite_load(v0, 128, 4, 3);
    sprite_loadAnimationData(v0);
    sprite_removeShadow();
    v1 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v1);
    *(v0 + 16) = 3;
    sprite_setAnimation(v0, 3u);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    *(v0 + 8) = 4;
    *(v0 + 101) = 96;
    sub_80BC1DA();
}


// 0x80bc1da
int sub_80BC1DA()
{
    int v0; // r5
    int v1; // r10
    int v2; // r0
    int v3; // r0
    unsigned int v4; // r0
    int v5; // r0
    int v6; // r0

    if ( sub_802D234() == 6 && *v0 & 4 && *(*(v1 + oToolkit_S2034880_Ptr) + 1) == 12 )
        *v0 &= 0xFBu;
    *v0 = *v0 & 0xFD | **(v0 + 76) & 2;
    v2 = sprite_getColorShader(*(v0 + 76));
    sprite_setColorShader(v0, v2);
    v3 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v3);
    v4 = sub_8002F3E(*(v0 + 76));
    (loc_8002F02)(v4);
    *(v0 + 23) = *(*(v0 + 76) + 23);
    v5 = object_getFlip(v0);
    sprite_setFlip(v0, v5);
    v6 = sprite_getMosaicScalingParameters(*(v0 + 76));
    (sprite_setAlpha)(v6);
    return (*(&off_80BC258 + *(v0 + 9)))();
}


// 0x80bc268
int sub_80BC268()
{
    int v0; // r5
    unsigned int v1; // r0
    unsigned __int8 v2; // cf
    int result; // r0

    sub_80BC424();
    v1 = sub_800139A();
    v2 = __CFSHR__(v1, 2);
    result = v1 >> 2;
    if ( v2 )
    {
        *(v0 + 9) = 4;
        *(v0 + 10) = 0;
        result = sub_80BC284();
    }
    return result;
}


// 0x80bc284
int sub_80BC284()
{
    int result; // r0
    int v1; // r1
    int v2; // r2
    int v3; // r3

    result = sub_80BC434();
    if ( result )
    {
        result = sub_80BC494(result, v1, v2, v3);
        if ( result )
            result = sub_80BC424();
    }
    return result;
}


// 0x80bc29c
int __fastcall sub_80BC29C(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0

    result = sub_80BC494(a1, a2, a3, a4);
    if ( result )
    {
        result = sub_80BC434();
        if ( result )
            result = (*(&off_80BC2C0 + *(v4 + 10)))();
    }
    return result;
}


// 0x80bc2c8
int sub_80BC2C8()
{
    int v0; // r5
    int v1; // r0

    v1 = *(v0 + 104) - 1;
    *(v0 + 104) = v1;
    if ( v1 )
    {
        *(v0 + 52) += *(v0 + 64);
        *(v0 + 64) -= *(v0 + 68);
    }
    else
    {
        sub_80BC424();
        *(*(v0 + 76) + 96) = 0;
        *(*(v0 + 76) + 108) = 1;
        *(v0 + 16) = 3;
        *(v0 + 9) = 4;
        *(v0 + 10) = 0;
    }
    object_setPanelsFromCoordinates(v0);
    return sub_80BC468();
}


// 0x80bc30e
int sub_80BC30E()
{
    int v0; // r5
    int v1; // r0
    int v2; // r3
    int v3; // r0
    int v4; // r0

    v1 = object_getFrontDirection(v0);
    v2 = -v1;
    v3 = *(v0 + 64) * -v1 + *(v0 + 116);
    *(v0 + 116) = v3;
    if ( v3 >= 7864320 )
    {
        sub_80BC424();
        *(*(v0 + 76) + 96) = 0;
        *(*(v0 + 76) + 108) = 1;
        *(v0 + 16) = 3;
        *(v0 + 9) = 4;
        *(v0 + 10) = 0;
    }
    else
    {
        *(v0 + 52) += *(v0 + 64);
        v4 = *(v0 + 64) - *(v0 + 68);
        if ( v4 * v2 < 0x10000 )
            v4 = v2 << 16;
        *(v0 + 64) = v4;
    }
    object_setPanelsFromCoordinates(v0);
    return sub_80BC468();
}


// 0x80bc36e
int sub_80BC36E()
{
    int v0; // r5
    int result; // r0

    sub_80BC434();
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        sub_80E1A86(*(*(v0 + 88) + 116));
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80bc38a
int __fastcall sub_80BC38A(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+4h] [bp-Ch]
    int v7; // [sp+8h] [bp-8h]

    object_spawnType1(25, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v7;
        *(v4 + 22) = *(v7 + 22);
        *v4 |= 4u;
        *(v4 + 100) = v6;
    }
    return result;
}


// 0x80bc3ae
int __fastcall sub_80BC3AE(int result)
{
    if ( result )
        *(result + 8) = 8;
    return result;
}


// 0x80bc3b8
int __fastcall sub_80BC3B8(int result, int a2, char a3, char a4)
{
    int v4; // r5
    int v5; // r0
    unsigned int v6; // r3
    int v7; // r6

    v4 = result;
    if ( result )
    {
        result = *(result + 9);
        if ( result == 4 )
        {
            *(v4 + 44) = a2;
            *(v4 + 96) = a3;
            *(v4 + 97) = a4;
            *(v4 + 18) = a3;
            *(v4 + 19) = a4;
            object_setCoordinatesFromPanels(v4);
            *(v4 + 16) = 4;
            v5 = object_getFrontDirection(v4);
            v6 = 4 * *(v4 + 100);
            *(v4 + 64) = *&byte_810AA3C[v6] * v5;
            *(v4 + 68) = *&byte_810AA54[v6] * v5;
            v6 >>= 1;
            *(v4 + 104) = *&byte_810AA30[v6];
            v7 = *(v4 + 44);
            *(v4 + 108) = sub_80D964E(v4 + 9, 4, *(*(v4 + 76) + 36), v6);
            result = sub_80BC424();
            *(v4 + 9) = 8;
            *(v4 + 10) = 0;
        }
    }
    return result;
}


// 0x80bc424
int sub_80BC424()
{
    int v0; // r5
    int v1; // r2
    int v2; // r3
    _DWORD *v3; // r0

    v1 = *(*(v0 + 76) + 56);
    v2 = *(*(v0 + 76) + 60);
    v3 = (v0 + 52);
    *v3 = *(*(v0 + 76) + 52);
    v3[1] = v1;
    v3[2] = v2;
    return v0 + 64;
}


// 0x80bc434
signed int sub_80BC434()
{
    int v0; // r5
    signed int v1; // r4
    char v2; // zf
    int v3; // r3

    v1 = 0;
    if ( sub_802D234() == 6 || (battle_isPaused(), v2) )
    {
        v3 = *(v0 + 76);
        if ( *(v3 + 36) )
        {
            if ( !(*(*(v3 + 84) + 60) & 0x110C00) )
            {
                battle_isTimeStop();
                if ( v2 )
                {
                    sub_801BC64();
                    v1 = 1;
                }
            }
        }
    }
    return v1;
}


// 0x80bc468
int sub_80BC468()
{
    int v0; // r5
    int result; // r0
    char v2; // zf
    int v3; // r3

    result = battle_isPaused();
    if ( v2 )
    {
        v3 = *(v0 + 76);
        result = *(v3 + 36);
        if ( *(v3 + 36) )
        {
            result = *(*(v3 + 84) + 60);
            if ( !(result & 0x110C00) )
                result = sub_801DCCC((*(v0 + 52) - *(v3 + 52)) >> 16, 0);
        }
    }
    return result;
}


// 0x80bc494
int __fastcall sub_80BC494(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // r7

    result = *(*(v4 + 76) + 36);
    if ( !*(*(v4 + 76) + 36) )
    {
        v6 = *(v4 + 88) + 116;
        sub_80E1A6A(result, a2, a3, a4);
        *(v4 + 32) = 32;
        *(v4 + 9) = 12;
        result = 0;
    }
    return result;
}


// 0x80bc4b4
int __fastcall sub_80BC4B4(int a1, int a2, int a3)
{
    Battle *v3; // r5
    char v4; // t1
    char v5; // t1

    v4 = byte_810AA3C[v3->extraVars[4]];
    v5 = byte_810AA54[v3->extraVars[4]];
    __asm
    {
        SVC         6
        SVC         6
    }
    return object_getFrontDirection(v3) * a3;
}


// 0x80bc4fc
void sub_80BC4FC()
{
    int v0; // r5
    char v1; // zf

    (*(&off_80BC518 + *(v0 + 8)))();
    battle_isTimeStop();
    if ( v1 )
        object_updateSprite();
}


// 0x80bc524
void __noreturn sub_80BC524()
{
    int v0; // r5
    u8 v1; // r0
    int v2; // r0

    sprite_load(v0, 128, 8, 20);
    sprite_noShadow(v0);
    *v0 &= 0xFDu;
    v1 = *(*(v0 + 76) + 16) - *(v0 + 5) + *(v0 + 4);
    *(v0 + 16) = v1;
    *(v0 + 17) = v1;
    sprite_setAnimation(v0, v1);
    sprite_loadAnimationData(v0);
    v2 = object_getFlip(v0);
    sprite_setFlip(v0, v2);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 8) = 4;
    sprite_update(v0);
    sub_80BC56E();
}


// 0x80bc56e
int sub_80BC56E()
{
    int v0; // r5

    return (*(&off_80BC588 + *(v0 + 9)))();
}


// 0x80bc58c
int sub_80BC58C()
{
    int v0; // r5
    int v1; // r4
    int v2; // r2
    int v3; // r3
    _DWORD *v4; // r0
    __int16 v5; // r0
    int v6; // r0
    int v7; // r0
    int v8; // r0
    unsigned int v9; // r0
    int v10; // r0

    *(v0 + 16) = *(*(v0 + 76) + 16) - *(v0 + 5) + *(v0 + 4);
    v1 = *(v0 + 76);
    v2 = *(v1 + 56);
    v3 = *(v1 + 60);
    v4 = (v0 + 52);
    *v4 = *(v1 + 52);
    v4[1] = v2;
    v4[2] = v3;
    if ( *(v0 + 7) && *(v1 + 62) != 255 )
        *(v0 + 62) = 0;
    v5 = *(v0 + 6);
    *(v0 + 58) -= v5;
    *(v0 + 62) -= v5;
    *v0 = *v0 & 0xFD | **(v0 + 76) & 2;
    v6 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v6);
    v7 = sprite_getColorShader(*(v0 + 76));
    sprite_setColorShader(v0, v7);
    v8 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v8);
    v9 = sub_8002F3E(*(v0 + 76));
    (loc_8002F02)(v9);
    v10 = sprite_getMosaicScalingParameters(*(v0 + 76));
    return (sprite_setAlpha)(v10);
}


// 0x80bc610
int __fastcall sub_80BC610(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    int v8; // [sp+8h] [bp-Ch]
    int v9; // [sp+Ch] [bp-8h]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType1(26, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v6;
        *(v4 + 19) = v7;
        *(v4 + 76) = v8;
        *(v4 + 44) = 0;
        *(v4 + 22) = *(v9 + 22);
        *v4 |= 0x14u;
    }
    return result;
}


// 0x80bc638
int __fastcall sub_80BC638(int result, char a2)
{
    if ( result )
    {
        *(result + 16) = a2;
        *(result + 17) = -1;
    }
    return result;
}


// 0x80bc644
int __fastcall sub_80BC644(int result)
{
    if ( result )
        *(result + 17) = -1;
    return result;
}


// 0x80bc650
int sub_80BC650()
{
    int v0; // r5

    return (*(&off_80BC664 + *(v0 + 8)))();
}


// 0x80bc670
signed int __noreturn sub_80BC670()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r0
    int v4; // r1
    int v9; // r0
    int v10; // r0
    int v11; // r0
    signed int result; // r0

    *(v0 + 40) = *(v0 + 4) + &loc_1A0;
    sub_800FC9E(*(v0 + 4), 0);
    sprite_load(v0, 128, v1, v2);
    sprite_loadAnimationData(v0);
    sprite_removeShadow();
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(4);
    v3 = object_getFlip(v0);
    sprite_setFlip(v0, v3);
    *(v0 + 104) = -1;
    v4 = *(v0 + 98);
    __asm { SVC         6 }
    *(v0 + 100) = 2621440;
    object_setCoordinatesFromPanels(v0);
    *(v0 + 52) += *(v0 + 100) * *(v0 + 98) * object_getFrontDirection(v0);
    v9 = 1572864 * (4 - *(v0 + 19));
    *(v0 + 56) += v9;
    *(v0 + 60) = 0;
    *(v0 + 60) += v9;
    *(v0 + 108) = v9;
    v10 = *&byte_80BC758[4 * *(v0 + 4)];
    *(v0 + 112) = v10;
    *(v0 + 60) += v10;
    v11 = sub_8010DD0();
    if ( *(v0 + 4) == 6 )
        *(v11 + 96) = 1;
    sprite_forceWhitePallete();
    *(v0 + 116) = 0;
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80bc78c
void __fastcall sub_80BC78C(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r1
    int v8; // r1
    int v9; // r0
    int v10; // r1
    _BYTE *v11; // r0

    if ( !*(v3 + 9) )
    {
        sprite_forceWhitePallete();
        v4 = *(v3 + 32) - 1;
        *(v3 + 32) = v4;
        if ( v4 )
        {
LABEL_9:
            object_updateSprite();
            return;
        }
        sprite_clearFinalPalette();
        a2 = 10;
        *(v3 + 32) = 10;
        *(v3 + 9) = 1;
    }
    v5 = *(v3 + 32) - 1;
    *(v3 + 32) = v5;
    if ( v5 )
        goto LABEL_9;
    if ( !*(v3 + 116) )
    {
        *(v3 + 116) = 1;
        PlaySoundEffect(140, a2, a3);
    }
    v6 = *(v3 + 98) - 1;
    *(v3 + 98) = v6;
    if ( v6 > 0 )
    {
        *(v3 + 32) = 2;
        object_setCoordinatesFromPanels(v3);
        *(v3 + 52) += *(v3 + 104) * *(v3 + 100) * *(v3 + 98) * object_getFrontDirection(v3);
        v7 = *(v3 + 108);
        *(v3 + 56) += v7;
        *(v3 + 60) = 0;
        *(v3 + 60) += v7;
        *(v3 + 60) += *(v3 + 112);
        *(v3 + 104) = -*(v3 + 104);
        goto LABEL_9;
    }
    sub_8011020();
    v8 = *(v3 + 19);
    v9 = object_getCoordinatesForPanels(*(v3 + 18));
    SpawnT4BattleObjectWithId0(v3, v9, v9, v10, 0x100000);
    *v11 |= 4u;
    object_freeMemory();
}


// 0x80bc844
int __fastcall sub_80BC844(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    __int16 v8; // [sp+8h] [bp-Ch]
    int v9; // [sp+Ch] [bp-8h]

    v6 = a1;
    v7 = a2;
    v8 = a4;
    object_spawnType1(27, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v6;
        *(v4 + 19) = v7;
        *(v4 + 98) = v8;
        *(v4 + 22) = *(v9 + 22);
        *(v4 + 76) = v9;
        *(v4 + 32) = 6;
        *v4 |= 0x14u;
    }
    return result;
}


// 0x80bc87c
int sub_80BC87C()
{
    int v0; // r5

    if ( battle_isBattleOver() )
        *(v0 + 8) = 8;
    return (*(&off_80BC89C + *(v0 + 8)))();
}


// 0x80bc8a8
void __noreturn sub_80BC8A8()
{
    int v0; // r5
    int v1; // r0

    *v0 |= 2u;
    sprite_load(v0, 128, 16, 72);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    v1 = sprite_getPallete(*(v0 + 96));
    sprite_setPallete(v1);
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 8) = 4;
    sub_80BC8EC();
}


// 0x80bc8ec
int sub_80BC8EC()
{
    int v0; // r5
    int result; // r0

    (*(&off_80BC914 + *(v0 + 9)))();
    result = (*v0 & 0xFD) | **(v0 + 76) & 2;
    *v0 = result;
    return result;
}


// 0x80bc920
int sub_80BC920()
{
    _BYTE *v0; // r5
    int result; // r0

    if ( sub_80BC9F8() )
    {
        result = sub_80BC9D2();
        if ( result )
        {
            result = sprite_getFrameParameters();
            if ( result & 0x80 )
            {
                v0[16] = 1;
                v0[9] = 4;
                result = 0;
                v0[10] = 0;
            }
        }
    }
    else
    {
        v0[16] = 2;
        v0[9] = 8;
        result = 0;
        v0[10] = 0;
    }
    return result;
}


// 0x80bc958
int sub_80BC958()
{
    _BYTE *v0; // r5
    int result; // r0

    if ( sub_80BC9F8() )
        return sub_80BC9D2();
    v0[16] = 2;
    v0[9] = 8;
    result = 0;
    v0[10] = 0;
    return result;
}


// 0x80bc976
int sub_80BC976()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    result = battle_isPaused();
    if ( v2 )
    {
        result = battle_isTimeStop();
        if ( v2 )
        {
            sub_801BC64();
            result = sprite_getFrameParameters();
            if ( result & 0x80 )
            {
                result = 8;
                *(v0 + 8) = 8;
            }
        }
    }
    return result;
}


// 0x80bc998
int __fastcall sub_80BC998(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    char v5; // [sp+0h] [bp-14h]
    char v6; // [sp+4h] [bp-10h]
    int v7; // [sp+8h] [bp-Ch]
    int v8; // [sp+Ch] [bp-8h]

    v5 = a1;
    v6 = a2;
    v7 = a3;
    object_spawnType1(28, a1, a2, 0);
    result = v3;
    if ( v3 )
    {
        *(v3 + 76) = v8;
        *(v3 + 18) = v5;
        *(v3 + 19) = v6;
        *(v3 + 22) = *(v8 + 22);
        *(v3 + 96) = v7;
    }
    return result;
}


// 0x80bc9be
int __fastcall sub_80BC9BE(int result)
{
    if ( result )
    {
        if ( *(result + 9) != 8 )
        {
            *(result + 16) = 2;
            *(result + 9) = 8;
        }
    }
    return result;
}


// 0x80bc9d2
signed int sub_80BC9D2()
{
    int v0; // r5
    signed int v1; // r4
    char v2; // zf

    v1 = 0;
    battle_isPaused();
    if ( v2 )
    {
        if ( !(*(*(*(v0 + 76) + 84) + 60) & 0x80110C00) )
        {
            battle_isTimeStop();
            if ( v2 )
            {
                sub_801BC64();
                v1 = 1;
            }
        }
    }
    return v1;
}


// 0x80bc9f8
int sub_80BC9F8()
{
    int v0; // r5

    return *(*(v0 + 76) + 36);
}


// 0x80bca04
int sub_80BCA04()
{
    int v0; // r5

    return (*(&off_80BCA18 + *(v0 + 8)))();
}


// 0x80bca24
void __noreturn sub_80BCA24()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0

    sprite_load(v0, 128, 4, 19);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    v1 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v1);
    v2 = *(v0 + 76);
    *(v0 + 52) = *(v2 + 52);
    *(v0 + 58) = *(v2 + 58) + 2;
    *(v0 + 62) = *(v2 + 62) + 24;
    *(v0 + 16) = 5;
    sprite_setAnimation(v0, 5u);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    *(v0 + 96) = 0;
    *(v0 + 8) = 4;
    sub_80BCA72();
}


// 0x80bca72
int sub_80BCA72()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    unsigned int v3; // r0
    int v4; // r0
    int v5; // r0

    *v0 = *v0 & 0xFD | **(v0 + 76) & 2;
    v1 = sprite_getColorShader(*(v0 + 76));
    sprite_setColorShader(v0, v1);
    v2 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v2);
    v3 = sub_8002F3E(*(v0 + 76));
    (loc_8002F02)(v3);
    *(v0 + 23) = *(*(v0 + 76) + 23);
    v4 = object_getFlip(v0);
    sprite_setFlip(v0, v4);
    v5 = sprite_getMosaicScalingParameters(*(v0 + 76));
    (sprite_setAlpha)(v5);
    return (*(&off_80BCAD0 + *(v0 + 9)))();
}


// 0x80bcad4
int sub_80BCAD4()
{
    int v0; // r5
    int result; // r0
    int v2; // r0

    if ( battle_isBattleOver() )
        goto LABEL_9;
    result = sub_80BCB34();
    if ( result )
    {
        v2 = object_getFrontDirection(v0);
        if ( !*(v0 + 100) )
            v2 = -v2;
        *(v0 + 54) += 6 * v2;
        *(v0 + 62) += 4;
        result = *(v0 + 96) + 1;
        *(v0 + 96) = result;
        if ( result == 90 )
        {
LABEL_9:
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    return result;
}


// 0x80bcb12
int __fastcall sub_80BCB12(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+0h] [bp-10h]
    int v7; // [sp+8h] [bp-8h]

    v6 = a2;
    object_spawnType1(29, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v7;
        *(v4 + 100) = v6;
        *(v4 + 22) = *(v7 + 22);
        *v4 |= 4u;
    }
    return result;
}


// 0x80bcb34
signed int sub_80BCB34()
{
    signed int v0; // r4
    char v1; // zf

    v0 = 0;
    battle_isPaused();
    if ( v1 )
    {
        battle_isTimeStop();
        if ( v1 )
        {
            sub_801BC64();
            v0 = 1;
        }
    }
    return v0;
}


// 0x80bcb50
void sub_80BCB50()
{
    int v0; // r5

    (*(&off_80BCB68 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80bcb74
int __noreturn sub_80BCB74()
{
    Battle *v0; // r5
    u32 *v1; // r4
    Battle *v2; // ST04_4
    u32 *v3; // r5
    int v4; // r0
    int v5; // ST00_4
    char *v6; // r0
    int v7; // r1
    int v8; // r2
    int v9; // r0
    int v10; // r1
    u32 v11; // r2
    u32 v12; // r3
    u32 *v13; // r0
    Battle *v14; // ST04_4
    u32 *v15; // r5
    int v16; // r0
    int v17; // r0
    int v18; // r0
    int v19; // r1

    v1 = v0->parent;
    if ( sub_800F29C(*(v1 + 20)) == 2 )
    {
        v2 = v0;
        v3 = v0->parent;
        v4 = sub_8013774(2, 44);
        v5 = v4;
        v6 = sub_8013774(v4, 41);
        v0 = v2;
        sub_800FC9E(v6, v5);
    }
    else
    {
        v9 = sub_800F26C(*(v1 + 20));
        v8 = v10;
        v7 = v9;
    }
    sprite_load(v0, 128, v7, v8);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    v0->currAnimation = 0;
    v0->currAnimationCpy = -1;
    v0->objFlags |= 2u;
    v11 = v0->parent[14];
    v12 = v0->parent[15];
    v13 = &v0->x;
    *v13 = v0->parent[13];
    v13[1] = v11;
    v13[2] = v12;
    object_setPanelsFromCoordinates(v0);
    v14 = v0;
    v15 = v0->parent;
    v16 = sub_801002C();
    sprite_setPallete(v16);
    v17 = object_getFlip(v14);
    sprite_setFlip(v14, v17);
    v18 = sub_800F29C(*(v1 + 20));
    sub_8010DF6(v18, v19);
    sub_80E1352(v14->parent, 0xFu);
    *&v14->currState = 4;
    return sub_80BCC0C();
}


// 0x80bcc0c
int sub_80BCC0C()
{
    int v0; // r5

    return (*(&off_80BCC20 + *(v0 + 10)))();
}


// 0x80bcc2c
int sub_80BCC2C()
{
    int v0; // r5
    int result; // r0
    char v2; // r0
    int v3; // r6
    int v4; // r0
    int v5; // r1
    int v6; // r2

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 10;
        sub_80B8E30(10);
        *(v0 + 32) = 0;
        *(v0 + 11) = 4;
    }
    result = *(v0 + 32) + 1;
    *(v0 + 32) = result;
    if ( result >= 10 )
    {
        v2 = object_getFrontDirection(v0);
        v3 = *(v0 + 44);
        sub_80DAB9C(v2 + *(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
        v4 = *(v0 + 100);
        v5 = *(v4 + 16) + 1;
        *(v4 + 16) = v5;
        PlaySoundEffect(384, v5, v6);
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80bcc88
signed int sub_80BCC88()
{
    int v0; // r5
    signed int result; // r0

    result = *(v0 + 7);
    if ( !*(v0 + 7) )
    {
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80bcc96
int sub_80BCC96()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r0
    int v5; // r1

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        v4 = sub_800F29C(*(*(v0 + 76) + 40));
        sub_8011044(v4, v5);
        sub_80B8E58(*(v0 + 100));
        *v0 &= 0xFDu;
        *(v0 + 8) = 8;
        sub_80E13DC(*(v0 + 76));
        result = 0;
        **(v0 + 96) = 0;
    }
    return result;
}


// 0x80bccdc
int __fastcall sub_80BCCDC(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(30, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 76) = v11;
        *(v4 + 96) = v6;
        *v6 = 1;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 40) = *(v11 + 40);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80bcd14
void sub_80BCD14()
{
    int v0; // r5

    (*(&off_80BCD2C + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80bcd38
int __noreturn sub_80BCD38()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r4
    int v4; // ST04_4
    int v5; // r5
    int v6; // r0
    int v7; // ST00_4
    char *v8; // r0
    int v9; // r0
    int v10; // r1
    int v11; // r0
    int v12; // r3
    char *v13; // r4
    int v14; // r1
    int v15; // r2
    int *v16; // r0
    int v17; // ST04_4
    int v18; // r5
    int v19; // r0
    int v20; // r0
    int v21; // r0
    int v22; // r1
    int v23; // r3
    int v24; // ST04_4
    char v25; // r0
    int v26; // r1
    int v27; // r2
    int v28; // r6
    int v29; // r5
    int v30; // r0

    *(v0 + 88) = *(*(v0 + 76) + 88);
    if ( *(v0 + 4) == 1 )
        *(v0 + 40) = 427;
    else
        *(v0 + 40) = *(*(v0 + 76) + 40);
    if ( *(v0 + 4) == 1 )
    {
        v1 = 8;
        v2 = 11;
    }
    else
    {
        v3 = *(v0 + 76);
        if ( sub_800F29C(*(v0 + 40)) == 2 )
        {
            v4 = v0;
            v5 = *(v0 + 76);
            v6 = sub_8013774(2, 44);
            v7 = v6;
            v8 = sub_8013774(v6, 41);
            v0 = v4;
            sub_800FC9E(v8, v7);
        }
        else
        {
            v9 = sub_800F26C(*(v0 + 40));
            v2 = v10;
            v1 = v9;
        }
    }
    sprite_load(v0, 128, v1, v2);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = -1;
    *v0 |= 2u;
    v11 = object_getFrontDirection(v0);
    v12 = *(*(v0 + 76) + 60);
    v13 = &dword_80BCE44 + 2 * *(v0 + 4);
    v14 = *(*(v0 + 76) + 52) + (*v13 * v11 << 16);
    v15 = *(*(v0 + 76) + 56) + (v13[1] << 16);
    v16 = (v0 + 52);
    *v16 = v14;
    v16[1] = v15;
    v16[2] = v12;
    object_setPanelsFromCoordinates(v0);
    *(v0 + 60) = 0;
    if ( *(v0 + 4) != 1 )
    {
        v17 = v0;
        v18 = *(v0 + 76);
        v19 = sub_801002C();
        v0 = v17;
        sprite_setPallete(v19);
    }
    v20 = object_getFlip(v0);
    sprite_setFlip(v0, v20);
    v21 = sub_800F29C(*(v0 + 40));
    sub_8010DF6(v21, v22);
    sub_80E1352(*(v0 + 76), 0);
    if ( !*(v0 + 4) )
    {
        v24 = v0;
        v25 = *(v0 + 18);
        v26 = *(v0 + 19);
        v27 = *(v0 + 14);
        v28 = *(v0 + 44);
        v29 = *(v0 + 76);
        v30 = sub_80BD20A(v25, v26, v27, v23);
        v0 = v24;
        *(v30 + 112) = v24;
        *(v24 + 112) = v30;
    }
    *(v0 + 8) = 4;
    return sub_80BCE4C();
}


// 0x80bce4c
int sub_80BCE4C()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 4) )
        result = (*(&off_80BCE80 + *(v0 + 9)))();
    else
        result = (*(&off_80BCE74 + *(v0 + 9)))();
    return result;
}


// 0x80bce90
int sub_80BCE90()
{
    int v0; // r5
    int result; // r0
    int v2; // r1

    result = *(v0 + 112);
    v2 = *(result + 9);
    if ( v2 == 4 )
    {
        *(v0 + 9) = 4;
        result = sub_80BCEB2();
    }
    else if ( v2 == 12 )
    {
        *(v0 + 9) = 8;
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80bceb2
int sub_80BCEB2()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r0
    int v4; // r2
    int v5; // r0
    int v6; // r1
    int v7; // r0
    int v8; // r2
    int v9; // r0
    unsigned __int8 v10; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 0;
        v1 = sub_8018810(*(v0 + 40), 0, *(v0 + 22), *(v0 + 23));
        SpawnT4BattleObjectWithId0(v0, v1 << 16, *(v0 + 52) + (v1 << 16), *(v0 + 56), *(v0 + 60) + (v2 << 16));
        *(v3 + 32) = 40;
        PlaySoundEffect(113, 40, v4);
        *(v0 + 32) = 60;
        *(v0 + 11) = 4;
    }
    if ( *(v0 + 32) == 20 )
    {
        v5 = sub_8018810(*(v0 + 40), 0, *(v0 + 22), *(v0 + 23));
        SpawnT4BattleObjectWithId0(v0, v5 << 16, *(v0 + 52) + (v5 << 16), *(v0 + 56), *(v0 + 60) + (v6 << 16));
        *(v7 + 32) = 20;
        PlaySoundEffect(114, 20, v8);
    }
    v9 = *(v0 + 32);
    v10 = __OFSUB__(v9, 1);
    result = v9 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v10) | (result == 0) )
    {
        *(v0 + 100) = 0;
        *(v0 + 108) = 0;
        *(v0 + 9) += 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bcf3a
int sub_80BCF3A()
{
    int v0; // r5

    return (*(&off_80BCF4C + *(v0 + 10)))();
}


// 0x80bcf58
int sub_80BCF58()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 0;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 34) = 10;
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80bcf7a
int __fastcall sub_80BCF7A(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    int v5; // r0
    int v6; // r0
    unsigned __int8 v7; // vf
    int result; // r0
    int v9; // r0

    if ( !*(v3 + 11) )
    {
        *(v3 + 16) = 14;
        *(v3 + 17) = -1;
        *(v3 + 32) = 15;
        PlaySoundEffect(106, a2, a3);
        sub_80B8E58(*(v3 + 100));
        sub_80EB572(v3 + 100, 1);
        v4 = sub_80B8E58(*(v3 + 108));
        sub_80B8E30(v4);
        sub_80C44D2(*(v3 + 80));
        sub_80BD24C(v5);
        sub_80BD2D8();
        *(v3 + 11) = 4;
    }
    if ( *(v3 + 32) == 10 )
        sub_80BD2D8();
    if ( *(v3 + 32) == 5 )
        sub_80BD2D8();
    v6 = *(v3 + 32);
    v7 = __OFSUB__(v6, 1);
    result = v6 - 1;
    *(v3 + 32) = result;
    if ( ((result < 0) ^ v7) | (result == 0) )
    {
        v9 = *(v3 + 34);
        v7 = __OFSUB__(v9--, 1);
        *(v3 + 34) = v9;
        if ( ((v9 < 0) ^ v7) | (v9 == 0) )
        {
            result = 8;
            *(v3 + 10) = 8;
        }
        else
        {
            result = 0;
            *(v3 + 11) = 0;
        }
    }
    return result;
}


// 0x80bcff6
int sub_80BCFF6()
{
    int v0; // r5
    int result; // r0
    int v2; // r2
    int v3; // r3
    _DWORD *v4; // r0
    int v5; // r0
    unsigned __int8 v6; // vf
    int v7; // r0
    int v8; // r1
    _BYTE *v9; // r1

    if ( !*(v0 + 11) )
    {
        result = *(*(v0 + 112) + 8);
        if ( result != 8 )
            return result;
        *(v0 + 16) = 0;
        sub_80B8E58(*(v0 + 100));
        sub_80B8E58(*(v0 + 108));
        v2 = *(*(v0 + 76) + 56);
        v3 = *(*(v0 + 76) + 60);
        v4 = (v0 + 52);
        *v4 = *(*(v0 + 76) + 52);
        v4[1] = v2;
        v4[2] = v3;
        object_setPanelsFromCoordinates(v0);
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v5 = *(v0 + 32);
    v6 = __OFSUB__(v5, 1);
    result = v5 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v6 )
    {
        v7 = sub_800F29C(*(*(v0 + 76) + 40));
        sub_8011044(v7, v8);
        *v0 &= 0xFDu;
        *(v0 + 8) = 8;
        result = sub_80E13DC(*(v0 + 76));
        v9 = *(v0 + 96);
        if ( v9 )
        {
            result = 0;
            *v9 = 0;
        }
    }
    return result;
}


// 0x80bd064
int sub_80BD064()
{
    int v0; // r5

    (*(&off_80BD07C + *(v0 + 10)))();
    return sub_80BD374();
}


// 0x80bd084
int sub_80BD084()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int result; // r0
    __int16 v4; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v0 + 11) )
    {
        *v0 |= 2u;
        v4 = *(v0 + 32) + 1;
        *(v0 + 32) = v4;
        if ( v4 & 1 )
            *v0 &= 0xFDu;
        v5 = *(v0 + 12);
        v6 = __OFSUB__(v5, 2);
        result = v5 - 2;
        *(v0 + 12) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *v0 |= 2u;
            *(v0 + 12) = 0;
            result = 4;
            *(v0 + 10) = 4;
        }
    }
    else
    {
        sprite_setColorShader(v0, 0x7FFF);
        *(v0 + 12) = 31;
        PlaySoundEffect(148, v1, v2);
        *(v0 + 32) = 0;
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80bd0da
int sub_80BD0DA()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // r0
    int v5; // r1

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            v4 = *(v0 + 18);
            v5 = *(v0 + 19);
            object_isCurrentPanelSolid();
        }
    }
    else
    {
        *(v0 + 32) = 30;
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80bd114
int sub_80BD114()
{
    int v0; // r5

    return (*(&off_80BD128 + *(v0 + 10)))();
}


// 0x80bd134
int sub_80BD134()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 0;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 34) = 10;
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80bd156
int sub_80BD156()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r2
    int v4; // r0
    unsigned __int8 v5; // vf
    int result; // r0
    int v7; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 5;
        *(v0 + 17) = -1;
        v1 = sub_80B8E58(*(v0 + 100));
        sub_80B8E30(v1);
        PlaySoundEffect(176, v2, v3);
        *(v0 + 32) = 15;
        sub_80BD2D8();
        *(v0 + 11) = 4;
    }
    if ( *(v0 + 32) == 10 )
        sub_80BD2D8();
    if ( *(v0 + 32) == 5 )
        sub_80BD2D8();
    v4 = *(v0 + 32);
    v5 = __OFSUB__(v4, 1);
    result = v4 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v5) | (result == 0) )
    {
        v7 = *(v0 + 34);
        v5 = __OFSUB__(v7--, 1);
        *(v0 + 34) = v7;
        if ( ((v7 < 0) ^ v5) | (v7 == 0) )
        {
            result = 8;
            *(v0 + 10) = 8;
        }
        else
        {
            result = 0;
            *(v0 + 11) = 0;
        }
    }
    return result;
}


// 0x80bd1b8
int sub_80BD1B8()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        *(v0 + 9) = 12;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bd1da
int sub_80BD1DA()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 4;
        sub_80B8E58(*(v0 + 100));
        *(v0 + 32) = 4;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        *v0 &= 0xFDu;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80bd20a
int __fastcall sub_80BD20A(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(31, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 76) = v11;
        *(v4 + 96) = v6;
        if ( v6 )
            *v6 = 1;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 40) = *(v11 + 40);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80bd24c
int __fastcall sub_80BD24C(int result)
{
    int v1; // r5
    int v2; // r7
    __int64 v3; // r0
    int v4; // r6

    v2 = 1;
    do
    {
        v3 = sub_80BD278(result, v2);
        v4 = *(v1 + 44);
        result = sub_80C53A6(v3, SHIDWORD(v3), *(v1 + 14), 0);
        ++v2;
    }
    while ( v2 <= 3 );
    return result;
}


// 0x80bd278
__int64 __fastcall sub_80BD278(int a1, int a2)
{
    Battle *v2; // r5
    int v3; // r0
    int v4; // r4
    BOOL i; // r0
    signed int v6; // r1
    int v7; // r1
    int v8; // r2
    __int64 v10; // [sp+0h] [bp-18h]

    HIDWORD(v10) = a2;
    v3 = object_getFrontDirection(v2);
    v4 = v3;
    LODWORD(v10) = v3 + v2->panelX;
    for ( i = object_isValidPanel(v10, SHIDWORD(v10));
                i && object_getPanelDataOffset(v10, SHIDWORD(v10))[3] == v2->Alliance;
                i = object_isValidPanel(v10, SHIDWORD(v10)) )
    {
        LODWORD(v10) = v10 + v4;
    }
    v6 = 7;
    if ( v4 <= 0 )
        v6 = 0;
    v7 = v6 - v10;
    if ( v7 < 0 )
        v7 = -v7;
    v8 = byte_80BD2CC[v7];
    return v10;
}


// 0x80bd2d8
void sub_80BD2D8()
{
    int v0; // r5
    int v1; // r6
    int v2; // r4
    int v7; // r1
    int v8; // ST04_4
    int v9; // ST00_4
    int v10; // r0
    int v11; // [sp+4h] [bp-34h]
    int v12; // [sp+20h] [bp-18h]
    int v13; // [sp+24h] [bp-14h]

    v1 = 0;
    v2 = object_getFrontDirection(v0);
    v12 = *(v0 + 18) + v2;
LABEL_2:
    v13 = 1;
    while ( object_isValidPanel(v12, v13) )
    {
        if ( object_getPanelDataOffset(v12, v13)[3] != *(v0 + 22) )
            *(&v11 + v1++) = v12 | 16 * v13;
        if ( ++v13 > 3 )
        {
            v12 += v2;
            goto LABEL_2;
        }
    }
    GetPositiveSignedRNG2();
    __asm { SVC         6 }
    v9 = object_getCoordinatesForPanels(*(&v11 + v1) & 7);
    v8 = v7;
    v10 = object_getFlip(v0);
    *(v0 + 4);
    SpawnT4BattleObjectWithId0(v0, v10, v9, v8, 0);
}


// 0x80bd374
int sub_80BD374()
{
    Battle *v0; // r5

    return sprite_setColorShader(v0, 1057 * v0->pad_0C[0]);
}


// 0x80bd388
void sub_80BD388()
{
    int v0; // r5

    (*(&off_80BD3A0 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80bd3ac
int __noreturn sub_80BD3AC()
{
    int v0; // r5
    int v1; // r0
    char *v2; // r7
    char v3; // r0
    int v4; // r0
    int v5; // r3
    int v6; // r1
    int v7; // r2
    int *v8; // r0
    int *v9; // r0
    int v10; // r0
    int v11; // r0
    int v12; // r1
    int v13; // r3
    int v14; // ST00_4
    char v15; // r0
    int v16; // r1
    int v17; // r2
    int v18; // r6
    int v19; // r5
    int v20; // r0

    v1 = 8 * *(v0 + 4);
    v2 = &byte_80BD464[v1];
    *(v0 + 40) = *&byte_80BD464[v1 + 2];
    v3 = byte_80BD464[v1];
    if ( v3 & 0x80 )
        sprite_decompress(v3 & 0x7F, v2[1]);
    sprite_load(v0, 128, *v2 & 0x7F, v2[1]);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = -1;
    v4 = object_getFrontDirection(v0);
    v5 = *(*(v0 + 76) + 60);
    v6 = *(*(v0 + 76) + 52) + (v2[4] * v4 << 16);
    v7 = *(*(v0 + 76) + 56) + (v2[5] << 16);
    v8 = (v0 + 52);
    *v8 = v6;
    v8[1] = v7;
    v8[2] = v5;
    v9 = (v0 + 64);
    *v9 = v6;
    v9[1] = v7;
    v9[2] = v5;
    object_setPanelsFromCoordinates(v0);
    *(v0 + 60) = 0;
    *v0 |= 2u;
    v10 = object_getFlip(v0);
    sprite_setFlip(v0, v10);
    v11 = sub_800F29C(*(v0 + 40));
    sub_8010DF6(v11, v12);
    if ( !*(v0 + 4) )
    {
        v14 = v0;
        v15 = *(v0 + 18);
        v16 = *(v0 + 19);
        v17 = *(v0 + 14);
        v18 = *(v0 + 44);
        v19 = *(v0 + 76);
        v20 = sub_80BD9A2(v15, v16, v17, v13);
        v0 = v14;
        *(v20 + 100) = v14;
        *(v14 + 100) = v20;
    }
    *(v0 + 8) = 4;
    return sub_80BD478();
}


// 0x80bd478
int sub_80BD478()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 4) )
        result = (*(&off_80BD4B0 + *(v0 + 9)))();
    else
        result = (*(&off_80BD4A0 + *(v0 + 9)))();
    return result;
}


// 0x80bd4bc
int sub_80BD4BC()
{
    int v0; // r5

    (*(&off_80BD4D4 + *(v0 + 10)))();
    return sub_80BD9D4();
}


// 0x80bd4dc
int sub_80BD4DC()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int result; // r0
    __int16 v4; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v0 + 11) )
    {
        *v0 |= 2u;
        v4 = *(v0 + 32) + 1;
        *(v0 + 32) = v4;
        if ( v4 & 1 )
            *v0 &= 0xFDu;
        v5 = *(v0 + 7);
        v6 = __OFSUB__(v5, 2);
        result = v5 - 2;
        *(v0 + 7) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *v0 |= 2u;
            *(v0 + 7) = 0;
            result = 4;
            *(v0 + 10) = 4;
        }
    }
    else
    {
        sprite_setColorShader(v0, 0x7FFF);
        *(v0 + 7) = 31;
        PlaySoundEffect(148, v1, v2);
        *(v0 + 32) = 0;
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80bd538
int sub_80BD538()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // r0
    int v5; // r1

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            v4 = *(v0 + 18);
            v5 = *(v0 + 19);
            object_isCurrentPanelSolid();
        }
    }
    else
    {
        *(v0 + 32) = 30;
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80bd586
int sub_80BD586()
{
    int v0; // r5

    return (*(&off_80BD598 + *(v0 + 10)))();
}


// 0x80bd5a8
signed int sub_80BD5A8()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r1
    int v4; // r0
    int v5; // r3
    int v6; // r2
    int v7; // r3
    char v8; // zf
    signed int result; // r0
    int v10; // [sp-8h] [bp-Ch]
    int v11; // [sp-4h] [bp-8h]

    object_isValidPanel(*(v0 + 20), *(v0 + 21));
    if ( !v8 )
    {
        v1 = *(v0 + 20);
        v2 = *(v0 + 21);
        if ( !*(v0 + 108) )
            goto LABEL_11;
        do
        {
            v3 = 1;
            do
            {
                v10 = v1;
                v11 = v3;
                object_checkPanelParameters(v1, v3, *(&off_80BD63C + *(v0 + 22)), 0);
                v1 = v10;
                v2 = v11;
                if ( !v8 )
                {
                    v4 = v10 - object_getFrontDirection(v0);
                    v5 = *(v0 + 76);
                    v6 = *(v5 + 18);
                    v7 = *(v5 + 19);
                    if ( v4 != v6 || v11 != v7 )
                        object_checkPanelParameters(v4, v11, 16, 260046848);
                    else
                        v8 = 0;
                    v1 = v10;
                    v2 = v11;
                    if ( !v8 )
                    {
                        *(v0 + 20) = v10;
                        *(v0 + 21) = v11;
                        *(v0 + 108) = 0;
                        ++*(v0 + 6);
                        result = 4;
                        *(v0 + 10) = 4;
                        return result;
                    }
                }
LABEL_11:
                v3 = v2 + 1;
            }
            while ( v3 <= 3 );
            v1 += object_getFrontDirection(v0);
        }
        while ( (v1 - 1) <= 5 );
    }
    *(v0 + 9) = 8;
    result = 0;
    *(v0 + 10) = 0;
    return result;
}


// 0x80bd644
int sub_80BD644()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            result = 8;
            *(v0 + 10) = 8;
        }
    }
    else
    {
        *(v0 + 16) = 4;
        sub_80B8E58(*(v0 + 104));
        *(v0 + 76) = 0;
        *(v0 + 32) = 3;
        if ( *(v0 + 6) == 1 )
            sub_80BDA7C(0);
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80bd67e
int sub_80BD67E()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            result = 12;
            *(v0 + 10) = 12;
        }
    }
    else
    {
        *(v0 + 16) = 4;
        *(v0 + 32) = 0;
        *(v0 + 18) = *(v0 + 20) - object_getFrontDirection(v0);
        *(v0 + 19) = *(v0 + 21);
        object_setCoordinatesFromPanels(v0);
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80bd6b6
int sub_80BD6B6()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int result; // r0
    int v4; // ST00_4
    int v5; // r6
    int v6; // r0
    int v7; // r1
    int v8; // r0
    int v9; // r1
    int v10; // r2
    int v11; // r3
    int v12; // r0
    unsigned __int8 v13; // vf

    if ( *(v0 + 11) )
    {
        if ( *(v0 + 32) == 5 )
        {
            v4 = object_getFrontDirection(v0) + *(v0 + 18);
            v5 = *(v0 + 44);
            sub_80C53A6(v4, *(v0 + 19), *(v0 + 14), 0x100000);
            object_getFlip(v0);
            v6 = object_getCoordinatesForPanels(v4);
            SpawnT4BattleObjectWithId0(v0, v6, v6, v7, 0x100000);
            v8 = camera_initShakeEffect_80302a8(1, 10);
            sub_80E11E0(v8, v9, v10, v11);
        }
        v12 = *(v0 + 32);
        v13 = __OFSUB__(v12, 1);
        result = v12 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v13) | (result == 0) )
        {
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 16) = 5;
        *(v0 + 17) = 6;
        sub_80B8E30(6);
        PlaySoundEffect(176, v1, v2);
        *(v0 + 32) = 10;
        sub_80BDA7C(5);
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80bd742
int sub_80BD742()
{
    int v0; // r5

    return (*(&off_80BD754 + *(v0 + 10)))();
}


// 0x80bd760
int sub_80BD760()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 4;
        sub_80B8E58(*(v0 + 104));
        *(v0 + 32) = 3;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80bd788
int sub_80BD788()
{
    int v0; // r5
    int v1; // r0
    int v2; // r2
    int v3; // r3
    _DWORD *v4; // r0
    int v5; // r0
    unsigned __int8 v6; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        if ( *(v0 + 6) )
        {
            *(v0 + 16) = 7;
            v1 = object_getFlip(v0);
            sprite_setFlip(v0, v1 ^ 1);
        }
        else
        {
            *(v0 + 16) = 3;
        }
        v2 = *(v0 + 68);
        v3 = *(v0 + 72);
        v4 = (v0 + 52);
        *v4 = *(v0 + 64);
        v4[1] = v2;
        v4[2] = v3;
        object_setPanelsFromCoordinates(v0);
        *(v0 + 60) = 0;
        *(v0 + 32) = 3;
        *(v0 + 11) = 8;
    }
    v5 = *(v0 + 32);
    v6 = __OFSUB__(v5, 1);
    result = v5 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v6) | (result == 0) )
    {
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80bd7d6
int sub_80BD7D6()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 100);
    if ( *(result + 9) == 8 )
    {
        *(v0 + 9) = 12;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bd7ea
int sub_80BD7EA()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 4;
        sub_80B8E58(*(v0 + 104));
        *(v0 + 32) = 4;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        *v0 &= 0xFDu;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80bd81a
int sub_80BD81A()
{
    int v0; // r5

    return (*(&off_80BD82C + *(v0 + 10)))();
}


// 0x80bd834
int __fastcall sub_80BD834(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf
    int v7; // r0
    int v8; // r1

    if ( *(v3 + 11) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *(v3 + 6) = 0;
            v7 = *(v3 + 18);
            v8 = *(v3 + 19);
            object_isCurrentPanelSolid();
        }
    }
    else
    {
        PlaySoundEffect(148, a2, a3);
        *(v3 + 32) = 4;
        *(v3 + 16) = 3;
        result = 4;
        *(v3 + 11) = 4;
    }
    return result;
}


// 0x80bd878
int sub_80BD878()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        result = 40;
        *(v0 + 32) = 40;
    }
    return result;
}


// 0x80bd89c
int sub_80BD89C()
{
    int v0; // r5

    (*(&off_80BD8B4 + *(v0 + 10)))();
    return sub_80BDAE0();
}


// 0x80bd8bc
int sub_80BD8BC()
{
    int v0; // r5
    int result; // r0
    __int64 v2; // ST00_8
    int v3; // r6
    int v4; // r6
    int v5; // r0
    int v6; // r4
    int v7; // r1
    int v8; // r0
    int v9; // r4
    int v10; // r1
    int v11; // r2
    int v12; // r0
    int v13; // r1
    int v14; // r2
    int v15; // r3
    int v16; // r0
    unsigned __int8 v17; // vf

    if ( *(v0 + 11) )
    {
        v16 = *(v0 + 32);
        v17 = __OFSUB__(v16, 1);
        result = v16 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v17) | (result == 0) )
        {
            result = 4;
            *(v0 + 10) = 4;
        }
    }
    else
    {
        result = *(v0 + 6);
        if ( result == 12 )
        {
            *(v0 + 11) = 4;
            *(v0 + 16) = 5;
            sub_80B8E30(5);
            v2 = sub_80BDA08();
            v3 = *(v0 + 44);
            sub_80C53A6(v2, SHIDWORD(v2), 0, 0);
            v4 = *(v0 + 44);
            sub_80C53A6(v2, SHIDWORD(v2), 0, 0);
            v5 = object_getCoordinatesForPanels(v2);
            v6 = (*(v0 + 22) << 8) | 0x36;
            SpawnT4BattleObjectWithId0(v0, 54, v5, v7, 0);
            v8 = object_getCoordinatesForPanels(v2);
            v9 = (*(v0 + 22) << 8) | 0x37;
            SpawnT4BattleObjectWithId0(v0, 55, v8, v10, 0);
            PlaySoundEffect(199, SHIDWORD(v2), v11);
            v12 = camera_initShakeEffect_80302a8(3, 35);
            sub_80E11E0(v12, v13, v14, v15);
            result = 30;
            *(v0 + 32) = 30;
        }
    }
    return result;
}


// 0x80bd960
int sub_80BD960()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        result = 20;
        *(v0 + 32) = 20;
    }
    return result;
}


// 0x80bd984
int sub_80BD984()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    _BYTE *v3; // r0

    v1 = sub_800F29C(*(v0 + 40));
    sub_8011044(v1, v2);
    v3 = *(v0 + 96);
    if ( v3 )
        *v3 = 0;
    return object_freeMemory();
}


// 0x80bd9a2
int __fastcall sub_80BD9A2(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(32, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 76) = v11;
        *(v4 + 96) = v6;
        if ( v6 )
            *v6 = 1;
        *(v4 + 22) = *(v11 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80bd9d4
int sub_80BD9D4()
{
    int v0; // r5

    return sprite_setColorShader(v0, 1057 * *(v0 + 7));
}


// 0x80bda08
__int64 sub_80BDA08()
{
    Battle *v0; // r5
    char v1; // zf
    int v2; // r0
    __int64 v4; // [sp+0h] [bp-14h]
    int v5; // [sp+8h] [bp-Ch]
    int v6; // [sp+Ch] [bp-8h]

    v5 = object_getFrontDirection(v0);
    LODWORD(v4) = v5 + v0->panelX;
    HIDWORD(v4) = v0->panelY;
    v6 = *(&off_80BDA68 + v0->Alliance);
    while ( 1 )
    {
        object_isValidPanel(v4, SHIDWORD(v4));
        if ( v1 )
            break;
        if ( object_getPanelParameters(v4, SHIDWORD(v4)) & v6 )
            return v4;
        LODWORD(v4) = v4 + v5;
    }
    v2 = *(&dword_80BDA70 + v0->Alliance);
    if ( v2 == v0->panelX )
        v2 += v5;
    LODWORD(v4) = v2;
    HIDWORD(v4) = v0->panelY;
    return v4;
}


// 0x80bda7c
int __fastcall sub_80BDA7C(int a1)
{
    Battle *v1; // r5
    int v2; // r4

    if ( a1 == 5 )
    {
        v2 = ((object_getFlip(v1) << 8) + 11) << 8;
        sub_80B8E62(17);
        sub_80E33FA(&v1->vx, v1->x, v1->y, v1->z);
    }
    object_getFlip(v1);
    return sub_80E33FA(&v1->vx, v1->x, v1->y, v1->z);
}


// 0x80bdae0
int sub_80BDAE0()
{
    int v0; // r5

    return (*(&off_80BDAF4 + *(v0 + 6)))();
}


// 0x80bdb04
signed int sub_80BDB04()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r0
    int v4; // r2
    signed int result; // r0

    v1 = sub_8018810(*(v0 + 40), 0, *(v0 + 22), *(v0 + 23));
    SpawnT4BattleObjectWithId0(v0, v1 << 16, *(v0 + 52) + (v1 << 16), *(v0 + 56), *(v0 + 60) + (v2 << 16));
    *(v0 + 116) = v3;
    *(v3 + 32) = 0x7FFF;
    PlaySoundEffect(113, 0x7FFF, v4);
    *(v0 + 34) = 0;
    result = 4;
    *(v0 + 6) = 4;
    return result;
}


// 0x80bdb3c
void __fastcall sub_80BDB3C(int a1, int a2, int a3, int a4, int a5)
{
    int v5; // r5
    int v6; // r0
    int v7; // r1
    int v8; // r0
    int v9; // r2

    ++*(v5 + 34);
    if ( *(*(v5 + 100) + 9) == 8 && *(v5 + 34) >= 40 )
    {
        *(*(v5 + 116) + 32) = 1;
        v6 = sub_8018810(*(v5 + 40), 0, *(v5 + 22), *(v5 + 23));
        SpawnT4BattleObjectWithId0(v5, v6 << 16, *(v5 + 52) + (v6 << 16), *(v5 + 56), *(v5 + 60) + (v7 << 16));
        *(v8 + 32) = 30;
        PlaySoundEffect(114, 30, v9);
        *(v5 + 34) = 0;
        *(v5 + 6) = 8;
    }
    JUMPOUT(__CS__, a5);
}


// 0x80bdb8c
int sub_80BDB8C()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 34) + 1;
    *(v0 + 34) = result;
    if ( result >= 15 )
    {
        result = 12;
        *(v0 + 6) = 12;
    }
    return result;
}


// 0x80bdb9e
void nullsub_9()
{
    ;
}


// 0x80bdba4
void sub_80BDBA4()
{
    int v0; // r5

    (*(&off_80BDBBC + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80bdbc8
int __noreturn sub_80BDBC8()
{
    int v0; // r5
    signed int v1; // r7
    int v2; // r0
    signed int v3; // r1
    int v4; // r1
    int v5; // r2
    int v6; // ST04_4
    int v7; // r5
    int v8; // r0
    int v9; // ST00_4
    char *v10; // r0
    int v11; // r0
    int v12; // r1
    int v13; // r2
    int v14; // r3
    _DWORD *v15; // r0
    int v16; // r0
    int v17; // r0
    int v18; // r1
    int v19; // r0

    if ( *(v0 + 4) )
    {
        sprite_decompress(12, 15);
        v4 = 12;
        v5 = 15;
    }
    else
    {
        v1 = 1;
        v2 = *(v0 + 76);
        v3 = *(v2 + 40);
        if ( v3 != &loc_1A0 && v3 <= 427 )
        {
            v3 = &loc_1A0;
            v1 = 0;
        }
        *(v0 + 40) = v3;
        *(v0 + 88) = *(v2 + 88);
        *(v0 + 112) = v1;
        sub_80E1352(*(v0 + 76), 0xFu);
        if ( v1 )
        {
            if ( sub_800F29C(*(v0 + 40)) == 2 )
            {
                v6 = v0;
                v7 = *(v0 + 76);
                v8 = sub_8013774(2, 44);
                v9 = v8;
                v10 = sub_8013774(v8, 41);
                v0 = v6;
                sub_800FC9E(v10, v9);
            }
            else
            {
                v11 = sub_800F26C(*(v0 + 40));
                v5 = v12;
                v4 = v11;
            }
        }
        else
        {
            v4 = 0;
            v5 = 0;
        }
    }
    sprite_load(v0, 128, v4, v5);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = -1;
    object_setCoordinatesFromPanels(v0);
    if ( !*(v0 + 4) )
    {
        object_getFrontDirection(v0);
        v13 = *(*(v0 + 76) + 56);
        v14 = *(*(v0 + 76) + 60);
        v15 = (v0 + 52);
        *v15 = *(*(v0 + 76) + 52);
        v15[1] = v13;
        v15[2] = v14;
        object_setPanelsFromCoordinates(v0);
    }
    *v0 |= 2u;
    v16 = object_getFlip(v0);
    sprite_setFlip(v0, v16);
    if ( !*(v0 + 4) )
    {
        v17 = sub_800F29C(*(v0 + 40));
        sub_8010DF6(v17, v18);
    }
    if ( !*(v0 + 4) )
    {
        v19 = sub_80136CC(*(v0 + 22), 44);
        sprite_setPallete(byte_80203EA[v19]);
    }
    if ( !*(v0 + 4) )
    {
        *(v0 + 100) = 0;
        sub_80BE434();
    }
    *(v0 + 7) = 0;
    *(v0 + 8) = 4;
    return sub_80BDCFC();
}


// 0x80bdcfc
int sub_80BDCFC()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 4) )
        result = (*(&off_80BDD34 + *(v0 + 9)))();
    else
        result = (*(&off_80BDD24 + *(v0 + 9)))();
    return result;
}


// 0x80bdd40
int __fastcall sub_80BDD40(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 11) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *(v3 + 9) += 4;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        PlaySoundEffect(148, a2, a3);
        *(v3 + 32) = 60;
        *(v3 + 16) = 3;
        result = 4;
        *(v3 + 11) = 4;
    }
    return result;
}


// 0x80bdd70
int sub_80BDD70()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 100);
    if ( !result || *(result + 9) == 4 )
    {
        *(v0 + 9) = 8;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bdd88
int sub_80BDD88()
{
    int v0; // r5

    return (*(&off_80BDD9C + *(v0 + 10)))();
}


// 0x80bdda8
int sub_80BDDA8()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 0;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 34) = 12;
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80bddca
int __fastcall sub_80BDDCA(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    char v5; // r0
    int v6; // r2
    _BYTE *v7; // r0
    int v8; // r0
    unsigned __int8 v9; // vf
    int result; // r0
    int v11; // r0

    if ( !*(v3 + 11) )
    {
        *(v3 + 16) = 14;
        *(v3 + 17) = -1;
        *(v3 + 32) = 10;
        PlaySoundEffect(106, a2, a3);
        sub_80B8E58(*(v3 + 104));
        if ( *(v3 + 112) )
            sub_80EB572(v3 + 104, 1);
        else
            sub_80B8E30(0);
        v4 = sub_80B8E58(*(v3 + 108));
        sub_80B8E30(v4);
        sub_80C44D2(*(v3 + 80));
        v5 = object_getFrontDirection(v3);
        v7 = sub_80C4FFE(v5 + *(v3 + 18), *(v3 + 19), v6, 0x100000);
        *v7 |= 0x10u;
        *(v3 + 11) = 4;
    }
    v8 = *(v3 + 32);
    v9 = __OFSUB__(v8, 1);
    result = v8 - 1;
    *(v3 + 32) = result;
    if ( ((result < 0) ^ v9) | (result == 0) )
    {
        v11 = *(v3 + 34);
        v9 = __OFSUB__(v11--, 1);
        *(v3 + 34) = v11;
        if ( ((v11 < 0) ^ v9) | (v11 == 0) )
        {
            result = 8;
            *(v3 + 10) = 8;
        }
        else
        {
            result = 0;
            *(v3 + 11) = 0;
        }
    }
    return result;
}


// 0x80bde58
int sub_80BDE58()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r0
    int v5; // r1

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 0;
        sub_80B8E58(*(v0 + 104));
        sub_80B8E58(*(v0 + 108));
        *(v0 + 32) = 10;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        if ( *(v0 + 20) )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
        else
        {
            v4 = sub_800F29C(*(v0 + 40));
            sub_8011044(v4, v5);
            *v0 &= 0xFDu;
            *(v0 + 8) = 8;
            result = sub_80E13DC(*(v0 + 76));
        }
    }
    return result;
}


// 0x80bdec0
int sub_80BDEC0()
{
    int v0; // r5

    return (*(&off_80BDED4 + *(v0 + 10)))();
}


// 0x80bdef0
int sub_80BDEF0()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80bdf0e
int sub_80BDF0E()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 4;
        sub_80B8E58(*(v0 + 104));
        sub_80B8E58(*(v0 + 108));
        *(v0 + 32) = 4;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80bdf3c
int sub_80BDF3C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r3
    char v3; // r0
    int v4; // r0
    unsigned __int8 v5; // vf
    int result; // r0
    char v7; // [sp-8h] [bp-Ch]
    char v8; // [sp-4h] [bp-8h]

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 3;
        v1 = *(v0 + 20) - object_getFrontDirection(v0);
        v2 = 125829120;
        if ( *(v0 + 22) )
            v2 = 192937984;
        v7 = v1;
        v8 = *(v0 + 21);
        if ( object_checkPanelParameters(v1, *(v0 + 21), 16, v2) )
        {
            *(v0 + 18) = v7;
            *(v0 + 19) = v8;
            object_setCoordinatesFromPanels(v0);
            v3 = 1;
        }
        else
        {
            *v0 &= 0xFDu;
            v3 = 0;
        }
        *(v0 + 7) = v3;
        *(v0 + 32) = 3;
        *(v0 + 11) = 4;
    }
    v4 = *(v0 + 32);
    v5 = __OFSUB__(v4, 1);
    result = v4 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v5) | (result == 0) )
    {
        if ( *(v0 + 7) )
        {
            result = 12;
            *(v0 + 10) = 12;
        }
        else
        {
            result = 24;
            *(v0 + 10) = 24;
        }
    }
    return result;
}


// 0x80bdfa6
int __fastcall sub_80BDFA6(int a1, int a2, int a3)
{
    int v3; // r5
    _BYTE *v4; // r0
    int v5; // r4
    int v6; // r4
    int v7; // r0
    _BYTE *v8; // r0
    signed int v9; // r2
    signed __int16 v10; // r3
    int v11; // r6
    int v12; // ST08_4
    __int16 v13; // ST0C_2
    char v14; // r0
    int v15; // r1
    int v16; // r0
    int v17; // r1
    char v18; // r0
    int v19; // r6
    int v20; // r0
    int v21; // r1
    int v22; // r2
    int v23; // r3
    int result; // r0

    if ( !*(v3 + 11) )
    {
        *(v3 + 16) = 5;
        PlaySoundEffect(176, a2, a3);
        v4 = *(*(v3 + 76) + 88);
        *(v3 + 116) = *v4;
        *(v3 + 117) = v4[1];
        *v4 = 2;
        v4[1] = 0;
        v5 = ((sub_80EBB78() << 8) + 1) << 8;
        v6 = (v5 + sub_80EBAE8()) << 8;
        v7 = sub_80EBB34();
        sub_80B8E30(v7);
        v8 = *(*(v3 + 76) + 88);
        *v8 = *(v3 + 116);
        v8[1] = *(v3 + 117);
        *(v3 + 32) = 0;
        *(v3 + 11) = 4;
    }
    if ( *(v3 + 32) == 10 )
    {
        v9 = 1;
        v10 = 25;
        v11 = *(v3 + 100);
        if ( v11 && *(v11 + 7) )
        {
            v9 = 3;
            v10 = 35;
        }
        v12 = v9;
        v13 = v10;
        object_getFlip(v3);
        v14 = object_getFrontDirection(v3);
        v15 = *(v3 + 19);
        v16 = object_getCoordinatesForPanels(v14 + *(v3 + 18));
        SpawnT4BattleObjectWithId0(v3, v16, v16, v17, 0x100000);
        v18 = object_getFrontDirection(v3);
        v19 = *(v3 + 44);
        sub_80C53A6(v18 + *(v3 + 18), *(v3 + 19), *(v3 + 14), 0);
        v20 = camera_initShakeEffect_80302a8(v12, v13);
        sub_80E11E0(v20, v21, v22, v23);
    }
    result = *(v3 + 32) + 1;
    *(v3 + 32) = result;
    if ( result > 50 )
    {
        result = 16;
        *(v3 + 10) = 16;
    }
    return result;
}


// 0x80be098
int sub_80BE098()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        sub_80B8E58(*(v0 + 104));
        sub_80B8E58(*(v0 + 108));
        *(v0 + 16) = 4;
        *(v0 + 32) = 4;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *v0 &= 0xFDu;
        result = 20;
        *(v0 + 10) = 20;
    }
    return result;
}


// 0x80be0ce
int sub_80BE0CE()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 3;
        *(v0 + 18) = *(*(v0 + 76) + 18);
        object_setCoordinatesFromPanels(v0);
        *(v0 + 32) = 3;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        result = 24;
        *(v0 + 10) = 24;
    }
    return result;
}


// 0x80be0fa
int sub_80BE0FA()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r0
    int v5; // r1

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 10;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        v4 = sub_800F29C(*(v0 + 40));
        sub_8011044(v4, v5);
        *v0 &= 0xFDu;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80be144
int __fastcall sub_80BE144(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 11) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *(v3 + 9) += 4;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        PlaySoundEffect(148, a2, a3);
        *(v3 + 32) = 60;
        *(v3 + 16) = 1;
        result = 4;
        *(v3 + 11) = 4;
    }
    return result;
}


// 0x80be174
int sub_80BE174()
{
    int v0; // r5

    return (*(&off_80BE188 + *(v0 + 10)))();
}


// 0x80be190
int sub_80BE190()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r0
    unsigned __int8 v4; // vf
    int result; // r0
    int v6; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 3;
        *(v0 + 32) = 10;
        sub_80B8E30(10);
        PlaySoundEffect(248, v1, v2);
        *(v0 + 11) = 4;
    }
    v3 = *(v0 + 32);
    v4 = __OFSUB__(v3, 1);
    result = v3 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v4) | (result == 0) )
    {
        v6 = object_getFrontDirection(v0);
        *(v0 + 108) = sub_80E5D12(v6, 5242880 * v6, 0, 0);
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80be1dc
int sub_80BE1DC()
{
    int v0; // r5
    char v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int result; // r0
    int v5; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 4;
        sub_80B8E70(*(v0 + 104), 9);
        *(v0 + 32) = 120;
        *(v0 + 11) = 4;
    }
    v1 = object_getFrontDirection(v0);
    sub_80C53A6(2 * v1 + *(v0 + 18), *(v0 + 19), 5, 0);
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v3) | (result == 0) )
    {
        v5 = *(v0 + 108);
        if ( v5 )
            sub_80E5D3E(v5);
        *(v0 + 9) = 8;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80be22e
int sub_80BE22E()
{
    int v0; // r5

    return (*(&off_80BE240 + *(v0 + 10)))();
}


// 0x80be254
int sub_80BE254()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 0;
        sub_80B8E58(*(v0 + 104));
        sub_80B8E58(*(v0 + 108));
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80be282
int sub_80BE282()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 2;
        *(v0 + 32) = 4;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        if ( *(v0 + 20) )
        {
            result = 8;
            *(v0 + 10) = 8;
        }
        else
        {
            *v0 &= 0xFDu;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    return result;
}


// 0x80be2b8
int sub_80BE2B8()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // [sp-8h] [bp-Ch]
    int v5; // [sp-4h] [bp-8h]

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 1;
        v4 = *(v0 + 20) - object_getFrontDirection(v0);
        v5 = *(v0 + 21);
        if ( !object_checkPanelParameters(v4, v5, 16, 260046848) )
        {
            *v0 &= 0xFDu;
            result = 8;
            *(v0 + 8) = 8;
            return result;
        }
        *(v0 + 18) = v4;
        *(v0 + 19) = v5;
        object_setCoordinatesFromPanels(v0);
        *(v0 + 7) = 1;
        *(v0 + 32) = 3;
        *(v0 + 11) = 4;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v3) | (result == 0) )
    {
        result = 12;
        *(v0 + 10) = 12;
    }
    return result;
}


// 0x80be312
int __fastcall sub_80BE312(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r6
    char v5; // r0
    int v6; // r1
    int v7; // r0
    int v8; // r1
    char v9; // r0
    int v10; // r6
    int result; // r0

    if ( !*(v3 + 11) )
    {
        *(v3 + 16) = 5;
        PlaySoundEffect(176, a2, a3);
        *(v3 + 32) = 0;
        *(v3 + 11) = 4;
    }
    if ( *(v3 + 32) == 10 )
    {
        v4 = *(v3 + 100);
        if ( v4 )
            *(v4 + 7);
        object_getFlip(v3);
        v5 = object_getFrontDirection(v3);
        v6 = *(v3 + 19);
        v7 = object_getCoordinatesForPanels(v5 + *(v3 + 18));
        SpawnT4BattleObjectWithId0(v3, v7, v7, v8, 0x100000);
        v9 = object_getFrontDirection(v3);
        v10 = *(v3 + 44);
        sub_80C53A6(v9 + *(v3 + 18), *(v3 + 19), *(v3 + 14), 0);
    }
    result = *(v3 + 32) + 1;
    *(v3 + 32) = result;
    if ( result > 50 )
    {
        result = 16;
        *(v3 + 10) = 16;
    }
    return result;
}


// 0x80be39a
int sub_80BE39A()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 2;
        *(v0 + 32) = 4;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *v0 &= 0xFDu;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80be3c4
int sub_80BE3C4()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    _BYTE *v3; // r0

    if ( !*(v0 + 4) )
    {
        v1 = sub_800F29C(*(v0 + 40));
        sub_8011044(v1, v2);
    }
    v3 = *(v0 + 96);
    if ( v3 )
        *v3 = 0;
    return object_freeMemory();
}


// 0x80be3e8
int __fastcall sub_80BE3E8(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(33, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 76) = v11;
        *(v4 + 96) = v6;
        if ( v6 )
            *v6 = 1;
        *(v4 + 22) = *(v11 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80be434
__int64 __noreturn sub_80BE434()
{
    Battle *v0; // r5
    int v1; // r0
    int v2; // r0
    int v4; // [sp+0h] [bp-1Ch]
    int v5; // [sp+4h] [bp-18h]
    int v6; // [sp+8h] [bp-14h]
    __int64 v7; // [sp+Ch] [bp-10h]
    int v8; // [sp+14h] [bp-8h]

    HIDWORD(v7) = v0->panelY;
    v8 = *(&off_80BE4C8 + v0->Alliance);
    v4 = object_getFrontDirection(v0);
    v5 = v4 + v0->panelX;
    v6 = v0->panelY;
    while ( 1 )
    {
        v1 = object_getPanelParameters(v5, v6);
        if ( !v1 )
            break;
        if ( v1 & v8 )
        {
            LODWORD(v7) = v5 + 2 * v4;
            HIDWORD(v7) = v6;
            if ( object_checkPanelParameters(v5 + 2 * v4, v6, 16, 260046848) )
                return v7;
            break;
        }
        v5 += v4;
    }
    v2 = 1;
    if ( v4 >= 0 )
        v2 = 6;
    LODWORD(v7) = v2;
    if ( !object_checkPanelParameters(v2, SHIDWORD(v7), 16, 260046848) )
        v7 = 0LL;
    return v7;
}


// 0x80be4d8
int sub_80BE4D8()
{
    int v0; // r5

    return (*(&off_80BE4EC + *(v0 + 8)))();
}


// 0x80be4f8
void __noreturn sub_80BE4F8()
{
    int v0; // r5
    int v1; // r0
    u8 v2; // r0

    sprite_load(v0, 128, 4, 26);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    sprite_removeShadow();
    v1 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v1);
    v2 = *off_80BE54C[*(v0 + 98)];
    *(v0 + 16) = v2;
    *(v0 + 97) = v2;
    *(v0 + 99) = v2;
    sprite_setAnimation(v0, v2);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    *(v0 + 8) = 4;
    sub_80BE55C();
}


// 0x80be55c
int sub_80BE55C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    unsigned int v3; // r0
    int v4; // r0
    int v5; // r0
    char v6; // zf
    int result; // r0

    v1 = sprite_getColorShader(*(v0 + 76));
    sprite_setColorShader(v0, v1);
    v2 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v2);
    v3 = sub_8002F3E(*(v0 + 76));
    (loc_8002F02)(v3);
    *(v0 + 23) = *(*(v0 + 76) + 23);
    v4 = object_getFlip(v0);
    sprite_setFlip(v0, v4);
    v5 = sprite_getMosaicScalingParameters(*(v0 + 76));
    (sprite_setAlpha)(v5);
    battle_isTimeStop();
    if ( v6 )
        (*(&off_80BE5C0 + *(v0 + 9)))();
    result = (*v0 & 0xFD) | **(v0 + 76) & 2;
    *v0 = result;
    return result;
}


// 0x80be5cc
int __fastcall sub_80BE5CC(int a1, int a2, int a3, int a4)
{
    Battle *obj; // r5
    int result; // r0
    int v6; // r1
    int v7; // r1
    int v8; // r0
    int v9; // r4
    int v10; // r1
    u32 v11; // r1
    u32 v12; // r2
    __int16 v13; // r3

    result = sub_80BE76A(a1, a2, a3, a4);
    if ( result )
    {
        result = sub_80BE73E();
        if ( result )
        {
            obj->objFlags &= 0xFDu;
            result = 100;
            v6 = *&obj->extraVars[4] - 1;
            *&obj->extraVars[4] = v6;
            if ( !v6 )
            {
                object_setPanelsFromCoordinates(obj);
                v7 = obj->extraVars[9];
                v8 = object_getCoordinatesForPanels(obj->extraVars[8]);
                v9 = *(obj->parent + 56);
                obj->vx = sub_8114F6A(&obj->x, v8, v10, 0);
                obj->vy = v11;
                obj->vz = v12;
                *&obj->extraVars[12] = v13;
                *&obj->extraVars[4] = 0;
                *&obj->extraVars[6] = *(obj->parent + 56);
                *&obj->extraVars[14] = 0;
                obj->objFlags |= 2u;
                obj->currAction = 4;
                result = 0;
                obj->currPhase = 0;
            }
        }
    }
    return result;
}


// 0x80be648
int __fastcall sub_80BE648(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // r1
    int v7; // r0

    result = sub_80BE76A(a1, a2, a3, a4);
    if ( result )
    {
        result = sub_80BE73E();
        if ( result )
        {
            *(v4 + 52) += *(v4 + 64);
            *(v4 + 60) = *&math_sinTable[2 * (*(v4 + 110) >> 8)] * (*(v4 + 112) >> 16) << 8;
            object_setPanelsFromCoordinates(v4);
            v6 = *(v4 + 102);
            v7 = sub_8114F52(*(v4 + 100)) + *(v4 + 99);
            if ( v7 != *(v4 + 97) )
            {
                *(v4 + 16) = v7;
                *(v4 + 97) = v7;
            }
            *(v4 + 110) += *(v4 + 108);
            result = *(v4 + 100) + 1;
            *(v4 + 100) = result;
            if ( result == *(v4 + 102) )
            {
                result = 8;
                *(v4 + 8) = 8;
            }
        }
    }
    return result;
}


// 0x80be6bc
int sub_80BE6BC()
{
    int v0; // r5
    int result; // r0

    sub_80BE73E();
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        sub_80E1A86(*(*(v0 + 88) + 116));
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80be6d8
int __fastcall __spoils<R0,R2,R3,R12> sub_80BE6D8(int a1, int a2, char a3, __int16 a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-20h]
    __int16 v7; // [sp+4h] [bp-1Ch]
    int v8; // [sp+8h] [bp-18h]
    int v9; // [sp+Ch] [bp-14h]
    int v10; // [sp+10h] [bp-10h]
    int v11; // [sp+14h] [bp-Ch]
    char v12; // [sp+18h] [bp-8h]

    v11 = a1;
    v6 = a3;
    v7 = a4;
    object_spawnType1(34, a1, a2, 0);
    result = v4;
    if ( !v4 )
        return v11;
    *(v4 + 76) = v9;
    *(v4 + 52) = *(v9 + 52);
    *(v4 + 56) = *(v9 + 56) - 1;
    *(v4 + 60) = *(v9 + 60);
    *(v4 + 22) = *(v9 + 22);
    *(v4 + 96) = v6;
    *(v4 + 100) = v7;
    *(v4 + 98) = v8 & 0xF;
    *(v4 + 116) = (v8 << 24) >> 28;
    *(v4 + 104) = v11;
    *(v4 + 105) = v12;
    *(v4 + 112) = v10;
    return result;
}


// 0x80be734
int __fastcall sub_80BE734(int result)
{
    if ( result )
        *(result + 8) = 8;
    return result;
}


// 0x80be73e
signed int sub_80BE73E()
{
    int v0; // r5
    signed int v1; // r4
    char v2; // zf
    int v3; // r3

    v1 = 0;
    battle_isPaused();
    if ( v2 )
    {
        v3 = *(v0 + 76);
        if ( *(v3 + 36) )
        {
            if ( !(*(*(v3 + 84) + 60) & 0x80110C00) )
            {
                battle_isTimeStop();
                if ( v2 )
                {
                    sub_801BC64();
                    v1 = 1;
                }
            }
        }
    }
    return v1;
}


// 0x80be76a
int __fastcall sub_80BE76A(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // r7

    result = *(*(v4 + 76) + 36);
    if ( !*(*(v4 + 76) + 36) )
    {
        v6 = *(v4 + 88) + 116;
        sub_80E1A6A(result, a2, a3, a4);
        *(v4 + 32) = 32;
        *(v4 + 9) = 8;
        result = 0;
    }
    return result;
}


// 0x80be798
void sub_80BE798()
{
    int v0; // r5

    (*(&off_80BE7B0 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80be7bc
int sub_80BE7BC()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r0
    int v4; // r0
    int v5; // r1

    if ( *(v0 + 4) )
    {
        sub_800FC9E(0, *(v0 + 4));
        sprite_load(v0, 128, v1, v2);
        sprite_loadAnimationData(v0);
        sprite_hasShadow();
        *(v0 + 16) = 0;
        *(v0 + 17) = -1;
        object_setCoordinatesFromPanels(v0);
        *(v0 + 60) = 0;
        *(v0 + 40) = (&loc_1AC + *(v0 + 4) - 1);
        v3 = object_getFlip(v0);
        sprite_setFlip(v0, v3);
        sprite_setPallete(byte_80203EA[*(v0 + 4)]);
        v4 = sub_800F29C(*(v0 + 40));
        sub_8010DF6(v4, v5);
    }
    *(v0 + 8) = 4;
    if ( *(v0 + 4) && *(v0 + 5) == 4 )
        *(v0 + 9) = 8;
    return sub_80BE834();
}


// 0x80be834
int sub_80BE834()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 4) )
        result = (*(&off_80BE854 + *(v0 + 9)))();
    else
        result = sub_80BE878();
    return result;
}


// 0x80be878
int sub_80BE878()
{
    int v0; // r5

    return (*(&off_80BE88C + *(v0 + 10)))();
}


// 0x80be8a0
signed int sub_80BE8A0()
{
    _WORD *v0; // r5
    signed int result; // r0

    v0[16] = 0;
    v0[17] = 0;
    result = 4;
    v0[5] = 4;
    return result;
}


// 0x80be8ae
signed int __fastcall sub_80BE8AE(int a1)
{
    int v1; // r5
    char *v2; // r7
    unsigned __int8 *v3; // r7
    int v4; // r4
    int v5; // r6
    signed int result; // r0

    v2 = byte_80BE91C;
    if ( sub_8013774(a1, 32) )
        v2 = byte_80BE936;
    v3 = &v2[5 * *(v1 + 34)];
    if ( *v3 != 255 )
    {
        v4 = (((((*(v1 + 34) << 8) + v3[2]) << 8) + v3[1]) << 8) + *v3;
        v5 = *(v1 + 44);
        sub_80BF160(*(v1 + 18), *(v1 + 19), v3[4], 0);
        sub_80BF192(v3[3]);
    }
    result = 8;
    *(v1 + 10) = 8;
    return result;
}


// 0x80be950
int sub_80BE950()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( !*(v0 + 11) )
    {
        result = *(v0 + 108) | *(v0 + 112);
        if ( *(v0 + 108) )
            return result;
        *(v0 + 32) = 10;
        *(v0 + 11) = 4;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v3) | (result == 0) )
    {
        *(v0 + 34) = 0;
        result = 12;
        *(v0 + 10) = 12;
    }
    return result;
}


// 0x80be97a
signed int __fastcall sub_80BE97A(int a1)
{
    int v1; // r5
    char *v2; // r7
    unsigned __int8 *v3; // r7
    int v4; // r4
    int v5; // r6
    signed int result; // r0

    v2 = byte_80BE9D8;
    if ( sub_8013774(a1, 32) )
        v2 = byte_80BE9F3;
    v3 = &v2[5 * *(v1 + 34)];
    if ( *v3 != 255 )
    {
        v4 = (((((*(v1 + 34) << 8) + v3[2]) << 8) + v3[1]) << 8) + *v3;
        v5 = *(v1 + 44);
        *(sub_80BF160(*(v1 + 18), *(v1 + 19), v3[4], 0) + 20) = *(v1 + 18);
        ++*(v1 + 34);
        JUMPOUT(&loc_80BE824);
    }
    result = 16;
    *(v1 + 10) = 16;
    return result;
}


// 0x80bea10
int sub_80BEA10()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    _BYTE *v4; // r0

    if ( !*(v0 + 11) )
    {
        result = *(v0 + 108) | *(v0 + 112);
        if ( *(v0 + 108) )
            return result;
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v3) | (result == 0) )
    {
        v4 = *(v0 + 96);
        if ( v4 )
            *v4 = 0;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80bea50
int sub_80BEA50()
{
    int v0; // r5

    return (*(&off_80BEA64 + *(v0 + 10)))();
}


// 0x80bea78
signed int __fastcall sub_80BEA78(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    unsigned __int8 v5; // vf
    signed int result; // r0
    int v7; // r0

    if ( !*(v3 + 11) )
    {
        *(v3 + 32) = 30;
        if ( *(v3 + 7) < 3 )
        {
            PlaySoundEffect(148, a2, a3);
            *v3 |= 2u;
        }
        *(v3 + 34) = 31;
        *(v3 + 11) = 4;
    }
    v4 = *(v3 + 32);
    v5 = __OFSUB__(v4--, 1);
    *(v3 + 32) = v4;
    if ( ((v4 < 0) ^ v5) | (v4 == 0) )
    {
        sprite_zeroColorShader();
        result = 4;
        *(v3 + 10) = 4;
    }
    else
    {
        v7 = *(v3 + 34);
        v5 = __OFSUB__(v7--, 1);
        *(v3 + 34) = v7;
        if ( (v7 < 0) ^ v5 )
            *(v3 + 34) = 0;
        result = sprite_setColorShader(v3, 1057 * *(v3 + 34));
    }
    return result;
}


// 0x80beace
int __fastcall sub_80BEACE(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    int v5; // ST00_4
    int v6; // ST04_4
    int v7; // r1
    int v8; // r0
    int result; // r0
    int v10; // r1

    if ( !*(v3 + 11) )
    {
        *(v3 + 32) = 0;
        PlaySoundEffect(272, a2, a3);
        *(v3 + 11) = 4;
    }
    v4 = *(v3 + 32) + 1;
    *(v3 + 32) = v4;
    if ( v4 > 20 )
        *(v3 + 10) = 8;
    v5 = *(v3 + 32);
    v6 = byte_80BEB20[*(v3 + 7)] + v5;
    object_getFrontDirection(v3);
    v7 = *(v3 + 19);
    v8 = object_getCoordinatesForPanels(*(v3 + 18));
    result = sub_80E58D2(v5, v6, v8);
    *(v3 + 52) = result;
    *(v3 + 56) = v10;
    return result;
}


// 0x80beb28
int sub_80BEB28()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        result = 12;
        *(v0 + 10) = 12;
    }
    return result;
}


// 0x80beb46
int sub_80BEB46()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    _BYTE *v4; // r1
    int v5; // r0
    int v6; // r1

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 4;
        *(v0 + 32) = 4;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *v0 &= 0xFDu;
        *(v0 + 10) = 16;
        result = *(v0 + 20);
        if ( !*(v0 + 20) )
        {
            v4 = *(v0 + 96);
            if ( v4 )
                *v4 = 0;
            v5 = sub_800F29C(*(v0 + 40));
            sub_8011044(v5, v6);
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    return result;
}


// 0x80beb90
int sub_80BEB90()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 20 * *(v0 + 7);
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bebbc
int sub_80BEBBC()
{
    int v0; // r5

    return (*(&off_80BEBD0 + *(v0 + 10)))();
}


// 0x80bebd8
int __fastcall sub_80BEBD8(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // ST04_4
    int v5; // r1
    int v6; // r0
    int v7; // r1
    int v8; // r0
    unsigned __int8 v9; // vf
    int result; // r0

    if ( !*(v3 + 11) )
    {
        *(v3 + 16) = 3;
        if ( *(v3 + 7) < 3 )
        {
            PlaySoundEffect(148, a2, a3);
            *v3 |= 2u;
        }
        v4 = byte_80BEC38[*(v3 + 7)] + 20;
        object_getFrontDirection(v3);
        v5 = *(v3 + 19);
        v6 = object_getCoordinatesForPanels(*(v3 + 18));
        *(v3 + 52) = sub_80E58D2(20, v4, v6);
        *(v3 + 56) = v7;
        *(v3 + 32) = 3;
        *(v3 + 11) = 4;
    }
    v8 = *(v3 + 32);
    v9 = __OFSUB__(v8, 1);
    result = v8 - 1;
    *(v3 + 32) = result;
    if ( ((result < 0) ^ v9) | (result == 0) )
    {
        result = 4;
        *(v3 + 10) = 4;
    }
    return result;
}


// 0x80bec40
int sub_80BEC40()
{
    int v0; // r5
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 0;
        *(v0 + 11) = 4;
    }
    result = *(v0 + 32) + 1;
    *(v0 + 32) = result;
    if ( result > 0 )
    {
        *(v0 + 9) = 28;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bec68
int sub_80BEC68()
{
    int v0; // r5

    return (*(&off_80BEC7C + *(v0 + 10)))();
}


// 0x80bec84
int sub_80BEC84()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 18) = *(v0 + 20);
        object_setCoordinatesFromPanels(v0);
        *(v0 + 23) ^= *(v0 + 12);
        v1 = object_getFlip(v0);
        sprite_setFlip(v0, v1);
        *(v0 + 16) = 3;
        *v0 |= 2u;
        *(v0 + 32) = 3;
        *(v0 + 11) = 4;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v3) | (result == 0) )
    {
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80becc6
int sub_80BECC6()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 0;
        *(v0 + 32) = 5;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 4 * *(v0 + 5) + 12;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80becf0
int sub_80BECF0()
{
    int v0; // r5

    return (*(&off_80BED04 + *(v0 + 10)))();
}


// 0x80bed0c
int __fastcall sub_80BED0C(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // ST00_4
    int v5; // r4
    int v6; // r6
    int v7; // r4
    int v8; // r0
    int v9; // r1
    int v10; // r0
    int v11; // r1
    int v12; // r2
    int v13; // r3
    int result; // r0

    if ( !*(v3 + 11) )
    {
        *(v3 + 16) = 5;
        PlaySoundEffect(176, a2, a3);
        *(v3 + 100) = sub_80B8E30(byte_80BEDC6[*(v3 + 6)]);
        *(v3 + 32) = 0;
        *(v3 + 11) = 4;
    }
    if ( *(v3 + 32) == 9 )
    {
        v4 = object_getFrontDirection(v3) + *(v3 + 18);
        v5 = *&byte_80BEDA8[4 * *(v3 + 6)];
        v6 = *(v3 + 44);
        sub_80C53A6(v4, *(v3 + 19), *(v3 + 14), 0);
        v7 = (object_getFlip(v3) << 8) + byte_80BEDC0[*(v3 + 6)];
        v8 = object_getCoordinatesForPanels(v4);
        SpawnT4BattleObjectWithId0(v3, v8, v8, v9, 0x100000);
        sub_80E11E0(v10, v11, v12, v13);
    }
    result = *(v3 + 32) + 1;
    *(v3 + 32) = result;
    if ( result > 21 )
    {
        *(v3 + 9) = 32;
        result = 0;
        *(v3 + 10) = 0;
    }
    return result;
}


// 0x80bedcc
int sub_80BEDCC()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 32;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bee04
int sub_80BEE04()
{
    int v0; // r5
    char v1; // r0
    int v2; // r6
    _BYTE *v3; // r0
    int v4; // r1
    int v5; // r1
    int v6; // r2
    int v7; // r3
    int v8; // r0
    unsigned __int8 v9; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 15;
        v1 = object_getFrontDirection(v0);
        v2 = *(v0 + 44);
        v3 = sub_80D8F98(v1 + *(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
        v4 = *v3 | 0x10;
        *v3 = v4;
        *(v0 + 104) = v3;
        PlaySoundEffect(186, v4, 16);
        *(v0 + 32) = 70;
        sub_80E11E0(70, v5, v6, v7);
        *(v0 + 11) = 4;
    }
    if ( *(v0 + 32) == 40 )
        sub_80D8FB8(*(v0 + 104));
    v8 = *(v0 + 32);
    v9 = __OFSUB__(v8, 1);
    result = v8 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v9) | (result == 0) )
    {
        *(v0 + 9) = 32;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bee62
int sub_80BEE62()
{
    int v0; // r5

    return (*(&off_80BEE74 + *(v0 + 10)))();
}


// 0x80bee80
int sub_80BEE80()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 10;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 10) = 4;
        result = sub_80BEEA2();
    }
    return result;
}


// 0x80beea2
int sub_80BEEA2()
{
    int v0; // r5
    int v1; // r0
    int v2; // r6
    int v3; // r1
    _BYTE *v4; // r0
    int v5; // r1
    int v6; // r0
    int v7; // r1
    int v8; // r2
    int v9; // r3
    int v10; // r0
    unsigned __int8 v11; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 10;
        v1 = sub_80B8E30(10);
        v2 = *(v0 + 44);
        v4 = sub_80D2B8E(v1, v3, *(v0 + 14), 0x100000);
        v5 = *v4 | 0x10;
        *v4 = v5;
        *(v0 + 32) = 30;
        v6 = PlaySoundEffect(240, v5, 16);
        sub_80E11E0(v6, v7, v8, v9);
        *(v0 + 56) += 0x10000;
        *(v0 + 60) += 0x10000;
        *(v0 + 11) = 4;
    }
    v10 = *(v0 + 32);
    v11 = __OFSUB__(v10, 1);
    result = v10 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v11) | (result == 0) )
    {
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80bef02
int sub_80BEF02()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        sub_80B8E70(*(v0 + 100), 0);
        *(v0 + 32) = 10;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 32;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bef2c
int sub_80BEF2C()
{
    int v0; // r5

    return (*(&off_80BEF40 + *(v0 + 10)))();
}


// 0x80bef48
int __fastcall sub_80BEF48(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    int v5; // r1
    int v6; // r0
    int v7; // r1
    int v8; // r0
    int v9; // r6
    int v10; // ST00_4
    int v11; // ST04_4
    int v12; // r2
    int v13; // r3
    int v14; // r0
    unsigned __int8 v15; // vf
    int result; // r0

    if ( !*(v3 + 11) )
    {
        *(v3 + 16) = 5;
        v4 = PlaySoundEffect(287, a2, a3);
        sub_80B8E30(v4);
        object_getFlip(v3);
        v5 = *(v3 + 19);
        v6 = object_getCoordinatesForPanels(*(v3 + 18));
        SpawnT4BattleObjectWithId0(v3, v6, v6, v7, 0x100000);
        *(v3 + 32) = 21;
        *(v3 + 11) = 4;
    }
    if ( *(v3 + 32) == 12 )
    {
        v8 = object_getFrontDirection(v3);
        v9 = *(v3 + 44);
        v10 = v8 + *(v3 + 18);
        v11 = *(v3 + 19);
        sub_80C53A6(v10, v11, *(v3 + 14), 0x100000);
        sub_80E11E0(v10, v11, v12, v13);
    }
    v14 = *(v3 + 32);
    v15 = __OFSUB__(v14, 1);
    result = v14 - 1;
    *(v3 + 32) = result;
    if ( (result < 0) ^ v15 )
    {
        result = 4;
        *(v3 + 10) = 4;
    }
    return result;
}


// 0x80befc0
int sub_80BEFC0()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 5;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        *(v0 + 9) = 32;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80befe2
int sub_80BEFE2()
{
    int v0; // r5

    return (*(&off_80BEFF4 + *(v0 + 10)))();
}


// 0x80bf000
int sub_80BF000()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r0
    int v4; // r2
    int v5; // r0
    int v6; // r1
    int v7; // r0
    int v8; // r2
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 0;
        v1 = sub_8018810(*(v0 + 40), 0, *(v0 + 22), *(v0 + 23));
        SpawnT4BattleObjectWithId0(v0, v1 << 16, *(v0 + 52) + (v1 << 16), *(v0 + 56), *(v0 + 60) + (v2 << 16));
        *(v3 + 32) = 70;
        PlaySoundEffect(113, 70, v4);
        *(v0 + 11) = 4;
    }
    if ( *(v0 + 32) == 70 )
    {
        v5 = sub_8018810(*(v0 + 40), 0, *(v0 + 22), *(v0 + 23));
        SpawnT4BattleObjectWithId0(v0, v5 << 16, *(v0 + 52) + (v5 << 16), *(v0 + 56), *(v0 + 60) + (v6 << 16));
        *(v7 + 32) = 20;
        PlaySoundEffect(114, 20, v8);
    }
    result = *(v0 + 32) + 1;
    *(v0 + 32) = result;
    if ( result > 90 )
    {
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80bf07a
int sub_80BF07A()
{
    int v0; // r5
    int v1; // r6
    int v2; // ST00_4
    int v3; // r2
    _BYTE *v4; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r2
    int v8; // r3
    int v9; // r1
    int v10; // r2
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 12;
        *(v0 + 32) = 0;
        *(v0 + 11) = 4;
    }
    if ( *(v0 + 32) == 4 && !*(v0 + 7) )
    {
        v1 = *(v0 + 44);
        v2 = *&byte_80BF0F0[4 * *(v0 + 22)];
        sub_80C53A6(*(v0 + 18), *(v0 + 19), *(v0 + 14), *(v0 + 60));
        v4 = sub_80E2FE8(v2, 2, v3, 0);
        *v4 |= 0x10u;
        v5 = camera_initShakeEffect_80302a8(3, 30);
        sub_80E11E0(v5, v6, v7, v8);
        PlaySoundEffect(195, v9, v10);
    }
    result = *(v0 + 32) + 1;
    *(v0 + 32) = result;
    if ( result > 60 )
    {
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80bf0f8
int sub_80BF0F8()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        *(v0 + 9) = 32;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bf11a
int sub_80BF11A()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    _BYTE *v4; // r1
    int v5; // r0
    int v6; // r1

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 4;
        sub_80B8E58(*(v0 + 100));
        *(v0 + 32) = 3;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *v0 &= 0xFDu;
        v4 = *(v0 + 96);
        if ( v4 )
            *v4 = 0;
        v5 = sub_800F29C(*(v0 + 40));
        sub_8011044(v5, v6);
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80bf160
int __fastcall sub_80BF160(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(35, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 76) = v11;
        *(v4 + 96) = v6;
        if ( v6 )
            *v6 = 1;
        *(v4 + 22) = *(v11 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80bf192
void __fastcall __noreturn sub_80BF192(int a1)
{
    int v1; // r5
    int *v2; // r0

    object_getFlipDirection(*(v1 + 22), *(v1 + 23) ^ a1);
    v2 = (&off_80BF224 + 8 * *(v1 + 22));
    object_getPanelsFiltered(v2, v2[1], *v2, v2[1]);
}


// 0x80bf260
void sub_80BF260()
{
    int v0; // r5

    (*(&off_80BF278 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80bf284
int __noreturn sub_80BF284()
{
    int v0; // r5
    int v1; // r0

    sprite_decompress(12, 100);
    sprite_load(v0, 128, 12, 100);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = -1;
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0x400000;
    *v0 |= 2u;
    *(v0 + 8) = 4;
    return sub_80BF2D0();
}


// 0x80bf2d0
int sub_80BF2D0()
{
    int v0; // r5

    return (*(&off_80BF2E4 + *(v0 + 9)))();
}


// 0x80bf2fc
int __fastcall sub_80BF2FC(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    unsigned __int8 v5; // vf
    int result; // r0

    if ( !*(v3 + 11) )
    {
        PlaySoundEffect(148, a2, a3);
        *(v3 + 32) = 60;
        *(v3 + 11) = 4;
    }
    v4 = *(v3 + 32);
    v5 = __OFSUB__(v4, 1);
    result = v4 - 1;
    *(v3 + 32) = result;
    if ( ((result < 0) ^ v5) | (result == 0) )
    {
        *(v3 + 9) = 4;
        result = 0;
        *(v3 + 10) = 0;
    }
    return result;
}


// 0x80bf324
int sub_80BF324()
{
    int v0; // r5

    return (*(&off_80BF338 + *(v0 + 10)))();
}


// 0x80bf340
int sub_80BF340()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    unsigned int v4; // r6
    int v5; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 2;
        *(v0 + 32) = 0;
        *(v0 + 34) = 6;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 32) = 15;
        v4 = (*(v0 + 44) >> 12 << 12) + 50;
        sub_80DC0C0(*(v0 + 18), *(v0 + 19), 1, *(v0 + 60));
        v5 = *(v0 + 34);
        v2 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v0 + 34) = result;
        if ( ((result < 0) ^ v2) | (result == 0) )
        {
            result = 4;
            *(v0 + 10) = 4;
        }
    }
    return result;
}


// 0x80bf38a
int sub_80BF38A()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 1;
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 8;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bf3b0
int sub_80BF3B0()
{
    int v0; // r5

    return (*(&off_80BF3C4 + *(v0 + 10)))();
}


// 0x80bf3cc
int __fastcall sub_80BF3CC(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    unsigned __int8 v5; // vf
    int result; // r0

    if ( !*(v3 + 11) )
    {
        *(v3 + 16) = 1;
        *(v3 + 32) = 30;
        PlaySoundEffect(272, a2, a3);
        *(v3 + 11) = 4;
    }
    sub_80BF402(*(v3 + 32));
    v4 = *(v3 + 32);
    v5 = __OFSUB__(v4, 1);
    result = v4 - 1;
    *(v3 + 32) = result;
    if ( ((result < 0) ^ v5) | (result == 0) )
    {
        sprite_setPallete(4);
        result = 4;
        *(v3 + 10) = 4;
    }
    return result;
}


// 0x80bf402
void __fastcall sub_80BF402(signed int a1)
{
    signed int v1; // r1
    int v2; // r2

    if ( a1 > 20 )
    {
        if ( a1 <= 10 )
            v1 = 1;
        else
            v1 = 2;
    }
    else
    {
        v1 = 4;
    }
    v2 = 0;
    if ( a1 & v1 )
        v2 = 4;
    sprite_setPallete(v2);
}


// 0x80bf428
int sub_80BF428()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 12;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bf44a
int sub_80BF44A()
{
    int v0; // r5

    return (*(&off_80BF45C + *(v0 + 10)))();
}


// 0x80bf464
int sub_80BF464()
{
    int v0; // r5
    unsigned int v1; // r6
    int v2; // r0
    unsigned __int8 v3; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 100;
        *(v0 + 16) = 3;
        sprite_setPallete(0);
        v1 = (*(v0 + 44) >> 12 << 12) + 2;
        sub_80DC22C(*(v0 + 18), *(v0 + 19), 0, 0);
        *(v0 + 11) = 4;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v3) | (result == 0) )
    {
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80bf4a4
int sub_80BF4A4()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 16) = 1;
        sprite_setPallete(4);
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 16;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bf4d0
int sub_80BF4D0()
{
    int v0; // r5

    return (*(&off_80BF4E4 + *(v0 + 10)))();
}


// 0x80bf4ec
int __fastcall sub_80BF4EC(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    unsigned __int8 v5; // vf
    int result; // r0

    if ( !*(v3 + 11) )
    {
        *(v3 + 16) = 1;
        *(v3 + 32) = 30;
        PlaySoundEffect(272, a2, a3);
        *(v3 + 11) = 4;
    }
    sub_80BF522(*(v3 + 32));
    v4 = *(v3 + 32);
    v5 = __OFSUB__(v4, 1);
    result = v4 - 1;
    *(v3 + 32) = result;
    if ( ((result < 0) ^ v5) | (result == 0) )
    {
        sprite_setPallete(0);
        result = 4;
        *(v3 + 10) = 4;
    }
    return result;
}


// 0x80bf522
void __fastcall sub_80BF522(signed int a1)
{
    signed int v1; // r1
    int v2; // r2

    if ( a1 > 20 )
    {
        if ( a1 <= 10 )
            v1 = 1;
        else
            v1 = 2;
    }
    else
    {
        v1 = 4;
    }
    v2 = 4;
    if ( a1 & v1 )
        v2 = 0;
    sprite_setPallete(v2);
}


// 0x80bf548
int sub_80BF548()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 20;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bf56a
int sub_80BF56A()
{
    int v0; // r5

    return (*(&off_80BF57C + *(v0 + 10)))();
}


// 0x80bf588
int sub_80BF588()
{
    int v0; // r5
    int v1; // r0
    int result; // r0
    char v4; // r0
    int v5; // r1
    int v6; // r0
    int v7; // r2

    if ( !*(v0 + 11) )
    {
        camera_initShakeEffect_80302a8(1, 10);
        *(v0 + 32) = 10;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    _VF = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ _VF) | (result == 0) )
    {
        *(v0 + 32) = 16;
        v4 = object_getEnemyDirection();
        v5 = *(v0 + 19);
        v6 = object_getCoordinatesForPanels(3 * v4 + *(v0 + 18));
        v7 = *(v0 + 52);
        __asm { SVC         6 }
        *(v0 + 64) = v6 - v7;
        __asm { SVC         6 }
        *(v0 + 72) = -*(v0 + 60);
        PlaySoundEffect(383, 16, v7);
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80bf5e0
signed int sub_80BF5E0()
{
    int v0; // r5
    int v1; // r0
    int v2; // r2
    int v3; // r6
    int v4; // r2
    int v5; // r4
    int v6; // r0
    int v7; // r1
    int v8; // r2
    int v9; // r3
    signed int result; // r0

    v1 = *(v0 + 32) - 1;
    *(v0 + 32) = v1;
    if ( v1 )
    {
        *(v0 + 52) += *(v0 + 64);
        *(v0 + 60) += *(v0 + 72);
        object_setPanelsFromCoordinates(v0);
        result = object_updateCollisionPanels(v0);
    }
    else
    {
        object_setCoordinatesFromPanels(v0);
        *(v0 + 60) = 0;
        if ( object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & 0xF800010 )
        {
            PlaySoundEffect(195, 260046864, v2);
            camera_initShakeEffect_80302a8(3, 30);
            v3 = *(v0 + 44);
            sub_80C53A6(*(v0 + 18), *(v0 + 19), 0, 0);
            sub_80DB48A(*(v0 + 18), *(v0 + 19), v4, 15);
            v5 = *(v0 + 22);
            v6 = sub_801BD3C(*(v0 + 18), *(v0 + 19), 5, 15);
            sub_80E11E0(v6, v7, v8, v9);
        }
        else
        {
            SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x100000);
        }
        *(v0 + 10) = 8;
        result = *v0 & 0xFD;
        *v0 = result;
    }
    return result;
}


// 0x80bf67e
int sub_80BF67E()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 60;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80bf69c
int sub_80BF69C()
{
    int v0; // r5
    _BYTE *v1; // r0

    v1 = *(v0 + 96);
    if ( v1 )
        *v1 = 0;
    return object_freeMemory();
}


// 0x80bf6ae
int __fastcall sub_80BF6AE(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(36, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 76) = v11;
        *(v4 + 96) = v6;
        if ( v6 )
            *v6 = 1;
        *(v4 + 22) = *(v11 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80bf6ec
void sub_80BF6EC()
{
    int v0; // r5

    (*(&off_80BF704 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80bf710
int __noreturn sub_80BF710()
{
    int v0; // r5
    int v1; // r0
    char *v2; // r7
    char v3; // r0
    int v4; // r0
    int v5; // r3
    int v6; // r1
    int v7; // r2
    int *v8; // r0
    int *v9; // r0
    int v10; // r0
    int v11; // r0
    int v12; // r1

    v1 = 8 * *(v0 + 4);
    v2 = &byte_80BF7A8[v1];
    *(v0 + 40) = *&byte_80BF7A8[v1 + 2];
    v3 = byte_80BF7A8[v1];
    if ( v3 & 0x80 )
        sprite_decompress(v3 & 0x7F, v2[1]);
    sprite_load(v0, 128, *v2 & 0x7F, v2[1]);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = -1;
    v4 = object_getFrontDirection(v0);
    v5 = *(*(v0 + 76) + 60);
    v6 = *(*(v0 + 76) + 52) + (v2[4] * v4 << 16);
    v7 = *(*(v0 + 76) + 56) + (v2[5] << 16);
    v8 = (v0 + 52);
    *v8 = v6;
    v8[1] = v7;
    v8[2] = v5;
    v9 = (v0 + 64);
    *v9 = v6;
    v9[1] = v7;
    v9[2] = v5;
    object_setPanelsFromCoordinates(v0);
    *(v0 + 60) = 0;
    *v0 |= 2u;
    v10 = object_getFlip(v0);
    sprite_setFlip(v0, v10);
    v11 = sub_800F29C(*(v0 + 40));
    sub_8010DF6(v11, v12);
    *(v0 + 8) = 4;
    return sub_80BF7BC();
}


// 0x80bf7bc
int sub_80BF7BC()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 4) )
        result = (*(&off_80BF7F4 + *(v0 + 9)))();
    else
        result = (*(&off_80BF7E4 + *(v0 + 9)))();
    return result;
}


// 0x80bf800
int sub_80BF800()
{
    int v0; // r5

    return (*(&off_80BF814 + *(v0 + 10)))();
}


// 0x80bf81c
signed int __fastcall sub_80BF81C(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    int v5; // r0
    signed int result; // r0

    if ( *(v3 + 11) )
    {
        v4 = *(v3 + 32) + 1;
        *(v3 + 32) = v4;
        if ( v4 > 1 )
        {
            *(v3 + 32) = 0;
            v5 = *(v3 + 34) + 1;
            *(v3 + 34) = v5;
            if ( v5 > 15 )
            {
                sprite_disableAlpha();
                result = 4;
                *(v3 + 10) = 4;
                return result;
            }
        }
    }
    else
    {
        PlaySoundEffect(252, a2, a3);
        *(v3 + 32) = 0;
        *(v3 + 34) = 0;
        sprite_setPallete(25);
        *(v3 + 11) = 4;
    }
    return sub_8002C7A(*(v3 + 34));
}


// 0x80bf866
int sub_80BF866()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bf888
int sub_80BF888()
{
    int v0; // r5

    return (*(&off_80BF89C + *(v0 + 10)))();
}


// 0x80bf8a8
int sub_80BF8A8()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r0
    unsigned __int8 v4; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 10;
        *(v0 + 32) = 30;
        sub_80B8E30(30);
        PlaySoundEffect(148, v1, v2);
        *(v0 + 11) = 4;
    }
    v3 = *(v0 + 32);
    v4 = __OFSUB__(v3, 1);
    result = v3 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v4) | (result == 0) )
    {
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80bf8da
int __fastcall sub_80BF8DA(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    int v5; // r2
    int v6; // r0
    int result; // r0

    if ( !*(v3 + 11) )
    {
        *(v3 + 32) = 0;
        *(v3 + 34) = 0;
        sub_80B8E70(*(v3 + 96), 2);
        camera_initShakeEffect_80302a8(2, 106);
        *(v3 + 11) = 4;
    }
    if ( !*(v3 + 34) )
        PlaySoundEffect(299, a2, a3);
    v4 = *(v3 + 34) + 1;
    *(v3 + 34) = v4;
    if ( v4 >= 16 )
        *(v3 + 34) = 0;
    v5 = *(v3 + 32);
    v6 = 0;
    if ( !*(v3 + 32) || (v6 = 1, v5 == 8) || (v6 = 2, v5 == 16) )
        sub_80BFD02(v6);
    result = *(v3 + 32) + 1;
    *(v3 + 32) = result;
    if ( result > 106 )
    {
        result = 8;
        *(v3 + 10) = 8;
    }
    return result;
}


// 0x80bf94e
int sub_80BF94E()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        sub_80B8E70(*(v0 + 96), 3);
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 8;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bf97c
int sub_80BF97C()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 4;
        sub_80B8E58(*(v0 + 96));
        *(v0 + 32) = 3;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *v0 &= 0xFDu;
        *(v0 + 9) = 12;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bf9b0
int sub_80BF9B0()
{
    int v0; // r5

    return (*(&off_80BF9C4 + *(v0 + 10)))();
}


// 0x80bf9cc
signed int sub_80BF9CC()
{
    int v0; // r5
    char v1; // r0
    int v2; // r1
    int v3; // r6
    int v4; // ST00_4
    int v5; // r5
    signed int result; // r0

    if ( !*(v0 + 11) )
    {
        v1 = *(v0 + 18);
        v2 = *(v0 + 19);
        v3 = *(v0 + 44);
        v4 = v0;
        v5 = *(v0 + 76);
        sub_80BFCD0(v1, v2, 0, 0);
        v0 = v4;
        *(v4 + 11) = 4;
    }
    result = *(v0 + 20);
    if ( !*(v0 + 20) )
    {
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80bf9fe
int sub_80BF9FE()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80bfa1c
int sub_80BFA1C()
{
    int v0; // r5

    return (*(&off_80BFA30 + *(v0 + 10)))();
}


// 0x80bfa38
int __fastcall sub_80BFA38(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    int result; // r0

    if ( !*(v3 + 11) )
    {
        PlaySoundEffect(315, a2, a3);
        *(v3 + 32) = 0;
        *(v3 + 52) -= 6553600 * object_getFrontDirection(v3);
        *(v3 + 60) = 6553600;
        *(v3 + 64) = 655360 * object_getFrontDirection(v3);
        *(v3 + 72) = -655360;
        *(v3 + 11) = 4;
    }
    *(v3 + 52) += *(v3 + 64);
    *(v3 + 60) += *(v3 + 72);
    v4 = *(v3 + 32);
    if ( v4 == 7 || v4 == 5 )
        sub_80BFD90(0);
    result = *(v3 + 32) + 1;
    *(v3 + 32) = result;
    if ( result >= 10 )
    {
        object_setCoordinatesFromPanels(v3);
        sprite_disableAlpha();
        result = 4;
        *(v3 + 10) = 4;
    }
    return result;
}


// 0x80bfaae
int sub_80BFAAE()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 0;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bfad8
int sub_80BFAD8()
{
    int v0; // r5

    return (*(&off_80BFAEC + *(v0 + 10)))();
}


// 0x80bfaf8
int sub_80BFAF8()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r0
    int v4; // r2
    int v5; // r0
    int v6; // r1
    int v7; // r0
    int v8; // r2
    int v9; // r0
    unsigned __int8 v10; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 0;
        v1 = sub_8018810(*(v0 + 40), 0, *(v0 + 22), *(v0 + 23));
        SpawnT4BattleObjectWithId0(v0, v1 << 16, *(v0 + 52) + (v1 << 16), *(v0 + 56), *(v0 + 60) + (v2 << 16));
        *(v3 + 32) = 30;
        PlaySoundEffect(113, 30, v4);
        *(v0 + 32) = 40;
        *(v0 + 11) = 4;
    }
    if ( *(v0 + 32) == 20 )
    {
        v5 = sub_8018810(*(v0 + 40), 0, *(v0 + 22), *(v0 + 23));
        SpawnT4BattleObjectWithId0(v0, v5 << 16, *(v0 + 52) + (v5 << 16), *(v0 + 56), *(v0 + 60) + (v6 << 16));
        *(v7 + 32) = 10;
        PlaySoundEffect(114, 10, v8);
    }
    v9 = *(v0 + 32);
    v10 = __OFSUB__(v9, 1);
    result = v9 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v10) | (result == 0) )
    {
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80bfb74
int sub_80BFB74()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    char v3; // r0
    int v4; // r6
    char v5; // ST00_1
    int v6; // r1
    int v7; // ST08_4
    int v8; // ST04_4
    int v9; // r0
    int v10; // r0
    int v11; // r1
    int v12; // r2
    int v13; // r3
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = 5;
        *(v0 + 32) = 0;
        sub_80B8E30(0);
        PlaySoundEffect(206, v1, v2);
        *(v0 + 11) = 4;
    }
    if ( *(v0 + 32) == 10 )
    {
        v3 = object_getFrontDirection(v0);
        v4 = *(v0 + 44);
        v5 = v3 + *(v0 + 18);
        sub_80C53A6(v5, *(v0 + 19), *(v0 + 14), 0);
        v8 = object_getCoordinatesForPanels(v5);
        v7 = v6;
        v9 = object_getFlip(v0);
        SpawnT4BattleObjectWithId0(v0, v9, v8, v7, 0x100000);
        v10 = camera_initShakeEffect_80302a8(2, 40);
        sub_80E11E0(v10, v11, v12, v13);
    }
    result = *(v0 + 32) + 1;
    *(v0 + 32) = result;
    if ( result > 30 )
    {
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80bfbfa
int sub_80BFBFA()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 8;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80bfc28
int sub_80BFC28()
{
    int v0; // r5

    return (*(&off_80BFC3C + *(v0 + 10)))();
}


// 0x80bfc44
signed int sub_80BFC44()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    signed int result; // r0

    if ( *(v0 + 11) )
    {
        v1 = *(v0 + 32) + 1;
        *(v0 + 32) = v1;
        if ( v1 > 2 )
        {
            *(v0 + 32) = 0;
            v2 = *(v0 + 34);
            v3 = __OFSUB__(v2--, 1);
            *(v0 + 34) = v2;
            if ( ((v2 < 0) ^ v3) | (v2 == 0) )
            {
                *v0 &= 0xFDu;
                sprite_disableAlpha();
                result = 4;
                *(v0 + 10) = 4;
                return result;
            }
        }
    }
    else
    {
        *(v0 + 16) = 0;
        sub_80B8E58(*(v0 + 96));
        *(v0 + 32) = 0;
        *(v0 + 34) = 15;
        *(v0 + 11) = 4;
    }
    return sub_8002C7A(*(v0 + 34));
}


// 0x80bfc94
int sub_80BFC94()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80bfcb2
int sub_80BFCB2()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    _BYTE *v3; // r0

    v1 = sub_800F29C(*(v0 + 40));
    sub_8011044(v1, v2);
    v3 = *(v0 + 100);
    if ( v3 )
        *v3 = 0;
    return object_freeMemory();
}


// 0x80bfcd0
int __fastcall sub_80BFCD0(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(37, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 76) = v11;
        *(v4 + 100) = v6;
        if ( v6 )
            *v6 = 1;
        *(v4 + 22) = *(v11 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80bfd02
int __fastcall sub_80BFD02(int a1)
{
    int v1; // r5
    int result; // r0
    int v3; // r6
    _BYTE *v4; // r0
    char *v5; // [sp+0h] [bp-1Ch]
    char v6; // [sp+4h] [bp-18h]

    v5 = *(&off_80BFD68 + a1);
    v6 = object_getFrontDirection(v1);
    while ( 1 )
    {
        result = *v5;
        if ( result == 127 )
            break;
        v3 = *(v1 + 44);
        v4 = sub_80D07A0(result * v6 + *(v1 + 18), v5[1] + *(v1 + 19), 1, 393216);
        *v4 |= 0x10u;
        v5 += 2;
    }
    return result;
}


// 0x80bfd90
int __fastcall sub_80BFD90(int a1)
{
    Battle *v1; // r5

    object_getFlip(v1);
    sub_80E33FA(0x10000, v1->x, v1->y - 0x10000, v1->z - 0x10000);
    object_getFlip(v1);
    return sub_80E33FA(0x10000, v1->x, v1->y - 0x10000, v1->z - 0x10000);
}


// 0x80bfdfc
void sub_80BFDFC()
{
    int v0; // r5
    char v1; // zf

    (*(&off_80BFE18 + *(v0 + 8)))();
    battle_isTimeStop();
    if ( v1 )
        object_updateSprite();
}


// 0x80bfe24
void __noreturn sub_80BFE24()
{
    int v0; // r5
    u8 v1; // r0
    int v2; // r0

    sprite_load(v0, 128, 8, 21);
    sprite_noShadow(v0);
    *v0 &= 0xFDu;
    v1 = *(*(v0 + 76) + 16) - *(v0 + 5) + *(v0 + 4);
    *(v0 + 16) = v1;
    *(v0 + 17) = v1;
    sprite_setAnimation(v0, v1);
    sprite_loadAnimationData(v0);
    v2 = object_getFlip(v0);
    sprite_setFlip(v0, v2);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 8) = 4;
    sprite_update(v0);
    sub_80BFE6E();
}


// 0x80bfe6e
int sub_80BFE6E()
{
    int v0; // r5

    return (*(&off_80BFE88 + *(v0 + 9)))();
}


// 0x80bfe8c
int sub_80BFE8C()
{
    int v0; // r5
    _DWORD *v1; // r4
    int v2; // r2
    int v3; // r3
    int v4; // r0
    int v5; // r0
    int v6; // r0
    int v7; // r0
    unsigned int v8; // r0
    int v9; // r0

    *(v0 + 16) = *(*(v0 + 76) + 16) - *(v0 + 5) + *(v0 + 4);
    v1 = *(v0 + 76);
    v2 = v1[14];
    v3 = v1[15];
    v4 = v0 + 52;
    *v4 = v1[13];
    *(v4 + 4) = v2;
    *(v4 + 8) = v3;
    LOWORD(v4) = *(v0 + 6);
    *(v0 + 58) -= v4;
    *(v0 + 62) -= v4;
    *v0 = *v0 & 0xFD | **(v0 + 76) & 2;
    v5 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v5);
    v6 = sprite_getColorShader(*(v0 + 76));
    sprite_setColorShader(v0, v6);
    v7 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v7);
    v8 = sub_8002F3E(*(v0 + 76));
    (loc_8002F02)(v8);
    v9 = sprite_getMosaicScalingParameters(*(v0 + 76));
    return (sprite_setAlpha)(v9);
}


// 0x80bff00
int __fastcall sub_80BFF00(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    int v8; // [sp+8h] [bp-Ch]
    int v9; // [sp+Ch] [bp-8h]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType1(38, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v6;
        *(v4 + 19) = v7;
        *(v4 + 76) = v8;
        *(v4 + 44) = 0;
        *(v4 + 22) = *(v9 + 22);
        *v4 |= 0x14u;
    }
    return result;
}


// 0x80bff28
int __fastcall sub_80BFF28(int result, char a2)
{
    if ( result )
    {
        *(result + 16) = a2;
        *(result + 17) = -1;
    }
    return result;
}


// 0x80bff34
int __fastcall sub_80BFF34(int result)
{
    if ( result )
        *(result + 17) = -1;
    return result;
}


// 0x80bff3e
signed int __fastcall sub_80BFF3E(signed int result)
{
    if ( result )
        result = sprite_setFlip(result, *(result + 22) ^ *(result + 23) ^ 1);
    return result;
}


// 0x80bff56
signed int __fastcall sub_80BFF56(signed int result)
{
    Battle *v1; // r5
    int v2; // r0

    if ( result )
    {
        v1 = result;
        v2 = object_getFlip(result);
        result = sprite_setFlip(v1, v2);
    }
    return result;
}


// 0x80bff68
int sub_80BFF68()
{
    int v0; // r5

    return (*(&off_80BFF7C + *(v0 + 8)))();
}


// 0x80bff88
void __noreturn sub_80BFF88()
{
    int v0; // r5
    int v1; // r0

    sprite_load(v0, 128, 4, 25);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    v1 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v1);
    sprite_setAnimation(v0, 6u);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    *(v0 + 8) = 4;
    sub_80BFFC0();
}


// 0x80bffc0
int sub_80BFFC0()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    unsigned int v3; // r0
    int v4; // r0
    int v5; // r0

    *v0 = *v0 & 0xFD | **(v0 + 76) & 2;
    v1 = sprite_getColorShader(*(v0 + 76));
    sprite_setColorShader(v0, v1);
    v2 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v2);
    v3 = sub_8002F3E(*(v0 + 76));
    (loc_8002F02)(v3);
    *(v0 + 23) = *(*(v0 + 76) + 23);
    v4 = object_getFlip(v0);
    sprite_setFlip(v0, v4);
    v5 = sprite_getMosaicScalingParameters(*(v0 + 76));
    (sprite_setAlpha)(v5);
    return (*(&off_80C001C + *(v0 + 9)))();
}


// 0x80c0030
int sub_80C0030()
{
    int v0; // r5
    unsigned int v1; // r0
    int v2; // r1
    int v3; // r2
    int v4; // r3
    unsigned __int8 v5; // cf
    int result; // r0

    sub_80C00CE();
    v1 = sub_800139A();
    v5 = __CFSHR__(v1, 2);
    result = v1 >> 2;
    if ( v5 )
    {
        *(v0 + 9) = 4;
        *(v0 + 10) = 0;
        result = sub_80C004C(0, v2, v3, v4);
    }
    return result;
}


// 0x80c004c
int __fastcall sub_80C004C(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0

    result = sub_80C0116(a1, a2, a3, a4);
    if ( result )
    {
        sub_80C00CE();
        if ( *(v4 + 96) )
            sub_80C0144();
        result = sub_80C00EA();
    }
    return result;
}


// 0x80c006a
void sub_80C006A()
{
    ;
}


// 0x80c006e
void sub_80C006E()
{
    ;
}


// 0x80c0072
int sub_80C0072()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    sub_80C00CE();
    result = battle_isTimeStop();
    if ( v2 )
    {
        sub_80C00EA();
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( !result )
        {
            sub_80E1A86(*(*(v0 + 88) + 116));
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    return result;
}


// 0x80c0098
int __fastcall sub_80C0098(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+4h] [bp-8h]

    object_spawnType1(39, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v6;
        *(v4 + 22) = *(v6 + 22);
        *v4 |= 4u;
    }
    return result;
}


// 0x80c00b8
int __fastcall sub_80C00B8(int result)
{
    if ( result )
        *(result + 8) = 8;
    return result;
}


// 0x80c00c2
int __fastcall sub_80C00C2(int result, char a2)
{
    if ( result )
        *(result + 16) = a2;
    return result;
}


// 0x80c00ce
int sub_80C00CE()
{
    int v0; // r5
    int v1; // r2
    int v2; // r3
    _DWORD *v3; // r0
    int result; // r0
    __int16 v5; // r1

    v1 = *(*(v0 + 76) + 56);
    v2 = *(*(v0 + 76) + 60);
    v3 = (v0 + 52);
    *v3 = *(*(v0 + 76) + 52);
    v3[1] = v1;
    v3[2] = v2;
    result = *(v0 + 58) + 1;
    v5 = *(v0 + 62) + 1;
    *(v0 + 58) = result;
    *(v0 + 62) = v5;
    return result;
}


// 0x80c00ea
signed int sub_80C00EA()
{
    int v0; // r5
    signed int v1; // r4
    char v2; // zf
    int v3; // r3

    v1 = 0;
    battle_isPaused();
    if ( v2 )
    {
        battle_isTimeStop();
        if ( v2 )
        {
            v3 = *(v0 + 76);
            if ( *(v3 + 36) )
            {
                if ( !(*(*(v3 + 84) + 60) & 0x80110C00) )
                {
                    sub_801BC64();
                    v1 = 1;
                }
            }
        }
    }
    return v1;
}


// 0x80c0116
int __fastcall sub_80C0116(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // r7

    result = *(*(v4 + 76) + 36);
    if ( !*(*(v4 + 76) + 36) )
    {
        v6 = *(v4 + 88) + 116;
        sub_80E1A6A(result, a2, a3, a4);
        *(v4 + 32) = 32;
        *(v4 + 9) = 16;
        result = 0;
    }
    return result;
}


// 0x80c0136
signed int __fastcall sub_80C0136(signed int result)
{
    signed int v1; // r5

    v1 = result;
    if ( result )
    {
        result = 1;
        *(v1 + 96) = 1;
    }
    return result;
}


// 0x80c0144
int sub_80C0144()
{
    int v0; // r5

    *(v0 + 96) = 0;
    object_getFlip(v0);
    return sub_80E33FA(661764, *(v0 + 52), *(v0 + 56), *(v0 + 60));
}


// 0x80c0178
int sub_80C0178()
{
    int v0; // r5

    return (*(&off_80C018C + *(v0 + 8)))();
}


// 0x80c0198
void __noreturn sub_80C0198()
{
    int v0; // r5
    int v1; // r0

    *v0 &= 0xFDu;
    sprite_load(v0, 128, 8, 10);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    v1 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v1);
    sprite_setAnimation(v0, 0xFu);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    *(v0 + 8) = 4;
    sub_80C01D8();
}


// 0x80c01d8
int sub_80C01D8()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    unsigned int v3; // r0
    int v4; // r0
    int v5; // r0

    *v0 = *v0 & 0xFD | **(v0 + 76) & 2;
    v1 = sprite_getColorShader(*(v0 + 76));
    sprite_setColorShader(v0, v1);
    v2 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v2);
    v3 = sub_8002F3E(*(v0 + 76));
    (loc_8002F02)(v3);
    *(v0 + 23) = *(*(v0 + 76) + 23);
    v4 = object_getFlip(v0);
    sprite_setFlip(v0, v4);
    v5 = sprite_getMosaicScalingParameters(*(v0 + 76));
    (sprite_setAlpha)(v5);
    return (*(&off_80C0234 + *(v0 + 9)))();
}


// 0x80c023c
int sub_80C023C()
{
    _BYTE *v0; // r5
    int result; // r0

    *v0 &= 0xFDu;
    v0[16] = 0;
    result = sub_80C031E();
    if ( result )
    {
        sub_80C02DA();
        result = sub_80C02F8();
    }
    return result;
}


// 0x80c025c
int sub_80C025C()
{
    int v0; // r5
    int result; // r0
    int v2; // r1
    int v3; // r2
    int v4; // r0

    result = sub_80C031E();
    if ( result )
    {
        if ( !*(v0 + 10) )
        {
            *(v0 + 10) = 4;
            *(v0 + 32) = 0;
            *(v0 + 16) = 33;
        }
        v4 = *(v0 + 32) + 1;
        *(v0 + 32) = v4;
        if ( v4 == 2 )
            PlaySoundEffect(379, v2, v3);
        sub_80C02F8();
        result = sprite_getFrameParameters();
        if ( result & 0x80 )
        {
            *(v0 + 32) = 0;
            *(v0 + 9) = 0;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80c02a6
int __fastcall sub_80C02A6(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+0h] [bp-8h]

    object_spawnType1(40, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v6;
        *(v4 + 22) = *(v6 + 22);
    }
    return result;
}


// 0x80c02be
int __fastcall sub_80C02BE(int result)
{
    if ( result )
        *(result + 8) = 8;
    return result;
}


// 0x80c02ca
int __fastcall sub_80C02CA(int result)
{
    if ( result )
    {
        *(result + 9) = 4;
        *(result + 10) = 0;
    }
    return result;
}


// 0x80c02da
int sub_80C02DA()
{
    int v0; // r5
    int v1; // r2
    int v2; // r3
    _DWORD *v3; // r0
    int result; // r0
    __int16 v5; // r1

    v1 = *(*(v0 + 76) + 56);
    v2 = *(*(v0 + 76) + 60);
    v3 = (v0 + 52);
    *v3 = *(*(v0 + 76) + 52);
    v3[1] = v1;
    v3[2] = v2;
    result = *(v0 + 58) + 1;
    v5 = *(v0 + 62) + 1;
    *(v0 + 58) = result;
    *(v0 + 62) = v5;
    return result;
}


// 0x80c02f8
signed int sub_80C02F8()
{
    int v0; // r5
    signed int v1; // r4
    char v2; // zf
    int v3; // r3

    v1 = 0;
    battle_isPaused();
    if ( v2 )
    {
        v3 = *(v0 + 76);
        if ( *(v3 + 36) )
        {
            if ( !(*(*(v3 + 84) + 60) & 0x80110C00) )
            {
                sub_801BC64();
                v1 = 1;
            }
        }
    }
    return v1;
}


// 0x80c031e
int sub_80C031E()
{
    int v0; // r5
    int result; // r0

    result = *(*(v0 + 76) + 36);
    if ( !*(*(v0 + 76) + 36) )
    {
        *(v0 + 8) = 8;
        result = 0;
    }
    return result;
}


// 0x80c0334
void sub_80C0334()
{
    int v0; // r5

    (*(&off_80C034C + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c0358
signed int __noreturn sub_80C0358()
{
    int v0; // r5
    u8 v1; // r0
    int v2; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    sprite_load(v0, 128, 8, 19);
    v1 = *(v0 + 4);
    *(v0 + 16) = v1;
    sprite_setAnimation(v0, v1);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    sprite_setField0x3Bit5();
    v2 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v2);
    sprite_setColorShader(v0, *(v0 + 96));
    sprite_setFlip(v0, *(v0 + 6));
    *(v0 + 6) = 2;
    *v0 |= 2u;
    *(v0 + 8) = 4;
    result = *(v0 + 5);
    if ( !*(v0 + 5) )
    {
        result = 4;
        *(v0 + 9) = 4;
    }
    return result;
}


// 0x80c03ae
int sub_80C03AE()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( *(v0 + 72) || (result = battle_isTimeStop(), v2) )
        result = (*(&off_80C03CC + *(v0 + 9)))();
    return result;
}


// 0x80c03d4
int sub_80C03D4()
{
    int v0; // r5
    int v1; // r0
    int result; // r0

    *v0 |= 2u;
    v1 = *(v0 + 6) - 1;
    *(v0 + 6) = v1;
    if ( !v1 )
    {
        *(v0 + 6) = 3;
        *v0 &= 0xFDu;
    }
    result = *(v0 + 5) - 1;
    *(v0 + 5) = result;
    if ( !result )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80c0404
int sub_80C0404()
{
    int v0; // r5
    int v1; // r0
    int result; // r0

    *v0 |= 2u;
    v1 = *(v0 + 6) - 1;
    *(v0 + 6) = v1;
    if ( !v1 )
    {
        *(v0 + 6) = 3;
        *v0 &= 0xFDu;
    }
    *(v0 + 52) += *(v0 + 64);
    *(v0 + 56) += *(v0 + 68);
    *(v0 + 60) -= *(v0 + 72);
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c0448
int __fastcall sub_80C0448(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    int v8; // [sp+0h] [bp-8h]

    object_spawnType1(41, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v8;
        *(v4 + 22) = *(v8 + 22);
        *(v4 + 96) = v5;
        *(v4 + 18) = *(v8 + 18);
        *(v4 + 32) = *(v6 + 16);
        *(v4 + 64) = *(v8 + 64);
        *(v4 + 68) = *(v8 + 68);
        *v4 &= 0xEFu;
    }
    return result;
}


// 0x80c047a
int __fastcall sub_80C047A(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+0h] [bp-8h]

    v6 = a1;
    result = sub_80C0448(a1, a2, a3, a4);
    if ( result )
    {
        *(result + 72) = v6;
        *(result + 60) = *(v4 + 60);
        *result |= 0x10u;
    }
    return result;
}


// 0x80c0498
int __fastcall sub_80C0498(int result)
{
    if ( result )
        *(result + 8) = 8;
    return result;
}


// 0x80c04a2
int __fastcall sub_80C04A2(int result)
{
    if ( result )
        *(result + 17) = -1;
    return result;
}


// 0x80c04ac
int sub_80C04AC()
{
    int v0; // r5

    return (*(&off_80C04C0 + *(v0 + 8)))();
}


// 0x80c04cc
void __noreturn sub_80C04CC()
{
    int v0; // r5
    int v1; // r0
    int v2; // r2

    sprite_load(v0, 128, 8, 11);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    sprite_removeShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    *v0 |= 2u;
    PlaySoundEffect(140, 2, v2);
    sub_8010DF6(1, *(v0 + 4));
    *(v0 + 8) = 4;
    sub_80C0526();
}


// 0x80c0526
int sub_80C0526()
{
    int v0; // r5

    return (*(&off_80C0538 + *(v0 + 9)))();
}


// 0x80c0544
int sub_80C0544()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 22;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( (v1 < 0) ^ v2 )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    else
    {
        sub_80C060A(4 * *(v0 + 32), 112 * *(v0 + 32) & 0xFF);
        result = sprite_setColorShader(v0, 8456);
    }
    return result;
}


// 0x80c0584
unsigned int sub_80C0584()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    unsigned int result; // r0
    unsigned int v4; // r0
    unsigned __int8 v5; // cf

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( (v1 < 0) ^ v2 )
    {
        *v0 |= 2u;
        *(v0 + 9) = 8;
        result = 0;
        *(v0 + 10) = 0;
    }
    else
    {
        *v0 |= 2u;
        v4 = *(v0 + 32);
        v5 = __CFSHR__(v4, 2);
        result = v4 >> 2;
        if ( v5 )
        {
            result = *v0 & 0xFD;
            *v0 = result;
        }
    }
    return result;
}


// 0x80c05c6
signed int sub_80C05C6()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    signed int result; // r0

    if ( !*(v0 + 11) )
    {
        sub_80C060A(0, 0);
        *(v0 + 32) = 8;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( !((v1 < 0) ^ v2) )
        return sub_8002C7A(2 * *(v0 + 32));
    sprite_disableAlpha();
    *v0 &= 0xFDu;
    sub_8011044(1, *(v0 + 4));
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80c060a
int __fastcall sub_80C060A(int a1, int a2)
{
    int v2; // r5
    int v3; // r7
    int v4; // r2
    int v5; // r1
    int v6; // r3
    int *v7; // r0
    int result; // r0

    v3 = *&math_sinTable[2 * a2] * a1 << 8;
    v4 = *(*(v2 + 76) + 56);
    v5 = *(*(v2 + 76) + 52) + (*&math_cosTable[2 * a2] * a1 << 8);
    v6 = *(*(v2 + 76) + 60) + v3;
    v7 = (v2 + 52);
    *v7 = v5;
    v7[1] = v4;
    v7[2] = v6;
    *(v2 + 58) += 2;
    result = *(v2 + 62) + 2;
    *(v2 + 62) = result;
    return result;
}


// 0x80c063c
int __fastcall sub_80C063C(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+0h] [bp-8h]

    object_spawnType1(42, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v6;
        *(v4 + 22) = *(v6 + 22);
    }
    return result;
}


// 0x80c065c
void sub_80C065C()
{
    int v0; // r5

    (*(&off_80C0674 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c0680
void __noreturn sub_80C0680()
{
    sub_801BE2A(0x1000000u);
}


// 0x80c06bc
int sub_80C06BC()
{
    int v0; // r5

    return (*(&off_80C06D0 + *(v0 + 10)))();
}


// 0x80c06dc
int sub_80C06DC()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 20;
        *(v0 + 64) = object_getFrontDirection(v0) << 17;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( ((v1 < 0) ^ v2) | (v1 == 0) )
    {
        *(v0 + 64) = 0;
        *(v0 + 10) = 4;
    }
    result = *(v0 + 52) + *(v0 + 64);
    *(v0 + 52) = result;
    return result;
}


// 0x80c0710
int sub_80C0710()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80c072e
int sub_80C072E()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 20;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( !((v1 < 0) ^ v2) )
        return sub_80C075E(2 * *(v0 + 32), 112 * *(v0 + 32) & 0xFF);
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80c075e
int __fastcall sub_80C075E(int a1, int a2)
{
    int v2; // r5
    int v3; // r7
    int v4; // r2
    int v5; // r1
    int v6; // r3
    int *v7; // r0
    int result; // r0

    v3 = *&math_sinTable[2 * a2] * a1 << 8;
    v4 = *(*(v2 + 76) + 56);
    v5 = *(*(v2 + 76) + 52) + (*&math_cosTable[2 * a2] * a1 << 8);
    v6 = *(*(v2 + 76) + 60) + v3;
    v7 = (v2 + 52);
    *v7 = v5;
    v7[1] = v4;
    v7[2] = v6;
    *(v2 + 58) += 2;
    result = *(v2 + 62) + 2;
    *(v2 + 62) = result;
    return result;
}


// 0x80c0790
int __fastcall sub_80C0790(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+0h] [bp-8h]

    object_spawnType1(43, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v6;
        *(v4 + 22) = *(v6 + 22);
        *v4 |= 4u;
    }
    return result;
}


// 0x80c07bc
int sub_80C07BC()
{
    int v0; // r5

    return (*(&JumpTable80C07CC + *(v0 + 8)))();
}


// 0x80c07dc
int sub_80C07DC()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0

    sprite_decompress(12, 80);
    *v0 |= 2u;
    sprite_load(v0, 128, 12, 80);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = 0;
    if ( *(v0 + 4) == 4 )
        v2 = 1;
    sprite_setPallete(v2);
    sprite_setColorShader(v0, 0x7FFF);
    *(v0 + 8) = 4;
    return sub_80C0840();
}


// 0x80c0840
int sub_80C0840()
{
    int v0; // r5

    (*(&off_80C0858 + *(v0 + 9)))();
    object_updateSprite();
    return sub_80C0DB0();
}


// 0x80c0870
int sub_80C0870()
{
    int v0; // r5

    return (*(&off_80C0884 + *(v0 + 10)))();
}


// 0x80c088c
int sub_80C088C()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int result; // r0
    __int16 v4; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v0 + 11) )
    {
        *v0 |= 2u;
        v4 = *(v0 + 32) + 1;
        *(v0 + 32) = v4;
        if ( v4 & 1 )
            *v0 &= 0xFDu;
        v5 = *(v0 + 25);
        v6 = __OFSUB__(v5, 2);
        result = v5 - 2;
        *(v0 + 25) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *v0 |= 2u;
            *(v0 + 25) = 0;
            result = 4;
            *(v0 + 10) = 4;
        }
    }
    else
    {
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 1310720);
        *(v0 + 25) = 31;
        PlaySoundEffect(148, v1, v2);
        *(v0 + 32) = 0;
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80c08ee
int sub_80C08EE()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 32) = 15;
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80c0912
int sub_80C0912()
{
    int v0; // r5

    return (*(&off_80C0924 + *(v0 + 10)))();
}


// 0x80c0938
void __fastcall __noreturn sub_80C0938(int a1, int a2)
{
    sub_80C0C9A(a1, a2);
}


// 0x80c0956
int __fastcall sub_80C0956(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 11) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *v3 &= 0xFDu;
            result = 8;
            *(v3 + 10) = 8;
        }
    }
    else
    {
        *(v3 + 16) = 2;
        PlaySoundEffect(190, a2, a3);
        *(v3 + 32) = 5;
        result = 4;
        *(v3 + 11) = 4;
    }
    return result;
}


// 0x80c0988
void sub_80C0988()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v1 = *(v0 + 60) + *(v0 + 72);
        *(v0 + 60) = v1;
        if ( v1 >> 16 >= 160 )
        {
            *(v0 + 10) = 12;
            return;
        }
    }
    else
    {
        *(v0 + 32) = 4;
        *(v0 + 72) = 983040;
        *(v0 + 11) = 4;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2--, 1);
    *(v0 + 32) = v2;
    if ( ((v2 < 0) ^ v3) | (v2 == 0) )
    {
        *(v0 + 32) = 5;
        sub_80C0DC2();
    }
}


// 0x80c09c6
void sub_80C09C6()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    unsigned __int8 v3; // vf
    int v4; // r0
    int v5; // r0

    if ( *(v0 + 11) )
    {
        v1 = *(v0 + 60);
        v2 = *(v0 + 72);
        v3 = __OFADD__(v1, v2);
        v4 = v1 + v2;
        *(v0 + 60) = v4;
        if ( ((v4 >> 16 < 0) ^ v3) | (v4 >> 16 == 0) )
        {
            *(v0 + 60) = 0;
            *(v0 + 10) = 16;
            return;
        }
    }
    else
    {
        *(v0 + 32) = 1;
        *(v0 + 72) = -*(v0 + 72);
        *(v0 + 18) = *(v0 + 6);
        object_setCoordinatesFromPanels(v0);
        *(v0 + 11) = 4;
    }
    v5 = *(v0 + 32);
    v3 = __OFSUB__(v5--, 1);
    *(v0 + 32) = v5;
    if ( ((v5 < 0) ^ v3) | (v5 == 0) )
    {
        *(v0 + 32) = 3;
        sub_80C0DC2();
    }
}


// 0x80c0a0e
int sub_80C0A0E()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 32) = 5;
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 1310720);
        *v0 |= 2u;
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80c0a4c
int sub_80C0A4C()
{
    int v0; // r5

    return (*(&off_80C0A60 + *(v0 + 10)))();
}


// 0x80c0a6c
int sub_80C0A6C()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            result = 4;
            *(v0 + 10) = 4;
        }
    }
    else
    {
        *(v0 + 16) = 3;
        *(v0 + 32) = 9;
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80c0a90
_BYTE *__fastcall sub_80C0A90(int a1, int a2, int a3)
{
    int v3; // r5
    _BYTE *v4; // r0
    signed int v5; // r0
    int v6; // r0
    _BYTE *result; // r0
    int v8; // r0
    int v9; // r0
    unsigned __int8 v10; // vf
    int v11; // r0
    int v12; // r0
    int v13; // r0
    int v14; // r0

    if ( *(v3 + 11) )
    {
        v8 = (*(v3 + 104) + 1) & 7;
        *(v3 + 104) = v8;
        if ( v8 == 1 )
            PlaySoundEffect(191, 7, a3);
        v9 = *(v3 + 32);
        v10 = __OFSUB__(v9, 1);
        result = (v9 - 1);
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v10) | (result == 0) )
        {
            *(v3 + 32) = 10;
            v11 = *(v3 + 34);
            v10 = __OFSUB__(v11--, 1);
            *(v3 + 34) = v11;
            if ( ((v11 < 0) ^ v10) | (v11 == 0) )
            {
                v13 = *(v3 + 96) - 1;
                *(v3 + 96) = v13;
                if ( v13 )
                {
                    *(v3 + 34) = 3;
                    v14 = object_getFrontDirection(v3);
                    sub_80C0D98(v14 + *(v3 + 18), *(v3 + 19));
                    result = (&loc_FC + 3);
                    *(v3 + 17) = -1;
                }
                else
                {
                    result = &dword_8;
                    *(v3 + 10) = 8;
                }
            }
            else
            {
                v12 = object_getFrontDirection(v3);
                result = sub_80C0D98(v12 + *(v3 + 18), *(v3 + 19));
            }
        }
    }
    else
    {
        v4 = sub_80B8E30(*(v3 + 4));
        *v4 |= 0x10u;
        *(v3 + 32) = 10;
        *(v3 + 34) = 3;
        v5 = 1;
        if ( *(v3 + 4) == 5 )
            v5 = 3;
        *(v3 + 96) = v5;
        v6 = object_getFrontDirection(v3);
        sub_80C0D98(v6 + *(v3 + 18), *(v3 + 19));
        result = dword_4;
        *(v3 + 11) = 4;
    }
    return result;
}


// 0x80c0b4a
int sub_80C0B4A()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 16) = 0;
        *(v0 + 108) = 0;
        *(v0 + 32) = 10;
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80c0b76
int sub_80C0B76()
{
    int v0; // r5

    return (*(&off_80C0B88 + *(v0 + 10)))();
}


// 0x80c0b90
int __fastcall sub_80C0B90(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 11) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *v3 &= 0xFDu;
            result = 4;
            *(v3 + 10) = 4;
        }
    }
    else
    {
        *(v3 + 16) = 2;
        PlaySoundEffect(190, a2, a3);
        *(v3 + 32) = 5;
        result = 4;
        *(v3 + 11) = 4;
    }
    return result;
}


// 0x80c0bc2
void sub_80C0BC2()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v1 = *(v0 + 60) + *(v0 + 72);
        *(v0 + 60) = v1;
        if ( v1 >> 16 >= 160 )
        {
            *(v0 + 9) = 16;
            *(v0 + 10) = 0;
            return;
        }
    }
    else
    {
        *(v0 + 32) = 4;
        *(v0 + 72) = 983040;
        *(v0 + 11) = 4;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2--, 1);
    *(v0 + 32) = v2;
    if ( ((v2 < 0) ^ v3) | (v2 == 0) )
    {
        *(v0 + 32) = 5;
        sub_80C0DC2();
    }
}


// 0x80c0c04
int sub_80C0C04()
{
    int v0; // r5

    return (*(&off_80C0C18 + *(v0 + 10)))();
}


// 0x80c0c20
int __fastcall sub_80C0C20(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // r0
    unsigned __int8 v7; // vf

    if ( *(v4 + 11) )
    {
        v6 = *(v4 + 32);
        v7 = __OFSUB__(v6, 1);
        result = v6 - 1;
        *(v4 + 32) = result;
        if ( ((result < 0) ^ v7) | (result == 0) )
        {
            sub_80E1332(*(v4 + 76), 0, a3, a4);
            result = 4;
            *(v4 + 10) = 4;
        }
    }
    else
    {
        *(v4 + 32) = 10;
        result = 4;
        *(v4 + 11) = 4;
    }
    return result;
}


// 0x80c0c48
int sub_80C0C48()
{
    int v0; // r5
    char v1; // r0
    int v2; // r1
    int v3; // ST00_4
    int v4; // r5
    int v5; // r2
    int v6; // r3
    int result; // r0
    int v8; // r0
    unsigned __int8 v9; // vf

    if ( *(v0 + 11) )
    {
        v8 = *(v0 + 32);
        v9 = __OFSUB__(v8, 1);
        result = v8 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v9) | (result == 0) )
        {
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        sub_80E199A(*(v0 + 44));
        v1 = *(v0 + 12);
        v2 = *(v0 + 13);
        v3 = v0;
        v4 = *(v0 + 76);
        sub_80CE224(v1, v2, v5, v6);
        *(v3 + 32) = 90;
        result = 4;
        *(v3 + 11) = 4;
    }
    return result;
}


// 0x80c0c8c
int sub_80C0C8C()
{
    int v0; // r5

    **(v0 + 100) = 0;
    return object_freeMemory();
}


// 0x80c0c9a
int __fastcall __noreturn sub_80C0C9A(int a1, int a2)
{
    Battle *v2; // r5
    int result; // r0
    int v4; // r4
    unsigned int v5; // r0
    int v6; // r1
    int v7; // r0
    int v8; // r2
    bool v9; // zf
    bool v10; // nf
    unsigned __int8 v11; // vf
    int v12; // r0
    int v13; // r0
    u32 *v14; // r3
    int v15; // r2
    int v16; // r3
    int v17; // r4
    unsigned int v18; // r0
    int v19; // r1
    int v20; // r2
    int v21; // r3
    int v22; // [sp+0h] [bp+0h]
    int v23; // [sp+8h] [bp+8h]
    int v24; // [sp+14h] [bp+14h]
    int v25; // [sp+18h] [bp+18h]
    int v26; // [sp+1Ch] [bp+1Ch]
    int v27; // [sp+20h] [bp+20h]
    int v28; // [sp+24h] [bp+24h]
    int v29; // [sp+28h] [bp+28h]
    int v30; // [sp+2Ch] [bp+2Ch]
    int v31; // [sp+30h] [bp+30h]

    v25 = 0;
    v26 = 0;
    v29 = 255;
    v30 = 255;
    result = object_getPanelsExceptCurrentFilterred(4 * v2->Alliance, a2, *(&off_80C0D90 + v2->Alliance), 0);
    v24 = result;
    if ( result )
    {
        v31 = 0;
        v4 = 0;
        do
        {
            v5 = *(&v22 + v31);
            v6 = v5 >> 4;
            v7 = v5 & 7;
            v27 = v7;
            v28 = v6;
            v8 = v2->panelX;
            if ( v2->Alliance == v2->directionFlip )
            {
                v11 = __OFSUB__(v7, v8);
                v9 = v7 == v8;
                v10 = v7 - v8 < 0;
            }
            else
            {
                v11 = __OFSUB__(v8, v7);
                v9 = v8 == v7;
                v10 = v8 - v7 < 0;
            }
            if ( !((v10 ^ v11) | v9) )
            {
                if ( (v12 = object_getFrontDirection(v2),
                            v13 = v27 - v12,
                            v27 = v13,
                            v14 = v2->parent,
                            v15 = *(v14 + 18),
                            v16 = *(v14 + 19),
                            v13 == v15)
                    && v28 == v16
                    || object_checkPanelParameters(v13, v28, 0, 260046848) )
                {
                    *(&v23 + v4++) = v27 | 16 * v28;
                }
            }
            ++v31;
        }
        while ( v31 < v24 );
        v24 = v4;
        if ( v4 )
        {
            v17 = 0;
            do
            {
                v18 = *(&v23 + v17);
                v19 = v18 >> 4;
                v27 = v18 & 7;
                v28 = v18 >> 4;
                v20 = v27 - v2->panelX;
                if ( v20 < 0 )
                    v20 = v2->panelX - (v18 & 7);
                v21 = v19 - v2->panelY;
                if ( v21 < 0 )
                    v21 = v2->panelY - v19;
                if ( v20 < v29 || v20 <= v29 && (v19 < v30 || v19 <= v30 && v19 < v26) )
                {
                    v25 = v27;
                    v26 = v28;
                    v29 = v20;
                    v30 = v21;
                }
                ++v17;
            }
            while ( v17 < v24 );
        }
        result = v25;
    }
    return result;
}


// 0x80c0d98
_BYTE *__fastcall sub_80C0D98(int a1, int a2)
{
    int v2; // r5
    int v3; // r6

    v3 = *(v2 + 44);
    return sub_80C53A6(a1, a2, 0, 1310720);
}


// 0x80c0db0
int sub_80C0DB0()
{
    Battle *v0; // r5

    return sprite_setColorShader(v0, 1057 * v0->unk_19);
}


// 0x80c0dc2
void sub_80C0DC2()
{
    Battle *v0; // r5
    u32 v1; // r1
    u32 v2; // r2
    u32 v3; // r3
    int v4; // r0
    int v5; // r1
    int v6; // r2
    int v7; // r3

    v1 = v0->x;
    v2 = v0->y;
    v3 = v0->z;
    v4 = sub_801BDDE(0x10u);
    SpawnT4BattleObjectWithId0(v0, v4, v5, v6, v7);
}


// 0x80c0dd8
int __fastcall sub_80C0DD8(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    int v10; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    object_spawnType1(44, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 12) = v8;
        *(v4 + 19) = v9;
        *(v4 + 13) = v9;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 44) = v5;
        *(v4 + 76) = v10;
        *(v4 + 100) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80c0e04
int sub_80C0E04()
{
    int v0; // r5

    return (*(&off_80C0E18 + *(v0 + 8)))();
}


// 0x80c0e24
void sub_80C0E24()
{
    int v0; // r5
    int v1; // r0
    int v2; // r5
    int v3; // r0
    int v4; // ST00_4
    char *v5; // r0
    int v6; // r1
    int v7; // r2
    int v8; // r2
    int v9; // r3
    _DWORD *v10; // r0
    int v11; // r0
    int v12; // r5
    int v13; // r0
    int v14; // ST00_4
    int v15; // r0
    int v16; // r0
    int v17; // r5
    _BYTE *v18; // r0
    int v19; // r0
    int v20; // [sp-4h] [bp-Ch]

    v1 = sub_800F29C(*(*(v0 + 76) + 40));
    *(v0 + 96) = v1;
    if ( v1 == 2 )
    {
        v20 = v0;
        v2 = *(v0 + 76);
        v3 = sub_8013774(2, 44);
        v4 = v3;
        v5 = sub_8013774(v3, 41);
        sub_800FC9E(v5, v4);
        sprite_load(v20, 128, v6, v7);
        sprite_loadAnimationData(v20);
        sprite_hasShadow();
        *v20 |= 2u;
        v8 = *(*(v20 + 76) + 56);
        v9 = *(*(v20 + 76) + 60);
        v10 = (v20 + 52);
        *v10 = *(*(v20 + 76) + 52);
        v10[1] = v8;
        v10[2] = v9;
        v11 = sub_801002C();
        v0 = v20;
        sprite_setPallete(v11);
        if ( *(v20 + 96) == 2 )
        {
            v12 = *(v20 + 76);
            v13 = sub_8013774(2, 44);
            v14 = v13;
            v15 = sub_8013774(v13, 41);
            v16 = sub_8011420(v15, v14);
            v17 = *(v20 + 76);
            v0 = v20;
            if ( sub_8013774(v16, 44) )
            {
                v18 = *(v20 + 80);
                if ( v18 )
                {
                    v18[6] = 1;
                    *v18 |= 0x14u;
                }
            }
        }
        v19 = object_getFlip(v0);
        sprite_setFlip(v0, v19);
        *(v0 + 16) = *(v0 + 7) + 3;
        *(v0 + 17) = -1;
    }
    *(v0 + 8) = 4;
    sub_80C0EE2();
}


// 0x80c0ee2
void sub_80C0EE2()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int v3; // r4
    int v4; // r0
    int v5; // r1

    if ( !*(v0 + 11) )
    {
        if ( *(v0 + 7) )
        {
            if ( *(v0 + 96) == 2 )
                sub_80E1352(*(v0 + 76), 0);
            else
                sub_80E146C(*(v0 + 76));
        }
        *(v0 + 32) = 4;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( ((v1 < 0) ^ v2) | (v1 == 0) )
    {
        *v0 &= 0xFDu;
        v3 = *(v0 + 76);
        v4 = sub_800F29C(*(v3 + 40));
        sub_8011044(v4, v5);
        if ( !*(v0 + 7) )
        {
            if ( *(v0 + 96) == 2 )
                sub_80E13DC(v3);
            else
                sub_80E14AC(v3);
        }
        *(v0 + 8) = 8;
    }
    object_updateSpriteTimestop();
}


// 0x80c0f52
int __fastcall sub_80C0F52(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+0h] [bp-10h]
    char v7; // [sp+4h] [bp-Ch]

    v6 = a1;
    v7 = a2;
    object_spawnType1(45, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v6;
        *(v4 + 7) = v7;
        *(v4 + 22) = *(v6 + 22);
    }
    return result;
}


// 0x80c0f6c
int sub_80C0F6C()
{
    int v0; // r5

    return (*(&off_80C0F80 + *(v0 + 8)))();
}


// 0x80c0f8c
void __noreturn sub_80C0F8C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    _DWORD *v7; // r0

    v1 = sub_802D234();
    if ( v1 != 6 )
        LOBYTE(v1) = 3;
    *v0 = v1;
    sprite_load(v0, 128, 4, 16);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    v2 = sprite_getPallete(*(v0 + 76));
    __asm { SVC         6 }
    sprite_setPallete(v2 + 18);
    sprite_setAnimation(v0, 8u);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    v7 = *(v0 + 76);
    *(v0 + 96) = v7[13];
    *(v0 + 100) = v7[14];
    *(v0 + 104) = v7[15];
    *(v0 + 8) = 4;
    sub_80C0FE8();
}


// 0x80c0fe8
int sub_80C0FE8()
{
    int v0; // r5
    int v1; // r10
    int v2; // r0
    int v3; // r0
    unsigned int v4; // r0
    int v5; // r0
    int v6; // r0

    if ( sub_802D234() == 6 && *v0 & 4 && *(*(v1 + oToolkit_S2034880_Ptr) + 1) == 12 )
        *v0 &= 0xFBu;
    if ( *(v0 + 9) != 8 && *(*(v0 + 76) + 112) )
    {
        sprite_zeroColorShader();
        sprite_clearFinalPalette();
    }
    else
    {
        v2 = sprite_getColorShader(*(v0 + 76));
        sprite_setColorShader(v0, v2);
        v3 = sprite_getFinalPalette(*(v0 + 76));
        (sprite_setFinalPalette)(v3);
        v4 = sub_8002F3E(*(v0 + 76));
        (loc_8002F02)(v4);
        *(v0 + 23) = *(*(v0 + 76) + 23);
        v5 = object_getFlip(v0);
        sprite_setFlip(v0, v5);
        v6 = sprite_getMosaicScalingParameters(*(v0 + 76));
        (sprite_setAlpha)(v6);
    }
    return (*(&off_80C106C + *(v0 + 9)))();
}


// 0x80c1078
int sub_80C1078()
{
    int v0; // r5
    unsigned int v1; // r0
    int v2; // r1
    int v3; // r2
    int v4; // r3
    unsigned __int8 v5; // cf
    int result; // r0

    sub_80C10FE();
    v1 = sub_800139A();
    v5 = __CFSHR__(v1, 2);
    result = v1 >> 2;
    if ( v5 )
    {
        *(v0 + 9) = 4;
        *(v0 + 10) = 0;
        result = sub_80C1094(0, v2, v3, v4);
    }
    return result;
}


// 0x80c1094
int __fastcall sub_80C1094(int a1, int a2, int a3, int a4)
{
    int result; // r0

    result = sub_80C1182(a1, a2, a3, a4);
    if ( result )
    {
        sub_80C114E();
        sub_80C10FE();
        result = sub_80169BE();
    }
    return result;
}


// 0x80c10ac
int sub_80C10AC()
{
    int v0; // r5
    int result; // r0

    sub_80C114E();
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        sub_80E1A86(*(*(v0 + 88) + 116));
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c10c8
int __fastcall sub_80C10C8(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+4h] [bp-8h]

    object_spawnType1(46, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v6;
        *(v4 + 22) = *(v6 + 22);
        *v4 |= 4u;
    }
    return result;
}


// 0x80c10e8
int __fastcall sub_80C10E8(int result)
{
    if ( result )
        *(result + 8) = 8;
    return result;
}


// 0x80c10f2
int __fastcall sub_80C10F2(int result, char a2)
{
    if ( result )
        *(result + 16) = a2;
    return result;
}


// 0x80c10fe
_DWORD *sub_80C10FE()
{
    int v0; // r5
    int v1; // r2
    int v2; // r3
    _DWORD *v3; // r0
    __int16 v4; // r1
    _DWORD *result; // r0
    __int16 v6; // r1

    if ( *(*(v0 + 76) + 112) )
    {
        *(v0 + 52) = *(v0 + 96);
        *(v0 + 56) = *(v0 + 100);
        *(v0 + 60) = *(v0 + 104);
        result = (*(v0 + 102) - 1);
        v6 = *(v0 + 106) - 1;
        *(v0 + 58) = result;
        *(v0 + 62) = v6;
    }
    else
    {
        v1 = *(*(v0 + 76) + 56);
        v2 = *(*(v0 + 76) + 60);
        v3 = (v0 + 52);
        *v3 = *(*(v0 + 76) + 52);
        v3[1] = v1;
        v3[2] = v2;
        v4 = *(v0 + 62) - 1;
        --*(v0 + 58);
        *(v0 + 62) = v4;
        result = *(v0 + 76);
        *(v0 + 96) = result[13];
        *(v0 + 100) = result[14];
        *(v0 + 104) = result[15];
    }
    return result;
}


// 0x80c114e
signed int sub_80C114E()
{
    int v0; // r5
    signed int v1; // r4
    char v2; // zf
    int v3; // r3

    v1 = 0;
    if ( sub_802D234() == 6 || (battle_isPaused(), v2) )
    {
        v3 = *(v0 + 76);
        if ( *(v3 + 36) )
        {
            if ( !(*(*(v3 + 84) + 60) & 0x80110C00) )
            {
                battle_isTimeStop();
                if ( v2 )
                {
                    sub_801BC64();
                    v1 = 1;
                }
            }
        }
    }
    return v1;
}


// 0x80c1182
int __fastcall sub_80C1182(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // r7

    result = *(*(v4 + 76) + 36);
    if ( !*(*(v4 + 76) + 36) )
    {
        v6 = *(v4 + 88) + 116;
        sub_80E1A6A(result, a2, a3, a4);
        *(v4 + 32) = 32;
        *(v4 + 9) = 8;
        result = 0;
    }
    return result;
}


// 0x80c11ac
int sub_80C11AC()
{
    int v0; // r5

    return (*(&off_80C11C0 + *(v0 + 8)))();
}


// 0x80c11cc
void __noreturn sub_80C11CC()
{
    int v0; // r5
    int v1; // r0

    sprite_load(v0, 128, 4, 16);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    v1 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v1);
    sprite_setAnimation(v0, 7u);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    *(v0 + 8) = 4;
    sub_80C1204(v0);
}


// 0x80c1204
int __usercall sub_80C1204@<R0>(Battle *obj@<R5>)
{
    u32 *v1; // r4
    int v2; // r0
    int v3; // r0
    unsigned int v4; // r0
    int v5; // r0
    int v6; // r0

    v1 = obj->parent;
    v2 = sprite_getColorShader(obj->parent);
    sprite_setColorShader(obj, v2);
    v3 = sprite_getFinalPalette(obj->parent);
    (sprite_setFinalPalette)(v3);
    v4 = sub_8002F3E(obj->parent);
    (loc_8002F02)(v4);
    obj->directionFlip = *(obj->parent + 23);
    v5 = object_getFlip(obj);
    sprite_setFlip(obj, v5);
    v6 = sprite_getMosaicScalingParameters(obj->parent);
    (sprite_setAlpha)(v6);
    (*(&off_80C1254 + obj->currAction))();
    return sub_80169BE();
}


// 0x80c1268
int __fastcall sub_80C1268(int a1, int a2, int a3, int a4)
{
    _BYTE *v4; // r5
    int result; // r0
    int v6; // r1

    result = sub_80C1492(a1, a2, a3, a4);
    if ( result )
    {
        result = sub_80C1466();
        if ( result )
        {
            *v4 &= 0xFDu;
            result = 97;
            v6 = v4[97] - 1;
            v4[97] = v6;
            if ( !v6 )
            {
                *v4 |= 2u;
                sub_80C1514(1);
                v4[9] = 4;
                result = 0;
                v4[10] = 0;
            }
        }
    }
    return result;
}


// 0x80c12a6
int __fastcall sub_80C12A6(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0

    result = sub_80C1492(a1, a2, a3, a4);
    if ( result )
    {
        result = sub_80C1466();
        if ( result )
        {
            result = sub_80C14EC();
            if ( result )
            {
                *(v4 + 56) += *(v4 + 68);
                object_setPanelsFromCoordinates(v4);
                object_updateCollisionPanels(v4);
                result = 3 * (*(v4 + 100) ^ 1);
                if ( result == *(v4 + 19) )
                {
                    if ( *(v4 + 99) && 5 * (*(v4 + 22) ^ 1) + 1 != *(v4 + 18) )
                    {
                        *(v4 + 103) = 0;
                        *(v4 + 104) = *(v4 + 56);
                        *(v4 + 9) = 8;
                        result = 0;
                        *(v4 + 10) = 0;
                    }
                    else
                    {
                        sub_80C1538();
                        *(v4 + 9) = 12;
                        result = 0;
                        *(v4 + 10) = 0;
                    }
                }
            }
        }
    }
    return result;
}


// 0x80c1320
int __fastcall sub_80C1320(int a1, int a2, int a3, int a4)
{
    Battle *v4; // r5
    int result; // r0
    int v6; // r2
    int v7; // r1

    result = sub_80C1492(a1, a2, a3, a4);
    if ( result )
    {
        result = sub_80C1466();
        if ( result )
        {
            result = sub_80C14EC();
            if ( result )
            {
                v6 = v4->extraVars[1] + 1;
                v4->extraVars[1] = v6;
                if ( v6 == v4->extraVars[5] )
                {
                    --v4->extraVars[3];
                    v4->extraVars[4] ^= 1u;
                    v4->vy = -v4->vy;
                    v7 = v4->panelY;
                    v4->x = object_getCoordinatesForPanels(v4->panelX);
                    v4->extraVars[1] = 0;
                    v4->currAction = 4;
                    result = 0;
                    v4->currPhase = 0;
                }
                else
                {
                    v4->x += v4->vx;
                    sub_80C14B2();
                    result = object_setPanelsFromCoordinates(v4);
                }
            }
        }
    }
    return result;
}


// 0x80c138e
signed int __fastcall sub_80C138E(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    signed int result; // r0

    result = sub_80C1492(a1, a2, a3, a4);
    if ( result )
    {
        result = sub_80C1466();
        if ( result )
        {
            result = sub_80C14EC();
            if ( result )
            {
                if ( *(v4 + 97) )
                {
                    --*(v4 + 97);
                    *(v4 + 56) += *(v4 + 68);
                    object_setPanelsFromCoordinates(v4);
                    result = object_updateCollisionPanels(v4);
                }
                else
                {
                    if ( *(v4 + 96) == 3 )
                        *(*(v4 + 76) + 124) = 1;
                    sub_80C1514(*(v4 + 100));
                    result = 8;
                    *(v4 + 8) = 8;
                }
            }
        }
    }
    return result;
}


// 0x80c13e4
int sub_80C13E4()
{
    int v0; // r5
    int result; // r0

    sub_80C1466();
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        sub_80E1A86(*(*(v0 + 88) + 116));
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c1400
int __fastcall sub_80C1400(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // r2
    char v7; // [sp+0h] [bp-10h]
    unsigned __int8 v8; // [sp+4h] [bp-Ch]
    int v9; // [sp+8h] [bp-8h]

    v7 = a3;
    v8 = a4;
    object_spawnType1(47, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v9;
        *(v4 + 22) = *(v9 + 22);
        *(v4 + 96) = v7;
        *(v4 + 97) = v8;
        *(v4 + 103) = 0;
        *(v4 + 99) = *(v9 + 103);
        *(v4 + 100) = *(v9 + 116);
        *(v4 + 101) = *(v9 + 117);
        *(v4 + 102) = *(v9 + 118);
        v6 = *(v9 + 68);
        *(v4 + 64) = *(v9 + 64);
        *(v4 + 68) = v6;
        *(v4 + 52) = *(v9 + 52);
        *(v4 + 56) = *(v9 + 56);
        *(v4 + 60) = *(v9 + 60);
    }
    return result;
}


// 0x80c1460
int __fastcall sub_80C1460(int result)
{
    *(result + 8) = 8;
    return result;
}


// 0x80c1466
signed int sub_80C1466()
{
    int v0; // r5
    signed int v1; // r4
    char v2; // zf
    int v3; // r3

    v1 = 0;
    battle_isPaused();
    if ( v2 )
    {
        v3 = *(v0 + 76);
        if ( *(v3 + 36) )
        {
            if ( !(*(*(v3 + 84) + 60) & 0x80110C00) )
            {
                battle_isTimeStop();
                if ( v2 )
                {
                    sub_801BC64();
                    v1 = 1;
                }
            }
        }
    }
    return v1;
}


// 0x80c1492
int __fastcall sub_80C1492(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // r7

    result = *(*(v4 + 76) + 36);
    if ( !*(*(v4 + 76) + 36) )
    {
        v6 = *(v4 + 88) + 116;
        sub_80E1A6A(result, a2, a3, a4);
        *(v4 + 32) = 32;
        *(v4 + 9) = 16;
        result = 0;
    }
    return result;
}


// 0x80c14b2
int sub_80C14B2()
{
    int v0; // r5
    int v1; // r3
    int result; // r0

    v1 = *(v0 + 103) + *(v0 + 102);
    *(v0 + 103) = v1;
    result = 3072 * *&math_sinTable[2 * v1] * *&byte_80C14E4[4 * *(v0 + 100)];
    *(v0 + 56) = *(v0 + 104) + result;
    return result;
}


// 0x80c14ec
signed int sub_80C14EC()
{
    int v0; // r5
    signed int v1; // r4
    char v2; // zf
    int v3; // r3

    v1 = 0;
    battle_isPaused();
    if ( v2 )
    {
        v3 = *(v0 + 76);
        if ( *(v3 + 36) )
        {
            if ( !(*(*(v3 + 84) + 60) & 0x80110C00) )
            {
                battle_isTimeStop();
                if ( v2 )
                    v1 = 1;
            }
        }
    }
    return v1;
}


// 0x80c1514
void __fastcall sub_80C1514(int result)
{
    Battle *v1; // r5
    u32 v2; // t1

    if ( result )
    {
        v2 = v1->z;
        SpawnT4BattleObjectWithId0(v1, (v1->Alliance ^ v1->directionFlip) << 8, v1->x, v1->y, 0);
    }
}


// 0x80c1538
int sub_80C1538()
{
    int v0; // r5
    int result; // r0

    result = *&byte_80C1558[4 * *(v0 + 100)];
    *(v0 + 68);
    __asm { SVC         6 }
    *(v0 + 97) = result;
    return result;
}


// 0x80c1570
int sub_80C1570()
{
    int v0; // r5

    return (*(&off_80C1580 + *(v0 + 8)))();
}


// 0x80c1590
void sub_80C1590()
{
    int v0; // r5
    int v1; // r0

    sprite_decompress(4, 29);
    sprite_load(v0, 128, 4, 29);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    sprite_setPallete(3 * *(v0 + 100));
    *v0 &= 0xFDu;
    *(v0 + 8) = 4;
    sub_80C15EC();
}


// 0x80c15ec
void sub_80C15EC()
{
    int v0; // r5

    (*(&off_80C1600 + *(v0 + 9)))();
    object_updateSpriteTimestop();
}


// 0x80c1610
int sub_80C1610()
{
    int v0; // r5

    return (*(&off_80C1624 + *(v0 + 10)))();
}


// 0x80c1630
int __fastcall sub_80C1630(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0

    if ( *(v3 + 11) )
    {
        *v3 |= 2u;
        result = *(v3 + 32) - 1;
        *(v3 + 32) = result;
        if ( !result )
        {
            *(v3 + 16) = 5;
            PlaySoundEffect(323, 2, a3);
            result = 4;
            *(v3 + 10) = 4;
        }
    }
    else
    {
        PlaySoundEffect(148, a2, a3);
        *(v3 + 32) = 24;
        result = 4;
        *(v3 + 11) = 4;
    }
    return result;
}


// 0x80c166a
int sub_80C166A()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 11) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( !result )
        {
            result = 8;
            *(v0 + 10) = 8;
        }
    }
    else
    {
        result = sprite_getFrameParameters();
        if ( result & 0x80 )
        {
            *(v0 + 16) = 4;
            *(v0 + 32) = 30;
            result = 4;
            *(v0 + 11) = 4;
        }
    }
    return result;
}


// 0x80c1698
int sub_80C1698()
{
    int v0; // r5
    int v1; // r0
    char v2; // r1
    int result; // r0

    v1 = sub_80C18B0();
    if ( v1 )
    {
        *(v0 + 101) = v1;
        *(v0 + 102) = v2;
        *(v0 + 9) = 4;
    }
    else
    {
        *(v0 + 9) = 8;
    }
    result = 0;
    *(v0 + 10) = 0;
    return result;
}


// 0x80c16be
int sub_80C16BE()
{
    int v0; // r5

    return (*(&off_80C16D0 + *(v0 + 10)))();
}


// 0x80c16e0
int sub_80C16E0()
{
    int v0; // r5
    char v1; // r1
    int result; // r0

    if ( *(v0 + 11) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( !result )
        {
            *v0 |= 2u;
            result = 4;
            *(v0 + 10) = 4;
        }
    }
    else
    {
        *(v0 + 11) = 1;
        sub_80C1820(*(v0 + 18), *(v0 + 19), 1);
        v1 = *(v0 + 102);
        *(v0 + 18) = *(v0 + 101);
        *(v0 + 19) = v1;
        object_setCoordinatesFromPanels(v0);
        sub_80C1820(*(v0 + 18), *(v0 + 19), 0);
        *(v0 + 32) = 2;
        result = *v0 & 0xFD;
        *v0 = result;
    }
    return result;
}


// 0x80c1734
signed int sub_80C1734()
{
    int v0; // r5
    signed int result; // r0

    if ( !*(v0 + 11) )
        *(v0 + 11) = 1;
    *(v0 + 16) = 1;
    result = 8;
    *(v0 + 10) = 8;
    return result;
}


// 0x80c174a
int sub_80C174A()
{
    int v0; // r5
    int result; // r0
    int v2; // r1
    int v3; // r2

    if ( !*(v0 + 11) )
    {
        result = sprite_getFrameParameters();
        if ( !(result & 0x80) )
            return result;
        *(v0 + 11) = 1;
        *(v0 + 32) = 10;
    }
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        *(v0 + 16) = 2;
        sub_80C185C();
        sub_80C188C();
        PlaySoundEffect(266, v2, v3);
        result = 12;
        *(v0 + 10) = 12;
    }
    return result;
}


// 0x80c1786
int sub_80C1786()
{
    int v0; // r5
    int result; // r0

    if ( !*(v0 + 11) )
    {
        result = sprite_getFrameParameters();
        if ( !(result & 0x80) )
            return result;
        *(v0 + 11) = 1;
        *(v0 + 32) = 16;
    }
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        *(v0 + 9) = 8;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80c17b2
int sub_80C17B2()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 76) = 0;
        *(v0 + 32) = 16;
        sub_80C1820(*(v0 + 18), *(v0 + 19), 1);
        *(v0 + 10) = 4;
    }
    *v0 &= 0xFDu;
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c17e6
int sub_80C17E6()
{
    int v0; // r5

    **(v0 + 96) = 0;
    return object_freeMemory();
}


// 0x80c17f4
int __fastcall sub_80C17F4(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _DWORD *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(50, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 76) = v11;
        *(v4 + 44) = v5;
        *(v4 + 100) = *(v4 + 4);
        *(v4 + 96) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80c1820
void __fastcall sub_80C1820(char a1, int a2, int a3)
{
    Battle *v3; // r5
    int v4; // r4
    int v5; // ST04_4
    int v6; // r0
    int v7; // r4
    int v8; // r1

    v4 = a3;
    v5 = (v3->Alliance ^ v3->directionFlip) << 8;
    v6 = object_getCoordinatesForPanels(a1);
    v7 = *&byte_80C1854[4 * v4] | v5;
    SpawnT4BattleObjectWithId0(v3, v5, v6, v8, 0);
}


// 0x80c185c
void sub_80C185C()
{
    Battle *v0; // r5
    int v1; // ST00_4
    char v2; // r0
    int v3; // r1
    int v4; // r0
    int v5; // r1

    v1 = (v0->Alliance ^ v0->directionFlip) << 8;
    v2 = object_getFrontDirection(v0);
    v3 = v0->panelY;
    v4 = object_getCoordinatesForPanels(v2 + v0->panelX);
    SpawnT4BattleObjectWithId0(v0, v1, v4, v5, 0);
}


// 0x80c188c
_BYTE *sub_80C188C()
{
    int v0; // r5
    int v1; // r6
    char v2; // r0

    v1 = *(v0 + 44);
    v2 = object_getFrontDirection(v0);
    return sub_80C53A6(v2 + *(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
}


// 0x80c18b0
int sub_80C18B0()
{
    int v0; // r5
    int v1; // r10
    int v2; // r7
    int v3; // r0
    signed int v4; // r1
    unsigned int v5; // r2
    Battle *v6; // r3
    int result; // r0
    unsigned int v8; // r4
    Battle *v9; // r5
    int v10; // r1
    int v11; // r0
    int v12; // r1
    Battle *v13; // r4
    Battle *v14; // r5
    int v15; // r2
    unsigned int v16; // r3
    signed int v17; // r3
    Battle *v18; // r5
    int v19; // r1
    int v20; // r1
    int v21; // r1
    int v22; // r1
    int v23; // r1
    int v24; // r1
    int v25; // r1
    Battle *v26; // [sp-Ch] [bp-44h]
    int v27; // [sp-8h] [bp-40h]
    int v28; // [sp-8h] [bp-40h]
    int v29; // [sp-8h] [bp-40h]
    int v30; // [sp-4h] [bp-3Ch]
    int v31; // [sp-4h] [bp-3Ch]
    Battle *v32; // [sp+0h] [bp-38h]
    int v33; // [sp+10h] [bp-28h]
    unsigned __int8 v34; // [sp+20h] [bp-18h]

    v2 = *(v1 + oToolkit_S2034880_Ptr);
    v3 = *(&off_80C1A04 + *(v0 + 22));
    v4 = 0;
    v5 = 0;
    do
    {
        v6 = *(v2 + v3);
        if ( v6 )
        {
            *(&v32 + v5) = v6;
            v5 += 4;
        }
        v3 += 4;
        ++v4;
    }
    while ( v4 < 4 );
    result = v5 >> 2;
    if ( v5 >> 2 )
    {
        v8 = 0;
        do
        {
            v27 = result;
            v30 = v0;
            v9 = *(&v32 + result - 1);
            if ( sub_800F26C(v9->nameID) != 8 || v10 != 20 )
            {
                v11 = object_getFrontDirection(v9) + v9->panelX;
                v12 = v9->panelY;
            }
            else
            {
                v11 = 2 * object_getFrontDirection(v9) + v9->panelX;
                v12 = v9->panelY;
            }
            if ( !(object_getPanelParameters(v11, v12) & 0xF800000) )
            {
                *(&v33 + v8) = v9;
                v8 += 4;
            }
            v0 = v30;
            result = v27 - 1;
        }
        while ( v27 != 1 );
        result = v8 >> 2;
        if ( v8 >> 2 )
        {
            v13 = &v34;
            do
            {
                v28 = result;
                v31 = v0;
                v26 = *(&v33 + result - 1);
                v14 = *(v0 + 76);
                v15 = (v26->panelX - v14->panelX) * object_getFrontDirection(v14);
                if ( v15 >= 2 )
                {
                    if ( v16 )
                    {
                        if ( v34 >= v15 )
                        {
                            v34 = v15;
                            *(&v32 + v16) = v26;
                            v16 += 4;
                        }
                    }
                    else
                    {
                        v34 = v15;
                        v32 = v26;
                        v16 = 4;
                    }
                }
                v0 = v31;
                result = v28 - 1;
            }
            while ( v28 != 1 );
            v17 = v16 >> 2;
            result = v17;
            if ( v17 )
            {
                if ( v17 > 1 )
                {
                    v22 = 0;
                    do
                    {
                        v29 = result;
                        if ( v22 )
                        {
                            if ( (*(&v32 + v22))->panelY <= v13->panelY )
                                v13 = *(&v32 + v22);
                        }
                        else
                        {
                            v13 = v32;
                        }
                        v22 += 4;
                        --result;
                    }
                    while ( v29 != 1 );
                    if ( sub_800F26C(v13->nameID) != 8 || v23 != 20 )
                    {
                        result = object_getFrontDirection(v13) + v13->panelX;
                        v25 = v13->panelY;
                    }
                    else
                    {
                        result = 2 * object_getFrontDirection(v13) + v13->panelX;
                        v24 = v13->panelY;
                    }
                }
                else
                {
                    v18 = v32;
                    if ( sub_800F26C(v32->nameID) != 8 || v19 != 20 )
                    {
                        result = object_getFrontDirection(v18) + v18->panelX;
                        v21 = v18->panelY;
                    }
                    else
                    {
                        result = 2 * object_getFrontDirection(v18) + v18->panelX;
                        v20 = v18->panelY;
                    }
                }
            }
        }
    }
    return result;
}


// 0x80c1a10
void sub_80C1A10()
{
    int v0; // r5

    (*(&off_80C1A28 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80c1a34
signed int __noreturn sub_80C1A34()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    sub_80C205C();
    sprite_load(v0, 128, 0, 11);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    *(v0 + 40) = 438;
    *(v0 + 6) = 0;
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c1a7c
int sub_80C1A7C()
{
    int v0; // r5

    return (*(&off_80C1A90 + *(v0 + 9)))();
}


// 0x80c1ab8
int __fastcall sub_80C1AB8(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 11) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *(v3 + 9) = 4;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 11) = 4;
        *(v3 + 16) = 3;
        *v3 |= 2u;
        PlaySoundEffect(148, 2, a3);
        result = 3;
        *(v3 + 32) = 3;
    }
    return result;
}


// 0x80c1aee
int sub_80C1AEE()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 0;
        sub_80C1ECE();
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        if ( *(v0 + 5) )
            *(v0 + 9) = 8;
        else
            *(v0 + 9) = 36;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80c1b2e
_BYTE *sub_80C1B2E()
{
    int v0; // r5
    int v1; // r0
    char v2; // r1
    char v3; // r2
    int v4; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r1
    int v8; // r2
    int v9; // r0
    _BYTE *result; // r0
    int v11; // r0
    unsigned __int8 v12; // vf

    if ( *(v0 + 11) )
    {
        if ( *(v0 + 6) )
        {
            v11 = *(v0 + 32);
            v12 = __OFSUB__(v11, 1);
            result = (v11 - 1);
            *(v0 + 32) = result;
            if ( !(((result < 0) ^ v12) | (result == 0)) )
                return result;
        }
        else
        {
            result = (*(v0 + 32) - 1);
            *(v0 + 32) = result;
            if ( result == &dword_10 + 2 )
            {
                sub_80C2110();
                return sub_80C2000(0);
            }
            if ( result > 0 )
                return result;
            *(v0 + 16) = 0;
            sub_80B8E58(*(v0 + 100));
        }
        *(v0 + 6) = 0;
        *(v0 + 9) = 12;
        result = 0;
        *(v0 + 10) = 0;
        return result;
    }
    *(v0 + 11) = 4;
    *(v0 + 32) = 30;
    v1 = sub_80C1EF4(0);
    if ( v1 )
    {
        *(v0 + 23) = v3;
        *(v0 + 18) = v1;
        *(v0 + 19) = v2;
        object_setCoordinatesFromPanels(v0);
        v4 = object_getFlip(v0);
        sprite_setFlip(v0, v4);
        v5 = *(v0 + 18);
        v6 = *(v0 + 19);
        *(v0 + 20) = v5;
        *(v0 + 21) = v6;
        object_reservePanel(v5, v6);
        *(v0 + 16) = 5;
        v9 = PlaySoundEffect(176, v7, v8);
        result = sub_80B8E30(v9);
    }
    else
    {
        result = byte_0 + 1;
        *(v0 + 6) = 1;
    }
    return result;
}


// 0x80c1bc8
int sub_80C1BC8()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 16;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80c1bec
_BYTE *sub_80C1BEC()
{
    int v0; // r5
    int v1; // r0
    char v2; // r1
    char v3; // r2
    int v4; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r1
    int v8; // r2
    _BYTE *result; // r0
    int v10; // r0
    unsigned __int8 v11; // vf
    int v12; // r0
    int v13; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 4;
        *(v0 + 32) = 30;
        object_removePanelReserve(*(v0 + 20), *(v0 + 21));
        v1 = sub_80C1EF4(1);
        if ( v1 )
        {
            *(v0 + 23) = v3;
            *(v0 + 18) = v1;
            *(v0 + 19) = v2;
            object_setCoordinatesFromPanels(v0);
            v4 = object_getFlip(v0);
            sprite_setFlip(v0, v4);
            v5 = *(v0 + 18);
            v6 = *(v0 + 19);
            *(v0 + 20) = v5;
            *(v0 + 21) = v6;
            object_reservePanel(v5, v6);
            *(v0 + 16) = 10;
            sub_80B8E30(10);
            sub_80C2000(1);
            PlaySoundEffect(240, v7, v8);
            result = (&dword_8 + 2);
            *(v0 + 34) = 10;
        }
        else
        {
            *(v0 + 6) = 1;
            result = sub_80C205C();
        }
        return result;
    }
    if ( *(v0 + 6) )
    {
        v10 = *(v0 + 32);
        v11 = __OFSUB__(v10, 1);
        result = (v10 - 1);
        *(v0 + 32) = result;
        if ( !(((result < 0) ^ v11) | (result == 0)) )
            return result;
LABEL_11:
        *(v0 + 6) = 0;
        *(v0 + 9) = 20;
        result = 0;
        *(v0 + 10) = 0;
        return result;
    }
    v12 = *(v0 + 32);
    v11 = __OFSUB__(v12--, 1);
    *(v0 + 32) = v12;
    if ( ((v12 < 0) ^ v11) | (v12 == 0) )
    {
        *(v0 + 16) = 0;
        sub_80B8E58(*(v0 + 100));
        goto LABEL_11;
    }
    v13 = *(v0 + 34);
    v11 = __OFSUB__(v13, 1);
    result = (v13 - 1);
    *(v0 + 34) = result;
    if ( ((result < 0) ^ v11) | (result == 0) )
    {
        *(v0 + 34) = 10;
        result = sub_80C2000(1);
    }
    return result;
}


// 0x80c1ca0
int sub_80C1CA0()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 24;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80c1cc4
int sub_80C1CC4()
{
    int v0; // r5
    int v1; // r0
    char v2; // r1
    char v3; // r2
    int v4; // r0
    int v5; // r0
    int v6; // r1
    _BYTE *v7; // r0
    int v8; // r0
    int v9; // r1
    int v10; // r2
    int result; // r0
    int v12; // r0
    unsigned __int8 v13; // vf
    int v14; // r0
    int v15; // r0
    int v16; // r1
    int v17; // r2

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 4;
        *(v0 + 32) = 30;
        object_removePanelReserve(*(v0 + 20), *(v0 + 21));
        v1 = sub_80C1EF4(2);
        if ( v1 )
        {
            *(v0 + 23) = v3;
            *(v0 + 18) = v1;
            *(v0 + 19) = v2;
            object_setCoordinatesFromPanels(v0);
            v4 = object_getFlip(v0);
            sprite_setFlip(v0, v4);
            v5 = *(v0 + 18);
            v6 = *(v0 + 19);
            *(v0 + 20) = v5;
            *(v0 + 21) = v6;
            object_reservePanel(v5, v6);
            *(v0 + 16) = 14;
            v7 = sub_80C20B4();
            v8 = sub_80B8E30(v7);
            sub_80B8E30(v8);
            PlaySoundEffect(185, v9, v10);
            result = 5;
            *(v0 + 34) = 5;
        }
        else
        {
            *(v0 + 6) = 1;
            result = sub_80C205C();
        }
        return result;
    }
    if ( *(v0 + 6) )
    {
        v12 = *(v0 + 32);
        v13 = __OFSUB__(v12, 1);
        result = v12 - 1;
        *(v0 + 32) = result;
        if ( !(((result < 0) ^ v13) | (result == 0)) )
            return result;
LABEL_11:
        *(v0 + 6) = 0;
        *(v0 + 9) = 28;
        result = 0;
        *(v0 + 10) = 0;
        return result;
    }
    v14 = *(v0 + 32);
    v13 = __OFSUB__(v14--, 1);
    *(v0 + 32) = v14;
    if ( ((v14 < 0) ^ v13) | (v14 == 0) )
    {
        *(v0 + 16) = 0;
        sub_80B8E58(*(v0 + 100));
        sub_80B8E58(*(v0 + 104));
        goto LABEL_11;
    }
    v15 = *(v0 + 34);
    v13 = __OFSUB__(v15, 1);
    result = v15 - 1;
    *(v0 + 34) = result;
    if ( ((result < 0) ^ v13) | (result == 0) )
    {
        *(v0 + 34) = 5;
        *(v0 + 16) = 14;
        *(v0 + 17) = -1;
        sub_80C20B4();
        PlaySoundEffect(185, v16, v17);
        sub_80B8E7C(*(v0 + 100));
        result = sub_80B8E7C(*(v0 + 104));
    }
    return result;
}


// 0x80c1da0
int sub_80C1DA0()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 32;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80c1dc4
void sub_80C1DC4()
{
    int v0; // r5
    int v1; // r0
    char v2; // r1
    char v3; // r2
    int v4; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r1
    int v8; // r2
    int v9; // r0
    unsigned __int8 v10; // vf
    int v11; // r0
    int v12; // r1
    int v13; // r2

    if ( *(v0 + 11) )
    {
        if ( *(v0 + 6) )
        {
            v9 = *(v0 + 32);
            v10 = __OFSUB__(v9--, 1);
            *(v0 + 32) = v9;
            if ( !(((v9 < 0) ^ v10) | (v9 == 0)) )
                return;
        }
        else
        {
            v11 = *(v0 + 32) - 1;
            *(v0 + 32) = v11;
            if ( v11 == 15 )
            {
                *(v0 + 16) = 12;
                *(v0 + 17) = -1;
                sub_80C2000(4);
                PlaySoundEffect(344, v12, v13);
                sub_80C2082(1);
                return;
            }
            if ( v11 > 0 )
                return;
        }
        *(v0 + 6) = 0;
        *(v0 + 9) = 36;
        *(v0 + 10) = 0;
        return;
    }
    *(v0 + 11) = 4;
    *(v0 + 32) = 30;
    object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    v1 = sub_80C1EF4(3);
    if ( v1 )
    {
        *(v0 + 23) = v3;
        *(v0 + 18) = v1;
        *(v0 + 19) = v2;
        object_setCoordinatesFromPanels(v0);
        v4 = object_getFlip(v0);
        sprite_setFlip(v0, v4);
        v5 = *(v0 + 18);
        v6 = *(v0 + 19);
        *(v0 + 20) = v5;
        *(v0 + 21) = v6;
        object_reservePanel(v5, v6);
        *(v0 + 16) = 12;
        sub_80C2000(3);
        sub_80C2082(0);
        PlaySoundEffect(199, v7, v8);
        camera_initShakeEffect_80302a8(2, *(v0 + 32) + 30);
    }
    else
    {
        *(v0 + 6) = 1;
        sub_80C205C();
    }
}


// 0x80c1e7a
int sub_80C1E7A()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        object_removePanelReserve(*(v0 + 20), *(v0 + 21));
        *(v0 + 16) = 4;
        result = 3;
        *(v0 + 32) = 3;
    }
    return result;
}


// 0x80c1eac
int __fastcall sub_80C1EAC(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+8h] [bp-Ch]
    int v9; // [sp+Ch] [bp-8h]

    v8 = a3;
    object_spawnType1(51, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 14) = v8;
        *(v4 + 96) = v5;
        *(v4 + 76) = v9;
        *(v4 + 22) = *(v9 + 22);
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80c1ece
int __noreturn sub_80C1ECE()
{
    int v0; // r5
    int result; // r0

    result = object_getPanelsExceptCurrentFilterred(4 * *(v0 + 22), &off_80C1EEC, *(&off_80C1EEC + *(v0 + 22)), 0);
    *(v0 + 5) = result;
    return result;
}


// 0x80c1ef4
int __fastcall sub_80C1EF4(int a1)
{
    int v1; // r5
    int v2; // r4
    signed int v3; // r6
    unsigned __int8 *v4; // r7
    unsigned int v5; // r0
    bool v6; // zf
    int result; // r0
    int v8; // r3
    int v9; // r2
    int v10; // r3
    int v11; // r1
    int v12; // r1
    int v13; // r4
    int v14; // [sp-8h] [bp-24h]
    int v15; // [sp-4h] [bp-20h]
    int v16; // [sp+0h] [bp-1Ch]
    int v17; // [sp+4h] [bp-18h]
    signed int v18; // [sp+8h] [bp-14h]

    v16 = *(&off_80C1FE0 + a1);
    v17 = object_getEnemyDirection();
    v18 = 0;
    v2 = *(v1 + 4);
    while ( 2 )
    {
        v3 = 0;
        do
        {
            v4 = (v16 + 3 * v3);
            if ( *v4 == 255 )
                break;
            v5 = *(v1 + 108 + v2);
            v14 = (v5 & 7) + v4[1] * v17;
            v15 = (v5 >> 4) + v4[2];
            v6 = object_checkPanelParameters(v14, v15, 0x10000, 260571264) == 0;
            result = v14;
            if ( !v6 )
                goto LABEL_14;
            v8 = *(v1 + 76);
            v9 = *(v8 + 18);
            v10 = *(v8 + 19);
            if ( v14 == v9 && v15 == v10 )
                v18 = 1;
            ++v3;
        }
        while ( v3 < 6 );
        if ( ++v2 < *(v1 + 5) )
            continue;
        break;
    }
    if ( !v18 )
        return 0;
    v11 = *(v1 + 76);
    result = *(v11 + 18);
    v12 = *(v11 + 19);
LABEL_14:
    v13 = v2 + 1;
    if ( v13 >= *(v1 + 5) )
        LOBYTE(v13) = 0;
    *(v1 + 4) = v13;
    return result;
}


// 0x80c2000
_BYTE *__fastcall sub_80C2000(int a1)
{
    int v1; // r5
    int v2; // r0
    int v3; // r4
    int v4; // r6
    char v5; // r0

    v2 = 4 * a1;
    v3 = *&byte_80C202C[v2];
    v4 = *&byte_80C2048[v2] + *(v1 + 96);
    v5 = object_getFrontDirection(v1);
    return sub_80C53A6(v5 + *(v1 + 18), *(v1 + 19), *(v1 + 14), 0);
}


// 0x80c205c
int sub_80C205C()
{
    Battle *v0; // r5
    u32 *v1; // r1
    u8 v2; // r0
    int result; // r0

    v1 = v0->parent;
    v2 = *(v1 + 18);
    LOBYTE(v1) = *(v1 + 19);
    v0->panelX = v2;
    v0->panelY = v1;
    object_setCoordinatesFromPanels(v0);
    v0->z = 0;
    result = 655360 * object_getFrontDirection(v0);
    v0->x += result;
    return result;
}


// 0x80c2082
void __fastcall sub_80C2082(int a1)
{
    Battle *v1; // r5
    int v2; // r4
    char v3; // r0
    int v4; // r1
    int v5; // r0
    int v6; // r1

    v2 = *(&dword_80C20B0 + a1);
    object_getFlip(v1);
    v3 = object_getFrontDirection(v1);
    v4 = v1->panelY;
    v5 = object_getCoordinatesForPanels(v3 + v1->panelX);
    SpawnT4BattleObjectWithId0(v1, v5, v5, v6, 0x100000);
}


// 0x80c20b4
_BYTE *sub_80C20B4()
{
    int v0; // r5
    signed int v1; // r4
    int v2; // r6
    _BYTE *result; // r0
    int v4; // r6
    char v5; // [sp-8h] [bp-18h]
    int v6; // [sp-4h] [bp-14h]

    v1 = 1;
    v2 = *&byte_80C2108[4 * *(v0 + 22)];
    while ( 1 )
    {
        result = (object_getFrontDirection(v0) * v1 + *(v0 + 18));
        if ( result < 1 || result > 6 )
            break;
        v5 = result;
        v6 = *(v0 + 19);
        if ( v2 & object_getPanelParameters(result, v6) )
        {
            v4 = *(v0 + 96) + 5;
            return sub_80C53A6(v5, v6, *(v0 + 14), 0x100000);
        }
        ++v1;
    }
    return result;
}


// 0x80c2110
void sub_80C2110()
{
    Battle *v0; // r5
    char v1; // r0
    int v2; // r1
    int v3; // r0
    int v4; // r1

    object_getFlip(v0);
    v1 = object_getFrontDirection(v0);
    v2 = v0->panelY;
    v3 = object_getCoordinatesForPanels(v1 + v0->panelX);
    SpawnT4BattleObjectWithId0(v0, v3, v3, v4, 0x100000);
}


// 0x80c2138
void sub_80C2138()
{
    int v0; // r5

    (*(&off_80C2150 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80c215c
signed int __noreturn sub_80C215C()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    sub_80C2678();
    sprite_load(v0, 128, 0, 12);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    sub_8010DF6(2, 36);
    *(v0 + 40) = 439;
    *(v0 + 6) = 0;
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c21ac
int sub_80C21AC()
{
    int v0; // r5

    return (*(&off_80C21C0 + *(v0 + 9)))();
}


// 0x80c21e0
int __fastcall sub_80C21E0(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 11) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *(v3 + 9) = 4;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 11) = 4;
        *(v3 + 16) = 3;
        *v3 |= 2u;
        PlaySoundEffect(148, 2, a3);
        result = 3;
        *(v3 + 32) = 3;
    }
    return result;
}


// 0x80c2216
int sub_80C2216()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 0;
        sub_80C24F4();
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        if ( *(v0 + 5) )
            *(v0 + 9) = 8;
        else
            *(v0 + 9) = 28;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80c2256
_BYTE *sub_80C2256()
{
    int v0; // r5
    int v1; // r0
    char v2; // r1
    char v3; // r2
    int v4; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r1
    int v8; // r2
    _BYTE *result; // r0
    int v10; // r0
    unsigned __int8 v11; // vf
    int v12; // r0
    int v13; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 4;
        *(v0 + 32) = 30;
        v1 = sub_80C2518(0);
        if ( v1 )
        {
            *(v0 + 23) = v3;
            *(v0 + 18) = v1;
            *(v0 + 19) = v2;
            object_setCoordinatesFromPanels(v0);
            v4 = object_getFlip(v0);
            sprite_setFlip(v0, v4);
            v5 = *(v0 + 18);
            v6 = *(v0 + 19);
            *(v0 + 20) = v5;
            *(v0 + 21) = v6;
            object_reservePanel(v5, v6);
            *(v0 + 16) = 10;
            sub_80B8E30(10);
            sub_80C26C8();
            sub_80C2600(0);
            PlaySoundEffect(184, v7, v8);
            result = dword_4;
            *(v0 + 34) = 4;
        }
        else
        {
            result = byte_0 + 1;
            *(v0 + 6) = 1;
        }
        return result;
    }
    if ( *(v0 + 6) )
    {
        v10 = *(v0 + 32);
        v11 = __OFSUB__(v10, 1);
        result = (v10 - 1);
        *(v0 + 32) = result;
        if ( !(((result < 0) ^ v11) | (result == 0)) )
            return result;
LABEL_11:
        *(v0 + 6) = 0;
        *(v0 + 9) = 12;
        result = 0;
        *(v0 + 10) = 0;
        return result;
    }
    v12 = *(v0 + 32);
    v11 = __OFSUB__(v12--, 1);
    *(v0 + 32) = v12;
    if ( ((v12 < 0) ^ v11) | (v12 == 0) )
    {
        *(v0 + 16) = 0;
        sub_80B8E58(*(v0 + 100));
        goto LABEL_11;
    }
    v13 = *(v0 + 34);
    v11 = __OFSUB__(v13, 1);
    result = (v13 - 1);
    *(v0 + 34) = result;
    if ( ((result < 0) ^ v11) | (result == 0) )
    {
        *(v0 + 34) = 4;
        result = sub_80C2600(0);
    }
    return result;
}


// 0x80c2300
int sub_80C2300()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 16;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80c2324
_BYTE *sub_80C2324()
{
    int v0; // r5
    int v1; // r0
    char v2; // r1
    char v3; // r2
    int v4; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r1
    int v8; // r2
    _BYTE *result; // r0
    int v10; // r0
    unsigned __int8 v11; // vf

    if ( *(v0 + 11) )
    {
        if ( *(v0 + 6) )
        {
            v10 = *(v0 + 32);
            v11 = __OFSUB__(v10, 1);
            result = (v10 - 1);
            *(v0 + 32) = result;
            if ( !(((result < 0) ^ v11) | (result == 0)) )
                return result;
        }
        else
        {
            result = (*(v0 + 32) - 1);
            *(v0 + 32) = result;
            if ( result == &dword_10 + 2 )
            {
                sub_80C26A0();
                return sub_80C2600(1);
            }
            if ( result > 0 )
                return result;
            *(v0 + 16) = 0;
            sub_80B8E58(*(v0 + 100));
        }
        *(v0 + 6) = 0;
        *(v0 + 9) = 20;
        result = 0;
        *(v0 + 10) = 0;
        return result;
    }
    *(v0 + 11) = 4;
    *(v0 + 32) = 30;
    object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    v1 = sub_80C2518(1);
    if ( v1 )
    {
        *(v0 + 23) = v3;
        *(v0 + 18) = v1;
        *(v0 + 19) = v2;
        object_setCoordinatesFromPanels(v0);
        v4 = object_getFlip(v0);
        sprite_setFlip(v0, v4);
        v5 = *(v0 + 18);
        v6 = *(v0 + 19);
        *(v0 + 20) = v5;
        *(v0 + 21) = v6;
        object_reservePanel(v5, v6);
        PlaySoundEffect(176, v7, v8);
        *(v0 + 16) = 5;
        result = sub_80B8E30(5);
    }
    else
    {
        *(v0 + 6) = 1;
        result = sub_80C2678();
    }
    return result;
}


// 0x80c23cc
int sub_80C23CC()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 24;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80c23f0
_BYTE *sub_80C23F0()
{
    int v0; // r5
    int v1; // r0
    char v2; // r1
    char v3; // r2
    int v4; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r1
    int v8; // r2
    _BYTE *result; // r0
    int v10; // r0
    unsigned __int8 v11; // vf

    if ( *(v0 + 11) )
    {
        if ( *(v0 + 6) )
        {
            v10 = *(v0 + 32);
            v11 = __OFSUB__(v10, 1);
            result = (v10 - 1);
            *(v0 + 32) = result;
            if ( !(((result < 0) ^ v11) | (result == 0)) )
                return result;
        }
        else
        {
            result = (*(v0 + 32) - 1);
            *(v0 + 32) = result;
            if ( result == &dword_10 + 2 )
            {
                sub_80C26A0();
                return sub_80C2600(2);
            }
            if ( result > 0 )
                return result;
            *(v0 + 16) = 0;
            sub_80B8E58(*(v0 + 100));
        }
        *(v0 + 6) = 0;
        *(v0 + 9) = 28;
        result = 0;
        *(v0 + 10) = 0;
        return result;
    }
    *(v0 + 11) = 4;
    *(v0 + 32) = 30;
    object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    v1 = sub_80C2518(2);
    if ( v1 )
    {
        *(v0 + 23) = v3;
        *(v0 + 18) = v1;
        *(v0 + 19) = v2;
        object_setCoordinatesFromPanels(v0);
        v4 = object_getFlip(v0);
        sprite_setFlip(v0, v4);
        v5 = *(v0 + 18);
        v6 = *(v0 + 19);
        *(v0 + 20) = v5;
        *(v0 + 21) = v6;
        object_reservePanel(v5, v6);
        PlaySoundEffect(176, v7, v8);
        *(v0 + 16) = 5;
        result = sub_80B8E30(5);
    }
    else
    {
        *(v0 + 6) = 1;
        result = sub_80C2678();
    }
    return result;
}


// 0x80c2498
int sub_80C2498()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            sub_8011044(2, 36);
            **(v0 + 84) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        object_removePanelReserve(*(v0 + 20), *(v0 + 21));
        *(v0 + 16) = 4;
        result = 3;
        *(v0 + 32) = 3;
    }
    return result;
}


// 0x80c24d2
int __fastcall sub_80C24D2(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+8h] [bp-Ch]
    int v9; // [sp+Ch] [bp-8h]

    v8 = a3;
    object_spawnType1(52, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 14) = v8;
        *(v4 + 96) = v5;
        *(v4 + 76) = v9;
        *(v4 + 22) = *(v9 + 22);
        *(v4 + 84) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80c24f4
int __noreturn sub_80C24F4()
{
    int v0; // r5
    int result; // r0

    result = object_getPanelsExceptCurrentFilterred(4 * *(v0 + 22), &off_80C2510, *(&off_80C2510 + *(v0 + 22)), 0);
    *(v0 + 5) = result;
    return result;
}


// 0x80c2518
int __fastcall sub_80C2518(int a1)
{
    int v1; // r5
    int v2; // r4
    signed int v3; // r6
    unsigned __int8 *v4; // r7
    unsigned int v5; // r0
    bool v6; // zf
    int result; // r0
    int v8; // r3
    int v9; // r2
    int v10; // r3
    int v11; // r1
    int v12; // r1
    int v13; // r4
    int v14; // [sp-8h] [bp-24h]
    int v15; // [sp-4h] [bp-20h]
    int v16; // [sp+0h] [bp-1Ch]
    int v17; // [sp+4h] [bp-18h]
    signed int v18; // [sp+8h] [bp-14h]

    v16 = *(&off_80C25E4 + a1);
    v17 = object_getEnemyDirection();
    v18 = 0;
    v2 = *(v1 + 4);
    while ( 2 )
    {
        v3 = 0;
        do
        {
            v4 = (v16 + 3 * v3);
            if ( *v4 == 255 )
                break;
            v5 = *(v1 + 108 + v2);
            v14 = (v5 & 7) + v4[1] * v17;
            v15 = (v5 >> 4) + v4[2];
            v6 = object_checkPanelParameters(v14, v15, 0x10000, 260571264) == 0;
            result = v14;
            if ( !v6 )
                goto LABEL_14;
            v8 = *(v1 + 76);
            v9 = *(v8 + 18);
            v10 = *(v8 + 19);
            if ( v14 == v9 && v15 == v10 )
                v18 = 1;
            ++v3;
        }
        while ( v3 < 6 );
        if ( ++v2 < *(v1 + 5) )
            continue;
        break;
    }
    if ( !v18 )
        return 0;
    v11 = *(v1 + 76);
    result = *(v11 + 18);
    v12 = *(v11 + 19);
LABEL_14:
    v13 = v2 + 1;
    if ( v13 >= *(v1 + 5) )
        LOBYTE(v13) = 0;
    *(v1 + 4) = v13;
    return result;
}


// 0x80c2600
_BYTE *__fastcall sub_80C2600(int a1)
{
    int v1; // r5
    int v2; // r7
    char v3; // r0
    int v4; // r4
    int v5; // r6

    v2 = a1;
    v3 = object_getFrontDirection(v1);
    v4 = *&byte_80C2640[4 * v2];
    v5 = *&byte_80C2654[4 * v2] + *(v1 + 96);
    return sub_80C53A6(v3 * *(&dword_80C2664 + v2) + *(v1 + 18), *(v1 + 19), *(v1 + 14) | *&byte_80C266C[4 * v2], 0);
}


// 0x80c2678
int sub_80C2678()
{
    Battle *v0; // r5
    u32 *v1; // r1
    u8 v2; // r0
    int result; // r0

    v1 = v0->parent;
    v2 = *(v1 + 18);
    LOBYTE(v1) = *(v1 + 19);
    v0->panelX = v2;
    v0->panelY = v1;
    object_setCoordinatesFromPanels(v0);
    v0->z = 0;
    result = -655360 * object_getFrontDirection(v0);
    v0->x += result;
    return result;
}


// 0x80c26a0
void sub_80C26A0()
{
    Battle *v0; // r5
    char v1; // r0
    int v2; // r1
    int v3; // r0
    int v4; // r1

    object_getFlip(v0);
    v1 = object_getFrontDirection(v0);
    v2 = v0->panelY;
    v3 = object_getCoordinatesForPanels(v1 + v0->panelX);
    SpawnT4BattleObjectWithId0(v0, v3, v3, v4, 0x100000);
}


// 0x80c26c8
int sub_80C26C8()
{
    Battle *v0; // r5
    char v1; // r0
    int v2; // r1
    int v3; // r0
    int v4; // r1
    int result; // r0

    v1 = object_getFrontDirection(v0);
    v2 = v0->panelY;
    v3 = object_getCoordinatesForPanels(2 * v1 + v0->panelX);
    SpawnT4BattleObjectWithId0(v0, v3, v3, v4, 0);
    *(result + 32) = 30;
    return result;
}


// 0x80c26f0
int sub_80C26F0()
{
    int v0; // r5

    return (*(&JumpTable80C2700 + *(v0 + 8)))();
}


// 0x80c2710
int sub_80C2710()
{
    int v0; // r5
    int v1; // r0

    sprite_load(v0, 128, 8, 11);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    sprite_setPallete(*(&dword_80C276C + *(v0 + 4)));
    sprite_setColorShader(v0, 0x7FFF);
    *v0 |= 2u;
    *(v0 + 8) = 4;
    return sub_80C2770();
}


// 0x80c2770
int sub_80C2770()
{
    int v0; // r5

    (*(&off_80C2788 + *(v0 + 9)))();
    object_updateSpriteTimestop();
    return sub_80C2A3A();
}


// 0x80c2798
int sub_80C2798()
{
    int v0; // r5

    return (*(&off_80C27AC + *(v0 + 10)))();
}


// 0x80c27b4
int __fastcall sub_80C27B4(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    __int16 v5; // r0
    int v6; // r0
    unsigned __int8 v7; // vf

    if ( *(v3 + 11) )
    {
        *v3 |= 2u;
        v5 = *(v3 + 32) + 1;
        *(v3 + 32) = v5;
        if ( v5 & 1 )
            *v3 &= 0xFDu;
        v6 = *(v3 + 25);
        v7 = __OFSUB__(v6, 2);
        result = v6 - 2;
        *(v3 + 25) = result;
        if ( ((result < 0) ^ v7) | (result == 0) )
        {
            *v3 |= 2u;
            *(v3 + 25) = 0;
            result = 4;
            *(v3 + 10) = 4;
        }
    }
    else
    {
        *(v3 + 25) = 31;
        PlaySoundEffect(148, a2, a3);
        *(v3 + 32) = 0;
        result = 4;
        *(v3 + 11) = 4;
    }
    return result;
}


// 0x80c2804
int sub_80C2804()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            if ( object_checkPanelParameters(*(v0 + 18), *(v0 + 19), 16, 0) )
            {
                *(v0 + 20) = object_getFrontDirection(v0) + *(v0 + 18);
                *(v0 + 21) = 1;
                *(v0 + 104) = 1;
                *(v0 + 108) = object_getFlip(v0);
                *(v0 + 9) = 4;
                result = 0;
                *(v0 + 10) = 0;
            }
            else
            {
                result = 8;
                *(v0 + 8) = 8;
            }
        }
    }
    else
    {
        *(v0 + 32) = 30;
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80c2854
int sub_80C2854()
{
    int v0; // r5

    return (*(&off_80C2868 + *(v0 + 10)))();
}


// 0x80c2878
signed int sub_80C2878()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r1
    int v4; // r0
    int v5; // r3
    int v6; // r2
    int v7; // r3
    char v8; // zf
    signed int result; // r0
    int v10; // [sp-8h] [bp-Ch]
    int v11; // [sp-4h] [bp-8h]

    object_isValidPanel(*(v0 + 20), *(v0 + 21));
    if ( !v8 )
    {
        v1 = *(v0 + 20);
        v2 = *(v0 + 21);
        if ( !*(v0 + 104) )
            goto LABEL_11;
        do
        {
            v3 = 1;
            do
            {
                v10 = v1;
                v11 = v3;
                object_checkPanelParameters(v1, v3, *(&off_80C2904 + *(v0 + 22)), 0);
                v1 = v10;
                v2 = v11;
                if ( !v8 )
                {
                    v4 = v10 - object_getFrontDirection(v0);
                    v5 = *(v0 + 76);
                    v6 = *(v5 + 18);
                    v7 = *(v5 + 19);
                    if ( v4 != v6 || v11 != v7 )
                        object_checkPanelParameters(v4, v11, 16, 260046848);
                    else
                        v8 = 0;
                    v1 = v10;
                    v2 = v11;
                    if ( !v8 )
                    {
                        *(v0 + 20) = v10;
                        *(v0 + 21) = v11;
                        *(v0 + 104) = 0;
                        result = 4;
                        *(v0 + 10) = 4;
                        return result;
                    }
                }
LABEL_11:
                v3 = v2 + 1;
            }
            while ( v3 <= 3 );
            v1 += object_getFrontDirection(v0);
        }
        while ( (v1 - 1) <= 5 );
    }
    *(v0 + 10) = 0;
    result = 8;
    *(v0 + 9) = 8;
    return result;
}


// 0x80c290c
int sub_80C290C()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            result = 8;
            *(v0 + 10) = 8;
        }
    }
    else
    {
        *(v0 + 16) = 4;
        *(v0 + 76) = 0;
        *(v0 + 32) = 3;
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80c2934
int sub_80C2934()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            result = 12;
            *(v0 + 10) = 12;
        }
    }
    else
    {
        *(v0 + 16) = 4;
        *(v0 + 32) = 3;
        *(v0 + 18) = *(v0 + 20) - object_getFrontDirection(v0);
        *(v0 + 19) = *(v0 + 21);
        object_setCoordinatesFromPanels(v0);
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80c296c
int sub_80C296C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r4
    int v3; // r1
    int v4; // r2
    int result; // r0
    int v6; // ST00_4
    int v7; // r6
    int v8; // r0
    int v9; // r4
    int v10; // r1
    int v11; // r0
    unsigned __int8 v12; // vf

    if ( *(v0 + 11) )
    {
        if ( *(v0 + 32) == 10 )
        {
            v6 = object_getFrontDirection(v0) + *(v0 + 18);
            v7 = *(v0 + 44);
            sub_80C53A6(v6, *(v0 + 19), 0, 0x100000);
            v8 = object_getCoordinatesForPanels(v6);
            v9 = (*(v0 + 108) << 8) | 0x27;
            SpawnT4BattleObjectWithId0(v0, 39, v8, v10, 0x100000);
        }
        v11 = *(v0 + 32);
        v12 = __OFSUB__(v11, 1);
        result = v11 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v12) | (result == 0) )
        {
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 16) = 5;
        *(v0 + 17) = 6;
        v1 = 4 * *(v0 + 4);
        v2 = *&byte_80C29F0[v1];
        sub_80B8E30(v1);
        PlaySoundEffect(176, v3, v4);
        *(v0 + 32) = 20;
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80c29fc
int sub_80C29FC()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *v0 &= 0xFDu;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 76) = 0;
        *(v0 + 16) = 4;
        *(v0 + 32) = 5;
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80c2a2c
int sub_80C2A2C()
{
    int v0; // r5

    **(v0 + 100) = 0;
    return object_freeMemory();
}


// 0x80c2a3a
int sub_80C2A3A()
{
    Battle *v0; // r5

    return sprite_setColorShader(v0, 1057 * v0->unk_19);
}


// 0x80c2a4c
int __fastcall sub_80C2A4C(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(60, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 76) = v11;
        *(v4 + 44) = v5;
        *(v4 + 100) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80c2a78
int sub_80C2A78()
{
    int v0; // r5

    return (*(&JumpTable80C2A8C + *(v0 + 8)))();
}


// 0x80c2a9c
int sub_80C2A9C()
{
    int v0; // r5
    int v1; // r7
    int v2; // r0
    int v3; // r0

    sprite_load(v0, 128, 8, 11);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    v2 = object_getFlip(v0);
    sprite_setFlip(v0, v2);
    *(v1 + 16) = *(v0 + 18);
    v3 = sub_800FCFC(11);
    sprite_setPallete(v3);
    sprite_setColorShader(v0, 0x7FFF);
    *v0 |= 2u;
    *(v0 + 8) = 4;
    return sub_80C2AF8();
}


// 0x80c2af8
int sub_80C2AF8()
{
    int v0; // r5

    (*(&off_80C2B10 + *(v0 + 9)))();
    object_updateSpriteTimestop();
    return sub_80C2F84();
}


// 0x80c2b20
int sub_80C2B20()
{
    int v0; // r5

    return (*(&off_80C2B34 + *(v0 + 10)))();
}


// 0x80c2b3c
int __fastcall sub_80C2B3C(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    __int16 v5; // r0
    int v6; // r0
    unsigned __int8 v7; // vf

    if ( *(v3 + 11) )
    {
        *v3 |= 2u;
        v5 = *(v3 + 32) + 1;
        *(v3 + 32) = v5;
        if ( v5 & 1 )
            *v3 &= 0xFDu;
        v6 = *(v3 + 25);
        v7 = __OFSUB__(v6, 2);
        result = v6 - 2;
        *(v3 + 25) = result;
        if ( ((result < 0) ^ v7) | (result == 0) )
        {
            *v3 |= 2u;
            *(v3 + 25) = 0;
            result = 4;
            *(v3 + 10) = 4;
        }
    }
    else
    {
        *(v3 + 25) = 31;
        PlaySoundEffect(148, a2, a3);
        *(v3 + 32) = 0;
        result = 4;
        *(v3 + 11) = 4;
    }
    return result;
}


// 0x80c2b8c
int sub_80C2B8C()
{
    int v0; // r5
    int v1; // r7
    int v2; // r1
    int v3; // r2
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v0 + 11) )
    {
        v5 = *(v0 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            if ( object_checkPanelParameters(*(v0 + 18), *(v0 + 19), 16, 0) )
            {
                *(v1 + 12) = *(v0 + 22) ^ *(v0 + 23);
                result = 4;
                *(v0 + 9) = 4;
                *(v0 + 10) = 0;
            }
            else
            {
                result = 8;
                *(v0 + 8) = 8;
            }
        }
    }
    else
    {
        *(v0 + 32) = 60;
        SpawnT4BattleObjectWithId0(v0, 1310720, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 1310720);
        PlaySoundEffect(119, v2, v3);
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80c2be6
int sub_80C2BE6()
{
    int v0; // r5

    return (*(&off_80C2BF8 + *(v0 + 10)))();
}


// 0x80c2c14
signed int __noreturn sub_80C2C14()
{
    int v0; // r5
    _BYTE *v1; // r7
    int v2; // r0
    int v3; // r1
    int v4; // r1
    int v5; // r0
    int v6; // r1
    bool v7; // zf
    int v8; // r3
    signed __int16 v9; // r0
    int v10; // ST08_4
    signed int result; // r0
    int v12; // [sp-10h] [bp-18h]
    int v13; // [sp-Ch] [bp-14h]
    int v14; // [sp-8h] [bp-10h]
    int v15; // [sp-4h] [bp-Ch]

    v1[24] = 0;
    v1[22] = 0;
    v1[23] = 0;
    v2 = object_getFrontDirection(v0) + *(v0 + 18);
    do
    {
        v3 = 1;
        do
        {
            v14 = v2;
            v15 = v3;
            object_checkPanelParameters(v2, v3, *(&off_80C2F2C + *(v0 + 22)), 0);
            v2 = v14;
            v4 = v15;
            if ( !v7 )
            {
                v5 = v14 - object_getFrontDirection(v0);
                v6 = v15 - 1;
                if ( !v1[24] )
                {
                    v1[24] = v5;
                    v1[22] = v5;
                    v1[23] = v6;
                }
                v12 = v5;
                v13 = v15 - 1;
                object_isValidPanel(v5, v6);
                if ( !v7 )
                {
                    v8 = 126353536;
                    if ( *(v0 + 22) )
                        v8 = 193462400;
                    v1[20] = v12;
                    v1[21] = v13;
                    object_checkPanelParameters(v12, v13, 16, v8);
                }
                v2 = v14;
                v4 = v15;
                if ( !v7 )
                {
                    *(v0 + 20) = v14;
                    *(v0 + 21) = v15;
                    *(v0 + 34) = 0;
                    v9 = 30;
                    goto LABEL_16;
                }
            }
            v3 = v4 + 1;
        }
        while ( v3 <= 3 );
        v10 = v2 + object_getFrontDirection(v0);
        v7 = object_isValidPanel(v10, 1) == 0;
        v2 = v10;
    }
    while ( !v7 );
    *(v0 + 34) = 255;
    v9 = 15;
LABEL_16:
    *(v0 + 32) = v9;
    result = 4;
    *(v0 + 10) = 4;
    return result;
}


// 0x80c2cb4
int sub_80C2CB4()
{
    int v0; // r5
    unsigned __int8 *v1; // r7
    int v2; // r0
    int v3; // r1
    int v4; // r0
    int v5; // r1
    int v6; // r1
    int v7; // r0
    int v8; // r1
    int v9; // r1
    int v10; // r0
    int v11; // r2
    int result; // r0
    int v13; // r0
    unsigned __int8 v14; // vf

    if ( *(v0 + 11) )
    {
        v13 = *(v0 + 32);
        v14 = __OFSUB__(v13, 1);
        result = v13 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v14) | (result == 0) )
        {
            if ( *(v0 + 34) )
            {
                *(v0 + 10) = 0;
                result = 8;
                *(v0 + 9) = 8;
            }
            else
            {
                v1[25] = 1;
                result = 8;
                *(v0 + 10) = 8;
            }
        }
    }
    else
    {
        v2 = v1[20];
        v3 = v1[21];
        if ( *(v0 + 34) )
        {
            v4 = v1[22];
            v5 = v1[23];
        }
        v6 = *(v0 + 21);
        v7 = object_getCoordinatesForPanels(*(v0 + 20));
        SpawnT4BattleObjectWithId0(v0, v7, v7, v8, 0);
        v9 = *(v0 + 32);
        *(v10 + 32) = v9;
        PlaySoundEffect(189, v9, v11);
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80c2d56
int sub_80C2D56()
{
    int v0; // r5
    int v1; // r7
    int result; // r0
    int v3; // r0
    unsigned __int8 v4; // vf

    if ( *(v0 + 11) )
    {
        v3 = *(v0 + 32);
        v4 = __OFSUB__(v3, 1);
        result = v3 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v4) | (result == 0) )
        {
            result = 16;
            *(v0 + 10) = 16;
        }
    }
    else
    {
        *(v0 + 16) = 3;
        sprite_setFlip(v0, *(v1 + 12));
        *(v0 + 32) = 3;
        *(v0 + 18) = *(v0 + 20);
        *(v0 + 19) = *(v0 + 21);
        object_setCoordinatesFromPanels(v0);
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80c2d8c
int __fastcall sub_80C2D8C(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r7
    int v6; // r1
    int v7; // r2
    int result; // r0
    char v9; // zf
    int v10; // ST04_4
    int v11; // r6
    int v12; // r0
    int v13; // r4
    int v14; // r1
    int v15; // r0
    unsigned __int8 v16; // vf

    if ( *(v4 + 11) )
    {
        if ( *(v4 + 32) > 5 )
        {
            sub_80C2EB0();
            if ( !v9 )
                *(v5 + 25) = 1;
        }
        if ( *(v4 + 32) == 10 )
        {
            sub_80E11E0(10, a2, a3, a4);
            v10 = object_getFlipDirection(*(v5 + 12), 0) + *(v4 + 18);
            v11 = *(v4 + 44);
            sub_80C53A6(v10, *(v4 + 19), 0, 0x100000);
            v12 = object_getCoordinatesForPanels(v10);
            v13 = (*(v5 + 12) << 8) | 0x27;
            SpawnT4BattleObjectWithId0(v4, 39, v12, v14, 0x100000);
        }
        v15 = *(v4 + 32);
        v16 = __OFSUB__(v15, 1);
        result = v15 - 1;
        *(v4 + 32) = result;
        if ( ((result < 0) ^ v16) | (result == 0) )
        {
            result = 8;
            *(v4 + 10) = 8;
        }
    }
    else
    {
        *(v4 + 16) = 5;
        *(v4 + 17) = 6;
        sub_80B8E30(6);
        PlaySoundEffect(176, v6, v7);
        *(v4 + 32) = 20;
        result = 4;
        *(v4 + 11) = 4;
    }
    return result;
}


// 0x80c2e30
int sub_80C2E30()
{
    int v0; // r5
    int v1; // r7
    int result; // r0
    int v3; // r0
    unsigned __int8 v4; // vf

    if ( *(v0 + 11) )
    {
        v3 = *(v0 + 32);
        v4 = __OFSUB__(v3, 1);
        result = v3 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v4) | (result == 0) )
        {
            result = 24;
            *(v0 + 10) = 24;
        }
    }
    else
    {
        *(v0 + 76) = 0;
        *(v0 + 16) = 3;
        sprite_setFlip(v0, *(v0 + 22) ^ *(v0 + 23) ^ 1);
        *(v0 + 32) = 3;
        *(v0 + 18) = *(v1 + 16);
        object_setCoordinatesFromPanels(v0);
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80c2e6e
int sub_80C2E6E()
{
    int v0; // r5
    char v1; // r0
    int result; // r0

    if ( *(v0 + 11) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( !result )
        {
            *(v0 + 10) = 0;
            result = 8;
            *(v0 + 9) = 8;
        }
    }
    else
    {
        *(v0 + 76) = 0;
        *(v0 + 16) = 15;
        *(v0 + 32) = 60;
        v1 = *(v0 + 20) + 1;
        if ( *(v0 + 22) != *(v0 + 23) )
            v1 = *(v0 + 20) - 1;
        sub_80C2FBC(v1);
        result = 4;
        *(v0 + 11) = 4;
    }
    return result;
}


// 0x80c2eb0
signed int sub_80C2EB0()
{
    int v0; // r5
    __int16 v1; // r1

    v1 = *(*(sub_80103BC(*(v0 + 22)) + 88) + 44);
    return 1;
}


// 0x80c2ec4
BOOL __fastcall sub_80C2EC4(int a1)
{
    Battle *v1; // r5
    int v2; // r7
    int v3; // r6
    char v4; // r0
    char *v5; // r3
    BOOL result; // r0
    char v7; // zf
    int v8; // r3

    v3 = a1;
    *(v2 + 12) = a1 & 1 ^ v1->Alliance ^ v1->directionFlip;
    v4 = object_getFrontDirection(v1);
    v5 = &byte_80C2F20[2 * v3];
    v1->futurePanelX += *v5 * v4;
    v1->futurePanelY += v5[1];
    v1->Timer2 = v3 + 1;
    result = object_isValidPanel(v1->futurePanelX, v1->futurePanelY);
    if ( !v7 )
    {
        v8 = 126353536;
        if ( v1->Alliance )
            v8 = 193462400;
        result = object_checkPanelParameters(v1->futurePanelX, v1->futurePanelY, 16, v8);
    }
    return result;
}


// 0x80c2f40
int sub_80C2F40()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( !*(v0 + 10) )
    {
        if ( *(v0 + 16) != 4 )
        {
            *(v0 + 16) = 4;
            *(v0 + 76) = 0;
            *(v0 + 32) = 5;
            result = 4;
            *(v0 + 10) = 4;
            return result;
        }
        goto LABEL_6;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v3) | (result == 0) )
    {
LABEL_6:
        *v0 &= 0xFDu;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c2f76
int sub_80C2F76()
{
    int v0; // r5

    **(v0 + 100) = 0;
    return object_freeMemory();
}


// 0x80c2f84
int sub_80C2F84()
{
    Battle *v0; // r5

    return sprite_setColorShader(v0, 1057 * v0->unk_19);
}


// 0x80c2f96
int __fastcall sub_80C2F96(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(61, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 76) = v11;
        *(v4 + 44) = v5;
        *(v4 + 100) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80c2fbc
int __fastcall sub_80C2FBC(char a1)
{
    int v1; // r5
    int v2; // r0
    int v3; // r1
    int v4; // r2
    int v5; // r0
    int v6; // r1
    int v7; // r2
    int v8; // r3

    v2 = object_getCoordinatesForPanels(a1);
    sub_80E3FB4((*(v1 + 22) ^ *(v1 + 23)) << 8, v2, v3, 0)->Timer = 60;
    v5 = PlaySoundEffect(146, 60, v4);
    return sub_80E11E0(v5, v6, v7, v8);
}


// 0x80c3000
void sub_80C3000()
{
    int v0; // r5

    (*(&off_80C3018 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80c3024
signed int __noreturn sub_80C3024()
{
    Battle *v0; // r5
    u32 *v1; // r4
    Battle *v2; // ST04_4
    u32 *v3; // r5
    int v4; // r0
    int v5; // ST00_4
    char *v6; // r0
    int v7; // r1
    int v8; // r2
    int v9; // r0
    int v10; // r1
    u32 v11; // r2
    u32 v12; // r3
    u32 *v13; // r0
    Battle *v14; // ST04_4
    u32 *v15; // r5
    int v16; // r0
    int v17; // r1
    int v18; // r0
    int v19; // r0
    int v20; // r1
    signed int result; // r0

    v1 = v0->parent;
    if ( sub_800F29C(*(v1 + 20)) == 2 )
    {
        v2 = v0;
        v3 = v0->parent;
        v4 = sub_8013774(2, 44);
        v5 = v4;
        v6 = sub_8013774(v4, 41);
        v0 = v2;
        sub_800FC9E(v6, v5);
    }
    else
    {
        v9 = sub_800F26C(*(v1 + 20));
        v8 = v10;
        v7 = v9;
    }
    sprite_load(v0, 128, v7, v8);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    v0->currAnimation = 0;
    v0->currAnimationCpy = -1;
    v0->objFlags |= 2u;
    v11 = v0->parent[14];
    v12 = v0->parent[15];
    v13 = &v0->x;
    *v13 = v0->parent[13];
    v13[1] = v11;
    v13[2] = v12;
    object_setPanelsFromCoordinates(v0);
    v14 = v0;
    v15 = v0->parent;
    v16 = sub_801002C();
    sprite_setPallete(v16);
    *&v14->extraVars[12] = sub_800F29C(*(v1 + 20));
    *&v14->extraVars[16] = v17;
    v18 = object_getFlip(v14);
    sprite_setFlip(v14, v18);
    v19 = sub_800F29C(*(v1 + 20));
    sub_8010DF6(v19, v20);
    sub_80E1352(v14->parent, 0xFu);
    result = 4;
    *&v14->currState = 4;
    return result;
}


// 0x80c30c2
int sub_80C30C2()
{
    _BYTE *v0; // r5

    *v0 |= 2u;
    if ( !sub_800EB6C(v0[22]) )
        *v0 &= 0xFDu;
    return (*(&off_80C30F4 + v0[9]))();
}


// 0x80c3100
int sub_80C3100()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    signed int v4; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 20;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        *(v0 + 16) = 14;
        *(v0 + 34) = *(v0 + 4);
        if ( *(v0 + 108) == 2 )
        {
            v4 = *(v0 + 112);
            if ( !v4 )
            {
LABEL_9:
                sub_80B8E30(v4);
                goto LABEL_10;
            }
            if ( v4 >= 25 )
            {
                v4 -= 24;
                goto LABEL_9;
            }
        }
LABEL_10:
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80c314e
int sub_80C314E()
{
    int v0; // r5
    int v1; // r1
    int v2; // r1
    char v3; // r0
    int v4; // r6
    int v5; // r0
    unsigned __int8 v6; // vf
    int result; // r0
    int v8; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 1;
        *(v0 + 17) = -1;
        v1 = *(v0 + 100);
        if ( v1 )
        {
            *(v1 + 17) = -1;
            v2 = *(v0 + 80);
            if ( v2 )
                *(v2 + 17) = -1;
        }
        *(v0 + 32) = 18;
        v3 = object_getFrontDirection(v0);
        v4 = *(v0 + 44);
        sub_80D73D6(v3 + *(v0 + 18), *(v0 + 19), *(v0 + 14), 0x100000);
    }
    v5 = *(v0 + 32);
    v6 = __OFSUB__(v5, 1);
    result = v5 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v6) | (result == 0) )
    {
        v8 = *(v0 + 34) - 1;
        *(v0 + 34) = v8;
        if ( v8 )
        {
            result = 0;
            *(v0 + 11) = 0;
        }
        else
        {
            *(v0 + 32) = 60;
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80c31b0
int sub_80C31B0()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r0
    int v5; // r1

    if ( *(v0 + 32) == 45 )
    {
        *(v0 + 100) = 0;
        *(v0 + 16) = 0;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        v4 = sub_800F29C(*(*(v0 + 76) + 40));
        sub_8011044(v4, v5);
        *v0 &= 0xFDu;
        *(v0 + 8) = 8;
        sub_80E13DC(*(v0 + 76));
        result = 0;
        **(v0 + 96) = 0;
    }
    return result;
}


// 0x80c31f0
int __fastcall sub_80C31F0(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(69, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80c3218
void sub_80C3218()
{
    int v0; // r5

    (*(&off_80C3230 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c323c
int __noreturn sub_80C323C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r2
    _BYTE *v4; // r0

    sprite_decompress(12, 72);
    sprite_load(v0, 128, 12, 72);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    *v0 |= 2u;
    sub_80C3460();
    PlaySoundEffect(274, v2, v3);
    *(v0 + 14) = 0;
    *(v0 + 44) = 0;
    v4 = object_createCollisionData();
    if ( v4 )
    {
        object_setupCollisionData(v4, 23, 5, 0);
        object_setCollisionStatusEffect1(18);
        object_clearCollisionRegion();
        *(v0 + 8) = 4;
        sub_80C32B6();
    }
    return object_freeMemory();
}


// 0x80c32b6
void __noreturn sub_80C32B6()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    object_removeCollisionData();
    v1 = (*(&off_80C32D0 + *(v0 + 9)))();
    object_presentCollisionData(v1, v2);
}


// 0x80c32d8
int sub_80C32D8()
{
    int v0; // r5

    return (*(&off_80C32EC + *(v0 + 10)))();
}


// 0x80c32f4
int sub_80C32F4()
{
    int v0; // r5
    int result; // r0

    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        *(v0 + 16) = 1;
        *(v0 + 32) = 60;
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80c330e
int sub_80C330E()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80c3322
int sub_80C3322()
{
    int v0; // r5

    return (*(&off_80C3334 + *(v0 + 10)))();
}


// 0x80c3348
signed int sub_80C3348()
{
    int v0; // r5
    signed int result; // r0

    *v0 &= 0xFDu;
    SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
    *(v0 + 32) = 3;
    result = 4;
    *(v0 + 10) = 4;
    return result;
}


// 0x80c3368
int sub_80C3368()
{
    int v0; // r5
    int result; // r0
    u32 v2; // r0
    char v3; // r1
    char v4; // r2
    int v5; // r3

    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        v2 = sub_80103BC(*(v0 + 22) ^ 1);
        if ( v2 )
        {
            v3 = *(v2 + 18);
            v4 = *(v2 + 19);
            *(v0 + 18) = v3;
            *(v0 + 19) = v4;
            v5 = *(v0 + 84);
            *(v5 + 10) = v3;
            *(v5 + 11) = v4;
            object_setCoordinatesFromPanels(v0);
            ++*(v0 + 58);
            ++*(v0 + 62);
            *(v0 + 32) = 3;
            result = 8;
            *(v0 + 10) = 8;
        }
        else
        {
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    return result;
}


// 0x80c33ae
int sub_80C33AE()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        *v0 |= 2u;
        *(v0 + 16) = 2;
        result = 12;
        *(v0 + 10) = 12;
    }
    return result;
}


// 0x80c33ca
void sub_80C33CA()
{
    u32 v0; // r5
    u32 v1; // [sp-4h] [bp-8h]

    if ( sprite_getFrameParameters() & 0x80 )
    {
        if ( *(v0 + 6) != 382 )
        {
            v1 = v0;
            v0 = sub_80103BC(*(v0 + 22) ^ 1);
            if ( v0 )
            {
                sub_800FC7C();
                v0 = v1;
            }
        }
        *(v0 + 16) = 3;
        *(v0 + 32) = 60;
        object_setCollisionRegion(1);
        *(v0 + 10) = 16;
    }
    JUMPOUT(__CS__, v1);
}


// 0x80c3408
int sub_80C3408()
{
    int v0; // r5
    int v1; // r2
    int result; // r0
    int v3; // r0

    if ( sprite_getFrameParameters() & 0x40 )
        PlaySoundEffect(290, 64, v1);
    object_clearCollisionRegion();
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        v3 = object_getEnemyDirection();
        SpawnT4BattleObjectWithId0(v0, v3, *(v0 + 52) - (v3 << 19), *(v0 + 56), 0x200000);
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c3448
int sub_80C3448()
{
    int v0; // r5
    _BYTE *v1; // r1

    object_freeCollisionData(*(v0 + 84));
    v1 = *(v0 + 76);
    if ( v1 )
        *v1 = 0;
    return object_freeMemory();
}


// 0x80c3460
int sub_80C3460()
{
    Battle *v0; // r5
    u32 v1; // r0
    u8 v2; // ST00_1
    int v3; // ST04_4
    bool v4; // zf
    u8 v5; // r0
    char v6; // r1
    int result; // r0
    int v8; // [sp-4h] [bp-14h]

    v8 = v0->Alliance;
    v1 = sub_80103BC(v8);
    if ( !v1
        || (v2 = *(v1 + 18),
                v3 = *(v1 + 19),
                v4 = object_checkPanelParameters(*(v1 + 18), v3, *&byte_80C34A8[8 * v8], *&byte_80C34A8[8 * v8 + 4]) == 0,
                v5 = v2,
                v6 = v3,
                v4) )
    {
        v5 = 5 * v0->Alliance + 1;
        v6 = 2;
    }
    v0->panelX = v5;
    v0->panelY = v6;
    object_setCoordinatesFromPanels(v0);
    result = 0;
    v0->z = 0;
    return result;
}


// 0x80c34b8
int __fastcall sub_80C34B8(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    _BYTE *v5; // r7
    int result; // r0
    int v7; // [sp+0h] [bp-8h]

    object_spawnType1(75, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 22) = *(v7 + 22);
        *(v4 + 76) = v5;
        *v5 = 1;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c34e0
void sub_80C34E0()
{
    int v0; // r5

    (*(&off_80C34F8 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c3504
int __noreturn sub_80C3504()
{
    int v0; // r5
    int v1; // r0

    sprite_decompress(12, 75);
    sprite_load(v0, 128, 12, 75);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    *v0 |= 2u;
    sub_80C36AE();
    *(v0 + 96) = 1;
    *(v0 + 8) = 4;
    return sub_80C3550();
}


// 0x80c3550
int sub_80C3550()
{
    return sub_80C3558();
}


// 0x80c3558
int sub_80C3558()
{
    int v0; // r5

    return (*(&off_80C356C + *(v0 + 10)))();
}


// 0x80c3584
signed int __fastcall sub_80C3584(int a1, int a2, int a3)
{
    int v3; // r5
    signed int result; // r0

    *(v3 + 32) = 20;
    PlaySoundEffect(288, a2, a3);
    result = 4;
    *(v3 + 10) = 4;
    return result;
}


// 0x80c3598
int sub_80C3598()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    _DWORD *v3; // r7
    int result; // r0

    v1 = *(v0 + 56) + *(v0 + 68);
    v2 = *(v0 + 60) + *(v0 + 72);
    v3 = (v0 + 52);
    *v3 = *(v0 + 52) + *(v0 + 64);
    v3[1] = v1;
    v3[2] = v2;
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        *(v0 + 16) = 1;
        *(v0 + 32) = 6;
        *(v0 + 72) = -*(v0 + 72);
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80c35ce
int sub_80C35CE()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    _DWORD *v3; // r7
    int result; // r0
    int v5; // r1
    int v6; // r2

    v1 = *(v0 + 56) + *(v0 + 68);
    v2 = *(v0 + 60) + *(v0 + 72);
    v3 = (v0 + 52);
    *v3 = *(v0 + 52) + *(v0 + 64);
    v3[1] = v1;
    v3[2] = v2;
    *(v0 + 64) -= object_getEnemyDirection() << 18;
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        *(v0 + 16) = 2;
        if ( sub_80103BC(*(v0 + 22) ^ 1) )
            sub_800FC7C();
        PlaySoundEffect(294, v5, v6);
        result = 12;
        *(v0 + 10) = 12;
    }
    return result;
}


// 0x80c3630
int sub_80C3630()
{
    int v0; // r5
    int result; // r0

    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        *(v0 + 32) = 75;
        *(v0 + 16) = 3;
        result = 16;
        *(v0 + 10) = 16;
    }
    return result;
}


// 0x80c364a
int sub_80C364A()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        *(v0 + 32) = 40;
        *(v0 + 16) = 4;
        *(v0 + 64) = 786432 * object_getEnemyDirection();
        *(v0 + 72) = 0x40000;
        result = 20;
        *(v0 + 10) = 20;
    }
    return result;
}


// 0x80c3678
int sub_80C3678()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    _DWORD *v3; // r7
    int result; // r0

    v1 = *(v0 + 56) + *(v0 + 68);
    v2 = *(v0 + 60) + *(v0 + 72);
    v3 = (v0 + 52);
    *v3 = *(v0 + 52) + *(v0 + 64);
    v3[1] = v1;
    v3[2] = v2;
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c36a0
int sub_80C36A0()
{
    int v0; // r5

    **(v0 + 76) = 0;
    return object_freeMemory();
}


// 0x80c36ae
int sub_80C36AE()
{
    int v0; // r5
    int v1; // ST00_4
    int v2; // r6
    _DWORD *v3; // r0
    int v4; // r1
    int v5; // r2
    int result; // r0

    v1 = *(v0 + 22) ^ 1;
    v2 = object_getAllianceDirection(v1);
    v3 = sub_80103BC(v1);
    v4 = v3[14];
    v5 = v3[15];
    *(v0 + 52) = v3[13] + 15728640 * v2;
    *(v0 + 56) = v4;
    *(v0 + 60) = v5 + 7340032;
    *(v0 + 64) = 786432 * object_getEnemyDirection();
    *(v0 + 72) = -262144;
    result = 0;
    *(v0 + 68) = 0;
    return result;
}


// 0x80c3700
int sub_80C3700()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 96) - 1;
    *(v0 + 96) = result;
    if ( !result )
    {
        result = 32;
        *(v0 + 96) = 32;
    }
    return result;
}


// 0x80c3710
int __fastcall sub_80C3710(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    _BYTE *v5; // r7
    int result; // r0
    int v7; // [sp+0h] [bp-8h]

    object_spawnType1(76, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 22) = *(v7 + 22);
        *(v4 + 76) = v5;
        *v5 = 1;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c3734
void sub_80C3734()
{
    int v0; // r5

    (*(&off_80C374C + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c3758
void __noreturn sub_80C3758()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r2

    sprite_decompress(12, 76);
    sprite_load(v0, 128, 12, 76);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    *v0 |= 2u;
    sub_80C390E();
    *(v0 + 32) = 40;
    PlaySoundEffect(278, v2, v3);
    *(v0 + 8) = 4;
    sub_80C37AC();
}


// 0x80c37ac
void sub_80C37AC()
{
    int v0; // r5

    (*(&off_80C37D0 + *(v0 + 10)))();
    JUMPOUT(__CS__, 135018418);
}


// 0x80c37ec
int sub_80C37EC()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
        *(v0 + 32) = 16;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80c3816
signed int __fastcall sub_80C3816(int a1, int a2, int a3)
{
    int v3; // r5
    unsigned int v4; // r0
    signed int result; // r0

    v4 = *(v3 + 60) - 0x40000;
    *(v3 + 60) = v4;
    result = v4 >> 16;
    if ( result <= 16 )
    {
        *(v3 + 16) = 1;
        *(v3 + 60) = 0;
        *(v3 + 32) = 30;
        PlaySoundEffect(212, 0x40000, a3);
        result = 8;
        *(v3 + 10) = 8;
    }
    return result;
}


// 0x80c383e
int sub_80C383E()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        *(v0 + 16) = 2;
        result = 12;
        *(v0 + 10) = 12;
    }
    return result;
}


// 0x80c3852
int sub_80C3852()
{
    int v0; // r5
    int result; // r0
    u32 v2; // r0
    int v3; // r1
    int v4; // r2
    int v5; // r4
    int v6; // [sp-4h] [bp-8h]

    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        v6 = object_getEnemyDirection();
        v2 = sub_80103BC(*(v0 + 22));
        if ( v2 )
        {
            v5 = *(v2 + 18) << 16;
            sub_80DE112(v0 + 64, *(v0 + 52) - (v6 << 20), *(v0 + 56), 655360);
        }
        *(v0 + 32) = 10;
        PlaySoundEffect(178, v3, v4);
        result = 16;
        *(v0 + 10) = 16;
    }
    return result;
}


// 0x80c38a0
int sub_80C38A0()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 12);
    if ( !*(v0 + 12) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( !result )
        {
            *(v0 + 16) = 3;
            result = 20;
            *(v0 + 10) = 20;
        }
    }
    return result;
}


// 0x80c38ba
int sub_80C38BA()
{
    int v0; // r5
    int result; // r0

    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        *(v0 + 16) = 0;
        *(v0 + 32) = 10;
        *(v0 + 60) = 0x100000;
        result = 24;
        *(v0 + 10) = 24;
    }
    return result;
}


// 0x80c38da
signed int sub_80C38DA()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    v1 = *(v0 + 32) - 1;
    *(v0 + 32) = v1;
    if ( v1 )
    {
        result = 0x40000;
        *(v0 + 60) += 0x40000;
    }
    else
    {
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c3900
int sub_80C3900()
{
    int v0; // r5

    **(v0 + 76) = 0;
    return object_freeMemory();
}


// 0x80c390e
int sub_80C390E()
{
    int v0; // r5
    int result; // r0

    *(v0 + 18) = *(sub_80103BC(*(v0 + 22)) + 18);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 52) += 2162688 * object_getEnemyDirection();
    *(v0 + 60) = 3932160;
    result = *(v0 + 58) + 1;
    *(v0 + 58) = result;
    return result;
}


// 0x80c3946
int __fastcall sub_80C3946(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    _BYTE *v5; // r7
    int result; // r0
    int v7; // [sp+0h] [bp-8h]

    object_spawnType1(77, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 22) = *(v7 + 22);
        *(v4 + 76) = v5;
        *v5 = 1;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c3970
void sub_80C3970()
{
    int v0; // r5

    (*(&off_80C3988 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80c3994
int sub_80C3994()
{
    int v0; // r5

    SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x100000);
    sub_80C46B0(*(v0 + 76));
    **(v0 + 64) = 0;
    return object_freeMemory();
}


// 0x80c39ba
int __noreturn sub_80C39BA()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r1
    int v4; // r2

    sprite_decompress(8, 19);
    sprite_load(v0, 128, 8, 19);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    *(v0 + 76) = sub_80C468C(0, v2, 0, 0);
    PlaySoundEffect(148, v3, v4);
    *(v0 + 32) = 100;
    *(v0 + 8) = 4;
    return sub_80C3A24();
}


// 0x80c3a24
signed int sub_80C3A24()
{
    int v0; // r5
    signed int result; // r0

    (*(&off_80C3A48 + *(v0 + 9)))();
    result = object_isCurrentPanelValid();
    if ( !result )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c3a50
int sub_80C3A50()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( *(v0 + 32) <= 80 )
        *(v0 + 60) += 0x8000;
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80c3a78
int sub_80C3A78()
{
    int v0; // r5

    return (*(&off_80C3A8C + *(v0 + 10)))();
}


// 0x80c3a98
int sub_80C3A98()
{
    int v0; // r5
    int result; // r0
    int v2; // r2
    int v3; // r3

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 1;
        *(v0 + 16) = 10;
    }
    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        *(v0 + 16) = 12;
        *(v0 + 34) = 24;
        ZeroFillByHalfword(v0 + 96, 0x12u, v2, v3);
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80c3aca
int sub_80C3ACA()
{
    int v0; // r5
    int v1; // r0
    int result; // r0

    sub_80C3CD0();
    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 1;
        sub_80C3B54();
        sub_80C3B54();
        v1 = *(v0 + 34) - 1;
        *(v0 + 34) = v1;
        if ( !v1 )
        {
            *(v0 + 32) = 12;
            result = 8;
            *(v0 + 10) = 8;
            return result;
        }
        *(v0 + 32) = 8;
    }
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        result = 0;
        *(v0 + 11) = 0;
    }
    return result;
}


// 0x80c3b06
int sub_80C3B06()
{
    int v0; // r5
    int result; // r0

    if ( !*(v0 + 11) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result )
            return result;
        *(v0 + 11) = 1;
        *(v0 + 32) = 30;
        *(v0 + 16) = 0;
    }
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c3b30
int __fastcall sub_80C3B30(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(79, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 64) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80c3b54
void sub_80C3B54()
{
    int v0; // r5
    int v1; // r2
    int v2; // r1
    char v3; // r0
    signed int v4; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r2
    int v8; // r3
    int v9; // r6

    if ( sub_80C3C2C() )
    {
        GetPositiveSignedRNG2();
        v2 = 7;
        v4 = v3 & 7;
        if ( v4 < 3 || (sub_800EC48(v4, 7, v1, &off_80C3BB0), (v4 = sub_80C3BC0(v5, v6, v7, v8)) == 0) )
            v4 = sub_80C3BC0(v4, v2, 0x10000, 0);
        if ( v4 )
        {
            *(v0 + 6 * v2 - 6 + v4 + 95) = 22;
            v9 = *(v0 + 44);
            sub_80C5F4A(v4, v2, 0, 0);
            sub_80C3CA0();
        }
    }
}


// 0x80c3bc0
int __fastcall sub_80C3BC0(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *i; // r4
    int v7; // r0
    int v8; // r1
    int v9; // ST0C_4
    int v10; // r4
    int result; // r0
    int v16; // [sp-1Ch] [bp-44h]
    int v17; // [sp-18h] [bp-40h]
    int v18; // [sp-14h] [bp-3Ch]
    _BYTE *v19; // [sp-4h] [bp-2Ch]
    int v20; // [sp+0h] [bp-28h]

    v5 = 0;
    for ( i = (v4 + 116); ; i = v19 + 1 )
    {
        v7 = *i;
        if ( !*i )
            break;
        v19 = i;
        v8 = 3;
        do
        {
            v16 = v7;
            v17 = v8;
            v18 = a3;
            v9 = a4;
            v10 = object_getPanelParameters(v7, v8);
            v7 = v16;
            a3 = v18;
            a4 = v9;
            if ( !(v10 & v9) && (v10 & v18) == v18 && !*(v4 + 6 * v17 - 6 + v16 + 95) )
                *(&v20 + v5++) = 16 * v17 | v16;
            v8 = v17 - 1;
        }
        while ( v17 != 1 );
    }
    result = v5;
    if ( v5 )
    {
        GetPositiveSignedRNG2();
        __asm { SVC         6 }
        result = *(&v20 + v5) & 7;
    }
    return result;
}


// 0x80c3c2c
int sub_80C3C2C()
{
    Battle *v0; // r5
    int v1; // r4
    u8 *v2; // r6
    int v3; // r1
    int v4; // r2
    int v5; // r0
    int v6; // r1
    int v7; // r2
    int v8; // r3

    v1 = v0->panelX;
    v2 = &v0->extraVars[20];
    if ( v0->Alliance == v0->directionFlip )
    {
        if ( v1 < 3 )
            v1 = 3;
    }
    else if ( v1 > 4 )
    {
        v1 = 4;
    }
    while ( 5 * (v0->Alliance ^ v0->directionFlip ^ 1) + 1 != v1 )
    {
        v1 += object_getFrontDirection(v0);
        sub_800EC48(v1, v3, v4, byte_80C3C90);
        if ( object_getPanelsInColumnFiltered(v5, v6, v7, v8) )
            *v2++ = v1;
    }
    *v2 = 0;
    return v0->extraVars[20];
}


// 0x80c3ca0
void sub_80C3CA0()
{
    Battle *v0; // r5
    u32 v1; // r2
    int v2; // r0
    int v3; // r4
    int v4; // r1
    int v5; // r2
    int v6; // r3

    object_getFrontDirection(v0);
    v1 = v0->y;
    v2 = sub_801BDDE(0xFu);
    v3 = ((v0->Alliance ^ v0->directionFlip) << 8) + 87;
    SpawnT4BattleObjectWithId0(v0, v2, v4, v5, v6);
}


// 0x80c3cd0
int sub_80C3CD0()
{
    int v0; // r5
    int v1; // r2
    signed int v2; // r3
    int result; // r0

    v1 = v0 + 96;
    v2 = 17;
    do
    {
        result = *(v1 + v2);
        if ( result - 1 >= 0 )
            *(v1 + v2) = result - 1;
        --v2;
    }
    while ( v2 >= 0 );
    return result;
}


// 0x80c3ce8
void sub_80C3CE8()
{
    int v0; // r5

    (*(&off_80C3D00 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80c3d0c
int sub_80C3D0C()
{
    int v0; // r5

    SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x100000);
    sub_80C46B0(*(v0 + 76));
    **(v0 + 64) = 0;
    return object_freeMemory();
}


// 0x80c3d32
int __noreturn sub_80C3D32()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r1
    int v4; // r2

    sprite_decompress(8, 19);
    sprite_load(v0, 128, 8, 19);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    *(v0 + 76) = sub_80C468C(0, v2, 0, 0);
    PlaySoundEffect(148, v3, v4);
    *(v0 + 32) = 50;
    *(v0 + 8) = 4;
    return sub_80C3D9C();
}


// 0x80c3d9c
signed int sub_80C3D9C()
{
    int v0; // r5
    signed int result; // r0

    (*(&off_80C3DC0 + *(v0 + 9)))();
    result = object_isCurrentPanelValid();
    if ( !result )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c3dc8
int sub_80C3DC8()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80c3ddc
int sub_80C3DDC()
{
    int v0; // r5

    return (*(&off_80C3DF0 + *(v0 + 10)))();
}


// 0x80c3e00
int sub_80C3E00()
{
    int v0; // r5
    int result; // r0
    int v2; // r2

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 1;
        *(v0 + 16) = 8;
    }
    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        *(v0 + 16) = 13;
        PlaySoundEffect(253, 128, v2);
        *(v0 + 32) = 30;
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80c3e2e
int sub_80C3E2E()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        *(v0 + 16) = 9;
        *(v0 + 32) = 120;
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80c3e46
int sub_80C3E46()
{
    int v0; // r5
    __int16 *v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int result; // r0

    v1 = *(v0 + 32);
    if ( v1 == byte_69 )
        v1 = sub_80C3EBC();
    if ( v1 == (&word_54 + 1) )
        v1 = sub_80C3EBC();
    if ( v1 == &word_41 )
        v1 = sub_80C3EBC();
    if ( v1 == (&dword_2C + 1) )
        sub_80C3EBC();
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v3 )
    {
        *(v0 + 16) = 0;
        *(v0 + 32) = 20;
        result = 12;
        *(v0 + 10) = 12;
    }
    return result;
}


// 0x80c3e88
int sub_80C3E88()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c3e98
int __fastcall sub_80C3E98(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType1(80, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 64) = v6;
        *v6 = 1;
    }
    return result;
}


// 0x80c3ebc
_BYTE *sub_80C3EBC()
{
    int v0; // r5
    int v1; // r6

    v1 = *(v0 + 44);
    return sub_80DD5B4(*(v0 + 18), *(v0 + 19), 0, 0);
}


// 0x80c3ee0
int sub_80C3EE0()
{
    int v0; // r5

    return (*(&off_80C3EF4 + *(v0 + 8)))();
}


// 0x80c3f00
void __noreturn sub_80C3F00()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    int v3; // r0

    object_setPanelsFromCoordinates(v0);
    sprite_load(v0, 128, *(v0 + 4), *(v0 + 5));
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *v0 |= 2u;
    v1 = *(v0 + 100);
    *(v0 + 16) = v1;
    *(v0 + 17) = v1;
    sprite_setAnimation(v0, v1);
    sprite_loadAnimationData(v0);
    v2 = *(v0 + 7);
    if ( !*(v0 + 6) )
        v2 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v2);
    v3 = object_getFlip(v0);
    sprite_setFlip(v0, v3);
    *(v0 + 8) = 4;
    sub_80C3F52();
}


// 0x80c3f52
void sub_80C3F52()
{
    int v0; // r5
    _DWORD *v1; // r4
    int v2; // r2
    int v3; // r3
    _DWORD *v4; // r0
    int v5; // r0
    int v6; // r0
    int v7; // r0
    unsigned int v8; // r0
    int v9; // r0
    int v10; // r0
    char v11; // zf

    v1 = *(v0 + 76);
    v2 = v1[14];
    v3 = v1[15];
    v4 = (v0 + 52);
    *v4 = v1[13];
    v4[1] = v2;
    v4[2] = v3;
    *(v0 + 60) += *(v0 + 108);
    if ( *(v0 + 104) )
    {
        *(v0 + 56) -= 0x10000;
        *(v0 + 60) -= 0x10000;
    }
    else
    {
        *(v0 + 56) += 0x10000;
        *(v0 + 60) += 0x10000;
    }
    if ( !*(v0 + 120) )
        *v0 = *v0 & 0xFD | **(v0 + 76) & 2;
    if ( !*(v0 + 6) )
    {
        v5 = sprite_getPallete(*(v0 + 76));
        sprite_setPallete(v5);
    }
    if ( !*(v0 + 120) )
    {
        v6 = sprite_getColorShader(*(v0 + 76));
        sprite_setColorShader(v0, v6);
    }
    v7 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v7);
    v8 = sub_8002F3E(*(v0 + 76));
    (loc_8002F02)(v8);
    if ( !*(v0 + 96) )
    {
        *(v0 + 23) = *(*(v0 + 76) + 23);
        v9 = object_getFlip(v0);
        sprite_setFlip(v0, v9);
    }
    v10 = sprite_getMosaicScalingParameters(*(v0 + 76));
    (sprite_setAlpha)(v10);
    if ( *(v0 + 112) )
        sub_80C409C();
    battle_isTimeStop();
    if ( v11 )
    {
        battle_isPaused();
        if ( v11 )
        {
            if ( !(*(*(*(v0 + 76) + 84) + 60) & 0x80110C00) && (!*(v0 + 116) || *(*(v0 + 76) + 36) > 0) )
                object_updateSprite();
        }
    }
}


// 0x80c4038
int __fastcall sub_80C4038(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+0h] [bp-1Ch]
    int v7; // [sp+4h] [bp-18h]
    int v8; // [sp+8h] [bp-14h]
    int v9; // [sp+Ch] [bp-10h]
    int v10; // [sp+10h] [bp-Ch]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    v9 = a4;
    object_spawnType1(84, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 108) = v6;
        *(v4 + 104) = v7;
        *(v4 + 100) = v8;
        *(v4 + 96) = v9;
        *(v4 + 52) = *(v10 + 52);
        *(v4 + 56) = *(v10 + 56);
        *(v4 + 60) = *(v10 + 60);
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 76) = v10;
        *v4 |= 0x14u;
        *(v4 + 112) = 0;
        *(v4 + 116) = 0;
    }
    return result;
}


// 0x80c4072
int __fastcall sub_80C4072(int result)
{
    if ( result )
        *(result + 8) = 8;
    return result;
}


// 0x80c407c
int __fastcall sub_80C407C(int result)
{
    if ( result )
        *(result + 112) = 1;
    return result;
}


// 0x80c4086
int __fastcall sub_80C4086(int result)
{
    if ( result )
        *(result + 116) = 1;
    return result;
}


// 0x80c4090
int __fastcall sub_80C4090(int result)
{
    if ( result )
        *(result + 120) = 1;
    return result;
}


// 0x80c409c
int sub_80C409C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r2
    int result; // r0

    object_setPanelsFromCoordinates(v0);
    v1 = 1572864 * (3 - *(v0 + 19));
    v2 = *(v0 + 60);
    *(v0 + 56) += v1;
    *(v0 + 60) = v2 + v1;
    ++*(v0 + 58);
    result = *(v0 + 62) + 1;
    *(v0 + 62) = result;
    return result;
}


// 0x80c40d8
int sub_80C40D8()
{
    int v0; // r5

    return (*(&off_80C40EC + *(v0 + 8)))();
}


// 0x80c40f8
signed int __noreturn sub_80C40F8()
{
    int v0; // r5
    unsigned __int8 *v1; // r0
    int v2; // r0
    int v3; // r0
    signed int result; // r0

    object_setPanelsFromCoordinates(v0);
    v1 = &dword_80C40D4 + 2 * *(v0 + 4);
    sprite_load(v0, 128, *v1, v1[1]);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    v2 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v2);
    v3 = object_getFlip(v0);
    sprite_setFlip(v0, v3);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c4146
void sub_80C4146()
{
    int v0; // r5
    _DWORD *v1; // r4
    int v2; // r2
    int v3; // r3
    _DWORD *v4; // r0
    int v5; // r0
    int v6; // r0
    int v7; // r0
    unsigned int v8; // r0
    int v9; // r0
    int v10; // r0
    signed __int16 v11; // r4
    char v12; // zf

    v1 = *(v0 + 76);
    v2 = v1[14];
    v3 = v1[15];
    v4 = (v0 + 52);
    *v4 = v1[13];
    v4[1] = v2;
    v4[2] = v3;
    *v0 = *v0 & 0xFD | **(v0 + 76) & 2;
    v5 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v5);
    v6 = sprite_getColorShader(*(v0 + 76));
    sprite_setColorShader(v0, v6);
    v7 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v7);
    v8 = sub_8002F3E(*(v0 + 76));
    (loc_8002F02)(v8);
    *(v0 + 23) = *(*(v0 + 76) + 23);
    v9 = object_getFlip(v0);
    sprite_setFlip(v0, v9);
    v10 = sprite_getMosaicScalingParameters(*(v0 + 76));
    (sprite_setAlpha)(v10);
    if ( !*(v0 + 96) )
    {
        v11 = 0;
        if ( *(*(v0 + 76) + 16) )
            v11 = 255;
        *(v0 + 62) = v11;
    }
    battle_isTimeStop();
    if ( v12 )
    {
        battle_isPaused();
        if ( v12 )
            object_updateSprite();
    }
}


// 0x80c41d8
int __fastcall sub_80C41D8(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+0h] [bp-8h]

    object_spawnType1(85, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 52) = *(v6 + 52);
        *(v4 + 56) = *(v6 + 56);
        *(v4 + 60) = *(v6 + 60);
        *(v4 + 22) = *(v6 + 22);
        *(v4 + 76) = v6;
        *v4 |= 0x14u;
    }
    return result;
}


// 0x80c4204
int __fastcall sub_80C4204(int result)
{
    if ( result )
        *(result + 8) = 8;
    return result;
}


// 0x80c4348
int sub_80C4348()
{
    int v0; // r5

    return (*(&off_80C435C + *(v0 + 8)))();
}


// 0x80c4368
void sub_80C4368()
{
    int v0; // r5
    char *v1; // r0
    int v2; // r0
    __int16 v3; // r0

    *(v0 + 84) = off_80C42D4[*(v0 + 4)];
    v1 = &byte_80C4320[2 * *(v0 + 4)];
    sprite_load(v0, 128, *v1, v1[1]);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    v2 = 0;
    if ( !*(v0 + 5) )
        v2 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v2);
    v3 = *(v0 + 7);
    *(v0 + 16) = v3;
    sprite_setAnimation(v0, v3);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    *(v0 + 8) = 4;
    sub_80C43C4();
}


// 0x80c43c4
int sub_80C43C4()
{
    int v0; // r5
    int v1; // r4
    int v2; // r2
    int v3; // r3
    _DWORD *v4; // r0
    int v5; // r0
    int v6; // r0
    int v7; // r0
    unsigned int v8; // r0
    int v9; // r0

    v1 = *(v0 + 76);
    *(v0 + 16) = *(v1 + 16) + *(v0 + 7);
    v2 = *(v1 + 56);
    v3 = *(v1 + 60);
    v4 = (v0 + 52);
    *v4 = *(v1 + 52);
    v4[1] = v2;
    v4[2] = v3;
    if ( *(v0 + 96) )
    {
        *(v0 + 60) += 0x10000;
        *(v0 + 56) += 0x10000;
    }
    else if ( *(*(v0 + 84) + *(v0 + 16) - *(v0 + 7)) )
    {
        *(v0 + 60) = *(v1 + 60);
        *(v0 + 56) = *(v1 + 56);
    }
    else
    {
        *(v0 + 60) -= 0x10000;
        *(v0 + 56) -= 0x10000;
    }
    if ( !*(v0 + 11) )
        *v0 = *v0 & 0xFD | *v1 & 2;
    if ( !*(v0 + 5) )
    {
        v5 = sprite_getPallete(*(v0 + 76));
        sprite_setPallete(v5);
    }
    v6 = sprite_getColorShader(*(v0 + 76));
    sprite_setColorShader(v0, v6);
    v7 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v7);
    v8 = sub_8002F3E(*(v0 + 76));
    (loc_8002F02)(v8);
    *(v0 + 23) = *(*(v0 + 76) + 23);
    v9 = object_getFlip(v0);
    sprite_setFlip(v0, v9);
    return (*(&off_80C4480 + *(v0 + 9)))();
}


// 0x80c4484
void sub_80C4484()
{
    int v0; // r5
    int v1; // r0
    char v2; // zf

    v1 = sprite_getMosaicScalingParameters(*(v0 + 76));
    (sprite_setAlpha)(v1);
    if ( *(v0 + 6) )
    {
        sub_801BCD0();
    }
    else
    {
        battle_isTimeStop();
        if ( v2 )
            object_updateSprite();
    }
}


// 0x80c44a8
int __fastcall sub_80C44A8(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+0h] [bp-8h]

    object_spawnType1(86, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v6;
        *(v4 + 22) = *(v6 + 22);
        *v4 |= 0x14u;
    }
    return result;
}


// 0x80c44c8
int __fastcall sub_80C44C8(int result)
{
    if ( result )
        *(result + 8) = 8;
    return result;
}


// 0x80c44d2
void __fastcall sub_80C44D2(int result)
{
    if ( result )
    {
        *(result + 17) = -1;
        sub_801BCD0();
    }
}


// 0x80c44e4
unsigned __int8 *__fastcall sub_80C44E4(unsigned __int8 *result)
{
    unsigned __int8 *v1; // r5

    if ( result )
    {
        result[11] = 1;
        v1 = result;
        result = (*result | 2);
        *v1 = result;
    }
    return result;
}


// 0x80c44fa
_BYTE *__fastcall sub_80C44FA(_BYTE *result)
{
    _BYTE *v1; // r5

    if ( result )
    {
        result[11] = 1;
        v1 = result;
        result = (*result & 0xFD);
        *v1 = result;
    }
    return result;
}


// 0x80c4510
int __fastcall sub_80C4510(int result)
{
    if ( result )
        *(result + 11) = 0;
    return result;
}


// 0x80c451a
int __fastcall sub_80C451A(int result, char a2)
{
    if ( result )
        *(result + 7) += a2;
    return result;
}


// 0x80c4526
int __fastcall sub_80C4526(int result, int a2)
{
    *(result + 96) = a2;
    return result;
}


// 0x80c4530
int sub_80C4530()
{
    int v0; // r5

    return (*(&off_80C4544 + *(v0 + 8)))();
}


// 0x80c4550
void __noreturn sub_80C4550()
{
    int v0; // r5
    int v1; // r0
    __int16 v2; // r0

    sprite_load(v0, 128, *(v0 + 4), *(v0 + 5));
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    v1 = sub_80C46CC();
    sprite_setPallete(v1);
    v2 = *(*(v0 + 76) + 16) + *(v0 + 7);
    *(v0 + 16) = v2;
    sprite_setAnimation(v0, v2);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    *(v0 + 8) = 4;
    sub_80C458C();
}


// 0x80c458c
int sub_80C458C()
{
    int v0; // r5
    int v1; // r4
    int v2; // r0
    int v3; // r2
    int v4; // r3
    _DWORD *v5; // r0
    int v6; // r0
    int v7; // r0
    int v8; // r0
    unsigned int v9; // r0
    int v10; // r0

    v1 = *(v0 + 76);
    v2 = *(v1 + 16) + *(v0 + 7);
    *(v0 + 16) = v2;
    if ( v2 != *(v0 + 17) )
    {
        sprite_setAnimation(v0, v2);
        sprite_loadAnimationData(v0);
    }
    v3 = *(v1 + 56);
    v4 = *(v1 + 60);
    if ( *(v0 + 96) )
    {
        v3 -= 0x10000;
        v4 -= 0x10000;
    }
    v5 = (v0 + 52);
    *v5 = *(v1 + 52);
    v5[1] = v3;
    v5[2] = v4;
    *v0 = *v0 & 0xFD | *v1 & 2;
    v6 = sub_80C46CC();
    sprite_setPallete(v6);
    v7 = sprite_getColorShader(*(v0 + 76));
    sprite_setColorShader(v0, v7);
    v8 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v8);
    v9 = sub_8002F3E(*(v0 + 76));
    (loc_8002F02)(v9);
    *(v0 + 23) = *(*(v0 + 76) + 23);
    v10 = object_getFlip(v0);
    sprite_setFlip(v0, v10);
    return (*(&off_80C4614 + *(v0 + 9)))();
}


// 0x80c461c
void sub_80C461C()
{
    int v0; // r5
    int v1; // r0

    v1 = sprite_getMosaicScalingParameters(*(v0 + 76));
    (sprite_setAlpha)(v1);
    if ( __CFSHR__(sub_800139A(), 2) )
    {
        if ( !*(v0 + 6) )
            *v0 &= 0xFBu;
        *(v0 + 9) = 4;
        *(v0 + 10) = 0;
        sub_80C464C();
    }
}


// 0x80c464c
void sub_80C464C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    char v3; // zf

    v1 = sprite_getMosaicScalingParameters(*(v0 + 76));
    (sprite_setAlpha)(v1);
    if ( !*(v0 + 108) || !(*(*(*(v0 + 76) + 84) + 60) & 0x100800) )
    {
        v2 = *(v0 + 6);
        if ( v2 == 1 )
        {
            object_updateSpriteTimestop();
        }
        else if ( v2 == 2 )
        {
            sub_801BCD0();
        }
        else
        {
            battle_isTimeStop();
            if ( v3 )
                object_updateSprite();
        }
    }
}


// 0x80c468c
int __fastcall sub_80C468C(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+0h] [bp-10h]
    int v7; // [sp+4h] [bp-Ch]
    int v8; // [sp+8h] [bp-8h]

    v6 = a3;
    v7 = a4;
    object_spawnType1(87, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v8;
        *(v4 + 22) = *(v8 + 22);
        *(v4 + 96) = v6;
        *(v4 + 100) = v7;
        *v4 |= 4u;
    }
    return result;
}


// 0x80c46b0
int __fastcall sub_80C46B0(int result)
{
    *(result + 8) = 8;
    return result;
}


// 0x80c46b6
int __fastcall sub_80C46B6(int result)
{
    if ( result )
        *(result + 17) = -1;
    return result;
}


// 0x80c46c0
int __fastcall sub_80C46C0(int result)
{
    *(result + 104) = 1;
    return result;
}


// 0x80c46c6
int __fastcall sub_80C46C6(int result)
{
    *(result + 108) = 1;
    return result;
}


// 0x80c46cc
int sub_80C46CC()
{
    int *v0; // r5
    int result; // r0
    signed int v2; // r4

    result = v0[25];
    if ( result == 255 )
        return sprite_getPallete(v0[19]);
    if ( v0[26] )
    {
        v2 = v0[25];
        if ( sub_8013774(result, 14) == 255 )
            v2 = 12;
        result = v2;
    }
    return result;
}


// 0x80c46fc
int sub_80C46FC()
{
    int v0; // r5

    return (*(&off_80C4710 + *(v0 + 8)))();
}


// 0x80c471c
void __noreturn sub_80C471C()
{
    int v0; // r5
    u8 v1; // r0
    int v2; // r0
    int v3; // r0

    object_setPanelsFromCoordinates(v0);
    sprite_load(v0, 128, 16, 90);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *v0 |= 2u;
    v1 = *(v0 + 4);
    *(v0 + 16) = v1;
    *(v0 + 17) = v1;
    sprite_setAnimation(v0, v1);
    sprite_loadAnimationData(v0);
    v2 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v2);
    v3 = object_getFlip(v0);
    sprite_setFlip(v0, v3);
    *(v0 + 8) = 4;
    sub_80C4766();
}


// 0x80c4766
void sub_80C4766()
{
    int v0; // r5
    _DWORD *v1; // r4
    int v2; // r2
    int v3; // r3
    _DWORD *v4; // r0
    int v5; // r0
    int v6; // r0
    int v7; // r0
    unsigned int v8; // r0
    int v9; // r0
    int v10; // r0
    char v11; // zf

    v1 = *(v0 + 76);
    v2 = v1[14];
    v3 = v1[15];
    v4 = (v0 + 52);
    *v4 = v1[13];
    v4[1] = v2;
    v4[2] = v3;
    *v0 = *v0 & 0xFD | **(v0 + 76) & 2;
    v5 = sprite_getPallete(*(v0 + 76));
    sprite_setPallete(v5);
    v6 = sprite_getColorShader(*(v0 + 76));
    sprite_setColorShader(v0, v6);
    v7 = sprite_getFinalPalette(*(v0 + 76));
    (sprite_setFinalPalette)(v7);
    v8 = sub_8002F3E(*(v0 + 76));
    (loc_8002F02)(v8);
    *(v0 + 23) = *(*(v0 + 76) + 23);
    v9 = object_getFlip(v0);
    sprite_setFlip(v0, v9);
    v10 = sprite_getMosaicScalingParameters(*(v0 + 76));
    (sprite_setAlpha)(v10);
    if ( *(*(v0 + 76) + 16) == *(v0 + 5) )
    {
        battle_isTimeStop();
        if ( v11 )
        {
            battle_isPaused();
            if ( v11 )
                object_updateSprite();
        }
    }
    else
    {
        object_freeMemory();
    }
}


// 0x80c47ec
int __fastcall sub_80C47EC(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+0h] [bp-8h]

    object_spawnType1(88, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 52) = *(v6 + 52);
        *(v4 + 56) = *(v6 + 56);
        *(v4 + 60) = *(v6 + 60);
        *(v4 + 22) = *(v6 + 22);
        *(v4 + 76) = v6;
        *(v4 + 5) = *(v6 + 16);
        *v4 |= 0x14u;
    }
    return result;
}


// 0x80c481c
int __fastcall sub_80C481C(int result)
{
    if ( result )
        *(result + 8) = 8;
    return result;
}


// 0x80c4828
int sub_80C4828()
{
    int v0; // r5

    return (*(&off_80C483C + *(v0 + 8)))();
}


// 0x80c4848
void __noreturn sub_80C4848()
{
    int v0; // r5
    int v1; // r4
    int v2; // ST04_4
    int v3; // r5
    int v4; // r0
    int v5; // ST00_4
    char *v6; // r0
    int v7; // r1
    int v8; // r2
    int v9; // r0
    int v10; // r1
    int v11; // r2
    int v12; // r3
    _DWORD *v13; // r0
    int v14; // r0
    int v15; // r0
    int v16; // r0
    int v17; // r1
    _BYTE *v18; // r0

    v1 = *(v0 + 76);
    if ( sub_800F29C(*(v1 + 40)) == 2 )
    {
        v2 = v0;
        v3 = *(v0 + 76);
        v4 = sub_8013774(2, 44);
        v5 = v4;
        v6 = sub_8013774(v4, 41);
        v0 = v2;
        sub_800FC9E(v6, v5);
    }
    else
    {
        v9 = sub_800F26C(*(v1 + 40));
        v8 = v10;
        v7 = v9;
    }
    sprite_load(v0, 128, v7, v8);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *v0 |= 2u;
    v11 = *(*(v0 + 76) + 56);
    v12 = *(*(v0 + 76) + 60);
    v13 = (v0 + 52);
    *v13 = *(*(v0 + 76) + 52);
    v13[1] = v11;
    v13[2] = v12;
    ++*(v0 + 58);
    ++*(v0 + 62);
    v14 = sub_801002C();
    sprite_setPallete(v14);
    v15 = object_getFlip(v0);
    sprite_setFlip(v0, v15);
    v16 = sub_800F29C(*(v1 + 40));
    sub_8010DF6(v16, v17);
    v18 = *(v0 + 80);
    if ( v18 )
    {
        v18[6] = 1;
        *v18 |= 0x14u;
    }
    *(v0 + 16) = 0;
    *(v0 + 17) = -1;
    *(v0 + 8) = 4;
    sub_80C48FC();
}


// 0x80c48fc
void sub_80C48FC()
{
    _BYTE *v0; // r5

    *v0 |= 2u;
    if ( !sub_800EB6C(v0[22]) )
        *v0 &= 0xFDu;
    (*(&off_80C4930 + v0[4]))();
    object_updateSpriteTimestop();
}


// 0x80c493c
int sub_80C493C()
{
    int v0; // r5

    return (*(&off_80C4950 + *(v0 + 9)))();
}


// 0x80c4958
int sub_80C4958()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int v3; // r1
    int v4; // r2
    int result; // r0

    sprite_clearFinalPalette();
    if ( !*(v0 + 11) )
    {
        sub_80E1352(*(v0 + 76), 0xFu);
        *(v0 + 32) = 0;
        *(v0 + 34) = 2;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 34);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 34) = v1;
    if ( (v1 < 0) ^ v2 )
    {
        *(v0 + 34) = *(v0 + 32) >> 2;
        sprite_forceWhitePallete();
        PlaySoundEffect(209, v3, v4);
    }
    result = *(v0 + 32) + 1;
    *(v0 + 32) = result;
    if ( result >= 120 )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80c49a4
int sub_80C49A4()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r0
    int v5; // r1

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *v0 &= 0xFDu;
        v4 = sub_800F29C(*(*(v0 + 76) + 40));
        sub_8011044(v4, v5);
        sub_80E13DC(*(v0 + 76));
        **(v0 + 96) = 0;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c49e4
int sub_80C49E4()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r0
    int v5; // r1
    int v6; // ST00_4
    int v7; // r5
    int v8; // r1
    int v9; // r2

    if ( !*(v0 + 11) )
    {
        sub_80E1352(*(v0 + 76), 0xFu);
        sub_80101C4(*(v0 + 76));
        *(v0 + 32) = 0;
        sprite_forceWhitePallete();
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        *v0 &= 0xFDu;
        v4 = sub_800F29C(*(*(v0 + 76) + 40));
        sub_8011044(v4, v5);
        sub_80E13DC(*(v0 + 76));
        v6 = v0;
        v7 = *(v0 + 76);
        sub_80101AE(480);
        PlaySoundEffect(147, v8, v9);
        **(v6 + 96) = 0;
        result = 8;
        *(v6 + 8) = 8;
    }
    return result;
}


// 0x80c4a52
int sub_80C4A52()
{
    int v0; // r5

    return (*(&off_80C4A64 + *(v0 + 9)))();
}


// 0x80c4a6c
int sub_80C4A6C()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r1
    int v4; // r2
    int v5; // r0
    unsigned __int8 v6; // vf
    int result; // r0

    sprite_clearFinalPalette();
    if ( !*(v0 + 11) )
    {
        sub_80E1352(*(v0 + 76), 0xFu);
        *(v0 + 32) = 30;
        PlaySoundEffect(119, v1, v2);
        PlaySoundEffect(209, v3, v4);
        *(v0 + 11) = 4;
    }
    v5 = *(v0 + 32);
    v6 = __OFSUB__(v5--, 1);
    *(v0 + 32) = v5;
    if ( !(((v5 < 0) ^ v6) | (v5 == 0)) )
        return sprite_forceWhitePallete();
    *(v0 + 9) = 4;
    result = 0;
    *(v0 + 10) = 0;
    return result;
}


// 0x80c4aac
int sub_80C4AAC()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r0
    int v5; // r1

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *v0 &= 0xFDu;
        v4 = sub_800F29C(*(*(v0 + 76) + 40));
        sub_8011044(v4, v5);
        sub_80E13DC(*(v0 + 76));
        **(v0 + 96) = 0;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c4aec
int __fastcall sub_80C4AEC(_BYTE *a1, int a2, int a3, int a4)
{
    int v4; // r5
    bool v5; // zf
    int result; // r0
    int v7; // r5
    int v8; // ST04_4
    u32 v9; // r1
    _BYTE *v10; // [sp+0h] [bp-Ch]
    int v11; // [sp+4h] [bp-8h]

    v10 = a1;
    object_spawnType1(93, a2, a3, a4);
    result = v4;
    v5 = v4 == 0;
    v7 = v11;
    if ( !v5 )
    {
        *(result + 96) = v10;
        *v10 = 1;
        *(result + 22) = *(v11 + 22);
        v8 = result;
        v9 = sub_80103BC(*(v7 + 22));
        result = v8;
        *(v8 + 76) = v9;
    }
    return result;
}


// 0x80c4b18
void sub_80C4B18()
{
    int v0; // r5
    char v1; // zf

    (*(&off_80C4B3C + *(v0 + 8)))();
    battle_isTimeStop();
    if ( v1 )
    {
        battle_isPaused();
        if ( v1 )
            sub_801BC64();
    }
}


// 0x80c4b48
void __noreturn sub_80C4B48()
{
    int v0; // r5
    u8 v1; // r1

    sprite_load(v0, 128, 20, 22);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *v0 |= 2u;
    sub_80C4C52();
    *(v0 + 16) = v1;
    *(v0 + 17) = v1;
    sprite_setAnimation(v0, v1);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    *(v0 + 8) = 4;
    sub_80C4B84();
}


// 0x80c4b84
int sub_80C4B84()
{
    int v0; // r5
    char v1; // r1
    int v2; // r5
    int v3; // r4
    int v4; // r2
    int v5; // r3
    _DWORD *v6; // r0
    int v7; // r0
    int result; // r0
    int v9; // [sp-4h] [bp-8h]

    sub_80C4C52();
    *(v0 + 16) = v1;
    *v0 |= 2u;
    if ( sub_800EB6C(*(v0 + 22)) )
    {
        *v0 |= 2u;
        if ( !*(v0 + 12) )
            *v0 &= 0xFDu;
    }
    else
    {
        *v0 &= 0xFDu;
    }
    nullsub_10();
    v9 = v0;
    v2 = *(v0 + 76);
    if ( object_getFlag() & 4 )
        *v9 &= 0xFDu;
    v3 = *(v9 + 76);
    v4 = *(v3 + 56);
    v5 = *(v3 + 60);
    v6 = (v9 + 52);
    *v6 = *(v3 + 52);
    v6[1] = v4;
    v6[2] = v5;
    *(v9 + 23) = *(v3 + 23);
    v7 = object_getFlip(v9);
    sprite_setFlip(v9, v7);
    if ( **(v9 + 100) )
    {
        result = sub_8015B54(*(v9 + 22));
        if ( result == 2 )
            return result;
        **(v9 + 100) = 0;
    }
    return object_freeMemory();
}


// 0x80c4c12
int __fastcall sub_80C4C12(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int *v5; // r7
    int result; // r0
    int v7; // [sp+0h] [bp-8h]

    object_spawnType1(94, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 22) = *(v7 + 22);
        *(v4 + 76) = v7;
        *(v4 + 100) = v5;
        *v5 = v4;
        *(v4 + 12) = 1;
        *v4 |= 4u;
    }
    return result;
}


// 0x80c4c3a
int __fastcall sub_80C4C3A(int result)
{
    *(result + 8) = 8;
    **(result + 100) = 0;
    return result;
}


// 0x80c4c46
int __fastcall sub_80C4C46(int result)
{
    *(result + 12) = 0;
    return result;
}


// 0x80c4c4c
int __fastcall sub_80C4C4C(int result)
{
    *(result + 12) = 1;
    return result;
}


// 0x80c4c52
int sub_80C4C52()
{
    int v0; // r5
    int result; // r0
    signed int v2; // r1

    result = sub_800F29C(*(*(v0 + 76) + 40));
    if ( v2 >= 35 )
        result = v2;
    return result;
}


// 0x80c4e58
void sub_80C4E58()
{
    int v0; // r5

    (*(&off_80C4E70 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c4e7c
int sub_80C4E7C()
{
    int v0; // r5
    _BYTE *v1; // r7
    int v2; // r1
    _BYTE *v3; // r0
    int v5; // r0
    int v6; // r1

    v1 = &off_80C4C78 + 12 * *(v0 + 4);
    *(v0 + 76) = v1;
    v2 = v1[5];
    if ( v2 != 255 )
    {
        sprite_load(v0, 128, v2, v1[6]);
        sprite_loadAnimationData(v0);
        sprite_noShadow(v0);
        *v0 |= 2u;
        *(v0 + 16) = v1[7];
        *(v0 + 17) = -1;
    }
    *(v0 + 14) = v1[3];
    object_setCoordinatesFromPanels(v0);
    sub_80C5090();
    *(v0 + 34) = 1;
    v3 = object_createCollisionData();
    if ( v3 )
    {
        object_setupCollisionData(v3, *v1, v1[1], v1[2]);
        object_setCollisionHitEffect(v1[4]);
        if ( v1[9] )
            object_setCollisionStatusEffect1(v1[9]);
        v5 = v1[10];
        v6 = v1[11];
        if ( v1[10] )
            v5 = sub_801A4D0(v5, v6);
        object_presentCollisionData(v5, v6);
        *(v0 + 8) = 4;
        sub_80C4F02();
    }
    return object_freeMemory();
}


// 0x80c4f02
void __noreturn sub_80C4F02()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r0
    int v8; // r1
    int v9; // r2
    char v10; // zf
    signed int v11; // r2
    signed int v12; // r2
    signed int v13; // r2
    int v14; // [sp-8h] [bp-Ch]
    int v15; // [sp-8h] [bp-Ch]
    int v16; // [sp-8h] [bp-Ch]
    int v17; // [sp-4h] [bp-8h]
    int v18; // [sp-4h] [bp-8h]
    int v19; // [sp-4h] [bp-8h]

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
        goto LABEL_31;
    v1 = *(*(v0 + 84) + 112);
    if ( v1 )
    {
        if ( *(v0 + 4) == 12 )
            sub_80C5050();
        v7 = *(v0 + 18);
        v8 = *(v0 + 19);
        v9 = *(v0 + 4);
        if ( v9 == 7 || v9 == 21 )
            object_crackPanel(v7, v8);
        if ( v9 == 22 )
            object_breakPanel_dup2(v7, v8);
        if ( v9 == 34 )
        {
            v14 = *(v0 + 18);
            v17 = *(v0 + 19);
            object_isPanelSolid(v7, v8);
            if ( !v10 )
            {
                v11 = *(*(v0 + 76) + 8);
                if ( *(v0 + 22) )
                    v11 = 12;
                object_setPanelType(v14, v17, v11);
            }
        }
        else if ( v9 == 36 )
        {
            v15 = *(v0 + 18);
            v18 = *(v0 + 19);
            object_isPanelSolid(v7, v8);
            if ( !v10 )
            {
                v12 = *(*(v0 + 76) + 8);
                if ( *(v0 + 22) )
                    v12 = 11;
                object_setPanelType(v15, v18, v12);
            }
        }
        else
        {
            v16 = *(v0 + 18);
            v19 = *(v0 + 19);
            object_isPanelSolid(v7, v8);
            if ( !v10 )
            {
                v13 = *(*(v0 + 76) + 8);
                if ( v13 != 255 )
                    object_setPanelType(v16, v19, v13);
            }
        }
        goto LABEL_31;
    }
    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = *(v0 + 34);
        *(v0 + 11) = 4;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    v4 = v2 - 1;
    *(v0 + 32) = v4;
    if ( (v4 < 0) ^ v3 )
    {
        v5 = object_getFrontDirection(v0) + *(v0 + 18);
        *(v0 + 18) = v5;
        v6 = *(v0 + 19) + *(v0 + 5);
        *(v0 + 19) = v6;
        *(v0 + 5) = 0;
        if ( object_isValidPanel(v5, v6) )
        {
            object_setCoordinatesFromPanels(v0);
            sub_80C5090();
            object_updateCollisionPanels(v0);
            v4 = 0;
            *(v0 + 11) = 0;
            goto LABEL_32;
        }
        if ( *(v0 + 4) == 12 )
            sub_80C5014();
LABEL_31:
        object_clearCollisionRegion();
        v4 = 8;
        *(v0 + 8) = 8;
    }
LABEL_32:
    object_presentCollisionData(v4, v1);
}


// 0x80c4ffe
int __fastcall sub_80C4FFE(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-18h]
    char v7; // [sp+4h] [bp-14h]
    char v8; // [sp+8h] [bp-10h]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(0, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, v8);
    return result;
}


// 0x80c5014
int sub_80C5014()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // ST00_4
    int v4; // ST04_4
    int v5; // r4
    int v6; // r6

    camera_initShakeEffect_80302a8(3, 40);
    PlaySoundEffect(195, v1, v2);
    v3 = *(v0 + 18) - 2 * object_getFrontDirection(v0);
    v4 = *(v0 + 19);
    v5 = *(v0 + 22);
    sub_801BD3C(v3, v4, 0, 17);
    v6 = *(v0 + 44);
    return object_spawnCollisionRegion(v3, v4, *(v0 + 14), 0);
}


// 0x80c5050
int sub_80C5050()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    char v3; // ST00_1
    int v4; // ST04_4
    int v5; // r4
    int v6; // r6

    camera_initShakeEffect_80302a8(3, 40);
    PlaySoundEffect(195, v1, v2);
    v3 = *(v0 + 18);
    v4 = *(v0 + 19);
    v5 = *(v0 + 22);
    sub_801BD3C(*(v0 + 18), v4, 0, 15);
    v6 = *(v0 + 44);
    return object_spawnCollisionRegion(v3, v4, *(v0 + 14), 0);
}


// 0x80c5090
int sub_80C5090()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 4);
    if ( result == 29 )
    {
        *(v0 + 56) += 0x10000;
        result = *(v0 + 60) + 0x10000;
        *(v0 + 60) = result;
    }
    return result;
}


// 0x80c50b8
void sub_80C50B8()
{
    int v0; // r5

    (*(&off_80C50D0 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c50dc
int sub_80C50DC()
{
    int v0; // r5
    _BYTE *v1; // r0
    int v3; // r0
    int v4; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 34) = 1;
    v1 = object_createCollisionData();
    if ( v1 )
    {
        object_setupCollisionData(v1, 4, 5, *(v0 + 5));
        object_setCollisionHitEffect(13);
        v3 = sub_80C518C();
        object_presentCollisionData(v3, v4);
        *(v0 + 8) = 4;
        sub_80C5116();
    }
    return object_freeMemory();
}


// 0x80c5116
void __noreturn sub_80C5116()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // r0
    int v5; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
        goto LABEL_9;
    v1 = *(*(v0 + 84) + 112);
    if ( v1 )
        goto LABEL_9;
    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = *(v0 + 34);
        *(v0 + 11) = 4;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    v4 = v2 - 1;
    *(v0 + 32) = v4;
    if ( (v4 < 0) ^ v3 )
    {
        v5 = object_getFrontDirection(v0) + *(v0 + 18);
        *(v0 + 18) = v5;
        if ( object_isValidPanel(v5, *(v0 + 19)) )
        {
            object_setCoordinatesFromPanels(v0);
            object_updateCollisionPanels(v0);
            v4 = 0;
            *(v0 + 11) = 0;
            goto LABEL_10;
        }
LABEL_9:
        object_clearCollisionRegion();
        v4 = 8;
        *(v0 + 8) = 8;
    }
LABEL_10:
    object_presentCollisionData(v4, v1);
}


// 0x80c5176
int __fastcall sub_80C5176(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    char v8; // [sp+8h] [bp-Ch]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(1, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, v8);
    return result;
}


// 0x80c518c
int sub_80C518C()
{
    int v0; // r5
    int result; // r0

    result = *&byte_80C50AC[4 * *(v0 + 4)];
    *(*(v0 + 84) + 100) = result;
    return result;
}


// 0x80c51ac
int sub_80C51AC()
{
    int v0; // r5

    return (*(&off_80C51C0 + *(v0 + 8)))();
}


// 0x80c51cc
void __noreturn sub_80C51CC()
{
    int v0; // r5
    int v1; // r0
    char *v2; // r7
    _BYTE *v3; // r0
    char v4; // t1
    int v5; // r0
    int v6; // r1
    int v7; // r1
    int v8; // r2
    int v9; // [sp+0h] [bp-8h]

    *v0 |= 2u;
    sprite_load(v0, 128, 12, 0);
    *(v0 + 16) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    sprite_noShadow(v0);
    object_setCoordinatesFromPanels(v0);
    v1 = object_getFrontDirection(v0);
    v2 = &byte_80C51A0[3 * *(v0 + 4)];
    *(v0 + 96) = v2;
    *(v0 + 64) = v1 * *v2 << 16;
    v3 = object_createCollisionData();
    if ( !v3 )
    {
        object_freeMemory();
        JUMPOUT(__CS__, v9);
    }
    v4 = *(v0 + 4);
    object_setupCollisionData(v3, 4, 5, 0);
    if ( v2[1] )
        object_setCollisionStatusEffect1(v2[1]);
    v5 = sub_801A146();
    object_presentCollisionData(v5, v6);
    PlaySoundEffect(v2[2], v7, v8);
    *(v0 + 8) = 4;
}


// 0x80c524c
void __noreturn sub_80C524C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( *(*(v0 + 84) + 112)
        || battle_isBattleOver()
        || (*(v0 + 52) += *(v0 + 64),
                object_setPanelsFromCoordinates(v0),
                object_updateCollisionPanels(v0),
                (v1 = object_isCurrentPanelValid()) == 0) )
    {
        object_clearCollisionRegion();
        *v0 &= 0xFDu;
        *(v0 + 8) = 8;
    }
    else
    {
        object_presentCollisionData(v1, v2);
        object_updateSprite();
    }
}


// 0x80c529a
int __fastcall sub_80C529A(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    char v8; // [sp+8h] [bp-Ch]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(2, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, v8);
    return result;
}


// 0x80c52b0
int sub_80C52B0()
{
    int v0; // r5

    return (*(&off_80C52C4 + *(v0 + 8)))();
}


// 0x80c52d0
int sub_80C52D0()
{
    int v0; // r5
    int v1; // r1
    int v2; // r1
    _BYTE *v3; // r0
    _BYTE *v4; // r7
    int v6; // r1
    int v7; // r0
    int v8; // r0

    if ( object_isCurrentPanelValid() )
    {
        v1 = *(v0 + 19);
        *(v0 + 52) = object_getCoordinatesForPanels(*(v0 + 18));
        *(v0 + 56) = v2;
        v3 = object_createCollisionData();
        v4 = v3;
        if ( v3 )
        {
            object_setupCollisionData(v3, *(v0 + 7), *(v0 + 6), *(v0 + 96));
            v4[1] = *(v0 + 4);
            object_setCollisionHitEffect(*(v0 + 5));
            v7 = *(v0 + 100);
            if ( v7 )
                object_setCollisionStatusEffect1(v7);
            v8 = *(v0 + 104);
            if ( v8 )
                v8 = sub_801A4D0(v8, *(v0 + 108));
            object_presentCollisionData(v8, v6);
            *(v0 + 8) = 4;
            sub_80C532E();
        }
    }
    return object_freeMemory();
}


// 0x80c532e
void __noreturn sub_80C532E()
{
    int v0; // r5
    int v1; // r0
    int *v2; // r1
    int v3; // r0
    unsigned __int8 v4; // vf
    int v5; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    v1 = *(*(v0 + 84) + 112);
    v2 = *(v0 + 112);
    if ( v2 )
        *v2 = v1 & 0xC000000;
    if ( v1 || (v3 = *(v0 + 32), v4 = __OFSUB__(v3, 1), v5 = v3 - 1, *(v0 + 32) = v5, ((v5 < 0) ^ v4) | (v5 == 0)) )
    {
        object_clearCollisionRegion();
        object_freeCollisionData(*(v0 + 84));
        object_freeMemory();
    }
    else
    {
        object_presentCollisionData(v5, v2);
    }
}


// 0x80c536a
int __fastcall object_spawnCollisionRegion(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    unsigned int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(3, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 96) = v6;
        *(v4 + 100) = v6 >> 8;
        *(v4 + 104) = (v6 >> 16) & 0xFF;
        *(v4 + 108) = v6 >> 24;
        *(v4 + 112) = 0;
    }
    return result;
}


// 0x80c53a6
_BYTE *__fastcall sub_80C53A6(char a1, int a2, int a3, int a4)
{
    _BYTE *result; // r0

    result = object_spawnCollisionRegion(a1, a2, a3, a4);
    if ( result )
        *result |= 0x10u;
    return result;
}


// 0x80c53c0
void sub_80C53C0()
{
    int v0; // r5

    (*(&off_80C53D8 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c53e4
int sub_80C53E4()
{
    _BYTE *v0; // r5

    if ( v0[6] )
        object_crackPanel(v0[18], v0[19]);
    return object_genericDestroy();
}


// 0x80c53fa
signed int sub_80C53FA()
{
    int v0; // r5
    u8 v1; // r0
    int v2; // r0
    __int16 v3; // r0
    int v4; // r1
    int v5; // r0
    _BYTE *v6; // r0
    _BYTE *v7; // r7
    int v8; // r0
    int v9; // r1
    signed int result; // r0

    if ( !object_isCurrentPanelValid() )
        return object_freeMemory();
    if ( *(v0 + 5) & 0x80 )
    {
        *(v0 + 5) &= 0x7Fu;
        *(v0 + 100) = 128;
    }
    sprite_load(v0, 128, 12, 14);
    sprite_noShadow(v0);
    *v0 |= 2u;
    v1 = byte_80C54D0[*(v0 + 7) + 12];
    *(v0 + 16) = v1;
    *(v0 + 17) = v1;
    sprite_setAnimation(v0, v1);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v2 = object_getFlip(v0);
    sprite_setFlip(v0, v2);
    object_setCoordinatesFromPanels(v0);
    v3 = object_getFrontDirection(v0);
    if ( *(v0 + 7) == 1 )
    {
        *(v0 + 52) = *(v0 + 52);
    }
    else
    {
        *(v0 + 54) -= 40 * v3;
        *(v0 + 52) += sub_8018810(*(*(v0 + 76) + 40), 18, *(v0 + 22), *(v0 + 23)) << 16;
        *(v0 + 60) += v4 << 16;
    }
    v5 = *(v0 + 5) << 16;
    *(v0 + 56) += v5;
    *(v0 + 60) += v5;
    v6 = object_createCollisionData();
    v7 = v6;
    if ( !v6 )
        return object_freeMemory();
    object_setupCollisionData(v6, 10, 5, 3);
    v7[1] = 1;
    v8 = object_setCollisionHitEffect(1);
    object_presentCollisionData(v8, v9);
    *(v0 + 32) = 4;
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c54e0
char *__noreturn sub_80C54E0()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    __int64 v3; // r0
    char *result; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        result = &dword_8;
        *(v0 + 8) = 8;
    }
    else
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        v1 = (*(&off_80C551C + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
        LODWORD(v3) = *(v0 + 18);
        HIDWORD(v3) = *(v0 + 19);
        result = object_highlightPanel(v3);
    }
    return result;
}


// 0x80c552a
int sub_80C552A()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    char v3; // r0
    char v4; // r0
    int v5; // r1
    int v6; // r1
    char v7; // r0
    int result; // r0

    if ( !**(v0 + 96) )
        goto LABEL_10;
    v1 = *(v0 + 32) - 1;
    *(v0 + 32) = v1;
    if ( !v1 )
    {
        v2 = *(v0 + 5);
        if ( *(v0 + 5) )
        {
            *(v0 + 5) = v2 - 1;
            v3 = object_getFrontDirection(v0);
            sub_80C5590(v3 + *(v0 + 18), *(v0 + 19));
            if ( *(v0 + 100) )
            {
                sub_80C5590(v4, v5 - 1);
                sub_80C5590(v7, v6 + 2);
            }
        }
    }
    result = *(v0 + 4) - 1;
    *(v0 + 4) = result;
    if ( !result )
    {
LABEL_10:
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c5578
int __fastcall sub_80C5578(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r7
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(4, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 96) = v5;
        result = sub_801155A(v4, v7, v8, v9);
    }
    return result;
}


// 0x80c5590
void __fastcall sub_80C5590(char a1, int a2)
{
    int v2; // r5
    int v3; // r4
    int v4; // r6
    int v5; // r7

    v3 = *(v2 + 4);
    v4 = *(v2 + 44);
    v5 = *(v2 + 96);
    *(sub_80C5578(a1, a2, *(v2 + 14), 0) + 76) = *(v2 + 76);
}


// 0x80c55b0
void sub_80C55B0()
{
    int v0; // r5

    (*(&off_80C55C8 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c55d4
int sub_80C55D4()
{
    int v0; // r5

    *(**(v0 + 76) - 1) = *(v0 + 76);
    return object_genericDestroy();
}


// 0x80c55e4
int __noreturn sub_80C55E4()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v4; // r0
    int v5; // r1

    sprite_load(v0, 128, 16, 28);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    object_setPanelsFromCoordinates(v0);
    v2 = object_createCollisionData();
    if ( v2 )
    {
        object_setupCollisionData(v2, 4, 5, 3);
        object_setCollisionHitEffect(255);
        v4 = object_clearCollisionRegion();
        object_presentCollisionData(v4, v5);
        *(**(v0 + 76) + 1) = *(v0 + 76);
        *(v0 + 8) = 4;
        sub_80C5654();
    }
    return object_freeMemory();
}


// 0x80c5654
void __noreturn sub_80C5654()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
        *v0 &= 0xFDu;
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        v1 = battle_isTimeStop();
        if ( v3 )
        {
            if ( *(*(v0 + 84) + 112) )
                object_clearCollisionRegion();
            v1 = (*(&off_80C56AC + *(v0 + 9)))();
        }
        object_presentCollisionData(v1, v2);
    }
}


// 0x80c56b4
char *sub_80C56B4()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r4
    int v4; // r1
    int v5; // r1
    int v6; // r2
    int v7; // r0
    unsigned __int8 v8; // vf
    int v9; // r1
    unsigned int v10; // r0
    unsigned __int8 v11; // cf
    char *result; // r0
    __int64 v13; // r0

    if ( !*(v0 + 11) )
    {
        v1 = *(v0 + 7);
        v2 = object_getCoordinatesForPanels(*(v0 + 6));
        v3 = *(v0 + 5);
        *(v0 + 64) = sub_8001330((v0 + 52), v2, v4);
        *(v0 + 68) = v5;
        *(v0 + 72) = v6;
        *(v0 + 32) = *(v0 + 5);
        *(v0 + 11) = 4;
    }
    v7 = *(v0 + 32);
    v8 = __OFSUB__(v7--, 1);
    *(v0 + 32) = v7;
    if ( (v7 < 0) ^ v8 )
    {
        object_setCoordinatesFromPanels(v0);
        *(v0 + 60) = 0;
        object_isCurrentPanelSolid();
    }
    *(v0 + 52) += *(v0 + 64);
    *(v0 + 56) += *(v0 + 68);
    v9 = *(v0 + 72);
    *(v0 + 60) += v9;
    *(v0 + 72) = v9 - 24576;
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    v10 = *(v0 + 32);
    v11 = __CFSHR__(v10, 3);
    result = (v10 >> 3);
    if ( v11 )
    {
        LODWORD(v13) = *(v0 + 6);
        HIDWORD(v13) = *(v0 + 7);
        result = object_highlightPanel(v13);
    }
    return result;
}


// 0x80c5760
int __fastcall sub_80C5760(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    unsigned __int8 v5; // vf
    int v6; // r0
    int result; // r0

    v4 = *(v3 + 34);
    v5 = __OFSUB__(v4--, 1);
    *(v3 + 34) = v4;
    if ( (v4 < 0) ^ v5 )
    {
        PlaySoundEffect(112, a2, a3);
        *(v3 + 34) = 8;
    }
    v6 = *(v3 + 32);
    v5 = __OFSUB__(v6--, 1);
    *(v3 + 32) = v6;
    if ( (v6 < 0) ^ v5 )
    {
        SpawnT4BattleObjectWithId0(v3, v3 + 64, *(v3 + 52), *(v3 + 56), *(v3 + 60));
        *(v3 + 32) = 26;
    }
    result = *(v3 + 4) - 1;
    *(v3 + 4) = result;
    if ( !result )
    {
        object_clearCollisionRegion();
        result = 8;
        *(v3 + 8) = 8;
    }
    return result;
}


// 0x80c579e
int __fastcall sub_80C579E(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    int v8; // [sp+0h] [bp-8h]

    object_spawnType3(5, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 22) = *(v8 + 22);
        *(v4 + 14) = 4;
        *(v4 + 44) = v5;
        *(v4 + 76) = v6;
    }
    return result;
}


// 0x80c57c0
void sub_80C57C0()
{
    int v0; // r5

    (*(&off_80C57D8 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c57e4
int sub_80C57E4()
{
    int v0; // r5

    *(**(v0 + 76) - 1) = *(v0 + 76);
    return object_genericDestroy();
}


// 0x80c57f4
void sub_80C57F4()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v3; // r0
    int v4; // r1
    int v5; // r0
    char *v6; // r1
    u8 v7; // r0
    int v8; // [sp+0h] [bp-8h]

    sprite_load(v0, 128, 16, 23);
    sprite_noShadow(v0);
    *v0 |= 2u;
    sprite_setPallete(4 * *(v0 + 4));
    object_setPanelsFromCoordinates(v0);
    v1 = *(v0 + 22) ^ *(v0 + 23);
    if ( *(v0 + 18) - *(v0 + 6) < 0 )
        v1 ^= 1u;
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
    {
        object_freeMemory();
        JUMPOUT(__CS__, v8);
    }
    object_setupCollisionData(v2, 10, 5, 3);
    object_setCollisionHitEffect(2);
    v3 = object_clearCollisionRegion();
    object_presentCollisionData(v3, v4);
    *(v0 + 34) = 15;
    v5 = *(v0 + 18) - *(v0 + 6);
    if ( v5 < 0 )
        v5 = *(v0 + 6) - *(v0 + 18);
    v6 = byte_80C5A12;
    if ( v5 > 1 )
        v6 = byte_80C5A18;
    *(v0 + 96) = v6;
    v7 = *v6;
    *(v0 + 16) = *v6;
    *(v0 + 17) = v7;
    sprite_setAnimation(v0, v7);
    sprite_loadAnimationData(v0);
    *(v0 + 8) = 4;
    sub_80C5886();
}


// 0x80c5886
void __noreturn sub_80C5886()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
    }
    else
    {
        v1 = battle_isTimeStop();
        if ( !v3 )
            goto LABEL_6;
        if ( !*(*(v0 + 84) + 112) )
        {
            v1 = (*(&off_80C58D8 + *(v0 + 9)))();
LABEL_6:
            object_presentCollisionData(v1, v2);
            return;
        }
    }
    *v0 &= 0xFDu;
    object_clearCollisionRegion();
    *(v0 + 8) = 8;
}


// 0x80c58e0
char *sub_80C58E0()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r1
    int v4; // r1
    int v5; // r2
    int v6; // r1
    _BYTE *v7; // r1
    int v8; // r0
    char v9; // r0
    int v10; // r0
    unsigned __int8 v11; // vf
    int v12; // r1
    int v13; // r2
    unsigned int v14; // r0
    unsigned __int8 v15; // cf
    char *result; // r0
    __int64 v17; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 1;
        v1 = *(v0 + 7);
        v2 = object_getCoordinatesForPanels(*(v0 + 6));
        *(v0 + 32) = 48;
        *(v0 + 64) = sub_8001330((v0 + 52), v2, v3);
        *(v0 + 68) = v4;
        *(v0 + 72) = v5;
    }
    *(v0 + 52) += *(v0 + 64);
    *(v0 + 56) += *(v0 + 68);
    v6 = *(v0 + 72);
    *(v0 + 60) += v6;
    *(v0 + 72) = v6 - 20480;
    v7 = *(v0 + 96);
    v8 = *(v0 + 32);
    switch ( v8 )
    {
        case 40:
            v9 = v7[1];
            break;
        case 32:
            v9 = v7[2];
            break;
        case 24:
            v9 = v7[3];
            break;
        case 16:
            v9 = v7[4];
            break;
        case 4:
            v9 = v7[5];
            break;
        default:
            goto LABEL_14;
    }
    *(v0 + 16) = v9;
LABEL_14:
    v10 = *(v0 + 32);
    v11 = __OFSUB__(v10--, 1);
    *(v0 + 32) = v10;
    if ( (v10 < 0) ^ v11 )
    {
        *(v0 + 18) = *(v0 + 6);
        *(v0 + 19) = *(v0 + 7);
        *(v0 + 60) = 196608;
        object_setCoordinatesFromPanels(v0);
        object_updateCollisionPanels(v0);
        object_setCollisionRegion(1);
        *(v0 + 16) = 5;
        PlaySoundEffect(464, v12, v13);
        *(v0 + 9) = 4;
        *(v0 + 10) = 0;
    }
    v14 = *(v0 + 32);
    v15 = __CFSHR__(v14, 3);
    result = (v14 >> 3);
    if ( v15 )
    {
        LODWORD(v17) = *(v0 + 6);
        HIDWORD(v17) = *(v0 + 7);
        result = object_highlightPanel(v17);
    }
    return result;
}


// 0x80c59b6
int sub_80C59B6()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 1;
        object_clearCollisionRegion();
        *(v0 + 32) = 26;
    }
    if ( *(v0 + 32) <= 8 )
    {
        *v0 &= 0xFDu;
        if ( *(v0 + 32) & 2 )
            *v0 |= 2u;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c59f6
int __fastcall sub_80C59F6(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    int v7; // [sp+0h] [bp-8h]

    object_spawnType3(6, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 22) = *(v7 + 22);
        *(v4 + 14) = 2;
        *(v4 + 44) = v5;
    }
    return result;
}


// 0x80c5a34
void sub_80C5A34()
{
    int v0; // r5

    (*(&off_80C5A4C + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c5a58
int sub_80C5A58()
{
    int v0; // r5
    __int16 v1; // r0
    _BYTE *v2; // r0
    int v4; // r0
    int v5; // r1

    if ( object_isCurrentPanelValid() )
    {
        sprite_load(v0, 128, 16, 36);
        sprite_noShadow(v0);
        *v0 |= 2u;
        *(v0 + 16) = 0;
        *(v0 + 17) = 0;
        sprite_setAnimation(v0, 0);
        sprite_loadAnimationData(v0);
        sprite_setPallete(0);
        v1 = *(v0 + 4) + 40;
        *(v0 + 4) = v1;
        *(v0 + 32) = v1;
        object_setCoordinatesFromPanels(v0);
        *(v0 + 56) -= 0x10000;
        *(v0 + 60) = -65536;
        v2 = object_createCollisionData();
        if ( v2 )
        {
            object_setupCollisionData(v2, 72, 42, 1);
            object_setCollisionHitEffect(1);
            v4 = object_clearCollisionRegion();
            object_presentCollisionData(v4, v5);
            *(v0 + 8) = 4;
            sub_80C5AD4();
        }
    }
    return object_freeMemory();
}


// 0x80c5ad4
void __noreturn sub_80C5AD4()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int v3; // r0
    int v4; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
        goto LABEL_10;
    if ( object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & 0x1000 )
    {
        if ( !*(*(v0 + 84) + 112) )
            goto LABEL_8;
    }
    else
    {
        if ( !*(*(v0 + 84) + 1) )
            goto LABEL_8;
        *(v0 + 32) = 3;
    }
    object_clearCollisionRegion();
    if ( object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & 0x3800000 )
        *v0 &= 0xFDu;
LABEL_8:
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( ((v1 < 0) ^ v2) | (v1 == 0) )
    {
LABEL_10:
        object_clearCollisionRegion();
        v3 = 8;
        *(v0 + 8) = 8;
        goto LABEL_11;
    }
    v3 = sub_80C5B40();
LABEL_11:
    object_presentCollisionData(v3, v4);
}


// 0x80c5b40
signed int sub_80C5B40()
{
    int v0; // r5
    signed int result; // r0

    result = *(v0 + 32);
    if ( result == *(v0 + 4) - 40 )
    {
        object_setCollisionRegion(1);
        *(v0 + 56) += 0x10000;
        *(v0 + 60) = 0;
        result = 1;
    }
    else if ( result == *(v0 + 4) - 42 )
    {
        result = 2;
    }
    else
    {
        if ( result != 2 )
            return result;
        result = 1;
    }
    *(v0 + 16) = result;
    return result;
}


// 0x80c5b76
int __fastcall sub_80C5B76(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(7, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
    }
    return result;
}


// 0x80c5bb0
void sub_80C5BB0()
{
    int v0; // r5

    (*(&off_80C5BC8 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c5bd4
int __noreturn sub_80C5BD4()
{
    int v0; // r5
    char v1; // r0
    char *v2; // r4
    _BYTE *v3; // r0
    int v5; // r0
    int v6; // r1

    sprite_load(v0, 128, 12, 2);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *v0 |= 2u;
    v1 = 1;
    if ( *(v0 + 4) == 2 )
        v1 = 3;
    *(v0 + 16) = v1;
    *(v0 + 17) = -1;
    v2 = &byte_80C5BA0[4 * *(v0 + 4)];
    *(v0 + 96) = v2;
    sprite_setPallete(v2[3]);
    v3 = object_createCollisionData();
    if ( v3 )
    {
        object_setupCollisionData(v3, *v2, v2[1], v2[2]);
        v5 = object_setCollisionHitEffect(255);
        object_presentCollisionData(v5, v6);
        *(v0 + 8) = 4;
        sub_80C5C40();
    }
    return object_freeMemory();
}


// 0x80c5c40
void __noreturn sub_80C5C40()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
    }
    else
    {
        v1 = battle_isTimeStop();
        if ( !v3 )
            goto LABEL_6;
        if ( !*(*(v0 + 84) + 112) )
        {
            v1 = (*(&off_80C5C94 + *(v0 + 9)))();
LABEL_6:
            object_presentCollisionData(v1, v2);
            return;
        }
    }
    *v0 &= 0xFDu;
    object_clearCollisionRegion();
    *(v0 + 8) = 8;
}


// 0x80c5c9c
int sub_80C5C9C()
{
    int v0; // r5
    int v1; // r9
    _DWORD *v2; // r7
    _DWORD *v3; // r9
    int v4; // r1
    int v5; // r6
    int v6; // r2
    int v7; // r0
    int v8; // r0
    int v9; // r1
    int v10; // r7
    int v12; // [sp-4h] [bp-14h]

    v12 = v1;
    if ( !*(v0 + 11) )
    {
        v2 = (v0 + 64);
        *v2 = 190054 * object_getFrontDirection(v0);
        v2[1] = -10240;
        v2[2] = 132710;
        *(v0 + 32) = 40;
        *(v0 + 11) = 4;
    }
    v3 = (v0 + 52);
    v4 = *(v0 + 56);
    v5 = *(v0 + 72) + *(v0 + 68);
    v6 = *(v0 + 60) + v5;
    *v3 = *(v0 + 52) + *(v0 + 64);
    v3[1] = v4;
    v3[2] = v6;
    *(v0 + 72) = v5;
    v7 = *(v0 + 32) - 1;
    *(v0 + 32) = v7;
    if ( !v7 )
    {
        *v0 &= 0xFDu;
        v8 = sub_800E24C();
        *(v0 + 18) = v8;
        *(v0 + 19) = v9;
        v10 = *(v0 + 84);
        *(v10 + 10) = v8;
        *(v10 + 11) = v9;
        if ( object_isValidPanel(v8, v9) )
            object_isCurrentPanelSolid();
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
        *v0 &= 0xFDu;
    }
    return v12;
}


// 0x80c5d84
signed int sub_80C5D84()
{
    int v0; // r5
    int v1; // r0
    int v2; // r6
    int v3; // r6
    signed int result; // r0

    object_clearCollisionRegion();
    v1 = *(v0 + 4);
    if ( v1 == 1 )
    {
        v2 = *(v0 + 44);
        sub_80C6018(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
    }
    else if ( v1 == 2 )
    {
        v3 = *(v0 + 44);
        sub_80C68B0(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
    }
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80c5dbc
int __fastcall sub_80C5DBC(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    int v7; // [sp+0h] [bp-8h]

    object_spawnType3(8, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 14) = 0;
        *(v4 + 22) = *(v7 + 22);
        *(v4 + 44) = v5;
        *(v4 + 76) = v7;
    }
    return result;
}


// 0x80c5ddc
void sub_80C5DDC()
{
    int v0; // r5

    (*(&off_80C5DF4 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c5e00
int sub_80C5E00()
{
    int v0; // r5
    _BYTE *v1; // r0
    int result; // r0
    char v3; // r3
    int v4; // r0
    int v5; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 32) = *(v0 + 5);
    v1 = object_createCollisionData();
    if ( !v1 )
        return object_freeMemory();
    v3 = 3;
    if ( *(v0 + 6) )
    {
        v3 = 1;
        if ( *(v0 + 6) != 1 )
            v3 = 0;
    }
    object_setupCollisionData(v1, 10, 5, v3);
    object_setCollisionHitEffect(0);
    v4 = object_clearCollisionRegion();
    object_presentCollisionData(v4, v5);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c5e44
void __noreturn sub_80C5E44()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( !(*v0 & 0x10) && battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        v1 = (*(&off_80C5E7C + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80c5e84
int sub_80C5E84()
{
    int v0; // r5
    __int64 v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int result; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r2

    if ( !(*(v0 + 32) & 4) )
    {
        LODWORD(v1) = *(v0 + 18);
        HIDWORD(v1) = *(v0 + 19);
        object_highlightPanel(v1);
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v3) | (result == 0) )
    {
        if ( *(v0 + 7) && !(object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & 0x10) )
        {
            object_clearCollisionRegion();
            result = 8;
            *(v0 + 8) = 8;
        }
        else
        {
            sprite_load(v0, 128, 16, 38);
            sprite_noShadow(v0);
            *v0 |= 2u;
            *(v0 + 16) = 0;
            *(v0 + 17) = 0;
            sprite_setAnimation(v0, 0);
            sprite_loadAnimationData(v0);
            v5 = object_getFlip(v0);
            sprite_setFlip(v0, v5);
            object_setCollisionRegion(1);
            if ( *(v0 + 4) )
                sub_8109794(*(v0 + 18), *(v0 + 19));
            PlaySoundEffect(185, v6, v7);
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80c5f0c
int sub_80C5F0C()
{
    int v0; // r5
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 1;
        object_clearCollisionRegion();
    }
    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c5f2c
int __fastcall sub_80C5F2C(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(9, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
    }
    return result;
}


// 0x80c5f4a
_BYTE *__fastcall sub_80C5F4A(char a1, int a2, int a3, int a4)
{
    _BYTE *result; // r0

    result = sub_80C5F2C(a1, a2, a3, a4);
    if ( result )
        *result |= 0x10u;
    return result;
}


// 0x80c5f60
void sub_80C5F60()
{
    int v0; // r5

    (*(&off_80C5F78 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c5f84
int __noreturn sub_80C5F84()
{
    int v0; // r5
    _BYTE *v1; // r0
    int v3; // r0
    int v4; // r1

    sprite_load(v0, 128, 12, 0);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = -1;
    *(v0 + 32) = *(v0 + 5);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    v1 = object_createCollisionData();
    if ( v1 )
    {
        object_setupCollisionData(v1, 4, 5, 3);
        v3 = sub_801A146();
        object_presentCollisionData(v3, v4);
        *(v0 + 8) = 4;
        sub_80C5FDE();
    }
    return object_freeMemory();
}


// 0x80c5fde
void __noreturn sub_80C5FDE()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    unsigned __int8 v3; // vf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver()
        || (v2 = *(v0 + 32), v3 = __OFSUB__(v2, 1), --v2, *(v0 + 32) = v2, (v2 < 0) ^ v3)
        || *(*(v0 + 84) + 112) )
    {
        *v0 &= 0xFDu;
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        object_presentCollisionData(0, v1);
    }
}


// 0x80c6018
int __fastcall sub_80C6018(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(10, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
    }
    return result;
}


// 0x80c60a8
void sub_80C60A8()
{
    int v0; // r5

    (*(&off_80C60C0 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c60cc
int __noreturn sub_80C60CC()
{
    int v0; // r5
    unsigned int v1; // r6
    int v2; // r4
    char *v3; // r7
    int v4; // r1
    int v5; // r2
    char v6; // r0
    int v7; // r0
    _BYTE *v8; // r0
    int v10; // r1
    int v11; // r0
    signed int v12; // r0

    v1 = *(v0 + 96);
    v2 = *(v0 + 4);
    v3 = &byte_80C6038[16 * v2];
    *(v0 + 76) = v3;
    v4 = v3[5];
    v5 = v3[6];
    if ( v2 == 6 )
    {
        v4 = (v1 >> 16) & 0xFF;
        v5 = v1 >> 24;
    }
    sprite_load(v0, 128, v4, v5);
    sprite_loadAnimationData(v0);
    if ( v3[10] )
        sprite_hasShadow();
    else
        sprite_noShadow(v0);
    v6 = v3[7];
    if ( v2 == 6 )
        v6 = v1 >> 4;
    *(v0 + 16) = v6;
    *(v0 + 17) = -1;
    *v0 |= 2u;
    if ( v2 != 6 || v1 >> 24 != 35 )
    {
        v7 = object_getFlip(v0);
        sprite_setFlip(v0, v7);
    }
    else
    {
        sub_8002EAC();
    }
    sprite_setPallete(*(v0 + 7));
    *(v0 + 14) = v3[3];
    *(v0 + 7) = v3[9];
    object_setPanelsFromCoordinates(v0);
    *(v0 + 64) = object_getFrontDirection(v0) * *(v3 + 3);
    *(v0 + 100) = v3[8];
    v8 = object_createCollisionData();
    if ( v8 )
    {
        object_setupCollisionData(v8, *v3, v3[1], v3[2]);
        object_setCollisionHitEffect(v3[4]);
        v11 = v3[11];
        if ( v3[11] )
            v11 = object_setCollisionStatusEffect1(v11);
        object_presentCollisionData(v11, v10);
        v12 = 0;
        if ( *(v0 + 6) )
            v12 = -73728;
        *(v0 + 72) = v12;
        *(v0 + 8) = 4;
        sub_80C619C();
    }
    return object_freeMemory();
}


// 0x80c619c
int __noreturn sub_80C619C()
{
    int v0; // r5
    int v1; // r2
    int v2; // r1
    int v3; // r0
    int v4; // r1
    int v5; // r2
    int v6; // r1
    int v7; // r0
    int v8; // r0
    unsigned __int8 v9; // vf
    int result; // r0

    object_removeCollisionData();
    if ( *(v0 + 4) == 2 )
        sub_801A100();
    else
        object_spawnCollisionEffect();
    v2 = *(*(v0 + 84) + 112);
    if ( v2 )
    {
LABEL_15:
        *v0 &= 0xFDu;
        object_clearCollisionRegion();
        v3 = 8;
        *(v0 + 8) = 8;
        goto LABEL_16;
    }
    if ( !*(v0 + 5) )
    {
        *(v0 + 60) += *(v0 + 72);
        v4 = *(v0 + 19);
        v5 = object_getCoordinatesForPanels(*(v0 + 18));
        v6 = *(v0 + 52);
        v7 = *(v0 + 64) + v6;
        *(v0 + 52) = v7;
        if ( sub_800E6E8(v7, v6, v5)
            && (v8 = *(v0 + 7), v9 = __OFSUB__(v8, 1), --v8, *(v0 + 7) = v8, ((v8 < 0) ^ v9) | (v8 == 0)) )
        {
            if ( *(v0 + 4) == 5 )
            {
                object_setCoordinatesFromPanels(v0);
                SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
            }
        }
        else
        {
            object_setPanelsFromCoordinates(v0);
            object_updateCollisionPanels(v0);
            v3 = object_isCurrentPanelValid();
            if ( v3 )
                goto LABEL_16;
        }
        goto LABEL_15;
    }
    v3 = *(v0 + 5) - 1;
    *(v0 + 5) = v3;
    if ( !v3 )
    {
        v3 = *(v0 + 4);
        if ( v3 == 2 )
            v3 = PlaySoundEffect(394, 0, v1);
    }
LABEL_16:
    object_presentCollisionData(v3, v2);
    result = *(v0 + 100);
    if ( result )
        result = object_highlightCurrentCollisionPanels();
    return result;
}


// 0x80c6248
int __fastcall sub_80C6248(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    int v8; // [sp+0h] [bp-8h]

    object_spawnType3(11, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v8 + 22);
        *(v4 + 76) = v8;
        *(v4 + 96) = v6;
    }
    return result;
}


// 0x80c6264
_BYTE *__fastcall sub_80C6264(int a1, int a2, int a3, int a4)
{
    _BYTE *result; // r0

    result = sub_80C6248(a1, a2, a3, a4);
    if ( result )
        *result |= 0x10u;
    return result;
}


// 0x80c6280
int sub_80C6280()
{
    int v0; // r5

    return (*(&off_80C6294 + *(v0 + 8)))();
}


// 0x80c62a0
signed int sub_80C62A0()
{
    int v0; // r5
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c62b0
int sub_80C62B0()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() )
        goto LABEL_10;
    if ( *(v0 + 6) == 2 )
        return (*(&off_80C62EC + *(v0 + 9)))();
    if ( *(*(v0 + 76) + 9) != *(&dword_80C62F4 + *(v0 + 6)) )
    {
LABEL_10:
        result = 8;
        *(v0 + 8) = 8;
        return result;
    }
    result = battle_isTimeStop();
    if ( v2 )
        return (*(&off_80C62EC + *(v0 + 9)))();
    return result;
}


// 0x80c62f8
_BYTE *sub_80C62F8()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int v3; // r0
    _BYTE *result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 32) = *(v0 + 5);
        sub_80C6358();
        *(v0 + 34) = 0;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( ((v1 < 0) ^ v2) | (v1 == 0) )
    {
        result = &dword_8;
        *(v0 + 8) = 8;
    }
    else
    {
        v3 = *(v0 + 34);
        v2 = __OFSUB__(v3, 1);
        result = (v3 - 1);
        *(v0 + 34) = result;
        if ( ((result < 0) ^ v2) | (result == 0) )
        {
            *(v0 + 34) = 12;
            result = sub_80C63AE();
        }
    }
    return result;
}


// 0x80c6330
int __fastcall sub_80C6330(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(14, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c6358
int sub_80C6358()
{
    int v0; // r5
    signed int v1; // r6
    char *v2; // r3
    bool v3; // zf
    int v4; // r2
    int result; // r0
    int v6; // r3
    int v7; // r4
    int v8; // r7
    int v9; // [sp-8h] [bp-18h]
    int v10; // [sp-4h] [bp-14h]

    v1 = 0;
    do
    {
        v2 = &byte_80C639C[2 * v1];
        v9 = *(v0 + 18) + *v2;
        v10 = *(v0 + 19) + v2[1];
        v3 = object_isValidPanel(v9, v10) == 0;
        result = v9;
        if ( !v3 )
        {
            v6 = *(v0 + 6) << 8;
            v7 = *(v0 + 5) | v6;
            v8 = *(v0 + 76);
            result = sub_80E21AC(v9, v10, v4, v6);
        }
        ++v1;
    }
    while ( v1 < 9 );
    return result;
}


// 0x80c63ae
_BYTE *sub_80C63AE()
{
    int v0; // r5
    int v1; // r0
    int v2; // r6
    _BYTE *result; // r0
    int v4; // r6
    int v5; // r6

    v1 = *(v0 + 6);
    if ( v1 == 1 )
    {
        v4 = *(v0 + 44);
        result = object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), *(v0 + 60));
    }
    else if ( v1 == 2 )
    {
        v5 = *(v0 + 44);
        result = sub_80C53A6(*(v0 + 18), *(v0 + 19), *(v0 + 14), *(v0 + 60));
    }
    else
    {
        v2 = *(v0 + 44);
        result = object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), *(v0 + 60));
    }
    return result;
}


// 0x80c6414
void sub_80C6414()
{
    int v0; // r5

    (*(&off_80C642C + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80c6438
void sub_80C6438()
{
    Battle *v0; // r5
    int v1; // r1
    int v2; // r1
    int v3; // r2

    v0->objFlags |= 2u;
    sprite_load(v0, 128, 12, 19);
    sprite_noShadow(v0);
    v0->currAnimation = 0;
    v0->currAnimationCpy = -1;
    v0->vz = 0x80000;
    v1 = v0->panelY;
    v0->x = object_getCoordinatesForPanels(v0->panelX);
    v0->y = v2;
    v0->z = 0x1000000;
    PlaySoundEffect(161, v2, v3);
    v0->currState = 4;
    sub_80C647C();
}


// 0x80c647c
void sub_80C647C()
{
    int v0; // r5

    (*(&off_80C6494 + *(v0 + 9)))();
    object_updateSprite();
}


// 0x80c64a0
int sub_80C64A0()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    unsigned __int8 v3; // vf
    int result; // r0
    int v5; // r6
    _BYTE *v6; // r0

    v1 = *(v0 + 60);
    v2 = *(v0 + 72);
    v3 = __OFSUB__(v1, v2);
    result = v1 - v2;
    *(v0 + 60) = result;
    if ( ((result < 0) ^ v3) | (result == 0) )
    {
        *(v0 + 60) = 0;
        v5 = *(v0 + 44);
        v6 = object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), *(v0 + 60));
        if ( v6 )
            *v6 |= 0x10u;
        if ( object_checkPanelParameters(
                     *(v0 + 18),
                     *(v0 + 19),
                     *&byte_80C6514[8 * *(v0 + 22) + 4],
                     *&byte_80C6514[8 * *(v0 + 22)]) )
        {
            if ( sub_800D668(*(v0 + 18), *(v0 + 19), *(v0 + 22) ^ 1) )
                object_setPanelAlliance(*(v0 + 18), *(v0 + 19), *(v0 + 4));
        }
        result = 4;
        *(v0 + 9) = 4;
    }
    return result;
}


// 0x80c6524
signed int __fastcall sub_80C6524(int a1, int a2, int a3)
{
    int v3; // r5
    signed int result; // r0

    *(v3 + 16) = 1;
    PlaySoundEffect(162, a2, a3);
    result = 8;
    *(v3 + 9) = 8;
    return result;
}


// 0x80c6536
int sub_80C6536()
{
    int v0; // r5
    int result; // r0

    result = sprite_getFrameParameters() & 0x80;
    if ( result )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c6548
int __fastcall sub_80C6548(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(15, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 44) = v5;
    }
    return result;
}


// 0x80c6580
int sub_80C6580()
{
    int v0; // r5

    return (*(&off_80C6594 + *(v0 + 8)))();
}


// 0x80c65a0
int sub_80C65A0()
{
    int v0; // r5
    _BYTE *v1; // r0
    int result; // r0
    int v3; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 64) = object_getFrontDirection(v0);
    v1 = object_createCollisionData();
    if ( !v1 )
        return object_freeMemory();
    object_setupCollisionData(v1, 61, 5, 0);
    v3 = *(v0 + 84);
    *(v3 + 2) = 0;
    object_presentCollisionData(0, v3);
    *(v0 + 5) = 2;
    *(v0 + 34) = 12;
    *(v0 + 8) = 4;
    result = *(v0 + 4);
    if ( *(v0 + 4) )
    {
        *(v0 + 9) = 4;
        if ( result != 255 )
            result = sub_80C673A();
    }
    return result;
}


// 0x80c65ee
void __noreturn sub_80C65EE()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( *(*(v0 + 84) + 112) )
    {
        if ( *(v0 + 9) == 4 )
        {
            object_clearCollisionRegion();
        }
        else
        {
            sub_80C673A();
            *(v0 + 9) = 4;
            *(v0 + 10) = 0;
        }
    }
    if ( battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        *v0 &= 0xFDu;
        *(v0 + 8) = 8;
    }
    else
    {
        v1 = (*(&off_80C6648 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80c6650
signed int sub_80C6650()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 18) += *(v0 + 64);
    object_setCoordinatesFromPanels(v0);
    object_updateCollisionPanels(v0);
    result = object_isCurrentPanelValid();
    if ( !result )
    {
        object_clearCollisionRegion();
        *v0 &= 0xFDu;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c667c
int sub_80C667C()
{
    int v0; // r5

    return (*(&off_80C6690 + *(v0 + 10)))();
}


// 0x80c6698
signed int sub_80C6698()
{
    int v0; // r5
    int v1; // r0
    int v2; // r7
    int v3; // r1
    int v4; // r2
    signed int result; // r0

    v1 = *(v0 + 108);
    if ( !v1 )
    {
        *(v0 + 108) = 1;
        v1 = object_getPanelParameters(*(v0 + 18), *(v0 + 19));
        if ( v1 & 0x10 )
            object_setPanelType(*(v0 + 18), *(v0 + 19), 6);
    }
    v2 = *(v0 + 84);
    sub_80C6726(v1);
    object_setCollisionRegion(1);
    SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
    PlaySoundEffect(112, v3, v4);
    *(v0 + 32) = 12;
    result = 4;
    *(v0 + 10) = 4;
    return result;
}


// 0x80c66e4
int __fastcall sub_80C66E4(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    int v5; // r0
    int v6; // r0
    unsigned __int8 v7; // vf
    int result; // r0
    int v9; // r0

    v4 = *(v3 + 104);
    *(v3 + 104) = v4 + 1;
    if ( !(v4 & 7) )
        PlaySoundEffect(112, 7, a3);
    v5 = *(v3 + 34) - 1;
    *(v3 + 34) = v5;
    if ( !v5 )
        sub_80C6774();
    v6 = *(v3 + 32);
    v7 = __OFSUB__(v6, 1);
    result = v6 - 1;
    *(v3 + 32) = result;
    if ( (result < 0) ^ v7 )
    {
        v9 = *(v3 + 5) - 1;
        *(v3 + 5) = v9;
        if ( v9 )
        {
            result = 0;
            *(v3 + 10) = 0;
        }
        else
        {
            object_clearCollisionRegion();
            result = 8;
            *(v3 + 8) = 8;
        }
    }
    return result;
}


// 0x80c6726
int __fastcall sub_80C6726(int a1)
{
    int v1; // r5

    sub_801A082(a1, 4, 5, 1);
    return sub_8019F8C(*(v1 + 14));
}


// 0x80c673a
int sub_80C673A()
{
    int v0; // r5
    int v1; // r0
    int v2; // r2
    int v3; // r6
    int v4; // r0
    int v5; // r1
    int v6; // r2
    int v7; // r3
    int result; // r0

    v1 = object_getFrontDirection(v0);
    sub_81096FA(v1 + *(v0 + 18), *(v0 + 19), v2, dword_80C6764);
    v3 = *(v0 + 22) ^ *(v0 + 23);
    result = object_getPanelRegion(v4, v5, v6, v7);
    *(v0 + 96) = result;
    return result;
}


// 0x80c6774
void sub_80C6774()
{
    int v0; // r5
    int v1; // r7
    int v2; // r0
    int v3; // r1
    int v4; // r4
    int v5; // r6

    v1 = *(v0 + 96);
    while ( v1 )
    {
        --v1;
        v2 = sub_80C67A4(*(v0 + v1 + 100) & 7, *(v0 + v1 + 100) >> 4);
        if ( v2 )
        {
            v4 = *(v0 + 4) + 1;
            v5 = *(v0 + 44);
            sub_80C67D8(v2, v3, *(v0 + 14), 0);
        }
    }
}


// 0x80c67a4
int __fastcall sub_80C67A4(int result, int a2)
{
    char *v2; // r4

    v2 = eBattleObjectsLinkedListStart;
    while ( 1 )
    {
        v2 = *(v2 + 1);
        if ( v2 == eBattleObjectsLinkedListSentinel )
            break;
        if ( (v2[18] & 0xF) == 3 && v2[17] == 16 && result == v2[34] && a2 == v2[35] )
            return 0;
    }
    return result;
}


// 0x80c67d8
int __fastcall sub_80C67D8(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    char v8; // [sp+8h] [bp-Ch]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(16, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, v8);
    return result;
}


// 0x80c67f8
void sub_80C67F8()
{
    int v0; // r5

    (*(&off_80C6810 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c681c
int __noreturn sub_80C681C()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2

    sprite_load(v0, 128, 20, 18);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = -1;
    object_setCoordinatesFromPanels(v0);
    PlaySoundEffect(187, v1, v2);
    *(v0 + 8) = 4;
    return sub_80C6854();
}


// 0x80c6854
int sub_80C6854()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r6
    int v5; // r7
    int v6; // r0

    if ( *(v0 + 10) )
        goto LABEL_8;
    if ( !*(v0 + 11) )
        *(v0 + 11) = 4;
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 32) = 7;
        v4 = *(v0 + 44);
        v5 = *(&dword_80C68AC + *(v0 + 34));
        object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
        result = *(v0 + 34) + 1;
        *(v0 + 34) = result;
        if ( result >= 3 )
        {
            *(v0 + 10) = 4;
            *(v0 + 32) = 20;
LABEL_8:
            v6 = *(v0 + 32);
            v2 = __OFSUB__(v6, 1);
            result = v6 - 1;
            *(v0 + 32) = result;
            if ( ((result < 0) ^ v2) | (result == 0) )
            {
                result = 8;
                *(v0 + 8) = 8;
            }
            return result;
        }
    }
    return result;
}


// 0x80c68b0
int __fastcall sub_80C68B0(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(17, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 44) = v5;
        *(v4 + 76) = v10;
    }
    return result;
}


// 0x80c6946
int sub_80C6946()
{
    int v0; // r5

    return (*(&off_80C6958 + *(v0 + 8)))();
}


// 0x80c6964
int sub_80C6964()
{
    int v0; // r5
    int v1; // r1
    int v2; // r1
    _BYTE *v3; // r0
    int result; // r0
    int v5; // r1

    v1 = *(v0 + 19);
    *(v0 + 52) = object_getCoordinatesForPanels(*(v0 + 18));
    *(v0 + 56) = v2;
    *(v0 + 96) = &byte_80C68D4[6 * *(v0 + 4)];
    *(v0 + 64) = object_getFrontDirection(v0);
    v3 = object_createCollisionData();
    if ( !v3 )
        return object_freeMemory();
    object_setupCollisionData(v3, 61, 5, 0);
    v5 = *(v0 + 84);
    *(v5 + 2) = 0;
    object_presentCollisionData(0, v5);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c69ac
void __noreturn sub_80C69AC()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( *(*(v0 + 84) + 112) && !(object_getFlag() & 0x100) )
    {
        object_setFlag1(256);
        *(v0 + 9) = 4;
        *(v0 + 10) = 0;
    }
    v1 = (*(&off_80C6A00 + *(v0 + 9)))();
    object_presentCollisionData(v1, v2);
}


// 0x80c6a08
signed int sub_80C6A08()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 18) += *(v0 + 64);
    object_setCoordinatesFromPanels(v0);
    object_updateCollisionPanels(v0);
    result = object_isCurrentPanelValid();
    if ( !result )
    {
        object_clearCollisionRegion();
        *v0 &= 0xFDu;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c6a34
int sub_80C6A34()
{
    int v0; // r5

    return (*(&off_80C6A48 + *(v0 + 10)))();
}


// 0x80c6a50
signed int __fastcall sub_80C6A50(int a1)
{
    int v1; // r5
    _BYTE *v2; // r7
    unsigned __int8 *v3; // r0
    int v4; // r3
    int v5; // r1
    int v6; // r2
    int v7; // r0
    int v8; // r1
    int v9; // r4
    int v10; // r7
    int v11; // r1
    int v12; // r2
    int v13; // r4
    signed int result; // r0

    v2 = *(v1 + 84);
    sub_80C6AB8(a1);
    v3 = *(v1 + 96);
    v4 = *v3;
    v2[1] = v4;
    v5 = *(v1 + 4);
    if ( v5 == 12 || v5 == 16 || v5 == 14 || v5 == 17 || v5 == 18 )
    {
        v13 = (object_getFlip(v1) << 8) + *(*(v1 + 96) + 2);
        SpawnT4BattleObjectWithId0(v1, v1 + 64, *(v1 + 52), *(v1 + 56), *(v1 + 60));
    }
    else
    {
        v6 = v3[2];
        v7 = v2[10];
        v8 = v2[11];
        v9 = *(v1 + 22);
        v10 = *(v1 + 60);
        sub_801BD3C(v7, v8, v6, v4);
    }
    if ( *(*(v1 + 96) + 4) )
        PlaySoundEffect(*(*(v1 + 96) + 4), v11, v12);
    result = 4;
    *(v1 + 10) = 4;
    return result;
}


// 0x80c6aac
signed int sub_80C6AAC()
{
    int v0; // r5
    signed int result; // r0

    object_clearCollisionRegion();
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80c6ab8
int __fastcall sub_80C6AB8(int a1)
{
    int v1; // r5
    int v2; // r3
    int result; // r0

    sub_801A082(a1, 4, 5, *(*(v1 + 96) + 1));
    sub_8019F8C(*(v1 + 14));
    v2 = *(v1 + 96);
    result = *(v2 + 3);
    if ( *(v2 + 3) )
        result = object_setCollisionStatusEffect1(result);
    return result;
}


// 0x80c6ada
int __fastcall sub_80C6ADA(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    char v8; // [sp+8h] [bp-Ch]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(18, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, v8);
    return result;
}


// 0x80c6b40
void sub_80C6B40()
{
    int v0; // r5

    (*(&off_80C6B58 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c6b64
signed int sub_80C6B64()
{
    int v0; // r5
    char *v1; // r4
    u8 v2; // r0
    int v3; // r0
    _BYTE *v4; // r7
    int v5; // r1
    int v6; // r0
    int v7; // r1
    int v8; // r1
    int v9; // r2
    signed int result; // r0

    if ( !object_isCurrentPanelValid() )
        return object_freeMemory();
    if ( !(object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & 0x10) )
        return object_freeMemory();
    v1 = &byte_80C6B00[4 * *(v0 + 4)];
    *(v0 + 96) = v1;
    sprite_load(v0, 128, 16, *v1);
    sprite_noShadow(v0);
    *v0 |= 2u;
    v2 = v1[1];
    *(v0 + 16) = v2;
    *(v0 + 17) = v2;
    sprite_setAnimation(v0, v2);
    sprite_loadAnimationData(v0);
    *(v0 + 32) = v1[2];
    *(v0 + 34) = 4;
    sprite_setPallete(0);
    v3 = object_getFlip(v0);
    sprite_setFlip(v0, v3);
    sub_80C6CFC(*(v0 + 18), *(v0 + 19), v1[3]);
    object_setCoordinatesFromPanels(v0);
    v4 = object_createCollisionData();
    if ( !v4 )
        return object_freeMemory();
    v5 = 4;
    if ( v1[3] != 255 )
        v5 = 10;
    object_setupCollisionData(v4, v5, 5, 3);
    v4[1] = 1;
    v6 = object_setCollisionHitEffect(255);
    object_presentCollisionData(v6, v7);
    PlaySoundEffect(166, v8, v9);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c6c14
int __noreturn sub_80C6C14()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int result; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || !(object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & 0x10) )
    {
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        v1 = (*(&off_80C6C58 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
        result = object_highlightCurrentCollisionPanels();
    }
    return result;
}


// 0x80c6c6a
int sub_80C6C6A()
{
    int v0; // r5
    int v1; // r0
    signed int v2; // r0
    char v3; // r0
    int v4; // r1
    int v5; // r2
    int v6; // r4
    int v7; // r6
    int result; // r0

    if ( !*(v0 + 10) )
        *(v0 + 10) = 1;
    v1 = *(v0 + 32) - 1;
    *(v0 + 32) = v1;
    if ( !v1 )
    {
        v2 = *(v0 + 4);
        if ( v2 < 12 || v2 > 14 )
        {
            v3 = object_getFrontDirection(v0) + *(v0 + 18);
            v4 = *(v0 + 19);
        }
        else
        {
            v3 = sub_80C6D1E();
        }
        v6 = *(v0 + 4);
        v7 = *(v0 + 44);
        sub_80C6CE4(v3, v4, v5, 0);
        *(v0 + 9) = 4;
    }
    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        *(v0 + 54) = 240;
        result = object_clearCollisionRegion();
    }
    return result;
}


// 0x80c6cba
int sub_80C6CBA()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 4) >= 12 )
    {
        result = *(v0 + 34) - 1;
        *(v0 + 34) = result;
        if ( result )
            return result;
    }
    else
    {
        result = sprite_getFrameParameters();
        if ( !(result & 0x80) )
            return result;
    }
    *(v0 + 54) = 240;
    object_clearCollisionRegion();
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80c6ce4
int __fastcall sub_80C6CE4(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]

    v6 = a1;
    v7 = a2;
    object_spawnType3(22, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, 0);
    return result;
}


// 0x80c6cfc
int __fastcall sub_80C6CFC(int result, int a2, signed int a3)
{
    if ( a3 != 255 )
    {
        if ( a3 == 3 )
            object_crackPanel(result, a2);
        if ( a3 == 1 )
            object_breakPanel_dup1(result, a2);
        object_setPanelType(result, a2, a3);
    }
    return result;
}


// 0x80c6d1e
int sub_80C6D1E()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    int v3; // ST00_4
    bool v4; // zf
    int v5; // r1
    int v6; // ST00_4
    int v7; // r1

    if ( *(v0 + 5) )
        return object_getFrontDirection(v0) + *(v0 + 18);
    v2 = object_getFrontDirection(v0);
    if ( sub_8109708(v2 + *(v0 + 18), *(v0 + 19), byte_80C6DB8[8 * (*(v0 + 22) ^ *(v0 + 23)) + *(v0 + 18)]) )
        goto LABEL_13;
    result = object_getFrontDirection(v0) + *(v0 + 18);
    if ( *(v0 + 19) != 1 )
    {
        v3 = result;
        v4 = sub_8109708(result, *(v0 + 19) - 1, 22) == 0;
        result = v3;
        if ( !v4 )
        {
            *(v0 + 5) = 1;
            return result;
        }
    }
    v5 = *(v0 + 19) + 1;
    if ( v5 > 3 || (v6 = result, v4 = sub_8109708(result, v5, 23) == 0, result = v6, v4) )
    {
LABEL_13:
        result = object_getFrontDirection(v0) + *(v0 + 18);
        v7 = *(v0 + 19);
    }
    else
    {
        *(v0 + 5) = 2;
    }
    return result;
}


// 0x80c6dcc
void sub_80C6DCC()
{
    int v0; // r5

    (*(&off_80C6DF0 + *(v0 + 8)))();
    if ( *(v0 + 4) == 4 )
        object_updateSpriteTimestop();
    else
        object_updateSpritePaused();
}


// 0x80c6dfc
int __noreturn sub_80C6DFC()
{
    int v0; // r5
    int v1; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    ++*(v0 + 62);
    ++*(v0 + 58);
    sprite_load(v0, 128, 16, 32);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    *(v0 + 8) = 4;
    return sub_80C6E50();
}


// 0x80c6e50
int sub_80C6E50()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() || *(v0 + 4) != 4 && *(*(v0 + 76) + 9) != 11 )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else if ( *(v0 + 4) == 4 || (result = battle_isTimeStop(), v2) )
    {
        result = (*(&off_80C6E8C + *(v0 + 9)))();
    }
    return result;
}


// 0x80c6e90
_BYTE *sub_80C6E90()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    _BYTE *result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        sub_80C6F08(*(v0 + 6));
    }
    sub_80C7030(*(v0 + 7));
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( ((v1 < 0) ^ v2) | (v1 == 0) )
    {
        result = &dword_8;
        *(v0 + 8) = 8;
    }
    else
    {
        result = (*(v0 + 34) - 1);
        *(v0 + 34) = result;
        if ( !result )
        {
            *(v0 + 34) = 30;
            result = sub_80C6F50(30, *(v0 + 7));
        }
    }
    return result;
}


// 0x80c6ee0
int __fastcall sub_80C6EE0(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(23, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 76) = v10;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c6f08
__int64 __fastcall __noreturn sub_80C6F08(int a1)
{
    Battle *v1; // r5
    int v2; // r7
    int v3; // r4
    signed int v4; // r6
    bool v5; // zf
    __int64 result; // r0
    __int64 v7; // [sp-8h] [bp-18h]

    v2 = a1;
    v3 = *&byte_80C6F48[4 * v1->Alliance];
    v4 = 1;
    do
    {
        LODWORD(v7) = object_getFrontDirection(v1) * v4 + v1->panelX;
        HIDWORD(v7) = v1->panelY;
        v5 = (object_getPanelParameters(v7, SHIDWORD(v7)) & v3) == 0;
        result = v7;
        if ( !v5 )
            break;
        if ( v7 == v2 )
            break;
        if ( v7 <= 1 )
            break;
        if ( v7 >= 6 )
            break;
        ++v4;
    }
    while ( v4 <= 5 );
    return result;
}


// 0x80c6f50
_BYTE *__fastcall sub_80C6F50(__int16 a1, int a2)
{
    int v2; // r5
    signed int v3; // r6
    int v4; // ST04_4
    bool v5; // zf
    int v6; // r1
    signed int v7; // ST04_4
    int v8; // r6
    int v9; // r6
    _BYTE *result; // r0
    int v11; // ST04_4
    int v12; // r6
    __int16 v13; // [sp+0h] [bp-18h]
    _BYTE *v14; // [sp+4h] [bp-14h]

    v13 = a1;
    v14 = a2;
    v3 = 0;
    do
    {
        v4 = v3 - 1 + *(v2 + 19);
        v5 = object_isValidPanel(v14, v4) == 0;
        v6 = v4;
        if ( !v5 )
        {
            v7 = v3;
            v8 = *(v2 + 44);
            v3 = v7;
            *(sub_80C53A6(v14, v6, *(v2 + 14), 0) + 16) = v13;
        }
        ++v3;
    }
    while ( v3 <= 2 );
    v9 = 1;
    do
    {
        result = (object_getFrontDirection(v2) * v9 + *(v2 + 18));
        if ( result == v14 )
            break;
        v11 = v9;
        v12 = *(v2 + 44);
        result = sub_80C53A6(result, *(v2 + 19), *(v2 + 14), 0);
        *(result + 16) = v13;
        v9 = v11 + 1;
    }
    while ( v11 + 1 <= 4 );
    return result;
}


// 0x80c6fc8
int __fastcall sub_80C6FC8(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // ST08_4
    int v5; // r7
    signed int v6; // r6
    int result; // r0
    int v8; // r7
    int v9; // [sp+4h] [bp-18h]

    v9 = a2;
    v4 = byte_80C7028[*(v3 + 4)];
    v5 = *(v3 + 76);
    sub_80E3A92(a2, *(v3 + 19), a3, 1);
    v6 = 1;
    do
    {
        result = object_getFrontDirection(v3) * v6 + *(v3 + 18);
        if ( result == v9 )
            break;
        v8 = *(v3 + 76);
        result = sub_80E3A92(result, *(v3 + 19), v9, 0);
        ++v6;
    }
    while ( v6 <= 4 );
    return result;
}


// 0x80c7030
int __fastcall sub_80C7030(int a1)
{
    Battle *v1; // r5
    int v2; // r4
    signed int v3; // r6
    signed int v4; // r6
    __int64 v5; // r0
    int v7; // [sp-4h] [bp-10h]

    v2 = a1;
    v3 = 0;
    do
    {
        v7 = v3 - 1 + v1->panelY;
        if ( object_isValidPanel(v2, v7) )
            object_highlightPanel(__PAIR__(v7, v2));
        ++v3;
    }
    while ( v3 <= 2 );
    v4 = 1;
    do
    {
        LODWORD(v5) = object_getFrontDirection(v1) * v4 + v1->panelX;
        if ( v5 == v2 )
            break;
        HIDWORD(v5) = v1->panelY;
        LODWORD(v5) = object_highlightPanel(v5);
        ++v4;
    }
    while ( v4 <= 4 );
    return v5;
}


// 0x80c7074
void sub_80C7074()
{
    int v0; // r5

    (*(&off_80C708C + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c7098
int __noreturn sub_80C7098()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r2
    int v4; // r1
    int v5; // r2

    sprite_load(v0, 128, 20, 14);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = -1;
    object_setCoordinatesFromPanels(v0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    PlaySoundEffect(216, v2, v3);
    *(v0 + 8) = 4;
    return sub_80C70D8(4, v4, v5);
}


// 0x80c70d8
int __fastcall sub_80C70D8(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r6
    int v5; // r0
    unsigned __int8 v6; // vf
    int result; // r0

    if ( !*(v3 + 11) )
    {
        v4 = *(v3 + 44);
        object_spawnCollisionRegion(*(v3 + 18), *(v3 + 19), a3, 0);
        object_breakPanelLoud(*(v3 + 18), *(v3 + 19));
    }
    v5 = *(v3 + 32);
    v6 = __OFSUB__(v5, 1);
    result = v5 - 1;
    *(v3 + 32) = result;
    if ( (result < 0) ^ v6 )
    {
        result = 8;
        *(v3 + 8) = 8;
    }
    return result;
}


// 0x80c7114
int __fastcall sub_80C7114(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(24, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 44) = v5;
    }
    return result;
}


// 0x80c7132
int __fastcall sub_80C7132(int a1, int a2, int a3, int a4)
{
    int v4; // r4
    Battle *v5; // r5
    char *i; // r7
    int result; // r0
    char v8; // zf
    int v9; // [sp-8h] [bp-34h]
    int v10; // [sp-4h] [bp-30h]
    int v11; // [sp+0h] [bp-2Ch]
    int v12; // [sp+4h] [bp-28h]
    int v13; // [sp+8h] [bp-24h]
    int v14; // [sp+Ch] [bp-20h]
    int v15; // [sp+18h] [bp-14h]

    v11 = a1;
    v12 = a2;
    v13 = a3;
    v14 = a4;
    v15 = object_getFrontDirection(v5);
    for ( i = *(&off_80C7188 + v4); ; i += 2 )
    {
        result = *i;
        if ( result == 127 )
            break;
        v9 = result * v15 + v11;
        v10 = i[1] + v12;
        object_isValidPanel(v9, v10);
        if ( !v8 )
            sub_80C7114(v9, v10, v13, v14);
    }
    return result;
}


// 0x80c71a4
int sub_80C71A4()
{
    int v0; // r5

    return (*(&off_80C71B8 + *(v0 + 8)))();
}


// 0x80c71c4
int __noreturn sub_80C71C4()
{
    int v0; // r5
    int v1; // r0
    __int16 v2; // r0
    _BYTE *v3; // r0
    int result; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r1
    int v8; // r2

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 16, 19);
    sprite_hasShadow();
    *v0 |= 2u;
    object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = byte_80C7248[2 * *(v0 + 4)];
    *(v0 + 36) = v2;
    *(v0 + 38) = v2;
    v3 = object_createCollisionData();
    if ( !v3 )
        return object_freeMemory();
    v5 = object_setupCollisionData(v3, 19, 20, 3);
    object_presentCollisionData(v5, v6);
    PlaySoundEffect(148, v7, v8);
    object_setFlag1(64);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c7250
void __noreturn sub_80C7250()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    if ( battle_isBattleOver() || *(v0 + 11) == 1 )
    {
        *(v0 + 9) = 2;
        *(v0 + 10) = 0;
    }
    sprite_clearFinalPalette();
    sub_801AD9E();
    v1 = sub_801B394(&off_80C7284);
    object_presentCollisionData(v1, v2);
    object_updateSpritePaused();
}


// 0x80c72b0
int sub_80C72B0()
{
    int v0; // r5
    int result; // r0

    *(v0 + 9) = 8;
    result = 0;
    *(v0 + 10) = 0;
    return result;
}


// 0x80c72bc
int sub_80C72BC()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 11);
    if ( result == 3 )
    {
        *(v0 + 9) = 9;
        result = 0;
        *(v0 + 10) = 0;
    }
    else if ( result == 4 )
    {
        *(v0 + 9) = 10;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80c72dc
int sub_80C72DC()
{
    int v0; // r5
    char v1; // r1
    int v2; // r1
    int v3; // r2
    int result; // r0

    v1 = *(v0 + 21);
    *(v0 + 18) = *(v0 + 20);
    *(v0 + 19) = v1;
    object_setCoordinatesFromPanels(v0);
    object_updateCollisionPanels(v0);
    *(v0 + 16) = 0;
    *(v0 + 17) = -1;
    PlaySoundEffect(148, v2, v3);
    *(v0 + 9) = 8;
    result = 0;
    *(v0 + 10) = 0;
    return result;
}


// 0x80c7306
int __fastcall sub_80C7306(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r1
    int v6; // r2
    int result; // r0
    int v8; // r0

    if ( !*(v4 + 10) )
    {
        *(v4 + 10) = 4;
        sub_80E1E20(*(v4 + 18), *(v4 + 19), a3, a4);
        PlaySoundEffect(198, v5, v6);
        sub_80C73BE();
        *(v4 + 16) = 1;
    }
    result = *(v4 + 11);
    if ( result == 5 )
    {
        *(v4 + 16) = 0;
        v8 = *(v4 + 100);
        if ( v8 )
            sub_80E1E3E(v8);
        *(v4 + 9) = 8;
        result = 0;
        *(v4 + 10) = 0;
    }
    return result;
}


// 0x80c734e
signed int sub_80C734E()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r0
    _DWORD *v4; // r1
    signed int result; // r0

    SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
    PlaySoundEffect(112, v1, v2);
    object_clearCollisionRegion();
    v3 = *(v0 + 100);
    if ( v3 )
        sub_80E1E3E(v3);
    v4 = *(v0 + 96);
    if ( *v4 == v0 )
        *v4 = 0;
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80c7382
_BYTE *__fastcall sub_80C7382(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _DWORD *v6; // r7
    _BYTE *result; // r0
    int v8; // [sp+0h] [bp-14h]
    int v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(25, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 20) = v8;
        *(v4 + 21) = v9;
        object_reservePanel(v8, v9);
        result = v4;
        *(v4 + 14) = v10;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *v6 = v4;
        *result |= 0x10u;
    }
    return result;
}


// 0x80c73be
int sub_80C73BE()
{
    int v0; // r5
    int v1; // r4
    int v2; // r6
    int result; // r0

    v1 = 1;
    do
    {
        v2 = *(v0 + 44);
        result = object_spawnCollisionRegion(*(v0 + 18), v1, *(v0 + 14), 0);
        if ( result )
            *(result + 32) = *(&off_80C73FC + *(v0 + 4));
        ++v1;
    }
    while ( v1 <= 3 );
    return result;
}


// 0x80c740c
int sub_80C740C()
{
    int v0; // r5

    return (*(&off_80C7420 + *(v0 + 8)))();
}


// 0x80c742c
signed int sub_80C742C()
{
    int v0; // r5
    __int16 v1; // r0
    signed int result; // r0

    v1 = *&byte_80C7448[2 * *(v0 + 4)];
    *(v0 + 32) = v1;
    *(v0 + 34) = v1;
    *(v0 + 6) = 0;
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c7450
int sub_80C7450()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        *(v0 + 5) = sub_80C7572();
        result = battle_isTimeStop();
        if ( v2 )
            result = (*(&off_80C747C + *(v0 + 9)))();
    }
    return result;
}


// 0x80c7484
int sub_80C7484()
{
    int v0; // r5
    int v1; // r0
    int result; // r0
    int v3; // r0
    unsigned __int8 v4; // vf

    v1 = *(v0 + 11);
    if ( v1 == 1 )
    {
        sub_80C78DC();
LABEL_12:
        *(v0 + 11) = 0;
        goto LABEL_13;
    }
    if ( v1 == 2 )
        sub_80C758E();
    if ( v1 == 4 )
    {
        sub_80C78F8();
        *(v0 + 6) = 1;
        goto LABEL_12;
    }
    if ( v1 == 5 || *(v0 + 6) && *(*(v0 + 76) + 9) != 11 )
    {
        sub_80C791E();
        *(v0 + 6) = 0;
        goto LABEL_12;
    }
LABEL_13:
    result = *(*(v0 + 76) + 9);
    if ( result == 9 )
    {
        result = *(v0 + 5);
        if ( *(v0 + 5) )
        {
            v3 = *(v0 + 34);
            v4 = __OFSUB__(v3, 1);
            result = v3 - 1;
            *(v0 + 34) = result;
            if ( ((result < 0) ^ v4) | (result == 0) )
            {
                *(v0 + 34) = *(v0 + 32);
                sub_80C776C(&dword_80C751C, 9, 16, 260571264);
            }
        }
    }
    return result;
}


// 0x80c7524
int sub_80C7524()
{
    int v0; // r5
    int result; // r0

    *(v0 + 9) = 0;
    result = 0;
    *(v0 + 10) = 0;
    return result;
}


// 0x80c7530
int sub_80C7530()
{
    int v0; // r5
    _DWORD *v1; // r1

    v1 = *(v0 + 96);
    if ( *v1 == v0 )
        *v1 = 0;
    return object_genericDestroy();
}


// 0x80c7544
int __fastcall sub_80C7544(_DWORD *a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _DWORD *v6; // r7
    int result; // r0
    _DWORD *v8; // [sp+0h] [bp-14h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a3;
    object_spawnType3(26, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 44) = v5;
        *(v4 + 96) = v8;
        *v8 = v4;
        *v6 = v4 + 100;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c7572
int sub_80C7572()
{
    int v0; // r5
    int result; // r0
    signed int v2; // r3

    result = 0;
    v2 = 0;
    do
    {
        if ( *(v0 + 4 * v2 + 100) )
            ++result;
        ++v2;
    }
    while ( v2 < 3 );
    return result;
}


// 0x80c758e
signed int __noreturn sub_80C758E()
{
    int v0; // r5
    int v1; // r5
    int *v2; // r0
    int v3; // r6
    int v8; // r3
    int v10; // [sp+0h] [bp-30h]
    int v11; // [sp+Ch] [bp-24h]

    v1 = *(v0 + 76);
    if ( !(object_getFlag() & 0xA000) )
        sub_80C7632(&dword_80C7600, 40960, 16, 260571264);
    v2 = &(&off_80C760C)[2 * *(v10 + 22)];
    v3 = object_getPanelsExceptCurrentFilterred(v2, &off_80C760C, *v2, v2[1]);
    if ( !v3 )
        return 0;
    GetPositiveSignedRNG2();
    __asm { SVC         6 }
    sub_80C761C(*(&v11 + v3) & 7, *(&v11 + v3) >> 4, 0, v8);
    return 1;
}


// 0x80c761c
void __fastcall sub_80C761C(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r4
    int v6; // r6

    v5 = *(v4 + 4);
    v6 = *(v4 + 44);
    sub_80C7382(a1, a2, *(v4 + 14), a4);
}


// 0x80c7632
void __fastcall __noreturn sub_80C7632(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r0
    char *v6; // r7
    signed int v7; // r4
    int v8; // r6
    int v13; // r3
    int v14; // [sp+0h] [bp-30h]
    int v15; // [sp+4h] [bp-2Ch]
    int v16; // [sp+8h] [bp-28h]

    v14 = a3;
    v15 = a4;
    v5 = 16 * *(v4 + 22);
    if ( (*(*(v4 + 76) + 38) >> 2) >= *(*(v4 + 76) + 36) )
        v5 += 8;
    v6 = &byte_80C7698[v5];
    v7 = 0;
    v8 = 0;
    do
        v8 += object_getPanelsInColumnFiltered(v6[v7++], &v16, v14, v15);
    while ( v7 < 8 );
    if ( v8 )
    {
        GetPositiveSignedRNG2();
        __asm { SVC         6 }
        sub_80C761C(*(&v16 + v8) & 7, *(&v16 + v8) >> 4, 0, v13);
    }
}


// 0x80c76b8
void __fastcall sub_80C76B8(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r4
    char v7; // r0
    signed int v8; // r4
    signed int v9; // r4
    int v10; // r0
    int v15; // r3
    int v16; // [sp-8h] [bp-40h]
    int v17; // [sp+0h] [bp-38h]
    int v18; // [sp+4h] [bp-34h]
    int v19; // [sp+8h] [bp-30h]
    int v20; // [sp+Ch] [bp-2Ch]
    int v21; // [sp+10h] [bp-28h]

    v19 = a1;
    v20 = a2;
    v17 = a3;
    v18 = a4;
    v5 = 0;
    v6 = 3;
    if ( (*(*(v4 + 76) + 38) >> 2) >= *(*(v4 + 76) + 36) )
        v6 = 1;
    GetPositiveSignedRNG2();
    if ( (v7 & 3) < v6 )
    {
        v8 = 0;
        do
        {
            v16 = byte_80C7764[3 * *(v4 + 22) + v8];
            if ( object_checkPanelParameters(v16, v20, v17, v18) )
                *(&v21 + v5++) = v16 | 16 * v20;
            ++v8;
        }
        while ( v8 < 3 );
        if ( v5 )
            goto LABEL_17;
    }
    v9 = 0;
    do
    {
        v10 = byte_80C7764[3 * *(v4 + 22) + v9];
        if ( v10 != v19 )
            v5 += object_getPanelsInColumnIgnoreRowFiltered(v10, v20, v17, v18);
        ++v9;
    }
    while ( v9 < 3 );
    if ( v5 )
    {
LABEL_17:
        GetPositiveSignedRNG2();
        __asm { SVC         6 }
        sub_80C761C(*(&v21 + v5) & 7, *(&v21 + v5) >> 4, 1, v15);
    }
}


// 0x80c776c
int __fastcall __noreturn sub_80C776C(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r0
    char *v6; // r7
    signed int v7; // r4
    int v8; // r6
    unsigned int v13; // r0
    unsigned int v14; // r1
    int result; // r0
    int v16; // r3
    _BYTE *v17; // r2
    int v18; // [sp+0h] [bp-30h]
    int v19; // [sp+4h] [bp-2Ch]
    int v20; // [sp+8h] [bp-28h]

    v18 = a3;
    v19 = a4;
    v5 = 16 * *(v4 + 22);
    if ( (*(*(v4 + 76) + 38) >> 2) >= *(*(v4 + 76) + 36) )
        v5 += 8;
    v6 = &byte_80C77EC[v5];
    v7 = 0;
    v8 = 0;
    do
        v8 += object_getPanelsInColumnFiltered(v6[v7++], &v20, v18, v19);
    while ( v7 < 8 );
    if ( !v8 )
        return 0;
    GetPositiveSignedRNG2();
    __asm { SVC         6 }
    v13 = *(&v20 + v8);
    v14 = v13 >> 4;
    result = v13 & 7;
    v16 = 0;
    while ( 1 )
    {
        v17 = *(v4 + 4 * v16 + 100);
        if ( v17 )
            break;
        if ( ++v16 >= 3 )
            return 0;
    }
    v17[20] = result;
    v17[21] = v14;
    v17[11] = 3;
    return result;
}


// 0x80c780c
int __fastcall sub_80C780C(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r4
    char v7; // r0
    signed int v8; // r4
    signed int v9; // r4
    int result; // r0
    unsigned int v15; // r0
    unsigned int v16; // r1
    signed int v17; // r3
    _BYTE *v18; // r2
    int v19; // [sp-8h] [bp-40h]
    int v20; // [sp+0h] [bp-38h]
    int v21; // [sp+4h] [bp-34h]
    int v22; // [sp+8h] [bp-30h]
    int v23; // [sp+Ch] [bp-2Ch]
    int v24; // [sp+10h] [bp-28h]

    v22 = a1;
    v23 = a2;
    v20 = a3;
    v21 = a4;
    v5 = 0;
    v6 = 3;
    if ( (*(*(v4 + 76) + 38) >> 2) >= *(*(v4 + 76) + 36) )
        v6 = 1;
    GetPositiveSignedRNG2();
    if ( (v7 & 3) < v6 )
    {
        v8 = 0;
        do
        {
            v19 = byte_80C78D4[3 * *(v4 + 22) + v8];
            if ( object_checkPanelParameters(v19, v23, v20, v21) )
                *(&v24 + v5++) = v19 | 16 * v23;
            ++v8;
        }
        while ( v8 < 3 );
        if ( v5 )
            goto LABEL_20;
    }
    v9 = 0;
    do
    {
        result = byte_80C78D4[3 * *(v4 + 22) + v9];
        if ( result != v22 )
        {
            result = object_getPanelsInColumnIgnoreRowFiltered(result, v23, v20, v21);
            v5 += result;
        }
        ++v9;
    }
    while ( v9 < 3 );
    if ( v5 )
    {
LABEL_20:
        GetPositiveSignedRNG2();
        __asm { SVC         6 }
        v15 = *(&v24 + v5);
        v16 = v15 >> 4;
        result = v15 & 7;
        v17 = 1;
        while ( 1 )
        {
            v18 = *(v4 + 4 * v17 + 100);
            if ( v18 )
                break;
            if ( ++v17 >= 3 )
                return result;
        }
        v18[20] = result;
        v18[21] = v16;
        v18[11] = 3;
    }
    return result;
}


// 0x80c78dc
signed int sub_80C78DC()
{
    int v0; // r5
    signed int v1; // r3
    int v2; // r1
    signed int result; // r0

    v1 = 0;
    do
    {
        v2 = *(v0 + 4 * v1 + 100);
        if ( v2 )
        {
            result = 1;
            *(v2 + 11) = 1;
        }
        ++v1;
    }
    while ( v1 < 3 );
    return result;
}


// 0x80c78f8
signed int sub_80C78F8()
{
    int v0; // r5
    signed int v1; // r3
    int v2; // r1
    signed int result; // r0

    v1 = 0;
    do
    {
        v2 = *(v0 + 4 * v1 + 100);
        if ( v2 )
        {
            result = *(*(v0 + 76) + 19);
            if ( result == *(v2 + 19) )
            {
                result = 4;
                *(v2 + 11) = 4;
            }
        }
        ++v1;
    }
    while ( v1 < 3 );
    return result;
}


// 0x80c791e
signed int sub_80C791E()
{
    int v0; // r5
    signed int v1; // r3
    int v2; // r1
    signed int result; // r0

    v1 = 0;
    do
    {
        v2 = *(v0 + 4 * v1 + 100);
        if ( v2 )
        {
            result = 5;
            *(v2 + 11) = 5;
        }
        ++v1;
    }
    while ( v1 < 3 );
    return result;
}


// 0x80c793c
int sub_80C793C()
{
    int v0; // r5

    return (*(&off_80C7950 + *(v0 + 8)))();
}


// 0x80c795c
signed int sub_80C795C()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 6) = 0;
    *(v0 + 34) = *&byte_80C7978[2 * *(v0 + 4)];
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c7980
int sub_80C7980()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() || *(*(v0 + 76) + 9) != 12 )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        result = battle_isTimeStop();
        if ( v2 )
            result = (*(&off_80C79B0 + *(v0 + 9)))();
    }
    return result;
}


// 0x80c79bc
int sub_80C79BC()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
LABEL_7:
        if ( *(v0 + 6) < *(v0 + 5) )
            sub_80C7A94();
        *(v0 + 6) = 0;
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
        return result;
    }
    if ( *(v0 + 32) >= (*(v0 + 34) >> 1) )
        sub_80C7B88();
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
        goto LABEL_7;
    return result;
}


// 0x80c7a06
int sub_80C7A06()
{
    int v0; // r5
    int result; // r0

    result = *(*(*(v0 + 76) + 88) + 160);
    if ( result == 20 )
    {
        *(v0 + 9) = 8;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80c7a20
int __fastcall sub_80C7A20(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // r0
    unsigned __int8 v7; // vf
    int v8; // r0
    int v9; // r1

    if ( *(v4 + 10) )
    {
        v6 = *(v4 + 32);
        v7 = __OFSUB__(v6, 1);
        result = v6 - 1;
        *(v4 + 32) = result;
        if ( (result < 0) ^ v7 )
        {
            v8 = *(v4 + 6);
            v9 = *(v4 + 5);
            if ( v8 >= v9 )
            {
                result = 8;
                *(v4 + 8) = 8;
            }
            else
            {
                sub_80C7BCC(v8, v9, a3, a4);
                ++*(v4 + 6);
                result = 18;
                *(v4 + 32) = 18;
            }
        }
    }
    else
    {
        *(v4 + 10) = 4;
        result = 18;
        *(v4 + 32) = 18;
    }
    return result;
}


// 0x80c7a58
int sub_80C7A58()
{
    int v0; // r5
    _DWORD *v1; // r1

    v1 = *(v0 + 80);
    if ( *v1 == v0 )
        *v1 = 0;
    return object_genericDestroy();
}


// 0x80c7a6c
int __fastcall sub_80C7A6C(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int *v6; // r7
    int result; // r0
    char v8; // [sp+8h] [bp-Ch]
    int v9; // [sp+Ch] [bp-8h]

    v8 = a3;
    object_spawnType3(27, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 14) = v8;
        *(v4 + 76) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v9 + 22);
        *(v4 + 80) = v6;
        *v6 = v4;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c7a94
unsigned __int8 *__noreturn sub_80C7A94()
{
    unsigned __int8 *v0; // r5
    signed int v1; // r4
    int v2; // r0
    char v3; // r0
    signed int v4; // r4
    unsigned __int8 *result; // r0
    unsigned __int8 *v6; // r6
    signed int v7; // r7
    int v8; // r2
    unsigned __int8 *v9; // r6
    int v14; // r2
    int v15; // [sp+0h] [bp-28h]

    v1 = 0;
    v2 = v0[5];
    if ( v2 == 1 )
    {
        result = object_getPanelsExceptCurrentFilterred(
                             8 * v0[22],
                             &byte_80C7B78[8 * v0[22]],
                             *&byte_80C7B78[8 * v0[22]],
                             *&byte_80C7B78[8 * v0[22] + 4]);
        v9 = result;
        if ( result )
        {
            GetPositiveSignedRNG2();
            __asm { SVC         6 }
            v14 = v0[121];
            v0[v14 + 96] = *(&v15 + v9);
            v0[121] = v14 + 1;
            result = &v0[v0[6] + 116];
            *result = 1;
        }
    }
    else
    {
        if ( v2 != 3 )
            v1 = 8;
        GetPositiveSignedRNG2();
        v4 = byte_80C7B50[(v3 & 7) + v1];
        result = object_getPanelsExceptCurrentFilterred(
                             8 * v0[22],
                             &byte_80C7B64[8 * v0[22]],
                             *&byte_80C7B64[8 * v0[22]],
                             *&byte_80C7B64[8 * v0[22] + 4]);
        v6 = result;
        if ( result )
        {
            sub_8000C72(&v15, result, result);
            v7 = 0;
            do
            {
                v8 = v0[121];
                v0[v8 + 96] = *(&v15 + v7);
                v0[121] = v8 + 1;
                ++v7;
            }
            while ( v7 < v4 && v7 < v6 );
            result = &v0[v0[6] + 116];
            *result = v7;
        }
    }
    return result;
}


// 0x80c7b88
char *sub_80C7B88()
{
    int v0; // r5
    int v1; // r6
    int v2; // r4
    int v3; // r7
    int v4; // r4
    unsigned int v5; // r0
    __int64 v6; // r0
    char *result; // r0

    v1 = *(*(v0 + 6) + 115 + v0);
    v2 = 0;
    v3 = 0;
    while ( v2 < *(v0 + 6) - 1 )
        v3 += *(v2++ + 116 + v0);
    v4 = 0;
    do
    {
        v5 = *(v3 + 96 + v0 + v4);
        HIDWORD(v6) = v5 >> 4;
        LODWORD(v6) = v5 & 7;
        result = object_highlightPanel(v6);
        ++v4;
    }
    while ( v4 < v1 );
    return result;
}


// 0x80c7bcc
int __fastcall sub_80C7BCC(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    signed int v6; // r4
    int v7; // r7
    int v8; // r4
    unsigned int v9; // r0
    int v10; // ST04_4
    int v11; // r6
    int result; // r0

    v5 = *(*(v4 + 6) + 116 + v4);
    v6 = 0;
    v7 = 0;
    while ( v6 < *(v4 + 6) )
        v7 += *(v6++ + 116 + v4);
    v8 = 0;
    do
    {
        v9 = *(v7 + 96 + v4 + v8);
        v10 = v5;
        v11 = *(v4 + 44);
        result = sub_80C7D50(v9 & 7, v9 >> 4, *(v4 + 14), a4);
        v5 = v10;
        ++v8;
    }
    while ( v8 < v10 );
    return result;
}


// 0x80c7c18
void sub_80C7C18()
{
    int v0; // r5

    (*(&off_80C7C30 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80c7c3c
int __noreturn sub_80C7C3C()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1
    int v6; // r1
    int v7; // r2

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 20, 20);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    if ( *(v0 + 4) == 1 )
    {
        object_setupCollisionData(v2, 10, 5, 3);
        object_setCollisionStatusEffect1(16);
    }
    else
    {
        object_setupCollisionData(v2, 4, 5, 3);
    }
    v4 = object_setCollisionHitEffect(3);
    object_presentCollisionData(v4, v5);
    PlaySoundEffect(302, v6, v7);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c7cc0
void __noreturn sub_80C7CC0()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        v1 = battle_isTimeStop();
        if ( v3 )
            v1 = (*(&off_80C7D04 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80c7d08
int sub_80C7D08()
{
    int v0; // r5
    int result; // r0
    __int64 v2; // r0
    int v3; // r0
    unsigned __int8 v4; // vf
    int v5; // r0

    if ( *(v0 + 10) )
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        LODWORD(v2) = *(v0 + 18);
        HIDWORD(v2) = *(v0 + 19);
        object_highlightPanel(v2);
        v3 = *(v0 + 34);
        v4 = __OFSUB__(v3--, 1);
        *(v0 + 34) = v3;
        if ( ((v3 < 0) ^ v4) | (v3 == 0) )
            object_clearCollisionRegion();
        v5 = *(v0 + 32);
        v4 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v4) | (result == 0) )
        {
            object_clearCollisionRegion();
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 32) = 15;
        result = 10;
        *(v0 + 34) = 10;
    }
    return result;
}


// 0x80c7d50
int __fastcall sub_80C7D50(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(28, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c7d78
int sub_80C7D78()
{
    int v0; // r5

    return (*(&off_80C7D8C + *(v0 + 8)))();
}


// 0x80c7d98
int sub_80C7D98()
{
    int v0; // r5
    char v1; // zf
    int v2; // r1
    int v3; // r1
    int v4; // r0
    _BYTE *v5; // r0
    int v7; // r0
    int v8; // r1
    _DWORD *v9; // r0

    battle_isBattleOver();
    if ( v1 )
    {
        if ( object_isCurrentPanelValid() )
        {
            v2 = *(v0 + 19);
            *(v0 + 52) = object_getCoordinatesForPanels(*(v0 + 18));
            *(v0 + 56) = v3;
            *(v0 + 60) = 6815744;
            *v0 |= 3u;
            sprite_load(v0, 128, 16, 5);
            sprite_hasShadow();
            *(v0 + 16) = 0;
            sprite_setAnimation(v0, 0);
            sprite_loadAnimationData(v0);
            v4 = object_getFlip(v0);
            sprite_setFlip(v0, v4);
            *(v0 + 72) = 0;
            v5 = object_createCollisionData();
            if ( v5 )
            {
                object_setupCollisionData(v5, 21, 5, 1);
                object_setCollisionHitEffect(0);
                v7 = object_clearCollisionRegion();
                object_presentCollisionData(v7, v8);
                v9 = *(v0 + 96);
                if ( v9 )
                    ++*v9;
                *(v0 + 8) = 4;
                sub_80C7E24();
            }
        }
    }
    return object_freeMemory();
}


// 0x80c7e24
void __noreturn sub_80C7E24()
{
    int v0; // r5
    _DWORD *v1; // r0
    int v2; // r0
    int v3; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( *(*(v0 + 84) + 112) )
    {
        sub_80C7EC8();
        object_clearCollisionRegion();
        v1 = *(v0 + 96);
        if ( v1 )
            --*v1;
        *(v0 + 8) = 8;
    }
    else
    {
        (*(&off_80C7E68 + *(v0 + 9)))();
        object_updateSprite();
        object_presentCollisionData(v2, v3);
    }
}


// 0x80c7e6c
int sub_80C7E6C()
{
    int v0; // r5
    int result; // r0
    int v2; // r1
    int v3; // r0
    unsigned __int8 v4; // vf

    if ( *(v0 + 10) || *(v0 + 62) >= 30 )
    {
        v2 = *(v0 + 72) + 0x2000;
        *(v0 + 72) = v2;
        v3 = *(v0 + 60);
        v4 = __OFSUB__(v3, v2);
        result = v3 - v2;
        *(v0 + 60) = result;
        if ( ((result < 0) ^ v4) | (result == 0) )
            object_isCurrentPanelSolid();
    }
    else
    {
        object_setCollisionRegion(1);
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80c7ec8
int sub_80C7EC8()
{
    int v0; // r5
    int v1; // r3
    int *v2; // r6
    int v3; // ST00_4
    int *v4; // ST04_4
    int v5; // r7
    int v6; // r6
    int v7; // r1
    int v8; // r2

    v1 = 0;
    v2 = &dword_80C7F00;
    do
    {
        v3 = v1;
        v4 = v2;
        GetRNG2();
        v5 = v2[1];
        v6 = *v2;
        sub_80E1084(2, *(v0 + 52), *(v0 + 56), 0);
        v2 = v4 + 2;
        v1 = v3 + 1;
    }
    while ( v3 - 1 < 0 );
    return PlaySoundEffect(217, v7, v8);
}


// 0x80c7f20
int __fastcall sub_80C7F20(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(29, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 96) = v6;
    }
    return result;
}


// 0x80c7f40
void sub_80C7F40()
{
    int v0; // r5

    (*(&off_80C7F58 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80c7f64
int __noreturn sub_80C7F64()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    *(v0 + 54) += 136 * object_getFrontDirection(v0);
    sprite_load(v0, 128, 16, 18);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 4, 5, 3);
    object_setCollisionRegion(8);
    v4 = object_setCollisionHitEffect(255);
    object_presentCollisionData(v4, v5);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c7fdc
void __noreturn sub_80C7FDC()
{
    int v0; // r5
    char v1; // zf
    int v2; // r0
    int v3; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
        goto LABEL_11;
    if ( *(*(v0 + 84) + 112) )
        object_clearCollisionRegion();
    if ( *(*(v0 + 76) + 9) != 11 )
    {
LABEL_11:
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        battle_isTimeStop();
        if ( v1 )
        {
            v2 = (*(&off_80C8028 + *(v0 + 9)))();
            object_presentCollisionData(v2, v3);
        }
    }
}


// 0x80c802c
int sub_80C802C()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            object_clearCollisionRegion();
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        result = *&byte_80C8068[2 * *(v0 + 4)];
        *(v0 + 32) = result;
    }
    return result;
}


// 0x80c8070
int __fastcall sub_80C8070(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(30, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c8098
int sub_80C8098()
{
    int v0; // r5

    return (*(&off_80C80AC + *(v0 + 8)))();
}


// 0x80c80b8
int sub_80C80B8()
{
    int v0; // r5
    _BYTE *v1; // r0
    int result; // r0
    int v3; // r0
    int v4; // r1
    int v5; // r0
    int v6; // r1
    int v7; // r2

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    v1 = object_createCollisionData();
    if ( !v1 )
        return object_freeMemory();
    object_setupCollisionData(v1, 4, 5, 3);
    v3 = object_setCollisionHitEffect(1);
    object_presentCollisionData(v3, v4);
    SpawnT4BattleObjectWithId0(v0, v5, *(v0 + 52), *(v0 + 56), 0x200000);
    PlaySoundEffect(262, v6, v7);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c8100
void __noreturn sub_80C8100()
{
    int v0; // r5
    char v1; // zf
    int v2; // r0
    int v3; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || *(*(v0 + 84) + 112) )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        battle_isTimeStop();
        if ( v1 )
        {
            v2 = (*(&off_80C8140 + *(v0 + 9)))();
            object_presentCollisionData(v2, v3);
        }
    }
}


// 0x80c8144
char *sub_80C8144()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int v3; // r0
    int v4; // r0
    int v5; // r1
    int v6; // r2
    __int64 v7; // r0
    char *result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 32) = *(v0 + 5);
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( !(((v1 < 0) ^ v2) | (v1 == 0)) )
        goto LABEL_7;
    v3 = object_getFrontDirection(v0) + *(v0 + 18);
    *(v0 + 18) = v3;
    if ( object_isValidPanel(v3, *(v0 + 19)) )
    {
        object_setCoordinatesFromPanels(v0);
        object_updateCollisionPanels(v0);
        v4 = *(v0 + 5);
        *(v0 + 32) = v4;
        SpawnT4BattleObjectWithId0(v0, v4, *(v0 + 52), *(v0 + 56), 0x200000);
        PlaySoundEffect(262, v5, v6);
LABEL_7:
        LODWORD(v7) = *(v0 + 18);
        HIDWORD(v7) = *(v0 + 19);
        return object_highlightPanel(v7);
    }
    object_clearCollisionRegion();
    result = &dword_8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80c81a6
int __fastcall sub_80C81A6(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(31, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c81cc
void sub_80C81CC()
{
    int v0; // r5

    (*(&off_80C81E4 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80c81f0
signed int __noreturn sub_80C81F0()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 8, 12);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 13;
    *(v0 + 17) = 13;
    sprite_setAnimation(v0, 0xDu);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c8232
int sub_80C8232()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() || *(*(v0 + 76) + 9) != 11 )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        result = battle_isTimeStop();
        if ( v2 )
            result = (*(&off_80C8264 + *(v0 + 9)))();
    }
    return result;
}


// 0x80c8268
char *sub_80C8268()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    char *result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        sub_80C832E(*(v0 + 6));
        *(v0 + 32) = *(v0 + 5);
        *(v0 + 34) = 1;
        sub_80C82D0();
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( !(((v1 < 0) ^ v2) | (v1 == 0)) )
        return sub_80C8310(*(v0 + 6));
    result = &dword_8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80c829c
int sub_80C829C()
{
    sub_80C8368();
    return object_genericDestroy();
}


// 0x80c82a8
int __fastcall sub_80C82A8(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(32, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c82d0
int sub_80C82D0()
{
    int v0; // r5
    char v1; // r4
    char v2; // r0
    int v3; // r1
    int v4; // r2
    int v5; // r6
    int v6; // r7
    int v7; // r5
    int v8; // r3
    int result; // r0
    int v10; // [sp+0h] [bp-18h]
    int v11; // [sp+4h] [bp-14h]

    v1 = 1;
    do
    {
        v2 = object_getFrontDirection(v0) * v1 + *(v0 + 18);
        v3 = *(v0 + 19);
        v4 = *(v0 + 14);
        v5 = *(v0 + 44);
        v6 = (*(v0 + 5) << 16) | 0xB000003;
        v7 = *(v0 + 76);
        sub_80CC9FC(v2, v3, v4, v8);
        v0 = v11;
        v1 = v10 + 1;
        result = *(v11 + 6);
    }
    while ( v10 + 1 <= result );
    return result;
}


// 0x80c8310
char *__fastcall sub_80C8310(signed int a1)
{
    Battle *v1; // r5
    signed int v2; // r4
    signed int v3; // r6
    __int64 v4; // r0
    char *result; // r0

    v2 = 1;
    v3 = a1;
    do
    {
        LODWORD(v4) = object_getFrontDirection(v1) * v2 + v1->panelX;
        HIDWORD(v4) = v1->panelY;
        result = object_highlightPanel(v4);
        ++v2;
    }
    while ( v2 <= v3 );
    return result;
}


// 0x80c832e
int __fastcall sub_80C832E(signed int a1)
{
    Battle *v1; // r5
    signed int v2; // r4
    signed int v3; // r6
    bool v4; // zf
    int v5; // r3
    int result; // r0
    int v7; // [sp-8h] [bp-14h]
    int v8; // [sp-4h] [bp-10h]

    v2 = 1;
    v3 = a1;
    do
    {
        v7 = object_getFrontDirection(v1) * v2 + v1->panelX;
        v8 = v1->panelY;
        v4 = object_isValidPanel(v7, v8) == 0;
        result = v7;
        if ( v4 )
            break;
        result = sub_80E1B1E(v7, v8, 4 * (v2++ - 1), v5);
    }
    while ( v2 <= v3 );
    return result;
}


// 0x80c8368
int sub_80C8368()
{
    int v0; // r5
    signed int v1; // r4
    int result; // r0

    v1 = 0;
    do
    {
        result = *(v0 + 4 * v1 + 96);
        if ( result )
            result = sub_80E1B3C(result);
        ++v1;
    }
    while ( v1 < 5 );
    return result;
}


// 0x80c8388
void sub_80C8388()
{
    int v0; // r5

    (*(&off_80C83AC + *(v0 + 8)))();
    if ( *(v0 + 4) == 4 )
        object_updateSpriteTimestop();
    else
        object_updateSpritePaused();
}


// 0x80c83b8
int __noreturn sub_80C83B8()
{
    int v0; // r5
    int v1; // r0
    char *v2; // r3
    int v3; // r2
    int v4; // r3
    u8 v9; // r0
    _BYTE *v10; // r0
    int result; // r0
    int v12; // r0
    int v13; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    v1 = *&byte_80C8454[4 * *(v0 + 4)];
    v2 = &byte_80C846C[2 * *(v0 + 5)];
    v3 = *v2;
    v4 = v2[1] * v1;
    *(v0 + 64) = v3 * v1;
    *(v0 + 68) = v4;
    __asm { SVC         6 }
    *(v0 + 32) = *&byte_80C8488[4 * *(v0 + 5)];
    sprite_load(v0, 128, 8, 12);
    sprite_noShadow(v0);
    *v0 |= 2u;
    v9 = *(&dword_80C8480 + *(v0 + 5));
    *(v0 + 16) = v9;
    *(v0 + 17) = v9;
    sprite_setAnimation(v0, v9);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    sprite_setFlip(v0, *(&dword_80C8478 + *(v0 + 5)));
    v10 = object_createCollisionData();
    if ( !v10 )
        return object_freeMemory();
    object_setupCollisionData(v10, 4, 5, 3);
    v12 = object_setCollisionHitEffect(1);
    object_presentCollisionData(v12, v13);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c8498
void __noreturn sub_80C8498()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || *(*(v0 + 84) + 112) )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        if ( *(v0 + 4) == 4 || (v1 = battle_isTimeStop(), v3) )
            v1 = (*(&off_80C84DC + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80c84e0
int sub_80C84E0()
{
    int v0; // r5
    __int64 v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int result; // r0

    *(v0 + 52) += *(v0 + 64);
    *(v0 + 56) += *(v0 + 68);
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    LODWORD(v1) = *(v0 + 18);
    HIDWORD(v1) = *(v0 + 19);
    object_highlightPanel(v1);
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v3) | (result == 0) )
    {
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c8514
int __fastcall sub_80C8514(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(33, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c853c
void sub_80C853C()
{
    int v0; // r5

    (*(&off_80C8560 + *(v0 + 8)))();
    if ( *(v0 + 4) == 4 )
        object_updateSpriteTimestop();
    else
        object_updateSpritePaused();
}


// 0x80c856c
signed int __noreturn sub_80C856C()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 52) += 1572864 * object_getFrontDirection(v0);
    *(v0 + 60) = 0x100000;
    sprite_load(v0, 128, 16, 35);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 1;
    *(v0 + 17) = 1;
    sprite_setAnimation(v0, 1u);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c85c0
int sub_80C85C0()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else if ( *(v0 + 4) == 4 || (result = battle_isTimeStop(), v2) )
    {
        result = (*(&off_80C85EC + *(v0 + 9)))();
    }
    return result;
}


// 0x80c85f4
int sub_80C85F4()
{
    int v0; // r5
    int result; // r0
    int v6; // r1
    int v7; // r0

    if ( *(v0 + 10) )
    {
        *(v0 + 52) += *(v0 + 64);
        *(v0 + 60) -= *(v0 + 72);
        object_setPanelsFromCoordinates(v0);
        v7 = *(v0 + 32);
        _VF = __OFSUB__(v7, 1);
        result = v7 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ _VF) | (result == 0) )
        {
            if ( object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & 0x10 )
            {
                *(v0 + 9) = 4;
                result = 0;
                *(v0 + 10) = 0;
            }
            else
            {
                result = 8;
                *(v0 + 8) = 8;
            }
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 64) = object_getFrontDirection(v0) << 18;
        __asm { SVC         6 }
        *(v0 + 32) = 0;
        result = 0x100000;
        v6 = *(v0 + 32);
        __asm { SVC         6 }
        *(v0 + 72) = 0x100000;
    }
    return result;
}


// 0x80c8660
signed int __fastcall __noreturn sub_80C8660(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r4
    int v5; // r6
    int v6; // r4
    int v7; // r6
    signed int result; // r0
    int v9; // [sp-8h] [bp-14h]
    int v10; // [sp-4h] [bp-10h]

    PlaySoundEffect(285, a2, a3);
    v4 = *(v3 + 4) | 0x100;
    v5 = *(v3 + 44);
    sub_80C8806(*(v3 + 18), *(v3 + 19), *(v3 + 14), 256);
    v9 = object_getFrontDirection(v3) + *(v3 + 18);
    v10 = *(v3 + 19);
    if ( object_getPanelParameters(v9, v10) & 0x10 )
    {
        v6 = *(v3 + 4);
        v7 = *(v3 + 44);
        sub_80C8806(v9, v10, *(v3 + 14), 0);
    }
    result = 8;
    *(v3 + 8) = 8;
    return result;
}


// 0x80c86b0
int __fastcall sub_80C86B0(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(34, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c8708
int __noreturn sub_80C8708()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 12, 26);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 10, 5, 3);
    v4 = object_setCollisionHitEffect(2);
    object_presentCollisionData(v4, v5);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c876c
void __noreturn sub_80C876C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        if ( *(v0 + 4) == 4 || (v1 = battle_isTimeStop(), v3) )
            v1 = (*(&off_80C87B4 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80c87b8
int sub_80C87B8()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            object_clearCollisionRegion();
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80c87dc
int __noreturn sub_80C87DC()
{
    unsigned __int8 *v0; // r5

    if ( object_getPanelParameters(v0[18], v0[19]) & 0x10 && v0[4] >= 2 && v0[5] )
        object_crackPanel(v0[18], v0[19]);
    return object_genericDestroy();
}


// 0x80c8806
int __fastcall sub_80C8806(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(35, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c882c
void sub_80C882C()
{
    int v0; // r5

    (*(&off_80C8844 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c8850
int __noreturn sub_80C8850()
{
    int v0; // r5
    int v1; // r0

    sprite_load(v0, 128, 12, 0);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 7;
    *(v0 + 17) = 7;
    sprite_setAnimation(v0, 7u);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    object_setPanelsFromCoordinates(v0);
    *(v0 + 8) = 4;
    return sub_80C8892();
}


// 0x80c8892
int sub_80C8892()
{
    int v0; // r5
    int result; // r0

    if ( !battle_isBattleOver() )
        return (*(&off_80C88C0 + *(v0 + 9)))();
    SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80c88c8
signed int sub_80C88C8()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r4
    int v4; // r1
    int v5; // r1
    int v6; // r2
    int v7; // r0
    unsigned __int8 v8; // vf
    int v9; // r1
    unsigned int v10; // r0
    unsigned __int8 v11; // cf
    signed int result; // r0
    __int64 v13; // r0
    __int64 v14; // r0
    __int64 v15; // r0

    if ( !*(v0 + 11) )
    {
        v1 = *(v0 + 7);
        v2 = object_getCoordinatesForPanels(*(v0 + 6));
        v3 = *(v0 + 5);
        *(v0 + 64) = sub_8001330((v0 + 52), v2, v4);
        *(v0 + 68) = v5;
        *(v0 + 72) = v6;
        *(v0 + 32) = *(v0 + 5);
        *(v0 + 11) = 4;
    }
    v7 = *(v0 + 32);
    v8 = __OFSUB__(v7--, 1);
    *(v0 + 32) = v7;
    if ( (v7 < 0) ^ v8 )
    {
        object_setCoordinatesFromPanels(v0);
        *(v0 + 60) = 0;
        object_isCurrentPanelSolid();
    }
    *(v0 + 52) += *(v0 + 64);
    *(v0 + 56) += *(v0 + 68);
    v9 = *(v0 + 72);
    *(v0 + 60) += v9;
    *(v0 + 72) = v9 - 12288;
    object_setPanelsFromCoordinates(v0);
    v10 = *(v0 + 32);
    v11 = __CFSHR__(v10, 3);
    result = v10 >> 3;
    if ( v11 )
    {
        result = *(v0 + 4);
        if ( result >= 4 )
        {
            LODWORD(v13) = *(v0 + 6);
            HIDWORD(v13) = *(v0 + 7);
            object_highlightPanel(v13);
            LODWORD(v14) = *(v0 + 6);
            HIDWORD(v14) = *(v0 + 7) - 1;
            object_highlightPanel(v14);
            LODWORD(v15) = *(v0 + 6);
            HIDWORD(v15) = *(v0 + 7) + 1;
            result = object_highlightPanel(v15);
        }
    }
    return result;
}


// 0x80c89a4
signed int sub_80C89A4()
{
    int v0; // r5
    signed int result; // r0

    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80c89ac
int __fastcall sub_80C89AC(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    int v7; // [sp+0h] [bp-8h]

    object_spawnType3(36, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 22) = *(v7 + 22);
        *(v4 + 14) = 0;
        *(v4 + 44) = v5;
    }
    return result;
}


// 0x80c89c8
int sub_80C89C8()
{
    int v0; // r5
    int v1; // r4
    int v2; // r7
    int v3; // r6
    int result; // r0

    v1 = *(v0 + 22);
    sub_801BD3C(*(v0 + 18), *(v0 + 19), *(&dword_80C8A5C + (*(v0 + 4) & 3)), 4);
    v2 = *&byte_80C8A3C[4 * *(v0 + 4)];
    v3 = *(v0 + 44);
    object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), 0, 0);
    result = *(v0 + 4);
    if ( result == 5 )
        sub_80C8A60(*(v0 + 18), *(v0 + 19), 1);
    if ( result == 1 )
        sub_80C8A60(*(v0 + 18), *(v0 + 19), 1);
    return result;
}


// 0x80c8a60
void __fastcall __noreturn sub_80C8A60(int a1, int a2, int a3)
{
    int v3; // [sp+0h] [bp-10h]
    int v4; // [sp+4h] [bp-Ch]

    v3 = a1;
    v4 = a2;
    if ( a3 || !(object_getPanelParameters(a1, a2) & 0x40) )
        object_crackPanel(v3, v4);
}


// 0x80c8a7a
signed int __fastcall sub_80C8A7A(int a1, int a2, int a3, int a4)
{
    Battle *v4; // r5
    _BYTE *v5; // r7
    signed int result; // r0

    v5 = sub_80C89AC(a1, a2, a3, a4);
    v5[6] = v4->panelX + 3 * object_getFrontDirection(v4);
    v5[7] = v4->panelY;
    result = 35;
    v5[5] = 35;
    return result;
}


// 0x80c8aa4
void sub_80C8AA4()
{
    int v0; // r5

    (*(&off_80C8ABC + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80c8ac8
int __noreturn sub_80C8AC8()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1
    int v6; // r1
    int v7; // r2

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 16, 26);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 4, 5, 3);
    v4 = object_setCollisionHitEffect(1);
    object_presentCollisionData(v4, v5);
    *(v0 + 11) = 0;
    *(v0 + 7) = object_getFrontDirection(v0);
    PlaySoundEffect(262, v6, v7);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c8b3e
void __noreturn sub_80C8B3E()
{
    int v0; // r5
    char v1; // zf
    int v2; // r0
    int v3; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || *(*(v0 + 84) + 112) )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        battle_isTimeStop();
        if ( v1 )
        {
            v2 = (*(&off_80C8B7C + *(v0 + 9)))();
            object_presentCollisionData(v2, v3);
        }
    }
}


// 0x80c8b80
int sub_80C8B80()
{
    int v0; // r5
    int result; // r0
    int v2; // r1
    int v3; // r4
    int v4; // r1
    int v5; // r2
    int v6; // [sp-8h] [bp-10h]
    int v7; // [sp-4h] [bp-Ch]

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        result = *(v0 + 5) + *(v0 + 6);
        *(v0 + 32) = result;
        return result;
    }
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    v2 = *(v0 + 6);
    if ( result == v2 )
    {
        object_clearCollisionRegion();
        result = 240;
        *(v0 + 62) = 240;
        return result;
    }
    if ( result < v2 || result == 0 )
    {
        v6 = *(v0 + 7) + *(v0 + 18);
        v7 = *(v0 + 19);
        if ( object_isValidPanel(v6, v7) )
        {
            *(v0 + 18) = v6;
            v3 = object_getPanelParameters(v6, v7);
            if ( v3 & 0x10 && (!*(v0 + 11) || !(*&byte_80C8C3C[4 * *(v0 + 22)] & v3)) )
                goto LABEL_13;
        }
        else if ( *(v0 + 4) )
        {
            *(v0 + 11) = 1;
            *(v0 + 7) = -*(v0 + 7);
            sprite_setFlip(v0, *(v0 + 22) ^ *(v0 + 23) ^ 1);
LABEL_13:
            object_setCoordinatesFromPanels(v0);
            object_updateCollisionPanels(v0);
            object_setCollisionRegion(1);
            *(v0 + 62) = 0;
            PlaySoundEffect(262, v4, v5);
            result = *(v0 + 5) + *(v0 + 6);
            *(v0 + 32) = result;
            return result;
        }
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c8c44
int sub_80C8C44()
{
    return object_genericDestroy();
}


// 0x80c8c4c
int __fastcall sub_80C8C4C(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(37, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c8c74
void sub_80C8C74()
{
    int v0; // r5

    (*(&off_80C8C98 + *(v0 + 8)))();
    if ( *(v0 + 4) == 4 )
        object_updateSpriteTimestop();
    else
        object_updateSpritePaused();
}


// 0x80c8ca4
int __noreturn sub_80C8CA4()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r1
    int v5; // r0
    int v6; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 16, 2);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    v4 = 4;
    if ( *(v0 + 6) )
        v4 = 10;
    object_setupCollisionData(v2, v4, 5, 3);
    v5 = object_setCollisionHitEffect(1);
    object_presentCollisionData(v5, v6);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c8d10
void __noreturn sub_80C8D10()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        if ( *(v0 + 4) == 4 || (v1 = battle_isTimeStop(), v3) )
            v1 = (*(&off_80C8D58 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80c8d64
int __fastcall sub_80C8D64(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *(v3 + 9) = 4;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        PlaySoundEffect(247, 4, a3);
        result = 5;
        *(v3 + 32) = 5;
    }
    return result;
}


// 0x80c8d8e
int sub_80C8D8E()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            object_clearCollisionRegion();
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 1;
        result = *(v0 + 5) - 5;
        *(v0 + 32) = result;
    }
    return result;
}


// 0x80c8dbc
int sub_80C8DBC()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 2;
        result = 2;
        *(v0 + 32) = 2;
    }
    return result;
}


// 0x80c8de0
int __fastcall sub_80C8DE0(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(38, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c8e08
void sub_80C8E08()
{
    int v0; // r5

    (*(&off_80C8E20 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80c8e2c
signed int __noreturn sub_80C8E2C()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 16, 27);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c8e6e
int sub_80C8E6E()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() || *(*(v0 + 76) + 9) != 12 )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        result = battle_isTimeStop();
        if ( v2 )
            result = (*(&off_80C8EA0 + *(v0 + 9)))();
    }
    return result;
}


// 0x80c8eac
char *sub_80C8EAC()
{
    int v0; // r5
    char *result; // r0

    result = *(v0 + 11);
    if ( result == &byte_0[1] )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    else if ( result == &byte_0[2] )
    {
        *(v0 + 9) = 8;
        *(v0 + 10) = 0;
        result = sub_80C8FDC();
    }
    return result;
}


// 0x80c8ed0
int sub_80C8ED0()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r0
    unsigned __int8 v4; // vf
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        sub_80C8FA0();
        *(v0 + 16) = 2;
        *(v0 + 34) = 0;
    }
    sub_80C8FDC();
    v3 = *(v0 + 34);
    v4 = __OFSUB__(v3--, 1);
    *(v0 + 34) = v3;
    if ( ((v3 < 0) ^ v4) | (v3 == 0) )
    {
        PlaySoundEffect(299, v1, v2);
        *(v0 + 34) = 16;
    }
    result = *(v0 + 11);
    if ( result == 3 )
    {
        *(v0 + 16) = 3;
        *(v0 + 9) = 0;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80c8f14
int sub_80C8F14()
{
    int v0; // r5
    int v1; // r1
    int result; // r0
    int v7; // r0

    if ( *(v0 + 10) )
    {
        *(v0 + 56) += *(v0 + 68);
        object_setPanelsFromCoordinates(v0);
        v7 = *(v0 + 32);
        _VF = __OFSUB__(v7, 1);
        result = v7 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ _VF) | (result == 0) )
        {
            object_setCoordinatesFromPanels(v0);
            *(v0 + 9) = 0;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        v1 = *(v0 + 7) - *(v0 + 19);
        *(v0 + 68) = v1 << 18;
        result = 1572864 * v1;
        __asm { SVC         6 }
        *(v0 + 32) = 0;
    }
    return result;
}


// 0x80c8f60
int sub_80C8F60()
{
    int v0; // r5
    _DWORD *v1; // r1

    v1 = *(v0 + 96);
    if ( *v1 == v0 )
        *v1 = 0;
    return object_genericDestroy();
}


// 0x80c8f74
int __fastcall sub_80C8F74(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(39, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *v6 = v4;
        *(v4 + 22) = *(v11 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c8fa0
int sub_80C8FA0()
{
    int v0; // r5
    signed int v1; // r4
    char v2; // r0
    int v3; // r6
    int result; // r0

    v1 = 0;
    do
    {
        v2 = object_getFrontDirection(v0);
        v3 = *(v0 + 44);
        result = object_spawnCollisionRegion(-v2 * v1 + *(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
        if ( result )
            *(result + 32) = *(v0 + 5);
        ++v1;
    }
    while ( v1 < 3 );
    return result;
}


// 0x80c8fdc
char *sub_80C8FDC()
{
    Battle *obj; // r5
    signed int i; // r4
    __int64 currPanel; // r0
    char *result; // r0

    i = 0;
    do
    {
        LODWORD(currPanel) = -object_getFrontDirection(obj) * i + obj->panelX;
        HIDWORD(currPanel) = obj->panelY;
        result = object_highlightPanel(currPanel);
        ++i;
    }
    while ( i < 3 );
    return result;
}


// 0x80c8ffc
void sub_80C8FFC()
{
    int v0; // r5

    (*(&off_80C9014 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c9024
void __noreturn sub_80C9024()
{
    int v0; // r5
    _BYTE *v1; // r0
    int v2; // r0
    int v3; // r1

    sprite_load(v0, 128, 20, 5);
    *(v0 + 16) = 11;
    sprite_setAnimation(v0, 0xBu);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    sprite_update(v0);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 64) = object_getFrontDirection(v0);
    *(v0 + 14) = 5;
    v1 = object_createCollisionData();
    if ( v1 )
    {
        v2 = object_setupCollisionData(v1, 4, 5, 0);
        object_presentCollisionData(v2, v3);
        *(v0 + 8) = 4;
    }
    else
    {
        object_freeMemory();
    }
}


// 0x80c9074
void __noreturn sub_80C9074()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    char v3; // zf
    int v4; // r0
    int v5; // r1

    object_removeCollisionData();
    if ( *(*(v0 + 84) + 112) )
    {
        PlaySoundEffect(189, v1, v2);
        object_clearCollisionRegion();
        sub_80C913C();
    }
    battle_isBattleOver();
    if ( v3
        && (*(v0 + 18) += *(v0 + 64),
                object_setCoordinatesFromPanels(v0),
                object_updateCollisionPanels(v0),
                (v4 = object_isCurrentPanelValid()) != 0) )
    {
        object_presentCollisionData(v4, v5);
    }
    else
    {
        *v0 &= 0xFDu;
        *(v0 + 8) = 12;
    }
}


// 0x80c90dc
int sub_80C90DC()
{
    int v0; // r5
    int v1; // r4
    char v2; // zf
    int v3; // r0
    int v4; // r1
    int v5; // r6
    int v6; // r1
    int v7; // r7
    int v8; // r0
    int v9; // r2
    int v10; // r1
    int v11; // r3
    int *v12; // r0
    int result; // r0

    v1 = *(v0 + 76);
    *v0 = *v0 & 0xFD | *v1 & 2;
    sub_802CE30();
    if ( v2 )
        goto LABEL_6;
    v3 = sub_800F26C(*(v1 + 40));
    v5 = sub_8018842(v3, v4, 27) << 16;
    v7 = v6 << 16;
    v8 = object_getFrontDirection(v0);
    v9 = *(v1 + 56);
    v10 = *(v1 + 52) + v5 * -v8;
    v11 = *(v1 + 60) + v7;
    v12 = (v0 + 52);
    *v12 = v10;
    v12[1] = v9;
    v12[2] = v11;
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
LABEL_6:
        sub_802CDE6();
        *v0 &= 0xFDu;
        result = 12;
        *(v0 + 8) = 12;
    }
    return result;
}


// 0x80c913c
int __noreturn sub_80C913C()
{
    int v0; // r5
    int result; // r0
    int *v2; // r1
    int v3; // [sp-8h] [bp-Ch]
    int v4; // [sp-4h] [bp-8h]

    v3 = *(v0 + 18);
    v4 = *(v0 + 19);
    if ( !(object_getPanelParameters(v3, v4) & 0x600000) )
        return 0;
    result = sub_800AE54(v3, v4, 1 - *(v0 + 22));
    if ( !result )
        return 0;
    *(v0 + 76) = result;
    v2 = &dword_203CFB0;
    if ( !*(v0 + 22) )
        v2 = &dword_203CFBC;
    v2[2] = result;
    v2[1] = v0;
    *v2 = 0;
    return result;
}


// 0x80c9184
int __fastcall sub_80C9184(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-10h]
    char v8; // [sp+4h] [bp-Ch]
    int v9; // [sp+8h] [bp-8h]

    v7 = a1;
    v8 = a2;
    sub_8003374(40, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v9 + 22);
    }
    return result;
}


// 0x80c91a0
void sub_80C91A0()
{
    int v0; // r5

    (*(&off_80C91B8 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80c91c4
signed int __noreturn sub_80C91C4()
{
    int v0; // r5
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 16, 34);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c91fe
int sub_80C91FE()
{
    Battle *obj; // r5
    int result; // r0
    char isTimeStop; // zf

    if ( battle_isBattleOver() || LOBYTE(obj->objParams) != 4 && *(obj->parent + 9) != 12 )
    {
        result = 8;
        *&obj->currState = 8;
    }
    else
    {
        result = battle_isTimeStop();
        if ( isTimeStop )
            result = (*(&off_80C9234 + obj->currAction))();
    }
    return result;
}


// 0x80c9238
int __fastcall sub_80C9238(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r1
    int v5; // r0
    int v6; // r0
    unsigned __int8 v7; // vf
    int v8; // r0
    int result; // r0
    int v10; // r0
    int v11; // r1

    if ( !*(v3 + 10) )
    {
        *(v3 + 10) = 4;
        *(v3 + 96) = 0;
        *(v3 + 32) = 4 * *(v3 + 6) * *(v3 + 5) + *(v3 + 6);
        *(v3 + 34) = *(v3 + 6);
        v4 = *(v3 + 6);
        sub_80C92F4(*(v3 + 96));
        *(v3 + 100) = 0;
    }
    v5 = *(v3 + 100) - 1;
    *(v3 + 100) = v5;
    if ( v5 <= 0 )
    {
        PlaySoundEffect(296, a2, a3);
        *(v3 + 100) = 16;
    }
    v6 = *(v3 + 32);
    v7 = __OFSUB__(v6--, 1);
    *(v3 + 32) = v6;
    if ( ((v6 < 0) ^ v7) | (v6 == 0) )
    {
        result = 8;
        *(v3 + 8) = 8;
    }
    else
    {
        sub_80C9360(*(v3 + 96));
        v8 = *(v3 + 34);
        v7 = __OFSUB__(v8, 1);
        result = v8 - 1;
        *(v3 + 34) = result;
        if ( ((result < 0) ^ v7) | (result == 0) )
        {
            v10 = (*(v3 + 96) + 1) & 3;
            *(v3 + 96) = v10;
            *(v3 + 16) = byte_80C92C4[4 * *(v3 + 22) + v10];
            *(v3 + 34) = *(v3 + 6);
            v11 = *(v3 + 6);
            result = sub_80C92F4(*(v3 + 96));
        }
    }
    return result;
}


// 0x80c92cc
Battle *__fastcall sub_80C92CC(char r0PanelX, int r1PanelY, int r2Element, int r3)
{
    Battle *obj; // r5
    int v5; // r6
    Battle *outObj; // r0
    char panelX; // [sp+0h] [bp-14h]
    u8 panelY; // [sp+4h] [bp-10h]
    u8 element; // [sp+8h] [bp-Ch]
    Battle *parent; // [sp+Ch] [bp-8h]

    panelX = r0PanelX;
    panelY = r1PanelY;
    element = r2Element;
    object_spawnType3(41, r1PanelY, r2Element, r3);
    outObj = obj;
    if ( obj )
    {
        obj->panelX = panelX;
        obj->panelY = panelY;
        obj->Element = element;
        *&obj->damage = v5;
        obj->parent = &parent->objFlags;
        *&obj->Alliance = *&parent->Alliance;
        obj->objFlags |= 0x10u;
    }
    return outObj;
}


// 0x80c92f4
int __fastcall sub_80C92F4(int a1)
{
    int v1; // r5
    char *v2; // r4
    signed int v3; // r6
    char *v4; // r2
    bool v5; // zf
    __int64 v6; // r0
    int v7; // r1
    int v8; // r6
    __int64 v10; // [sp-8h] [bp-1Ch]
    __int16 v11; // [sp+4h] [bp-10h]

    v2 = &byte_80C93B0[4 * byte_80C93C4[4 * *(v1 + 22) + a1]];
    v3 = 0;
    do
    {
        v4 = &v2[2 * v3];
        LODWORD(v10) = *v4 + *(v1 + 18);
        HIDWORD(v10) = v4[1] + *(v1 + 19);
        v5 = object_isValidPanel(v10, SHIDWORD(v10)) == 0;
        v6 = v10;
        if ( !v5 )
        {
            object_highlightPanel(v10);
            v7 = HIDWORD(v10);
            HIDWORD(v10) = v3;
            v8 = *(v1 + 44);
            LODWORD(v6) = object_spawnCollisionRegion(v10, v7, *(v1 + 14), 0);
            v3 = HIDWORD(v10);
            *(v6 + 32) = v11;
        }
        ++v3;
    }
    while ( v3 <= 1 );
    return v6;
}


// 0x80c9360
__int64 __fastcall sub_80C9360(int a1)
{
    unsigned __int8 *v1; // r5
    char *v2; // r4
    signed int v3; // r6
    char *v4; // r2
    bool v5; // zf
    __int64 result; // r0
    __int64 v7; // [sp-8h] [bp-1Ch]

    v2 = &byte_80C93B0[4 * byte_80C93C4[4 * v1[22] + a1]];
    v3 = 0;
    do
    {
        v4 = &v2[2 * v3];
        LODWORD(v7) = *v4 + v1[18];
        HIDWORD(v7) = v4[1] + v1[19];
        v5 = object_isValidPanel(v7, SHIDWORD(v7)) == 0;
        result = v7;
        if ( !v5 )
        {
            object_highlightPanel(v7);
            result = v7;
        }
        ++v3;
    }
    while ( v3 <= 1 );
    return result;
}


// 0x80c93cc
void sub_80C93CC()
{
    int v0; // r5

    (*(&off_80C93E4 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c93f0
int sub_80C93F0()
{
    int v0; // r5
    int result; // r0
    _DWORD *v2; // r0

    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        v2 = *(v0 + 76);
        if ( v2 )
            *v2 = 0;
        result = object_genericDestroy();
    }
    return result;
}


// 0x80c940c
int __noreturn sub_80C940C()
{
    int v0; // r5
    u8 v1; // r0
    int v2; // r0
    _BYTE *v3; // r0
    _BYTE *v4; // r7
    int v6; // r1
    int v7; // r0

    sprite_load(v0, 128, 16, 22);
    sprite_noShadow(v0);
    *v0 |= 2u;
    v1 = 0;
    if ( *(v0 + 4) == 2 || *(v0 + 5) == 12 )
        v1 = 2;
    *(v0 + 16) = v1;
    *(v0 + 17) = v1;
    sprite_setAnimation(v0, v1);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v2 = object_getFlip(v0);
    sprite_setFlip(v0, v2);
    object_setCoordinatesFromPanels(v0);
    v3 = object_createCollisionData();
    v4 = v3;
    if ( v3 )
    {
        object_setupCollisionData(v3, 4, 5, 1);
        v4[1] = 1;
        object_setCollisionHitEffect(3);
        if ( *(v0 + 6) )
            object_setCollisionStatusEffect1(*(v0 + 6));
        v7 = *(v0 + 7);
        if ( *(v0 + 7) )
            v7 = sub_801A4D0(v7, 1);
        object_presentCollisionData(v7, v6);
        sub_80C956C();
    }
    return object_freeMemory();
}


// 0x80c94bc
int __noreturn sub_80C94BC()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int result; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver()
        || *(*(v0 + 84) + 112) & 0xFF800000
        || ((*(&off_80C9504 + *(v0 + 9)))(), (v1 = object_isCurrentPanelValid()) == 0) )
    {
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        object_presentCollisionData(v1, v2);
        result = object_highlightCurrentCollisionPanels();
    }
    return result;
}


// 0x80c950c
int sub_80C950C()
{
    int v0; // r5
    int result; // r0
    int v2; // r0

    *(v0 + 52) += *(v0 + 64);
    *(v0 + 56) += *(v0 + 68);
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        v2 = *(v0 + 5) - 1;
        *(v0 + 5) = v2;
        if ( v2 )
            sub_80C956C();
        ++*(v0 + 16);
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c954c
int __fastcall sub_80C954C(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(42, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 76) = v6;
    }
    return result;
}


// 0x80c956c
void __noreturn sub_80C956C()
{
    sub_80C95EC();
}


// 0x80c95ec
void __noreturn sub_80C95EC()
{
    int v0; // r5

    if ( !(*(v0 + 22) ^ *(v0 + 23)) )
        sub_80C9620();
    sub_80C9640();
}


// 0x80c9620
int __noreturn sub_80C9620()
{
    int v0; // r4
    int v1; // r5
    int v2; // r6
    int v3; // r7
    int result; // r0

    v2 = *(v1 + 18);
LABEL_2:
    v3 = 3;
    while ( 1 )
    {
        result = object_getPanelParameters(v2, v3);
        if ( result & v0 )
            return result;
        if ( !--v3 )
        {
            if ( ++v2 != 7 )
                goto LABEL_2;
            return result;
        }
    }
}


// 0x80c9640
int __noreturn sub_80C9640()
{
    int v0; // r4
    int v1; // r5
    int v2; // r6
    int v3; // r7
    int result; // r0

    v2 = *(v1 + 18);
LABEL_2:
    v3 = 3;
    while ( 1 )
    {
        result = object_getPanelParameters(v2, v3);
        if ( result & v0 )
            return result;
        if ( !--v3 )
        {
            if ( --v2 )
                goto LABEL_2;
            return result;
        }
    }
}


// 0x80c96a0
void sub_80C96A0()
{
    int v0; // r5
    char v1; // zf

    (*(&off_80C96BC + *(v0 + 8)))();
    battle_isTimeStop();
    if ( v1 )
        object_updateSprite();
}


// 0x80c96c8
int __noreturn sub_80C96C8()
{
    int v0; // r5
    unsigned __int8 *v1; // r7
    int v2; // r0
    int v3; // r1
    int v4; // r2

    v1 = &byte_80C9664[6 * *(v0 + 5)];
    *(v0 + 100) = v1;
    sprite_load(v0, 128, *v1, v1[1]);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = v1[2];
    *(v0 + 17) = -1;
    sprite_setPallete(v1[5]);
    object_setPanelsFromCoordinates(v0);
    v2 = object_getFlip(v0);
    sprite_setFlip(v0, v2);
    PlaySoundEffect(160, v3, v4);
    *(v0 + 64) = *(v0 + 52);
    *(v0 + 68) = *(v0 + 56);
    *(v0 + 72) = *(v0 + 60);
    *(v0 + 8) = 4;
    return sub_80C9726();
}


// 0x80c9726
int sub_80C9726()
{
    int v0; // r5
    int v1; // r5
    int result; // r0
    _BYTE *v3; // [sp-4h] [bp-8h]

    (*(&off_80C976C + *(v0 + 9)))();
    *v0 |= 2u;
    if ( !sub_800EB6C(*(v0 + 22)) )
        *v0 &= 0xFDu;
    v3 = v0;
    v1 = *(v0 + 76);
    result = sub_801032C();
    if ( result & 0x100000 )
    {
        result = *v3 & 0xFD;
        *v3 = result;
    }
    return result;
}


// 0x80c9774
int sub_80C9774()
{
    int v0; // r5
    int v1; // r3
    int result; // r0

    v1 = *(v0 + 76);
    *(v0 + 52) = *(v1 + 52) + *(v0 + 64);
    *(v0 + 56) = *(v1 + 56) + *(v0 + 68);
    *(v0 + 60) = *(v1 + 60) + *(v0 + 72);
    *v0 = *v0 & 0xFD | *v1 & 2;
    result = **(v0 + 96);
    if ( !result )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80c97b4
int sub_80C97B4()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    unsigned __int8 v3; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *v0 |= 2u;
        v1 = *(v0 + 100);
        *(v0 + 16) = *(v1 + 3);
        *(v0 + 32) = *(v1 + 4);
        *(v0 + 11) = 4;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v3 )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c97e0
int __fastcall sub_80C97E0(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int *v5; // r7
    int result; // r0
    int v7; // [sp+0h] [bp-8h]

    object_spawnType3(43, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v7;
        *(v4 + 96) = v5;
        *v5 = v4;
        *(v4 + 22) = *(v7 + 22);
        *v4 |= 0x14u;
    }
    return result;
}


// 0x80c980c
void nullsub_101()
{
    ;
}


// 0x80c980e
void nullsub_102()
{
    ;
}


// 0x80c9810
void nullsub_93()
{
    ;
}


// 0x80c9814
void nullsub_94()
{
    ;
}


// 0x80c9816
void nullsub_95()
{
    ;
}


// 0x80c9824
void sub_80C9824()
{
    int v0; // r5

    (*(&off_80C983C + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c9848
int __noreturn sub_80C9848()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v4; // r0
    int v5; // r1
    int v6; // r1
    int v7; // r2

    sprite_load(v0, 128, 16, 6);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = -1;
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    *(v0 + 100) = *(v0 + 18);
    *(v0 + 104) = *(v0 + 19);
    *(v0 + 96) = &byte_80C9818[3 * *(v0 + 4)];
    *(v0 + 64) = object_getFrontDirection(v0);
    *(v0 + 68) = 2 * *(v0 + 5) - 1;
    *(v0 + 7) = 0;
    *(v0 + 6) = 0;
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( v2 )
    {
        object_setupCollisionData(v2, 6, 5, 1);
        v4 = object_setCollisionHitEffect(10);
        object_presentCollisionData(v4, v5);
        PlaySoundEffect(180, v6, v7);
        *(v0 + 8) = 4;
        sub_80C98DC();
    }
    return object_freeMemory();
}


// 0x80c98dc
char *__noreturn sub_80C98DC()
{
    int v0; // r5
    int v1; // r4
    int v2; // r4
    signed int v3; // r1
    char *v4; // r0
    int v5; // r2
    int v6; // r0
    int v7; // r2
    __int64 v8; // r0
    char *result; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
        object_clearCollisionRegion();
        result = &dword_8;
        *(v0 + 8) = 8;
    }
    else
    {
        v1 = *(v0 + 84);
        if ( *(v1 + 112) )
            object_clearCollisionRegion();
        v2 = *(v1 + 10);
        (*(&off_80C9960 + *(v0 + 9)))();
        if ( !*(v0 + 7) )
        {
            v4 = object_getPanelDataOffset(*(*(v0 + 84) + 10), *(*(v0 + 84) + 11));
            v5 = *(v0 + 22);
            v3 = v4[3] ^ v5;
            if ( v4[3] != v5 )
            {
                v3 = 1;
                *(v0 + 7) = 1;
            }
        }
        v6 = *(v0 + 8);
        if ( v6 != 8 )
        {
            v6 = *(*(v0 + 84) + 10);
            if ( v6 != v2 )
                v6 = object_setCollisionRegion(1);
        }
        object_presentCollisionData(v6, v3);
        v7 = *(v0 + 84);
        LODWORD(v8) = *(v7 + 10);
        HIDWORD(v8) = *(v7 + 11);
        result = object_highlightPanel(v8);
    }
    return result;
}


// 0x80c9964
signed int sub_80C9964()
{
    int v0; // r5
    char *v1; // r0
    int v2; // r1
    int v3; // r2
    int v4; // r3
    int v5; // r0
    int v6; // r1
    int v7; // r2
    int v8; // r3
    unsigned int v9; // r7
    int v10; // r0
    int v11; // ST00_4
    int v12; // r1
    char v13; // r0
    int v14; // r2
    char v15; // r1
    int v16; // r1
    int v17; // r0
    char *v18; // r0
    int v19; // r1
    int v20; // r2
    int v21; // r3
    int v22; // r0
    int v23; // r1
    int v24; // r2
    int v25; // r3
    int v26; // r1
    int v27; // r0
    int v28; // r3
    int v29; // r6
    int v30; // r1
    int v31; // r1
    char v32; // zf
    signed int result; // r0

    sub_80C9B64();
    if ( !*(v0 + 11) )
    {
        v1 = *(v0 + 100);
        v2 = *(v0 + 104);
        v3 = *(v0 + 64);
        v4 = *(v0 + 68);
        if ( *(*(v0 + 96) + 1) )
        {
            v5 = sub_80C9AAA(v1, v2, v3, v4);
            if ( !v7 )
                goto LABEL_18;
        }
        else
        {
            v5 = sub_80C9A58(v1, v2, v3, v4);
        }
        *(v0 + 108) = v5;
        *(v0 + 112) = v6;
        *(v0 + 64) = v7;
        *(v0 + 68) = v8;
        object_updateCollisionPanels(v0);
        *(v0 + 32) = 0;
        *(v0 + 11) = 4;
    }
    v9 = *(*(v0 + 96) + 2);
    v10 = *(v0 + 32) + 1;
    *(v0 + 32) = v10;
    if ( v10 == v9 >> 1 )
    {
        v11 = v10;
        v12 = *(v0 + 112);
        v13 = sub_800E258(*(v0 + 108));
        v14 = *(v0 + 84);
        *(v14 + 10) = v13;
        *(v14 + 11) = v15;
        v10 = v11;
    }
    if ( v10 == v9 )
    {
        v16 = **(v0 + 96);
        if ( **(v0 + 96) )
        {
            v17 = *(v0 + 6) + 1;
            *(v0 + 6) = v17;
            if ( v17 >= v16 )
                goto LABEL_18;
        }
        *(v0 + 100) = *(v0 + 18);
        *(v0 + 104) = *(v0 + 19);
        v18 = *(v0 + 100);
        v19 = *(v0 + 104);
        v20 = *(v0 + 64);
        v21 = *(v0 + 68);
        if ( !*(*(v0 + 96) + 1) )
        {
            v22 = sub_80C9A58(v18, v19, v20, v21);
LABEL_14:
            *(v0 + 108) = v22;
            *(v0 + 112) = v23;
            *(v0 + 64) = v24;
            *(v0 + 68) = v25;
            object_updateCollisionPanels(v0);
            *(v0 + 32) = 0;
            goto LABEL_15;
        }
        v22 = sub_80C9AAA(v18, v19, v20, v21);
        if ( v24 )
            goto LABEL_14;
LABEL_18:
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
        return result;
    }
LABEL_15:
    v26 = *(v0 + 104);
    v27 = object_getCoordinatesForPanels(*(v0 + 100));
    v28 = *(v0 + 112);
    v29 = *(v0 + 32);
    *(v0 + 52) = sub_80C9B36(v27, v30, *(v0 + 108));
    *(v0 + 56) = v31;
    object_setPanelsFromCoordinates(v0);
    object_isPanelSolid(*(*(v0 + 84) + 10), *(*(v0 + 84) + 11));
    if ( v32 )
        goto LABEL_18;
    result = object_isValidPanel(*(*(v0 + 84) + 10), *(*(v0 + 84) + 11));
    if ( v32 )
        goto LABEL_18;
    return result;
}


// 0x80c9a58
int __fastcall sub_80C9A58(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r1
    int v6; // ST00_4
    int v7; // ST08_4
    int v8; // r0
    int v9; // r1
    int v10; // ST08_4
    int v11; // ST08_4
    char v13; // [sp+0h] [bp-10h]

    v13 = a1;
    v5 = a2 + a4;
    if ( (v5 - 1) > 2 )
    {
        v6 = a1;
        v7 = a3;
        PlaySoundEffect(182, v5, a3);
        a1 = v6;
        a3 = v7;
    }
    v8 = a1 + a3;
    v9 = *(v4 + 22);
    if ( *(v4 + 22) )
    {
        if ( v8 < 1 )
        {
            v11 = -a3;
            PlaySoundEffect(182, v9, -a3);
            LOBYTE(a3) = v11;
        }
    }
    else if ( v8 > 6 )
    {
        v10 = -a3;
        PlaySoundEffect(182, v9, -a3);
        LOBYTE(a3) = v10;
    }
    return object_getCoordinatesForPanels(v13 + a3);
}


// 0x80c9aaa
int __fastcall sub_80C9AAA(char *a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r1
    char *v6; // ST00_4
    int v7; // ST0C_4
    int v8; // ST04_4
    int v9; // ST08_4
    int v10; // ST08_4
    int v11; // ST0C_4
    char *v12; // r0
    int v13; // r1
    bool v14; // zf
    char *v15; // r4
    char *v16; // r0
    char *v17; // r4
    int result; // r0
    int v19; // [sp-8h] [bp-18h]
    int v20; // [sp-4h] [bp-14h]
    char *v21; // [sp+0h] [bp-10h]
    int v22; // [sp+0h] [bp-10h]
    int v23; // [sp+0h] [bp-10h]
    int v24; // [sp+4h] [bp-Ch]
    int v25; // [sp+4h] [bp-Ch]

    v21 = a1;
    v24 = a2;
    v5 = a2 + a4;
    if ( (v5 - 1) > 2 )
    {
        v6 = a1;
        v8 = v5;
        v9 = a3;
        v7 = -a4;
        PlaySoundEffect(182, v5, a3);
        a1 = v6;
        v5 = v8;
        a3 = v9;
        a4 = v7;
    }
    if ( &a1[a3 - 1] > 5 )
    {
        v10 = -a3;
        v11 = a4;
        PlaySoundEffect(182, v5, -a3);
        a3 = v10;
        a4 = v11;
    }
    v12 = v21;
    v13 = v24;
    if ( !*(v4 + 7) )
        goto LABEL_12;
    v19 = v21;
    v20 = v24;
    v22 = a3;
    v25 = a4;
    v12 = object_getPanelDataOffset(&v12[a3], v13 + a4);
    v15 = v12;
    v14 = v12 == 0;
    LOBYTE(v12) = v19;
    a3 = v22;
    if ( !v14 && v15[3] != *(v4 + 22) )
        goto LABEL_12;
    v23 = -v22;
    v16 = object_getPanelDataOffset(v19 - a3, v20 + v25);
    v17 = v16;
    v14 = v16 == 0;
    result = v19;
    if ( !v14 && v17[3] != *(v4 + 22) )
    {
        PlaySoundEffect(182, v20, v23);
        LOBYTE(v12) = v19;
        LOBYTE(a3) = v23;
LABEL_12:
        result = object_getCoordinatesForPanels(v12 + a3);
    }
    return result;
}


// 0x80c9b36
int __fastcall sub_80C9B36(int a1, int a2, int a3)
{
    int v3; // r6

    __asm
    {
        SVC         6
        SVC         6
    }
    return a1 + (a3 - a1) * v3;
}


// 0x80c9b64
int sub_80C9B64()
{
    int v0; // r5
    int result; // r0
    __int16 v2; // r0

    result = *(v0 + 4);
    if ( result == 3 )
    {
        v2 = *(v0 + 34) + 1;
        *(v0 + 34) = v2;
        result = v2 & 3;
        if ( result == 3 )
        {
            object_getFlip(v0);
            result = sub_80E33FA(v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
        }
    }
    return result;
}


// 0x80c9ba4
int __fastcall sub_80C9BA4(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(46, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 44) = v5;
    }
    return result;
}


// 0x80c9bc4
void sub_80C9BC4()
{
    int v0; // r5

    (*(&off_80C9BDC + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80c9be8
signed int sub_80C9BE8()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v3; // r0
    int v4; // r1
    signed int result; // r0

    if ( !object_isCurrentPanelValid() )
        return object_freeMemory();
    sprite_load(v0, 128, 20, 4);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    *(v0 + 32) = 2;
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    object_setCoordinatesFromPanels(v0);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 4, 5, 0);
    object_setCollisionRegion(1);
    v3 = object_setCollisionHitEffect(255);
    object_presentCollisionData(v3, v4);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80c9c5c
void __noreturn sub_80C9C5C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        v1 = (*(&off_80C9C90 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80c9ca2
int sub_80C9CA2()
{
    int v0; // r5
    int result; // r0
    char v2; // r0
    int v3; // r6
    int v4; // r2

    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        v2 = object_getFrontDirection(v0);
        v3 = *(v0 + 44);
        sub_80C9CDA(v2 + *(v0 + 18), *(v0 + 19), v4, *(v0 + 60));
        result = 4;
        *(v0 + 9) = 4;
    }
    return result;
}


// 0x80c9cc4
int sub_80C9CC4()
{
    int v0; // r5
    int result; // r0

    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c9cda
int __fastcall sub_80C9CDA(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]

    v6 = a1;
    v7 = a2;
    object_spawnType3(47, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, 0);
    return result;
}


// 0x80c9d00
void sub_80C9D00()
{
    int v0; // r5

    (*(&off_80C9D18 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80c9d24
int sub_80C9D24()
{
    Battle *v0; // r5

    if ( object_isCurrentPanelValid() )
    {
        sprite_load(v0, 128, 16, 29);
        sprite_noShadow(v0);
        sub_80C9F18();
    }
    return object_freeMemory();
}


// 0x80c9d9e
void __noreturn sub_80C9D9E()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    v1 = battle_isTimeStop();
    if ( v3 )
        v1 = (*(&off_80C9DD4 + *(v0 + 9)))();
    object_presentCollisionData(v1, v2);
}


// 0x80c9de0
int sub_80C9DE0()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r0
    unsigned __int8 v4; // vf
    int result; // r0

    if ( *(v0 + 32) == 30 )
    {
        *v0 |= 2u;
        *(v0 + 16) = 0;
        *(v0 + 17) = -1;
        object_clearCollisionRegion();
        PlaySoundEffect(324, v1, v2);
    }
    v3 = *(v0 + 32);
    v4 = __OFSUB__(v3, 1);
    result = v3 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v4) | (result == 0) )
    {
        *(v0 + 16) = 1;
        *(v0 + 34) = 3;
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80c9e20
int sub_80C9E20()
{
    int v0; // r5
    char v1; // r0
    int v2; // ST00_4
    char v3; // r0
    int v4; // r6
    int v5; // r1
    int v6; // r2
    int v7; // r0
    unsigned __int8 v8; // vf
    int result; // r0
    int v10; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 1;
        *(v0 + 32) = 10;
        GetPositiveSignedRNG2();
        v2 = *(&dword_80C9E84 + (v1 & 3)) << 16;
        v3 = object_getFrontDirection(v0);
        v4 = *(v0 + 44);
        sub_80C6ADA(v3 + *(v0 + 18), *(v0 + 19), *(v0 + 14), v2);
        PlaySoundEffect(185, v5, v6);
    }
    v7 = *(v0 + 32);
    v8 = __OFSUB__(v7, 1);
    result = v7 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v8) | (result == 0) )
    {
        v10 = *(v0 + 34);
        v8 = __OFSUB__(v10--, 1);
        *(v0 + 34) = v10;
        if ( ((v10 < 0) ^ v8) | (v10 == 0) )
        {
            *(v0 + 16) = 2;
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
        else
        {
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80c9e88
int sub_80C9E88()
{
    int v0; // r5
    int result; // r0

    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        object_removePanelReserve(*(v0 + 20), *(v0 + 21));
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80c9ea6
int __fastcall sub_80C9EA6(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(48, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 44) = v5;
        *(v4 + 76) = v10;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80c9ece
int *__fastcall sub_80C9ECE(int a1, int a2, int a3)
{
    int v3; // r10
    int *result; // r0
    int v5; // r0
    int v6; // r3

    result = (*(v3 + oToolkit_S2034880_Ptr) + 160);
    do
    {
        sub_80C9EE6(result);
        result = (v5 + 4);
    }
    while ( v6 != 1 );
    return result;
}


// 0x80c9ee6
void __fastcall sub_80C9EE6(int *a1)
{
    int v1; // r7
    int v2; // r0
    int v3; // r1
    int v4; // ST00_4

    v2 = *a1;
    if ( v2 )
    {
        if ( *(v2 + 40) != 218 )
        {
            v3 = *(v2 + 84);
            if ( v3 )
            {
                if ( !(*(v3 + 64) & 0x348000) )
                {
                    v4 = v2;
                    sub_800F898(v2);
                    sub_80C9EA6(*(v4 + 18), *(v4 + 19), v1, 0);
                }
            }
        }
    }
}


// 0x80c9f18
void __noreturn sub_80C9F18()
{
    Battle *v0; // r5
    int v1; // r2
    int v2; // r0
    int v3; // r1
    int v4; // r2
    int v5; // r3

    object_getFrontDirection(v0);
    sub_81096FA(v0->panelX, v0->panelY, v1, &off_80C9F64);
    sub_800D120(v2, v3, v4, v5);
}


// 0x80c9f78
int sub_80C9F78()
{
    int v0; // r5

    return (*(&JumpTable80C9F88 + *(v0 + 8)))();
}


// 0x80c9f98
int sub_80C9F98()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    char *v3; // r4
    int v4; // r0
    _BYTE *v5; // r0
    int v6; // r1
    int v7; // r0
    int v8; // r1
    int v9; // r2

    if ( *(v0 + 4) == 1 )
        sub_80CA234();
    if ( object_isCurrentPanelValid() )
    {
        *v0 |= 3u;
        sprite_load(v0, 128, 12, 23);
        sprite_noShadow(v0);
        *(v0 + 16) = 0;
        *(v0 + 17) = 0;
        sprite_setAnimation(v0, 0);
        sprite_loadAnimationData(v0);
        v1 = object_getFlip(v0);
        sprite_setFlip(v0, v1);
        *(v0 + 96) = 1;
        object_setCoordinatesFromPanels(v0);
        *(v0 + 60) = 0;
        v2 = 2 * *(v0 + 4);
        v3 = &byte_80CA064[v2];
        v4 = byte_80CA064[v2 + 1];
        *(v0 + 100) = v4;
        *(v0 + 34) = v4;
        sprite_setPallete(*v3);
        v5 = object_createCollisionData();
        if ( v5 )
        {
            object_setupCollisionData(v5, 18, 5, 1);
            sub_801A146();
            if ( *(v0 + 5) )
                object_setCollisionStatusEffect1(*(v0 + 5));
            v7 = *(v0 + 4);
            if ( v7 == 3 )
                v7 = sub_801A4D0(84, 5);
            object_presentCollisionData(v7, v6);
            PlaySoundEffect(184, v8, v9);
            *(v0 + 8) = 4;
            sub_80CA074();
        }
    }
    return object_freeMemory();
}


// 0x80ca074
void __noreturn sub_80CA074()
{
    int v0; // r5
    char v1; // zf
    int v2; // r0
    int v3; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    battle_isBattleOver();
    if ( v1 )
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        sub_80CA0B0();
        object_updateSprite();
        object_presentCollisionData(v2, v3);
    }
    else
    {
        *v0 &= 0xFDu;
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
}


// 0x80ca0b0
int sub_80CA0B0()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    int v3; // r1
    unsigned __int8 v4; // vf
    int result; // r0

    v1 = *(v0 + 32) - 1;
    *(v0 + 32) = v1;
    if ( v1 )
    {
        v2 = *(v0 + 34);
        v3 = *(v0 + 96);
        v4 = __OFSUB__(v2, v3);
        result = v2 - v3;
        *(v0 + 34) = result;
        if ( ((result < 0) ^ v4) | (result == 0) )
        {
            *(v0 + 34) = *(v0 + 100);
            result = object_setCollisionRegion(1);
        }
    }
    else
    {
        object_clearCollisionRegion();
        *v0 &= 0xFDu;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80ca0e2
int __fastcall sub_80CA0E2(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(49, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 14) = v9;
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 32) = *(v4 + 6);
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
    }
    return result;
}


// 0x80ca104
int __fastcall sub_80CA104(char a1, int a2, int a3, int a4)
{
    Battle *v4; // r5
    signed int v5; // r7
    int v6; // r7
    int v7; // ST10_4
    char *i; // r7
    int result; // r0
    char v10; // [sp+0h] [bp-28h]
    int v11; // [sp+4h] [bp-24h]
    int v12; // [sp+8h] [bp-20h]
    int v13; // [sp+Ch] [bp-1Ch]
    char v14; // [sp+18h] [bp-10h]

    if ( v5 > 3 )
        v5 = 3;
    v10 = a1;
    v11 = a2;
    v12 = a3;
    v13 = a4;
    v14 = object_getFrontDirection(v4);
    v6 = 4 * v5;
    v7 = *&byte_80CA170[v6];
    for ( i = *(&off_80CA160 + v6); ; i += 2 )
    {
        result = *i;
        if ( result == 127 )
            break;
        sub_80CA0E2(result * v14 + v10, i[1] + v11, v12, v13);
    }
    return result;
}


// 0x80ca19e
int __fastcall sub_80CA19E(char a1, int a2, int a3, int a4)
{
    Battle *v4; // r5
    signed int v5; // r7
    int v6; // r7
    int v7; // ST10_4
    char *i; // r7
    int result; // r0
    char v10; // [sp+0h] [bp-28h]
    int v11; // [sp+4h] [bp-24h]
    int v12; // [sp+8h] [bp-20h]
    int v13; // [sp+Ch] [bp-1Ch]
    char v14; // [sp+18h] [bp-10h]

    if ( v5 > 3 )
        v5 = 3;
    v10 = a1;
    v11 = a2;
    v12 = a3;
    v13 = a4;
    v14 = object_getFrontDirection(v4);
    v6 = 4 * v5;
    v7 = *&byte_80CA208[v6];
    for ( i = *(&off_80CA1F8 + v6); ; i += 2 )
    {
        result = *i;
        if ( result == 127 )
            break;
        sub_80CA0E2(result * v14 + v10, i[1] + v11, v12, v13);
    }
    return result;
}


// 0x80ca234
int __noreturn sub_80CA234()
{
    int v0; // r5
    int v1; // r3
    char *i; // r1
    int v3; // r2
    int result; // r0
    int v5; // r1

    v1 = object_getPanelDataOffset(*(v0 + 18), *(v0 + 19))[2];
    for ( i = &byte_80CA25C; ; i += 3 )
    {
        v3 = *i;
        if ( v3 == 255 || v3 == v1 )
            break;
    }
    result = i[2];
    v5 = i[1];
    return result;
}


// 0x80ca2a8
void sub_80CA2A8()
{
    int v0; // r5

    (*(&off_80CA2C0 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80ca2cc
int sub_80CA2CC()
{
    return object_genericDestroy();
}


// 0x80ca2d4
int __noreturn sub_80CA2D4()
{
    int v0; // r5
    int v1; // r2
    u8 v2; // r0
    char *v3; // r1
    int v4; // r0
    int v5; // r0
    _BYTE *v6; // r0
    _BYTE *v7; // r7
    int result; // r0
    char v9; // r3
    int v10; // r0
    int v11; // r1
    int v12; // r1
    int v13; // r2

    v1 = 7;
    if ( *(v0 + 4) == 4 )
        v1 = 87;
    sprite_load(v0, 128, 16, v1);
    if ( *(v0 + 4) == 4 )
        sprite_noShadow(v0);
    else
        sprite_hasShadow();
    *v0 |= 2u;
    v2 = 0;
    if ( *(v0 + 4) == 4 && *(v0 + 19) != 1 )
        v2 = 1;
    *(v0 + 16) = v2;
    *(v0 + 17) = v2;
    sprite_setAnimation(v0, v2);
    sprite_loadAnimationData(v0);
    v3 = &byte_80CA26C[12 * *(v0 + 4)];
    *(v0 + 64) = *(v3 + 1);
    if ( *(v0 + 5) != 3 )
    {
        v4 = *(v3 + 2);
        if ( *(v0 + 19) == 3 )
            v4 = -v4;
        *(v0 + 68) = v4;
    }
    *(v0 + 76) = v3;
    *(v0 + 32) = 0;
    sprite_setPallete(0);
    v5 = object_getFlip(v0);
    sprite_setFlip(v0, v5);
    object_setCoordinatesFromPanels(v0);
    v6 = object_createCollisionData();
    v7 = v6;
    if ( !v6 )
        return object_freeMemory();
    v9 = 1;
    if ( *(v0 + 7) )
        v9 = 3;
    object_setupCollisionData(v6, 4, 5, v9);
    v7[1] = 1;
    v10 = object_setCollisionHitEffect(4);
    object_presentCollisionData(v10, v11);
    sub_80CA510();
    PlaySoundEffect(183, v12, v13);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80ca3a0
int __noreturn sub_80CA3A0()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int result; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
        goto LABEL_12;
    if ( *(*(v0 + 84) + 112) & 0xFF800000 )
    {
        object_clearCollisionRegion();
        *(v0 + 96) = *(v0 + 18);
    }
    (*(&off_80CA404 + *(v0 + 9)))();
    if ( !*(*(v0 + 84) + 1) && *(v0 + 18) != *(v0 + 96) )
        object_setCollisionRegion(1);
    v1 = object_isCurrentPanelValid();
    if ( !v1 )
    {
LABEL_12:
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        object_presentCollisionData(v1, v2);
        result = object_highlightCurrentCollisionPanels();
    }
    return result;
}


// 0x80ca408
int sub_80CA408()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r0
    int v4; // r1
    int v5; // r0
    int result; // r0

    ++*(v0 + 32);
    v1 = *(v0 + 6);
    if ( v1 == 2 )
    {
        *(v0 + 52) += *(v0 + 64) * object_getFlipDirection(*(v0 + 22) ^ 1, *(v0 + 23));
    }
    else if ( v1 == 1 )
    {
        v4 = *(v0 + 68);
        v5 = *(v0 + 56) + v4;
        *(v0 + 56) = v5;
        if ( v4 >= 0 )
        {
            if ( v5 >= 3407872 )
            {
                *(v0 + 6) = 2;
                goto LABEL_15;
            }
        }
        else if ( v5 <= 0x40000 )
        {
            *(v0 + 6) = 2;
            goto LABEL_15;
        }
    }
    else
    {
        v2 = *(v0 + 64) * object_getFrontDirection(v0);
        v3 = *(v0 + 52) + v2;
        *(v0 + 52) = v3;
        if ( *(v0 + 68) )
        {
            if ( v2 >= 0 )
            {
                if ( v3 >= *&byte_80CA4C4[4 * *(v0 + 5)] )
                {
                    *(v0 + 6) = 1;
                    goto LABEL_15;
                }
            }
            else if ( v3 <= *&byte_80CA4B4[4 * *(v0 + 5)] )
            {
                *(v0 + 6) = 1;
LABEL_15:
                object_setCoordinatesFromPanels(v0);
                goto LABEL_17;
            }
        }
    }
    object_setPanelsFromCoordinates(v0);
LABEL_17:
    object_updateCollisionPanels(v0);
    result = *(*(v0 + 84) + 12);
    if ( *(*(v0 + 84) + 12) )
        result = sub_80CA510();
    return result;
}


// 0x80ca4d8
int __fastcall sub_80CA4D8(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(50, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
    }
    return result;
}


// 0x80ca4f6
int __fastcall sub_80CA4F6(int a1, int a2, int a3)
{
    int v3; // r5

    return sub_80CA4D8(5 * (*(v3 + 22) ^ *(v3 + 23)) + 1, 3, a3, 0x100000);
}


// 0x80ca510
int sub_80CA510()
{
    int v0; // r5
    int result; // r0

    result = *(*(v0 + 76) + 3);
    if ( *(*(v0 + 76) + 3) )
    {
        result = object_getPanelParameters(*(v0 + 18), *(v0 + 19));
        if ( result & 0x10 )
        {
            if ( (result & 0x20) != 32 * *(v0 + 22) )
                object_setPanelType(*(v0 + 18), *(v0 + 19), 6);
        }
    }
    return result;
}


// 0x80ca544
void sub_80CA544()
{
    int v0; // r5

    (*(&off_80CA55C + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80ca568
void __noreturn sub_80CA568()
{
    Battle *v0; // r5
    int v1; // r0

    object_setCoordinatesFromPanels(v0);
    SpawnT4BattleObjectWithId0(v0, &v0->vx, v0->x, v0->y, v0->z);
    v1 = object_getPanelParameters(v0->panelX, v0->panelY);
    if ( v1 & 0x10 )
    {
        if ( !(v1 & 0xF880080) )
            object_breakPanel(v0->panelX, v0->panelY);
    }
    sub_8109794(v0->panelX, v0->panelY);
}


// 0x80ca61a
void __noreturn sub_80CA61A()
{
    int v0; // r5
    unsigned int v1; // r1
    int v2; // r0
    int v3; // r1
    int v4; // r2
    int v5; // r1
    int v6; // r0
    int v7; // r0
    unsigned __int8 v8; // vf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( *(*(v0 + 84) + 112) )
        goto LABEL_13;
    v1 = *(v0 + 60);
    if ( (v1 >> 16) < 20 )
    {
        v2 = *(v0 + 72) + v1;
        *(v0 + 60) = v2;
        goto LABEL_10;
    }
    v3 = *(v0 + 19);
    v4 = object_getCoordinatesForPanels(*(v0 + 18));
    v5 = *(v0 + 52);
    v6 = *(v0 + 64) + v5;
    *(v0 + 52) = v6;
    if ( sub_800E6E8(v6, v5, v4) )
    {
        v7 = *(v0 + 4);
        v8 = __OFSUB__(v7--, 1);
        *(v0 + 4) = v7;
        if ( ((v7 < 0) ^ v8) | (v7 == 0) )
            goto LABEL_13;
    }
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    v2 = object_isCurrentPanelValid();
    if ( !v2 )
    {
LABEL_13:
        *v0 &= 0xFDu;
        object_clearCollisionRegion();
        v2 = 8;
        *(v0 + 8) = 8;
    }
LABEL_10:
    object_presentCollisionData(v2, v1);
}


// 0x80ca686
int __fastcall sub_80CA686(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    char v8; // [sp+8h] [bp-Ch]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(51, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, v8);
    return result;
}


// 0x80ca69c
_BYTE *__fastcall sub_80CA69C(char a1, int a2, int a3, int a4)
{
    _BYTE *result; // r0

    result = sub_80CA686(a1, a2, a3, a4);
    if ( result )
        *result |= 0x10u;
    return result;
}


// 0x80ca6b8
int sub_80CA6B8()
{
    int v0; // r5

    return (*(&off_80CA6CC + *(v0 + 8)))();
}


// 0x80ca6d8
int sub_80CA6D8()
{
    int v0; // r5
    unsigned int v1; // r1
    signed int v2; // r2

    object_setCoordinatesFromPanels(v0);
    if ( object_isCurrentPanelValid() && object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & 0x10 )
    {
        v1 = 100991744;
        if ( *(v0 + 6) || (v2 = *(v0 + 18), v2 == 1) || v2 >= 6 )
            v1 = 100991232;
        sub_8011504(0x103041Bu, v1);
    }
    SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x100000);
    return object_freeMemory();
}


// 0x80ca7ac
void __noreturn sub_80CA7AC()
{
    int v0; // r5
    __int64 v1; // r0
    int v2; // r0
    int v3; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( *(*(v0 + 84) + 112) )
    {
        *(v0 + 96) = *(v0 + 18);
        object_clearCollisionRegion();
    }
    (*(&off_80CA828 + *(v0 + 9)))();
    if ( object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & 0x10 )
    {
        if ( !*(*(v0 + 84) + 1) )
        {
            if ( *(v0 + 18) == *(v0 + 96) )
            {
LABEL_8:
                object_updateSprite();
                object_presentCollisionData(v2, v3);
                return;
            }
            object_setCollisionRegion(1);
        }
        LODWORD(v1) = *(v0 + 18);
        HIDWORD(v1) = *(v0 + 19);
        object_highlightPanel(v1);
        goto LABEL_8;
    }
    SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x100000);
    object_clearCollisionRegion();
    *(v0 + 8) = 8;
}


// 0x80ca834
int sub_80CA834()
{
    int v0; // r5
    int result; // r0
    signed __int16 v2; // r0

    *(v0 + 52) += *(v0 + 64);
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    if ( !*(v0 + 100) && 5 * (*(v0 + 22) ^ 1) + 1 == *(v0 + 18) )
    {
        *(v0 + 100) = 1;
        sub_801A082(1, 6, 5, 1);
    }
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        object_setCoordinatesFromPanels(v0);
        v2 = 8;
        if ( *(v0 + 6) )
            v2 = 16;
        *(v0 + 32) = v2;
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80ca88e
int sub_80CA88E()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    int v3; // r0
    signed int v4; // r0

    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        object_setCollisionRegion(1);
        v2 = *(v0 + 5) - 1;
        *(v0 + 5) = v2;
        if ( v2 )
        {
            result = 8;
            *(v0 + 32) = 8;
        }
        else
        {
            if ( *(v0 + 6) )
            {
                *(v0 + 64) = -*(v0 + 64);
                *(v0 + 23) ^= 1u;
                v3 = object_getFlip(v0);
                v4 = sprite_setFlip(v0, v3);
            }
            else
            {
                v4 = 0x40000;
                *(v0 + 72) = 0x40000;
            }
            sub_801A082(v4, 6, 5, 3);
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80ca8e2
signed int sub_80CA8E2()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 52) += *(v0 + 64);
    *(v0 + 60) += *(v0 + 72);
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    result = object_isCurrentPanelValid();
    if ( !result )
    {
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80ca90e
int __fastcall sub_80CA90E(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    char v8; // [sp+8h] [bp-Ch]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(52, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, v8);
    return result;
}


// 0x80ca938
void sub_80CA938()
{
    int v0; // r5

    (*(&off_80CA950 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80ca95c
int __noreturn sub_80CA95C()
{
    int v0; // r5
    _BYTE *v1; // r0
    int v3; // r1
    int v4; // r0
    int v5; // r1

    sprite_load(v0, 128, 12, 0);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 1;
    *(v0 + 17) = 1;
    sprite_setAnimation(v0, 1u);
    sprite_loadAnimationData(v0);
    if ( *(v0 + 4) != 2 )
        sprite_setPallete(4);
    object_setPanelsFromCoordinates(v0);
    v1 = object_createCollisionData();
    if ( v1 )
    {
        v3 = 4;
        if ( *(v0 + 4) != 2 )
            v3 = 21;
        object_setupCollisionData(v1, v3, 5, 3);
        object_setCollisionHitEffect(255);
        v4 = object_clearCollisionRegion();
        object_presentCollisionData(v4, v5);
        *(v0 + 8) = 4;
        sub_80CA9CA();
    }
    return object_freeMemory();
}


// 0x80ca9ca
void __noreturn sub_80CA9CA()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
    }
    else
    {
        if ( !*(*(v0 + 84) + 112) )
        {
            v1 = (*(&off_80CAA24 + *(v0 + 9)))();
            object_presentCollisionData(v1, v2);
            return;
        }
        v3 = *(v0 + 4);
    }
    object_clearCollisionRegion();
    *(v0 + 8) = 8;
}


// 0x80caa2c
signed int sub_80CAA2C()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r1
    int v4; // r1
    int v5; // r2
    int v6; // r0
    unsigned __int8 v7; // vf
    int v8; // r1

    if ( !*(v0 + 11) )
    {
        v1 = *(v0 + 7);
        v2 = object_getCoordinatesForPanels(*(v0 + 6));
        *(v0 + 64) = sub_8001330((v0 + 52), v2, v3);
        *(v0 + 68) = v4;
        *(v0 + 72) = v5;
        *(v0 + 32) = 50;
        *(v0 + 11) = 4;
    }
    v6 = *(v0 + 32);
    v7 = __OFSUB__(v6--, 1);
    *(v0 + 32) = v6;
    if ( (v6 < 0) ^ v7 )
    {
        object_setCoordinatesFromPanels(v0);
        *(v0 + 60) = 0;
        object_isCurrentPanelSolid();
    }
    *(v0 + 52) += *(v0 + 64);
    *(v0 + 56) += *(v0 + 68);
    v8 = *(v0 + 72);
    *(v0 + 60) += v8;
    *(v0 + 72) = v8 - 12288;
    object_setPanelsFromCoordinates(v0);
    return object_updateCollisionPanels(v0);
}


// 0x80cab14
signed int sub_80CAB14()
{
    int v0; // r5
    signed int result; // r0

    object_clearCollisionRegion();
    *v0 &= 0xFDu;
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80cab28
int __fastcall sub_80CAB28(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    int v7; // [sp+0h] [bp-8h]

    object_spawnType3(53, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 22) = *(v7 + 22);
        *(v4 + 14) = 0;
        *(v4 + 44) = v5;
    }
    return result;
}


// 0x80cab44
int __fastcall sub_80CAB44(int a1, int a2, int a3, int a4)
{
    Battle *v4; // r5
    int v5; // ST00_4
    int v6; // ST04_4
    int v7; // ST08_4
    int v8; // r0
    int v9; // r4

    v5 = a2;
    v6 = a3;
    v7 = a4;
    v8 = 3 * object_getFrontDirection(v4) + v4->panelX;
    v9 = ((v4->panelY << 8) + v8) << 16;
    return sub_80CAB28(v8, v5, v6, v7);
}


// 0x80cab68
int sub_80CAB68()
{
    int v0; // r5

    return (*(&off_80CAB7C + *(v0 + 8)))();
}


// 0x80cab88
signed int sub_80CAB88()
{
    int v0; // r5
    signed int result; // r0

    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80cab90
int sub_80CAB90()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        result = *(*(v0 + 76) + 9);
        if ( result != 11 && result != 10 )
        {
            result = battle_isTimeStop();
            if ( v2 )
                result = (*(&off_80CABC8 + *(v0 + 9)))();
        }
    }
    return result;
}


// 0x80cabd0
int sub_80CABD0()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        result = *(&dword_80CABFC + *(v0 + 4));
        *(v0 + 32) = result;
    }
    return result;
}


// 0x80cac00
int __fastcall sub_80CAC00(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r0
    int v6; // r0
    unsigned __int8 v7; // vf
    int result; // r0

    v5 = *(v4 + 10);
    if ( !*(v4 + 10) )
    {
        *(v4 + 10) = 4;
        sub_80CAC82(v5, 4);
    }
    v6 = *(v4 + 32);
    v7 = __OFSUB__(v6, 1);
    result = v6 - 1;
    *(v4 + 32) = result;
    if ( (result < 0) ^ v7 )
    {
        sub_80CAD14(*(v4 + 6), *(v4 + 7), a3, a4);
        *(v4 + 9) = 0;
        result = 0;
        *(v4 + 10) = 0;
    }
    return result;
}


// 0x80cac44
int sub_80CAC44()
{
    int v0; // r5
    _DWORD *v1; // r1

    v1 = *(v0 + 80);
    if ( *v1 == v0 )
        *v1 = 0;
    return object_genericDestroy();
}


// 0x80cac58
int __fastcall sub_80CAC58(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int *v6; // r7
    int result; // r0
    int v8; // [sp+0h] [bp-14h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a3;
    object_spawnType3(54, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 96) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 80) = v6;
        *v6 = v4;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80cac82
int __fastcall __noreturn sub_80CAC82(int a1, int a2)
{
    int v2; // r5
    int v3; // r4
    int v4; // r1
    int v5; // r7
    unsigned int v10; // r0
    int v11; // r7
    int v12; // r0
    int v14; // [sp+0h] [bp-4h]
    int v15; // [sp+4h] [bp+0h]

    v14 = *(*(v2 + 96) + 19);
    v3 = 0;
    v5 = object_getPanelsInRowFiltered(v14, a2, *&byte_80CAD04[8 * *(v2 + 22)], *&byte_80CAD04[8 * *(v2 + 22) + 4]);
    if ( v5 )
    {
        GetPositiveSignedRNG2();
        __asm { SVC         6 }
        v10 = *(&v15 + v5);
        v4 = v10 >> 4;
        v3 = v10 & 7;
    }
    v11 = object_getPanelsIgnoreColumnFiltered(
                    v14,
                    v4,
                    *&byte_80CAD04[8 * *(v2 + 22)],
                    *&byte_80CAD04[8 * *(v2 + 22) + 4]);
    if ( v11 )
    {
        GetPositiveSignedRNG2();
        __asm { SVC         6 }
        v12 = *(&v15 + v11);
    }
    return v3;
}


// 0x80cad14
int __fastcall sub_80CAD14(int result, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r4
    int v6; // r6

    if ( result )
    {
        v5 = *(v4 + 4);
        v6 = *(v4 + 44);
        result = sub_80CAEC8(result, a2, *(v4 + 14), a4);
    }
    return result;
}


// 0x80cad28
void sub_80CAD28()
{
    int v0; // r5

    (*(&off_80CAD40 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80cad4c
int __noreturn sub_80CAD4C()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 255;
    *(v0 + 64) = object_getEnemyDirection() * *&byte_80CADCC[4 * *(v0 + 4)];
    *(v0 + 72) = 0x10000;
    sprite_load(v0, 128, 8, 13);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 23;
    *(v0 + 17) = 23;
    sprite_setAnimation(v0, 0x17u);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 4, 5, 3);
    object_setCollisionHitEffect(2);
    v4 = object_clearCollisionRegion();
    object_presentCollisionData(v4, v5);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80cade0
void __noreturn sub_80CADE0()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || *(*(v0 + 84) + 112) )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        v1 = battle_isTimeStop();
        if ( v3 )
            v1 = (*(&off_80CAE20 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80cae28
int __fastcall sub_80CAE28(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    int v5; // r1
    int v6; // r2
    int result; // r0

    if ( *(v3 + 10) )
    {
        result = *(v3 + 32) - 1;
        *(v3 + 32) = result;
        if ( result == 36 )
        {
            object_setCollisionRegion(1);
            result = 16;
            *(v3 + 62) = 16;
        }
        else if ( result <= 0 )
        {
            *(v3 + 16) = 24;
            PlaySoundEffect(255, a2, a3);
            *(v3 + 9) = 4;
            result = 0;
            *(v3 + 10) = 0;
        }
        else if ( result < 36 && result >= 30 )
        {
            result = *(v3 + 72) + *(v3 + 60);
            *(v3 + 60) = result;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        v4 = object_getFlip(v3);
        SpawnT4BattleObjectWithId0(v3, v4 << 8, *(v3 + 52), *(v3 + 56), 0);
        PlaySoundEffect(235, v5, v6);
        result = 42;
        *(v3 + 32) = 42;
    }
    return result;
}


// 0x80cae94
signed int sub_80CAE94()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 52) += *(v0 + 64);
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    if ( *(*(v0 + 84) + 112) || (result = object_isCurrentPanelValid()) == 0 )
    {
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80caec0
int sub_80CAEC0()
{
    return object_genericDestroy();
}


// 0x80caec8
int __fastcall sub_80CAEC8(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(55, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80caef0
void sub_80CAEF0()
{
    int v0; // r5

    (*(&off_80CAF08 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80caf14
signed int __noreturn sub_80CAF14()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 52) += 1310720 * object_getFrontDirection(v0);
    *(v0 + 60) = 2621440;
    sprite_load(v0, 128, 8, 13);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 22;
    *(v0 + 17) = 22;
    sprite_setAnimation(v0, 0x16u);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = 4 * *(v0 + 4);
    *(v0 + 96) = *&byte_80CAF78[v2];
    *(v0 + 100) = *&byte_80CAF8C[v2];
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80caf9c
int sub_80CAF9C()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        result = battle_isTimeStop();
        if ( v2 )
            result = (*(&off_80CAFC4 + *(v0 + 9)))();
    }
    return result;
}


// 0x80cafc8
int sub_80CAFC8()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r4
    int v4; // r6
    int v5; // r1
    int v6; // r1
    int v7; // r2
    int result; // r0
    int v9; // r0
    unsigned __int8 v10; // vf
    int v11; // r0
    __int64 v12; // r0
    int v13; // r1

    if ( *(v0 + 10) )
    {
        v9 = *(v0 + 32);
        v10 = __OFSUB__(v9--, 1);
        *(v0 + 32) = v9;
        if ( (v9 < 0) ^ v10 )
        {
            if ( object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & *&byte_80CB070[4 * *(v0 + 22)] )
            {
                SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
                sub_80CB0AE();
            }
            *(v0 + 8) = 8;
            result = 0;
            *(v0 + 34) = 0;
        }
        else
        {
            v11 = *(v0 + 34) + 1;
            *(v0 + 34) = v11;
            if ( !__CFSHR__(v11, 3) )
            {
                LODWORD(v12) = *(v0 + 20);
                HIDWORD(v12) = *(v0 + 21);
                object_highlightPanel(v12);
            }
            *(v0 + 52) += *(v0 + 64);
            *(v0 + 56) += *(v0 + 68);
            v13 = *(v0 + 72);
            *(v0 + 60) += v13;
            *(v0 + 72) = v13 + *(v0 + 100);
            result = object_setPanelsFromCoordinates(v0);
        }
    }
    else
    {
        *(v0 + 10) = 4;
        v1 = *(v0 + 21);
        v2 = object_getCoordinatesForPanels(*(v0 + 20));
        v3 = *(v0 + 96);
        v4 = *(v0 + 100);
        *(v0 + 64) = sub_8001330((v0 + 52), v2, v5);
        *(v0 + 68) = v6;
        *(v0 + 72) = v7;
        *(v0 + 32) = *(v0 + 96);
        result = 0;
        *(v0 + 34) = 0;
    }
    return result;
}


// 0x80cb078
int sub_80CB078()
{
    return object_genericDestroy();
}


// 0x80cb080
int __fastcall sub_80CB080(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(56, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 20) = v7;
        *(v4 + 21) = v8;
        *(v4 + 18) = *(v10 + 18);
        *(v4 + 19) = *(v10 + 19);
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80cb0ae
int sub_80CB0AE()
{
    int v0; // r5
    int v1; // r6
    int result; // r0

    v1 = *(v0 + 44);
    result = object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
    if ( result )
        *(result + 32) = 5;
    return result;
}


// 0x80cb0dc
void sub_80CB0DC()
{
    int v0; // r5

    (*(&off_80CB100 + *(v0 + 8)))();
    if ( *(v0 + 4) == 4 )
        object_updateSpriteTimestop();
    else
        object_updateSpritePaused();
}


// 0x80cb10c
signed int __noreturn sub_80CB10C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r2
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 8, 13);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 20;
    *(v0 + 17) = 20;
    sprite_setAnimation(v0, 0x14u);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    PlaySoundEffect(167, v2, v3);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80cb154
int sub_80CB154()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else if ( *(v0 + 4) == 4 || (result = battle_isTimeStop(), v2) )
    {
        result = (*(&off_80CB180 + *(v0 + 9)))();
    }
    return result;
}


// 0x80cb184
void sub_80CB184()
{
    int v0; // r5
    int v1; // r0

    if ( *(v0 + 10) )
    {
        v1 = *(v0 + 32) - 1;
        *(v0 + 32) = v1;
        if ( v1 == 13 )
        {
            sub_80CB208(1, 13);
            sub_80CB208(2, 13);
        }
        else if ( v1 == 7 )
        {
            sub_80CB248(2);
        }
        else if ( v1 <= 0 )
        {
            sub_80CB248(1);
            *(v0 + 8) = 8;
            *(v0 + 34) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        sub_80CB208(0, 32);
        *(v0 + 32) = 32;
    }
}


// 0x80cb1da
int sub_80CB1DA()
{
    return object_genericDestroy();
}


// 0x80cb1e2
int __fastcall sub_80CB1E2(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(57, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80cb208
_BYTE *__fastcall sub_80CB208(int a1, __int16 a2)
{
    int v2; // r5
    __int16 v3; // r6
    int v4; // ST04_4
    bool v5; // zf
    _BYTE *result; // r0
    int v7; // r1
    int v8; // r6
    _BYTE *v9; // [sp-8h] [bp-18h]
    __int16 v10; // [sp-4h] [bp-14h]

    v3 = a2;
    v9 = (object_getEnemyDirection() * a1 + *(v2 + 18));
    v4 = *(v2 + 19);
    v5 = object_isValidPanel(v9, v4) == 0;
    result = v9;
    v7 = v4;
    if ( !v5 )
    {
        v10 = v3;
        v8 = *(v2 + 44);
        result = sub_80C53A6(v9, v7, *(v2 + 14), 0);
        if ( result )
            *(result + 16) = v10;
    }
    return result;
}


// 0x80cb248
void __fastcall sub_80CB248(int a1)
{
    Battle *v1; // r5
    int v2; // r0
    int v3; // r1
    int v4; // [sp-8h] [bp-14h]

    v4 = object_getEnemyDirection() * a1 + v1->panelX;
    if ( object_isValidPanel(v4, v1->panelY) )
    {
        object_getFlip(v1);
        v2 = object_getCoordinatesForPanels(v4);
        SpawnT4BattleObjectWithId0(v1, v2, v2, v3, 0);
    }
}


// 0x80cb284
void sub_80CB284()
{
    int v0; // r5

    (*(&off_80CB29C + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80cb2a8
int __noreturn sub_80CB2A8()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 16, 43);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 7, 5, 3);
    v4 = object_setCollisionHitEffect(6);
    object_presentCollisionData(v4, v5);
    *(v0 + 100) = 40 * object_getFrontDirection(v0) * (*(v0 + 5) - *(v0 + 18)) >> 1;
    *(v0 + 104) = *&byte_80CB344[4 * *(v0 + 4)];
    *(v0 + 32) = (&off_80CB358)[*(v0 + 4)];
    *(v0 + 34) = 64;
    *(v0 + 72) = 0x400000;
    sub_80CB434();
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80cb368
void __noreturn sub_80CB368()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        *(v0 + 8) = 8;
    }
    else
    {
        v1 = battle_isTimeStop();
        if ( v3 )
            (*(&off_80CB39C + *(v0 + 9)))();
        else
            object_presentCollisionData(v1, v2);
    }
}


// 0x80cb3a0
signed int sub_80CB3A0()
{
    int v0; // r5
    int v1; // r4
    int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // r1
    int v5; // r4
    int v6; // r6
    __int64 v7; // r0
    signed int result; // r0

    v1 = *(v0 + 84);
    if ( *(v1 + 112) )
    {
        object_clearCollisionRegion();
        *(v1 + 112) = 0;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2--, 1);
    *(v0 + 32) = v2;
    if ( ((v2 < 0) ^ v3) | (v2 == 0) )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        v4 = *(v0 + 104) + *(v0 + 72);
        *(v0 + 72) = v4;
        *(v0 + 34) = HIWORD(v4);
        v5 = *(v0 + 18);
        v6 = *(v0 + 19);
        sub_80CB45C();
        object_setPanelsFromCoordinates(v0);
        object_updateCollisionPanels(v0);
        LODWORD(v7) = *(v0 + 18);
        HIDWORD(v7) = *(v0 + 19);
        object_highlightPanel(v7);
        if ( *(v0 + 18) != v5 || (result = *(v0 + 19), result != v6) )
            result = object_setCollisionRegion(1);
    }
    return result;
}


// 0x80cb3fc
int sub_80CB3FC()
{
    int v0; // r5
    _DWORD *v1; // r1

    v1 = *(v0 + 96);
    if ( *v1 == v0 )
        *v1 = 0;
    return object_genericDestroy();
}


// 0x80cb410
int __fastcall sub_80CB410(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(58, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *v6 = v4;
        *(v4 + 22) = *(v11 + 22);
    }
    return result;
}


// 0x80cb434
int sub_80CB434()
{
    int v0; // r5
    int v1; // r1
    int v2; // r6
    int result; // r0

    object_getCoordinatesForPanels(1);
    *(v0 + 112) = v1;
    v2 = object_getCoordinatesForPanels(*(v0 + 18));
    result = object_getCoordinatesForPanels(*(v0 + 5)) + v2;
    __asm { SVC         6 }
    *(v0 + 108) = result;
    return result;
}


// 0x80cb45c
int sub_80CB45C()
{
    int v0; // r5
    int v1; // r0
    __int16 v2; // t1
    int v3; // r2
    int result; // r0

    v1 = object_getEnemyDirection();
    v2 = *(v0 + 18);
    v3 = 2 * (*(v0 + 34) & 0xFF);
    *(v0 + 52) = *(v0 + 108) + (*&math_sinTable[v3] * *(v0 + 100) << 8) * -v1;
    result = *&math_cosTable[v3] * *(v0 + 100) << 8;
    *(v0 + 56) = *(v0 + 112) + result;
    return result;
}


// 0x80cb49c
void sub_80CB49C()
{
    int v0; // r5

    (*(&off_80CB4B4 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80cb4c0
int sub_80CB4C0()
{
    int v0; // r5

    if ( *(v0 + 4) < 3 )
        **(v0 + 76) = 0;
    return object_genericDestroy();
}


// 0x80cb4d4
int __noreturn sub_80CB4D4()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    _BYTE *v3; // r7
    int v5; // r1
    char v6; // r3
    signed int v7; // r2
    int v8; // r0
    int v9; // r1

    sprite_load(v0, 128, 16, 55);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    *(v0 + 64) = object_getFrontDirection(v0) * *&byte_80CB58C[4 * *(v0 + 4)];
    *(v0 + 18) -= object_getFrontDirection(v0);
    object_setCoordinatesFromPanels(v0);
    v2 = object_createCollisionData();
    v3 = v2;
    if ( v2 )
    {
        v5 = 4;
        v6 = 3;
        v7 = *(v0 + 4);
        if ( v7 >= 6 )
        {
            v6 = *(v0 + 5);
            if ( v7 == 9 )
                v5 = 37;
        }
        object_setupCollisionData(v2, v5, 5, v6);
        v3[1] = 0;
        v8 = object_setCollisionHitEffect(255);
        object_presentCollisionData(v8, v9);
        if ( *(v0 + 4) < 3 )
            **(v0 + 76) = 3;
        if ( *(v0 + 4) == 9 )
        {
            sub_801A4D0(20, 2);
            sprite_setPallete(1);
        }
        *(v0 + 100) = 10;
        *(v0 + 8) = 4;
        sub_80CB5B4();
    }
    return object_freeMemory();
}


// 0x80cb5b4
void __noreturn sub_80CB5B4()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
        goto LABEL_11;
    if ( *(*(v0 + 84) + 112) )
    {
        if ( *(v0 + 4) < 6 )
            goto LABEL_11;
        object_clearCollisionRegion();
        *(v0 + 96) = *(v0 + 18);
    }
    (*(&off_80CB624 + *(v0 + 9)))();
    sub_80CB6B0();
    if ( *(v0 + 11) && !*(*(v0 + 84) + 1) && *(v0 + 18) != *(v0 + 96) )
        object_setCollisionRegion(4);
    v1 = object_isCurrentPanelValid();
    if ( v1 )
    {
        object_presentCollisionData(v1, v2);
        return;
    }
LABEL_11:
    object_clearCollisionRegion();
    *(v0 + 8) = 8;
}


// 0x80cb628
int sub_80CB628()
{
    int v0; // r5
    int v1; // r0
    int result; // r0
    char v3; // r0
    int v4; // r0

    v1 = *(v0 + 11);
    if ( v1 == 2 )
        goto LABEL_9;
    if ( v1 == 1 )
    {
        v4 = *(v0 + 32) - 1;
        *(v0 + 32) = v4;
        if ( v4 )
            return object_updateCollisionPanels(v0);
        *(v0 + 11) = 2;
LABEL_9:
        *(v0 + 52) += *(v0 + 64);
        object_setPanelsFromCoordinates(v0);
        return object_updateCollisionPanels(v0);
    }
    result = sprite_getFrameParameters();
    if ( !(result & 0x80) )
        return result;
    *(v0 + 16) = 1;
    *(v0 + 18) += object_getFrontDirection(v0);
    object_setCoordinatesFromPanels(v0);
    object_setCollisionRegion(4);
    v3 = 2;
    if ( *(v0 + 4) < 3 )
    {
        *(v0 + 32) = 15;
        v3 = 1;
    }
    *(v0 + 11) = v3;
    return object_updateCollisionPanels(v0);
}


// 0x80cb686
int __fastcall sub_80CB686(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _DWORD *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(59, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        if ( *(v4 + 4) < 3 )
        {
            *(v4 + 76) = v6;
            *v6 = 2;
        }
        *(v4 + 22) = *(v11 + 22);
    }
    return result;
}


// 0x80cb6b0
int sub_80CB6B0()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    result = *(v0 + 4);
    if ( result == 9 )
    {
        v2 = *(v0 + 100);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 100) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 100) = 5;
            result = sub_80CB6CA();
        }
    }
    return result;
}


// 0x80cb6ca
int sub_80CB6CA()
{
    Battle *v0; // r5

    object_getFlip(v0);
    return sub_80E33FA(&v0->vx, v0->x, v0->y, v0->z);
}


// 0x80cb6f8
void sub_80CB6F8()
{
    int v0; // r5

    (*(&off_80CB710 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80cb71c
int sub_80CB71C()
{
    int v0; // r5
    _BYTE *v1; // r0
    char *v3; // r3
    int v4; // r0
    int v5; // r1

    object_setCoordinatesFromPanels(v0);
    v1 = object_createCollisionData();
    if ( v1 )
    {
        v3 = &byte_80CB6F0[3 * *(v0 + 4)];
        object_setupCollisionData(v1, *v3, v3[1], v3[2]);
        v4 = object_setCollisionHitEffect(255);
        object_presentCollisionData(v4, v5);
        *(v0 + 34) = 1;
        *(v0 + 8) = 4;
        sub_80CB762();
    }
    return object_freeMemory();
}


// 0x80cb762
void __noreturn sub_80CB762()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    v1 = *(v0 + 84);
    if ( !*(v1 + 1) )
        goto LABEL_4;
    if ( *(v1 + 112) )
    {
        PlaySoundEffect(195, v1, *(v1 + 1));
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
    }
    else if ( !battle_isBattleOver() )
    {
LABEL_4:
        v2 = (*(&off_80CB7B4 + *(v0 + 9)))();
        object_presentCollisionData(v2, v3);
        return;
    }
    object_clearCollisionRegion();
    *(v0 + 8) = 8;
}


// 0x80cb7bc
int sub_80CB7BC()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // r1
    int v5; // r2
    int v6; // r0
    int v7; // r4
    int v8; // r0
    int v9; // r1
    int v10; // r6
    char v11; // r0
    int v12; // [sp-8h] [bp-18h]
    int v13; // [sp-4h] [bp-14h]

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 10) = 0;
            *(v0 + 18) += object_getFrontDirection(v0);
            object_setCoordinatesFromPanels(v0);
            object_updateCollisionPanels(v0);
            result = object_isValidPanel(*(v0 + 18), *(v0 + 19));
            if ( !result )
            {
                object_clearCollisionRegion();
                camera_initShakeEffect_80302a8(3, 40);
                PlaySoundEffect(195, v4, v5);
                v6 = object_getFrontDirection(v0);
                v7 = ((*(v0 + 22) ^ *(v0 + 23)) << 8) + 96;
                v12 = *(v0 + 18) - v6;
                v13 = *(v0 + 19);
                v8 = object_getCoordinatesForPanels(v12);
                SpawnT4BattleObjectWithId0(v0, v8, v8, v9, 0);
                v10 = *(v0 + 44) >> *(v0 + 6);
                object_spawnCollisionRegion(v12, v13, 0, 0);
                if ( *(v0 + 5) )
                    object_crackPanel(v12, v13);
                v11 = v12 | 16 * v13;
                *(v0 + 5) = v11;
                v11 -= 16;
                *(v0 + 6) = v11;
                *(v0 + 7) = v11 + 32;
                sub_8000C72(v0 + 5, 3, 3);
                *(v0 + 34) = 3;
                *(v0 + 32) = 14;
                *(v0 + 9) = 4;
                result = 0;
                *(v0 + 10) = 0;
            }
        }
    }
    else
    {
        *(v0 + 10) = 1;
        result = *(v0 + 34);
        *(v0 + 32) = result;
    }
    return result;
}


// 0x80cb898
int sub_80CB898()
{
    int v0; // r5
    unsigned int v1; // r0
    signed int v2; // r1
    char v3; // r0
    int v4; // r0
    int v5; // r1
    int v6; // r0
    unsigned __int8 v7; // vf
    int result; // r0

    if ( *(v0 + 32) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
    }
    else
    {
        *(v0 + 32) = 4;
        v1 = *(v0 + *(v0 + 34) + 4);
        v2 = v1 >> 4;
        v3 = v1 & 7;
        if ( v2 && v2 <= 3 )
        {
            v4 = object_getCoordinatesForPanels(v3);
            SpawnT4BattleObjectWithId0(v0, v4, v4, v5, 393216);
        }
        v6 = *(v0 + 34);
        v7 = __OFSUB__(v6, 1);
        result = v6 - 1;
        *(v0 + 34) = result;
        if ( (result < 0) ^ v7 )
        {
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    return result;
}


// 0x80cb8de
int __fastcall sub_80CB8DE(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(60, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
    }
    return result;
}


// 0x80cb900
void sub_80CB900()
{
    int v0; // r5

    (*(&off_80CB918 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80cb924
int __fastcall sub_80CB924(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    int result; // r0
    int v6; // r0

    v4 = *(v3 + 9);
    if ( v4 == 1 )
    {
        result = sprite_getFrameParameters();
        if ( !(result & 0x80) )
            return result;
    }
    else if ( v4 != 2 )
    {
        *(v3 + 9) = 1;
        *(v3 + 16) = 1;
        return PlaySoundEffect(292, a2, a3);
    }
    --**(v3 + 104);
    **(v3 + 108) = 0;
    v6 = *(v3 + 112);
    sub_80E5BA2();
    return object_genericDestroy();
}


// 0x80cb964
void __noreturn sub_80CB964()
{
    Battle *v0; // r5

    object_setCoordinatesFromPanels(v0);
    sub_8011504(0x1021025u, 0xC0D0000u);
}


// 0x80cb9e2
void __noreturn sub_80CB9E2()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || sub_801156A(0) == -1 || *(*(v0 + 84) + 112) & 0xF800000 )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        v1 = battle_isTimeStop();
        if ( v3 )
            v1 = (*(&off_80CBA2C + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80cba34
int sub_80CBA34()
{
    int v0; // r5
    int result; // r0

    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        sub_80CBAFA();
        *(v0 + 16) = 0;
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80cba52
int sub_80CBA52()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    int v3; // r0
    unsigned __int8 v4; // vf

    if ( object_isCurrentPanelValid() )
    {
        if ( !*(v0 + 10) )
        {
            *(v0 + 10) = 1;
            v2 = *(v0 + 100);
            if ( v2 )
            {
                *(v0 + 68) = v2 * *(v0 + 96);
                *(v0 + 64) = 0;
            }
            else
            {
                *(v0 + 32) = *(v0 + 34);
                object_setCoordinatesFromPanels(v0);
            }
        }
        *(v0 + 52) += *(v0 + 64);
        *(v0 + 56) += *(v0 + 68);
        object_setPanelsFromCoordinates(v0);
        object_updateCollisionPanels(v0);
        sub_80CBAFA();
        v3 = *(v0 + 32);
        v4 = __OFSUB__(v3, 1);
        result = v3 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v4) | (result == 0) )
        {
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
        result = 2;
        *(v0 + 9) = 2;
    }
    return result;
}


// 0x80cbab8
int __fastcall sub_80CBAB8(unsigned int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    unsigned int v8; // [sp+0h] [bp-18h]
    int v9; // [sp+4h] [bp-14h]
    int v10; // [sp+8h] [bp-10h]
    int v11; // [sp+Ch] [bp-Ch]
    int v12; // [sp+10h] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    v11 = a4;
    object_spawnType3(61, a2, a3, 0);
    result = v4;
    if ( v4 )
    {
        *(v4 + 96) = v10;
        *(v4 + 112) = v9;
        *(v4 + 108) = v11;
        *(v4 + 18) = v8 & 7;
        *(v4 + 19) = v8 >> 4;
        *(v4 + 14) = 2;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v12 + 22);
        *(v4 + 104) = v6;
        *(v4 + 76) = v12;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80cbaf2
int __fastcall sub_80CBAF2(int result)
{
    *(result + 36) = 0;
    return result;
}


// 0x80cbafa
int sub_80CBAFA()
{
    int v0; // r5
    int result; // r0
    signed int v2; // r2
    int v3; // r1

    result = 5 * (*(v0 + 22) ^ 1) + 1;
    if ( result == *(v0 + 18) )
    {
        result = sub_80103F8(*(v0 + 22) ^ 1);
        v2 = 1;
        v3 = *(v0 + 19);
        if ( v3 != 1 )
        {
            result = *(result + 19);
            if ( result <= v3 )
            {
                if ( result == v3 )
                    v2 = 0;
                else
                    v2 = -1;
            }
        }
        *(v0 + 100) = v2;
    }
    return result;
}


// 0x80cbb44
int sub_80CBB44()
{
    int v0; // r5

    return (*(&off_80CBB58 + *(v0 + 8)))();
}


// 0x80cbb64
int sub_80CBB64()
{
    int v0; // r5
    _DWORD *v1; // r3

    v1 = *(v0 + 76);
    if ( v1 )
        *v1 = 0;
    return object_genericDestroy();
}


// 0x80cbb76
signed int __noreturn sub_80CBB76()
{
    int v0; // r5
    int v1; // r0
    signed __int16 v2; // r0
    _BYTE *v3; // r0
    _BYTE *v4; // r7
    int v5; // r1
    int v6; // r2
    int v7; // r0
    int v8; // r1
    int v9; // r1
    int v10; // r2
    int v11; // r0
    int v12; // r1
    signed int result; // r0
    int v14; // [sp+0h] [bp-8h]

    object_setCoordinatesFromPanels(v0);
    sprite_load(v0, 128, 16, 0);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    *(v0 + 40) = 212;
    v2 = 50;
    if ( *(v0 + 4) )
        v2 = 150;
    *(v0 + 36) = v2;
    *(v0 + 38) = v2;
    v3 = object_createCollisionData();
    v4 = v3;
    if ( !v3 )
    {
        object_freeMemory();
        JUMPOUT(__CS__, v14);
    }
    v5 = 19;
    v6 = 20;
    if ( *(v0 + 4) )
    {
        v5 = 14;
        v6 = 15;
    }
    object_setupCollisionData(v3, v5, v6, 3);
    v4[1] = 1;
    object_setCollisionHitEffect(255);
    v7 = object_clearCollisionRegion();
    object_presentCollisionData(v7, v8);
    if ( !*(v0 + 4) )
        **(v0 + 76) = v0;
    object_setFlag1(64);
    *(v0 + 32) = 15;
    *(v0 + 34) = 0;
    sub_8002C7A(0);
    SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
    PlaySoundEffect(274, v9, v10);
    v11 = *(v0 + 18);
    *(v0 + 20) = v11;
    v12 = *(v0 + 19);
    *(v0 + 21) = v12;
    object_reservePanel(v11, v12);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80cbc38
void __noreturn sub_80CBC38()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf
    int v4; // r0
    int v5; // r1

    sprite_clearFinalPalette();
    v1 = *(v0 + 36);
    v2 = *(v0 + 100);
    *(v0 + 100) = v1;
    if ( v1 != v2 )
    {
        *(v0 + 96) = 1;
        *(v0 + 34) = 20;
    }
    battle_isTimeStop();
    if ( v3 && (*(v0 + 5) == 1 || battle_isBattleOver()) )
        *(v0 + 36) = 0;
    if ( *(v0 + 4) )
        sub_801ADFA();
    else
        sub_801AD12();
    sub_801B394(&off_80CBC8C);
    object_updateSprite();
    object_presentCollisionData(v4, v5);
}


// 0x80cbcb0
// write access to const memory has been detected, the output may be wrong!
int sub_80CBCB0()
{
    int v0; // r5
    __int16 v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int result; // r0
    int v5; // r1
    int v6; // r2

    v1 = *(v0 + 34) + 1;
    *(v0 + 34) = v1;
    sub_8002C7A(v1);
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v3 )
    {
        sprite_disableAlpha();
        *(v0 + 9) = 8;
        HIWORD(dword_8) = 0;
        sub_80CC006(0, v5, v6);
    }
    return result;
}


// 0x80cbcf4
int sub_80CBCF4()
{
    int v0; // r5

    return (*(&off_80CBD08 + *(v0 + 10)))();
}


// 0x80cbd10
void __noreturn sub_80CBD10()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    int v3; // r1
    int v4; // r2

    if ( *(v0 + 96) )
    {
        v1 = *(v0 + 34) - 1;
        *(v0 + 34) = v1;
        if ( !v1 )
            *(v0 + 96) = 0;
    }
    object_setPanelsFromCoordinates(v0);
    v2 = object_updateCollisionPanels(v0);
    sub_80CC006(v2, v3, v4);
}


// 0x80cbd32
signed int sub_80CBD32()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r0
    int v4; // r0
    int v5; // r6
    int v6; // ST00_4
    int v7; // r2
    int v8; // r0
    int v9; // r6
    int v10; // r4
    int v11; // r1
    int v12; // r2
    signed int result; // r0

    sprite_setColorShader(v0, byte_80CBDE4[(*(v0 + 32) & 4u) >> 2]);
    v3 = *(v0 + 32) - 1;
    *(v0 + 32) = v3;
    if ( v3 )
        JUMPOUT(&locret_80CBE48);
    if ( *(v0 + 4) )
    {
        v9 = *(v0 + 44);
        object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), 0, 0);
        v10 = *(v0 + 22);
        sub_801BD3C(*(v0 + 18), *(v0 + 19), 0, 15);
        v8 = PlaySoundEffect(271, v11, v12);
    }
    else
    {
        PlaySoundEffect(195, v1, v2);
        v4 = object_getPanelDataOffset(*(v0 + 18), *(v0 + 19))[3] ^ 1;
        *(v0 + 22) = v4;
        v5 = *(v0 + 44);
        v6 = *&byte_80CBDD8[4 * v4];
        object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), 0, *(v0 + 60));
        sub_80E2FE8(v6, 2, v7, 0);
        v8 = camera_initShakeEffect_80302a8(1, 30);
    }
    sub_802EF5C(v8);
    sub_800F656();
    object_clearCollisionRegion();
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80cbde6
signed int __noreturn sub_80CBDE6()
{
    int v0; // r5
    int v1; // r0
    int v2; // r2
    signed int result; // r0
    _DWORD *v4; // r0

    object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    v1 = object_getFlag2();
    if ( v1 & 0x8000 )
    {
        if ( !(v1 & 0x300000) )
        {
            result = sub_800F8CE(v1);
            if ( !result )
                return result;
            if ( result != 1 )
                SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 786432);
        }
    }
    else
    {
        PlaySoundEffect(112, 0x8000, v2);
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x80000);
    }
    object_clearCollisionRegion();
    v4 = sub_800F656();
    sub_802EF5C(v4);
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80cbe4a
int __fastcall sub_80CBE4A(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    __int16 v8; // r3
    char v9; // [sp+0h] [bp-14h]
    char v10; // [sp+4h] [bp-10h]
    char v11; // [sp+8h] [bp-Ch]
    int v12; // [sp+Ch] [bp-8h]

    v9 = a1;
    v10 = a2;
    v11 = a3;
    object_spawnType3(62, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v9;
        *(v4 + 19) = v10;
        *(v4 + 14) = v11;
        *(v4 + 44) = v5;
        v8 = *(v12 + 22);
        *(v4 + 22) = v8;
        if ( !*(v4 + 4) )
            *(v4 + 76) = v6;
        *v4 |= 0x10u;
        result = sub_800F614(v4, v8, 0);
    }
    return result;
}


// 0x80cbe82
signed int __fastcall sub_80CBE82(int a1, _DWORD *a2)
{
    Battle *v2; // r5
    _DWORD *v3; // r4
    int v4; // r1
    int v5; // r0
    int v6; // r1
    int v7; // r6
    int v8; // r1
    int v9; // r1
    BOOL v10; // r0
    int v12; // [sp-4h] [bp-10h]

    v3 = a2;
    if ( (a2[19] - 96) == v2 && !a2[24] )
    {
        v12 = a1;
        if ( object_getFrontDirection(v2) != ((a2[13] >> 16) - (a1 >> 16) + 2) >> 31 )
        {
            v4 = v3[14];
            v5 = sub_800E258(v12);
            if ( object_checkPanelParameters(v5, v6, 16, 109051904) )
            {
                v7 = object_getFrontDirection(v2);
                v8 = *(v3 + 19);
                if ( (object_getCoordinatesForPanels(*(v3 + 18)) - v3[13]) * v7 > 0 )
                {
                    v9 = v12;
LABEL_8:
                    v3[13] = v9;
                    return 1;
                }
                v10 = object_checkPanelParameters(*(v3 + 18) + v7, *(v3 + 19), 16, 109576320);
                v9 = v12;
                if ( v10 )
                    goto LABEL_8;
            }
        }
    }
    return 0;
}


// 0x80cbf04
signed int __fastcall sub_80CBF04(int a1, _DWORD *a2)
{
    int v2; // r5
    _DWORD *v3; // r4
    int v4; // r1
    int v5; // r0
    int v6; // r1
    BOOL v7; // r0
    int v9; // [sp-4h] [bp-Ch]

    v3 = a2;
    if ( a2[19] - 96 == v2 && !a2[24] )
    {
        v9 = a1;
        if ( object_getFrontDirection(v2) == ((a2[13] >> 16) - (v9 >> 16) - v9) >> 31 )
        {
            a2 = v9;
        }
        else
        {
            v4 = v3[14];
            v5 = sub_800E258(v9);
            v7 = object_checkPanelParameters(v5, v6, 16, 109051904);
            a2 = v9;
            if ( !v7 )
                *(v2 + 5) = 1;
        }
    }
    v3[13] = a2;
    return 1;
}


// 0x80cbf54
signed int __fastcall sub_80CBF54(int a1)
{
    int v1; // r5
    int v2; // r2
    _BYTE *v3; // r5
    char v4; // r1

    v2 = *(a1 + 76) - 96;
    if ( v2 != v1 )
        return 0;
    *(a1 + 32) = 60;
    *(a1 + 10) = 4;
    *(a1 + 76) = 0;
    *(v2 + 96) = 0;
    v3 = a1;
    object_clearFlag(64);
    object_setFlag1(0x80000);
    v4 = v3[19];
    v3[20] = v3[18];
    v3[21] = v4;
    return 1;
}


// 0x80cbf8c
int sub_80CBF8C()
{
    int v0; // r5
    int result; // r0
    char v2; // r1

    *(v0 + 32) = 60;
    *(v0 + 10) = 4;
    object_clearFlag(64);
    object_setFlag1(0x80000);
    result = *(v0 + 18);
    v2 = *(v0 + 19);
    *(v0 + 20) = result;
    *(v0 + 21) = v2;
    return result;
}


// 0x80cbfae
int __fastcall sub_80CBFAE(int a1, int a2, int a3)
{
    sub_80E2FE8(129, 2, a3, 0);
    return camera_initShakeEffect_80302a8(1, 30);
}


// 0x80cc006
BOOL __fastcall __noreturn sub_80CC006(int a1, int a2, int a3)
{
    _BYTE *v3; // r5
    int v4; // r0
    int v5; // r1
    int v6; // r2
    int v7; // r3
    BOOL result; // r0

    sub_800EC48(v3[18], v3[19], a3, byte_80CC024);
    result = object_checkPanelParameters(v4, v5, v6, v7);
    if ( !result )
        v3[5] = 1;
    return result;
}


// 0x80cc044
int sub_80CC044()
{
    int v0; // r5

    return (*(&off_80CC058 + *(v0 + 8)))();
}


// 0x80cc064
void __noreturn sub_80CC064()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), 0, 0);
    PlaySoundEffect(252, v1, v2);
    *(v0 + 8) = 4;
    sub_80CC090();
}


// 0x80cc090
void __noreturn sub_80CC090()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 20;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( ((v1 < 0) ^ v2) | (v1 == 0) )
        *(v0 + 8) = 8;
    sprite_update(v0);
}


// 0x80cc0b2
int __fastcall sub_80CC0B2(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    char v8; // [sp+8h] [bp-Ch]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(63, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, v8);
    return result;
}


// 0x80cc0e8
void sub_80CC0E8()
{
    int v0; // r5

    (*(&off_80CC104 + *(v0 + 8)))();
    sub_80169BE();
    object_updateSpritePaused();
}


// 0x80cc110
void __noreturn sub_80CC110()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v3; // r0
    int v4; // r1
    char v5; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 40;
    ++*(v0 + 60);
    ++*(v0 + 56);
    sprite_load(v0, 128, 16, 42);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    *(v0 + 44) = *&byte_80CC0D8[4 * *(v0 + 4)];
    v2 = object_createCollisionData();
    if ( v2 )
    {
        object_setupCollisionData(v2, 12, 13, 3);
        object_setCollisionHitEffect(6);
        v3 = object_clearCollisionRegion();
        object_presentCollisionData(v3, v4);
        *(v0 + 7) = 0;
        v5 = *(v0 + 19);
        *(v0 + 20) = *(v0 + 18);
        *(v0 + 21) = v5;
        *(v0 + 8) = 4;
    }
    else
    {
        object_freeMemory();
    }
}


// 0x80cc1a0
void __noreturn sub_80CC1A0()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        if ( *&byte_80CC200[4 * *(v0 + 22)] & *(*(v0 + 84) + 112) )
        {
            object_clearCollisionRegion();
            *(v0 + 10) = 12;
        }
        v1 = battle_isTimeStop();
        if ( v3 )
            v1 = (*(&off_80CC1F0 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80cc208
int sub_80CC208()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( *(v0 + 7) == 2 )
    {
        *(v0 + 7) = 0;
        *(v0 + 9) = 8;
        result = 0;
        *(v0 + 10) = 0;
    }
    else
    {
        if ( !*(v0 + 11) )
        {
            *(v0 + 11) = 4;
            *(v0 + 32) = 120;
        }
        v1 = *(v0 + 32);
        v2 = __OFSUB__(v1, 1);
        result = v1 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v2) | (result == 0) )
        {
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80cc23e
int sub_80CC23E()
{
    int v0; // r5

    return (*(&off_80CC250 + *(v0 + 10)))();
}


// 0x80cc260
int sub_80CC260()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    int v3; // r0
    unsigned __int8 v4; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 34) + 1;
        *(v0 + 34) = v2;
        if ( !__CFSHR__(v2, 3) )
            object_highlightPanelRegion(*(v0 + 18), *(v0 + 19), 8, *(v0 + 22));
        v3 = *(v0 + 32);
        v4 = __OFSUB__(v3, 1);
        result = v3 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v4 )
        {
            result = 4;
            *(v0 + 10) = 4;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 1;
        *(v0 + 32) = 20;
        result = 0;
        *(v0 + 34) = 0;
    }
    return result;
}


// 0x80cc29e
int sub_80CC29E()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    char v4; // r0
    __int16 v5; // r0
    int v6; // r2

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            v4 = 2;
            if ( *(v0 + 22) )
                v4 = 5;
            *(v0 + 18) = v4;
            object_setCoordinatesFromPanels(v0);
            *(v0 + 62) = 20;
            object_updateCollisionPanels(v0);
            *(v0 + 64) = object_getEnemyDirection() * *&byte_80CC310[4 * *(v0 + 4)];
            *(v0 + 16) = 2;
            sprite_hasShadow();
            object_setCollisionRegion(1);
            v5 = *&byte_80CC0D0[2 * *(v0 + 4)];
            *(v0 + 36) = v5;
            *(v0 + 38) = v5;
            PlaySoundEffect(255, byte_80CC0D0, v6);
            result = 8;
            *(v0 + 10) = 8;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 1;
        result = 5;
        *(v0 + 32) = 5;
    }
    return result;
}


// 0x80cc36c
int sub_80CC36C()
{
    int v0; // r5
    char v1; // r1
    int result; // r0

    if ( *(v0 + 11) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 25 )
        {
            result = 0;
            *(v0 + 16) = 0;
        }
        else if ( result < 0 )
        {
            *(v0 + 9) = 0;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        v1 = *(v0 + 21);
        *(v0 + 18) = *(v0 + 20);
        *(v0 + 19) = v1;
        object_setCoordinatesFromPanels(v0);
        *(v0 + 62) = 40;
        object_updateCollisionPanels(v0);
        *(v0 + 16) = 3;
        sprite_noShadow(v0);
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80cc3b8
int sub_80CC3B8()
{
    int v0; // r5

    return (*(&off_80CC3CC + *(v0 + 10)))();
}


// 0x80cc3dc
int sub_80CC3DC()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            result = 4;
            *(v0 + 10) = 4;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 4;
        result = 14;
        *(v0 + 32) = 14;
    }
    return result;
}


// 0x80cc400
int sub_80CC400()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            *(v0 + 62) = 255;
            result = 8;
            *(v0 + 10) = 8;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 5;
        result = 2;
        *(v0 + 32) = 2;
    }
    return result;
}


// 0x80cc428
signed int sub_80CC428()
{
    int v0; // r5
    signed int result; // r0

    result = *(*(v0 + 76) + 9);
    if ( result != 12 )
    {
        result = 12;
        *(v0 + 10) = 12;
    }
    return result;
}


// 0x80cc43a
int sub_80CC43A()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 11) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 25 )
        {
            result = 0;
            *(v0 + 16) = 0;
        }
        else if ( result < 0 )
        {
            *(v0 + 9) = 0;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 62) = 40;
        *(v0 + 16) = 3;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80cc472
int sub_80CC472()
{
    int v0; // r5
    _DWORD *v1; // r1

    v1 = *(v0 + 96);
    if ( *v1 == v0 )
        *v1 = 0;
    return object_genericDestroy();
}


// 0x80cc486
int __fastcall sub_80CC486(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-10h]
    char v9; // [sp+4h] [bp-Ch]
    int v10; // [sp+8h] [bp-8h]

    v8 = a1;
    v9 = a2;
    object_spawnType3(64, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 76) = v10;
        *(v4 + 100) = v5;
        *(v4 + 96) = v6;
        *v6 = v4;
        *v4 |= 0x10u;
        sub_80CC110();
    }
    return result;
}


// 0x80cc4c4
void sub_80CC4C4()
{
    int v0; // r5

    (*(&off_80CC4E0 + *(v0 + 8)))();
    sub_80169BE();
    object_updateSprite();
}


// 0x80cc4ec
void __noreturn sub_80CC4EC()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v3; // r0
    int v4; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    ++*(v0 + 60);
    ++*(v0 + 56);
    sprite_load(v0, 128, 16, 41);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( v2 )
    {
        object_setupCollisionData(v2, 41, 0, 0);
        v3 = object_setCollisionHitEffect(255);
        object_presentCollisionData(v3, v4);
        *(v0 + 8) = 4;
    }
    else
    {
        object_freeMemory();
    }
}


// 0x80cc562
void __noreturn sub_80CC562()
{
    int v0; // r5
    int v1; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        object_presentCollisionData(0, v1);
    }
}


// 0x80cc584
_BYTE *__fastcall sub_80CC584(char a1, int a2, int a3, int a4)
{
    _BYTE *v4; // r5
    _BYTE *result; // r0
    char v6; // [sp+0h] [bp-10h]
    char v7; // [sp+4h] [bp-Ch]
    int v8; // [sp+8h] [bp-8h]

    v6 = a1;
    v7 = a2;
    object_spawnType3(65, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        v4[18] = v6;
        v4[19] = v7;
        v4[22] = *(v8 + 22);
        sub_80CC4EC();
    }
    return result;
}


// 0x80cc5a8
int sub_80CC5A8()
{
    int v0; // r5

    return (*(&off_80CC5BC + *(v0 + 8)))();
}


// 0x80cc5c8
int sub_80CC5C8()
{
    Battle *v0; // r5

    object_setCoordinatesFromPanels(v0);
    if ( object_isCurrentPanelValid() )
        sub_8011504(0x100040Fu, 0x4050000u);
    SpawnT4BattleObjectWithId0(v0, &v0->vx, v0->x, v0->y, v0->z + 0x100000);
    return object_freeMemory();
}


// 0x80cc668
void __noreturn sub_80CC668()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r2
    __int64 v4; // r0
    int v5; // r0
    int v6; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    v1 = *(*(v0 + 84) + 112);
    if ( !v1 )
    {
LABEL_4:
        (*(&off_80CC6E4 + *(v0 + 9)))();
        if ( !*(*(v0 + 84) + 1) )
        {
            if ( *(v0 + 18) == *(v0 + 96) )
            {
LABEL_8:
                object_updateSprite();
                object_presentCollisionData(v5, v6);
                return;
            }
            object_setCollisionRegion(1);
        }
        LODWORD(v4) = *(v0 + 18);
        HIDWORD(v4) = *(v0 + 19);
        object_highlightPanel(v4);
        goto LABEL_8;
    }
    if ( !(v1 & 0x800000) )
    {
        *(v0 + 96) = *(v0 + 18);
        object_clearCollisionRegion();
        PlaySoundEffect(301, v2, v3);
        goto LABEL_4;
    }
    SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x100000);
    object_clearCollisionRegion();
    *(v0 + 8) = 8;
}


// 0x80cc6e8
int sub_80CC6E8()
{
    int v0; // r5
    int v1; // ST00_4
    int v2; // ST04_4
    signed int v3; // r0

    v1 = *(v0 + 52);
    v2 = *(v0 + 56);
    *(v0 + 34) += *(v0 + 104);
    *(v0 + 52) += *(v0 + 64);
    *(v0 + 56) = 6144 * *&math_sinTable[2 * (*(v0 + 34) >> 8)] + *(v0 + 108);
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    v3 = *(v0 + 18);
    if ( v3 < 1 || v3 > 6 )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    return object_highlightCurrentCollisionPanels();
}


// 0x80cc73c
int __fastcall sub_80CC73C(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    char v8; // [sp+8h] [bp-Ch]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(66, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, v8);
    return result;
}


// 0x80cc76c
void sub_80CC76C()
{
    int v0; // r5

    (*(&off_80CC784 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80cc790
int __noreturn sub_80CC790()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1
    __int16 v6; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 20;
    sprite_load(v0, 128, 16, 57);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 64, 13, 3);
    v4 = object_setCollisionHitEffect(255);
    object_presentCollisionData(v4, v5);
    v6 = *&byte_80CC764[2 * *(v0 + 4)];
    *(v0 + 36) = v6;
    *(v0 + 38) = v6;
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80cc800
void __noreturn sub_80CC800()
{
    int v0; // r5
    signed int v1; // r0
    unsigned __int8 v2; // vf
    int v3; // r0
    int v4; // r1
    char v5; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver()
        || (v1 = object_applyDamage(0), (v1 < 0) ^ v2)
        || *&byte_80CC860[4 * *(v0 + 22)] & *(*(v0 + 84) + 112) )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        v3 = battle_isTimeStop();
        if ( v5 )
            v3 = (*(&off_80CC850 + *(v0 + 9)))();
        object_presentCollisionData(v3, v4);
    }
}


// 0x80cc868
int __fastcall sub_80CC868(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( (result < 0) ^ v6 )
        {
            *(v3 + 9) = 4;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        PlaySoundEffect(183, 4, a3);
        result = *(v3 + 5);
        *(v3 + 32) = result;
    }
    return result;
}


// 0x80cc892
int sub_80CC892()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 1;
        result = 1;
        *(v0 + 32) = 1;
    }
    return result;
}


// 0x80cc8ba
int __fastcall sub_80CC8BA(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0

    if ( *(v3 + 10) )
    {
        *(v3 + 52) += *(v3 + 64);
        object_setPanelsFromCoordinates(v3);
        object_updateCollisionPanels(v3);
        result = object_isCurrentPanelValid();
        if ( !result )
        {
            object_clearCollisionRegion();
            result = 8;
            *(v3 + 8) = 8;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        PlaySoundEffect(179, 4, a3);
        result = *&byte_80CC908[4 * *(v3 + 4)] * object_getFrontDirection(v3);
        *(v3 + 64) = result;
    }
    return result;
}


// 0x80cc918
int __fastcall sub_80CC918(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(67, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80cc944
int sub_80CC944()
{
    int v0; // r5

    return (*(&off_80CC958 + *(v0 + 8)))();
}


// 0x80cc964
int sub_80CC964()
{
    int v0; // r5
    _BYTE *v1; // r0
    _BYTE *v2; // r4
    int result; // r0
    int v4; // r1
    int v5; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    v1 = object_createCollisionData();
    v2 = v1;
    if ( !v1 )
        return object_freeMemory();
    object_setupCollisionData(v1, *(v0 + 7), *(v0 + 6), *(v0 + 96));
    object_setCollisionHitEffect(*(v0 + 5));
    v2[1] = *(v0 + 4);
    v5 = *(v0 + 100);
    if ( v5 )
        v5 = object_setCollisionStatusEffect1(v5);
    object_presentCollisionData(v5, v4);
    *(v0 + 32) = *(v0 + 104);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80cc9aa
void __noreturn sub_80CC9AA()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver()
        || *&byte_80CC9F4[4 * *(v0 + 22)] & *(*(v0 + 84) + 112)
        || (v1 = *(v0 + 108), *(*(v0 + 76) + 9) != v1)
        || (v2 = *(v0 + 32), v3 = __OFSUB__(v2, 1), v4 = v2 - 1, *(v0 + 32) = v4, ((v4 < 0) ^ v3) | (v4 == 0)) )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        object_presentCollisionData(v4, v1);
    }
}


// 0x80cc9fc
int __fastcall sub_80CC9FC(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    unsigned int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(68, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *(v4 + 100) = v6 >> 8;
        *(v4 + 104) = (v6 >> 16) & 0xFF;
        *(v4 + 108) = v6 >> 24;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 76) = v11;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80cca40
int sub_80CCA40()
{
    int v0; // r5

    return (*(&off_80CCA54 + *(v0 + 8)))();
}


// 0x80cca60
void sub_80CCA60()
{
    Battle *v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r1
    int v4; // r2

    v0->objFlags |= 2u;
    sprite_load(v0, 128, 12, 0);
    sprite_noShadow(v0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v0->currAnimation = 0;
    v0->currAnimationCpy = -1;
    v0->vz = 0x80000;
    v2 = v0->panelY;
    v0->x = object_getCoordinatesForPanels(v0->panelX);
    v0->y = v3;
    v0->z = 0x1000000;
    PlaySoundEffect(261, v3, v4);
    v0->currState = 4;
    sub_80CCAB8();
}


// 0x80ccab8
void sub_80CCAB8()
{
    int v0; // r5

    if ( battle_isBattleOver() )
    {
        **(v0 + 96) = 0;
        *(v0 + 8) = 8;
    }
    else
    {
        (*(&off_80CCAE4 + *(v0 + 9)))();
        object_updateSprite();
    }
}


// 0x80ccaf4
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80CCAF4(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    int v5; // r1
    unsigned __int8 v6; // vf
    int result; // r0
    int v8; // r6

    v4 = *(v3 + 60);
    v5 = *(v3 + 72);
    v6 = __OFSUB__(v4, v5);
    result = v4 - v5;
    *(v3 + 60) = result;
    if ( ((result < 0) ^ v6) | (result == 0) )
    {
        *(v3 + 60) = 0;
        PlaySoundEffect(289, v5, a3);
        v8 = *(v3 + 44);
        if ( sub_80C53A6(*(v3 + 18), *(v3 + 19), 2, *(v3 + 60)) )
            byte_0[3] |= 0x10u;
        if ( object_checkPanelParameters(
                     *(v3 + 18),
                     *(v3 + 19),
                     *&byte_80CCBC0[8 * *(v3 + 22) + 4],
                     *&byte_80CCBC0[8 * *(v3 + 22)]) )
        {
            if ( object_checkPanelParameters(
                         *(v3 + 18),
                         *(v3 + 19),
                         *&byte_80CCBB0[8 * *(v3 + 22) + 4],
                         *&byte_80CCBB0[8 * *(v3 + 22)]) )
            {
                if ( sub_800D668(*(v3 + 18), *(v3 + 19), *(v3 + 22) ^ 1) )
                    object_setPanelAlliance(*(v3 + 18), *(v3 + 19), *(v3 + 22));
            }
            result = 4;
            *(v3 + 9) = 4;
        }
        else
        {
            SpawnT4BattleObjectWithId0(v3, v3 + 64, *(v3 + 52), *(v3 + 56), *(v3 + 60) + 0x100000);
            **(v3 + 96) = 0;
            result = object_freeMemory();
        }
    }
    return result;
}


// 0x80ccbd0
signed int sub_80CCBD0()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 16) = 1;
    result = 8;
    *(v0 + 9) = 8;
    return result;
}


// 0x80ccbdc
int sub_80CCBDC()
{
    int v0; // r5
    int result; // r0

    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        *(v0 + 16) = 2;
        *(v0 + 32) = 60;
        result = 12;
        *(v0 + 9) = 12;
    }
    return result;
}


// 0x80ccbf6
int sub_80CCBF6()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        **(v0 + 96) = 0;
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x100000);
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80ccc1e
int sub_80CCC1E()
{
    return object_freeMemory();
}


// 0x80ccc26
int __fastcall sub_80CCC26(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-10h]
    char v9; // [sp+4h] [bp-Ch]
    int v10; // [sp+8h] [bp-8h]

    v8 = a1;
    v9 = a2;
    object_spawnType3(69, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *v6 = 1;
        *(v4 + 22) = *(v10 + 22);
    }
    return result;
}


// 0x80ccc48
int sub_80CCC48()
{
    int v0; // r5

    return (*(&off_80CCC5C + *(v0 + 8)))();
}


// 0x80ccc68
void sub_80CCC68()
{
    int v0; // r5
    int v1; // r1
    int v2; // r1
    int v3; // r2

    *v0 |= 2u;
    sprite_load(v0, 128, 12, 19);
    sprite_noShadow(v0);
    *(v0 + 16) = 0;
    *(v0 + 17) = -1;
    *(v0 + 72) = 0x80000;
    v1 = *(v0 + 19);
    *(v0 + 52) = object_getCoordinatesForPanels(*(v0 + 18));
    *(v0 + 56) = v2;
    *(v0 + 60) = 12582912;
    if ( !*(v0 + 4) )
        PlaySoundEffect(161, v2, v3);
    *(v0 + 8) = 4;
    sub_80CCCBC();
}


// 0x80cccbc
void sub_80CCCBC()
{
    int v0; // r5

    (*(&off_80CCCD4 + *(v0 + 9)))();
    object_updateSprite();
}


// 0x80ccce0
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80CCCE0(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    int v5; // r1
    unsigned __int8 v6; // vf
    int result; // r0
    int v8; // r6

    v4 = *(v3 + 60);
    v5 = *(v3 + 72);
    v6 = __OFSUB__(v4, v5);
    result = v4 - v5;
    *(v3 + 60) = result;
    if ( ((result < 0) ^ v6) | (result == 0) )
    {
        *(v3 + 60) = 0;
        if ( !*(v3 + 4) )
            PlaySoundEffect(162, v5, a3);
        v8 = *(v3 + 44);
        if ( sub_80C53A6(*(v3 + 18), *(v3 + 19), 0, *(v3 + 60)) )
            byte_4B = -13;
        result = 4;
        *(v3 + 9) = 4;
    }
    return result;
}


// 0x80ccd24
signed int sub_80CCD24()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 16) = 1;
    result = 8;
    *(v0 + 9) = 8;
    return result;
}


// 0x80ccd30
int sub_80CCD30()
{
    int v0; // r5
    int result; // r0

    result = sprite_getFrameParameters() & 0x80;
    if ( result )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80ccd42
int sub_80CCD42()
{
    return object_freeMemory();
}


// 0x80ccd4a
int __fastcall sub_80CCD4A(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(70, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80ccd70
void sub_80CCD70()
{
    int v0; // r5

    (*(&off_80CCD88 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80ccd94
int __noreturn sub_80CCD94()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 255;
    sprite_load(v0, 128, 16, 66);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 4, 5, 3);
    object_setCollisionHitEffect(255);
    v4 = object_clearCollisionRegion();
    object_presentCollisionData(v4, v5);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80ccdfc
void __noreturn sub_80CCDFC()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        if ( *&byte_80CCE5C[4 * *(v0 + 22)] & *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        v1 = battle_isTimeStop();
        if ( v3 )
            v1 = (*(&off_80CCE48 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80cce64
int sub_80CCE64()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    __int64 v3; // r0
    int v4; // r0
    unsigned __int8 v5; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 34) + 1;
        *(v0 + 34) = v2;
        if ( !__CFSHR__(v2, 3) )
        {
            LODWORD(v3) = *(v0 + 18);
            HIDWORD(v3) = *(v0 + 19);
            object_highlightPanel(v3);
        }
        v4 = *(v0 + 32);
        v5 = __OFSUB__(v4, 1);
        result = v4 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v5 )
        {
            object_setCollisionRegion(1);
            *(v0 + 62) = 0;
            sprite_hasShadow();
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 32) = *(v0 + 6);
        result = 0;
        *(v0 + 34) = 0;
    }
    return result;
}


// 0x80cceac
int sub_80CCEAC()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        result = 60;
        *(v0 + 32) = 60;
    }
    return result;
}


// 0x80cced0
int sub_80CCED0()
{
    int v0; // r5
    int v1; // r4
    int v2; // r0
    int v3; // r1
    int v4; // r2
    int result; // r0
    int v6; // r4
    int v7; // r6
    int v8; // r0
    unsigned __int8 v9; // vf
    int v10; // ST00_4

    if ( *(v0 + 10) )
    {
        *(v0 + 52) += *(v0 + 64);
        *(v0 + 56) += *(v0 + 68);
        v6 = *(v0 + 18);
        v7 = *(v0 + 19);
        object_setPanelsFromCoordinates(v0);
        object_updateCollisionPanels(v0);
        v8 = *(v0 + 32);
        v9 = __OFSUB__(v8--, 1);
        *(v0 + 32) = v8;
        if ( ((v8 < 0) ^ v9) | (v8 == 0) || !object_isCurrentPanelValid() )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
        else
        {
            if ( *(v0 + 18) != v6 || *(v0 + 19) != v7 )
                object_setCollisionRegion(1);
            v10 = *(v0 + 18);
            object_getPanelParameters(v10, *(v0 + 19));
            result = v10;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        v1 = *&byte_80CCF6C[4 * *(v0 + 4)];
        v2 = object_getFrontDirection(v0);
        v3 = 2 * *(v0 + 5);
        v4 = byte_80CCF80[v3 + 1] * v1;
        *(v0 + 64) = byte_80CCF80[v3] * -v2 * v1;
        *(v0 + 68) = v4;
        result = *(v0 + 7);
        *(v0 + 32) = result;
    }
    return result;
}


// 0x80ccf88
int sub_80CCF88()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            object_clearCollisionRegion();
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80ccfac
int __fastcall sub_80CCFAC(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(71, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80ccfdc
int sub_80CCFDC()
{
    int v0; // r5

    return (*(&off_80CCFF0 + *(v0 + 8)))();
}


// 0x80ccffc
void __noreturn sub_80CCFFC()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    _BYTE *v3; // r0
    int v4; // r0
    int v5; // r1

    *v0 |= 2u;
    sprite_load(v0, 128, 4, 9);
    sprite_noShadow(v0);
    sprite_setPallete(*(v0 + 4));
    *(v0 + 16) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    *(v0 + 20) = *(v0 + 18);
    *(v0 + 14) = 0;
    *(v0 + 40) = *(v0 + 4) + 214;
    v2 = 4 * *(v0 + 4);
    *(v0 + 96) = &byte_80CCFD4[v2];
    LOWORD(v2) = *&byte_80CCFD4[v2 + 2];
    *(v0 + 36) = v2;
    *(v0 + 38) = v2;
    *(v0 + 32) = dword_5A0;
    v3 = object_createCollisionData();
    if ( v3 )
    {
        v4 = object_setupCollisionData(v3, 19, 20, 0);
        object_presentCollisionData(v4, v5);
        *(v0 + 8) = 4;
        sub_80CD08C();
    }
    object_freeMemory();
}


// 0x80cd08c
void __noreturn sub_80CD08C()
{
    _BYTE *v0; // r5
    int v1; // r0
    int v2; // r1

    *v0 |= 2u;
    sprite_clearFinalPalette();
    sub_801AD12();
    sub_800F672();
    sub_801B394(&off_80CD0B8);
    object_updateSprite();
    object_presentCollisionData(v1, v2);
}


// 0x80cd0e0
int __fastcall sub_80CD0E0(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0

    PlaySoundEffect(148, a2, a3);
    *(v3 + 34) = **(v3 + 96);
    *(v3 + 9) = 8;
    result = 0;
    *(v3 + 10) = 0;
    return result;
}


// 0x80cd0f8
int sub_80CD0F8()
{
    int v0; // r5

    return (*(&off_80CD10C + *(v0 + 10)))();
}


// 0x80cd114
signed int __fastcall sub_80CD114(int a1, int a2, int a3)
{
    int v3; // r5
    signed int result; // r0

    PlaySoundEffect(173, a2, a3);
    sub_80E541A(v3, *(v3 + 22), 0);
    result = 4;
    *(v3 + 10) = 4;
    return result;
}


// 0x80cd12c
int sub_80CD12C()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 34) - 1;
    *(v0 + 34) = result;
    if ( !result )
    {
        *(v0 + 108) = 3;
        *(v0 + 9) = 9;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80cd144
int sub_80CD144()
{
    int v0; // r5

    return (*(&off_80CD158 + *(v0 + 10)))();
}


// 0x80cd160
int sub_80CD160()
{
    int v0; // r5
    int result; // r0
    int v2; // r1
    int v3; // r1
    int v4; // r0

    if ( !*(v0 + 100) || (result = *(v0 + 101), !*(v0 + 101)) )
    {
        v2 = *(v0 + 108) - 1;
        *(v0 + 108) = v2;
        if ( !v2 )
            *(v0 + 108) = 3;
        v3 = *(v0 + 108);
        v4 = *(*(v0 + 96) + 1);
        if ( !*(*(v0 + 96) + 1) )
            sub_80CD26C(v4, v3);
        sub_80CD236(v4, v3);
    }
    return result;
}


// 0x80cd1ae
int sub_80CD1AE()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 34) - 1;
    *(v0 + 34) = result;
    if ( !result )
    {
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80cd1be
int sub_80CD1BE()
{
    int v0; // r5
    int v1; // r0
    int v2; // r2
    int result; // r0

    *(v0 + 100) = 0;
    v1 = object_getFlag2();
    if ( v1 & 0x8000 )
    {
        if ( v1 & 0x300000 )
        {
            result = sub_800F90E(0);
        }
        else
        {
            result = sub_800F8CE(v1);
            if ( !result )
                return result;
            if ( result != 1 )
                SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 786432);
        }
    }
    else
    {
        PlaySoundEffect(112, 0x8000, v2);
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
    }
    sub_802EF5C(result);
    sub_800F656();
    sub_80E544C(v0);
    object_clearCollisionRegion();
    object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    *v0 &= 0xFDu;
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80cd236
int __fastcall __noreturn sub_80CD236(int a1, int a2)
{
    Battle *v2; // r5
    int v3; // r6
    int v4; // r0
    int v5; // r1
    int v6; // r6
    int v7; // r0
    int v8; // ST04_4
    bool v9; // zf
    int result; // r0
    int v11; // [sp-8h] [bp-18h]

    v3 = a2;
    v4 = object_getFrontDirection(v2);
    v5 = v3;
    v6 = -v4;
    v7 = 5 * (v2->Alliance ^ v2->directionFlip ^ 1) + 1;
    while ( 1 )
    {
        v11 = v7;
        v8 = v5;
        v9 = (object_getPanelParameters(v7, v5) & 0x800000) == 0;
        result = v11;
        v5 = v8;
        if ( v9 )
            break;
        v7 = v11 + v6;
        if ( !(v11 + v6) || v7 >= 7 )
            return 0;
    }
    return result;
}


// 0x80cd26c
int __fastcall __noreturn sub_80CD26C(int a1, int a2)
{
    Battle *v2; // r5
    int v3; // ST04_4
    int v4; // r6
    int v5; // ST00_4
    int v6; // r1
    bool v7; // zf
    int result; // r0

    v3 = a2;
    v4 = object_getFrontDirection(v2);
    v5 = object_getClosestPanelMatchingRowFiltered(
                 v2->Alliance ^ v2->directionFlip,
                 v3,
                 *&byte_80CD2A4[8 * v2->Alliance],
                 *&byte_80CD2A4[8 * v2->Alliance + 4])
         + v4;
    v7 = (object_getPanelParameters(v5, v6) & 0x800000) == 0;
    result = v5;
    if ( !v7 )
        result = 0;
    return result;
}


// 0x80cd2b4
int __fastcall sub_80CD2B4(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    __int16 v9; // [sp+8h] [bp-Ch]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(72, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 44) = v5;
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 22) = v9;
        *v4 |= 0x10u;
        result = sub_800F614(v4, v9, 1);
    }
    return result;
}


// 0x80cd2ec
void sub_80CD2EC()
{
    int v0; // r5

    (*(&off_80CD304 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80cd310
void __noreturn sub_80CD310()
{
    int v0; // r5
    char v1; // r0
    _BYTE *v2; // r0
    char v3; // r3
    int v4; // r0

    if ( !__CFSHL__(*(v0 + 4), 25) )
        *v0 |= 2u;
    sprite_load(v0, 128, 12, 46);
    sprite_noShadow(v0);
    *(v0 + 16) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1 & 0x7F ^ *(v0 + 4));
    *(v0 + 14) = 5;
    sprite_setPallete(2 * *(v0 + 4));
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    *(v0 + 64) = 655360 * object_getFlipDirection(*(v0 + 22) ^ *(v0 + 4) & 0x7F, *(v0 + 23));
    v2 = object_createCollisionData();
    if ( v2 )
    {
        v3 = 8;
        if ( *(v0 + 4) & 1 )
            v3 = 4;
        v4 = object_setupCollisionData(v2, 30, 5, v3);
        *(v4 + 46) = 0;
        object_presentCollisionData(v4, 0);
        *(v0 + 8) = 4;
        sub_80CD3B0();
    }
    object_freeMemory();
}


// 0x80cd3b0
void __noreturn sub_80CD3B0()
{
    int v0; // r5
    _BYTE *v1; // r0
    _BYTE *v2; // r1
    int v3; // r0

    object_removeCollisionData();
    if ( *(v0 + 96) && *(*(v0 + 84) + 112) )
        goto LABEL_8;
    v1 = *(v0 + 100);
    if ( v1 )
    {
        if ( !*v1 )
            goto LABEL_8;
    }
    if ( battle_isBattleOver() )
    {
        v2 = *(v0 + 100);
        if ( v2 )
            *v2 = 0;
LABEL_8:
        object_clearCollisionRegion();
        *v0 &= 0xFDu;
        *(v0 + 8) = 8;
        return;
    }
    v3 = (*(&off_80CD410 + *(v0 + 9)))();
    object_presentCollisionData(v3, *(v0 + 4) << 25);
}


// 0x80cd414
signed int sub_80CD414()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r7
    bool v4; // zf
    signed int result; // r0
    _BYTE *v6; // r1
    int v7; // [sp-8h] [bp-14h]
    int v8; // [sp-4h] [bp-10h]

    if ( *(*(v0 + 84) + 112) & 0x800000 )
        goto LABEL_11;
    *(v0 + 52) += *(v0 + 64);
    v1 = sub_800E24C();
    *(v0 + 18) = v1;
    *(v0 + 19) = v2;
    v3 = *(v0 + 84);
    *(v3 + 10) = v1;
    *(v3 + 11) = v2;
    v7 = v1;
    v8 = v2;
    v4 = object_isValidPanel(v1, v2) == 0;
    result = v7;
    if ( v4
        || !__CFSHL__(*(v0 + 4), 25)
        && (result = object_checkPanelParameters(v7, v8, *&byte_80CD478[8 * *(v0 + 22)], *&byte_80CD478[8 * *(v0 + 22) + 4])) == 0 )
    {
LABEL_11:
        object_clearCollisionRegion();
        v6 = *(v0 + 100);
        if ( v6 )
            *v6 = 0;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80cd488
int __fastcall sub_80CD488(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    __int16 v10; // [sp+8h] [bp-Ch]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(73, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 22) = v10;
        *(v4 + 44) = v5;
        *(v4 + 100) = v6;
        if ( v6 )
            *v6 = 1;
    }
    return result;
}


// 0x80cd4ac
int __fastcall sub_80CD4AC(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int v7; // r1
    int v8; // r2

    v5 = 5 * (*(v4 + 22) ^ *(v4 + 23) ^ 1) + 1;
    v6 = 1;
    do
        sub_80CD488(v5, v6++, *(v4 + 22) << *(v4 + 23), a4);
    while ( v6 <= 3 );
    return PlaySoundEffect(173, v7, v8);
}


// 0x80cd4ec
int sub_80CD4EC()
{
    int v0; // r5

    return (*(&off_80CD500 + *(v0 + 8)))();
}


// 0x80cd50c
int __noreturn sub_80CD50C()
{
    Battle *obj; // r5
    char v1; // r0
    int v2; // r0
    int v3; // r1
    int v4_x; // ST08_4
    int v5_y; // ST0C_4
    int v6; // r0
    u32 v7; // r1
    int v8; // r1
    _BYTE *v9; // r0
    int result; // r0
    CollisionData *v11; // r0
    int v12; // r0
    int v13; // r1
    int v14; // r1
    int v15; // r0
    _DWORD *v16; // r7
    int v17; // r1

    obj->objFlags |= 2u;
    sprite_load(obj, 128, 12, 36);
    *&obj->currAnimation = 0;
    sprite_setAnimation(obj, 0);
    sprite_loadAnimationData(obj);
    sprite_hasShadow();
    obj->nameID = 213;
    if ( LOBYTE(obj->objParams) )
        goto LABEL_10;
    v1 = BYTE2(obj->objParams);
    obj->futurePanelX = v1;
    obj->futurePanelY = HIBYTE(obj->objParams);
    v2 = object_getCoordinatesForPanels(v1);
    v4_x = v2;
    v5_y = v3;
    v6 = calcAngle_800117C(v3 - obj->y, v2 - obj->x);
    obj->pad_0C[0] = v6;
    obj->vx = sub_80011A0(v6, 180224);
    obj->vy = v7;
    obj->vz = sub_800120E(&obj->x, v4_x, v5_y, 0);
    obj->Timer = v8;
    if ( v8 )
    {
LABEL_10:
        obj->HP = 100;
        obj->maxHP = 100;
        obj->Timer = 6000;
        v9 = object_createCollisionData();
        if ( v9 )
        {
            object_setupCollisionData(v9, 79, 15, 3);
            v11 = obj->collisionData;
            v11->selfDamage = 100;
            v11->staminaDmg_counterDisabler = 30;
            object_clearCollisionRegion();
            v12 = object_setCollisionHitEffect(10);
            object_presentCollisionData(v12, v13);
            obj->currState = 4;
            sub_80CD5F8();
        }
        sub_802EF5C(0);
        sub_800F656();
        result = object_freeMemory();
    }
    else
    {
        v14 = HIBYTE(obj->objParams);
        v15 = object_getCoordinatesForPanels(BYTE2(obj->objParams));
        v16 = &obj->x;
        *v16 = v15;
        v16[1] = v17;
        v16[2] = 0;
        sub_802EF5C(v15);
        sub_800F656();
        result = object_genericDestroy();
    }
    return result;
}


// 0x80cd5f8
void __noreturn sub_80CD5F8()
{
    _BYTE *v0; // r5
    int v1; // r0
    int v2; // r1

    *v0 |= 2u;
    sub_801AD12();
    object_spawnCollisionEffect();
    sub_80CD7A0();
    if ( !v0[4] )
        sub_800F672();
    sub_801B750(&off_80CD62C);
    object_updateSprite();
    object_presentCollisionData(v1, v2);
}


// 0x80cd654
int sub_80CD654()
{
    int v0; // r5
    int v1; // r0
    int v2; // r3
    int v3; // r4
    int v4; // r6
    int result; // r0
    int v6; // r1
    int v7; // r2
    _DWORD *v8; // r7
    char v9; // r0
    char v10; // r1
    int v11; // r7
    int *v12; // r7
    int v13; // r1

    if ( *(v0 + 4) )
    {
        object_setCollisionRegion(1);
        *v0 |= 0x10u;
        *(v0 + 9) = 9;
        result = 0;
        *(v0 + 10) = 0;
    }
    else
    {
        v1 = *(v0 + 32) - 1;
        *(v0 + 32) = v1;
        if ( !v1
            || (v2 = *(v0 + 64),
                    v3 = *(v0 + 68),
                    v4 = *(v0 + 72) - 10240,
                    *(v0 + 72) = v4,
                    result = *(v0 + 52) + v2,
                    v6 = *(v0 + 56) + v3,
                    v7 = *(v0 + 60) + v4,
                    v7 <= 0) )
        {
            v9 = *(v0 + 6);
            v10 = *(v0 + 7);
            *(v0 + 18) = v9;
            *(v0 + 19) = v10;
            v11 = *(v0 + 84);
            *(v11 + 10) = v9;
            *(v11 + 11) = v10;
            v12 = (v0 + 52);
            *v12 = object_getCoordinatesForPanels(v9);
            v12[1] = v13;
            v12[2] = 0;
            object_isCurrentPanelSolid();
        }
        v8 = (v0 + 52);
        *v8 = result;
        v8[1] = v6;
        v8[2] = v7;
    }
    return result;
}


// 0x80cd6fc
void sub_80CD6FC()
{
    ;
}


// 0x80cd700
int sub_80CD700()
{
    int v0; // r5
    int v1; // r0
    int result; // r0
    int v3; // r1
    int v4; // r2

    object_clearCollisionRegion();
    v1 = object_getFlag2();
    if ( v1 & 0x8000 )
    {
        if ( v1 & 0x300000 )
        {
            result = sub_800F90E(1);
        }
        else
        {
            result = sub_800F8CE(v1);
            if ( !result )
                return result;
            if ( result != 1 )
                SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 786432);
        }
    }
    else if ( *(v0 + 11)
                 || (*(v0 + 11) = 4, *v0 &= 0xFDu, *(v0 + 36))
                 || (SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60)), *(v0 + 96)) )
    {
        result = battle_isTimeStop();
        if ( result )
            return result;
    }
    else
    {
        result = PlaySoundEffect(112, v3, v4);
    }
    sub_802EF5C(result);
    sub_800F656();
    object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80cd78e
int sub_80CD78E()
{
    int v0; // r5

    sub_80CD7D0();
    object_freeCollisionData(*(v0 + 84));
    return object_freeMemory();
}


// 0x80cd7a0
int sub_80CD7A0()
{
    int v0; // r5
    int result; // r0
    int v2; // r7

    result = *(v0 + 96);
    if ( !result )
    {
        v2 = *(v0 + 84);
        result = *(v2 + 132);
        if ( *(v2 + 132) )
        {
            *(v0 + 96) = 1;
            object_clearCollisionRegion();
            *v0 &= 0xFDu;
            *(v0 + 36) = 0;
            *(v0 + 9) = 2;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80cd7d0
int sub_80CD7D0()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    int v3; // r6
    int v4; // ST00_4
    int v5; // r2
    int v6; // r1
    int v7; // r2

    result = *(v0 + 96);
    if ( result )
    {
        v2 = object_getPanelDataOffset(*(v0 + 18), *(v0 + 19))[3] ^ 1;
        *(v0 + 22) = v2;
        v3 = *(v0 + 44);
        v4 = *&byte_80CD828[4 * v2];
        object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), 1, *(v0 + 60));
        sub_80E2FE8(v4, 2, v5, 0);
        camera_initShakeEffect_80302a8(1, 60);
        result = PlaySoundEffect(195, v6, v7);
    }
    return result;
}


// 0x80cd830
int __fastcall sub_80CD830(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    int v7; // r1
    int v8; // [sp+0h] [bp-Ch]
    int v9; // [sp+4h] [bp-8h]

    v8 = a1;
    object_spawnType3(74, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 100) = v8;
        *(v4 + 44) = v5;
        v7 = *(v9 + 22);
        *(v4 + 22) = v7;
        *v4 |= 0x10u;
        result = sub_800F614(v4, v7, 1);
    }
    return result;
}


// 0x80cd858
int __fastcall sub_80CD858(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // r1
    int v7; // [sp+0h] [bp-1Ch]
    char v8; // [sp+4h] [bp-18h]
    char v9; // [sp+8h] [bp-14h]
    __int16 v10; // [sp+10h] [bp-Ch]

    v7 = a1;
    v8 = a2;
    v9 = a4;
    object_spawnType3(74, a2, a3, a4);
    result = v7;
    if ( v4 )
    {
        *(v4 + 44) = v10;
        *(v4 + 22) = v9;
        *v4 |= 0x10u;
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 52) = object_getCoordinatesForPanels(v7);
        *(v4 + 56) = v6;
        result = 0;
        *(v4 + 60) = 0;
    }
    return result;
}


// 0x80cd886
int __fastcall sub_80CD886(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // ST00_4
    int v6; // ST04_4
    int v7; // ST08_4
    int v8; // ST0C_4
    int v9; // r4

    v5 = a1;
    v6 = a2;
    v7 = a3;
    v8 = a4;
    v9 = (*(v4 + 18) + 3 * object_getFrontDirection(v4)) << 16;
    return sub_80CD830(v5, v6, v7, v8);
}


// 0x80cd8ec
int sub_80CD8EC()
{
    int v0; // r5

    return (*(&off_80CD900 + *(v0 + 8)))();
}


// 0x80cd90c
int sub_80CD90C()
{
    int v0; // r5
    _DWORD *v1; // r0

    v1 = *(v0 + 76);
    if ( v1 )
        *v1 = 0;
    return object_genericDestroy();
}


// 0x80cd91e
int __noreturn sub_80CD91E()
{
    int v0; // r5
    int v1; // r2
    int v2; // r4
    int v3; // r0
    int v4; // r1
    int v5; // r2
    int v6; // r3
    u8 v7; // r0
    int v8; // r1
    int v9; // r2
    signed __int16 v10; // r1
    __int16 v11; // r0
    _BYTE *v12; // r0
    int v14; // r0
    int v15; // r1

    object_setCoordinatesFromPanels(v0);
    v2 = *(v0 + 96);
    if ( !*(v0 + 76)
        || (sub_81096FA(*(v0 + 18), *(v0 + 19), v1, byte_80CDAC8), object_checkPanelParameters(v3, v4, v5, v6)) )
    {
        *v0 |= 2u;
        sprite_load(v0, 128, 12, 35);
        v7 = *v2;
        *(v0 + 16) = *v2;
        *(v0 + 17) = v7;
        sprite_setAnimation(v0, v7);
        sprite_loadAnimationData(v0);
        sprite_hasShadow();
        sub_8002EAC();
        *(v0 + 60) = 0;
        *(v0 + 20) = *(v0 + 18);
        PlaySoundEffect(148, v8, v9);
        v10 = 216;
        if ( *(v0 + 4) == 1 )
            v10 = 217;
        *(v0 + 40) = v10;
        v11 = *(v2 + 2);
        *(v0 + 36) = v11;
        *(v0 + 38) = v11;
        v12 = object_createCollisionData();
        if ( v12 )
        {
            object_setupCollisionData(v12, *(v2 + 6), *(v2 + 7), 3);
            v14 = object_clearCollisionRegion();
            object_presentCollisionData(v14, v15);
            *(v0 + 8) = 4;
            sub_80CD9CA();
        }
    }
    else
    {
        **(v0 + 76) = 0;
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x80000);
    }
    return object_freeMemory();
}


// 0x80cd9ca
void __noreturn sub_80CD9CA()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    sprite_clearFinalPalette();
    if ( battle_isBattleOver() )
        *(v0 + 36) = 0;
    sub_801AD12();
    sub_801B394(&off_80CD9F4);
    object_updateSprite();
    object_presentCollisionData(v1, v2);
}


// 0x80cda1c
int sub_80CDA1C()
{
    int v0; // r5
    int result; // r0
    int v2; // r3
    int v3; // r0

    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        v2 = 260571264;
        if ( *(*(v0 + 96) + 4) & 2 )
            v2 = 59244672;
        if ( object_checkPanelParameters(*(v0 + 18), *(v0 + 19), 65552, v2) )
        {
            *(v0 + 16) = *(*(v0 + 96) + 1);
            *(v0 + 32) = 60;
            object_setCollisionRegion(1);
            *(v0 + 9) = 8;
            *(v0 + 10) = 0;
            if ( *(v0 + 4) > 1 )
                object_reservePanel(*(v0 + 20), *(v0 + 21));
            result = *(*(v0 + 96) + 4);
            if ( result & 1 )
            {
                *(v0 + 10) = 8;
                result = 15;
                *(v0 + 32) = 15;
            }
        }
        else
        {
            SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x80000);
            object_removePanelReserve(*(v0 + 20), *(v0 + 21));
            object_clearCollisionRegion();
            v3 = *v0 & 0xFD;
            *v0 = v3;
            sub_802EF5C(v3);
            sub_800F656();
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    return result;
}


// 0x80cdad8
int sub_80CDAD8()
{
    int v0; // r5

    return (*(&off_80CDAEC + *(v0 + 10)))();
}


// 0x80cdafc
int sub_80CDAFC()
{
    int v0; // r5
    int v1; // r0
    int result; // r0
    int v3; // r1
    int v4; // r2

    if ( *(v0 + 32) == 60 )
        v1 = *(v0 + 4);
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        sprite_setUnk0x2c(872415232);
        *(v0 + 32) = 60;
        PlaySoundEffect(193, v3, v4);
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80cdb2c
int sub_80CDB2C()
{
    int v0; // r5
    int result; // r0
    int v2; // r1
    int v3; // r2

    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        sprite_setUnk0x2c(738197504);
        *(v0 + 32) = 60;
        PlaySoundEffect(193, v2, v3);
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80cdb50
int sub_80CDB50()
{
    int v0; // r5
    int result; // r0
    int v2; // r2

    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        sprite_setUnk0x2c(469762048);
        *(v0 + 32) = 30;
        if ( !(*(*(v0 + 96) + 4) & 1) )
            PlaySoundEffect(194, 1, v2);
        result = 12;
        *(v0 + 10) = 12;
    }
    return result;
}


// 0x80cdb80
int sub_80CDB80()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        if ( *(*(v0 + 96) + 4) & 1 )
        {
            *(v0 + 9) = 9;
        }
        else
        {
            sub_80CDCBC();
            *(v0 + 9) = 2;
        }
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80cdbac
int sub_80CDBAC()
{
    int v0; // r5
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 1;
        object_clearCollisionRegion();
        *(v0 + 32) = 8;
    }
    *v0 = *v0 & 0xFD | 2 * ((*(v0 + 32) >> 1) & 1);
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        *(v0 + 9) = 2;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80cdbe8
signed int __noreturn sub_80CDBE8()
{
    int v0; // r5
    int v1; // r2
    signed int result; // r0
    char v3; // zf
    int v4; // r0
    int v5; // r0

    object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    object_clearCollisionRegion();
    if ( object_getFlag2() & 0x8000 )
        goto LABEL_17;
    if ( *(v0 + 36) )
    {
LABEL_13:
        PlaySoundEffect(112, 0x8000, v1);
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
        goto LABEL_14;
    }
    if ( !(*(*(v0 + 96) + 4) & 1) )
    {
LABEL_17:
        v4 = object_getFlag2();
        if ( v4 & 0x8000 )
        {
            if ( v4 & 0x300000 )
            {
                sub_800F90E(2);
            }
            else
            {
                result = sub_800F8CE(v4);
                if ( !result )
                    return result;
                if ( result != 1 )
                    SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 786432);
            }
            goto LABEL_14;
        }
        goto LABEL_13;
    }
    result = battle_isTimeStop();
    if ( v3 )
    {
        sub_80CDCBC();
LABEL_14:
        v5 = *v0 & 0xFD;
        *v0 = v5;
        sub_802EF5C(v5);
        sub_800F656();
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80cdc7c
int __fastcall sub_80CDC7C(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int *v6; // r7
    int result; // r0
    char *v8; // r3
    char v9; // [sp+0h] [bp-1Ch]
    char v10; // [sp+4h] [bp-18h]
    char v11; // [sp+8h] [bp-14h]

    v9 = a1;
    v10 = a2;
    v11 = a3;
    object_spawnType3(75, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v9;
        *(v4 + 19) = v10;
        *(v4 + 22) = v11;
        *(v4 + 44) = v5;
        v8 = &byte_80CD8AC[8 * *(v4 + 4)];
        *(v4 + 96) = v8;
        if ( *(v4 + 4) > 1 )
        {
            *(v4 + 76) = v6;
            *v6 = v4;
        }
        *v4 |= 0x10u;
        result = sub_800F614(v4, *(v4 + 22), v8[5]);
    }
    return result;
}


// 0x80cdcbc
signed int sub_80CDCBC()
{
    int v0; // r5
    signed int result; // r0
    int v2; // r0
    int v3; // r6
    int v4; // ST00_4
    int v5; // r2
    int v6; // r1
    int v7; // r2

    result = battle_isBattleOver();
    if ( !result )
    {
        *v0 &= 0xFDu;
        object_clearCollisionRegion();
        v2 = object_getPanelDataOffset(*(v0 + 18), *(v0 + 19))[3] ^ 1;
        *(v0 + 22) = v2;
        v3 = *(v0 + 44);
        v4 = *&byte_80CDD30[4 * v2];
        object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), *(v0 + 60));
        sub_80E2FE8(v4, 2, v5, 0);
        camera_initShakeEffect_80302a8(1, 30);
        PlaySoundEffect(195, v6, v7);
        result = *(v0 + 4);
        if ( result == 1 )
            result = camera_initShakeEffect_80302a8(3, 60);
    }
    return result;
}


// 0x80cdd44
int sub_80CDD44()
{
    int v0; // r5

    return (*(&off_80CDD58 + *(v0 + 8)))();
}


// 0x80cdd64
void __noreturn sub_80CDD64()
{
    int v0; // r5
    int v1; // r1

    *v0 |= 3u;
    sprite_load(v0, 128, 12, 34);
    sprite_noShadow(v0);
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sub_8002EAC();
    *(v0 + 40) = 218;
    *(v0 + 32) = 6000;
    *(v0 + 34) = 60;
    *(v0 + 6) = 2;
    *(v0 + 36) = 1;
    *(v0 + 38) = 1;
    sub_80CDF18(1, v1);
}


// 0x80cddfc
void __noreturn sub_80CDDFC()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    sprite_clearFinalPalette();
    sub_801AD12();
    v1 = (*(&off_80CDE20 + *(v0 + 9)))();
    object_presentCollisionData(v1, v2);
    object_updateSprite();
}


// 0x80cde44
signed int __noreturn sub_80CDE44()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_clearCollisionRegion();
    v1 = object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    sub_802EF5C(v1);
    sub_800F656();
    *v0 &= 0xFDu;
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80cde68
int sub_80CDE68()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned int v3; // r0
    unsigned int v4; // r0
    unsigned int v5; // r1
    int v6; // r7
    int v7; // r1
    int v8; // r2

    result = *(v0 + 6) - 1;
    *(v0 + 6) = result;
    if ( !result )
    {
        *(v0 + 6) = 2;
        v2 = *(v0 + 34) - 1;
        *(v0 + 34) = v2;
        if ( v2 )
        {
            v3 = *(v0 + 120) + 1;
            if ( *(v0 + 116) <= v3 )
                v3 = 0;
            *(v0 + 120) = v3;
            v4 = *(v0 + 96 + v3);
            v5 = v4 >> 4;
            LOBYTE(v4) = v4 & 7;
            *(v0 + 18) = v4;
            *(v0 + 19) = v5;
            v6 = *(v0 + 84);
            *(v6 + 10) = v4;
            *(v6 + 11) = v5;
            object_setCoordinatesFromPanels(v0);
            result = PlaySoundEffect(275, v7, v8);
        }
        else
        {
            object_setCollisionRegion(1);
            *v0 &= 0xFDu;
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80cdec8
int sub_80CDEC8()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 36) && !*(*(v0 + 84) + 112) )
        object_isCurrentPanelSolid();
    object_clearCollisionRegion();
    *(v0 + 9) = 2;
    result = 0;
    *(v0 + 10) = 0;
    return result;
}


// 0x80cdef8
int __fastcall sub_80CDEF8(int a1, int a2, int a3)
{
    int v3; // r5

    PlaySoundEffect(112, a2, a3);
    SpawnT4BattleObjectWithId0(v3, v3 + 64, *(v3 + 52), *(v3 + 56), *(v3 + 60));
    object_freeCollisionData(*(v3 + 84));
    return object_freeMemory();
}


// 0x80cdf18
int __fastcall __noreturn sub_80CDF18(int a1, int a2)
{
    int v2; // r5
    int v3; // r0

    v3 = object_getPanelsExceptCurrentFilterred(
                 8 * *(v2 + 22),
                 a2,
                 *&byte_80CDF50[8 * *(v2 + 22)],
                 *&byte_80CDF50[8 * *(v2 + 22) + 4]);
    if ( !v3 )
        return 0;
    *(v2 + 116) = v3;
    sub_8000C72(v2 + 96, v3, 20);
    return *(v2 + 96) & 7;
}


// 0x80cdf60
int __fastcall sub_80CDF60(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    int v7; // [sp+0h] [bp-Ch]

    v7 = a1;
    object_spawnType3(76, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 22) = v7;
        *(v4 + 44) = v5;
        *v4 |= 0x10u;
        result = sub_800F614(v4, v7, 0);
    }
    return result;
}


// 0x80cdf84
int sub_80CDF84()
{
    int v0; // r5

    return (*(&off_80CDF98 + *(v0 + 8)))();
}


// 0x80cdfa4
int sub_80CDFA4()
{
    int v0; // r5
    _BYTE *v1; // r0
    int v3; // r0
    int v4; // r1

    *(v0 + 18) = 1;
    *(v0 + 19) = 1;
    v1 = object_createCollisionData();
    if ( v1 )
    {
        object_setupCollisionData(v1, 0, 24, 0);
        object_setCollisionRegion(128);
        v3 = object_setFlag1(0x1000000);
        object_presentCollisionData(v3, v4);
        *(v0 + 96) = *(v0 + 84) + 132;
        *(v0 + 100) = 0;
        *(v0 + 8) = 4;
        sub_80CDFEE();
    }
    return object_freeMemory();
}


// 0x80cdfee
void __noreturn sub_80CDFEE()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    object_removeCollisionData();
    if ( !*(v0 + 5) )
    {
        if ( !battle_isBattleOver() )
        {
            v1 = (*(&off_80CE02C + *(v0 + 9)))();
            object_presentCollisionData(v1, v2);
            return;
        }
        sub_802CEA6(*(v0 + 22));
    }
    object_clearCollisionRegion();
    object_freeCollisionData(*(v0 + 84));
    object_freeMemory();
}


// 0x80ce034
int sub_80CE034()
{
    int v0; // r5
    _WORD *v1; // r2
    signed int v2; // r3
    int result; // r0

    v1 = *(v0 + 96);
    v2 = 1;
    while ( 1 )
    {
        result = *v1;
        if ( *v1 )
            break;
        ++v1;
        if ( ++v2 > 4 )
            return result;
    }
    *(v0 + 4) = v2;
    object_clearCollisionRegion();
    *(v0 + 9) = 4;
    *(v0 + 10) = 0;
    return sub_80CE05E();
}


// 0x80ce05e
int sub_80CE05E()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 100) )
    {
        result = battle_isTimeStop();
        if ( !result )
            sub_80CE0A4();
    }
    else
    {
        sub_802CEA6(*(v0 + 22));
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80ce0a4
void __noreturn sub_80CE0A4()
{
    int v0; // r5

    object_getPanelsFiltered(
        8 * *(v0 + 22),
        &byte_80CE0DC[8 * *(v0 + 22)],
        *&byte_80CE0DC[8 * *(v0 + 22)],
        *&byte_80CE0DC[8 * *(v0 + 22) + 4]);
}


// 0x80ce0ec
int __fastcall sub_80CE0EC(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    int v8; // [sp+0h] [bp-10h]
    int v9; // [sp+8h] [bp-8h]

    v8 = a1;
    object_spawnType3(77, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v8;
        *(v4 + 14) = 0;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v9 + 22);
        *(v4 + 48) = v6;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80ce118
int sub_80CE118()
{
    int v0; // r5

    return (*(&off_80CE12C + *(v0 + 8)))();
}


// 0x80ce138
void __noreturn sub_80CE138()
{
    int v0; // r5

    *v0 |= 2u;
    sprite_load(v0, 128, 12, 80);
    *(v0 + 16) = 4;
    sprite_setAnimation(v0, 4u);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    sprite_noShadow(v0);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 10485760;
    *(v0 + 32) = 0;
    *(v0 + 8) = 4;
    sub_80CE178();
}


// 0x80ce178
void sub_80CE178()
{
    int v0; // r5

    (*(&off_80CE190 + *(v0 + 9)))();
    object_updateSprite();
}


// 0x80ce198
int sub_80CE198()
{
    int v0; // r5
    int v5; // r0
    int result; // r0

    ++*(v0 + 32);
    __asm { SVC         6 }
    v5 = *(v0 + 62);
    _VF = __OFSUB__(v5, 3);
    result = v5 - 3;
    if ( (result < 0) ^ _VF )
    {
        *v0 &= 0xFDu;
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    else
    {
        *(v0 + 62) = result;
    }
    return result;
}


// 0x80ce1d6
int sub_80CE1D6()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r2
    int result; // r0

    if ( *(v0 + 10) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( !result )
        {
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        v1 = *(v0 + 44);
        if ( !*(v0 + 44) )
            v1 = *(*(v0 + 76) + 38);
        object_addHP(*(v0 + 76), v1);
        PlaySoundEffect(138, v2, v3);
        SpawnT4BattleObjectWithId0(v0, *(v0 + 76) + 64, *(*(v0 + 76) + 52), *(*(v0 + 76) + 56), *(*(v0 + 76) + 60));
        *(v0 + 32) = 60;
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80ce21c
int sub_80CE21C()
{
    return object_freeMemory();
}


// 0x80ce224
int __fastcall sub_80CE224(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    int v9; // [sp+8h] [bp-Ch]

    v7 = a1;
    v8 = a2;
    object_spawnType3(78, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v9 + 22);
        *(v4 + 76) = v9;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80ce24c
void sub_80CE24C()
{
    int v0; // r5

    (*(&off_80CE264 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80ce270
void __noreturn sub_80CE270()
{
    int v0; // r5

    *(v0 + 14) = *(&dword_80CE2B0 + *(v0 + 4));
    sub_8011504(0x1090C02u, 0x4050100u);
}


// 0x80ce2b4
void __noreturn sub_80CE2B4()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
        *v0 &= 0xFDu;
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        v1 = battle_isTimeStop();
        if ( v3 )
            v1 = (*(&off_80CE300 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80ce308
int sub_80CE308()
{
    int v0; // r5
    int v1; // r9
    _DWORD *v2; // r7
    _DWORD *v3; // r9
    int v4; // r1
    int v5; // r6
    int v6; // r2
    int v7; // r0
    int v8; // r0
    int v9; // r1
    int v10; // r7
    int v12; // [sp-4h] [bp-14h]

    v12 = v1;
    if ( !*(v0 + 11) )
    {
        v2 = (v0 + 64);
        *v2 = 190054 * object_getFrontDirection(v0);
        v2[1] = -10240;
        v2[2] = 132710;
        *(v0 + 32) = 40;
        *(v0 + 11) = 4;
    }
    v3 = (v0 + 52);
    v4 = *(v0 + 56);
    v5 = *(v0 + 72) + *(v0 + 68);
    v6 = *(v0 + 60) + v5;
    *v3 = *(v0 + 52) + *(v0 + 64);
    v3[1] = v4;
    v3[2] = v6;
    *(v0 + 72) = v5;
    v7 = *(v0 + 32) - 1;
    *(v0 + 32) = v7;
    if ( !v7 )
    {
        *v0 &= 0xFDu;
        v8 = sub_800E24C();
        *(v0 + 18) = v8;
        *(v0 + 19) = v9;
        v10 = *(v0 + 84);
        *(v10 + 10) = v8;
        *(v10 + 11) = v9;
        if ( object_isValidPanel(v8, v9) )
            object_isCurrentPanelSolid();
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
        *v0 &= 0xFDu;
    }
    return v12;
}


// 0x80ce3c4
signed int sub_80CE3C4()
{
    int v0; // r5
    int v1; // r6
    int v2; // r4
    int v3; // r2
    signed int result; // r0

    object_clearCollisionRegion();
    v1 = 1;
    if ( !*(*(v0 + 84) + 112) )
        v1 = 15;
    v2 = *(v0 + 22);
    sub_80CE468(*(v0 + 18), *(v0 + 19), byte_80CE421[*(v0 + 4)], v1);
    sub_80CE424(*(v0 + 18), *(v0 + 19), byte_80CE41E[*(v0 + 4)], v1);
    PlaySoundEffect(*&byte_80CE418[2 * *(v0 + 4)], byte_80CE418, v3);
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80ce424
int __fastcall sub_80CE424(int a1, int a2, signed int a3, int a4)
{
    int v4; // r6
    char *v5; // r4
    int result; // r0

    v4 = a1;
    v5 = *(&off_8019B78 + a4);
    result = *v5;
    if ( result != 127 )
        object_setPanelType(result + v4, v5[1] + a2, a3);
    return result;
}


// 0x80ce44e
int __fastcall sub_80CE44E(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    int v7; // [sp+0h] [bp-8h]

    object_spawnType3(79, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 22) = *(v7 + 22);
        *(v4 + 44) = v5;
        *(v4 + 76) = v7;
    }
    return result;
}


// 0x80ce468
int __fastcall sub_80CE468(int a1, int a2, int a3, int a4)
{
    int v4; // r4
    Battle *v5; // r5
    int v6; // r7
    int v7; // r8
    int v8; // ST0C_4
    int v9; // ST10_4
    int v10; // ST14_4
    int v11; // r6
    int v12; // r0
    int v13; // r1
    int v14; // r2
    int v15; // r7
    int v16; // r3
    int v17; // r4
    int v18; // r3
    bool v19; // zf
    int v20; // r0
    int v21; // r1
    int result; // r0
    int v23; // r3
    int v24; // r1
    int v25; // r2
    int v26; // r3
    int v27; // r0
    int v28; // r0
    int v29; // r0
    int v30; // r1
    int v31; // [sp-8h] [bp-2Ch]
    int v32; // [sp-4h] [bp-28h]
    int v33; // [sp+0h] [bp-24h]
    int v34; // [sp+0h] [bp-24h]
    int v35; // [sp+4h] [bp-20h]
    int v36; // [sp+4h] [bp-20h]
    int v37; // [sp+8h] [bp-1Ch]
    int v38; // [sp+8h] [bp-1Ch]
    int v39; // [sp+Ch] [bp-18h]
    int v40; // [sp+Ch] [bp-18h]
    int v41; // [sp+Ch] [bp-18h]
    int v42; // [sp+10h] [bp-14h]

    v7 = v6;
    v8 = a1;
    v9 = a2;
    v10 = a3;
    v39 = a4;
    v11 = object_getAllianceDirection(v4);
    v12 = v8;
    v13 = v9;
    v14 = v10;
    if ( __CFSHL__(v39, 25) )
    {
        v23 = 8 * v39 & 0x3FF;
        v24 = 3;
        v25 = *&byte_8019C34[v23];
        v26 = *&byte_8019C34[v23 + 4];
        do
        {
            v27 = 6;
            do
            {
                v34 = v27;
                v36 = v24;
                v38 = v25;
                v41 = v26;
                v19 = object_checkPanelParameters(v27, v24, v25, v26) == 0;
                v28 = v34;
                v24 = v36;
                v25 = v38;
                v26 = v41;
                if ( !v19 )
                {
                    v29 = object_getCoordinatesForPanels(v34);
                    SpawnT4BattleObjectWithId0(v5, v29, v29, v30, 0);
                    v28 = v34;
                    v24 = v36;
                    v25 = v38;
                    v26 = v41;
                }
                v27 = v28 - 1;
            }
            while ( v27 );
            --v24;
        }
        while ( v24 );
        result = v42;
    }
    else
    {
        if ( v39 << 25 )
        {
            v15 = *(&off_8019B78 + (4 * v39 & 0x1FF));
            v16 = 0;
            while ( 1 )
            {
                v37 = v12;
                v40 = v13;
                v17 = *(v15 + v16);
                if ( v17 == 127 )
                    break;
                v18 = v16 + 1;
                v31 = v12 + v17 * v11;
                v32 = v13 + *(v15 + v18);
                v33 = v14;
                v35 = v18 + 1;
                v19 = object_isValidPanel(v31, v32) == 0;
                v14 = v33;
                v16 = v35;
                if ( !v19 )
                {
                    v19 = object_getPanelDataOffset(v31, v32)[2] == 0;
                    v14 = v33;
                    v16 = v35;
                    if ( !v19 )
                    {
                        v20 = object_getCoordinatesForPanels(v31);
                        SpawnT4BattleObjectWithId0(v5, v20, v20, v21, v7);
                        v14 = v33;
                        v16 = v35;
                    }
                }
                v12 = v37;
                v13 = v40;
            }
        }
        result = v42;
    }
    return result;
}


// 0x80ce530
void sub_80CE530()
{
    int v0; // r5

    (*(&off_80CE548 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80ce554
int sub_80CE554()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    _BYTE *v3; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r1
    int v8; // r2

    if ( object_isCurrentPanelValid() )
    {
        sprite_load(v0, 128, 16, 23);
        sprite_noShadow(v0);
        *v0 |= 2u;
        sprite_setPallete(4 * *(v0 + 4));
        object_setCoordinatesFromPanels(v0);
        v1 = object_getFrontDirection(v0);
        *(v0 + 64) = 786432 * v1;
        *(v0 + 32) = 12;
        *(v0 + 52) -= 9437184 * v1;
        *(v0 + 72) = 786432;
        *(v0 + 60) = 9699328;
        v2 = object_getFlip(v0);
        sprite_setFlip(v0, v2);
        v3 = object_createCollisionData();
        if ( v3 )
        {
            object_setupCollisionData(v3, 10, 5, 3);
            object_setCollisionHitEffect(2);
            v5 = object_clearCollisionRegion();
            object_presentCollisionData(v5, v6);
            *(v0 + 16) = 4;
            *(v0 + 17) = 4;
            sprite_setAnimation(v0, 4u);
            sprite_loadAnimationData(v0);
            PlaySoundEffect(179, v7, v8);
            *(v0 + 8) = 4;
            sub_80CE5F0();
        }
    }
    return object_freeMemory();
}


// 0x80ce5f0
void __noreturn sub_80CE5F0()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
    }
    else
    {
        v1 = battle_isTimeStop();
        if ( !v3 )
            goto LABEL_6;
        if ( !*(*(v0 + 84) + 112) )
        {
            v1 = (*(&off_80CE644 + *(v0 + 9)))();
LABEL_6:
            object_presentCollisionData(v1, v2);
            return;
        }
    }
    *v0 &= 0xFDu;
    object_clearCollisionRegion();
    *(v0 + 8) = 8;
}


// 0x80ce64c
char *sub_80CE64C()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    unsigned int v3; // r0
    unsigned __int8 v4; // cf
    char *result; // r0
    __int64 v6; // r0

    *(v0 + 52) += *(v0 + 64);
    *(v0 + 60) -= *(v0 + 72);
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( (v1 < 0) ^ v2 )
    {
        *(v0 + 60) = 0x40000;
        object_setCoordinatesFromPanels(v0);
        object_updateCollisionPanels(v0);
        object_setCollisionRegion(1);
        *(v0 + 9) = 4;
        *(v0 + 10) = 0;
    }
    v3 = *(v0 + 32);
    v4 = __CFSHR__(v3, 3);
    result = (v3 >> 3);
    if ( v4 )
    {
        LODWORD(v6) = *(v0 + 18);
        HIDWORD(v6) = *(v0 + 19);
        result = object_highlightPanel(v6);
    }
    return result;
}


// 0x80ce690
int sub_80CE690()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r0
    unsigned __int8 v4; // vf
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 1;
        object_clearCollisionRegion();
        *(v0 + 32) = 12;
        PlaySoundEffect(464, v1, v2);
        if ( *(v0 + 5) )
            sub_8109794(*(v0 + 18), *(v0 + 19));
    }
    if ( *(v0 + 32) <= 8 )
    {
        *v0 &= 0xFDu;
        if ( *(v0 + 32) & 2 )
            *v0 |= 2u;
    }
    v3 = *(v0 + 32);
    v4 = __OFSUB__(v3, 1);
    result = v3 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v4 )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80ce6e6
int __fastcall sub_80CE6E6(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(80, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 44) = v5;
    }
    return result;
}


// 0x80ce70c
void sub_80CE70C()
{
    int v0; // r5

    (*(&off_80CE724 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80ce730
void __noreturn sub_80CE730()
{
    Battle *v0; // r5

    object_setCoordinatesFromPanels(v0);
    sub_8011504(0x70402u, 0x4050300u);
}


// 0x80ce782
int __noreturn sub_80CE782()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int result; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || *(*(v0 + 84) + 112) & 0xF800000 )
    {
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        v1 = (*(&off_80CE7C0 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
        result = object_highlightCurrentCollisionPanels();
    }
    return result;
}


// 0x80ce7c4
signed int sub_80CE7C4()
{
    int v0; // r5
    signed int result; // r0

    if ( object_isCurrentPanelValid() )
    {
        *(v0 + 52) += *(v0 + 64);
        object_setPanelsFromCoordinates(v0);
        result = object_updateCollisionPanels(v0);
    }
    else
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
        result = 2;
        *(v0 + 9) = 2;
    }
    return result;
}


// 0x80ce7ee
int __fastcall sub_80CE7EE(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    int v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(81, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 96) = v9;
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = 2;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
    }
    return result;
}


// 0x80ce81c
int sub_80CE81C()
{
    int v0; // r5

    return (*(&off_80CE830 + *(v0 + 8)))();
}


// 0x80ce83c
void __noreturn sub_80CE83C()
{
    _BYTE *v0; // r5

    *v0 |= 2u;
    sub_8011504(0x1000C0Bu, 0x7050100u);
}


// 0x80ce87c
void __noreturn sub_80CE87C()
{
    int v0; // r5
    char v1; // zf
    __int64 v2; // r0
    int v3; // r0
    int v4; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( *(*(v0 + 84) + 112) )
    {
        *(v0 + 104) = 1;
        object_clearCollisionRegion();
    }
    battle_isTimeStop();
    if ( v1 )
        (*(&off_80CE8CC + *(v0 + 9)))();
    if ( *(*(v0 + 84) + 1) )
    {
        LODWORD(v2) = *(v0 + 18);
        HIDWORD(v2) = *(v0 + 19);
        object_highlightPanel(v2);
    }
    v3 = battle_isTimeStop();
    if ( v1 )
        object_updateSprite();
    object_presentCollisionData(v3, v4);
}


// 0x80ce8d8
int sub_80CE8D8()
{
    int v0; // r5

    return (*(&off_80CE8EC + *(v0 + 10)))();
}


// 0x80ce8f4
int sub_80CE8F4()
{
    int v0; // r5
    int result; // r0
    int v2; // r1

    *(v0 + 32) = 8;
    *(v0 + 96) = *(v0 + 6);
    *(v0 + 10) = 4;
    result = *(v0 + 5);
    if ( *(v0 + 5) )
    {
        result = *(v0 + 104);
        if ( result )
        {
            v2 = *(v0 + 96);
            *(v0 + 108) = *(v0 + 6) - v2;
            *(v0 + 112) = 1;
            *(v0 + 9) = 4;
            *(v0 + 10) = 0;
            result = *(v0 + 5);
            if ( result == 1 )
                result = sub_80E8612(*(v0 + 76), v2, 0);
        }
    }
    return result;
}


// 0x80ce932
int sub_80CE932()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int result; // r0
    int v5; // r0

    v1 = *(v0 + 32) - 1;
    *(v0 + 32) = v1;
    if ( v1 )
    {
        v5 = *(v0 + 52) + *(v0 + 64);
        *(v0 + 52) = v5;
        result = sub_800E258(v5);
        if ( result != *(v0 + 18) )
        {
            *(v0 + 18) = result;
            *(*(v0 + 84) + 10) = result;
            result = object_setCollisionRegion(1);
        }
    }
    else
    {
        object_setCoordinatesFromPanels(v0);
        v2 = *(v0 + 96);
        v3 = __OFSUB__(v2--, 1);
        *(v0 + 96) = v2;
        if ( ((v2 < 0) ^ v3) | (v2 == 0) || *(v0 + 5) && *(v0 + 104) )
        {
            *(v0 + 112) = 1;
            if ( *(v0 + 5) == 1 )
            {
                result = sub_80E8612(*(v0 + 76), *(v0 + 96), *(v0 + 6) - *(v0 + 96));
            }
            else
            {
                *(v0 + 108) = *(v0 + 6) - *(v0 + 96);
                *(v0 + 9) = 4;
                result = 0;
                *(v0 + 10) = 0;
            }
        }
        else
        {
            result = 8;
            *(v0 + 32) = 8;
        }
    }
    return result;
}


// 0x80ce9a4
int sub_80CE9A4()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 104) != 2 )
        return (*(&off_80CE9C4 + *(v0 + 10)))();
    result = 1;
    *(v0 + 104) = 1;
    return result;
}


// 0x80ce9cc
signed int sub_80CE9CC()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 32) = 8;
    *(v0 + 96) = *(v0 + 7);
    result = 4;
    *(v0 + 10) = 4;
    return result;
}


// 0x80ce9dc
int sub_80CE9DC()
{
    int v0; // r5
    int result; // r0
    int v2; // r0

    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        object_setCollisionRegion(1);
        v2 = *(v0 + 96) - 1;
        *(v0 + 96) = v2;
        if ( v2 )
        {
            result = 8;
            *(v0 + 32) = 8;
        }
        else
        {
            *(v0 + 9) = 8;
            *(v0 + 10) = 0;
            result = -*(v0 + 64);
            *(v0 + 64) = result;
        }
    }
    return result;
}


// 0x80cea0a
int sub_80CEA0A()
{
    int v0; // r5

    return (*(&off_80CEA1C + *(v0 + 10)))();
}


// 0x80cea24
int sub_80CEA24()
{
    int v0; // r5
    int result; // r0

    *(v0 + 32) = 8;
    *(v0 + 96) = *(v0 + 108);
    *(v0 + 10) = 4;
    result = *(v0 + 96);
    if ( !result )
    {
        *(v0 + 8) = 8;
        result = object_clearCollisionRegion();
    }
    return result;
}


// 0x80cea42
signed int sub_80CEA42()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    signed int result; // r0
    int v5; // r0

    v1 = *(v0 + 32) - 1;
    *(v0 + 32) = v1;
    if ( v1 )
    {
        v5 = *(v0 + 52) + *(v0 + 64);
        *(v0 + 52) = v5;
        result = sub_800E258(v5);
        if ( result != *(v0 + 18) )
        {
            *(v0 + 18) = result;
            *(*(v0 + 84) + 10) = result;
            result = object_setCollisionRegion(1);
        }
    }
    else
    {
        object_setCoordinatesFromPanels(v0);
        v2 = *(v0 + 96);
        v3 = __OFSUB__(v2--, 1);
        *(v0 + 96) = v2;
        if ( ((v2 < 0) ^ v3) | (v2 == 0) )
        {
            *(v0 + 8) = 8;
            result = object_clearCollisionRegion();
        }
        else
        {
            result = 8;
            *(v0 + 32) = 8;
        }
    }
    return result;
}


// 0x80cea88
int sub_80CEA88()
{
    int v0; // r5
    _DWORD *v1; // r7

    v1 = *(v0 + 100);
    if ( v0 == *v1 )
        *v1 = 0;
    object_freeCollisionData(*(v0 + 84));
    return object_freeMemory();
}


// 0x80ceaa2
int __fastcall sub_80CEAA2(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r7
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(82, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        result = sub_801155A(v4, v7, v8, v9);
        *(result + 100) = v5;
        *result |= 0x10u;
    }
    return result;
}


// 0x80ceac2
int __fastcall sub_80CEAC2(int result, signed int a2, int a3)
{
    int v3; // r5
    signed int v4; // r4
    int v5; // r7
    int v6; // r5

    v4 = a2;
    v5 = a3;
    if ( v3 == result )
        v4 = 1;
    if ( result )
    {
        v6 = result;
        result = object_setCoordinatesFromPanels(result);
        *(v6 + 104) = v4;
        *(v6 + 108) = v5;
        *(v6 + 112) = 1;
        *(v6 + 9) = 4;
        *(v6 + 10) = 0;
    }
    return result;
}


// 0x80ceaee
int __fastcall sub_80CEAEE(int result)
{
    if ( result )
        result = *(result + 112);
    return result;
}


// 0x80ceb00
void sub_80CEB00()
{
    int v0; // r5

    (*(&off_80CEB18 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80ceb24
signed int __noreturn sub_80CEB24()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 8, 18);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 30;
    *(v0 + 17) = 30;
    sprite_setAnimation(v0, 0x1Eu);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80ceb66
int sub_80CEB66()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        result = battle_isTimeStop();
        if ( v2 )
            result = (*(&off_80CEB8C + *(v0 + 9)))();
    }
    return result;
}


// 0x80ceb9c
int sub_80CEB9C()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 32) = 11;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80cebbe
int sub_80CEBBE()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        *(v0 + 52) += *(v0 + 64);
        *(v0 + 60) += *(v0 + 72);
        object_setPanelsFromCoordinates(v0);
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 31;
        *(v0 + 52) += 2490368 * object_getFrontDirection(v0);
        *(v0 + 60) = 5505024;
        *(v0 + 64) = 393216 * object_getFrontDirection(v0);
        *(v0 + 72) = 393216;
        result = 20;
        *(v0 + 32) = 20;
    }
    return result;
}


// 0x80cec1a
char *sub_80CEC1A()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // ST04_1
    int v4; // r0
    unsigned __int8 v5; // vf
    unsigned int v6; // r0
    unsigned __int8 v7; // cf
    char *result; // r0

    if ( *(v0 + 10) )
    {
        v4 = *(v0 + 32);
        v5 = __OFSUB__(v4--, 1);
        *(v0 + 32) = v4;
        if ( ((v4 < 0) ^ v5) | (v4 == 0) )
        {
            *(v0 + 9) = 12;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        v1 = sub_80CED78();
        *(v0 + 100) = v1;
        *(v0 + 104) = v2;
        v3 = v2;
        *(v0 + 18) = v1 - 2 * object_getFrontDirection(v0);
        *(v0 + 19) = v3;
        object_setCoordinatesFromPanels(v0);
        *(v0 + 60) = 12582912;
        *(v0 + 16) = 32;
        *(v0 + 32) = 10;
        *(v0 + 34) = 0;
    }
    v6 = *(v0 + 34) + 1;
    *(v0 + 34) = v6;
    v7 = __CFSHR__(v6, 3);
    result = (v6 >> 3);
    if ( !v7 )
        result = object_highlightPanel(*(v0 + 100));
    return result;
}


// 0x80cec7c
char *sub_80CEC7C()
{
    int v0; // r5
    int v1; // r0
    char *v2; // r2
    int v3; // r1
    int v4; // r2
    int v5; // r0
    unsigned __int8 v6; // vf
    char *result; // r0
    unsigned int v8; // r0
    unsigned __int8 v9; // cf

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        v1 = object_getFrontDirection(v0);
        v2 = &byte_80CED18[8 * *(v0 + 4)];
        v3 = *v2;
        v4 = *(v2 + 1);
        *(v0 + 64) = v3 * v1;
        *(v0 + 72) = -v4;
        *(v0 + 32) = *&byte_80CED3C[4 * *(v0 + 4)];
        goto LABEL_8;
    }
    *(v0 + 52) += *(v0 + 64);
    *(v0 + 60) += *(v0 + 72);
    object_setPanelsFromCoordinates(v0);
    v5 = *(v0 + 32);
    v6 = __OFSUB__(v5--, 1);
    *(v0 + 32) = v5;
    if ( !(((v5 < 0) ^ v6) | (v5 == 0)) )
    {
LABEL_8:
        v8 = *(v0 + 34) + 1;
        *(v0 + 34) = v8;
        v9 = __CFSHR__(v8, 3);
        result = (v8 >> 3);
        if ( !v9 )
            result = object_highlightPanel(*(v0 + 100));
        return result;
    }
    if ( object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & *&byte_80CED50[4 * *(v0 + 22)] )
        object_crackPanel(*(v0 + 18), *(v0 + 19));
    result = &dword_8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80ced58
int __fastcall sub_80CED58(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(83, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *(v4 + 22) = *(v11 + 22);
    }
    return result;
}


// 0x80ced78
int sub_80CED78()
{
    int v0; // r5
    int v1; // r2
    int v2; // ST00_4
    int v3; // ST04_4
    int result; // r0
    signed int v6; // r4
    int v7; // r6
    char *v8; // r2
    int v9; // r0
    char v10; // r1
    int v11; // r2
    int v12; // r0
    int v13; // r1
    int v14; // r4
    int v15; // r0
    int v19; // [sp+0h] [bp-34h]
    int v20; // [sp+4h] [bp-30h]
    int v21; // [sp+8h] [bp-2Ch]
    int v22; // [sp+Ch] [bp-28h]

    if ( *(v0 + 5)
        || (v1 = *(v0 + 96), v2 = *(v1 + 18), v3 = *(v1 + 19), _ZF = object_isCurrentPanelValid() == 0, result = v2, _ZF) )
    {
        v6 = 0;
        v7 = 0;
        do
        {
            v8 = &byte_80CEE1C[2 * v6];
            v9 = *v8;
            v10 = v8[1];
            v11 = *(v0 + 22);
            if ( v9 )
                LOBYTE(v9) = 7 - v9;
            *(&v22 + v7++) = v9 | 16 * v10;
            ++v6;
        }
        while ( v6 < 4 );
        v21 = -object_getFrontDirection(v0);
        v12 = 8 * *(v0 + 22);
        v13 = *&byte_80CEE28[v12 + 4];
        v19 = *&byte_80CEE28[v12];
        v20 = *&byte_80CEE28[v12 + 4];
        v14 = 3;
        if ( *(v0 + 22) )
            v14 = 4;
        do
        {
            v15 = object_getPanelsInColumnFiltered(v14, v13, v19, v20);
            if ( !v15 )
                break;
            v7 += v15;
            v14 += v21;
            if ( v14 < 1 )
                break;
        }
        while ( v14 <= 6 );
        GetPositiveSignedRNG2();
        __asm { SVC         6 }
        result = *(&v22 + v7) & 7;
    }
    return result;
}


// 0x80cee38
int sub_80CEE38()
{
    int v0; // r5
    int v1; // r6
    int result; // r0

    v1 = *(v0 + 44);
    result = object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
    if ( result )
        *(result + 32) = 5;
    return result;
}


// 0x80cee78
void sub_80CEE78()
{
    int v0; // r5

    (*(&off_80CEE90 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80cee9c
int __noreturn sub_80CEE9C()
{
    int v0; // r5
    int v1; // r0
    __int16 v2; // r0
    _BYTE *v3; // r0
    int result; // r0
    int v5; // r0
    int v6; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 16, 29);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    sub_80CF080();
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = byte_80CEE70[2 * *(v0 + 4)];
    *(v0 + 36) = v2;
    *(v0 + 38) = v2;
    v3 = object_createCollisionData();
    if ( !v3 )
        return object_freeMemory();
    v5 = object_setupCollisionData(v3, 19, 20, 3);
    object_presentCollisionData(v5, v6);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80cef0a
void __noreturn sub_80CEF0A()
{
    int v0; // r5
    signed int v1; // r0
    unsigned __int8 v2; // vf
    int v3; // r0
    int v4; // r1
    char v5; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || (v1 = object_applyDamage(0), (v1 < 0) ^ v2) )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        v3 = battle_isTimeStop();
        if ( v5 )
            v3 = (*(&off_80CEF4C + *(v0 + 9)))();
        object_presentCollisionData(v3, v4);
    }
}


// 0x80cef5c
int sub_80CEF5C()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        result = *(&dword_80CEF8C + *(v0 + 4)) + 20;
        *(v0 + 32) = result;
    }
    return result;
}


// 0x80cef90
int sub_80CEF90()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    char v4; // r0
    int v5; // ST00_4
    char v6; // r0
    int v7; // r6
    int v8; // r1
    int v9; // r2
    int v10; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 1;
        *(v0 + 34) = 3;
        *(v0 + 32) = 0;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 32) = 10;
        GetPositiveSignedRNG2();
        v5 = *(&dword_80CEFF8 + (v4 & 3)) << 16;
        v6 = object_getFrontDirection(v0);
        v7 = *(v0 + 44);
        sub_80C6ADA(v6 + *(v0 + 18), *(v0 + 19), *(v0 + 14), v5);
        PlaySoundEffect(185, v8, v9);
        v10 = *(v0 + 34);
        v2 = __OFSUB__(v10, 1);
        result = v10 - 1;
        *(v0 + 34) = result;
        if ( ((result < 0) ^ v2) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80ceffc
int sub_80CEFFC()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 3;
        result = *(&dword_80CF02C + *(v0 + 4));
        *(v0 + 32) = result;
    }
    return result;
}


// 0x80cf030
int sub_80CF030()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            object_clearCollisionRegion();
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 2;
        result = 15;
        *(v0 + 32) = 15;
    }
    return result;
}


// 0x80cf058
int __fastcall sub_80CF058(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(84, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *(v4 + 22) = *(v11 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80cf080
int sub_80CF080()
{
    int v0; // r5
    signed int v1; // r1
    int result; // r0

    v1 = *(v0 + 18);
    switch ( v1 )
    {
        case 1:
            result = *(v0 + 22);
            break;
        case 6:
            result = *(v0 + 22) ^ 1;
            break;
        case 4:
            result = 0;
            if ( *(*(v0 + 96) + 18) > 4 )
                result = 1;
            break;
        default:
            result = 0;
            if ( v1 > *(*(v0 + 96) + 18) )
                result = 1;
            break;
    }
    *(v0 + 23) = result;
    return result;
}


// 0x80cf0d0
int sub_80CF0D0()
{
    int v0; // r5

    return (*(&off_80CF0E4 + *(v0 + 8)))();
}


// 0x80cf0f0
int __noreturn sub_80CF0F0()
{
    int v0; // r5
    char *v1; // r7
    int v2; // r7
    u8 v3; // r0
    int v4; // r0
    __int16 v5; // r0
    _BYTE *v6; // r0
    int v8; // r0
    int v9; // r1

    *v0 |= 2u;
    v1 = &byte_80CF0C0[8 * *(v0 + 4)];
    *(v0 + 96) = v1;
    sprite_load(v0, 128, *v1, v1[1]);
    sprite_hasShadow();
    v2 = *(v0 + 96);
    v3 = *(v2 + 3);
    *(v0 + 16) = v3;
    *(v0 + 17) = v3;
    sprite_setAnimation(v0, v3);
    sprite_loadAnimationData(v0);
    v4 = object_getFlip(v0);
    sprite_setFlip(v0, v4);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 10485760;
    *(v0 + 20) = *(v0 + 18);
    *(v0 + 40) = *(v0 + 4) + 219;
    *(v0 + 72) = 0x80000;
    *(v0 + 14) = 0;
    *(v0 + 32) = *(v2 + 6);
    v5 = *(*(v0 + 96) + 4);
    *(v0 + 36) = v5;
    *(v0 + 38) = v5;
    *(v0 + 100) = 1;
    *(v0 + 34) = 1;
    v6 = object_createCollisionData();
    if ( v6 )
    {
        object_setupCollisionData(v6, 19, 20, 3);
        v8 = object_clearCollisionRegion();
        object_presentCollisionData(v8, v9);
        *(v0 + 8) = 4;
        sub_80CF18C();
    }
    return object_freeMemory();
}


// 0x80cf18c
void __noreturn sub_80CF18C()
{
    _BYTE *v0; // r5
    int v1; // r0
    int v2; // r1

    *v0 |= 2u;
    sprite_clearFinalPalette();
    sub_801AD12();
    sub_800F672();
    v1 = sub_801B394(&off_80CF1B8);
    object_presentCollisionData(v1, v2);
    object_updateSprite();
}


// 0x80cf1dc
signed int __noreturn sub_80CF1DC()
{
    int v0; // r5
    int v1; // r0
    int v2; // r2
    signed int result; // r0
    int v4; // r0

    object_clearCollisionRegion();
    object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    v1 = object_getFlag2();
    if ( v1 & 0x8000 )
    {
        if ( v1 & 0x300000 )
        {
            sub_800F90E(3);
        }
        else
        {
            result = sub_800F8CE(v1);
            if ( !result )
                return result;
            if ( result != 1 )
                SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 786432);
        }
    }
    else
    {
        PlaySoundEffect(112, 0x8000, v2);
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x100000);
    }
    v4 = *v0 & 0xFD;
    *v0 = v4;
    sub_802EF5C(v4);
    sub_800F656();
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80cf250
int sub_80CF250()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    unsigned __int8 v3; // vf
    int result; // r0

    v1 = *(v0 + 60);
    v2 = *(v0 + 72);
    v3 = __OFSUB__(v1, v2);
    result = v1 - v2;
    *(v0 + 60) = result;
    if ( ((result < 0) ^ v3) | (result == 0) )
    {
        *(v0 + 60) = 0;
        object_isCurrentPanelSolid();
    }
    return result;
}


// 0x80cf2b4
int sub_80CF2B4()
{
    int v0; // r5
    int v1; // r1
    char v2; // zf
    unsigned int v3; // r0
    bool v4; // cf
    int v5; // r0
    unsigned __int8 v6; // vf
    int v7; // r4
    int result; // r0

    battle_isBattleOver();
    if ( v2 )
    {
        v3 = *(v0 + 100);
        v4 = v3-- >= 1;
        *(v0 + 100) = v3;
        if ( v3 == 0 || !v4 )
        {
            *(v0 + 100) = 16;
            sub_80CF332(16, v1);
        }
        v5 = *(v0 + 34);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v0 + 34) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *(v0 + 34) = *(*(v0 + 96) + 2);
            v7 = *&byte_80CF31C[4 * *(v0 + 22)];
            result = object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), 5, *(v0 + 60));
        }
    }
    else
    {
        *(v0 + 9) = 2;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80cf324
int sub_80CF324()
{
    int v0; // r5

    object_freeCollisionData(*(v0 + 84));
    return object_freeMemory();
}


// 0x80cf332
int __fastcall __noreturn sub_80CF332(int a1, int a2)
{
    int v2; // r5
    int result; // r0
    int v4; // r4
    int v9; // [sp+0h] [bp-20h]

    result = object_getPanelsExceptCurrentFilterred(
                         8 * *(v2 + 22),
                         a2,
                         *&byte_80CF364[8 * *(v2 + 22)],
                         *&byte_80CF364[8 * *(v2 + 22) + 4]);
    v4 = result;
    if ( result )
    {
        GetPositiveSignedRNG2();
        __asm { SVC         6 }
        result = *(&v9 + v4) & 7;
    }
    return result;
}


// 0x80cf374
int __fastcall sub_80CF374(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    int v7; // r1
    char v8; // [sp+0h] [bp-10h]
    char v9; // [sp+4h] [bp-Ch]
    int v10; // [sp+8h] [bp-8h]

    v8 = a1;
    v9 = a2;
    object_spawnType3(85, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 44) = v5;
        v7 = *(v10 + 22);
        *(v4 + 22) = v7;
        *v4 |= 0x10u;
        result = sub_800F614(v4, v7, 1);
    }
    return result;
}


// 0x80cf3be
int sub_80CF3BE()
{
    int v0; // r5

    return (*(&off_80CF3D0 + *(v0 + 8)))();
}


// 0x80cf3dc
void __noreturn sub_80CF3DC()
{
    int v0; // r5
    char *v1; // r7
    u8 v2; // r0
    int v3; // r0
    int v4; // r0
    _BYTE *v5; // r0
    int v6; // r0
    int v7; // r1
    int v8; // r0
    int v9; // r3
    int v10; // [sp+0h] [bp-8h]

    *v0 |= 2u;
    v1 = &byte_80CF3AC[6 * *(v0 + 4)];
    *(v0 + 96) = v1;
    sprite_load(v0, 128, 12, *v1);
    v2 = v1[1];
    *(v0 + 16) = v2;
    *(v0 + 17) = v2;
    sprite_setAnimation(v0, v2);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    sprite_noShadow(v0);
    v3 = object_getFlip(v0);
    sprite_setFlip(v0, v3);
    object_setCoordinatesFromPanels(v0);
    v4 = object_getFrontDirection(v0);
    *(v0 + 64) = v4 << 20;
    *(v0 + 72) = 0x100000;
    *(v0 + 52) -= v4 << 24;
    *(v0 + 60) = 0x1000000;
    *(v0 + 32) = 30;
    v5 = object_createCollisionData();
    if ( !v5 )
    {
        object_freeMemory();
        JUMPOUT(__CS__, v10);
    }
    object_setupCollisionData(v5, *(*(v0 + 96) + 2), *(*(v0 + 96) + 3), 3);
    sub_801A146();
    v6 = object_clearCollisionRegion();
    object_presentCollisionData(v6, v7);
    sub_80E43F6(v8, *(v0 + 18), *(v0 + 19), v9);
    *(v0 + 8) = 4;
}


// 0x80cf488
void __noreturn sub_80CF488()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    (*(&off_80CF4BC + *(v0 + 9)))();
    object_updateSprite();
    object_presentCollisionData(v1, v2);
}


// 0x80cf4c8
int __fastcall sub_80CF4C8(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0

    result = *(v3 + 32) - 1;
    *(v3 + 32) = result;
    if ( !result )
    {
        *(v3 + 32) = 16;
        PlaySoundEffect(196, a2, a3);
        *(v3 + 9) = 4;
        result = 0;
        *(v3 + 10) = 0;
    }
    return result;
}


// 0x80cf4e6
int sub_80CF4E6()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r2
    int v4; // r7
    int result; // r0

    v1 = *(v0 + 32) - 1;
    *(v0 + 32) = v1;
    if ( v1 )
    {
        *(v0 + 52) += *(v0 + 64);
        result = *(v0 + 60) - *(v0 + 72);
        *(v0 + 60) = result;
    }
    else
    {
        object_setCoordinatesFromPanels(v0);
        *(v0 + 60) = 0;
        if ( object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & 0xF800010 )
        {
            SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
            PlaySoundEffect(112, v2, v3);
            v4 = *(v0 + 96);
            if ( *(v4 + 4) )
                camera_initShakeEffect_80302a8(*(v4 + 4), 15);
            object_setCollisionRegion(1);
        }
        *(v0 + 9) = 8;
        *(v0 + 10) = 0;
        result = *v0 & 0xFD;
        *v0 = result;
    }
    return result;
}


// 0x80cf554
signed int sub_80CF554()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    char v3; // r0
    signed int result; // r0

    v1 = *(v0 + 96);
    v2 = *(v1 + 5);
    if ( *(v1 + 5) )
    {
        if ( v2 == 1 )
            goto LABEL_10;
        if ( v2 != 3 )
            object_breakPanel_dup2(*(v0 + 18), *(v0 + 19));
        GetPositiveSignedRNG2();
        if ( !(v3 & 1) )
LABEL_10:
            object_crackPanel(*(v0 + 18), *(v0 + 19));
    }
    *v0 &= 0xFDu;
    object_clearCollisionRegion();
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80cf594
int __fastcall sub_80CF594(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(86, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
    }
    return result;
}


// 0x80cf5b2
_BYTE *__fastcall sub_80CF5B2(char a1, int a2, int a3, int a4)
{
    _BYTE *result; // r0

    result = sub_80CF594(a1, a2, a3, a4);
    if ( result )
        *result |= 0x10u;
    return result;
}


// 0x80cf5c8
void sub_80CF5C8()
{
    int v0; // r5

    (*(&off_80CF5E0 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80cf5ec
int __noreturn sub_80CF5EC()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v3; // r0
    int v4; // r1
    int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 20;
    sprite_load(v0, 128, 8, 18);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 26;
    *(v0 + 17) = 26;
    sprite_setAnimation(v0, 0x1Au);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( v2 )
    {
        object_setupCollisionData(v2, 6, 5, 1);
        v3 = object_setCollisionHitEffect(255);
        object_presentCollisionData(v3, v4);
        result = 4;
        *(v0 + 8) = 4;
    }
    else
    {
        **(v0 + 96) = 0;
        result = object_freeMemory();
    }
    return result;
}


// 0x80cf658
void __noreturn sub_80CF658()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r1
    char v4; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( *(*(v0 + 76) + 9) != 13 )
        goto LABEL_16;
    if ( *(v0 + 11) )
    {
        **(v0 + 96) = 0;
        *(v0 + 8) = 8;
        return;
    }
    if ( battle_isBattleOver() || *(*(v0 + 76) + 9) != 13 )
        goto LABEL_16;
    v1 = *(*(v0 + 84) + 112);
    if ( !(v1 & *(&off_80CF6F4 + *(v0 + 22))) )
    {
        if ( !(v1 & 0x3800000) )
        {
            v2 = battle_isTimeStop();
            if ( v4 )
                v2 = (*(&off_80CF6EC + *(v0 + 9)))();
            object_presentCollisionData(v2, v3);
            return;
        }
LABEL_16:
        object_clearCollisionRegion();
        **(v0 + 96) = 0;
        *(v0 + 8) = 8;
        return;
    }
    if ( sub_80CF7A4() )
        *(v0 + 11) = 2;
    else
        *(v0 + 11) = 1;
    object_clearCollisionRegion();
}


// 0x80cf700
signed int sub_80CF700()
{
    int v0; // r5
    int v5; // r0
    signed int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 64) = *&byte_80CF75C[4 * *(v0 + 4)] * object_getFrontDirection(v0);
        __asm { SVC         6 }
        *(v0 + 32) = 0;
    }
    v5 = *(v0 + 32);
    _VF = __OFSUB__(v5--, 1);
    *(v0 + 32) = v5;
    if ( ((v5 < 0) ^ _VF) | (v5 == 0)
        || (*(v0 + 52) += *(v0 + 64),
                object_setPanelsFromCoordinates(v0),
                object_updateCollisionPanels(v0),
                (result = object_isCurrentPanelValid()) == 0) )
    {
        object_clearCollisionRegion();
        **(v0 + 96) = 0;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80cf76c
int sub_80CF76C()
{
    object_clearCollisionRegion();
    return object_genericDestroy();
}


// 0x80cf778
int __fastcall sub_80CF778(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(87, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 76) = v11;
        *(v4 + 96) = v6;
        *v6 = v4;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80cf7a4
int sub_80CF7A4()
{
    int v0; // r5
    int result; // r0
    char *v2; // r3
    int *v3; // r6
    int v4; // r1
    int v5; // [sp+0h] [bp-1Ch]

    result = sub_801A4DC(&v5, 16);
    if ( result )
    {
        v2 = 0;
        v3 = &v5;
        do
        {
            v4 = *(*v3 + 84);
            if ( v4 )
            {
                v2 = &off_80CF7E8;
                if ( *(v4 + 48) & *(&off_80CF7E8 + *(v0 + 22)) )
                {
                    *(v0 + 80) = *v3;
                    return 1;
                }
            }
            ++v3;
            ++v2;
        }
        while ( v2 < result );
        result = 0;
    }
    return result;
}


// 0x80cf7f0
int sub_80CF7F0()
{
    int v0; // r5

    return (*(&off_80CF804 + *(v0 + 8)))();
}


// 0x80cf810
int sub_80CF810()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    _BYTE *v3; // r0
    int v4; // r0
    int v5; // r1

    if ( !battle_isBattleOver() )
    {
        *v0 |= 3u;
        sprite_load(v0, 128, 12, 20);
        sprite_noShadow(v0);
        *(v0 + 16) = 0;
        sprite_setAnimation(v0, 0);
        sprite_loadAnimationData(v0);
        sprite_update(v0);
        v1 = object_getFlip(v0);
        sprite_setFlip(v0, v1);
        v2 = 11;
        if ( !*(v0 + 5) )
            v2 = byte_80CF8A8[*(v0 + 14) & 0xF];
        sprite_setPallete(v2);
        object_setCoordinatesFromPanels(v0);
        *(v0 + 60) = 0x100000;
        *(v0 + 32) = 0;
        *(v0 + 64) *= object_getFrontDirection(v0);
        v3 = object_createCollisionData();
        if ( v3 )
        {
            object_setupCollisionData(v3, 7, 5, *(v0 + 4));
            v4 = object_setCollisionRegion(4);
            object_presentCollisionData(v4, v5);
            *(v0 + 8) = 4;
            sub_80CF8B0();
        }
    }
    return object_freeMemory();
}


// 0x80cf8b0
void __noreturn sub_80CF8B0()
{
    int v0; // r5
    int v1; // r4
    int v2; // r1
    int v3; // r0

    object_removeCollisionData();
    if ( battle_isBattleOver() )
        goto LABEL_8;
    if ( *(*(v0 + 84) + 112) & 0x3F800000 )
    {
        if ( *(v0 + 5) )
        {
            object_clearCollisionRegion();
            goto LABEL_5;
        }
LABEL_8:
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
        return;
    }
LABEL_5:
    v1 = *(v0 + 18);
    sub_80CF8F8();
    v3 = *(v0 + 18);
    if ( v3 != v1 )
        v3 = object_setCollisionRegion(4);
    object_presentCollisionData(v3, v2);
}


// 0x80cf8f8
signed int sub_80CF8F8()
{
    Battle *v0; // r5
    int v1; // r0
    CollisionData *v2; // r2
    int v3; // r1
    signed int result; // r0

    v0->x += v0->vx;
    v1 = object_setPanelsFromCoordinates(v0);
    v2 = v0->collisionData;
    v2->panelX = v1;
    v2->panelY = v3;
    result = object_isValidPanel(v1, v3);
    if ( !result )
    {
        object_clearCollisionRegion();
        result = 8;
        v0->currState = 8;
    }
    return result;
}


// 0x80cf91e
int __fastcall sub_80CF91E(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-18h]
    char v7; // [sp+4h] [bp-14h]
    char v8; // [sp+8h] [bp-10h]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(88, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, v8);
    return result;
}


// 0x80cf954
int sub_80CF954()
{
    int v0; // r5

    return (*(&off_80CF968 + *(v0 + 8)))();
}


// 0x80cf974
void __noreturn sub_80CF974()
{
    int v0; // r5
    char *v1; // r7
    u8 v2; // r0
    char v3; // r0
    int v4; // r0
    _BYTE *v5; // r0
    int v6; // r0
    int v7; // r1

    v1 = &byte_80CF934[8 * *(v0 + 4)];
    *(v0 + 96) = v1;
    *v0 |= 2u;
    sprite_load(v0, 128, 16, 0);
    *(v0 + 17) = -1;
    v2 = 0;
    if ( *(v0 + 6) == 3 )
        v2 = *v1;
    *(v0 + 16) = v2;
    sprite_setAnimation(v0, v2);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    sprite_hasShadow();
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    *(v0 + 20) = *(v0 + 18);
    v3 = 0;
    if ( *(v0 + 4) >= 3u )
        v3 = 2;
    *(v0 + 14) = v3;
    v4 = 2 * v1[2];
    if ( !v4 )
        LOWORD(v4) = 1;
    *(v0 + 36) = v4;
    *(v0 + 38) = v4;
    *(v0 + 40) = *(v1 + 3);
    *(v0 + 32) = 6000;
    v5 = object_createCollisionData();
    if ( v5 )
    {
        object_setupCollisionData(v5, 14, 15, 3);
        object_setCollisionHitEffect(10);
        v6 = object_clearCollisionRegion();
        object_presentCollisionData(v6, v7);
        *(v0 + 8) = 4;
        sub_80CFA18();
    }
    object_freeMemory();
}


// 0x80cfa18
void __noreturn sub_80CFA18()
{
    _BYTE *v0; // r5
    int v1; // r0
    int v2; // r1

    *v0 |= 2u;
    sprite_clearFinalPalette();
    sub_801AD9E();
    object_spawnCollisionEffect();
    sub_800F672();
    sub_801B394(&off_80CFA48);
    object_updateSprite();
    object_presentCollisionData(v1, v2);
}


// 0x80cfa6c
int sub_80CFA6C()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 6) == 2 )
        return sub_80CFAC0();
    if ( *(v0 + 6) || (result = sprite_getFrameParameters(), result & 0x80) )
    {
        if ( object_checkPanelParameters(*(v0 + 18), *(v0 + 19), 16, 260571264) )
        {
            *(v0 + 16) = **(v0 + 96);
            object_setCollisionRegion(1);
            *v0 &= 0xFBu;
            *(v0 + 9) = 8;
        }
        else
        {
            *(v0 + 9) = 2;
        }
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80cfac0
char *sub_80CFAC0()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // r0
    __int64 v5; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 16) = **(v0 + 96);
        *(v0 + 72) = 0;
        *(v0 + 60) = 10485760;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 72) - 0x4000;
    *(v0 + 72) = v1;
    v2 = *(v0 + 60);
    v3 = __OFADD__(v2, v1);
    v4 = v2 + v1;
    *(v0 + 60) = v4;
    if ( ((v4 < 0) ^ v3) | (v4 == 0) )
        object_isCurrentPanelSolid();
    LODWORD(v5) = *(v0 + 18);
    HIDWORD(v5) = *(v0 + 19);
    return object_highlightPanel(v5);
}


// 0x80cfb28
void sub_80CFB28()
{
    ;
}


// 0x80cfb2c
signed int __noreturn sub_80CFB2C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    signed int result; // r0
    int v4; // ST00_4
    int v5; // ST0C_4
    int v6; // r0
    int v7; // r1
    int v8; // r2
    int v9; // r3
    int v10; // r0
    int v11; // r1
    int v12; // r2
    int v13; // r3
    int v14; // r2

    object_clearCollisionRegion();
    v1 = object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    sub_802EF5C(v1);
    sub_800F656();
    v2 = object_getFlag2();
    if ( v2 & 0x8000 )
    {
        if ( v2 & 0x300000 )
        {
            sub_800F90E(4);
        }
        else
        {
            result = sub_800F8CE(v2);
            if ( !result )
                return result;
            if ( result != 1 )
                SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 786432);
        }
    }
    else
    {
        v4 = *(v0 + 52);
        v5 = *(*(v0 + 96) + 3);
        v6 = sub_801BDDE(0xFu);
        sub_80E47A4(v6, v7, v8, v9);
        v10 = sub_801BDDE(0xFu);
        sub_80E47A4(v10, v11, v12, v13);
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x100000);
        PlaySoundEffect(*(*(v0 + 96) + 4), *(v0 + 96), v14);
    }
    *v0 &= 0xFDu;
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80cfbc4
int __fastcall sub_80CFBC4(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // r1
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    int v10; // [sp+8h] [bp-Ch]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(89, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 22) = v10;
        *(v4 + 44) = v5;
        v7 = 16;
        if ( *(v4 + 6) == 3 )
            v7 = 20;
        *v4 |= v7;
        result = sub_800F614(v4, v10, *(v4 + 5));
    }
    return result;
}


// 0x80cfc08
int sub_80CFC08()
{
    int v0; // r5

    return (*(&off_80CFC1C + *(v0 + 8)))();
}


// 0x80cfc28
int sub_80CFC28()
{
    int v0; // r5
    _BYTE *v1; // r0
    int v2; // r1
    int v3; // r2

    *(v0 + 32) = 100;
    *(v0 + 34) = 8;
    v1 = object_createCollisionData();
    if ( v1 )
    {
        object_setupCollisionData(v1, 27, 0, 0);
        object_clearCollisionRegion();
        PlaySoundEffect(173, v2, v3);
        *(v0 + 8) = 4;
        sub_80CFC5E();
    }
    return object_freeMemory();
}


// 0x80cfc5e
void __noreturn sub_80CFC5E()
{
    int v0; // r5
    _BYTE *v1; // r1
    int v2; // r0
    int v3; // r0

    object_removeCollisionData();
    v2 = *(v0 + 34) - 1;
    *(v0 + 34) = v2;
    if ( !v2 )
    {
        sub_80CFCA8();
        *(v0 + 34) = 8;
    }
    v3 = *(v0 + 32) - 1;
    *(v0 + 32) = v3;
    if ( !v3 )
    {
        object_setCollisionRegion(128);
        v1 = *(v0 + 96);
        if ( v1 )
            *v1 = 0;
        v3 = 8;
        *(v0 + 8) = 8;
    }
    object_presentCollisionData(v3, v1);
}


// 0x80cfc96
int __noreturn sub_80CFC96()
{
    int v0; // r5

    object_removeCollisionData();
    object_freeCollisionData(*(v0 + 84));
    return object_freeMemory();
}


// 0x80cfca8
int sub_80CFCA8()
{
    int v0; // r5
    unsigned int v1; // r0
    int v2; // r1

    GetRNG2();
    v2 = (v1 & 0x1F) - 152;
    if ( *(v0 + 22) != *(v0 + 23) )
        v2 = (v1 & 0x1F) + 120;
    return sub_80E48F8((v1 >> 25) - 64, v2 << 16, ((v1 >> 25) - 64) << 16, 2621440);
}


// 0x80cfcd6
int __fastcall sub_80CFCD6(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r7
    int result; // r0
    int v7; // [sp+0h] [bp-8h]

    object_spawnType3(90, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 96) = v5;
        *(v4 + 22) = *(v7 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80cfcf8
void sub_80CFCF8()
{
    int v0; // r5

    (*(&off_80CFD10 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80cfd1c
int __noreturn sub_80CFD1C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r2

    sprite_load(v0, 128, 20, 26);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = -1;
    *v0 &= 0xFDu;
    object_setCoordinatesFromPanels(v0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    PlaySoundEffect(237, v2, v3);
    *(v0 + 8) = 4;
    return sub_80CFD64();
}


// 0x80cfd64
int sub_80CFD64()
{
    int v0; // r5

    return (*(&off_80CFD78 + *(v0 + 9)))();
}


// 0x80cfd80
char *sub_80CFD80()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    unsigned int v3; // r0
    unsigned __int8 v4; // cf
    char *result; // r0
    __int64 v6; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 10;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( ((v1 < 0) ^ v2) | (v1 == 0) )
    {
        *(v0 + 9) = 4;
        *(v0 + 10) = 0;
    }
    v3 = *(v0 + 32);
    v4 = __CFSHR__(v3, 3);
    result = (v3 >> 3);
    if ( v4 )
    {
        LODWORD(v6) = *(v0 + 18);
        HIDWORD(v6) = *(v0 + 19);
        result = object_highlightPanel(v6);
    }
    return result;
}


// 0x80cfdb0
int sub_80CFDB0()
{
    int v0; // r5
    int v1; // r6
    int v2; // r7
    int v3; // r0
    unsigned __int8 v4; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        v1 = *(v0 + 44);
        v2 = *(v0 + 5);
        object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0x100000);
        *v0 |= 2u;
        *(v0 + 16) = 0;
        *(v0 + 17) = -1;
        *(v0 + 32) = 37;
        *(v0 + 11) = 4;
    }
    v3 = *(v0 + 32);
    v4 = __OFSUB__(v3, 1);
    result = v3 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v4 )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80cfdf2
int __fastcall sub_80CFDF2(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    char v8; // [sp+8h] [bp-Ch]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(91, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, v8);
    return result;
}


// 0x80cfe08
BOOL __fastcall sub_80CFE08(int a1, int a2, int a3, int a4)
{
    Battle *v4; // r5
    int v5; // r0
    BOOL result; // r0
    char v7; // zf
    int v8; // [sp+0h] [bp-28h]
    int v9; // [sp+4h] [bp-24h]
    int v10; // [sp+8h] [bp-20h]
    char v11; // [sp+18h] [bp-10h]

    v9 = a3;
    v10 = a4;
    v5 = object_getFrontDirection(v4);
    v8 = v5 + v4->panelX;
    v11 = v5 + v4->panelX;
    result = object_isValidPanel(v8, v4->panelY);
    if ( !v7 )
        sub_80CFE5C(v8, v11, v9, v10);
    return result;
}


// 0x80cfe5c
int __fastcall __noreturn sub_80CFE5C(int a1, char a2, int a3, int a4)
{
    int v4; // r5
    int v6; // [sp+0h] [bp-34h]
    int v7; // [sp+4h] [bp-30h]
    int v8; // [sp+8h] [bp-2Ch]
    int v9; // [sp+Ch] [bp-28h]
    int v10; // [sp+18h] [bp-1Ch]
    int v11; // [sp+1Ch] [bp-18h]
    char v12; // [sp+20h] [bp-14h]

    v6 = a1;
    v12 = a2;
    v8 = a3;
    v9 = a4;
    v10 = *(&off_80CFEB8 + *(v4 + 22));
    v7 = 1;
    v11 = 0;
    do
    {
        if ( object_getPanelParameters(v6, v7) & v10 )
        {
            sub_80CFDF2(v12, v7, v8, v9);
            ++v11;
        }
        ++v7;
    }
    while ( v7 <= 3 );
    return v11;
}


// 0x80cfec4
int sub_80CFEC4()
{
    int v0; // r5

    return (*(&off_80CFED8 + *(v0 + 8)))();
}


// 0x80cfee4
int sub_80CFEE4()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r1
    int v4; // ST00_4
    int v5; // r0
    int v6; // r0
    _BYTE *v7; // r0
    int v8; // r0
    int v9; // r1

    if ( !battle_isBattleOver() )
    {
        if ( object_isCurrentPanelValid() )
        {
            sprite_load(v0, 128, 12, 47);
            sprite_loadAnimationData(v0);
            sprite_noShadow(v0);
            *(v0 + 16) = 0;
            *(v0 + 17) = -1;
            v1 = *(v0 + 19);
            v2 = object_getCoordinatesForPanels(*(v0 + 18));
            *(v0 + 56) = v3;
            v4 = v2;
            v5 = object_getFrontDirection(v0);
            *(v0 + 60) = 11796480;
            *(v0 + 52) = -11796480 * v5 + v4;
            v6 = object_getFlip(v0);
            sprite_setFlip(v0, v6);
            v7 = object_createCollisionData();
            if ( v7 )
            {
                object_setupCollisionData(v7, 28, 5, *(v0 + 4));
                v8 = object_clearCollisionRegion();
                object_presentCollisionData(v8, v9);
                *(v0 + 8) = 4;
                sub_80CFF62();
            }
        }
    }
    return object_freeMemory();
}


// 0x80cff62
void __noreturn sub_80CFF62()
{
    object_removeCollisionData();
    JUMPOUT(*byte_80CFF68);
}


// 0x80cffb0
signed int sub_80CFFB0()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 32) = 15;
    result = 4;
    *(v0 + 9) = 4;
    return result;
}


// 0x80cffbc
int sub_80CFFBC()
{
    Battle *v0; // r5
    __int64 v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // r1
    int v5; // r2
    int v6; // r1
    int v7; // r2
    int result; // r0

    LODWORD(v1) = v0->panelX;
    HIDWORD(v1) = v0->panelY;
    object_highlightPanel(v1);
    if ( v0->Timer == 7 )
    {
        v0->currAnimation = 0;
        v0->currAnimationCpy = -1;
        v0->objFlags |= 2u;
        SpawnT4BattleObjectWithId0(v0, &v0->vx, v0->x, v0->y, v0->z);
    }
    v2 = v0->Timer;
    v3 = __OFSUB__(v2--, 1);
    v0->Timer = v2;
    if ( (v2 < 0) ^ v3 )
    {
        v0->currAnimation = 1;
        object_setCollisionRegion(1);
        PlaySoundEffect(151, v4, v5);
        v0->currAction = 8;
        v0->Timer = 30;
        result = PlaySoundEffect(151, v6, v7);
    }
    else
    {
        result = object_getFrontDirection(v0);
        v0->z -= 786432;
        v0->x += 786432 * result;
    }
    return result;
}


// 0x80d0026
int sub_80D0026()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 32) == 28 )
        object_clearCollisionRegion();
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        *(v0 + 32) = 20;
        result = 12;
        *(v0 + 9) = 12;
    }
    return result;
}


// 0x80d0044
int sub_80D0044()
{
    unsigned __int8 *v0; // r5
    int v1; // r0
    int result; // r0

    v1 = *(v0 + 16) - 1;
    *(v0 + 16) = v1;
    if ( v1 )
    {
        if ( v1 & 2 )
            result = *v0 | 2;
        else
            result = *v0 & 0xFD;
        *v0 = result;
    }
    else
    {
        result = 8;
        *(v0 + 2) = 8;
    }
    return result;
}


// 0x80d006e
int __fastcall sub_80D006E(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(92, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 44) = v5;
    }
    return result;
}


// 0x80d008c
_BYTE *__fastcall sub_80D008C(char a1, int a2, int a3, int a4)
{
    _BYTE *result; // r0

    result = sub_80D006E(a1, a2, a3, a4);
    *result |= 0x10u;
    return result;
}


// 0x80d00a0
void sub_80D00A0()
{
    int v0; // r5

    (*(&off_80D00B8 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d00c4
signed int __noreturn sub_80D00C4()
{
    int v0; // r5
    u8 v1; // r0
    int v2; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 8, 14);
    sprite_hasShadow();
    *v0 |= 2u;
    v1 = *(&word_80D0130 + *(v0 + 5));
    *(v0 + 16) = v1;
    *(v0 + 17) = v1;
    sprite_setAnimation(v0, v1);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v2 = object_getFlip(v0);
    sprite_setFlip(v0, v2);
    *(v0 + 6) = 0;
    if ( !*(v0 + 5) )
    {
        --*(v0 + 56);
        --*(v0 + 60);
    }
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d0132
int sub_80D0132()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() || *(*(v0 + 76) + 9) != 10 )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        result = battle_isTimeStop();
        if ( v2 )
            result = (*(&off_80D0164 + *(v0 + 9)))();
    }
    return result;
}


// 0x80d0168
int __fastcall sub_80D0168(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0

    if ( *(v3 + 10) )
    {
        result = *(v3 + 32) - 1;
        *(v3 + 32) = result;
        if ( result == 15 )
        {
            result = *(v3 + 5);
            if ( !*(v3 + 5) )
            {
                sub_80D020E();
                result = *(*(v3 + 100) + 18);
                if ( result == *(v3 + 18) )
                {
                    result = 1;
                    *(v3 + 6) = 1;
                }
            }
        }
        else if ( result == 10 )
        {
            result = *(v3 + 5);
            if ( !*(v3 + 5) )
                result = PlaySoundEffect(384, a2, a3);
        }
        else if ( result <= 0 )
        {
            result = 8;
            *(v3 + 8) = 8;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        result = 20;
        *(v3 + 32) = 20;
    }
    return result;
}


// 0x80d01bc
int sub_80D01BC()
{
    sub_80D01FE();
    return object_genericDestroy();
}


// 0x80d01c8
int __fastcall sub_80D01C8(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-18h]
    char v9; // [sp+4h] [bp-14h]
    char v10; // [sp+8h] [bp-10h]
    int v11; // [sp+Ch] [bp-Ch]
    int v12; // [sp+10h] [bp-8h]

    v12 = a4;
    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(93, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *v6 = v4;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 100) = v12;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d01fe
int sub_80D01FE()
{
    int v0; // r5
    int *v1; // r1
    int result; // r0

    v1 = *(v0 + 96);
    result = *v1;
    if ( *v1 == v0 )
    {
        result = 0;
        *v1 = 0;
    }
    return result;
}


// 0x80d020e
int sub_80D020E()
{
    int v0; // r5
    int v1; // r6

    v1 = *(v0 + 44);
    return object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0x100000);
}


// 0x80d0230
void __fastcall sub_80D0230(int a1)
{
    int v1; // r5
    int v2; // r6
    int v3; // r1
    signed int v4; // r3
    int v5; // r4

    v2 = a1;
    v3 = *(v1 + 52) + 1310720 * object_getFrontDirection(v1);
    v4 = 1572864;
    if ( !*(v1 + 5) )
        v4 = -1572864;
    v5 = *(&dword_80D0264 + v2);
    SpawnT4BattleObjectWithId0(v1, *(v1 + 5), v3, *(v1 + 56) + v4, *(v1 + 60));
}


// 0x80d0268
void sub_80D0268()
{
    int v0; // r5

    (*(&off_80D0280 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d028c
signed int __noreturn sub_80D028C()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    sprite_load(v0, 128, 8, 14);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 62;
    *(v0 + 17) = 62;
    sprite_setAnimation(v0, 0x3Eu);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    object_reservePanel(*(v0 + 18), *(v0 + 19));
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d02d6
int sub_80D02D6()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() || *(*(v0 + 76) + 9) != 11 )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        result = battle_isTimeStop();
        if ( v2 )
            result = (*(&off_80D0308 + *(v0 + 9)))();
    }
    return result;
}


// 0x80d0310
int __fastcall sub_80D0310(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            *(v3 + 9) = 4;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        PlaySoundEffect(326, 4, a3);
        result = 11;
        *(v3 + 32) = 11;
    }
    return result;
}


// 0x80d033c
int sub_80D033C()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 32) = *(v0 + 4) - 10;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d035c
int __noreturn sub_80D035C()
{
    int v0; // r5

    object_removePanelReserve(*(v0 + 18), *(v0 + 19));
    return object_genericDestroy();
}


// 0x80d036c
int __fastcall sub_80D036C(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    char v8; // [sp+8h] [bp-Ch]
    int v9; // [sp+Ch] [bp-8h]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(94, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v6;
        *(v4 + 19) = v7;
        *(v4 + 14) = v8;
        *(v4 + 76) = v9;
        *(v4 + 22) = *(v9 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d0394
void sub_80D0394()
{
    int v0; // r5

    (*(&off_80D03AC + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d03b8
int __noreturn sub_80D03B8()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1
    int v6; // r1
    int v7; // r2

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    ++*(v0 + 58);
    ++*(v0 + 62);
    *(v0 + 64) = object_getFrontDirection(v0) * *&byte_80D0444[4 * *(v0 + 4)];
    sprite_load(v0, 128, 8, 14);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 63;
    *(v0 + 17) = 63;
    sprite_setAnimation(v0, 0x3Fu);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 4, 5, 3);
    v4 = object_setCollisionHitEffect(6);
    object_presentCollisionData(v4, v5);
    PlaySoundEffect(179, v6, v7);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d0454
void __noreturn sub_80D0454()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || *(*(v0 + 84) + 112) )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        v1 = battle_isTimeStop();
        if ( v3 )
            v1 = (*(&off_80D0494 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80d0498
signed int sub_80D0498()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 52) += *(v0 + 64);
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    if ( *(*(v0 + 84) + 112)
        || !(object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & 0x10)
        || (result = object_isCurrentPanelValid()) == 0 )
    {
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d04d2
int sub_80D04D2()
{
    return object_genericDestroy();
}


// 0x80d04da
int __fastcall sub_80D04DA(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(95, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d0500
void sub_80D0500()
{
    int v0; // r5

    (*(&off_80D0518 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d0524
signed int __noreturn sub_80D0524()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 16, 66);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d0566
int sub_80D0566()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        result = battle_isTimeStop();
        if ( v2 )
            result = (*(&off_80D058C + *(v0 + 9)))();
    }
    return result;
}


// 0x80d0590
int sub_80D0590()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 32) = 30;
        *(v0 + 34) = 12;
    }
    v1 = *(v0 + 34) + 1;
    *(v0 + 34) = v1;
    if ( v1 >= 12 )
    {
        sub_80D05EC();
        *(v0 + 34) = 0;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v3 )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d05c4
int __fastcall sub_80D05C4(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(96, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d05ec
int sub_80D05EC()
{
    int v0; // r5
    int v1; // r6

    v1 = *(v0 + 44);
    return object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
}


// 0x80d0610
void sub_80D0610()
{
    int v0; // r5

    (*(&off_80D0628 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80d0634
int sub_80D0634()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r0
    int v4; // r0
    int v5; // r0
    int v6; // r0
    _BYTE *v7; // r0
    char v9; // r3
    int v10; // r0
    int v11; // r1
    int v12; // r0
    int v13; // r0

    if ( object_isCurrentPanelValid() )
    {
        v1 = 12;
        v2 = 28;
        v3 = *(v0 + 4);
        if ( *(v0 + 4) && v3 != 2 && v3 != 3 && v3 != 4 && v3 != 5 )
        {
            v1 = 16;
            v2 = 50;
        }
        sprite_load(v0, 128, v1, v2);
        sprite_noShadow(v0);
        *v0 |= 2u;
        *(v0 + 16) = 0;
        *(v0 + 17) = 0;
        sprite_setAnimation(v0, 0);
        sprite_loadAnimationData(v0);
        sprite_setPallete(0);
        v4 = object_getFlip(v0);
        sprite_setFlip(v0, v4);
        *(v0 + 32) = *(v0 + 5);
        object_setCoordinatesFromPanels(v0);
        v5 = *(v0 + 4);
        if ( v5 == 4 || v5 == 5 )
        {
            v6 = object_getFrontDirection(v0);
            *(v0 + 52) = *(v0 + 52) + (v6 << 19) - 458752 * *(v0 + 7) * v6;
        }
        *(v0 + 56) += 0x20000;
        *(v0 + 60) += 0x20000;
        v7 = object_createCollisionData();
        if ( v7 )
        {
            v9 = 3;
            if ( *(v0 + 4) == 1 )
                v9 = 1;
            object_setupCollisionData(v7, 4, 5, v9);
            v10 = 1;
            if ( *(v0 + 4) == 1 )
                v10 = 3;
            object_setCollisionHitEffect(v10);
            v12 = *(v0 + 4);
            if ( v12 == 1 )
                v12 = object_setCollisionStatusEffect1(18);
            object_presentCollisionData(v12, v11);
            v13 = *(v0 + 4);
            if ( *(v0 + 4) && v13 != 2 && v13 != 3 && v13 != 4 && v13 != 5 )
                object_crackPanel(*(v0 + 18), *(v0 + 19));
            *(v0 + 8) = 4;
            sub_80D072C();
        }
    }
    return object_freeMemory();
}


// 0x80d072c
char *__noreturn sub_80D072C()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // r0
    __int64 v5; // r0
    char *result; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( *(*(v0 + 84) + 112) )
        object_clearCollisionRegion();
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    v4 = v2 - 1;
    *(v0 + 32) = v4;
    if ( ((v4 < 0) ^ v3) | (v4 == 0) )
    {
        object_clearCollisionRegion();
        result = &dword_8;
        *(v0 + 8) = 8;
    }
    else
    {
        object_presentCollisionData(v4, v1);
        sub_80D0766();
        LODWORD(v5) = *(v0 + 18);
        HIDWORD(v5) = *(v0 + 19);
        result = object_highlightPanel(v5);
    }
    return result;
}


// 0x80d0766
signed int sub_80D0766()
{
    int v0; // r5
    __int16 v1; // r0
    signed int result; // r0

    if ( !*(v0 + 9) && *(*(v0 + 76) + 9) != byte_80D0794[*(v0 + 4)] )
    {
        v1 = *(v0 + 6);
        *(v0 + 32) = v1;
        *(v0 + 9) = v1;
    }
    result = *(v0 + 32);
    if ( result == *(v0 + 6) )
    {
        result = 1;
        *(v0 + 16) = 1;
    }
    return result;
}


// 0x80d07a0
int __fastcall sub_80D07A0(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(97, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 44) = v5;
        *(v4 + 76) = v10;
    }
    return result;
}


// 0x80d07cc
void sub_80D07CC()
{
    int v0; // r5

    (*(&off_80D07F0 + *(v0 + 8)))();
    if ( *(v0 + 4) )
        object_updateSpriteTimestop();
    else
        object_updateSpritePaused();
}


// 0x80d07fc
int __noreturn sub_80D07FC()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 20;
    sprite_load(v0, 128, 16, 57);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 4, 5, 3);
    object_setCollisionHitEffect(255);
    v4 = object_clearCollisionRegion();
    object_presentCollisionData(v4, v5);
    *(v0 + 5) = 0;
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d0868
void __noreturn sub_80D0868()
{
    int v0; // r5
    char v1; // zf
    int v2; // r0
    int v3; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || *&byte_80D08C4[4 * *(v0 + 22)] & *(*(v0 + 84) + 112) )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else if ( *(v0 + 4) || (battle_isTimeStop(), v1) )
    {
        v2 = (*(&off_80D08B4 + *(v0 + 9)))();
        object_presentCollisionData(v2, v3);
    }
}


// 0x80d08cc
int sub_80D08CC()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int result; // r0

    if ( *(v0 + 10) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == *(v0 + 34) - 10 )
        {
            result = sub_80D0A5C();
        }
        else if ( result <= 0 )
        {
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        sub_80D0A5C();
        PlaySoundEffect(183, v1, v2);
        result = byte_80D0914[*(v0 + 4)];
        *(v0 + 32) = result;
        *(v0 + 34) = result;
    }
    return result;
}


// 0x80d0916
int __fastcall sub_80D0916(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    sub_80D0A80(a1, a2, a3);
    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( (result < 0) ^ v6 )
        {
            *(v3 + 9) = 8;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        *(v3 + 16) = 1;
        object_setCollisionRegion(1);
        result = byte_80D0950[*(v3 + 4)];
        *(v3 + 32) = result;
    }
    return result;
}


// 0x80d0952
int __fastcall sub_80D0952(int a1, int a2, int a3)
{
    Battle *v3; // r5
    int result; // r0

    if ( v3->currPhase )
    {
        v3->y += v3->vy;
        v3->x += v3->vx;
        object_setPanelsFromCoordinates(v3);
        object_updateCollisionPanels(v3);
        result = object_isCurrentPanelValid();
        if ( !result )
        {
            object_clearCollisionRegion();
            result = 8;
            v3->currState = 8;
        }
    }
    else
    {
        v3->currPhase = 4;
        PlaySoundEffect(179, 4, a3);
        result = sub_80D09BE();
    }
    return result;
}


// 0x80d0996
int __fastcall sub_80D0996(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(98, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d09be
int sub_80D09BE()
{
    int v0; // r5
    int v1; // r0
    int result; // r0

    if ( *(v0 + 5) )
    {
        v1 = object_getFrontDirection(v0);
        object_getFirstPanelInDirectionFiltered(
            *(v0 + 18) + v1,
            *(v0 + 19) + byte_80D0A48[0],
            *(&off_80D0A3C + *(v0 + 22)),
            0);
    }
    *(v0 + 68) = 0;
    result = object_getFrontDirection(v0) * *&byte_80D0A54[4 * *(v0 + 4)];
    *(v0 + 64) = result;
    return result;
}


// 0x80d0a5c
int sub_80D0A5C()
{
    int v0; // r5
    int result; // r0
    int v2; // r6

    result = *(v0 + 4);
    if ( !*(v0 + 4) )
    {
        v2 = *(v0 + 44);
        result = object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
    }
    return result;
}


// 0x80d0a80
int __fastcall sub_80D0A80(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0

    result = *(v3 + 4);
    if ( *(v3 + 4) )
    {
        result = *(v3 + 5);
        if ( !*(v3 + 5) )
        {
            result = *(*(*(v3 + 76) + 88) + 34);
            if ( result & 2 )
            {
                *(v3 + 5) = 1;
                result = PlaySoundEffect(139, 2, a3);
            }
        }
    }
    return result;
}


// 0x80d0aa8
int sub_80D0AA8()
{
    int v0; // r5

    return (*(&off_80D0ABC + *(v0 + 8)))();
}


// 0x80d0ac8
int sub_80D0AC8()
{
    int v0; // r5
    _BYTE *v1; // r0
    int v2; // r0
    int v3; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    v1 = object_createCollisionData();
    if ( v1 )
    {
        object_setupCollisionData(v1, 49, 65, 0);
        v2 = object_setCollisionHitEffect(255);
        object_presentCollisionData(v2, v3);
        *(v0 + 34) = 0;
        *(v0 + 100) = 0;
        *(v0 + 5) = 0;
        *(v0 + 8) = 4;
        sub_80D0B0E();
    }
    **(v0 + 96) = 0;
    return object_freeMemory();
}


// 0x80d0b0e
void __noreturn sub_80D0B0E()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        **(v0 + 96) = 0;
        *(v0 + 8) = 8;
    }
    else
    {
        v1 = battle_isTimeStop();
        if ( v3 )
            v1 = (*(&off_80D0B4C + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80d0b54
signed int sub_80D0B54()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    signed int result; // r0

    if ( *(v0 + 5) )
        sub_80D0C5C();
    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 32) = 46;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( ((v1 < 0) ^ v2) | (v1 == 0) )
    {
        if ( *(v0 + 5) )
        {
            *(v0 + 32) = *&byte_80D0BCC[2 * *(v0 + 4)];
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 10) = 0;
        }
        else
        {
            object_clearCollisionRegion();
            **(v0 + 96) = 0;
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        result = *(v0 + 84);
        if ( *(result + 112) & *(&off_80D0BC0 + *(v0 + 22)) )
        {
            object_clearCollisionRegion();
            result = 1;
            *(v0 + 5) = 1;
        }
    }
    return result;
}


// 0x80d0bd4
void sub_80D0BD4()
{
    int v0; // r5
    int v1; // r3
    int v2; // r2
    int v3; // r3
    int v4; // r0
    unsigned __int8 v5; // vf

    v1 = *(v0 + 104);
    v2 = *(v1 + 18);
    v3 = *(v1 + 19);
    if ( *(v0 + 18) != v2
        || *(v0 + 19) != v3
        || (v4 = *(v0 + 32), v5 = __OFSUB__(v4, 1), --v4, *(v0 + 32) = v4, (v4 < 0) ^ v5) )
    {
        sub_80D0C7C();
        **(v0 + 96) = 0;
        *(v0 + 8) = 8;
    }
    else
    {
        sub_80D0CE0();
        sub_80D0C5C();
        if ( !(*(v0 + 32) & 7) )
        {
            sub_80D0CB4();
            sub_80D0D28();
        }
    }
}


// 0x80d0c1c
int sub_80D0C1C()
{
    return object_genericDestroy();
}


// 0x80d0c24
int __fastcall sub_80D0C24(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r7
    int result; // r0
    char v7; // [sp+0h] [bp-18h]
    char v8; // [sp+4h] [bp-14h]
    char v9; // [sp+8h] [bp-10h]
    int v10; // [sp+Ch] [bp-Ch]
    int *v11; // [sp+10h] [bp-8h]

    v11 = a4;
    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(99, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 44) = 0;
        *(v4 + 104) = v5;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 96) = v11;
        *v11 = v4;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d0c5c
int sub_80D0C5C()
{
    int v0; // r5

    return object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
}


// 0x80d0c7c
int sub_80D0C7C()
{
    int v0; // r5
    int v1; // r7
    int v2; // r6

    v1 = *&byte_80D0CA4[4 * *(v0 + 4)];
    v2 = *(v0 + 46) << 16;
    return object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
}


// 0x80d0cb4
int sub_80D0CB4()
{
    int v0; // r5
    int v1; // r6

    v1 = *(&dword_80D0CDC + *(v0 + 4));
    return object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
}


// 0x80d0ce0
int sub_80D0CE0()
{
    int v0; // r5
    __int16 v1; // r0
    int result; // r0

    v1 = *(*(*(v0 + 104) + 88) + 36);
    if ( v1 & 0x40 || v1 & 0x80 || v1 & 0x20 || v1 & 0x10 )
        ++*(v0 + 100);
    result = *(v0 + 34) + 1;
    *(v0 + 34) = result;
    if ( result >= 30 )
    {
        if ( *(v0 + 100) >= 3 )
        {
            result = *(v0 + 32);
            if ( result <= 20 )
                return result;
            *(v0 + 32) = result - 20;
        }
        result = 0;
        *(v0 + 34) = 0;
        *(v0 + 100) = 0;
    }
    return result;
}


// 0x80d0d28
void sub_80D0D28()
{
    Battle *v0; // r5
    int v1; // r1
    int v2; // r6
    int v3; // r1
    int v4; // r7
    char v5; // r0
    char v6; // r2
    int v7; // r0
    char v8; // r0
    char v9; // r2
    int v10; // r0
    int v11; // [sp-8h] [bp-18h]

    v1 = v0->panelY;
    v2 = object_getCoordinatesForPanels(v0->panelX);
    v4 = v3;
    GetPositiveSignedRNG2();
    v6 = v5;
    v7 = (v5 & 0x1F) << 16;
    if ( !(v6 & 1) )
        v7 = -v7;
    v11 = v2 + v7;
    GetPositiveSignedRNG2();
    v9 = v8;
    v10 = (v8 & 0xF) << 16;
    if ( !(v9 & 1) )
        v10 = -v10;
    SpawnT4BattleObjectWithId0(v0, v10, v11, v4 + 0x100000, v10 + 2359296);
}


// 0x80d0d7c
void sub_80D0D7C()
{
    int v0; // r5

    (*(&off_80D0DA0 + *(v0 + 8)))();
    if ( *(v0 + 4) )
        object_updateSpriteTimestop();
    else
        object_updateSpritePaused();
}


// 0x80d0dac
int __noreturn sub_80D0DAC()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 255;
    sprite_load(v0, 128, 20, 20);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 10, 5, 3);
    object_setCollisionHitEffect(3);
    v4 = object_clearCollisionRegion();
    object_presentCollisionData(v4, v5);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d0e14
void __noreturn sub_80D0E14()
{
    int v0; // r5
    char v1; // zf
    int v2; // r0
    int v3; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        if ( *(v0 + 4) || (battle_isTimeStop(), v1) )
        {
            v2 = (*(&off_80D0E5C + *(v0 + 9)))();
            object_presentCollisionData(v2, v3);
        }
    }
}


// 0x80d0e64
int sub_80D0E64()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    __int64 v3; // r0
    int v4; // r0
    unsigned __int8 v5; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 34) + 1;
        *(v0 + 34) = v2;
        if ( !__CFSHR__(v2, 3) )
        {
            LODWORD(v3) = *(v0 + 18);
            HIDWORD(v3) = *(v0 + 19);
            object_highlightPanel(v3);
        }
        v4 = *(v0 + 32);
        v5 = __OFSUB__(v4, 1);
        result = v4 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v5) | (result == 0) )
        {
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 32) = 20;
        result = 0;
        *(v0 + 34) = 0;
    }
    return result;
}


// 0x80d0e9e
int sub_80D0E9E()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int result; // r0
    int v4; // r0
    unsigned __int8 v5; // vf
    int v6; // r0

    if ( *(v0 + 10) )
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        v4 = *(v0 + 34);
        v5 = __OFSUB__(v4--, 1);
        *(v0 + 34) = v4;
        if ( ((v4 < 0) ^ v5) | (v4 == 0) )
            object_clearCollisionRegion();
        v6 = *(v0 + 32);
        v5 = __OFSUB__(v6, 1);
        result = v6 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v5) | (result == 0) )
        {
            object_clearCollisionRegion();
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        object_setCollisionRegion(1);
        *(v0 + 62) = 0;
        *(v0 + 17) = -1;
        PlaySoundEffect(302, v1, v2);
        *(v0 + 32) = 30;
        *(v0 + 34) = 20;
        if ( !*(v0 + 4) )
            object_crackPanel(*(v0 + 18), *(v0 + 19));
        result = *(v0 + 4);
        if ( result == 2 )
            result = sub_80D0F32();
    }
    return result;
}


// 0x80d0f0c
int __fastcall sub_80D0F0C(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(100, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d0f32
_BYTE *sub_80D0F32()
{
    int v0; // r5
    int v1; // r6
    char *v2; // r1
    int v3; // ST00_4
    int v4; // r6
    _BYTE *result; // r0

    v1 = 0;
    do
    {
        v2 = &byte_80D0F74[2 * v1];
        v3 = v1;
        v4 = *(v0 + 44);
        result = sub_80C53A6(*(v0 + 18) + *v2, *(v0 + 19) + v2[1], *(v0 + 14), 0);
        v1 = v3 + 1;
    }
    while ( v3 + 1 < 8 );
    return result;
}


// 0x80d0f8c
void sub_80D0F8C()
{
    int v0; // r5

    (*(&off_80D0FA4 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d0fb0
int __noreturn sub_80D0FB0()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1
    __int16 v6; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 16711680;
    object_reservePanel(*(v0 + 18), *(v0 + 19));
    sprite_load(v0, 128, 16, 75);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 12, 13, 3);
    object_setCollisionHitEffect(6);
    v4 = object_clearCollisionRegion();
    object_presentCollisionData(v4, v5);
    v6 = *&byte_80D0F75[2 * *(v0 + 4) + 15];
    *(v0 + 36) = v6;
    *(v0 + 38) = v6;
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d102e
void __noreturn sub_80D102E()
{
    int v0; // r5
    signed int v1; // r0
    unsigned __int8 v2; // vf
    int v3; // r0
    int v4; // r1
    char v5; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || (v1 = sub_801156A(0), (v1 < 0) ^ v2) || *(*(v0 + 84) + 112) )
    {
        object_removePanelReserve(*(v0 + 18), *(v0 + 19));
        JUMPOUT(*byte_80D1070);
    }
    v3 = battle_isTimeStop();
    if ( v5 )
        v3 = (*(&off_80D1084 + *(v0 + 9)))();
    object_presentCollisionData(v3, v4);
}


// 0x80d1094
int sub_80D1094()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        result = *(v0 + 5);
        *(v0 + 32) = result;
    }
    return result;
}


// 0x80d10b8
int sub_80D10B8()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int result; // r0

    if ( *(v0 + 10) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 13 )
        {
            result = 1;
            *(v0 + 16) = 1;
        }
        else if ( result < 0 )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 0;
        *(v0 + 17) = -1;
        *(v0 + 60) = 0;
        sprite_hasShadow();
        object_setCollisionRegion(1);
        PlaySoundEffect(343, v1, v2);
        result = 10;
        *(v0 + 32) = 10;
    }
    return result;
}


// 0x80d1106
int sub_80D1106()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 2;
        object_removePanelReserve(*(v0 + 18), *(v0 + 19));
        result = 12;
        *(v0 + 32) = 12;
    }
    return result;
}


// 0x80d1136
int sub_80D1136()
{
    Battle *v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( v0->currPhase )
    {
        v0->x += v0->vx;
        object_setPanelsFromCoordinates(v0);
        object_updateCollisionPanels(v0);
        if ( !object_isCurrentPanelValid() )
            object_clearCollisionRegion();
        if ( v0->collisionData->collisionFlags
            || (v2 = v0->Timer, v3 = __OFSUB__(v2, 1), result = v2 - 1, v0->Timer = result, (result < 0) ^ v3) )
        {
            object_clearCollisionRegion();
            result = 8;
            v0->currState = 8;
        }
    }
    else
    {
        v0->currPhase = 4;
        v0->currAnimation = 3;
        result = sub_80D11B4();
    }
    return result;
}


// 0x80d1182
int __fastcall sub_80D1182(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(101, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
        sub_80D0FB0();
    }
    return result;
}


// 0x80d11b4
int sub_80D11B4()
{
    int v0; // r5
    signed int v1; // r0
    int v2; // r0
    int result; // r0

    *(v0 + 64) = object_getEnemyDirection() * *&byte_80D11EC[4 * *(v0 + 4)];
    v1 = 7;
    if ( *(v0 + 22) )
        v1 = 0;
    v2 = v1 - *(v0 + 18);
    if ( v2 < 0 )
        v2 = -v2;
    result = 2621440 * v2;
    __asm { SVC         6 }
    *(v0 + 32) = result;
    return result;
}


// 0x80d1218
void sub_80D1218()
{
    int v0; // r5

    (*(&off_80D1230 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d123c
int sub_80D123C()
{
    int v0; // r5
    _DWORD *v1; // r0

    v1 = *(v0 + 76);
    if ( v1 )
        *v1 = 0;
    return object_genericDestroy();
}


// 0x80d124e
void __noreturn sub_80D124E()
{
    Battle *v0; // r5

    object_setCoordinatesFromPanels(v0);
    sub_8011504(0x1034u, 0xC0D0100u);
}


// 0x80d12ca
void sub_80D12CA()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r0
    int v4; // r1
    int v5; // r0
    int v6; // r1
    char v7; // zf
    int v8; // r1
    int v9; // r2

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || !sub_80D146A() )
        goto LABEL_14;
    if ( *(v0 + 9) != 12 )
    {
        if ( sub_801156A(0) == -1 )
        {
            SpawnT4BattleObjectWithId0(v0, *(v0 + 4), *(v0 + 52), *(v0 + 56), (12 * *(v0 + 4) + 16) << 16);
            PlaySoundEffect(112, v1, v2);
            object_clearCollisionRegion();
            *(v0 + 32) = 20;
            goto LABEL_6;
        }
        if ( !(*(*(v0 + 84) + 112) & 0xF800000) )
        {
            v3 = *(v0 + 36);
            v4 = *(v0 + 104);
            *(v0 + 104) = v3;
            if ( v3 != v4 )
            {
                *(v0 + 32) = *(v0 + 5);
                *(v0 + 9) = 8;
                *(v0 + 10) = 0;
            }
            goto LABEL_10;
        }
LABEL_14:
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x100000);
        PlaySoundEffect(112, v8, v9);
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
        return;
    }
LABEL_6:
    *v0 &= 0xFDu;
    *(v0 + 9) = 12;
    *(v0 + 10) = 0;
LABEL_10:
    v5 = battle_isTimeStop();
    if ( v7 )
        v5 = (*(&off_80D1384 + *(v0 + 9)))();
    object_presentCollisionData(v5, v6);
}


// 0x80d1394
int sub_80D1394()
{
    int v0; // r5
    int v1; // r1
    int result; // r0
    int v3; // r0

    *(v0 + 52) += *(v0 + 64);
    *(v0 + 56) += *(v0 + 68);
    v1 = *(v0 + 72);
    *(v0 + 60) += v1;
    if ( *(v0 + 7) )
        *(v0 + 72) = v1 - 0x8000;
    result = *(v0 + 34) - 1;
    *(v0 + 34) = result;
    if ( !result )
    {
        object_setCoordinatesFromPanels(v0);
        object_updateCollisionPanels(v0);
        *(v0 + 60) = 0;
        v3 = 1;
        if ( *(v0 + 4) )
            v3 = 24;
        object_setCollisionRegion(v3);
        *(v0 + 9) = 4;
        *(v0 + 10) = 0;
        result = *(v0 + 7);
        if ( *(v0 + 7) )
        {
            result = 196608 * object_getFrontDirection(v0);
            *(v0 + 64) = result;
        }
    }
    return result;
}


// 0x80d13f6
signed int sub_80D13F6()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 52) += *(v0 + 64);
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    result = object_isCurrentPanelValid();
    if ( !result )
    {
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d141a
int sub_80D141A()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80d142c
int sub_80D142C()
{
    int v0; // r5
    int result; // r0

    *v0 &= 0xFDu;
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d1442
int __fastcall sub_80D1442(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(102, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 14) = v10;
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 76) = v6;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d146a
int sub_80D146A()
{
    int v0; // r5
    int result; // r0

    if ( !*(*(v0 + 84) + 1) )
        return 1;
    result = object_getPanelParameters(*(v0 + 18), *(v0 + 19)) & 0x10;
    if ( *(v0 + 4) )
        result |= object_getPanelParameters(*(v0 + 18), *(v0 + 19) - 1) & 0x10;
    return result;
}


// 0x80d149e
int sub_80D149E()
{
    int v0; // r5
    char v1; // r0
    int v2; // r1
    int v3; // r0
    int v4; // r1
    int result; // r0
    int v6; // r1
    int v7; // r2
    int v8; // r0

    if ( *(v0 + 7) )
    {
        v1 = object_getFrontDirection(v0) + *(v0 + 18);
        *(v0 + 18) = v1;
        v2 = *(v0 + 19);
        v3 = object_getCoordinatesForPanels(v1);
        *(v0 + 34) = 13;
        result = sub_8001330((v0 + 52), v3, v4);
        *(v0 + 64) = result;
        *(v0 + 68) = v6;
        *(v0 + 72) = v7;
    }
    else
    {
        *(v0 + 68) = 0;
        *(v0 + 64) = 114688 * object_getFrontDirection(v0);
        *(v0 + 72) = -131072;
        v8 = *(v0 + 60);
        __asm { SVC         6 }
        *(v0 + 34) = v8;
        result = *(v0 + 52) - v8 * *(v0 + 64);
        *(v0 + 52) = result;
    }
    return result;
}


// 0x80d1514
void sub_80D1514()
{
    int v0; // r5

    (*(&off_80D152C + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d1538
signed int __noreturn sub_80D1538()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    sprite_load(v0, 128, 16, 74);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    *(v0 + 100) = *&byte_80D1594[4 * *(v0 + 4)];
    *(v0 + 96) = 0;
    *(v0 + 5) = 0;
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d15a4
int sub_80D15A4()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() || *(*(v0 + 76) + 9) != 11 )
    {
        **(v0 + 104) = 0;
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        result = battle_isTimeStop();
        if ( v2 )
            result = (*(&off_80D15DC + *(v0 + 9)))();
    }
    return result;
}


// 0x80d15e4
char *sub_80D15E4()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    __int64 v3; // r0

    if ( *(v0 + 10) )
    {
        v1 = *(v0 + 32);
        v2 = __OFSUB__(v1--, 1);
        *(v0 + 32) = v1;
        if ( (v1 < 0) ^ v2 )
        {
            *(v0 + 9) = 4;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 32) = 5;
    }
    LODWORD(v3) = *(v0 + 18);
    HIDWORD(v3) = *(v0 + 19);
    return object_highlightPanel(v3);
}


// 0x80d1610
signed int sub_80D1610()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r1
    int v4; // r4
    int v5; // r1
    int v6; // r0
    int v7; // r3
    int v8; // r2
    int v9; // r6
    int v10; // r3
    __int64 v11; // r0
    signed int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 64) = object_getFrontDirection(v0) * *(v0 + 100);
        *(v0 + 68) = 0;
    }
    v1 = *(v0 + 19);
    v2 = object_getCoordinatesForPanels(*(v0 + 18));
    if ( *(v0 + 96) & 1 )
        v4 = v3;
    else
        v4 = v2;
    v5 = *(v0 + 52);
    v6 = *(v0 + 64) + v5;
    *(v0 + 52) = v6;
    v7 = *(v0 + 56);
    v8 = *(v0 + 68) + v7;
    *(v0 + 56) = v8;
    if ( *(v0 + 96) & 1 )
    {
        v9 = v7;
        v10 = v8;
    }
    else
    {
        v9 = v5;
        v10 = v6;
    }
    if ( v4 != v9 && sub_800E708(v10, v9, v4) )
    {
        object_setCoordinatesFromPanels(v0);
        sub_80D172C();
    }
    object_setPanelsFromCoordinates(v0);
    LODWORD(v11) = *(v0 + 18);
    HIDWORD(v11) = *(v0 + 19);
    object_highlightPanel(v11);
    if ( !*(v0 + 5) )
        sub_80D1700();
    result = object_isCurrentPanelValid();
    if ( !result )
    {
        **(v0 + 104) = 0;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d16d6
int __fastcall sub_80D16D6(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int *v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(103, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 104) = v5;
        *v5 = v4;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d1700
signed int __noreturn sub_80D1700()
{
    _BYTE *v0; // r5
    signed int v1; // r4

    v1 = 0;
    if ( object_getPanelParameters(v0[18], v0[19]) & *(&off_80D1724 + v0[22]) )
    {
        v1 = 1;
        v0[5] = 1;
    }
    return v1;
}


// 0x80d172c
int sub_80D172C()
{
    int v0; // r5
    int result; // r0
    char *v2; // r6
    int v3; // r1
    int v4; // r4
    int v5; // r6
    int v6; // r0

    result = *(v0 + 96);
    if ( result < 2 )
    {
        v2 = &byte_80D1774[8 * *(v0 + 22) + 4 * result];
        result = *v2;
        v3 = v2[1];
        v4 = v2[2];
        v5 = v2[3];
        if ( result == *(v0 + 18) && v3 == *(v0 + 19) )
        {
            v6 = *(v0 + 100);
            *(v0 + 64) = v4 * v6;
            *(v0 + 68) = v5 * v6;
            result = *(v0 + 96) + 1;
            *(v0 + 96) = result;
        }
    }
    return result;
}


// 0x80d1784
int sub_80D1784()
{
    int v0; // r5

    return object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
}


// 0x80d17a4
void sub_80D17A4()
{
    int v0; // r5

    (*(&off_80D17BC + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d17c8
int __noreturn sub_80D17C8()
{
    int v0; // r5
    u8 v1; // r0
    int v2; // r0
    _BYTE *v3; // r0
    int result; // r0
    int v5; // r0
    int v6; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = *(&dword_80D1854 + *(v0 + 4));
    *(v0 + 52) -= object_getFrontDirection(v0) << 19;
    sprite_load(v0, 128, 16, 81);
    sprite_noShadow(v0);
    *v0 |= 2u;
    v1 = *(&dword_80D185C + *(v0 + 4));
    *(v0 + 16) = v1;
    *(v0 + 17) = v1;
    sprite_setAnimation(v0, v1);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v2 = object_getFlip(v0);
    sprite_setFlip(v0, v2);
    v3 = object_createCollisionData();
    if ( !v3 )
        return object_freeMemory();
    object_setupCollisionData(v3, 22, 5, 1);
    object_setCollisionStatusEffect1(16);
    v5 = object_setCollisionHitEffect(3);
    object_presentCollisionData(v5, v6);
    *(v0 + 32) = *(v0 + 5);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d1860
void __noreturn sub_80D1860()
{
    int v0; // r5
    char *v1; // r0
    int v2; // r1
    char v3; // zf
    int v4; // r0
    unsigned __int8 v5; // vf
    __int64 v6; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( !battle_isBattleOver() )
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        if ( *(*(v0 + 76) + 9) == 11 )
        {
            v1 = battle_isTimeStop();
            if ( !v3 )
                goto LABEL_9;
            v4 = *(v0 + 32);
            v5 = __OFSUB__(v4--, 1);
            *(v0 + 32) = v4;
            if ( !(((v4 < 0) ^ v5) | (v4 == 0)) )
            {
                LODWORD(v6) = *(v0 + 18);
                HIDWORD(v6) = *(v0 + 19);
                v1 = object_highlightPanel(v6);
LABEL_9:
                object_presentCollisionData(v1, v2);
                return;
            }
        }
    }
    object_clearCollisionRegion();
    *(v0 + 8) = 8;
}


// 0x80d18ae
int __fastcall sub_80D18AE(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(104, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d18d8
int sub_80D18D8()
{
    int v0; // r5

    return (*(&off_80D18EC + *(v0 + 8)))();
}


// 0x80d18f8
int sub_80D18F8()
{
    int v0; // r5
    _DWORD *v1; // r4
    int v2; // r2
    int v3; // r3
    _DWORD *v4; // r0
    _BYTE *v5; // r0
    int result; // r0
    int v7; // r0
    int v8; // r1

    v1 = *(v0 + 76);
    v2 = v1[14];
    v3 = v1[15];
    v4 = (v0 + 52);
    *v4 = v1[13];
    v4[1] = v2;
    v4[2] = v3;
    object_setPanelsFromCoordinates(v0);
    v5 = object_createCollisionData();
    if ( !v5 )
        return object_freeMemory();
    object_setupCollisionData(v5, *(v0 + 96), *(v0 + 100), *(v0 + 4));
    v7 = object_setCollisionHitEffect(*(v0 + 5));
    object_presentCollisionData(v7, v8);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d1934
void __noreturn sub_80D1934()
{
    int v0; // r5
    int v1; // r4
    int v2; // r6
    _DWORD *v3; // r7
    int v4; // r2
    int v5; // r3
    _DWORD *v6; // r0
    int v7; // r1
    int v8; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || *(*(v0 + 76) + 9) != *(v0 + 104) )
        goto LABEL_11;
    if ( *&byte_80D19B8[4 * *(v0 + 22)] & *(*(v0 + 84) + 112) )
    {
        if ( !*(v0 + 6) )
        {
LABEL_11:
            object_clearCollisionRegion();
            *(v0 + 8) = 8;
            return;
        }
        object_clearCollisionRegion();
    }
    if ( !object_isValidPanel(*(v0 + 18), *(v0 + 19)) )
        goto LABEL_11;
    v1 = *(v0 + 18);
    v2 = *(v0 + 19);
    v3 = *(v0 + 76);
    v4 = v3[14];
    v5 = v3[15];
    v6 = (v0 + 52);
    *v6 = v3[13];
    v6[1] = v4;
    v6[2] = v5;
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    if ( *(v0 + 18) != v1 || (v8 = *(v0 + 19), v8 != v2) )
        v8 = object_setCollisionRegion(1);
    object_presentCollisionData(v8, v7);
}


// 0x80d19c0
int __noreturn sub_80D19C0()
{
    object_removeCollisionData();
    object_spawnCollisionEffect();
    object_clearCollisionRegion();
    return object_genericDestroy();
}


// 0x80d19d4
int __fastcall sub_80D19D4(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    int v7; // [sp+0h] [bp-14h]
    int v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(105, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 96) = v7;
        *(v4 + 100) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 76) = v10;
        *(v4 + 104) = *(v10 + 9);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d1a00
int __fastcall sub_80D1A00(int result)
{
    *(result + 8) = 8;
    return result;
}


// 0x80d1a08
int sub_80D1A08()
{
    int v0; // r5

    return (*(&off_80D1A1C + *(v0 + 8)))();
}


// 0x80d1a28
int sub_80D1A28()
{
    int v0; // r5
    _BYTE *v1; // r0
    int v3; // r0
    int v4; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 3145728;
    v1 = object_createCollisionData();
    if ( v1 )
    {
        object_setupCollisionData(v1, *(v0 + 5), *(v0 + 6), 3);
        object_setCollisionHitEffect(*(v0 + 7));
        v3 = object_clearCollisionRegion();
        object_presentCollisionData(v3, v4);
        *(v0 + 8) = 4;
        sub_80D1A64();
    }
    return object_freeMemory();
}


// 0x80d1a64
void __noreturn sub_80D1A64()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    sub_801A100();
    if ( battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        v1 = battle_isTimeStop();
        if ( v3 )
            v1 = (*(&off_80D1AA8 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80d1ab0
int sub_80D1AB0()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 32) = *(v0 + 4);
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80d1ad2
int sub_80D1AD2()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r1
    int v4; // r0
    unsigned __int8 v5; // vf
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        object_setCollisionRegion(1);
        object_getFlip(v0);
        v1 = *(v0 + 19);
        v2 = object_getCoordinatesForPanels(*(v0 + 18));
        SpawnT4BattleObjectWithId0(v0, v2, v2, v3, 0);
        object_breakPanel_dup3(*(v0 + 18), *(v0 + 19));
    }
    v4 = *(v0 + 32);
    v5 = __OFSUB__(v4, 1);
    result = v4 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v5) | (result == 0) )
    {
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d1b22
int __fastcall sub_80D1B22(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(106, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d1b48
int sub_80D1B48()
{
    int v0; // r5

    return (*(&off_80D1B5C + *(v0 + 8)))();
}


// 0x80d1b68
int sub_80D1B68()
{
    int v0; // r5
    _BYTE *v1; // r0
    int v3; // r0
    int v4; // r1

    v1 = object_createCollisionData();
    if ( v1 )
    {
        object_setupCollisionData(v1, 0, 24, 0);
        *(v0 + 14) = 0;
        v3 = object_setCollisionRegion(2);
        object_presentCollisionData(v3, v4);
        *(v0 + 8) = 4;
        sub_80D1B9A();
    }
    return object_freeMemory();
}


// 0x80d1b9a
void __noreturn sub_80D1B9A()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    int v3; // r1

    object_removeCollisionData();
    v1 = *(v0 + 4) - 1;
    *(v0 + 4) = v1;
    if ( !v1 )
        goto LABEL_8;
    v2 = *(*(v0 + 84) + 112);
    if ( v2 && v2 & *&byte_80D1BE8[4 * *(v0 + 22)] && !(v2 & 0x4000) )
    {
        **(v0 + 76) = 1;
LABEL_8:
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
        return;
    }
    if ( !battle_isBattleOver() )
        object_presentCollisionData(0, v3);
}


// 0x80d1bf4
int __fastcall sub_80D1BF4(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    int v6; // [sp+0h] [bp-10h]
    char v7; // [sp+4h] [bp-Ch]
    int v8; // [sp+8h] [bp-8h]

    v6 = a1;
    v7 = a2;
    object_spawnType3(107, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 76) = v6;
        *(v4 + 4) = v7;
        *(v4 + 22) = *(v8 + 22);
        *(v4 + 18) = *(v8 + 18);
    }
    return result;
}


// 0x80d1c20
void sub_80D1C20()
{
    int v0; // r5

    (*(&off_80D1C38 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d1c44
int sub_80D1C44()
{
    int v0; // r5

    --**(v0 + 76);
    **(v0 + 104) = 0;
    return object_genericDestroy();
}


// 0x80d1c5a
void __noreturn sub_80D1C5A()
{
    Battle *v0; // r5

    object_setCoordinatesFromPanels(v0);
    sub_8011504(0x1001031u, 0xC0D0000u);
}


// 0x80d1d14
int __noreturn sub_80D1D14()
{
    int v0; // r5
    int v1; // r7
    int v2; // r0
    int v3; // r0
    int v4; // r1
    char v5; // zf
    int result; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || !object_isCurrentPanelValid() )
        goto LABEL_13;
    v1 = *(v0 + 84);
    v2 = *(v1 + 112);
    if ( v2 )
    {
        if ( !*(v1 + 132) && !(v2 & 0x3800000) )
        {
            if ( v2 & 0xC000000 )
            {
                object_clearCollisionRegion();
                if ( *(v0 + 9) != 4 )
                {
                    *(v0 + 9) = 4;
                    *(v0 + 10) = 0;
                }
            }
            goto LABEL_9;
        }
LABEL_13:
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
        return result;
    }
LABEL_9:
    v3 = battle_isTimeStop();
    if ( v5 )
        v3 = (*(&off_80D1D84 + *(v0 + 9)))();
    object_presentCollisionData(v3, v4);
    return object_highlightCurrentCollisionPanels();
}


// 0x80d1d90
int sub_80D1D90()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( object_isCurrentPanelValid() )
    {
        if ( !*(v0 + 10) )
        {
            *(v0 + 10) = 1;
            *(v0 + 120) = *(v0 + 18) | 16 * *(v0 + 19);
            sub_80D1EF2();
            *(v0 + 32) = *(v0 + 34);
            object_setCoordinatesFromPanels(v0);
        }
        *(v0 + 52) += *(v0 + 64);
        *(v0 + 56) += *(v0 + 68);
        object_setPanelsFromCoordinates(v0);
        object_updateCollisionPanels(v0);
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
        result = 2;
        *(v0 + 9) = 2;
    }
    return result;
}


// 0x80d1dee
int sub_80D1DEE()
{
    int v0; // r5

    return (*(&off_80D1E00 + *(v0 + 10)))();
}


// 0x80d1e08
void __noreturn sub_80D1E08()
{
    unsigned __int8 *v0; // r5

    sub_80E7486(v0[18], v0[19], v0[22]);
}


// 0x80d1e32
int sub_80D1E32()
{
    int v0; // r5
    int v1; // r1
    char v2; // r0
    char v3; // r1
    int v4; // r0
    unsigned __int8 v5; // vf
    int result; // r0
    int v7; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 1;
        *(v0 + 32) = 5;
    }
    v1 = *(v0 + 116);
    if ( v1 )
    {
        v2 = *(v1 + 18);
        v3 = *(v1 + 19);
        *(v0 + 18) = v2;
        *(v0 + 19) = v3;
        object_setCoordinatesFromPanels(v0);
        object_updateCollisionPanels(v0);
    }
    v4 = *(v0 + 32);
    v5 = __OFSUB__(v4, 1);
    result = v4 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v5) | (result == 0) )
    {
        v7 = *(v0 + 34);
        v5 = __OFSUB__(v7--, 1);
        *(v0 + 34) = v7;
        if ( ((v7 < 0) ^ v5) | (v7 == 0) )
        {
            object_clearCollisionRegion();
            result = 8;
            *(v0 + 8) = 8;
        }
        else
        {
            object_setCollisionRegion(1);
            result = 0;
            *(v0 + 11) = 0;
        }
    }
    return result;
}


// 0x80d1e7e
int sub_80D1E7E()
{
    int v0; // r5
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 1;
        object_clearCollisionRegion();
        *(v0 + 32) = 10;
    }
    *v0 |= 2u;
    if ( !(*(v0 + 32) & 2) )
        *v0 &= 0xFDu;
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d1eb8
int __fastcall sub_80D1EB8(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-1Ch]
    char v9; // [sp+4h] [bp-18h]
    int v10; // [sp+8h] [bp-14h]
    int v11; // [sp+Ch] [bp-10h]
    int v12; // [sp+10h] [bp-Ch]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    v11 = a4;
    object_spawnType3(108, a2, a3, 0);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 104) = v10;
        *(v4 + 108) = v11;
        *(v4 + 44) = v5;
        *(v4 + 14) = 4;
        *(v4 + 22) = *(v12 + 22);
        *(v4 + 76) = v6;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d1ee8
int __fastcall sub_80D1EE8(int result)
{
    *(result + 9) = 8;
    *(result + 10) = 0;
    return result;
}


// 0x80d1ef2
unsigned int sub_80D1EF2()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    v1 = sub_80D1F0E();
    if ( *(v0 + 64) )
        sub_80D1FA0(v1);
    else
        sub_80D1F68(v1, v2);
    return sub_80D1FD8();
}


// 0x80d1f0e
int sub_80D1F0E()
{
    int v0; // r5
    int v1; // r2
    int *v2; // r0
    int v3; // r0
    int *v4; // r0
    int v6; // r1

    v1 = *(v0 + 5);
    if ( !*(v0 + 5) )
        goto LABEL_9;
    v2 = *(v0 + 108);
    if ( !v2 )
        goto LABEL_9;
    v3 = *v2;
    if ( !v3 )
    {
        if ( v1 != 1 && !*(v0 + 112) )
        {
            v4 = (*(v0 + 108) + 4);
            *(v0 + 108) = v4;
            v3 = *v4;
            if ( v3 )
            {
                *(v0 + 112) = 1;
                goto LABEL_10;
            }
        }
        *(v0 + 108) = 0;
LABEL_9:
        v3 = sub_80103F8(*(v0 + 22) ^ 1);
        v1 = 0;
    }
LABEL_10:
    if ( v1 == 2 && !*(v0 + 112) )
        return *(v3 + 120) & 7;
    v6 = *(v3 + 19);
    return *(v3 + 18);
}


// 0x80d1f68
void __fastcall sub_80D1F68(int a1, int a2)
{
    int v2; // r5
    int v3; // r2
    int v4; // r0
    unsigned __int8 v5; // nf
    unsigned __int8 v6; // vf
    signed int v7; // r3
    int v8; // r2

    v3 = *(v2 + 19);
    if ( *(v2 + 68) < 0 )
    {
        a2 = -a2;
        v3 = -v3;
    }
    if ( a2 <= v3 )
    {
        sub_80D200C();
        if ( v5 ^ v6 )
        {
            v7 = 1;
            v8 = *(v2 + 18);
            if ( v4 == v8 )
            {
                *(v2 + 68) = -*(v2 + 68);
            }
            else
            {
                if ( v4 <= v8 )
                    v7 = -1;
                *(v2 + 64) = *(v2 + 96) * v7;
                *(v2 + 68) = 0;
            }
        }
    }
}


// 0x80d1fa0
void __fastcall sub_80D1FA0(int result)
{
    int v1; // r5
    int v2; // r2
    int v3; // r1
    unsigned __int8 v4; // nf
    unsigned __int8 v5; // vf
    signed int v6; // r3
    int v7; // r2

    v2 = *(v1 + 18);
    if ( *(v1 + 64) < 0 )
    {
        result = -result;
        v2 = -v2;
    }
    if ( result <= v2 )
    {
        sub_80D200C();
        if ( v4 ^ v5 )
        {
            v6 = 1;
            v7 = *(v1 + 19);
            if ( v3 == v7 )
            {
                *(v1 + 64) = -*(v1 + 64);
            }
            else
            {
                if ( v3 <= v7 )
                    v6 = -1;
                *(v1 + 68) = *(v1 + 100) * v6;
                *(v1 + 64) = 0;
            }
        }
    }
}


// 0x80d1fd8
unsigned int sub_80D1FD8()
{
    int v0; // r5
    unsigned int result; // r0
    unsigned int v2; // r1
    int v3; // r0
    char v4; // r2

    result = object_getEnemyDirection();
    v2 = *(v0 + 64);
    if ( v2 || (v3 = sub_80103F8(*(v0 + 22) ^ 1), v2 = *(v0 + 18), (result = v2 - *(v3 + 18)) != 0) )
    {
        v4 = 0;
        if ( result >> 31 != v2 >> 31 )
            v4 = 1;
        *(v0 + 23) = v4;
        result = sub_800F2C6();
    }
    return result;
}


// 0x80d200c
void sub_80D200C()
{
    int v0; // r5

    ++*(v0 + 6);
}


// 0x80d2034
void sub_80D2034()
{
    int v0; // r5

    (*(&off_80D204C + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d2058
int __noreturn sub_80D2058()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v3; // r0
    int v4; // r1
    __int16 v5; // r0
    int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 8, 15);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 10;
    *(v0 + 17) = 10;
    sprite_setAnimation(v0, 0xAu);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 12, 13, 3);
    v3 = object_setCollisionHitEffect(6);
    object_presentCollisionData(v3, v4);
    v5 = *&byte_80D202C[2 * *(v0 + 4)];
    *(v0 + 36) = v5;
    *(v0 + 38) = v5;
    *(v0 + 100) = *&byte_80D20D8[4 * *(v0 + 4)];
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d20e8
void __noreturn sub_80D20E8()
{
    int v0; // r5
    signed int v1; // r0
    unsigned __int8 v2; // vf
    int v3; // r0
    int v4; // r1
    char v5; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver()
        || (v1 = object_applyDamage(0), (v1 < 0) ^ v2)
        || *&byte_80D2144[4 * *(v0 + 22)] & *(*(v0 + 84) + 112) )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        v3 = battle_isTimeStop();
        if ( v5 )
            v3 = (*(&off_80D2138 + *(v0 + 9)))();
        object_presentCollisionData(v3, v4);
    }
}


// 0x80d214c
int __fastcall sub_80D214C(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v3 + 10) )
    {
        v5 = *(v3 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v3 + 32) = result;
        if ( (result < 0) ^ v6 )
        {
            *(v3 + 9) = 4;
            result = 0;
            *(v3 + 10) = 0;
        }
    }
    else
    {
        *(v3 + 10) = 4;
        PlaySoundEffect(148, 4, a3);
        result = 30;
        *(v3 + 32) = 30;
    }
    return result;
}


// 0x80d2176
int __noreturn sub_80D2176()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r1
    int v4; // r4
    int v5; // r1
    int v6; // r0
    int v7; // r3
    int v8; // r2
    int v9; // r6
    int v10; // r3
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 16) = 11;
        *(v0 + 104) = 0;
        sub_80D2222();
    }
    v1 = *(v0 + 19);
    v2 = object_getCoordinatesForPanels(*(v0 + 18));
    if ( *(v0 + 104) )
        v4 = v2;
    else
        v4 = v3;
    v5 = *(v0 + 52);
    v6 = *(v0 + 64) + v5;
    *(v0 + 52) = v6;
    v7 = *(v0 + 56);
    v8 = *(v0 + 68) + v7;
    *(v0 + 56) = v8;
    if ( *(v0 + 104) )
    {
        v9 = v5;
        v10 = v6;
    }
    else
    {
        v9 = v7;
        v10 = v8;
    }
    if ( v4 != v9 && sub_800E708(v10, v9, v4) )
        sub_80D2222();
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    result = object_getPanelParameters(*(v0 + 18), *(v0 + 19));
    if ( !(result & 0x10) )
    {
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d21f8
int __fastcall sub_80D21F8(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(109, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *(v4 + 22) = *(v11 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d2222
int sub_80D2222()
{
    int v0; // r5
    int v1; // r4
    int v2; // r1
    int v3; // r2
    int v4; // r3
    int result; // r0

    v1 = object_getFrontDirection(v0);
    if ( *(v0 + 104)
        && (*(*(v0 + 96) + 18) - *(v0 + 18)) * v1 >= 0
        && (v2 = *(*(v0 + 96) + 19), v3 = *(v0 + 19), v2 != v3) )
    {
        v4 = *(v0 + 100);
        if ( v2 <= v3 )
            v4 = -v4;
        *(v0 + 68) = v4;
        *(v0 + 64) = 0;
        result = object_setCoordinatesFromPanels(v0);
        *(v0 + 104) = 0;
    }
    else
    {
        *(v0 + 64) = object_getFrontDirection(v0) * *(v0 + 100);
        *(v0 + 68) = 0;
        result = object_setCoordinatesFromPanels(v0);
        *(v0 + 104) = 1;
    }
    return result;
}


// 0x80d2290
int sub_80D2290()
{
    int v0; // r5

    return (*(&off_80D22A4 + *(v0 + 8)))();
}


// 0x80d22b0
void __noreturn sub_80D22B0()
{
    int v0; // r5
    _BYTE *v1; // r0
    int v2; // r0
    int v3; // r1

    sprite_load(v0, 128, 16, 8);
    *(v0 + 16) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    sprite_hasShadow();
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    *(v0 + 20) = *(v0 + 18);
    --*(v0 + 62);
    --*(v0 + 58);
    *(v0 + 40) = 206;
    *(v0 + 36) = 500;
    *(v0 + 38) = 500;
    *(v0 + 32) = 6000;
    v1 = object_createCollisionData();
    if ( v1 )
    {
        v2 = object_setupCollisionData(v1, 14, 15, 3);
        object_presentCollisionData(v2, v3);
        *(v0 + 8) = 4;
    }
    else
    {
        object_freeMemory();
    }
}


// 0x80d2320
void __noreturn sub_80D2320()
{
    _BYTE *v0; // r5
    int v1; // r0
    int v2; // r1

    *v0 |= 2u;
    sprite_clearFinalPalette();
    sub_801AD9E();
    v1 = sub_801B394(&jt_80D2348);
    object_presentCollisionData(v1, v2);
    object_updateSpriteTimestop();
}


// 0x80d236c
void sub_80D236C()
{
    int v0; // r5

    if ( battle_getFlags() & 1 )
    {
        *v0 &= 0xFBu;
        *v0 |= 2u;
        *(v0 + 9) = 8;
        *(v0 + 10) = 0;
    }
    else
    {
        nullsub_10();
    }
}


// 0x80d2398
void sub_80D2398()
{
    ;
}


// 0x80d239c
signed int __fastcall __noreturn sub_80D239C(int a1)
{
    int v1; // r5
    _DWORD *v2; // r0
    int v3; // r0
    signed int result; // r0
    int v5; // r1
    int v6; // r0
    int v7; // r1
    int v8; // r2
    int v9; // r3
    int v10; // r1
    int v11; // r0
    int v12; // r1
    int v13; // r2
    int v14; // r3

    sub_802EF5C(a1);
    object_clearCollisionRegion();
    object_removePanelReserve(*(v1 + 20), *(v1 + 21));
    v2 = *(v1 + 96);
    if ( v2 )
        *v2 = 0;
    v3 = object_getFlag2();
    if ( v3 & 0x8000 )
    {
        if ( v3 & 0x300000 )
        {
            sub_800F90E(5);
        }
        else
        {
            result = sub_800F8CE(v3);
            if ( !result )
                return result;
            if ( result != 1 )
                SpawnT4BattleObjectWithId0(v1, v1 + 64, *(v1 + 52), *(v1 + 56), *(v1 + 60) + 786432);
        }
    }
    else
    {
        v5 = *(v1 + 52);
        v6 = sub_801BDDE(0xFu);
        sub_80E47A4(v6, v7, v8, v9);
        v10 = *(v1 + 52);
        v11 = sub_801BDDE(0xFu);
        sub_80E47A4(v11, v12, v13, v14);
        SpawnT4BattleObjectWithId0(v1, v1 + 64, *(v1 + 52), *(v1 + 56), *(v1 + 60) + 0x100000);
    }
    object_clearCollisionRegion();
    result = 8;
    *(v1 + 8) = 8;
    return result;
}


// 0x80d2430
int __fastcall sub_80D2430(_BYTE *a1, int a2, int a3, int a4)
{
    char v4; // r4
    int v5; // r5
    int v6; // r6
    int v7; // r7
    int result; // r0
    _BYTE *v9; // [sp+0h] [bp-14h]
    char v10; // [sp+4h] [bp-10h]
    char v11; // [sp+8h] [bp-Ch]

    v9 = a1;
    v10 = a2;
    v11 = a3;
    object_spawnType3(110, a2, a3, a4);
    result = v5;
    if ( v5 )
    {
        *(v5 + 18) = v9;
        *(v5 + 19) = v10;
        *(v5 + 44) = v6;
        *(v5 + 14) = v11;
        *(v5 + 22) = v4;
        *(v5 + 96) = v7;
        *v5 = *v9 | 0x14;
    }
    return result;
}


// 0x80d2460
int sub_80D2460()
{
    int v0; // r5

    return (*(&jt_80D2474 + *(v0 + 8)))();
}


// 0x80d2480
int __noreturn sub_80D2480()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    int v3; // r0
    int v4; // r1
    int v5; // r2

    *v0 |= 2u;
    sprite_load(v0, 128, 12, 68);
    *(v0 + 16) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1 ^ 1);
    object_setCoordinatesFromPanels(v0);
    v2 = object_getFrontDirection(v0);
    *(v0 + 54) += v2 << 6;
    *(v0 + 64) = -524288 * v2;
    object_setPanelsFromCoordinates(v0);
    *(v0 + 32) = 8;
    v3 = *(v0 + 4);
    if ( *(v0 + 4) )
        v3 = 1;
    sprite_setPallete(v3);
    PlaySoundEffect(176, v4, v5);
    *(v0 + 8) = 4;
    return sub_80D24F0();
}


// 0x80d24f0
int sub_80D24F0()
{
    _BYTE *v0; // r5

    *v0 |= 2u;
    return (*(&off_80D250C + v0[9]))();
}


// 0x80d2514
int sub_80D2514()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // r1
    int v4; // r6
    int result; // r0

    v1 = *(v0 + 52) + *(v0 + 64);
    *(v0 + 52) = v1;
    v2 = *(v0 + 56);
    *(v0 + 18) = sub_800E258(v1);
    *(v0 + 19) = v3;
    if ( *(v0 + 32) == 2 )
    {
        v4 = *(v0 + 44);
        object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), *(v0 + 60));
    }
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        *(v0 + 32) = 20;
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80d255a
signed int sub_80D255A()
{
    int v0; // r5
    unsigned int v1; // r0
    signed int result; // r0
    unsigned __int8 v3; // cf

    v1 = *(v0 + 32) - 1;
    *(v0 + 32) = v1;
    if ( v1 )
    {
        v3 = __CFSHR__(v1, 2);
        result = v1 >> 2;
        if ( !v3 )
        {
            result = *v0 & 0xFD;
            *v0 = result;
        }
    }
    else
    {
        *v0 &= 0xFDu;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d2580
int __fastcall sub_80D2580(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    char v8; // [sp+8h] [bp-Ch]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(111, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, v8);
    return result;
}


// 0x80d2596
int __fastcall sub_80D2596(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // ST00_4
    int v6; // ST04_4
    int v7; // ST08_4

    v5 = -5 * (*(v4 + 22) ^ *(v4 + 23)) + 6;
    v6 = a3;
    v7 = a4;
    sub_80D2580(v5, 1, a3, a4);
    sub_80D2580(v5, 2, v6, v7);
    sub_80D2580(v5, 3, v6, v7);
    return v5;
}


// 0x80d25d4
void sub_80D25D4()
{
    int v0; // r5

    (*(&off_80D25EC + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d25f8
int __noreturn sub_80D25F8()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v3; // r0
    int v4; // r1
    int v5; // r0
    int v6; // r2
    int v7; // r3
    int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 8, 15);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 13;
    *(v0 + 17) = 13;
    sprite_setAnimation(v0, 0xDu);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    *(v0 + 44) = *(*(v0 + 76) + 44);
    v2 = object_createCollisionData();
    if ( v2 )
    {
        object_setupCollisionData(v2, 41, 20, 3);
        object_setCollisionHitEffect(6);
        v3 = object_clearCollisionRegion();
        object_presentCollisionData(v3, v4);
        v5 = *&byte_80D25CC[2 * *(v0 + 4)];
        *(v0 + 36) = v5;
        *(v0 + 38) = v5;
        *(v0 + 124) = sub_80E5B62(v5, byte_80D25CC, v6, v7);
        *(v0 + 80) = 0;
        result = 4;
        *(v0 + 8) = 4;
    }
    else
    {
        sub_80D2A58();
        result = object_freeMemory();
    }
    return result;
}


// 0x80d2684
void __noreturn sub_80D2684()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int v3; // r0
    int v4; // r1
    char v5; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || *(v0 + 80) )
        goto LABEL_12;
    if ( *(v0 + 9) != 16 && sub_801156A(1) )
    {
        v1 = *(v0 + 36);
        v2 = __OFSUB__(v1--, 1);
        *(v0 + 36) = v1;
        if ( ((v1 < 0) ^ v2) | (v1 == 0) )
        {
LABEL_12:
            sub_80D2A68();
            *(v0 + 8) = 8;
            return;
        }
        *(v0 + 9) = 12;
        *(v0 + 11) = 0;
    }
    if ( *&byte_80D270C[4 * *(v0 + 22)] & *(*(v0 + 84) + 112) )
        goto LABEL_12;
    v3 = battle_isTimeStop();
    if ( v5 )
        v3 = (*(&off_80D26F4 + *(v0 + 9)))();
    object_presentCollisionData(v3, v4);
}


// 0x80d2714
int sub_80D2714()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int result; // r0

    if ( *(v0 + 11) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 29 )
        {
            result = object_setCollisionRegion(1);
        }
        else if ( result <= 0 )
        {
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 11) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        sub_80D29F4();
        PlaySoundEffect(148, v1, v2);
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80d2750
int sub_80D2750()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 11) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        result = *(&dword_80D277C + *(v0 + 4));
        *(v0 + 32) = result;
    }
    return result;
}


// 0x80d2780
void __noreturn sub_80D2780()
{
    sub_80D29BA();
}


// 0x80d27a0
int __fastcall sub_80D27A0(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r0
    int result; // r0
    int v6; // r0
    unsigned __int8 v7; // vf

    if ( *(v3 + 11) )
    {
        v6 = *(v3 + 32);
        v7 = __OFSUB__(v6, 1);
        result = v6 - 1;
        *(v3 + 32) = result;
        if ( ((result < 0) ^ v7) | (result == 0) )
        {
            *(v3 + 5) = 0;
            *(v3 + 9) = 16;
            result = 0;
            *(v3 + 11) = 0;
        }
    }
    else
    {
        *(v3 + 11) = 4;
        *(v3 + 16) = 15;
        *(v3 + 17) = -1;
        PlaySoundEffect(133, 4, a3);
        v4 = *(v3 + 10) + 4;
        if ( v4 > 8 )
            LOBYTE(v4) = 0;
        *(v3 + 10) = v4;
        result = 24;
        *(v3 + 32) = 24;
    }
    return result;
}


// 0x80d27e2
signed int sub_80D27E2()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    signed int result; // r0

    if ( sub_801156A(1) && (v1 = *(v0 + 36), v2 = __OFSUB__(v1, 1), --v1, *(v0 + 36) = v1, ((v1 < 0) ^ v2) | (v1 == 0)) )
    {
        sub_80D2A68();
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        (*(&off_80D2820 + *(v0 + 10)))();
        result = *(v0 + 5);
        if ( *(v0 + 5) )
        {
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 11) = 0;
        }
    }
    return result;
}


// 0x80d282c
int __fastcall sub_80D282C(int a1, int a2, int a3)
{
    int v3; // r5
    char v4; // r0
    int v5; // r0
    unsigned __int8 v6; // vf
    int v7; // r0
    int result; // r0

    if ( !*(v3 + 11) )
    {
        *(v3 + 11) = 4;
        *(v3 + 16) = 16;
        *(v3 + 104) = 1;
        sub_80D2A14();
        v4 = object_getFrontDirection(v3);
        sub_80C5578(v4 + *(v3 + 18), *(v3 + 19), 1, 60);
        *(v3 + 32) = 60;
        *(v3 + 34) = 0;
    }
    v5 = *(v3 + 34);
    v6 = __OFSUB__(v5--, 1);
    *(v3 + 34) = v5;
    if ( ((v5 < 0) ^ v6) | (v5 == 0) )
    {
        PlaySoundEffect(299, a2, a3);
        *(v3 + 34) = 16;
    }
    v7 = *(v3 + 32);
    v6 = __OFSUB__(v7, 1);
    result = v7 - 1;
    *(v3 + 32) = result;
    if ( ((result < 0) ^ v6) | (result == 0) )
    {
        *(v3 + 104) = 0;
        result = 1;
        *(v3 + 5) = 1;
    }
    return result;
}


// 0x80d289e
int sub_80D289E()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 17;
        *(v0 + 34) = 0;
        *(v0 + 32) = 0;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        sub_80D2A14();
        v4 = object_getFrontDirection(v0);
        sub_80CBAB8((v4 + *(v0 + 18)) | 16 * *(v0 + 19), *(v0 + 124), 45875, v0 + 112 + 4 * *(v0 + 34));
        *(v0 + 32) = 60;
        result = *(v0 + 34) + 1;
        *(v0 + 34) = result;
        if ( result == 3 )
        {
            result = 1;
            *(v0 + 5) = 1;
        }
    }
    return result;
}


// 0x80d2904
int sub_80D2904()
{
    int v0; // r5
    int v1; // r1
    char v2; // r0
    int result; // r0
    int v4; // r0

    if ( *(v0 + 11) )
    {
        v4 = *(v0 + 34) + 1;
        *(v0 + 34) = v4;
        if ( !__CFSHR__(v4, 3) )
            object_highlightPanelRegion(*(v0 + 6), *(v0 + 7), 4, *(v0 + 22));
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 30 )
        {
            result = object_isValidPanel(*(v0 + 6), *(v0 + 7));
            if ( result )
            {
                sub_80D2A14();
                result = sub_80E4FCA(*(v0 + 6), *(v0 + 7), 16, 0);
            }
        }
        else
        {
            if ( result == 20 )
                object_crackPanel(*(v0 + 6), *(v0 + 7));
            if ( result <= 0 )
            {
                result = 1;
                *(v0 + 5) = 1;
            }
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 18;
        v1 = *(v0 + 96);
        v2 = *(v1 + 18);
        LOBYTE(v1) = *(v1 + 19);
        *(v0 + 6) = v2;
        *(v0 + 7) = v1;
        *(v0 + 32) = 60;
        result = 0;
        *(v0 + 34) = 0;
    }
    return result;
}


// 0x80d2986
int __fastcall sub_80D2986(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int *v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(112, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 100) = v5;
        *v5 = v4;
        *(v4 + 96) = v6;
        *(v4 + 22) = *(v11 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d29b2
int __fastcall sub_80D29B2(int result)
{
    *(result + 80) = 1;
    return result;
}


// 0x80d29ba
int __noreturn sub_80D29BA()
{
    int v0; // r5
    int v1; // ST00_4
    bool v2; // zf
    int result; // r0

    v1 = *(v0 + 18);
    v2 = object_checkPanelParameters(
                 v1,
                 *(*(v0 + 96) + 19),
                 *&byte_80D29E4[8 * *(v0 + 22)],
                 *&byte_80D29E4[8 * *(v0 + 22) + 4]) == 0;
    result = v1;
    if ( v2 )
        result = 0;
    return result;
}


// 0x80d29f4
int sub_80D29F4()
{
    int v0; // r5

    return object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
}


// 0x80d2a14
int sub_80D2A14()
{
    int v0; // r5

    return *&byte_80D2A34[2 * *(v0 + 10) + 2 * *(v0 + 4)] | (*&byte_80D2A50[2 * *(v0 + 4)] << 16);
}


// 0x80d2a58
int sub_80D2A58()
{
    int v0; // r5
    int *v1; // r1
    int result; // r0

    v1 = *(v0 + 100);
    result = *v1;
    if ( *v1 == v0 )
    {
        result = 0;
        *v1 = 0;
    }
    return result;
}


// 0x80d2a68
int sub_80D2A68()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2

    SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
    PlaySoundEffect(112, v1, v2);
    object_clearCollisionRegion();
    sub_80D2A58();
    *(v0 + 104) = 0;
    return sub_80E5B6E(*(v0 + 124));
}


// 0x80d2a94
int sub_80D2A94()
{
    int v0; // r5

    return (*(&off_80D2AA8 + *(v0 + 8)))();
}


// 0x80d2ab4
int __fastcall sub_80D2AB4(int a1, int a2)
{
    int v2; // r5
    int v3; // r4
    int v4; // r6
    _BYTE *v5; // r0
    _BYTE *v6; // r0
    int v8; // r1
    char v9; // r3

    if ( !*(v2 + 4) )
    {
        v3 = *(v2 + 4) + 1;
        v4 = *(v2 + 44);
        v5 = sub_80D2B8E(a1, a2, *(v2 + 14), *(v2 + 60));
        *v5 = *v5 & 0xEF | *v2 & 0x10;
    }
    v6 = object_createCollisionData();
    if ( v6 )
    {
        v8 = 6;
        if ( *(v2 + 4) )
            v8 = 74;
        v9 = 97;
        if ( *(v2 + 6) == 1 )
            v9 = 3;
        object_setupCollisionData(v6, v8, 5, v9);
        *(v2 + 34) = *(v2 + 5);
        *(v2 + 32) = 12;
        sub_80D2BC0();
        object_setCollisionRegion(1);
        object_setCollisionHitEffect(10);
        *(v2 + 8) = 4;
        sub_80D2B2C();
    }
    *(v2 + 104) = 0;
    return object_freeMemory();
}


// 0x80d2b2c
void __noreturn sub_80D2B2C()
{
    int v0; // r5
    _DWORD *v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // r0
    int v5; // r0
    int v6; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    v1 = *(v0 + 96);
    if ( v1 && *v1 != v0 )
        goto LABEL_15;
    if ( *(*(v0 + 84) + 112) )
    {
        object_clearCollisionRegion();
        camera_initShakeEffect_80302a8(0, 12);
    }
    v2 = *(v0 + 34);
    v3 = __OFSUB__(v2--, 1);
    *(v0 + 34) = v2;
    if ( (v2 < 0) ^ v3 )
    {
LABEL_15:
        object_clearCollisionRegion();
        *(v0 + 104) = 0;
        *(v0 + 8) = 8;
    }
    else
    {
        v4 = *(v0 + 32);
        v3 = __OFSUB__(v4--, 1);
        *(v0 + 32) = v4;
        if ( ((v4 < 0) ^ v3) | (v4 == 0) )
        {
            *(v0 + 32) = 12;
            if ( *(v0 + 6) != 1 )
                object_setCollisionRegion(1);
        }
    }
    v5 = sub_80D2BC0();
    object_presentCollisionData(v5, v6);
}


// 0x80d2b8e
int __fastcall sub_80D2B8E(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-Ch]
    int v9; // [sp+4h] [bp-8h]

    v8 = a3;
    object_spawnType3(113, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 14) = v8;
        *(v4 + 22) = *(v9 + 22);
        *(v4 + 76) = v9;
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        if ( v6 )
            *v6 = v4;
    }
    return result;
}


// 0x80d2bb2
_DWORD **__fastcall sub_80D2BB2(_DWORD **result)
{
    int v1; // r5

    if ( **result == v1 )
        **result = 0;
    return result;
}


// 0x80d2bc0
signed int sub_80D2BC0()
{
    Battle *v0; // r5
    char v1; // r0
    u32 *v2; // r2

    v1 = object_getFrontDirection(v0);
    v2 = v0->parent;
    v0->panelX = *(v2 + 18) + v1;
    v0->panelY = *(v2 + 19);
    object_setCoordinatesFromPanels(v0);
    return object_updateCollisionPanels(v0);
}


// 0x80d2bdc
void sub_80D2BDC()
{
    int v0; // r5

    (*(&off_80D2BF4 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80d2c00
int sub_80D2C00()
{
    int v0; // r5

    object_setCoordinatesFromPanels(v0);
    *(v0 + 8) = 4;
    return sub_80D2C10();
}


// 0x80d2c10
int sub_80D2C10()
{
    int v0; // r5

    return (*(&off_80D2C24 + *(v0 + 9)))();
}


// 0x80d2c28
int sub_80D2C28()
{
    int v0; // r5

    return (*(&off_80D2C3C + *(v0 + 10)))();
}


// 0x80d2c40
int sub_80D2C40()
{
    int v0; // r5
    int v1; // r0
    int result; // r0
    signed int v3; // r0
    int v4; // r1
    int v5; // r2
    int v6; // r3
    int v7; // r6
    signed int v8; // ST00_4
    _BYTE *v9; // r0
    signed __int16 v10; // r1

    v1 = *(v0 + 11);
    if ( v1 == 2 )
    {
LABEL_11:
        result = *(v0 + 100);
        if ( !result )
        {
            result = 8;
            *(v0 + 8) = 8;
        }
        return result;
    }
    if ( v1 != 1 )
    {
        *(v0 + 32) = 1;
        *(v0 + 6) = 6 - 5 * (*(v0 + 22) ^ *(v0 + 23));
        *(v0 + 7) = 1;
        *(v0 + 11) = 1;
    }
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        if ( object_isValidPanel(*(v0 + 6), *(v0 + 7)) )
        {
            v3 = sub_80D2CBE();
            if ( v3 != 255 )
            {
                v7 = *(v0 + 44);
                v8 = v3;
                v9 = sub_80D30A4(v3, v4, v5, v6);
                *v9 |= 0x10u;
                LOWORD(v7) = *(v0 + 6);
                result = sub_80D2CBE();
                *(v0 + 6) = v7;
                v10 = 8;
                if ( result != v8 )
                    v10 = 24;
                *(v0 + 32) = v10;
                return result;
            }
        }
        *(v0 + 11) = 2;
        goto LABEL_11;
    }
    return result;
}


// 0x80d2cbe
signed int sub_80D2CBE()
{
    int v0; // r5
    int v1; // r4
    int v2; // r0
    int v3; // r0
    signed int v5; // [sp+0h] [bp-14h]
    int v6; // [sp+4h] [bp-10h]
    int v7; // [sp+8h] [bp-Ch]

    v1 = -object_getFrontDirection(v0);
    v5 = 0;
    while ( !v5 )
    {
        if ( object_checkPanelParameters(
                     *(v0 + 6),
                     *(v0 + 7),
                     *&byte_80D2D30[8 * *(v0 + 22)],
                     *&byte_80D2D30[8 * *(v0 + 22) + 4]) )
        {
            v6 = *(v0 + 6);
            v7 = *(v0 + 7);
            v5 = 1;
        }
        v2 = *(v0 + 7) + 1;
        *(v0 + 7) = v2;
        if ( v2 > 3 )
        {
            *(v0 + 7) = 1;
            v3 = *(v0 + 6) + v1;
            *(v0 + 6) = v3;
            if ( (v3 + 1) > 7 )
            {
                if ( !v5 )
                    return 255;
                break;
            }
        }
    }
    sub_80D2D40(v6, v7);
    return v6;
}


// 0x80d2d40
int __fastcall sub_80D2D40(int a1, int a2)
{
    Battle *v2; // r5
    int v3; // r0
    int v4; // r4
    int v5; // r6
    int result; // r0
    int v7; // r0
    unsigned __int8 *v8; // r7
    unsigned int v9; // r0
    int v10; // r1
    int v11; // r2
    int v12; // r1
    int v13; // r2
    int v14; // [sp+0h] [bp-50h]
    int v15; // [sp+4h] [bp-4Ch]
    int v16; // [sp+8h] [bp-48h]
    int v17; // [sp+10h] [bp-40h]
    int v18; // [sp+28h] [bp-28h]
    int v19; // [sp+2Ch] [bp-24h]
    int v20; // [sp+30h] [bp-20h]
    int v21; // [sp+34h] [bp-1Ch]
    int v22; // [sp+38h] [bp-18h]
    int v23; // [sp+3Ch] [bp-14h]

    v14 = a1;
    v15 = a2;
    v3 = 8 * v2->Alliance;
    v20 = *&byte_80D2E28[v3];
    v21 = *&byte_80D2E28[v3 + 4];
    v4 = object_getFrontDirection(v2);
    v18 = v14 + v4;
    v5 = 0;
LABEL_2:
    v19 = 1;
    while ( 1 )
    {
        result = object_isValidPanel(v18, v19);
        if ( !result )
            break;
        v7 = object_getPanelParameters(v18, v19);
        if ( v7 & v20 )
            *(&v17 + v5++) = v18 | 16 * v19;
        if ( ++v19 > 3 )
        {
            v18 += v4;
            goto LABEL_2;
        }
    }
    if ( v5 )
    {
        v16 = 0;
        v22 = 0;
        v23 = 0;
        v8 = &v17;
        do
        {
            v9 = *v8;
            v18 = v9 & 7;
            v19 = v9 >> 4;
            if ( !v22 )
                goto LABEL_28;
            v10 = v19 - v15;
            if ( v19 - v15 < 0 )
                v10 = v15 - v19;
            v11 = v23 - v15;
            if ( v23 - v15 < 0 )
                v11 = v15 - v23;
            if ( v10 <= v11 )
            {
                if ( v10 < v11 )
                    goto LABEL_28;
                v12 = v18 - v14;
                if ( v18 - v14 < 0 )
                    v12 = v14 - v18;
                v13 = v22 - v14;
                if ( v22 - v14 < 0 )
                    v13 = v14 - v22;
                if ( v12 <= v13 && (v12 < v13 || v18 <= v23) )
                {
LABEL_28:
                    v22 = v18;
                    v23 = v19;
                }
            }
            ++v8;
            result = v16 + 1;
            v16 = result;
        }
        while ( result < v5 );
    }
    return result;
}


// 0x80d2e38
int sub_80D2E38()
{
    int v0; // r5
    int v1; // r10
    int v2; // t1
    u32 v3; // r0
    int v4; // r1
    int result; // r0

    v2 = *(v1 + oToolkit_S2034880_Ptr);
    v3 = sub_80103BC(*(v0 + 13) ^ 1);
    v4 = *(v3 + 56);
    result = sub_800E258(*(v3 + 52));
    *(v0 + 22);
    return result;
}


// 0x80d2e86
int sub_80D2E86()
{
    int v0; // r5

    **(v0 + 104) = 0;
    return object_freeMemory();
}


// 0x80d2e94
int __fastcall sub_80D2E94(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    int v10; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    object_spawnType3(114, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 44) = v5;
        *(v4 + 76) = v10;
        *(v4 + 104) = v6;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d2ebc
int sub_80D2EBC()
{
    int v0; // r5

    return (*(&off_80D2ED0 + *(v0 + 8)))();
}


// 0x80d2edc
void sub_80D2EDC()
{
    int v0; // r5
    int v1; // r1
    int v2; // r1
    int v3; // r0

    if ( object_isCurrentPanelValid() )
    {
        ++**(v0 + 104);
        v1 = *(v0 + 19);
        *(v0 + 52) = object_getCoordinatesForPanels(*(v0 + 18));
        *(v0 + 56) = v2;
        *(v0 + 60) = 0;
        *v0 |= 3u;
        sprite_load(v0, 128, 12, 44);
        sprite_noShadow(v0);
        *(v0 + 16) = 0;
        sprite_setAnimation(v0, 0);
        sprite_loadAnimationData(v0);
        v3 = object_getFlip(v0);
        sprite_setFlip(v0, v3);
        sub_80D3058();
        *(v0 + 8) = 4;
        sub_80D2F3C();
    }
    else
    {
        object_freeMemory();
    }
}


// 0x80d2f3c
void sub_80D2F3C()
{
    int v0; // r5

    if ( object_isCurrentPanelValid() )
    {
        (*(&off_80D2F60 + *(v0 + 9)))();
        object_updateSprite();
    }
    else
    {
        *(v0 + 8) = 8;
    }
}


// 0x80d2f70
signed int __fastcall sub_80D2F70(int a1, int a2, int a3)
{
    int v3; // r5
    signed int result; // r0

    if ( !*(v3 + 10) )
    {
        *(v3 + 72) = 0x20000;
        PlaySoundEffect(148, a2, a3);
        *(v3 + 10) = 4;
    }
    *(v3 + 60) += *(v3 + 72);
    result = *(v3 + 62);
    if ( result >= 10 )
    {
        *(v3 + 9) = 4;
        result = 0;
        *(v3 + 10) = 0;
    }
    return result;
}


// 0x80d2fa0
int sub_80D2FA0()
{
    int v0; // r5
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 32) = 20;
        *(v0 + 10) = 4;
    }
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        *(v0 + 9) = 8;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80d2fc2
int sub_80D2FC2()
{
    int v0; // r5

    return (*(&off_80D2FD4 + *(v0 + 10)))();
}


// 0x80d2fe0
signed int sub_80D2FE0()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 16) = 1;
    result = 4;
    *(v0 + 10) = 4;
    return result;
}


// 0x80d2fec
int sub_80D2FEC()
{
    int v0; // r5
    int result; // r0
    int v2; // r2

    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        PlaySoundEffect(179, 128, v2);
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80d3004
signed int sub_80D3004()
{
    int v0; // r5
    signed int result; // r0
    int v2; // r6

    *(v0 + 52) += *(v0 + 64);
    *(v0 + 56) += *(v0 + 68);
    object_setPanelsFromCoordinates(v0);
    result = *(v0 + 18);
    if ( result == *(v0 + 96) )
    {
        result = *(v0 + 19);
        if ( result == *(v0 + 100) )
        {
            v2 = *(v0 + 44);
            sub_80C53A6(*(v0 + 18), *(v0 + 19), 0, 0x80000);
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    return result;
}


// 0x80d3048
int sub_80D3048()
{
    int v0; // r5

    --**(v0 + 104);
    return object_freeMemory();
}


// 0x80d3058
int sub_80D3058()
{
    int v0; // r5
    int v1; // r1
    int v2; // r1
    int v3; // r0
    int result; // r0
    int v5; // r1
    int v6; // r1
    int v7; // r0
    int v8; // r1
    int v9; // r0
    int v10; // [sp+0h] [bp-14h]
    int v11; // [sp+4h] [bp-10h]

    v1 = *(v0 + 19);
    v10 = object_getCoordinatesForPanels(*(v0 + 18));
    v11 = v2;
    v3 = *(v0 + 96);
    if ( v3 == 255 )
    {
        result = object_getFrontDirection(v0) << 20;
        v5 = 0;
    }
    else
    {
        v6 = *(v0 + 100);
        v7 = object_getCoordinatesForPanels(v3);
        v9 = calcAngle_800117C(v8 - v11, v7 - v10);
        result = sub_80011A0(v9, 0x100000);
    }
    *(v0 + 64) = result;
    *(v0 + 68) = v5;
    return result;
}


// 0x80d30a4
int __fastcall sub_80D30A4(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-1Ch]
    char v9; // [sp+4h] [bp-18h]
    int v10; // [sp+8h] [bp-14h]
    int v11; // [sp+Ch] [bp-10h]
    int v12; // [sp+10h] [bp-Ch]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    v11 = a4;
    object_spawnType3(115, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 96) = v10;
        *(v4 + 100) = v11;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v12 + 22);
        *(v4 + 104) = v6;
    }
    return result;
}


// 0x80d30d0
void sub_80D30D0()
{
    int v0; // r5

    (*(&off_80D30E8 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d30f4
void __noreturn sub_80D30F4()
{
    Battle *v0; // r5

    object_setCoordinatesFromPanels(v0);
    sub_8011504(0x1001031u, 0x4050100u);
}


// 0x80d317c
void __noreturn sub_80D317C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    int v3; // r1
    char v4; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || !object_isCurrentPanelValid() )
        goto LABEL_12;
    v1 = *(*(v0 + 84) + 112);
    if ( v1 )
    {
        if ( !(v1 & 0xF3800000) )
        {
            if ( v1 & 0xC000000 )
            {
                object_clearCollisionRegion();
                if ( *(v0 + 9) != 4 )
                {
                    *(v0 + 9) = 4;
                    *(v0 + 10) = 0;
                }
            }
            goto LABEL_8;
        }
LABEL_12:
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
        return;
    }
LABEL_8:
    v2 = battle_isTimeStop();
    if ( v4 )
        v2 = (*(&off_80D31E0 + *(v0 + 9)))();
    object_presentCollisionData(v2, v3);
}


// 0x80d31ec
int sub_80D31EC()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( object_isCurrentPanelValid() )
    {
        if ( !*(v0 + 10) )
        {
            *(v0 + 10) = 1;
            sub_80D3326();
        }
        *(v0 + 52) += *(v0 + 64);
        *(v0 + 56) += *(v0 + 68);
        object_setPanelsFromCoordinates(v0);
        object_updateCollisionPanels(v0);
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
        result = 2;
        *(v0 + 9) = 2;
    }
    return result;
}


// 0x80d3240
int ho_80D3240()
{
    int v0; // r5

    return (*(&jt_80D3254 + *(v0 + 10)))();
}


// 0x80d325c
void __noreturn sub_80D325C()
{
    unsigned __int8 *v0; // r5

    sub_80E7486(v0[18], v0[19], v0[22]);
}


// 0x80d3278
int sub_80D3278()
{
    int v0; // r5
    int v1; // r1
    char v2; // r0
    char v3; // r1
    int v4; // r0
    unsigned __int8 v5; // vf
    int result; // r0
    int v7; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 1;
        *(v0 + 32) = 5;
    }
    v1 = *(v0 + 104);
    if ( v1 )
    {
        v2 = *(v1 + 18);
        v3 = *(v1 + 19);
        *(v0 + 18) = v2;
        *(v0 + 19) = v3;
        object_setCoordinatesFromPanels(v0);
        object_updateCollisionPanels(v0);
    }
    v4 = *(v0 + 32);
    v5 = __OFSUB__(v4, 1);
    result = v4 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v5) | (result == 0) )
    {
        v7 = *(v0 + 34);
        v5 = __OFSUB__(v7--, 1);
        *(v0 + 34) = v7;
        if ( ((v7 < 0) ^ v5) | (v7 == 0) )
        {
            object_clearCollisionRegion();
            result = 8;
            *(v0 + 8) = 8;
        }
        else
        {
            object_setCollisionRegion(1);
            result = 0;
            *(v0 + 11) = 0;
        }
    }
    return result;
}


// 0x80d32c4
int sub_80D32C4()
{
    int v0; // r5
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 1;
        object_clearCollisionRegion();
        *(v0 + 32) = 10;
    }
    *v0 |= 2u;
    if ( !(*(v0 + 32) & 2) )
        *v0 &= 0xFDu;
    result = *(v0 + 32) - 1;
    *(v0 + 32) = result;
    if ( !result )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d32fe
int __fastcall sub_80D32FE(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-18h]
    char v8; // [sp+4h] [bp-14h]
    char v9; // [sp+8h] [bp-10h]
    int v10; // [sp+Ch] [bp-Ch]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(116, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 76) = v10;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d3326
void __noreturn sub_80D3326()
{
    sub_80D3342();
}


// 0x80d3342
void __noreturn sub_80D3342()
{
    Battle *v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r2

    v1 = object_getFrontDirection(v0);
    sub_80D3374(*(v0->parent + 18) + v1, v2, v3);
}


// 0x80d3374
unsigned int __fastcall __noreturn sub_80D3374(signed int a1, int a2, int a3)
{
    int v3; // r4
    int v4; // r5
    int v5; // r6
    int v6; // r0
    int v7; // r1
    int v8; // r2
    int v9; // r3
    int v10; // r0
    int v12; // r4
    unsigned int v13; // r6
    _BYTE *i; // r7
    unsigned int v15; // r0
    int v16; // r1
    int v17; // r0
    int v18; // [sp+0h] [bp-14h]

    v5 = a1;
    while ( 1 )
    {
        sub_81096FA(v5, a2, a3, &off_80D33F4);
        v10 = object_getPanelsInColumnFiltered(v6, v7, v8, v9);
        if ( v10 )
            break;
        v5 += v3;
        if ( v5 < 1 || v5 > 6 )
            return 0;
    }
    *(&v18 + v10) = 0;
    v12 = *(v4 + 19);
    v13 = v18;
    for ( i = &v18 + 1; ; ++i )
    {
        v15 = *i;
        if ( !*i )
            break;
        if ( v15 >> 4 == v12 )
            goto LABEL_21;
        v16 = (v15 >> 4) - v12;
        if ( v16 < 0 )
            v16 = v12 - (v15 >> 4);
        v17 = (v13 >> 4) - v12;
        if ( v17 < 0 )
            v17 = v12 - (v13 >> 4);
        if ( v16 <= v17 && (v16 < v17 || (*i >> 4) < (v13 >> 4)) )
LABEL_21:
            v13 = *i;
    }
    return v13 & 7;
}


// 0x80d3404
void __fastcall sub_80D3404(int a1, int a2)
{
    int v2; // r5
    int v3; // r2
    int v4; // r0
    unsigned __int8 v5; // nf
    unsigned __int8 v6; // vf
    signed int v7; // r3
    int v8; // r2

    v3 = *(v2 + 19);
    if ( *(v2 + 68) < 0 )
    {
        a2 = -a2;
        v3 = -v3;
    }
    if ( a2 <= v3 )
    {
        sub_80D3496();
        if ( v5 ^ v6 )
        {
            v7 = 1;
            v8 = *(v2 + 18);
            if ( v4 == v8 )
            {
                *(v2 + 68) = -*(v2 + 68);
            }
            else
            {
                if ( v4 <= v8 )
                    v7 = -1;
                *(v2 + 64) = *(v2 + 96) * v7;
                *(v2 + 68) = 0;
            }
        }
    }
}


// 0x80d343c
void __fastcall sub_80D343C(int result)
{
    int v1; // r5
    int v2; // r2
    int v3; // r1
    unsigned __int8 v4; // nf
    unsigned __int8 v5; // vf
    signed int v6; // r3
    int v7; // r2

    v2 = *(v1 + 18);
    if ( *(v1 + 64) < 0 )
    {
        result = -result;
        v2 = -v2;
    }
    if ( result <= v2 )
    {
        sub_80D3496();
        if ( v4 ^ v5 )
        {
            v6 = 1;
            v7 = *(v1 + 19);
            if ( v3 == v7 )
            {
                *(v1 + 64) = -*(v1 + 64);
            }
            else
            {
                if ( v3 <= v7 )
                    v6 = -1;
                *(v1 + 68) = *(v1 + 100) * v6;
                *(v1 + 64) = 0;
            }
        }
    }
}


// 0x80d3474
AI *sub_80D3474()
{
    int v0; // r5
    AI *result; // r0
    unsigned int v2; // r1
    char v3; // r2

    result = object_getEnemyDirection();
    v2 = *(v0 + 64);
    if ( v2 )
    {
        v3 = 0;
        if ( result >> 31 != v2 >> 31 )
            v3 = 1;
        *(v0 + 23) = v3;
        result = sub_800F2C6();
    }
    return result;
}


// 0x80d3496
void sub_80D3496()
{
    int v0; // r5

    ++*(v0 + 6);
}


// 0x80d34cc
int sub_80D34CC()
{
    int v0; // r5

    return (*(&off_80D34E0 + *(v0 + 8)))();
}


// 0x80d34ec
int sub_80D34EC()
{
    int v0; // r5

    sub_80B8A0A(*(v0 + 76));
    sub_80C4072(*(v0 + 108));
    return object_genericDestroy();
}


// 0x80d3500
void __noreturn sub_80D3500()
{
    int v0; // r5
    int v1; // r0
    char *v2; // r0
    __int16 v3; // r1
    _BYTE *v4; // r0
    int v5; // r0
    int v6; // r1
    int v7; // r0
    int v8; // r1
    int v9; // r2

    *v0 |= 2u;
    sprite_load(v0, 128, 4, 24);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    *(v0 + 20) = *(v0 + 18);
    *(v0 + 40) = 231;
    v2 = &byte_80D34C0[4 * *(v0 + 4)];
    *(v0 + 96) = v2;
    v3 = v2[3];
    *(v0 + 36) = v3;
    *(v0 + 38) = v3;
    *(v0 + 32) = 2 * *v2;
    sprite_setPallete(v2[2]);
    v4 = object_createCollisionData();
    if ( v4 )
    {
        v5 = object_setupCollisionData(v4, 19, 20, 3);
        object_presentCollisionData(v5, v6);
        *(v0 + 76) = sub_80B89DC(v7, v8, v9, 0);
        *(v0 + 8) = 4;
        sub_80D358C();
    }
    object_freeMemory();
}


// 0x80d358c
void __noreturn sub_80D358C()
{
    _BYTE *v0; // r5
    int v1; // r0
    int v2; // r1

    *v0 |= 2u;
    sprite_clearFinalPalette();
    sub_801AD12();
    sub_800F672();
    sub_801B394(&off_80D35B8);
    object_updateSprite();
    object_presentCollisionData(v1, v2);
}


// 0x80d35e0
int __fastcall sub_80D35E0(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0

    *(v3 + 16) = 0;
    *(v3 + 16) = 0;
    *(v3 + 34) = 10;
    PlaySoundEffect(148, a2, a3);
    *(v3 + 9) = 8;
    result = 0;
    *(v3 + 10) = 0;
    return result;
}


// 0x80d3620
signed int __fastcall sub_80D3620(int a1, int a2, int a3)
{
    int v3; // r5
    signed int result; // r0

    *(v3 + 16) = 1;
    *(v3 + 34) = 30;
    PlaySoundEffect(425, a2, a3);
    result = 4;
    *(v3 + 10) = 4;
    return result;
}


// 0x80d3638
int sub_80D3638()
{
    int v0; // r5
    int result; // r0

    *(v0 + 60) += 40960;
    result = *(v0 + 34) - 1;
    *(v0 + 34) = result;
    if ( !result )
    {
        *(v0 + 9) = 9;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80d3654
int sub_80D3654()
{
    int v0; // r5
    int result; // r0

    result = battle_isTimeStop();
    if ( !result )
        result = (*(&off_80D3670 + *(v0 + 10)))();
    return result;
}


// 0x80d3678
signed int sub_80D3678()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 16) = 2;
    *(v0 + 34) = *(*(v0 + 96) + 1);
    *(v0 + 100) = 1;
    *(v0 + 108) = sub_80C4038(0, 0, 1, 0);
    result = 4;
    *(v0 + 10) = 4;
    return result;
}


// 0x80d369e
int sub_80D369E()
{
    int v0; // r5
    int result; // r0

    if ( battle_isBattleOver() )
    {
        *(v0 + 9) = 2;
        result = 0;
        *(v0 + 10) = 0;
    }
    else
    {
        result = *(v0 + 100) - 1;
        *(v0 + 100) = result;
        if ( !result )
        {
            result = *(v0 + 34);
            if ( *(v0 + 34) )
            {
                *(v0 + 34) = result - 1;
                sub_80D3770();
                result = 10;
                *(v0 + 100) = 10;
            }
        }
    }
    return result;
}


// 0x80d36ce
int sub_80D36CE()
{
    int v0; // r5
    int v1; // r0
    int v2; // r2
    int result; // r0

    v1 = object_getFlag2();
    if ( v1 & 0x8000 )
    {
        if ( v1 & 0x300000 )
        {
            result = sub_800F90E(6);
        }
        else
        {
            result = sub_800F8CE(v1);
            if ( !result )
                return result;
            if ( result != 1 )
                SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 786432);
        }
    }
    else
    {
        PlaySoundEffect(112, 0x8000, v2);
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 1310720);
    }
    sub_802EF5C(result);
    sub_800F656();
    object_clearCollisionRegion();
    object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    *v0 &= 0xFDu;
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80d3742
int __fastcall sub_80D3742(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    __int16 v7; // r3
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    int v10; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    object_spawnType3(117, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 44) = v5;
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        v7 = *(v10 + 22);
        *(v4 + 22) = v7;
        *v4 |= 0x10u;
        result = sub_800F614(v4, v7, 1);
    }
    return result;
}


// 0x80d3770
int sub_80D3770()
{
    int v0; // r5
    int v1; // r6
    int v2; // r0
    int v3; // r1
    int v4; // r0
    unsigned int v5; // ST00_4
    char v6; // r0
    int v7; // r2
    int v8; // r6
    int v9; // r0
    int v10; // r1
    int v11; // r2
    int v12; // r3
    int v13; // r6
    int v15; // [sp+0h] [bp-20h]

    v1 = sub_80D37F4();
    if ( v1 )
    {
        v4 = *(v0 + 104);
        if ( v4 >= v1 )
            v4 = 0;
        *(v0 + 104) = v4 + 1;
        v5 = *(&v15 + v4);
        GetPositiveSignedRNG2();
        v7 = v6 & 7;
        v3 = v5 >> 4;
        v2 = v5 & 7;
        if ( v7 == 1 || v7 == 5 )
        {
            sub_81096FA(v2, v3, v7, byte_80D37E4);
            v8 = *(v0 + 22);
            LOBYTE(v2) = sub_8015E46(v9, v10, v11, v12);
        }
    }
    else
    {
        v2 = (5 * (*(v0 + 22) ^ 1) + 1);
        v3 = *(v0 + 19);
    }
    v13 = *(v0 + 44);
    return sub_80C5F2C(v2, v3, 0, 0);
}


// 0x80d37f4
int sub_80D37F4()
{
    Battle *v0; // r5
    int v1; // r7
    int v2; // r0
    int v3; // r2
    int v4; // r4
    int v5; // r6
    int v6; // r1
    int v7; // r0
    int v8; // ST00_4
    int v9; // r0
    int v10; // r1
    int v11; // r2
    int v12; // r3
    int v13; // r0

    v2 = object_getFrontDirection(v0);
    v4 = v2;
    v5 = 0;
    v6 = v0->panelX;
    v7 = v2 + v6;
    if ( v7 )
    {
        do
        {
            v8 = v7;
            sub_81096FA(v7, v6, v3, &off_80D3834);
            v13 = object_getPanelsInColumnFiltered(v9, v10, v11, v12);
            v5 += v13;
            v1 += v13;
            v7 = v8 + v4;
        }
        while ( v8 + v4 && v7 <= 6 );
    }
    return v5;
}


// 0x80d385c
int sub_80D385C()
{
    int v0; // r5

    return (*(&off_80D386C + *(v0 + 8)))();
}


// 0x80d387c
int sub_80D387C()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v3; // r0
    int v4; // r1
    int v5; // r1
    int v6; // r2

    if ( object_isCurrentPanelValid() )
    {
        *v0 |= 3u;
        sprite_load(v0, 128, 16, 46);
        sprite_noShadow(v0);
        *(v0 + 16) = 0;
        *(v0 + 17) = 0;
        sprite_setAnimation(v0, 0);
        sprite_loadAnimationData(v0);
        v1 = object_getFlip(v0);
        sprite_setFlip(v0, v1);
        object_setCoordinatesFromPanels(v0);
        *(v0 + 60) = 0;
        *(v0 + 52) += 1310720 * object_getFrontDirection(v0);
        sprite_setPallete(0);
        v2 = object_createCollisionData();
        if ( v2 )
        {
            object_setupCollisionData(v2, 4, 5, 1);
            object_setCollisionHitEffect(255);
            *(v0 + 34) = *(v0 + 5);
            v3 = object_setCollisionRegion(2);
            object_presentCollisionData(v3, v4);
            PlaySoundEffect(184, v5, v6);
            *(v0 + 8) = 4;
            sub_80D390A();
        }
    }
    return object_freeMemory();
}


// 0x80d390a
void __noreturn sub_80D390A()
{
    int v0; // r5
    char v1; // zf
    int v2; // r0
    int v3; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    battle_isBattleOver();
    if ( v1 )
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        sub_80D3946();
        object_updateSprite();
        object_presentCollisionData(v2, v3);
    }
    else
    {
        *v0 &= 0xFDu;
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
}


// 0x80d3946
int sub_80D3946()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int result; // r0

    if ( *(v0 + 32) == *(v0 + 4) - 6 )
        *(v0 + 16) = 1;
    if ( *(v0 + 32) == 8 )
        *(v0 + 16) = 2;
    v1 = *(v0 + 32) - 1;
    *(v0 + 32) = v1;
    if ( v1 )
    {
        v2 = *(v0 + 34);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 34) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 34) = *(v0 + 5);
            result = object_setCollisionRegion(2);
        }
    }
    else
    {
        object_clearCollisionRegion();
        *v0 &= 0xFDu;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d398e
int __fastcall sub_80D398E(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(118, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 14) = v9;
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 32) = *(v4 + 4);
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
    }
    return result;
}


// 0x80d39bc
void sub_80D39BC()
{
    int v0; // r5

    (*(&off_80D39D4 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d39e0
int __noreturn sub_80D39E0()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v3; // r0
    int v4; // r1
    __int16 v5; // r0
    int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sprite_load(v0, 128, 8, 15);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 19;
    *(v0 + 17) = 19;
    sprite_setAnimation(v0, 0x13u);
    sprite_loadAnimationData(v0);
    sprite_setPallete(4 * *(v0 + 5));
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( v2 )
    {
        object_setupCollisionData(v2, 19, 20, 3);
        v3 = object_setCollisionHitEffect(6);
        object_presentCollisionData(v3, v4);
        v5 = *&byte_80D39B4[2 * *(v0 + 4)];
        *(v0 + 36) = v5;
        *(v0 + 38) = v5;
        *(v0 + 104) = *&byte_80D3A68[4 * *(v0 + 4)];
        *(v0 + 7) = 0;
        result = 4;
        *(v0 + 8) = 4;
    }
    else
    {
        sub_80D3F32();
        result = object_freeMemory();
    }
    return result;
}


// 0x80d3a7c
void __noreturn sub_80D3A7C()
{
    int v0; // r5
    signed int v1; // r4
    signed int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // r0
    int v5; // r1
    char v6; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
        goto LABEL_14;
    v1 = *(v0 + 36);
    v2 = object_applyDamage(0);
    if ( (v2 < 0) ^ v3 )
        goto LABEL_14;
    if ( *(v0 + 36) < v1 && *(v0 + 9) != 12 )
    {
        *(v0 + 9) = 12;
        *(v0 + 10) = 0;
    }
    if ( *&byte_80D3B00[4 * *(v0 + 22)] & *(*(v0 + 84) + 112) )
    {
LABEL_14:
        object_clearCollisionRegion();
        sub_80D3F32();
        *(v0 + 8) = 8;
    }
    else
    {
        v4 = battle_isTimeStop();
        if ( v6 )
            v4 = (*(&off_80D3AE8 + *(v0 + 9)))();
        object_presentCollisionData(v4, v5);
    }
}


// 0x80d3b08
int sub_80D3B08()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
            sub_80D3DFA(1);
    }
    else
    {
        *(v0 + 11) = 4;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80d3b4e
signed int sub_80D3B4E()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r1
    int v4; // r4
    int v5; // r1
    int v6; // r0
    int v7; // r3
    int v8; // r2
    int v9; // r6
    int v10; // r3

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 4;
        sub_80D3EE8();
    }
    v1 = *(v0 + 19);
    v2 = object_getCoordinatesForPanels(*(v0 + 18));
    if ( *(v0 + 6) & 1 )
        v4 = v2;
    else
        v4 = v3;
    v5 = *(v0 + 52);
    v6 = *(v0 + 64) + v5;
    *(v0 + 52) = v6;
    v7 = *(v0 + 56);
    v8 = *(v0 + 68) + v7;
    *(v0 + 56) = v8;
    if ( *(v0 + 6) & 1 )
    {
        v9 = v5;
        v10 = v6;
    }
    else
    {
        v9 = v7;
        v10 = v8;
    }
    if ( v4 != v9 && sub_800E708(v10, v9, v4) )
        sub_80D3DFA(0);
    object_setPanelsFromCoordinates(v0);
    return object_updateCollisionPanels(v0);
}


// 0x80d3bc2
int sub_80D3BC2()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    unsigned int v3; // r3
    unsigned int v4; // r0
    unsigned __int8 v5; // cf
    int v6; // r0
    int v7; // r0
    unsigned __int8 v8; // vf
    int result; // r0
    int v10; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 4;
        sub_80D3F10();
        sub_80D3F88();
        *(v0 + 32) = *&byte_80D3C3C[2 * *(v0 + 4)];
        *(v0 + 34) = 0;
    }
    if ( sub_80D3F96() )
    {
        *(v0 + 9) = 12;
        result = 0;
        *(v0 + 10) = 0;
    }
    else
    {
        v4 = *(v0 + 34) + 1;
        *(v0 + 34) = v4;
        v5 = __CFSHR__(v4, 3);
        v6 = v4 >> 3;
        if ( !v5 )
            sub_80D4004(v6, v1, v2, v3);
        v7 = *(v0 + 32);
        v8 = __OFSUB__(v7, 1);
        result = v7 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v8 )
        {
            v10 = *(v0 + 7) + 1;
            *(v0 + 7) = v10;
            if ( v10 < 4 )
            {
                *(v0 + 16) = 20;
                sub_80D3DFA(0);
            }
            *(v0 + 9) = 16;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80d3c44
int sub_80D3C44()
{
    int v0; // r5

    return (*(&off_80D3C58 + *(v0 + 10)))();
}


// 0x80d3c6c
int sub_80D3C6C()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r2
    int result; // r0
    int v5; // r0
    unsigned __int8 v6; // vf

    if ( *(v0 + 11) )
    {
        v5 = *(v0 + 32);
        v6 = __OFSUB__(v5, 1);
        result = v5 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v6) | (result == 0) )
        {
            result = 4;
            *(v0 + 10) = 4;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        v1 = object_getFrontDirection(v0);
        SpawnT4BattleObjectWithId0(v0, v1 << 20, *(v0 + 52) + (v1 << 20), *(v0 + 56), 0x200000);
        PlaySoundEffect(165, v2, v3);
        *(v0 + 16) = 28;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80d3cb0
int sub_80D3CB0()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 11) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 30 )
        {
            result = 30;
            *(v0 + 16) = 30;
        }
        else if ( result <= 0 )
        {
            result = 8;
            *(v0 + 10) = 8;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 29;
        result = 54;
        *(v0 + 32) = 54;
    }
    return result;
}


// 0x80d3ce0
int sub_80D3CE0()
{
    int v0; // r5
    int v1; // r0
    char v2; // r1
    int result; // r0
    int v4; // r0
    unsigned __int8 v5; // vf

    if ( *(v0 + 11) )
    {
        v4 = *(v0 + 32);
        v5 = __OFSUB__(v4, 1);
        result = v4 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v5) | (result == 0) )
        {
            result = 12;
            *(v0 + 10) = 12;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        v1 = sub_80D3F42();
        if ( v1 )
        {
            *(v0 + 18) = v1;
            *(v0 + 19) = v2;
            object_setCoordinatesFromPanels(v0);
            object_updateCollisionPanels(v0);
            result = 5;
            *(v0 + 32) = 5;
        }
        else
        {
            *(v0 + 16) = 20;
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80d3d22
int sub_80D3D22()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    int v3; // r0
    unsigned __int8 v4; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 34) + 1;
        *(v0 + 34) = v2;
        if ( !__CFSHR__(v2, 3) )
            sub_80D4020();
        v3 = *(v0 + 32);
        v4 = __OFSUB__(v3, 1);
        result = v3 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v4) | (result == 0) )
        {
            result = 16;
            *(v0 + 10) = 16;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 32) = *&byte_80D3D60[2 * *(v0 + 4)];
        result = 0;
        *(v0 + 34) = 0;
    }
    return result;
}


// 0x80d3d68
int sub_80D3D68()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 11) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 9) = 16;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        sub_80D4030();
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80d3d90
int sub_80D3D90()
{
    Battle *v0; // r5
    int v1; // r0
    int result; // r0
    int v3; // r0
    unsigned __int8 v4; // vf

    v1 = v0->bPhaseInitialized;
    if ( v0->bPhaseInitialized )
    {
        v3 = v0->Timer;
        v4 = __OFSUB__(v3, 1);
        result = v3 - 1;
        v0->Timer = result;
        if ( (result < 0) ^ v4 )
        {
            object_clearCollisionRegion();
            sub_80D3F32();
            result = 8;
            v0->currState = 8;
        }
    }
    else
    {
        v0->bPhaseInitialized = 4;
        SpawnT4BattleObjectWithId0(v0, v1, v0->x, v0->y, v0->z);
        result = 5;
        v0->Timer = 5;
    }
    return result;
}


// 0x80d3dc4
int __fastcall sub_80D3DC4(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-18h]
    char v9; // [sp+4h] [bp-14h]
    char v10; // [sp+8h] [bp-10h]
    int v11; // [sp+Ch] [bp-Ch]
    int *v12; // [sp+10h] [bp-8h]

    v12 = a4;
    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(119, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 100) = v12;
        *v12 = v4;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d3dfa
signed int __fastcall __noreturn sub_80D3DFA(int a1)
{
    int v1; // r5
    int v2; // r4
    char *v3; // r0
    int v4; // r2
    int v5; // r0
    int v7; // [sp+0h] [bp-1Ch]
    int v8; // [sp+4h] [bp-18h]
    int v9; // [sp+8h] [bp-14h]

    v7 = a1;
    v2 = 0;
    while ( 1 )
    {
        v3 = &byte_80D3ED8[8 * *(v1 + 22) + 2 * ((*(v1 + 6) + v2) & 3)];
        v8 = *v3;
        v9 = v3[1];
        v4 = 16 * ((*(v1 + 6) + v2) & 3) + 8 * *(v1 + 22);
        if ( object_checkPanelParameters(*(v1 + 18) + v8, *(v1 + 19) + v9, *&byte_80D3E94[v4], *&byte_80D3E94[v4 + 4]) )
            break;
        if ( ++v2 > 2 )
        {
            *(v1 + 64) = 0;
            *(v1 + 68) = 0;
            return 1;
        }
    }
    if ( !v7 && !v2 )
        return 0;
    v5 = *(v1 + 104);
    *(v1 + 64) = v8 * v5;
    *(v1 + 68) = v9 * v5;
    *(v1 + 6) = (*(v1 + 6) + v2) & 3;
    return 1;
}


// 0x80d3ee8
int sub_80D3EE8()
{
    int v0; // r5
    int result; // r0
    char v2; // r1

    result = *(v0 + 64);
    if ( result )
    {
        if ( result > 0 )
            v2 = 20;
        else
            v2 = 22;
    }
    else
    {
        result = *(v0 + 68);
        if ( !result )
            return result;
        if ( result > 0 )
            v2 = 21;
        else
            v2 = 23;
    }
    *(v0 + 16) = v2;
    return result;
}


// 0x80d3f10
int sub_80D3F10()
{
    int v0; // r5
    int result; // r0
    char v2; // r1

    result = *(v0 + 16);
    switch ( result )
    {
        case 21:
            v2 = 27;
            break;
        case 20:
            v2 = 26;
            break;
        case 23:
            v2 = 25;
            break;
        default:
            v2 = 24;
            break;
    }
    *(v0 + 16) = v2;
    return result;
}


// 0x80d3f32
int sub_80D3F32()
{
    int v0; // r5
    int *v1; // r1
    int result; // r0

    v1 = *(v0 + 100);
    result = *v1;
    if ( *v1 == v0 )
    {
        result = 0;
        *v1 = 0;
    }
    return result;
}


// 0x80d3f42
int sub_80D3F42()
{
    int v0; // r5
    int v1; // r6
    int v2; // r6
    int v8; // [sp+0h] [bp+0h]

    v1 = *(v0 + 22);
    v2 = object_getPanelRegion(*(*(v0 + 96) + 18), *(*(v0 + 96) + 19), 0x10000, 260571264);
    if ( !v2 )
        return 0;
    GetPositiveSignedRNG2();
    __asm { SVC         6 }
    return *(&v8 + v2) & 7;
}


// 0x80d3f88
int sub_80D3F88()
{
    _DWORD *v0; // r5
    int v1; // r1
    int result; // r0
    int v3; // r1

    v1 = v0[24];
    result = *(v1 + 18);
    v3 = *(v1 + 19);
    v0[27] = result;
    v0[28] = v3;
    return result;
}


// 0x80d3f96
signed int sub_80D3F96()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r1

    if ( *(v0 + 5) )
    {
        if ( *(v0 + 5) != 1 )
            object_getPanelsFiltered(
                8 * *(v0 + 22),
                &byte_80D3FF4[8 * *(v0 + 22)],
                *&byte_80D3FF4[8 * *(v0 + 22)],
                *&byte_80D3FF4[8 * *(v0 + 22) + 4]);
        if ( !sub_8010300(64, *(v0 + 22) ^ 1) )
            return 0;
    }
    else
    {
        v1 = *(v0 + 96);
        v2 = *(v1 + 18);
        v3 = *(v1 + 19);
        if ( v2 == *(v0 + 108) && v3 == *(v0 + 112) )
            return 0;
    }
    return 1;
}


// 0x80d4004
char *__fastcall sub_80D4004(int a1, int a2, int a3, unsigned int a4)
{
    int v4; // r5

    return object_highlightPanelRegionBlue(4 * *(v4 + 22), byte_80D4018, *&byte_80D4018[4 * *(v4 + 22)], a4);
}


// 0x80d4020
int sub_80D4020()
{
    int v0; // r5

    return object_highlightPanelRegion(*(v0 + 18), *(v0 + 19), 10, *(v0 + 22));
}


// 0x80d4030
int sub_80D4030()
{
    int v0; // r5
    signed int v1; // r7
    char *v2; // r2
    bool v3; // zf
    int v4; // r3
    int result; // r0
    int v6; // r6
    int v7; // [sp-8h] [bp-18h]
    int v8; // [sp-4h] [bp-14h]

    v1 = 0;
    do
    {
        v2 = &byte_80D4070[2 * v1];
        v7 = *v2 + *(v0 + 18);
        v8 = v2[1] + *(v0 + 19);
        v3 = object_isValidPanel(v7, v8) == 0;
        result = v7;
        if ( !v3 )
        {
            v6 = *(v0 + 44);
            result = sub_80C7D50(v7, v8, *(v0 + 14), v4);
        }
        ++v1;
    }
    while ( v1 < 4 );
    return result;
}


// 0x80d4088
int sub_80D4088()
{
    int v0; // r5

    return (*(&off_80D409C + *(v0 + 8)))();
}


// 0x80d40a8
void __noreturn sub_80D40A8()
{
    int v0; // r5
    int v1; // r0
    __int16 v2; // r0
    char *v3; // r0
    _BYTE *v4; // r0
    int v5; // r0
    int v6; // r1

    *v0 |= 2u;
    sprite_load(v0, 128, 4, 10);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    *(v0 + 20) = *(v0 + 18);
    *(v0 + 40) = *(v0 + 4) + 221;
    v2 = *(&dword_80D4140 + *(v0 + 4));
    *(v0 + 36) = v2;
    *(v0 + 38) = v2;
    *(v0 + 32) = 2400;
    v3 = &byte_80D4070[4 * *(v0 + 4) + 8];
    *(v0 + 96) = v3;
    sprite_setPallete(v3[2]);
    v4 = object_createCollisionData();
    if ( v4 )
    {
        v5 = object_setupCollisionData(v4, 19, 20, 3);
        object_presentCollisionData(v5, v6);
        *(v0 + 8) = 4;
        sub_80D4144();
    }
    object_freeMemory();
}


// 0x80d4144
void __noreturn sub_80D4144()
{
    _BYTE *v0; // r5
    int v1; // r0
    int v2; // r1

    *v0 |= 2u;
    sprite_clearFinalPalette();
    sub_801AD12();
    sub_800F672();
    sub_801B394(&off_80D4170);
    object_updateSprite();
    object_presentCollisionData(v1, v2);
}


// 0x80d4198
int __fastcall sub_80D4198(int a1, int a2, int a3)
{
    int v3; // r5
    int result; // r0

    *(v3 + 16) = 0;
    *(v3 + 16) = 0;
    *(v3 + 34) = 10;
    PlaySoundEffect(148, a2, a3);
    *(v3 + 9) = 8;
    result = 0;
    *(v3 + 10) = 0;
    return result;
}


// 0x80d41b6
int sub_80D41B6()
{
    int v0; // r5
    int result; // r0

    result = battle_isTimeStop();
    if ( !result )
        result = (*(&off_80D41D0 + *(v0 + 10)))();
    return result;
}


// 0x80d41d8
signed int sub_80D41D8()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 16) = 3;
    *(v0 + 34) = 30;
    result = 4;
    *(v0 + 10) = 4;
    return result;
}


// 0x80d41e8
int sub_80D41E8()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 34) - 1;
    *(v0 + 34) = result;
    if ( !result )
    {
        *(v0 + 9) = 9;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80d41fc
int sub_80D41FC()
{
    int v0; // r5
    int result; // r0

    result = battle_isTimeStop();
    if ( !result )
        result = (*(&off_80D4218 + *(v0 + 10)))();
    return result;
}


// 0x80d4228
signed int sub_80D4228()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 16) = 4;
    *(v0 + 34) = 2 * **(v0 + 96);
    *(v0 + 100) = 1;
    *(v0 + 104) = 1;
    result = 4;
    *(v0 + 10) = 4;
    return result;
}


// 0x80d4242
int sub_80D4242()
{
    int v0; // r5
    int v1; // r1
    int v2; // r2
    int v3; // r0
    int v4; // r0
    int result; // r0

    if ( battle_isBattleOver() )
        goto LABEL_10;
    v3 = *(v0 + 104) - 1;
    *(v0 + 104) = v3;
    if ( !v3 )
    {
        *(v0 + 104) = *(*(v0 + 96) + 3);
        PlaySoundEffect(*&byte_80D42A8[2 * *(v0 + 4)], v1, v2);
    }
    v4 = *(v0 + 100) - 1;
    *(v0 + 100) = v4;
    if ( !v4 )
    {
        *(v0 + 100) = *(*(v0 + 96) + 1);
        (*(&off_80D4298 + *(v0 + 4)))();
    }
    result = *(v0 + 34) - 1;
    *(v0 + 34) = result;
    if ( !result )
    {
LABEL_10:
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80d42b0
signed int sub_80D42B0()
{
    int v0; // r5
    signed int result; // r0

    *(v0 + 16) = 0;
    *(v0 + 34) = *(&dword_80D42C8 + *(v0 + 4));
    result = 12;
    *(v0 + 10) = 12;
    return result;
}


// 0x80d42cc
signed int sub_80D42CC()
{
    int v0; // r5
    signed int result; // r0

    result = battle_isBattleOver();
    if ( !result )
    {
        result = *(v0 + 34) - 1;
        *(v0 + 34) = result;
        if ( !result )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80d42e8
int sub_80D42E8()
{
    int v0; // r5
    int v1; // r0
    int v2; // r2
    int result; // r0

    v1 = object_getFlag2();
    if ( v1 & 0x8000 )
    {
        if ( v1 & 0x300000 )
        {
            result = sub_800F90E(7);
        }
        else
        {
            result = sub_800F8CE(v1);
            if ( !result )
                return result;
            if ( result != 1 )
                SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 786432);
        }
    }
    else
    {
        PlaySoundEffect(112, 0x8000, v2);
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 1310720);
    }
    sub_802EF5C(result);
    sub_800F656();
    object_clearCollisionRegion();
    object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    *v0 &= 0xFDu;
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80d435c
int sub_80D435C()
{
    int v0; // r5
    int v1; // r10
    int result; // r0
    _DWORD *v3; // r7
    signed int v4; // r4

    result = 16 * *(v0 + 22) + 128;
    v3 = (*(v1 + oToolkit_S2034880_Ptr) + result);
    v4 = 0;
    do
    {
        if ( *v3 )
        {
            result = sub_8013774(result, 44);
            if ( result != 23 && result != 24 )
                result = object_setInvulnerableTime(4);
        }
        ++v3;
        ++v4;
    }
    while ( v4 < 4 );
    return result;
}


// 0x80d4392
int sub_80D4392()
{
    int v0; // r5
    int v1; // r4

    v1 = *&byte_80D43B8[4 * *(v0 + 22)];
    return object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), 5, 0);
}


// 0x80d43c0
int sub_80D43C0()
{
    int v0; // r5

    object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), 5, 0);
    return camera_initShakeEffect_80302a8(2, 4);
}


// 0x80d43e8
int sub_80D43E8()
{
    int v0; // r5

    return object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), 5, 0);
}


// 0x80d4408
int __fastcall sub_80D4408(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    __int16 v7; // r3
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    int v10; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    object_spawnType3(120, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 44) = v5;
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        v7 = *(v10 + 22);
        *(v4 + 22) = v7;
        *v4 |= 0x10u;
        result = sub_800F614(v4, v7, 1);
    }
    return result;
}


// 0x80d4440
void sub_80D4440()
{
    int v0; // r5

    (*(&off_80D4458 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d4464
int sub_80D4464()
{
    int v0; // r5

    **(v0 + 96) = 0;
    return object_genericDestroy();
}


// 0x80d4472
void __noreturn sub_80D4472()
{
    Battle *v0; // r5

    object_setCoordinatesFromPanels(v0);
    sub_8011504(0x41Fu, 0xC0D0300u);
}


// 0x80d44d2
void __noreturn sub_80D44D2()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
        goto LABEL_9;
    if ( sub_801156A(2) == -1 )
    {
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
        goto LABEL_9;
    }
    if ( *(*(v0 + 84) + 112) & 0xF800000 )
    {
LABEL_9:
        object_clearCollisionRegion();
        *(v0 + 9) = 8;
        *(v0 + 10) = 0;
        return;
    }
    v1 = battle_isTimeStop();
    if ( v3 )
        v1 = (*(&off_80D4534 + *(v0 + 9)))();
    object_presentCollisionData(v1, v2);
}


// 0x80d4544
int sub_80D4544()
{
    int v0; // r5
    __int64 v1; // r0
    int v2; // r0
    unsigned __int8 v3; // vf
    int result; // r0

    if ( !(*(v0 + 32) & 4) )
    {
        LODWORD(v1) = *(v0 + 18);
        HIDWORD(v1) = *(v0 + 19);
        object_highlightPanel(v1);
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v3) | (result == 0) )
    {
        *v0 |= 2u;
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80d4570
int sub_80D4570()
{
    int v0; // r5

    return (*(&off_80D4584 + *(v0 + 10)))();
}


// 0x80d458c
int sub_80D458C()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 1;
        *(v0 + 32) = *(v0 + 5);
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        *(v0 + 32) = 8;
        result = 4;
        *(v0 + 10) = 4;
    }
    return result;
}


// 0x80d45ae
int sub_80D45AE()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r0

    if ( *(v0 + 32) & 2 )
        sprite_forceWhitePallete();
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        v4 = *(v0 + 6) + 1;
        *(v0 + 6) = v4;
        if ( v4 >= 2 )
        {
            if ( v4 != 2 )
            {
                *(v0 + 9) = 12;
                result = 0;
                *(v0 + 10) = 0;
                return result;
            }
            *(v0 + 5) += 60;
        }
        ++*(v0 + 16);
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80d45ec
signed int sub_80D45EC()
{
    int v0; // r5
    signed int result; // r0

    if ( *(v0 + 4) == 4 )
        sub_80D4674();
    sub_8116878(*(v0 + 76));
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80d4604
int sub_80D4604()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r0
    int v5; // r6

    if ( !*(v0 + 11) )
    {
        *(v0 + 11) = 1;
        if ( *(v0 + 4) == 4 )
        {
LABEL_7:
            result = 8;
            *(v0 + 8) = 8;
            return result;
        }
        *(v0 + 16) = 3;
        *(v0 + 32) = 10;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( ((result < 0) ^ v2) | (result == 0) )
    {
        object_clearCollisionRegion();
        v4 = sub_80103F8(*(v0 + 22) ^ 1);
        v5 = *(v0 + 44);
        sub_80C7D50(*(v4 + 18), *(v4 + 19), 3, 0);
        goto LABEL_7;
    }
    return result;
}


// 0x80d464a
int __fastcall sub_80D464A(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(121, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *(v4 + 76) = v11;
        *(v4 + 22) = *(v11 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d4674
signed int sub_80D4674()
{
    int v0; // r5
    int v1; // r1
    int v2; // ST00_4
    int v3; // r4
    signed int result; // r0

    *(v0 + 22) = 0;
    v1 = 3;
    do
    {
        v2 = v1;
        v3 = *&byte_80D46A4[2 * v1];
        sub_80D4B44(0, v1, 0, 0x100000);
        v1 = v2 - 1;
    }
    while ( v2 != 1 );
    result = 1;
    *(v0 + 22) = 1;
    return result;
}


// 0x80d46b8
int sub_80D46B8()
{
    int v0; // r5

    return (*(&off_80D46CC + *(v0 + 8)))();
}


// 0x80d46d8
void __noreturn sub_80D46D8()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v3; // r0
    int v4; // r1

    *v0 |= 2u;
    sprite_load(v0, 128, 12, 52);
    sprite_hasShadow();
    *(v0 + 16) = 1;
    sprite_setAnimation(v0, 1u);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    object_setPanelsFromCoordinates(v0);
    *(v0 + 40) = 226;
    *(v0 + 36) = 50;
    *(v0 + 38) = 50;
    *(v0 + 14) = 0;
    *(v0 + 32) = &byte_1E0;
    v2 = object_createCollisionData();
    if ( v2 )
    {
        object_setupCollisionData(v2, 12, 13, 1);
        object_clearCollisionRegion();
        v3 = object_setCollisionHitEffect(0);
        object_presentCollisionData(v3, v4);
        *(v0 + 8) = 4;
        sub_80D4754();
    }
    object_freeMemory();
}


// 0x80d4754
void __noreturn sub_80D4754()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r0
    int v4; // r1

    *v0 |= 2u;
    sprite_clearFinalPalette();
    sub_801AD12();
    object_spawnCollisionEffect();
    sub_800F672();
    v1 = *(v0 + 84);
    v2 = *(v1 + 128);
    if ( *(v1 + 128) )
    {
        *(v0 + 36) = 0;
        *(v0 + 96) = 1;
        *(v0 + 100) = v2;
        object_clearCollisionRegion();
    }
    sub_801B394(&off_80D479C);
    sub_801BC24();
    object_presentCollisionData(v3, v4);
}


// 0x80d47c0
int sub_80D47C0()
{
    int v0; // r5
    int result; // r0
    char v2; // zf
    int v3; // r1
    int v4; // r0
    int v5; // r1
    int v6; // r1
    int v7; // r2
    int v8; // r0
    unsigned __int8 v9; // vf
    int v10; // r1

    result = battle_isTimeStop();
    if ( v2 )
    {
        if ( !*(v0 + 11) )
        {
            v3 = *(v0 + 7);
            v4 = object_getCoordinatesForPanels(*(v0 + 6));
            *(v0 + 64) = sub_8001330((v0 + 52), v4, v5);
            *(v0 + 68) = v6;
            *(v0 + 72) = v7;
            *(v0 + 34) = 60;
            *(v0 + 108) = 1;
            *(v0 + 11) = 4;
        }
        if ( *(v0 + 34) < 5 )
            object_setCollisionRegion(1);
        v8 = *(v0 + 34);
        v9 = __OFSUB__(v8--, 1);
        *(v0 + 34) = v8;
        if ( (v8 < 0) ^ v9 )
            object_isCurrentPanelSolid();
        *(v0 + 52) += *(v0 + 64);
        *(v0 + 56) += *(v0 + 68);
        v10 = *(v0 + 72);
        *(v0 + 60) += v10;
        *(v0 + 72) = v10 - 0x2000;
        object_setPanelsFromCoordinates(v0);
        result = object_updateCollisionPanels(v0);
    }
    return result;
}


// 0x80d4870
int sub_80D4870()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 10);
    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 1;
        result = sub_801A082(1, 14, 15, 3);
    }
    return result;
}


// 0x80d4888
int sub_80D4888()
{
    int v0; // r5

    return (*(&JumpTable80D489C + *(v0 + 10)))();
}


// 0x80d48a8
signed int sub_80D48A8()
{
    int v0; // r5
    signed int result; // r0

    result = 4;
    *(v0 + 10) = 4;
    return result;
}


// 0x80d48ae
int sub_80D48AE()
{
    int v0; // r5
    int v1; // r0
    int result; // r0
    int v3; // r0
    char v4; // zf
    int v5; // r6
    int v6; // r4
    int v7; // r0
    char *v8; // r0

    v1 = object_getFlag2();
    result = sub_800F8CE(v1);
    if ( result )
    {
        if ( result == 1 )
            goto LABEL_15;
        result = object_getFlag();
        if ( result & &LCDControl )
            goto LABEL_15;
        v3 = object_getFlag2();
        if ( v3 & 0x8000 )
        {
            if ( v3 & 0x300000 )
            {
                result = sub_800F90E(8);
LABEL_15:
                sub_802EF5C(result);
                sub_800F656();
                object_clearCollisionRegion();
                object_removePanelReserve(*(v0 + 20), *(v0 + 21));
                *v0 &= 0xFDu;
                result = 8;
                *(v0 + 8) = 8;
                return result;
            }
LABEL_14:
            SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x100000);
            goto LABEL_15;
        }
        if ( !*(v0 + 100) )
            goto LABEL_14;
        result = battle_isTimeStop();
        if ( v4 )
        {
            if ( *(v0 + 96) && !battle_isBattleOver() )
            {
                result = *(v0 + 108);
                if ( !result )
                {
                    *(v0 + 10) = 8;
                    *v0 &= 0xFDu;
                    SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 786432);
                    sub_801DACC(64);
                    v5 = *(v0 + 100) + 11665408;
                    v6 = *(v0 + 4);
                    v7 = sub_80E61D2(*(v0 + 18), *(v0 + 19), 0, 0);
                    v8 = sub_800BF16(*(v0 + 22), 1, v7);
                    return sub_802EF5C(v8);
                }
                goto LABEL_15;
            }
            goto LABEL_14;
        }
    }
    return result;
}


// 0x80d49a0
signed int sub_80D49A0()
{
    int v0; // r5
    char v1; // zf
    signed int result; // r0

    *v0 &= 0xFDu;
    battle_isTimeStop();
    if ( !v1 )
        JUMPOUT(&locret_80D499E);
    sub_801DA48(64);
    sub_800F656();
    object_clearCollisionRegion();
    object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80d49cc
int __fastcall sub_80D49CC(int a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    __int16 v7; // r3
    int v8; // [sp+Ch] [bp-8h]

    object_spawnType3(122, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 44) = v5;
        v7 = *(v8 + 22);
        *(v4 + 22) = v7;
        *v4 |= 0x10u;
        result = sub_800F614(v4, v7, 1);
    }
    return result;
}


// 0x80d49f6
int __fastcall sub_80D49F6(int a1, int a2, int a3, int a4)
{
    Battle *v4; // r5
    int v5; // ST00_4
    int v6; // ST04_4
    int v7; // ST08_4
    int v8; // r0
    int v9; // r4

    v5 = a2;
    v6 = a3;
    v7 = a4;
    v8 = (3 * object_getFrontDirection(v4) + v4->panelX) << 16;
    v9 = (v4->panelY << 24) + v8;
    return sub_80D49CC(v8, v5, v6, v7);
}


// 0x80d4a28
int sub_80D4A28()
{
    int v0; // r5

    return (*(&off_80D4A3C + *(v0 + 8)))();
}


// 0x80d4a48
void __noreturn sub_80D4A48()
{
    Battle *v0; // r5

    object_setCoordinatesFromPanels(v0);
    sub_8011504(0x102102Au, 0x6050300u);
}


// 0x80d4a98
void __noreturn sub_80D4A98()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( *(*(v0 + 84) + 112) )
    {
        *(v0 + 96) = *(v0 + 18);
        object_clearCollisionRegion();
    }
    (*(&off_80D4AFC + *(v0 + 9)))();
    if ( !*(*(v0 + 84) + 1) && *(v0 + 18) != *(v0 + 96) )
        object_setCollisionRegion(1);
    object_updateSprite();
    object_presentCollisionData(v1, v2);
}


// 0x80d4b00
int sub_80D4B00()
{
    int v0; // r5
    int result; // r0
    int v2; // r1
    int v3; // r2

    if ( *(v0 + 4) )
    {
        result = *(v0 + 4) - 1;
        *(v0 + 4) = result;
    }
    else
    {
        *(v0 + 52) += *(v0 + 64);
        object_setPanelsFromCoordinates(v0);
        object_updateCollisionPanels(v0);
        if ( *(v0 + 18) == 2 && *(v0 + 5) == 1 )
        {
            *(v0 + 5) = 0;
            PlaySoundEffect(255, v2, v3);
        }
        result = *(v0 + 18);
        if ( result == 7 )
        {
            object_clearCollisionRegion();
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    return result;
}


// 0x80d4b44
int __fastcall sub_80D4B44(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    char v8; // [sp+8h] [bp-Ch]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(123, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, v8);
    return result;
}


// 0x80d4b68
int sub_80D4B68()
{
    int v0; // r5

    return (*(&off_80D4B7C + *(v0 + 8)))();
}


// 0x80d4b88
int sub_80D4B88()
{
    int v0; // r5
    _BYTE *v1; // r0
    _BYTE *v2; // r4
    int result; // r0
    int v4; // r0
    int v5; // r1

    sub_80D4C3A();
    object_setCoordinatesFromPanels(v0);
    v1 = object_createCollisionData();
    v2 = v1;
    if ( !v1 )
        return object_freeMemory();
    object_setupCollisionData(v1, 54, 0, 0);
    v2[1] = *(v0 + 4);
    v4 = object_setCollisionHitEffect(255);
    object_presentCollisionData(v4, v5);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d4bc0
void __noreturn sub_80D4BC0()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || sub_80D4C6C() )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        sub_80D4C3A();
        object_setCoordinatesFromPanels(v0);
        v1 = object_updateCollisionPanels(v0);
        object_presentCollisionData(v1, v2);
    }
}


// 0x80d4bf6
int __noreturn sub_80D4BF6()
{
    object_removeCollisionData();
    object_spawnCollisionEffect();
    object_clearCollisionRegion();
    return object_genericDestroy();
}


// 0x80d4c0a
int __fastcall sub_80D4C0A(_DWORD *a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    _DWORD *v6; // [sp+0h] [bp-14h]
    int v7; // [sp+4h] [bp-10h]
    int v8; // [sp+Ch] [bp-8h]

    v6 = a1;
    v7 = a2;
    object_spawnType3(124, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 96) = v6;
        *(v4 + 100) = v7;
        *(v4 + 104) = *v6 & v7;
        *(v4 + 22) = *(v8 + 22);
        *(v4 + 76) = v8;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d4c34
int __fastcall sub_80D4C34(int result)
{
    *(result + 8) = 8;
    return result;
}


// 0x80d4c3a
int sub_80D4C3A()
{
    int v0; // r5
    int v1; // r3
    char v2; // r1
    int v3; // r0
    signed int v4; // r1
    int v5; // r0
    int result; // r0

    v1 = *(v0 + 76);
    v2 = 0;
    v3 = *(v1 + 64);
    if ( v3 )
    {
        v2 = 1;
        if ( v3 <= 0 )
            v2 = -1;
    }
    *(v0 + 18) = *(v1 + 18) + v2;
    v4 = 0;
    v5 = *(v1 + 68);
    if ( v5 )
    {
        v4 = 1;
        if ( v5 <= 0 )
            v4 = -1;
    }
    result = *(v1 + 19) + v4;
    *(v0 + 19) = result;
    return result;
}


// 0x80d4c6c
signed int sub_80D4C6C()
{
    int v0; // r5
    signed int v1; // r3

    v1 = 0;
    if ( (**(v0 + 96) & *(v0 + 100)) != *(v0 + 104) )
        v1 = 1;
    return v1;
}


// 0x80d4c84
int sub_80D4C84()
{
    int v0; // r5

    return (*(&off_80D4C98 + *(v0 + 8)))();
}


// 0x80d4ca4
void __noreturn sub_80D4CA4()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v3; // r0
    int v4; // r1

    sprite_load(v0, 128, 12, 53);
    sprite_loadAnimationData(v0);
    sprite_hasShadow();
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 0;
    *(v0 + 20) = *(v0 + 18);
    *(v0 + 40) = 227;
    *(v0 + 36) = 1;
    *(v0 + 38) = 1;
    *(v0 + 32) = 6000;
    *(v0 + 34) = 3;
    if ( *(v0 + 4) != 1 )
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x100000);
    v2 = object_createCollisionData();
    if ( v2 )
    {
        object_setupCollisionData(v2, 14, 15, 3);
        v3 = object_clearCollisionRegion();
        object_presentCollisionData(v3, v4);
        *(v0 + 8) = 4;
    }
    else
    {
        object_freeMemory();
    }
}


// 0x80d4d34
void __noreturn sub_80D4D34()
{
    _BYTE *v0; // r5
    int v1; // r0
    int v2; // r1

    *v0 |= 2u;
    sprite_clearFinalPalette();
    sub_801AD12();
    sub_800F672();
    sub_801B4D4(&off_80D4D60);
    object_updateSprite();
    object_presentCollisionData(v1, v2);
}


// 0x80d4d88
int sub_80D4D88()
{
    int v0; // r5
    int result; // r0
    int v2; // r1
    int v3; // r2

    result = *(v0 + 34) - 1;
    *(v0 + 34) = result;
    if ( !result )
    {
        if ( !object_checkPanelParameters(*(v0 + 18), *(v0 + 19), 16, 260571264) )
            sub_80D4EFC();
        object_setCollisionRegion(1);
        PlaySoundEffect(148, v2, v3);
        *(v0 + 9) = 8;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80d4dc8
void nullsub_80D4DC8()
{
    ;
}


// 0x80d4dcc
int sub_80D4DCC()
{
    int v0; // r5

    return (*(&off_80D4DE0 + *(v0 + 10)))();
}


// 0x80d4df0
int sub_80D4DF0()
{
    int v0; // r5
    int result; // r0
    signed int v2; // r0
    int v3; // r4
    int v4; // r6
    int v5; // r0

    result = battle_isTimeStop();
    if ( !result )
    {
        *(v0 + 24) = 0;
        object_clearCollisionRegion();
        if ( battle_isBattleOver() || (v2 = sub_80D4FF6(*(v0 + 96)), v2 == 255) )
        {
            object_clearCollisionRegion();
            SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x100000);
            *v0 &= 0xFDu;
            result = 8;
            *(v0 + 8) = 8;
        }
        else
        {
            *(v0 + 22) = v2;
            sub_801DACC(64);
            v3 = *(v0 + 4);
            v4 = *(v0 + 44);
            v5 = sub_80E6878(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
            sub_800BF16(*(v0 + 22), 1, v5);
            result = 4;
            *(v0 + 10) = 4;
        }
    }
    return result;
}


// 0x80d4e64
signed int sub_80D4E64()
{
    int v0; // r5
    signed int result; // r0
    int v2; // r6
    int v3; // ST00_4
    int v4; // ST04_4
    int v5; // ST08_4
    int v6; // r4
    int v7; // r1
    int v8; // r2

    result = *(v0 + 6);
    if ( *(v0 + 6) )
    {
        v2 = *(v0 + 44);
        v3 = *(v0 + 19);
        v4 = *(v0 + 14);
        v5 = *&byte_80D4EB4[4 * *(v0 + 22)];
        sub_80C53A6(*(v0 + 18), v3, v4, 0);
        v6 = *(v0 + 22);
        sub_801BD3C(v3, v4, 69, v5);
        camera_initShakeEffect_80302a8(1, 60);
        PlaySoundEffect(302, v7, v8);
        *(v0 + 16) = 1;
        result = 8;
        *(v0 + 10) = 8;
    }
    return result;
}


// 0x80d4ebc
int sub_80D4EBC()
{
    Battle *v0; // r5
    int result; // r0

    result = sprite_getFrameParameters();
    if ( result & 0x80 )
    {
        SpawnT4BattleObjectWithId0(v0, &v0->vx, v0->x, v0->y, v0->z + 0x100000);
        result = 12;
        v0->currPhase = 12;
    }
    return result;
}


// 0x80d4ee0
int sub_80D4EE0()
{
    int v0; // r5
    int result; // r0

    object_clearCollisionRegion();
    *v0 &= 0xFDu;
    result = battle_isTimeStop();
    if ( !result )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d4efc
signed int __noreturn sub_80D4EFC()
{
    int v0; // r5
    int v1; // r0
    int v2; // r0
    signed int result; // r0
    int v4; // r1
    int v5; // r2
    int v6; // r0
    int v7; // r0

    v1 = object_removePanelReserve(*(v0 + 20), *(v0 + 21));
    sub_802EF5C(v1);
    sub_800F656();
    v2 = object_getFlag2();
    if ( !(v2 & 0x8000) )
    {
        if ( !*(v0 + 36) && !*(v0 + 5) )
        {
            v6 = *(*(v0 + 84) + 112);
            *(v0 + 96) = v6;
            if ( v6 )
            {
                *(v0 + 96) = v6;
                if ( sub_80D4FF6(v6) != 255 )
                {
                    *(v0 + 9) = 9;
                    result = 0;
                    *(v0 + 10) = 0;
                    return result;
                }
            }
        }
        goto LABEL_12;
    }
    if ( !(v2 & 0x300000) )
    {
        result = sub_800F8CE(v2);
        if ( !result )
            return result;
        if ( result == 1 )
            goto LABEL_13;
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 786432);
LABEL_12:
        SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60) + 0x100000);
        sub_80E1D7A(v7, *(v0 + 52), *(v0 + 56), *(v0 + 60));
LABEL_13:
        PlaySoundEffect(144, v4, v5);
        goto LABEL_14;
    }
    sub_800F90E(9);
LABEL_14:
    object_clearCollisionRegion();
    *v0 &= 0xFDu;
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80d4fa6
_BYTE *__fastcall sub_80D4FA6(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *result; // r0
    char v7; // r1
    char v8; // r3
    char v9; // [sp+0h] [bp-14h]
    char v10; // [sp+4h] [bp-10h]
    int v11; // [sp+Ch] [bp-8h]

    v9 = a1;
    v10 = a2;
    object_spawnType3(125, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v9;
        *(v4 + 19) = v10;
        *(v4 + 44) = v5;
        if ( *(v4 + 4) )
        {
            v7 = object_getPanelDataOffset(*(v4 + 18), *(v4 + 19))[3];
            result = v4;
            *(v4 + 22) = v7;
            *(v4 + 23) = 0;
        }
        else
        {
            *(v4 + 22) = *(v11 + 22);
        }
        v8 = 16;
        if ( result[4] )
            v8 = 20;
        *result |= v8;
        result = sub_800F614(result, result[22], 1);
    }
    return result;
}


// 0x80d4ff6
signed int __fastcall sub_80D4FF6(int a1)
{
    if ( !(a1 & 0xAA000000) && a1 & 0x55000000 )
        return 0;
    if ( a1 & 0x55000000 || !(a1 & 0xAA000000) )
        return 255;
    return 1;
}


// 0x80d5028
void sub_80D5028()
{
    int v0; // r5

    (*(&off_80D5044 + *(v0 + 8)))();
    sub_80169BE();
    object_updateSpritePaused();
}


// 0x80d5050
int __noreturn sub_80D5050()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v3; // r0
    int v4; // r1
    int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    --*(v0 + 58);
    --*(v0 + 62);
    sprite_load(v0, 128, 16, 78);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 15;
    *(v0 + 17) = 15;
    sprite_setAnimation(v0, 0xFu);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( v2 )
    {
        object_setupCollisionData(v2, 19, 20, 3);
        v3 = object_setCollisionHitEffect(255);
        object_presentCollisionData(v3, v4);
        result = 4;
        *(v0 + 8) = 4;
    }
    else
    {
        sub_80D5128();
        result = object_freeMemory();
    }
    return result;
}


// 0x80d50c6
void __noreturn sub_80D50C6()
{
    int v0; // r5

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || *(v0 + 11) || *(*(v0 + 76) + 9) != 11 )
    {
        object_clearCollisionRegion();
        sub_80D5128();
        *(v0 + 8) = 8;
    }
    else
    {
        object_presentCollisionData(11, 11);
    }
}


// 0x80d50fc
int __fastcall sub_80D50FC(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(126, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *v6 = v4;
        *(v4 + 22) = *(v11 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d5128
int sub_80D5128()
{
    int v0; // r5
    int *v1; // r1
    int result; // r0

    v1 = *(v0 + 96);
    result = *v1;
    if ( *v1 == v0 )
    {
        result = 0;
        *v1 = 0;
    }
    return result;
}


// 0x80d5138
void sub_80D5138()
{
    int v0; // r5

    (*(&off_80D5154 + *(v0 + 8)))();
    sub_80169BE();
    object_updateSpritePaused();
}


// 0x80d5160
int __noreturn sub_80D5160()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int v3; // r0
    int v4; // r1
    int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 20;
    sprite_load(v0, 128, 8, 9);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 23;
    *(v0 + 17) = 23;
    sprite_setAnimation(v0, 0x17u);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( v2 )
    {
        object_setupCollisionData(v2, 41, 20, 3);
        object_setCollisionHitEffect(10);
        v3 = object_clearCollisionRegion();
        object_presentCollisionData(v3, v4);
        *(v0 + 64) = 299008 * object_getFrontDirection(v0);
        *(v0 + 36) = 255;
        *(v0 + 38) = 255;
        sub_80D532C(*(v0 + 18), *(v0 + 19));
        result = 4;
        *(v0 + 8) = 4;
    }
    else
    {
        sub_80D5348();
        result = object_freeMemory();
    }
    return result;
}


// 0x80d51e4
void __noreturn sub_80D51E4()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() || *(v0 + 11) || *(*(v0 + 76) + 9) != 11 )
    {
        object_clearCollisionRegion();
        sub_80D5348();
        *(v0 + 8) = 8;
    }
    else
    {
        v1 = battle_isTimeStop();
        if ( v3 )
            v1 = (*(&off_80D5230 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80d5240
int sub_80D5240()
{
    int v0; // r5
    int v1; // r2
    int v2; // r3
    int result; // r0
    int v4; // r0
    unsigned __int8 v5; // vf

    if ( *(v0 + 10) )
    {
        v4 = *(v0 + 32);
        v5 = __OFSUB__(v4, 1);
        result = v4 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v5) | (result == 0) )
        {
            *(v0 + 16) = 24;
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        object_setCollisionRegion(1);
        sub_80D4C0A((v0 + 8), 255, v1, v2);
        result = *(v0 + 5) + 1;
        *(v0 + 32) = result;
    }
    return result;
}


// 0x80d5280
signed int sub_80D5280()
{
    int v0; // r5
    int v1; // r4
    signed int result; // r0

    v1 = *(v0 + 18);
    *(v0 + 52) += *(v0 + 64);
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    if ( *(*(v0 + 84) + 112) )
        object_clearCollisionRegion();
    if ( object_isCurrentPanelValid() )
    {
        result = *(v0 + 18);
        if ( result != v1 )
            result = object_setCollisionRegion(1);
    }
    else
    {
        object_clearCollisionRegion();
        sub_80D5348();
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d52c4
int __fastcall sub_80D52C4(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-18h]
    char v9; // [sp+4h] [bp-14h]
    char v10; // [sp+8h] [bp-10h]
    int v11; // [sp+Ch] [bp-Ch]
    int v12; // [sp+10h] [bp-8h]

    v12 = a4;
    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(127, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *v6 = v4;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 100) = v12;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d52fa
int sub_80D52FA()
{
    Battle *v0; // r5
    bool v1; // zf
    int result; // r0
    int v3; // [sp-8h] [bp-Ch]
    int v4; // [sp-4h] [bp-8h]

    v3 = object_getFrontDirection(v0) + v0->panelX;
    v4 = v0->panelY;
    v1 = (object_getPanelParameters(v3, v4) & *&byte_80D5324[4 * v0->Alliance]) == 0;
    result = v3;
    if ( !v1 )
        result = sub_80D532C(v3, v4);
    return result;
}


// 0x80d532c
int __fastcall sub_80D532C(char a1, int a2)
{
    int v2; // r5

    return object_spawnCollisionRegion(a1, a2, *(v2 + 14), 0);
}


// 0x80d5348
int sub_80D5348()
{
    int v0; // r5
    int *v1; // r1
    int result; // r0

    v1 = *(v0 + 96);
    result = *v1;
    if ( *v1 == v0 )
    {
        result = 0;
        *v1 = 0;
    }
    return result;
}


// 0x80d535c
void sub_80D535C()
{
    int v0; // r5

    (*(&off_80D5380 + *(v0 + 8)))();
    if ( *(v0 + 5) )
        object_updateSpriteTimestop();
    else
        object_updateSpritePaused();
}


// 0x80d538c
int __noreturn sub_80D538C()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 60) = 10485760;
    sprite_load(v0, 128, 16, 5);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 21, 5, 3);
    object_setCollisionHitEffect(10);
    v4 = object_clearCollisionRegion();
    object_presentCollisionData(v4, v5);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d53f4
void __noreturn sub_80D53F4()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        if ( *(*(v0 + 84) + 112) )
            sub_80D5516();
        if ( *(v0 + 5) == 1 || (v1 = battle_isTimeStop(), v3) )
            v1 = (*(&off_80D543C + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80d5448
int sub_80D5448()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    __int64 v3; // r0
    int v4; // r0
    unsigned __int8 v5; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 34) + 1;
        *(v0 + 34) = v2;
        if ( !__CFSHR__(v2, 3) )
        {
            LODWORD(v3) = *(v0 + 18);
            HIDWORD(v3) = *(v0 + 19);
            object_highlightPanel(v3);
        }
        v4 = *(v0 + 32);
        v5 = __OFSUB__(v4, 1);
        result = v4 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v5) | (result == 0) )
        {
            *(v0 + 9) = 4;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        *(v0 + 32) = *(v0 + 4);
        result = 0;
        *(v0 + 34) = 0;
    }
    return result;
}


// 0x80d5482
int sub_80D5482()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        *(v0 + 60) -= *(v0 + 72);
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v3) | (result == 0) )
        {
            *(v0 + 60) = 0;
            object_setCollisionRegion(1);
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        sprite_hasShadow();
        *(v0 + 72) = 413696;
        result = 25;
        *(v0 + 32) = 25;
    }
    return result;
}


// 0x80d54c0
void __noreturn sub_80D54C0()
{
    object_isCurrentPanelSolid();
}


// 0x80d54f0
int __fastcall sub_80D54F0(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(128, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d5516
u32 sub_80D5516()
{
    int v0; // r5
    int v1; // r4
    char v2; // r0
    int v3; // r6
    int v4; // ST00_4
    int v5; // ST04_4
    char *v6; // r7
    int v7; // r6
    int v8; // r7
    u32 result; // r0

    v1 = 0;
    GetPositiveSignedRNG2();
    v3 = v2 & 3;
    do
    {
        v4 = v1;
        v5 = v3;
        v6 = &byte_80D5550[8 * (v3 & 3)];
        v7 = *v6;
        v8 = *(v6 + 1);
        result = sub_80E1084(2, *(v0 + 52), *(v0 + 56), 0);
        v3 = v5 + 1;
        ++v1;
    }
    while ( v4 - 1 < 0 );
    return result;
}


// 0x80d5580
void sub_80D5580()
{
    int v0; // r5

    (*(&off_80D5598 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80d55a4
int __noreturn sub_80D55A4()
{
    int v0; // r5
    u8 v1; // r0
    int v2; // r0

    sprite_load(v0, 128, 16, 68);
    sprite_noShadow(v0);
    *v0 |= 2u;
    v1 = *(v0 + 7);
    *(v0 + 16) = v1;
    *(v0 + 17) = v1;
    sprite_setAnimation(v0, v1);
    sprite_loadAnimationData(v0);
    v2 = object_getFlip(v0);
    sprite_setFlip(v0, v2);
    sprite_setPallete(0);
    *(v0 + 32) = *(v0 + 6);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 52) += 2621440 * object_getFrontDirection(v0);
    *(v0 + 8) = 4;
    return sub_80D55F8();
}


// 0x80d55f8
int sub_80D55F8()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int v3; // r7
    __int64 v4; // r0
    int v5; // ST00_4
    __int64 v6; // ST00_8
    int result; // r0

    sub_80D5634();
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( ((v1 < 0) ^ v2) | (v1 == 0) )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        v3 = object_getFrontDirection(v0);
        LODWORD(v4) = *(v0 + 18);
        HIDWORD(v4) = *(v0 + 19);
        v5 = *(v0 + 18);
        HIDWORD(v6) = *(v0 + 19);
        object_highlightPanel(v4);
        LODWORD(v6) = v5 + v3;
        object_highlightPanel(v6);
        result = sub_8109660(v6 + v3, SHIDWORD(v6), 4, 0);
    }
    return result;
}


// 0x80d5634
int sub_80D5634()
{
    int v0; // r5
    int result; // r0
    signed int v2; // r1
    signed int v3; // r4
    int v4; // r0

    if ( !*(v0 + 9) && *(*(v0 + 76) + 9) != *(v0 + 5) )
    {
        *(v0 + 32) = 4;
        *(v0 + 9) = 4;
    }
    if ( *(v0 + 4) )
    {
        result = *(v0 + 32);
        if ( result != *(v0 + 6) )
            return result;
        v2 = 0;
        goto LABEL_10;
    }
    result = *(v0 + 32);
    v2 = 0;
    if ( result == 45 || (v2 = 1, result == 30) || (v2 = 2, result == 15) )
    {
LABEL_10:
        result = off_80D56C4[v2];
        v3 = 3;
        do
        {
            sub_80D5684(result);
            result = v4 + 8;
            --v3;
        }
        while ( v3 );
    }
    return result;
}


// 0x80d5684
void __fastcall sub_80D5684(int a1)
{
    int v1; // r5
    int v2; // r7
    char v3; // r0
    int v4; // r4
    int v5; // r6
    int v6; // r0

    v2 = a1;
    if ( *(a1 + 2) )
    {
        v3 = object_getFrontDirection(v1);
        v4 = *(v2 + 4);
        v5 = *(v1 + 44);
        v6 = object_spawnCollisionRegion(v3 * *v2 + *(v1 + 18), *(v1 + 19), *(v1 + 14), 0x100000);
        if ( v6 )
            *(v6 + 32) = *(v2 + 1);
    }
}


// 0x80d5718
int __fastcall sub_80D5718(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(129, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 22) = *(v10 + 22);
        *(v4 + 44) = v5;
        *(v4 + 76) = v10;
    }
    return result;
}


// 0x80d5740
void sub_80D5740()
{
    int v0; // r5

    (*(&off_80D5758 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80d5764
signed int __noreturn sub_80D5764()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    signed int result; // r0

    sprite_load(v0, 128, 16, 18);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    sprite_setPallete(0);
    *(v0 + 32) = *(v0 + 5);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 52) += sub_8018810(*(*(v0 + 76) + 40), 29, *(v0 + 22), *(v0 + 23)) << 16;
    *(v0 + 60) += v2 << 16;
    if ( *(v0 + 4) )
    {
        **(v0 + 96) = v0;
        --*(v0 + 58);
        --*(v0 + 62);
        *(v0 + 52) += 2621440 * object_getFrontDirection(v0);
    }
    else
    {
        *(v0 + 52) -= 2621440 * object_getFrontDirection(v0);
    }
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d5806
signed int sub_80D5806()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    signed int result; // r0
    int v4; // r2
    signed int v5; // r3

    sub_80D584E();
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1--, 1);
    *(v0 + 32) = v1;
    if ( !(((v1 < 0) ^ v2) | (v1 == 0)) )
    {
        result = *(v0 + 4);
        if ( !*(v0 + 4) )
            return result;
        result = **(v0 + 96);
        if ( result )
            return result;
        v4 = v0 + 100;
        v5 = 5;
        do
        {
            if ( *v4 )
                *(*v4 + 32) = 1;
            v4 += 4;
            --v5;
        }
        while ( v5 );
    }
    if ( *(v0 + 4) )
        **(v0 + 96) = 0;
    result = 8;
    *(v0 + 8) = 8;
    return result;
}


// 0x80d584e
int sub_80D584E()
{
    int v0; // r5
    int result; // r0
    int v2; // r4
    int v3; // r7
    int v4; // r0

    result = *(v0 + 32);
    if ( result == *(v0 + 5) )
    {
        v2 = object_getFrontDirection(v0);
        LOBYTE(result) = *(v0 + 18);
        v3 = v0 + 100;
        do
        {
            sub_80D5874(result);
            v3 += 4;
            result = v4 + v2;
        }
        while ( result && result <= 6 );
    }
    return result;
}


// 0x80d5874
void __fastcall sub_80D5874(char a1)
{
    int v1; // r5
    int v2; // r6
    int v3; // r0

    v2 = *(v1 + 44);
    v3 = sub_80D69E2(a1, *(v1 + 19), *(v1 + 14), 0x100000);
    if ( v3 )
        *(v3 + 32) = *(v1 + 5);
}


// 0x80d5890
int __fastcall sub_80D5890(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(130, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 44) = v5;
        *(v4 + 76) = v11;
        *(v4 + 96) = v6;
    }
    return result;
}


// 0x80d58b4
void sub_80D58B4()
{
    int v0; // r5

    (*(&off_80D58CC + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d58d8
signed int __noreturn sub_80D58D8()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    *(v0 + 52) += 1179648 * object_getFrontDirection(v0);
    sprite_load(v0, 128, 8, 10);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 25;
    *(v0 + 17) = 25;
    sprite_setAnimation(v0, 0x19u);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d592c
int sub_80D592C()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        result = battle_isTimeStop();
        if ( v2 )
            result = (*(&off_80D5954 + *(v0 + 9)))();
    }
    return result;
}


// 0x80d595c
int sub_80D595C()
{
    Battle *v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    if ( !v0->currPhase )
    {
        v0->currPhase = 4;
        sub_80D5A0A();
    }
    v1 = v0->Timer;
    v2 = __OFSUB__(v1--, 1);
    v0->Timer = v1;
    if ( ((v1 < 0) ^ v2) | (v1 == 0) )
    {
        v0->currAction = 4;
        result = 0;
        v0->currPhase = 0;
    }
    else
    {
        v0->x += v0->vx;
        v0->y += v0->vy;
        result = object_setPanelsFromCoordinates(v0);
    }
    return result;
}


// 0x80d5994
int sub_80D5994()
{
    int v0; // r5
    int result; // r0

    if ( *(v0 + 11) )
    {
        result = *(v0 + 32) - 1;
        *(v0 + 32) = result;
        if ( result == 25 )
        {
            sub_80D5A9C();
            object_isCurrentPanelSolid();
        }
        if ( result <= 0 )
        {
            result = 8;
            *(v0 + 8) = 8;
        }
    }
    else
    {
        *(v0 + 11) = 4;
        *(v0 + 16) = 26;
        result = 30;
        *(v0 + 32) = 30;
    }
    return result;
}


// 0x80d59e2
int __fastcall sub_80D59E2(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(131, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d5a0a
int sub_80D5A0A()
{
    int v0; // r5
    int v1; // r1
    int v2; // r1
    int v3; // r6
    int v4; // r4
    signed int v5; // r2
    int v6; // r0
    signed int v11; // r2
    int v12; // r0
    int v13; // r0
    int v14; // r1
    int result; // r0
    signed int v16; // r2

    v1 = *(v0 + 6);
    v3 = object_getCoordinatesForPanels(*(v0 + 5));
    v4 = *&byte_80D5A8C[4 * *(v0 + 4)];
    if ( *(v0 + 18) == *(v0 + 5) )
    {
        *(v0 + 64) = 0;
        v16 = 1;
        if ( *(v0 + 56) >= v2 )
            v16 = -1;
        *(v0 + 68) = v16 * v4;
        result = *(v0 + 56) - v2;
        if ( result < 0 )
            result = v2 - *(v0 + 56);
        __asm { SVC         6 }
        *(v0 + 32) = result;
    }
    else
    {
        v5 = 1;
        if ( *(v0 + 52) >= v3 )
            v5 = -1;
        *(v0 + 64) = v5 * v4;
        v6 = *(v0 + 52) - v3;
        if ( v6 < 0 )
            v6 = v3 - *(v0 + 52);
        __asm { SVC         6 }
        *(v0 + 32) = v6;
        v11 = 1;
        v12 = *(v0 + 56);
        if ( v12 >= v2 )
            v11 = -1;
        v13 = v12 - v2;
        if ( v13 < 0 )
            v13 = -v13;
        v14 = *(v0 + 32);
        __asm { SVC         6 }
        result = v13 * v11;
        *(v0 + 68) = result;
    }
    return result;
}


// 0x80d5a9c
int sub_80D5A9C()
{
    int v0; // r5
    int v1; // r6

    v1 = *(v0 + 44);
    return object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
}


// 0x80d5abc
void sub_80D5ABC()
{
    int v0; // r5

    (*(&off_80D5AD4 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d5ae0
int __noreturn sub_80D5AE0()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1
    int v6; // r0
    int v7; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 25;
    *(v0 + 52) += 983040 * object_getFrontDirection(v0);
    sprite_load(v0, 128, 12, 51);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(*(v0 + 22) ^ 1);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 6, 5, 1);
    v4 = object_setCollisionHitEffect(6);
    object_presentCollisionData(v4, v5);
    v6 = object_getFrontDirection(v0);
    v7 = *&byte_80D5B74[4 * *(v0 + 4)];
    *(v0 + 96) = v7;
    *(v0 + 64) = v6 * v7;
    *(v0 + 32) = sub_80D5C26();
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d5b84
void __noreturn sub_80D5B84()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    char v3; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        if ( *(*(v0 + 84) + 112) )
            object_clearCollisionRegion();
        v1 = battle_isTimeStop();
        if ( v3 )
            v1 = (*(&off_80D5BC8 + *(v0 + 9)))();
        object_presentCollisionData(v1, v2);
    }
}


// 0x80d5bcc
signed int sub_80D5BCC()
{
    int v0; // r5
    int v1; // r4
    int v2; // r0
    unsigned __int8 v3; // vf
    signed int result; // r0

    v1 = *(v0 + 18);
    *(v0 + 52) += *(v0 + 64);
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2--, 1);
    *(v0 + 32) = v2;
    if ( ((v2 < 0) ^ v3) | (v2 == 0) )
    {
        object_clearCollisionRegion();
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        result = *(v0 + 18);
        if ( result != v1 )
            result = object_setCollisionRegion(1);
    }
    return result;
}


// 0x80d5c00
int __fastcall sub_80D5C00(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(132, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d5c26
int sub_80D5C26()
{
    int v0; // r5
    char v1; // r0
    int v2; // r1
    int result; // r0
    int v4; // r1

    v1 = 7;
    if ( *(v0 + 22) )
        v1 = 0;
    v2 = *(v0 + 19);
    result = object_getCoordinatesForPanels(v1) - *(v0 + 52);
    if ( result < 0 )
        result = -result;
    v4 = *(v0 + 96);
    __asm { SVC         6 }
    return result;
}


// 0x80d5c48
void sub_80D5C48()
{
    int v0; // r5

    (*(&off_80D5C60 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80d5c6c
signed int __noreturn sub_80D5C6C()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    sprite_load(v0, 128, 16, 60);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *(v0 + 16) = 0;
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    *v0 |= 2u;
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d5c9a
int sub_80D5C9A()
{
    int v0; // r5
    int v1; // r0
    int result; // r0

    sub_80D5CC8();
    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = 0;
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    if ( v1 < 8 )
        sub_80D5CDC(v1);
    result = *(v0 + 32) + 1;
    *(v0 + 32) = result;
    if ( result > 9 )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d5cc8
int sub_80D5CC8()
{
    Battle *v0; // r5
    u32 v1; // r2
    u32 v2; // r3
    u32 *v3; // r0

    v1 = v0->parent[14];
    v2 = v0->parent[15];
    v3 = &v0->x;
    *v3 = v0->parent[13];
    v3[1] = v1;
    v3[2] = v2;
    return object_setPanelsFromCoordinates(v0);
}


// 0x80d5cdc
int __fastcall sub_80D5CDC(int a1)
{
    int v1; // r5
    int v2; // r6
    int v3; // r0
    char *v4; // r3
    __int64 v5; // r0
    char v6; // ST00_1
    int v7; // ST04_4
    int v8; // r6

    v2 = a1;
    v3 = object_getFrontDirection(v1);
    v4 = &byte_80D5D24[2 * v2];
    LODWORD(v5) = *v4 * v3 + *(v1 + 18);
    HIDWORD(v5) = v4[1] + *(v1 + 19);
    v6 = v5;
    v7 = v4[1] + *(v1 + 19);
    object_highlightPanel(v5);
    *(v1 + 4);
    v8 = *(v1 + 44);
    return object_spawnCollisionRegion(v6, v7, *(v1 + 14), 0);
}


// 0x80d5d34
int __fastcall sub_80D5D34(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int result; // r0
    char v6; // [sp+0h] [bp-14h]
    char v7; // [sp+4h] [bp-10h]
    char v8; // [sp+8h] [bp-Ch]

    v6 = a1;
    v7 = a2;
    v8 = a3;
    object_spawnType3(133, a2, a3, a4);
    result = v4;
    if ( v4 )
        result = sub_801155A(v4, v6, v7, v8);
    return result;
}


// 0x80d5d54
void sub_80D5D54()
{
    int v0; // r5

    (*(&off_80D5D6C + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d5d78
signed int __noreturn sub_80D5D78()
{
    int v0; // r5
    int v1; // r0
    signed int result; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 54) += 10 * object_getFrontDirection(v0);
    *(v0 + 62) = 48;
    sprite_load(v0, 128, 16, 85);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d5dc8
int sub_80D5DC8()
{
    int v0; // r5
    int result; // r0
    char v2; // zf

    if ( battle_isBattleOver() )
    {
        result = 8;
        *(v0 + 8) = 8;
    }
    else
    {
        result = battle_isTimeStop();
        if ( v2 )
            result = (*(&off_80D5DF0 + *(v0 + 9)))();
    }
    return result;
}


// 0x80d5df4
int sub_80D5DF4()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    int v3; // r1
    int v4; // r1
    int v5; // r2
    int result; // r0
    int v7; // r0
    unsigned __int8 v8; // vf
    int v9; // r0
    int v10; // r1
    int v11; // r0
    __int64 v12; // r0
    int v13; // r1

    if ( *(v0 + 10) )
    {
        v7 = *(v0 + 32);
        v8 = __OFSUB__(v7--, 1);
        *(v0 + 32) = v7;
        if ( (v7 < 0) ^ v8 )
        {
            v9 = object_getPanelParameters(*(v0 + 18), *(v0 + 19));
            v10 = *&byte_80D5EA0[4 * *(v0 + 22)];
            if ( v9 & v10 )
            {
                PlaySoundEffect(112, v10, byte_80D5EA0);
                SpawnT4BattleObjectWithId0(v0, v0 + 64, *(v0 + 52), *(v0 + 56), *(v0 + 60));
                sub_80D5EDE();
            }
            *(v0 + 8) = 8;
            result = 0;
            *(v0 + 34) = 0;
        }
        else
        {
            v11 = *(v0 + 34) + 1;
            *(v0 + 34) = v11;
            if ( !__CFSHR__(v11, 3) )
            {
                LODWORD(v12) = *(v0 + 20);
                HIDWORD(v12) = *(v0 + 21);
                object_highlightPanel(v12);
            }
            *(v0 + 52) += *(v0 + 64);
            *(v0 + 56) += *(v0 + 68);
            v13 = *(v0 + 72);
            *(v0 + 60) += v13;
            *(v0 + 72) = v13 - 0x4000;
            result = object_setPanelsFromCoordinates(v0);
        }
    }
    else
    {
        *(v0 + 10) = 4;
        v1 = *(v0 + 21);
        v2 = object_getCoordinatesForPanels(*(v0 + 20));
        *(v0 + 64) = sub_8001330((v0 + 52), v2, v3);
        *(v0 + 68) = v4;
        *(v0 + 72) = v5;
        *(v0 + 32) = 45;
        result = 0;
        *(v0 + 34) = 0;
    }
    return result;
}


// 0x80d5ea8
int sub_80D5EA8()
{
    return object_genericDestroy();
}


// 0x80d5eb0
int __fastcall sub_80D5EB0(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(134, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 20) = v7;
        *(v4 + 21) = v8;
        *(v4 + 18) = *(v10 + 18);
        *(v4 + 19) = *(v10 + 19);
        *(v4 + 14) = v9;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d5ede
int sub_80D5EDE()
{
    int v0; // r5
    int v1; // r6
    int result; // r0

    v1 = *(v0 + 44);
    result = object_spawnCollisionRegion(*(v0 + 18), *(v0 + 19), *(v0 + 14), 0);
    if ( result )
        *(result + 32) = 5;
    return result;
}


// 0x80d5f08
void sub_80D5F08()
{
    int v0; // r5

    (*(&off_80D5F20 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d5f2c
int __noreturn sub_80D5F2C()
{
    int v0; // r5
    int v1; // r0
    _BYTE *v2; // r0
    int result; // r0
    int v4; // r0
    int v5; // r1

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    sub_80D61FC();
    sprite_load(v0, 128, 16, 84);
    sprite_hasShadow();
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    sub_80169BE();
    v2 = object_createCollisionData();
    if ( !v2 )
        return object_freeMemory();
    object_setupCollisionData(v2, 19, 20, 3);
    object_setCollisionHitEffect(9);
    v4 = object_clearCollisionRegion();
    object_presentCollisionData(v4, v5);
    *(v0 + 6) = 0;
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d5fa0
void __noreturn sub_80D5FA0()
{
    Battle *v0; // r5
    int v1; // r0
    int v2; // r0
    int v3; // r1
    char v4; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
        goto LABEL_10;
    sub_80169BE();
    v1 = *(v0->parent + 9);
    if ( v1 != 10 )
    {
        SpawnT4BattleObjectWithId0(v0, v1, v0->x, v0->y, 0x100000);
LABEL_10:
        object_clearCollisionRegion();
        v0->currState = 8;
        return;
    }
    if ( *&byte_80D6018[4 * v0->Alliance] & v0->collisionData->collisionFlags )
        object_clearCollisionRegion();
    v2 = battle_isTimeStop();
    if ( v4 )
        v2 = (*(&off_80D6004 + v0->currAction))();
    object_presentCollisionData(v2, v3);
}


// 0x80d6020
int sub_80D6020()
{
    int v0; // r5
    int v1; // r0
    __int16 v2; // r1
    int v3; // r4
    int v4; // r0
    unsigned __int8 v5; // vf
    int result; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        v1 = object_getFrontDirection(v0);
        *(v0 + 64) = sub_80D61D2(2 * v1 + *(v0 + 18), *&byte_80D6088[4 * *(v0 + 4)]);
        *(v0 + 32) = v2;
    }
    *(v0 + 52) += *(v0 + 64);
    v3 = *(v0 + 18);
    if ( *(*(v0 + 84) + 112) )
        object_clearCollisionRegion();
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    if ( *(v0 + 18) != v3 )
        object_setCollisionRegion(1);
    v4 = *(v0 + 32);
    v5 = __OFSUB__(v4, 1);
    result = v4 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v5 )
    {
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80d6098
int sub_80D6098()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( *(v0 + 10) )
    {
        v2 = *(v0 + 32);
        v3 = __OFSUB__(v2, 1);
        result = v2 - 1;
        *(v0 + 32) = result;
        if ( (result < 0) ^ v3 )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        result = *(v0 + 96);
        *(v0 + 32) = result;
    }
    return result;
}


// 0x80d60bc
int sub_80D60BC()
{
    int v0; // r5
    __int16 v1; // r1
    int v2; // r4
    int v3; // r0
    unsigned __int8 v4; // vf
    int result; // r0
    int v6; // r0

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 62) = 0;
        sub_80D61FC();
        *(v0 + 64) = sub_80D61D2(*(&dword_80D6160 + *(v0 + 22)), *&byte_80D614C[4 * *(v0 + 4)]);
        *(v0 + 32) = v1;
    }
    *(v0 + 52) += *(v0 + 64);
    v2 = *(v0 + 18);
    if ( *(*(v0 + 84) + 112) )
        object_clearCollisionRegion();
    object_setPanelsFromCoordinates(v0);
    object_updateCollisionPanels(v0);
    if ( object_isCurrentPanelValid() )
    {
        if ( *(v0 + 18) != v2 )
            object_setCollisionRegion(1);
    }
    else
    {
        object_clearCollisionRegion();
    }
    v3 = *(v0 + 32);
    v4 = __OFSUB__(v3, 1);
    result = v3 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v4 )
    {
        v6 = *(v0 + 6) + 1;
        *(v0 + 6) = v6;
        if ( v6 >= 5 )
        {
            object_clearCollisionRegion();
            result = 8;
            *(v0 + 8) = 8;
        }
        else
        {
            *(v0 + 62) = 255;
            *(v0 + 9) = 12;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    return result;
}


// 0x80d6164
int sub_80D6164()
{
    int v0; // r5
    char v1; // r1
    int result; // r0
    int v3; // r0
    unsigned __int8 v4; // vf

    if ( *(v0 + 10) )
    {
        v3 = *(v0 + 32);
        v4 = __OFSUB__(v3, 1);
        result = v3 - 1;
        *(v0 + 32) = result;
        if ( ((result < 0) ^ v4) | (result == 0) )
        {
            *(v0 + 9) = 8;
            result = 0;
            *(v0 + 10) = 0;
        }
    }
    else
    {
        *(v0 + 10) = 4;
        v1 = *(*(v0 + 76) + 19);
        *(v0 + 18) = *(&off_80D61A4 + *(v0 + 22));
        *(v0 + 19) = v1;
        object_setCoordinatesFromPanels(v0);
        object_updateCollisionPanels(v0);
        result = 3;
        *(v0 + 32) = 3;
    }
    return result;
}


// 0x80d61a8
int __fastcall sub_80D61A8(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(135, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 76) = v11;
        *(v4 + 44) = v5;
        *(v4 + 96) = v6;
        *(v4 + 22) = *(v11 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d61d2
int __fastcall sub_80D61D2(int a1, int a2)
{
    int v2; // r5
    int v3; // r2
    int result; // r0

    v3 = *(v2 + 18) - a1;
    if ( v3 >= 0 )
        a2 = -a2;
    result = a2;
    __asm { SVC         6 }
    return result;
}


// 0x80d61fc
int sub_80D61FC()
{
    int v0; // r5
    int result; // r0

    result = *(v0 + 5) + 1;
    *(v0 + 62) -= result;
    *(v0 + 58) -= result;
    return result;
}


// 0x80d622c
void sub_80D622C()
{
    int v0; // r5

    (*(&off_80D6244 + *(v0 + 8)))();
    object_updateSpritePaused();
}


// 0x80d6250
int __noreturn sub_80D6250()
{
    int v0; // r5
    __int16 v1; // r1
    u8 v2; // r0
    int v3; // r0
    _BYTE *v4; // r0
    int result; // r0
    int v6; // r0
    int v7; // r1
    __int16 v8; // r0

    object_setCoordinatesFromPanels(v0);
    *(v0 + 62) = 0;
    v1 = *(v0 + 6);
    *(v0 + 62) -= v1;
    *(v0 + 58) -= v1;
    sprite_load(v0, 128, 16, 84);
    sprite_hasShadow();
    *v0 |= 2u;
    v2 = *(&dword_80D62E4 + *(v0 + 5));
    *(v0 + 16) = v2;
    *(v0 + 17) = v2;
    sprite_setAnimation(v0, v2);
    sprite_loadAnimationData(v0);
    sprite_setPallete(0);
    v3 = object_getFlip(v0);
    sprite_setFlip(v0, v3);
    sub_80169BE();
    v4 = object_createCollisionData();
    if ( !v4 )
        return object_freeMemory();
    object_setupCollisionData(v4, 19, 20, 3);
    object_setCollisionHitEffect(6);
    v6 = object_clearCollisionRegion();
    object_presentCollisionData(v6, v7);
    v8 = *(&byte_80D6210 + 4 * *(v0 + 5) + *(v0 + 4) + 2);
    *(v0 + 36) = v8;
    *(v0 + 38) = v8;
    result = 4;
    *(v0 + 8) = 4;
    return result;
}


// 0x80d62e8
void __noreturn sub_80D62E8()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r2
    unsigned __int8 v4; // vf
    int v5; // r0
    int v6; // r0
    int v7; // r1
    char v8; // zf

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( battle_isBattleOver() )
        goto LABEL_12;
    v1 = sub_801156A(0);
    if ( (v1 < 0) ^ v4 )
    {
        sub_80D644E(v1, v2, v3);
        goto LABEL_12;
    }
    sub_80169BE();
    v5 = *(*(v0 + 76) + 9);
    if ( v5 != 12 )
    {
        sub_80D6544(v5);
LABEL_12:
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
        return;
    }
    if ( *&byte_80D635C[4 * *(v0 + 22)] & *(*(v0 + 84) + 112) )
        object_clearCollisionRegion();
    v6 = battle_isTimeStop();
    if ( v8 )
        v6 = (*(&off_80D6354 + *(v0 + 9)))();
    object_presentCollisionData(v6, v7);
}


// 0x80d6364
void __noreturn sub_80D6364()
{
    int v0; // r5
    __int16 v1; // r1

    if ( !*(v0 + 10) )
    {
        *(v0 + 10) = 4;
        *(v0 + 64) = sub_80D6424(*(&dword_80D63F8 + *(v0 + 22)), *&byte_80D63E4[4 * *(v0 + 4)]);
        *(v0 + 32) = v1;
    }
    *(v0 + 52) += *(v0 + 64);
    sub_80D650C();
}


// 0x80d63fc
int __fastcall sub_80D63FC(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int result; // r0
    char v7; // [sp+0h] [bp-14h]
    char v8; // [sp+4h] [bp-10h]
    char v9; // [sp+8h] [bp-Ch]
    int v10; // [sp+Ch] [bp-8h]

    v7 = a1;
    v8 = a2;
    v9 = a3;
    object_spawnType3(136, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v7;
        *(v4 + 19) = v8;
        *(v4 + 14) = v9;
        *(v4 + 76) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v10 + 22);
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d6424
int __fastcall sub_80D6424(int a1, int a2)
{
    int v2; // r5
    int v3; // r2
    int result; // r0

    v3 = *(v2 + 18) - a1;
    if ( v3 >= 0 )
        a2 = -a2;
    result = a2;
    __asm { SVC         6 }
    return result;
}


// 0x80d644e
void __fastcall sub_80D644E(int a1, int a2, int a3)
{
    int v3; // r5
    int v4; // r1
    int v5; // r0
    int v6; // r1
    signed int v7; // r6
    char *v8; // r3
    int v9; // ST08_4
    bool v10; // zf
    int v11; // r1
    signed int v12; // ST08_4
    int v13; // r6
    int v14; // r0
    int v15; // r1
    char v16; // [sp-8h] [bp-18h]

    PlaySoundEffect(off_80D6500[*(v3 + 5)], off_80D6500, a3);
    v4 = *(v3 + 19);
    v5 = object_getCoordinatesForPanels(*(v3 + 18));
    SpawnT4BattleObjectWithId0(v3, v5, v5, v6, *(v3 + 60));
    if ( *(v3 + 5) == 2 )
    {
        v7 = 0;
        do
        {
            v8 = &byte_80D64D0[2 * v7];
            v16 = *(v3 + 18) + *v8;
            v9 = *(v3 + 19) + v8[1];
            v10 = object_isValidPanel(*(v3 + 18) + *v8, v9) == 0;
            v11 = v9;
            if ( !v10 )
            {
                v12 = v7;
                v13 = *&byte_80D64EC[4 * *(v3 + 4)];
                object_spawnCollisionRegion(v16, v11, 1, 0);
                v7 = v12;
                v14 = object_getCoordinatesForPanels(v16);
                SpawnT4BattleObjectWithId0(v3, v14, v14, v15, *(v3 + 60));
            }
            ++v7;
        }
        while ( v7 < 8 );
    }
}


// 0x80d650c
BOOL __noreturn sub_80D650C()
{
    int v0; // r5
    int v1; // r1
    int v2; // r1
    bool v3; // zf
    BOOL result; // r0
    int v5; // [sp-8h] [bp-Ch]
    int v6; // [sp-4h] [bp-8h]

    v1 = *(v0 + 56);
    v5 = sub_800E258(*(v0 + 52));
    v6 = v2;
    v3 = object_checkPanelParameters(v5, v2, 65552, 0) == 0;
    result = v5;
    if ( v3 )
        result = object_isValidPanel(v5, v6) == 0;
    return result;
}


// 0x80d6544
void __fastcall sub_80D6544(int a1)
{
    Battle *v1; // r5

    SpawnT4BattleObjectWithId0(v1, a1, v1->x, v1->y, 0x100000);
}


// 0x80d655c
void sub_80D655C()
{
    int v0; // r5

    (*(&off_80D6574 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80d6580
void __noreturn sub_80D6580()
{
    int v0; // r5
    int v1; // r0

    sprite_load(v0, 128, 16, 69);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *(v0 + 16) = 1;
    *(v0 + 17) = -1;
    sprite_setAnimation(v0, 0xFFu);
    sprite_loadAnimationData(v0);
    sprite_update(v0);
    *v0 |= 2u;
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    sub_80D67D2();
    sprite_setPallete(*(v0 + 6));
    *(v0 + 64) = -object_getFrontDirection(v0);
    *(v0 + 68) = 1;
    *(v0 + 34) = dword_168;
    *(v0 + 12) = -1;
    *(v0 + 8) = 4;
    sub_80D65E0();
}


// 0x80d65e0
int sub_80D65E0()
{
    int v0; // r5

    return (*(&off_80D65F4 + *(v0 + 9)))();
}


// 0x80d65fc
int sub_80D65FC()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    u32 v3; // r0
    unsigned int v4; // r4
    int v5; // r1
    int v6; // r2
    int v7; // r3
    int result; // r0
    int v9; // r0
    int v10; // r1
    char v11; // r0
    int v12; // r4
    int v13; // r6
    int v14; // r7

    if ( *(v0 + 12) == 255 )
    {
        v1 = *(v0 + 34);
        v2 = __OFSUB__(v1, 1);
        *(v0 + 34) = --v1;
        if ( (v1 < 0) ^ v2 || (v3 = sub_80103BC(*(v0 + 22))) != 0 && *(*(v3 + 88) + 44) & 1 )
            *(v0 + 12) = *(v0 + 5);
    }
    v4 = *(v0 + 18);
    (*(&off_80D668C + *(v0 + 10)))();
    result = *(v0 + 18);
    if ( result != v4 )
    {
        v9 = *(v0 + 12);
        if ( v9 == 255 )
        {
            result = PlaySoundEffect(270, v5, v6);
        }
        else
        {
            *(v0 + 12) = v9 - 1;
            v10 = v4 >> 8;
            v11 = v4;
            v12 = (*(v0 + 6) << 16) + 4 * *(v0 + 4) + 20;
            v13 = *(v0 + 44);
            v14 = *(v0 + 96) + 100 + v0;
            sub_80D68E0(v11, v10, *(v0 + 14), v7);
            ++*(v0 + 96);
            result = *(v0 + 12);
            if ( !*(v0 + 12) )
            {
                *v0 &= 0xFDu;
                *(v0 + 9) = 4;
                result = 0;
                *(v0 + 10) = 0;
            }
        }
    }
    return result;
}


// 0x80d6694
int sub_80D6694()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    char v4; // [sp-8h] [bp-10h]
    int v5; // [sp-4h] [bp-Ch]

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = *(v0 + 4);
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        v4 = *(v0 + 18);
        v5 = *(v0 + 19) + *(v0 + 68);
        if ( object_isValidPanel(*(v0 + 18), v5) )
        {
            *(v0 + 18) = v4;
            *(v0 + 19) = v5;
            sub_80D67D2();
            result = 0;
            *(v0 + 11) = 0;
        }
        else
        {
            *(v0 + 68) = -*(v0 + 68);
            *(v0 + 32) = 0;
            *(v0 + 10) = 4;
            result = 1;
            *(v0 + 11) = 1;
        }
    }
    return result;
}


// 0x80d66e2
int sub_80D66E2()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0
    int v4; // r0
    int v5; // r1
    int *v6; // r1
    int v7; // [sp+4h] [bp-14h]
    int v8; // [sp+8h] [bp-10h]

    if ( !*(v0 + 11) )
    {
        *(v0 + 32) = *(v0 + 4);
        *(v0 + 11) = 4;
    }
    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        v4 = object_getFrontDirection(v0);
        v5 = *(v0 + 64);
        if ( v4 != v5 )
            sub_800D5F0(*(v0 + 18) + v5, *(v0 + 22));
        v7 = *(v0 + 64) + *(v0 + 18);
        v8 = *(v0 + 19);
        if ( object_isValidPanel(v7, v8)
            && (v6 = &byte_80D676C[8 * *(v0 + 22)], object_getPanelsInColumnFiltered(v7, v6, *v6, v6[1]) != 3) )
        {
            *(v0 + 18) = v7;
            *(v0 + 19) = v8;
            sub_80D67D2();
            result = 0;
            *(v0 + 11) = 0;
        }
        else
        {
            *(v0 + 64) = -*(v0 + 64);
            *(v0 + 32) = 0;
            *(v0 + 10) = 0;
            result = 1;
            *(v0 + 11) = 1;
        }
    }
    return result;
}


// 0x80d677c
int sub_80D677C()
{
    int v0; // r5
    int result; // r0
    int v2; // r0
    unsigned __int8 v3; // vf

    if ( !*(v0 + 11) )
    {
        result = *(v0 + 100);
        if ( result )
            return result;
        *(v0 + 32) = 30;
        *(v0 + 11) = 4;
    }
    v2 = *(v0 + 32);
    v3 = __OFSUB__(v2, 1);
    result = v2 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v3 )
    {
        **(v0 + 76) = 0;
        result = 8;
        *(v0 + 8) = 8;
    }
    return result;
}


// 0x80d67a6
int __fastcall sub_80D67A6(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(137, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 76) = v6;
        *v6 = 1;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d67d2
int sub_80D67D2()
{
    Battle *v0; // r5
    int result; // r0

    object_setCoordinatesFromPanels(v0);
    result = v0->y + 0x80000;
    v0->y = result;
    v0->z = 0x80000;
    return result;
}


// 0x80d67ec
void sub_80D67EC()
{
    int v0; // r5

    (*(&off_80D6804 + *(v0 + 8)))();
    object_updateSpriteTimestop();
}


// 0x80d6810
int __noreturn sub_80D6810()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    int v3; // r2

    sprite_load(v0, 128, 16, 69);
    sprite_loadAnimationData(v0);
    sprite_noShadow(v0);
    *(v0 + 16) = 1;
    *(v0 + 17) = -1;
    *v0 |= 2u;
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    sub_80D67D2();
    *(v0 + 32) = *(v0 + 4);
    sprite_setPallete(*(v0 + 6));
    PlaySoundEffect(189, v2, v3);
    *(v0 + 8) = 4;
    return sub_80D685A();
}


// 0x80d685a
int sub_80D685A()
{
    int v0; // r5

    return (*(&off_80D686C + *(v0 + 9)))();
}


// 0x80d6874
int sub_80D6874()
{
    int v0; // r5
    int v1; // r0
    unsigned __int8 v2; // vf
    int result; // r0

    v1 = *(v0 + 32);
    v2 = __OFSUB__(v1, 1);
    result = v1 - 1;
    *(v0 + 32) = result;
    if ( (result < 0) ^ v2 )
    {
        *(v0 + 16) = 1;
        *(v0 + 9) = 4;
        result = 0;
        *(v0 + 10) = 0;
    }
    return result;
}


// 0x80d688c
void __noreturn sub_80D688C()
{
    object_isCurrentPanelSolid();
}


// 0x80d68e0
int __fastcall sub_80D68E0(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    _BYTE *v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(138, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 76) = v6;
        *v6 = 1;
        *v4 |= 0x10u;
    }
    return result;
}


// 0x80d6924
int sub_80D6924()
{
    int v0; // r5

    return (*(&off_80D6938 + *(v0 + 8)))();
}


// 0x80d6944
int sub_80D6944()
{
    int v0; // r5

    **(v0 + 76) = 0;
    return object_genericDestroy();
}


// 0x80d6952
int sub_80D6952()
{
    int v0; // r5
    char *v1; // r4
    _BYTE *v2; // r0
    _BYTE *v3; // r7
    int v5; // r1
    _DWORD *v6; // r0

    v1 = &byte_80D6914[8 * *(v0 + 4)];
    *(v0 + 96) = v1;
    if ( object_isCurrentPanelValid() )
    {
        object_setCoordinatesFromPanels(v0);
        v2 = object_createCollisionData();
        v3 = v2;
        if ( v2 )
        {
            object_setupCollisionData(v2, *v1, v1[1], *(v1 + 1));
            v3[1] = v1[3];
            object_setCollisionHitEffect(v1[2]);
            if ( v1[5] )
                object_setCollisionStatusEffect1(v1[5]);
            if ( v1[6] )
                sub_801A4D0(v1[6], v1[7]);
            v6 = *(v0 + 76);
            *v6 = v0;
            object_presentCollisionData(v6, v5);
            *(v0 + 8) = 4;
            sub_80D69B8();
        }
    }
    return object_freeMemory();
}


// 0x80d69b8
void __noreturn sub_80D69B8()
{
    int v0; // r5
    int v1; // r1
    int v2; // r0
    unsigned __int8 v3; // vf
    int v4; // r0

    object_removeCollisionData();
    object_spawnCollisionEffect();
    if ( *(*(v0 + 84) + 112)
        || (v2 = *(v0 + 32), v3 = __OFSUB__(v2, 1), v4 = v2 - 1, *(v0 + 32) = v4, ((v4 < 0) ^ v3) | (v4 == 0)) )
    {
        object_clearCollisionRegion();
        *(v0 + 8) = 8;
    }
    else
    {
        object_presentCollisionData(v4, v1);
    }
}


// 0x80d69e2
int __fastcall sub_80D69E2(char a1, int a2, int a3, int a4)
{
    int v4; // r5
    int v5; // r6
    int v6; // r7
    int result; // r0
    char v8; // [sp+0h] [bp-14h]
    char v9; // [sp+4h] [bp-10h]
    char v10; // [sp+8h] [bp-Ch]
    int v11; // [sp+Ch] [bp-8h]

    v8 = a1;
    v9 = a2;
    v10 = a3;
    object_spawnType3(139, a2, a3, a4);
    result = v4;
    if ( v4 )
    {
        *(v4 + 18) = v8;
        *(v4 + 19) = v9;
        *(v4 + 14) = v10;
        *(v4 + 44) = v5;
        *(v4 + 22) = *(v11 + 22);
        *(v4 + 76) = v6;
    }
    return result;
}


// 0x80d6a02
_BYTE *__fastcall sub_80D6A02(char a1, int a2, int a3, int a4)
{
    _BYTE *result; // r0

    result = sub_80D69E2(a1, a2, a3, a4);
    if ( result )
        *result |= 0x10u;
    return result;
}


// 0x80d6a20
void sub_80D6A20()
{
    int v0; // r5

    (*(&off_80D6A38 + *(v0 + 8)))();
    object_updateSprite();
}


// 0x80d6a44
int __noreturn sub_80D6A44()
{
    int v0; // r5
    int v1; // r0
    int v2; // r1
    _BYTE *v3; // r0
    _BYTE *v4; // r7
    int v6; // r1
    int v7; // r0
    int v8; // r1
    int v9; // r2

    sprite_load(v0, 128, 16, 64);
    sprite_noShadow(v0);
    *v0 |= 2u;
    *(v0 + 16) = 0;
    *(v0 + 17) = 0;
    sprite_setAnimation(v0, 0);
    sprite_loadAnimationData(v0);
    sprite_setPallete(*(&dword_80D6B24 + *(v0 + 7)));
    v1 = object_getFlip(v0);
    sprite_setFlip(v0, v1);
    *(v0 + 32) = *(v0 + 6);
    object_setCoordinatesFromPanels(v0);
    *(v0 + 54) -= 40 * object_getFrontDirection(v0);
    *(v0 + 52) += sub_8018810(*(*(v0 + 76) + 40), 28, *(v0 + 22), *(v0 + 23)) << 16;
    *(v0 + 60) += v2 << 16;
    v3 = object_createCollisionData();
    v4 = v3;
    if ( v3 )
    {
        object_setupCollisionData(v3, 11, 5, *(v0 + 4));
        v4[1] = 21;
        object_setCollisionHitEffect(255);
        if ( !*(*(v0 + 84) + 16) )
            object_setCollisionStatusEffect1(*(v0 + 5));
        v7 = *(v0 + 7);
        if ( v7 >= 2 )
        {
            if ( v7 == 3 )
            else
        }
    }
