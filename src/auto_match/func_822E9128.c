typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_160;
extern unsigned int *auStack_168;
extern unsigned int *auStack_181;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_1f0;
extern unsigned int *auStack_220;
extern unsigned int *auStack_230;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230040();
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C7078();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822C9D68();
extern int fn_822D53F8();
extern int fn_822EA180();
extern int fn_822EA400();
extern int fn_822EA610();
extern int fn_822EA758();
extern int fn_822EA7D8();
extern int fn_822EA890();
extern int fn_822EAA00();
extern int fn_822FB078();
extern int fn_8231FFB0();
extern int fn_82359BB0();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_823F2E20();
extern int fn_824060E8();
extern int fn_8265C9E0();
extern unsigned int iStack_18c;
extern unsigned int iStack_1f4;
extern unsigned int iStack_1fc;
extern unsigned int iStack_204;
extern unsigned int iStack_208;
extern unsigned int iStack_23c;
extern unsigned int iStack_244;
extern unsigned int iStack_248;
extern unsigned int iStack_24c;
extern unsigned int iStack_250;
extern unsigned int iStack_254;
extern unsigned int iStack_258;
extern unsigned int iStack_25c;
extern unsigned int iStack_260;
extern unsigned int iStack_284;
extern unsigned int iStack_288;
extern unsigned int iStack_29c;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AE1D8;
extern unsigned int lbl_822EA5D0;
extern unsigned int lbl_822EA5F0;
extern unsigned int uStack0000001c;
extern unsigned int uStack_164;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1f8;
extern unsigned int uStack_200;
extern unsigned int uStack_210;
extern unsigned int uStack_268;
extern unsigned int uStack_26c;
extern unsigned int uStack_270;
extern unsigned int uStack_290;
extern unsigned int uStack_2a8;
extern unsigned int uStack_2ac;
extern unsigned int uStack_2b0;
extern U64 storeWordConditionalIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_822E9128(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar11;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar12;
  undefined4 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined *puVar21;
  undefined4 *puVar22;
  char in_RESERVE;
  byte bVar23;
  double dVar24;
  undefined4 uStack0000001c;
  undefined4 *puStack_2d0;
  undefined4 *puStack_2cc;
  undefined4 *puStack_2c8;
  undefined4 *puStack_2c4;
  undefined4 *apuStack_2c0 [4];
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined *puStack_2a0;
  int iStack_29c;
  undefined4 *puStack_298;
  undefined4 *puStack_294;
  undefined8 uStack_290;
  int iStack_288;
  int iStack_284;
  undefined4 *apuStack_280 [4];
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  int iStack_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  undefined **ppuStack_240;
  int iStack_23c;
  undefined1 auStack_230 [4];
  int *piStack_22c;
  undefined1 auStack_220 [16];
  undefined8 uStack_210;
  int iStack_208;
  int iStack_204;
  uint uStack_200;
  int iStack_1fc;
  uint uStack_1f8;
  int iStack_1f4;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined **ppuStack_1b0;
  undefined4 uStack_1ac;
  undefined **ppuStack_1a8;
  undefined4 uStack_1a4;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [4];
  int iStack_18c;
  undefined1 auStack_181 [17];
  int *piStack_170;
  undefined1 auStack_168 [4];
  undefined4 uStack_164;
  undefined1 auStack_160 [16];
  int *piStack_150;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [192];
  
  iVar6 = (((U64)(uStack_210) >> 0) & 0xFFFFFFFF);
  iVar12 = (((U64)(uStack_290) >> 0) & 0xFFFFFFFF);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar20 = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  ppuStack_240 = (undefined **)0x0;
  uStack0000001c = param_2;
  fn_824060E8(&puStack_2a0,param_1 + 0x34);
  fn_822C7078(auStack_230,&puStack_2a0,uVar2,uVar1);
  iStack_29c = 0;
  puStack_2a0 = &lbl_822EA5D0;
  uStack_290 = 0x822ea5d000000000;
  iStack_288 = param_1;
  piStack_170 = (int *)fn_8265C9E0(0x18);
  if (piStack_170 == (int *)0x0) {
    uStack_1ac = 0;
    ppuStack_1b0 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_1b0);
  }
  iStack_29c = 0;
  *piStack_170 = (int)&lbl_821AE1D8;
  piStack_170[2] = iVar12;
  piStack_170[3] = (((U64)(uStack_290) >> 32) & 0xFFFFFFFF);
  piStack_170[4] = iStack_288;
  piStack_170[5] = iStack_284;
  puStack_2a0 = &lbl_822EA5F0;
  uStack_210 = 0x822ea5f000000000;
  iStack_208 = param_1;
  piStack_150 = (int *)fn_8265C9E0(0x18);
  if (piStack_150 != (int *)0x0) {
    *piStack_150 = (int)&lbl_821AE1D8;
    apuStack_2c0[0] = lbl_82193AF0;
    apuStack_280[0] = lbl_821917D4;
    dVar24 = (double)(float)lbl_82193AF0;
    piStack_150[3] = (((U64)(uStack_210) >> 32) & 0xFFFFFFFF);
    piStack_150[2] = iVar6;
    piStack_150[4] = iStack_208;
    piStack_150[5] = iStack_204;
    fn_822EA758(&puStack_2a0,*(undefined4 *)(param_1 + 0x48),apuStack_2c0,apuStack_280);
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    puVar21 = puStack_2a0 + 4;
    puStack_2cc = (undefined4 *)fn_8265C9E0(0x90);
    ppuStack_240 = &lbl_821A8D8C;
    if (puStack_2cc == (undefined4 *)0x0) {
      puStack_2cc = (undefined4 *)0x0;
    }
    else {
      *puStack_2cc = &lbl_821A8D8C;
      puStack_2cc[1] = 1;
      puStack_2cc[2] = 1;
      if (puStack_2cc + 4 != (undefined4 *)0x0) {
        fn_82365BD8(&uStack_210,&puStack_2a0);
        fn_8231FFB0(puStack_2cc + 4,&uStack_210,puVar21,auStack_181 + 1,uVar2,uVar1);
        if ((((U64)(uStack_210) >> 32) & 0xFFFFFFFF) != 0) {
          fn_822315A0();
        }
      }
    }
    apuStack_2c0[0] = (undefined4 *)(U32)(float)dVar24;
    puStack_2d0 = puStack_2cc + 4;
    apuStack_280[0] = puStack_2cc;
    fn_822EA7D8(&uStack_210,apuStack_2c0);
    uVar8 = uStack_210 >> 0x20;
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    puStack_2c4 = (undefined4 *)fn_8265C9E0(0x90);
    if (puStack_2c4 == (undefined4 *)0x0) {
      puStack_2c4 = (undefined4 *)0x0;
    }
    else {
      *puStack_2c4 = &lbl_821A8D8C;
      puStack_2c4[1] = 1;
      puStack_2c4[2] = 1;
      if (puStack_2c4 + 4 != (undefined4 *)0x0) {
        fn_82365BD8(&iStack_250,&uStack_210);
        fn_8231FFB0(puStack_2c4 + 4,&iStack_250,uVar8 + 4,auStack_160,uVar2,uVar1);
        if (iStack_24c != 0) {
          fn_822315A0();
        }
      }
    }
    puStack_2c8 = puStack_2c4 + 4;
    apuStack_2c0[0] = puStack_2c4;
    fn_822EA890(&uStack_1f8,0xffffffff821ae0ac,auStack_230,*(undefined4 *)(param_1 + 0x80),
                      0xffffffff821ae098);
    fn_822EA890(&uStack_200,0xffffffff821aded8,auStack_230,*(undefined4 *)(param_1 + 0x80),
                      0xffffffff821ae0bc);
    puVar17 = (uint *)(param_1 + 0xc0);
    uVar7 = fn_822EA890(auStack_168,0xffffffff821ae0e8,auStack_230,
                              *(undefined4 *)(param_1 + 0x80),0xffffffff821ae0d0);
    fn_823F2E20(puVar17,uVar7);
    if (uStack_164 != 0) {
      fn_822315A0();
    }
    puVar18 = (uint *)(param_1 + 200);
    uVar7 = fn_822EA890(auStack_190,0xffffffff821ae114,auStack_230,
                              *(undefined4 *)(param_1 + 0x80),0xffffffff821ae0fc);
    fn_823F2E20(puVar18,uVar7);
    if (iStack_18c != 0) {
      fn_822315A0();
    }
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    puStack_294 = (undefined4 *)fn_8265C9E0(0xac);
    if (puStack_294 == (undefined4 *)0x0) {
      puStack_294 = (undefined4 *)0x0;
    }
    else {
      *puStack_294 = &lbl_821AD588;
      puStack_294[1] = 1;
      puStack_294[2] = 1;
      if (puStack_294 + 3 != (undefined4 *)0x0) {
        fn_82230110(auStack_e0,0xffffffff821ae128);
        fn_82230110(auStack_140,0xffffffff821ae13c);
        fn_822FB078(puStack_294 + 3,auStack_140,auStack_230,uVar1,auStack_e0);
        fn_82230300(auStack_140,1,0);
        fn_82230300(auStack_e0,1,0);
      }
    }
    puStack_298 = puStack_294 + 3;
    puVar19 = (uint *)(param_1 + 0xd0);
    fn_823F2E20(puVar19,&puStack_298);
    if (puStack_294 != (undefined4 *)0x0) {
      fn_822315A0();
    }
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    puVar11 = (undefined4 *)fn_8265C9E0(0xac);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = &lbl_821AD588;
      puVar11[1] = 1;
      puVar11[2] = 1;
      if (puVar11 + 3 != (undefined4 *)0x0) {
        fn_82230110(auStack_100,0xffffffff821accb4);
        fn_82230110(auStack_120,0xffffffff821ade9c);
        fn_822FB078(puVar11 + 3,auStack_120,auStack_230,uVar1,auStack_100);
        fn_82230300(auStack_120,1,0);
        fn_82230300(auStack_100,1,0);
      }
    }
    puStack_298 = puVar11 + 3;
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x44);
    puStack_294 = puVar11;
    uVar8 = fn_8265C9E0(0xa8);
    if ((uVar8 & 0xffffffff) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = fn_822EAA00(uVar8,0xffffffff821ae14c,auStack_230,0xffffffff821ae14c,uVar3,uVar2,
                              uVar1);
    }
    iStack_254 = (int)uVar8;
    iStack_258 = iStack_254 + 0xc;
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x44);
    uVar9 = fn_8265C9E0(0xa8);
    if ((uVar9 & 0xffffffff) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = fn_822EAA00(uVar9,0xffffffff821ae180,auStack_230,0xffffffff821ae160,uVar3,uVar2,
                              uVar1);
    }
    iStack_25c = (int)uVar9;
    iStack_260 = iStack_25c + 0xc;
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x44);
    uVar10 = fn_8265C9E0(0xa8);
    if ((uVar10 & 0xffffffff) != 0) {
      uVar20 = fn_822EAA00(uVar10,0xffffffff821adec4,auStack_230,0xffffffff821adec4,uVar3,uVar2,
                               uVar1);
    }
    iStack_244 = (int)uVar20;
    iStack_248 = iStack_244 + 0xc;
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x44);
    uVar10 = fn_8265C9E0(0xa8);
    if ((uVar10 & 0xffffffff) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = fn_822EAA00(uVar10,0xffffffff821adea8,auStack_230,0xffffffff821adea8,uVar3,uVar2,
                               uVar1);
    }
    iStack_24c = (int)uVar10;
    iStack_250 = iStack_24c + 0xc;
    iVar12 = fn_82365BD8(&uStack_290,&puStack_2c8);
    fn_82376640((ulonglong)uStack_1f8 + 0x30,iVar12);
    if (*(int *)(iVar12 + 4) != 0) {
      fn_822315A0();
    }
    iVar12 = fn_82365BD8(&uStack_290,&puStack_2c8);
    fn_82376640((ulonglong)uStack_200 + 0x30,iVar12);
    if (*(int *)(iVar12 + 4) != 0) {
      fn_822315A0();
    }
    uVar4 = *puVar17;
    iVar12 = fn_82365BD8(&uStack_290,&puStack_2c8);
    fn_82376640((ulonglong)uVar4 + 0x30,iVar12);
    if (*(int *)(iVar12 + 4) != 0) {
      fn_822315A0();
    }
    uVar4 = *puVar18;
    iVar12 = fn_82365BD8(&uStack_290,&puStack_2c8);
    fn_82376640((ulonglong)uVar4 + 0x30,iVar12);
    if (*(int *)(iVar12 + 4) != 0) {
      fn_822315A0();
    }
    uVar4 = *puVar19;
    iVar12 = fn_82365BD8(&uStack_290,&puStack_2c8);
    fn_82376640((ulonglong)uVar4 + 0x30,iVar12);
    if (*(int *)(iVar12 + 4) != 0) {
      fn_822315A0();
    }
    iVar12 = fn_82365BD8(&uStack_290,&puStack_2c8);
    fn_82376640(puVar11 + 0xf,iVar12);
    if (*(int *)(iVar12 + 4) != 0) {
      fn_822315A0();
    }
    iVar12 = fn_82365BD8(&uStack_290,&puStack_2d0);
    fn_82376640(uVar8 + 0x3c,iVar12);
    if (*(int *)(iVar12 + 4) != 0) {
      fn_822315A0();
    }
    iVar12 = fn_82365BD8(&uStack_290,&puStack_2d0);
    fn_82376640(uVar9 + 0x3c,iVar12);
    if (*(int *)(iVar12 + 4) != 0) {
      fn_822315A0();
    }
    iVar12 = fn_82365BD8(&uStack_290,&puStack_2d0);
    fn_82376640(uVar20 + 0x3c,iVar12);
    if (*(int *)(iVar12 + 4) != 0) {
      fn_822315A0();
    }
    iVar12 = fn_82365BD8(&uStack_290,&puStack_2d0);
    fn_82376640(uVar10 + 0x3c,iVar12);
    if (*(int *)(iVar12 + 4) != 0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2d0,&uStack_1f8);
    fn_822C8B40(param_1,&puStack_2d0);
    if (puStack_2cc != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2d0,&uStack_200);
    fn_822C8B40(param_1,&puStack_2d0);
    if (puStack_2cc != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2d0,puVar17);
    fn_822C8B40(param_1,&puStack_2d0);
    if (puStack_2cc != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2d0,puVar18);
    fn_822C8B40(param_1,&puStack_2d0);
    if (puStack_2cc != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2d0,puVar19);
    fn_822C8B40(param_1,&puStack_2d0);
    if (puStack_2cc != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2d0,&puStack_298);
    fn_822C8B40(param_1,&puStack_2d0);
    if (puStack_2cc != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2d0,&iStack_258);
    fn_822C8B40(param_1,&puStack_2d0);
    if (puStack_2cc != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2d0,&iStack_260);
    fn_822C8B40(param_1,&puStack_2d0);
    if (puStack_2cc != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2d0,&iStack_248);
    fn_822C8B40(param_1,&puStack_2d0);
    if (puStack_2cc != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2d0,&iStack_250);
    fn_822C8B40(param_1,&puStack_2d0);
    if (puStack_2cc != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_822D53F8(&puStack_2d0,*(undefined4 *)(param_1 + 0x80));
    uVar15 = ZEXT48(puStack_2d0);
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    puVar13 = (undefined4 *)fn_8265C9E0(0x90);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
      bVar23 = 2;
    }
    else {
      puVar22 = puVar13 + 4;
      puVar13[1] = 1;
      puVar13[2] = 1;
      *puVar13 = ppuStack_240;
      if (puVar22 != (undefined4 *)0x0) {
        fn_82365BD8(&puStack_2c8,&puStack_2d0);
        fn_8231FFB0(puVar22,&puStack_2c8,uVar15 + 4,auStack_181 + 1,uVar2,uVar1);
      }
      bVar5 = puVar22 == (undefined4 *)0x0;
      bVar23 = bVar5 << 1;
      if ((!bVar5) && (puStack_2c4 != (undefined4 *)0x0)) {
        fn_822315A0();
      }
    }
    puStack_2c8 = puVar13 + 4;
    puStack_2c4 = puVar13;
    uVar7 = fn_82365BD8(&uStack_290,&puStack_2d0);
    fn_822EA400(&ppuStack_240,param_1,uVar7,uStack0000001c);
    uVar7 = fn_82365BD8(&uStack_290,&puStack_2c8);
    fn_822EA180(auStack_1f0,param_1,0xffffffff821ae1b0,uVar7);
    uVar7 = fn_82365BD8(&uStack_290,&puStack_2c8);
    fn_822EA180(auStack_1a0,param_1,0xffffffff821ad78c,uVar7);
    uVar7 = fn_82365BD8(&uStack_290,&puStack_2c8);
    fn_822EA180(auStack_1e0,param_1,0xffffffff821ae1b8,uVar7);
    uVar7 = fn_82365BD8(&uStack_290,&puStack_2c8);
    fn_822EA180(auStack_1d0,param_1,0xffffffff821ae1c0,uVar7);
    uVar7 = fn_82365BD8(&uStack_290,&puStack_2c8);
    fn_822EA180(auStack_1c0,param_1,0xffffffff821adee8,uVar7);
    uVar7 = fn_82365BD8(&uStack_290,&puStack_2c8);
    fn_822EA180(auStack_220,param_1,0xffffffff821ae1c8,uVar7);
    uStack_2b0 = 0;
    uStack_2ac = 0;
    uStack_2a8 = 0;
    fn_82365BD8(&puStack_2c8,&uStack_1f8);
    fn_822C9D68(&uStack_2b0,&puStack_2c8);
    if (puStack_2c4 != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2c8,&uStack_200);
    fn_822C9D68(&uStack_2b0,&puStack_2c8);
    if (puStack_2c4 != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2c8,puVar17);
    fn_822C9D68(&uStack_2b0,&puStack_2c8);
    if (puStack_2c4 != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2c8,puVar18);
    fn_822C9D68(&uStack_2b0,&puStack_2c8);
    if (puStack_2c4 != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2c8,puVar19);
    fn_822C9D68(&uStack_2b0,&puStack_2c8);
    if (puStack_2c4 != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&puStack_2c8,&puStack_298);
    fn_822C9D68(&uStack_2b0,&puStack_2c8);
    if (puStack_2c4 != (undefined4 *)0x0) {
      fn_822315A0();
    }
    uStack_270 = 0;
    uStack_26c = 0;
    uStack_268 = 0;
    fn_82365BD8(&puStack_298,&iStack_258);
    fn_822C9D68(&uStack_270,&puStack_298);
    if (puStack_294 != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_82365BD8(&iStack_258,&iStack_260);
    fn_822C9D68(&uStack_270,&iStack_258);
    if (iStack_254 != 0) {
      fn_822315A0();
    }
    fn_82365BD8(&iStack_260,&iStack_248);
    fn_822C9D68(&uStack_270,&iStack_260);
    if (iStack_25c != 0) {
      fn_822315A0();
    }
    fn_82365BD8(&iStack_248,&iStack_250);
    fn_822C9D68(&uStack_270,&iStack_248);
    if (iStack_244 != 0) {
      fn_822315A0();
    }
    fn_822EA610(&uStack_270,&uStack_2b0);
    fn_822EA610(&uStack_2b0,&uStack_270);
    fn_822EA610(auStack_1f0,&uStack_2b0);
    fn_822EA610(auStack_1a0,&uStack_2b0);
    fn_822EA610(auStack_1e0,&uStack_2b0);
    fn_822EA610(auStack_1d0,&uStack_2b0);
    fn_822EA610(auStack_1c0,&uStack_2b0);
    fn_822EA610(auStack_220,&uStack_2b0);
    fn_822EA610(&uStack_270,auStack_1f0);
    fn_822EA610(&uStack_270,auStack_1a0);
    fn_822EA610(&uStack_270,auStack_1e0);
    fn_822EA610(&uStack_270,auStack_1d0);
    fn_822EA610(&uStack_270,auStack_1c0);
    fn_822EA610(&uStack_270,auStack_220);
    fn_822EA610(&uStack_2b0,auStack_1f0);
    fn_822EA610(&uStack_2b0,auStack_1a0);
    fn_822EA610(&uStack_2b0,auStack_1e0);
    fn_822EA610(&uStack_2b0,auStack_1d0);
    fn_822EA610(&uStack_2b0,auStack_1c0);
    fn_822EA610(&uStack_2b0,auStack_220);
    fn_822EA610(auStack_220,auStack_220);
    fn_822EA610(auStack_220,auStack_1c0);
    fn_822EA610(auStack_220,auStack_1e0);
    fn_822EA610(auStack_220,auStack_1d0);
    fn_822EA610(auStack_1f0,auStack_220);
    fn_822EA610(auStack_1f0,auStack_1c0);
    fn_822EA610(auStack_1f0,auStack_1e0);
    fn_822EA610(auStack_1f0,auStack_1d0);
    fn_82230110(auStack_c0,0xffffffff821adebc);
    uVar7 = fn_822C7578(ppuStack_240 + 0x10,uVar15 + 4);
    fn_82230218(uVar7,auStack_c0,0,0xffffffffffffffff);
    fn_82230300(auStack_c0,1,0);
    fn_82359BB0(&uStack_270);
    fn_82359BB0(&uStack_2b0);
    fn_82359BB0(auStack_220);
    fn_82359BB0(auStack_1c0);
    fn_82359BB0(auStack_1d0);
    fn_82359BB0(auStack_1e0);
    fn_82359BB0(auStack_1a0);
    fn_82359BB0(auStack_1f0);
    if (iStack_23c != 0) {
      fn_822315A0();
    }
    if (puVar13 != (undefined4 *)0x0) {
      fn_822315A0(puVar13);
    }
    if (puStack_2cc != (undefined4 *)0x0) {
      fn_822315A0();
    }
    if ((uVar10 & 0xffffffff) != 0) {
      fn_822315A0(uVar10);
    }
    if ((uVar20 & 0xffffffff) != 0) {
      fn_822315A0(uVar20);
    }
    if ((uVar9 & 0xffffffff) != 0) {
      fn_822315A0(uVar9);
    }
    if ((uVar8 & 0xffffffff) != 0) {
      fn_822315A0(uVar8);
    }
    if (puVar11 != (undefined4 *)0x0) {
      fn_822315A0(puVar11);
    }
    if (iStack_1fc != 0) {
      fn_822315A0();
    }
    if (iStack_1f4 != 0) {
      fn_822315A0();
    }
    if (apuStack_2c0[0] != (undefined4 *)0x0) {
      fn_822315A0();
    }
    if ((((U64)(uStack_210) >> 32) & 0xFFFFFFFF) != 0) {
      fn_822315A0();
    }
    if (apuStack_280[0] != (undefined4 *)0x0) {
      fn_822315A0();
    }
    if (iStack_29c != 0) {
      fn_822315A0();
    }
    if (piStack_150 != (int *)0x0) {
      (**(code **)(*piStack_150 + 0xc))
                (piStack_150,
                 (int)(auStack_160 + -(int)piStack_150) -
                 (int)(auStack_160 +
                      (uint)(auStack_160 + -(int)piStack_150 == (undefined1 *)0x0) +
                      -(int)piStack_150 + -1));
      piStack_150 = (int *)0x0;
    }
    if (piStack_170 != (int *)0x0) {
      (**(code **)(*piStack_170 + 0xc))
                (piStack_170,
                 (int)(auStack_181 + -(int)piStack_170 + 1) -
                 (int)(auStack_181 +
                      (uint)(auStack_181 + -(int)piStack_170 + 1 == (undefined1 *)0x0) +
                      -(int)piStack_170));
      piStack_170 = (int *)0x0;
    }
    if (ZEXT48(piStack_22c) != 0) {
      lVar16 = ZEXT48(piStack_22c) + 8;
      do {
        puVar17 = (uint *)lVar16;
        lVar14 = (ulonglong)*puVar17 - 1;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(lVar14,0,lVar16);
          *puVar17 = uVar4;
          bVar23 = 2;
        }
      } while (!(bool)(bVar23 >> 1 & 1));
      if ((int)lVar14 == 0) {
        (**(code **)(*piStack_22c + 4))();
      }
    }
    return;
  }
  uStack_1a4 = 0;
  ppuStack_1a8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_1a8);
}

