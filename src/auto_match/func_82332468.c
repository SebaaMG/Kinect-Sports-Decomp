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
extern unsigned int *auStack_180;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_200;
extern unsigned int *auStack_220;
extern unsigned int *auStack_240;
extern unsigned int *auStack_260;
extern unsigned int *auStack_280;
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_300;
extern unsigned int *auStack_320;
extern unsigned int *auStack_330;
extern unsigned int *auStack_350;
extern unsigned int *auStack_370;
extern unsigned int *auStack_390;
extern unsigned int *auStack_3b0;
extern unsigned int *auStack_3d0;
extern unsigned int *auStack_3f0;
extern unsigned int *auStack_430;
extern unsigned int *auStack_450;
extern unsigned int *auStack_470;
extern unsigned int *auStack_490;
extern unsigned int *auStack_4b0;
extern unsigned int *auStack_4d0;
extern unsigned int *auStack_4f0;
extern unsigned int *auStack_4f8;
extern unsigned int *auStack_500;
extern unsigned int *auStack_508;
extern unsigned int *auStack_510;
extern unsigned int *auStack_518;
extern unsigned int *auStack_520;
extern unsigned int *auStack_560;
extern unsigned int *auStack_580;
extern unsigned int *auStack_5a0;
extern unsigned int *auStack_5b8;
extern unsigned int *auStack_640;
extern unsigned int *auStack_658;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_822C7078();
extern int fn_822C7578();
extern int fn_822C7FD8();
extern int fn_822C8A18();
extern int fn_822C8B40();
extern int fn_822D53F8();
extern int fn_822EA7D8();
extern int fn_822EA970();
extern int fn_822FB4C0();
extern int fn_822FB670();
extern int fn_822FB850();
extern int fn_82333AB0();
extern int fn_82333B98();
extern int fn_82333DC8();
extern int fn_82333E80();
extern int fn_82359C18();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_824060E8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_8265C9E0();
extern unsigned int iStack_4f4;
extern unsigned int iStack_504;
extern unsigned int iStack_50c;
extern unsigned int iStack_51c;
extern unsigned int iStack_5ac;
extern unsigned int iStack_5b4;
extern unsigned int iStack_5f0;
extern unsigned int iStack_60c;
extern unsigned int iStack_614;
extern unsigned int iStack_62c;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B0AAC;
extern unsigned int uStack_3fc;
extern unsigned int uStack_52c;
extern unsigned int uStack_550;
extern unsigned int uStack_5b0;
extern unsigned int uStack_5d4;
extern unsigned int uStack_5d8;
extern unsigned int uStack_5fc;
extern unsigned int uStack_600;
extern unsigned int uStack_610;
extern unsigned int uStack_618;
extern unsigned int uStack_61c;
extern unsigned int uStack_620;
extern unsigned int uStack_628;
extern unsigned int uStack_630;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_82332468(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  int iVar14;
  ulonglong uVar8;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  undefined8 uVar9;
  undefined4 *puVar18;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar19;
  char cVar20;
  undefined4 *****pppppuVar21;
  char *pcVar22;
  longlong lVar23;
  undefined4 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 *puVar29;
  int iVar31;
  ulonglong uVar30;
  char *pcVar32;
  char in_RESERVE;
  byte bVar33;
  double dVar34;
  undefined **appuStack_670 [2];
  undefined4 *puStack_668;
  undefined4 *puStack_664;
  undefined4 *puStack_660;
  undefined4 *puStack_65c;
  undefined4 auStack_658 [2];
  undefined4 *puStack_650;
  undefined4 *puStack_64c;
  undefined1 auStack_640 [4];
  int *piStack_63c;
  uint uStack_630;
  int iStack_62c;
  uint uStack_628;
  uint uStack_620;
  uint uStack_61c;
  uint uStack_618;
  int iStack_614;
  uint uStack_610;
  int iStack_60c;
  undefined4 *puStack_608;
  undefined4 *puStack_604;
  uint uStack_600;
  uint uStack_5fc;
  undefined4 *puStack_5f8;
  undefined4 *puStack_5f4;
  int iStack_5f0;
  undefined4 *puStack_5e8;
  undefined4 *puStack_5e4;
  undefined4 *puStack_5e0;
  undefined4 *puStack_5dc;
  uint uStack_5d8;
  uint uStack_5d4;
  undefined4 *puStack_5d0;
  undefined4 *puStack_5cc;
  undefined4 *puStack_5c8;
  undefined4 *puStack_5c4;
  undefined4 *puStack_5c0;
  undefined4 *puStack_5bc;
  undefined1 auStack_5b8 [4];
  int iStack_5b4;
  uint uStack_5b0;
  int iStack_5ac;
  undefined4 *puStack_5a8;
  undefined4 *puStack_5a4;
  undefined1 auStack_5a0 [32];
  undefined1 auStack_580 [32];
  undefined1 auStack_560 [16];
  undefined4 uStack_550;
  undefined4 ****appppuStack_540 [5];
  uint uStack_52c;
  undefined1 auStack_520 [4];
  int iStack_51c;
  undefined1 auStack_518 [4];
  int *piStack_514;
  undefined1 auStack_510 [4];
  int iStack_50c;
  undefined1 auStack_508 [4];
  int iStack_504;
  undefined1 auStack_500 [8];
  undefined1 auStack_4f8 [4];
  int iStack_4f4;
  undefined1 auStack_4f0 [32];
  undefined1 auStack_4d0 [32];
  undefined1 auStack_4b0 [32];
  undefined1 auStack_490 [32];
  undefined1 auStack_470 [32];
  undefined1 auStack_450 [32];
  undefined1 auStack_430 [32];
  undefined4 ****appppuStack_410 [5];
  uint uStack_3fc;
  undefined1 auStack_3f0 [32];
  undefined1 auStack_3d0 [32];
  undefined1 auStack_3b0 [32];
  undefined1 auStack_390 [32];
  undefined1 auStack_370 [32];
  undefined1 auStack_350 [32];
  undefined1 auStack_330 [16];
  undefined1 auStack_320 [32];
  undefined1 auStack_300 [32];
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [32];
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [32];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [192];
  
  iStack_5f0 = 0;
  fn_822C7FD8();
  *param_1 = &lbl_821B0AAC;
  uVar1 = param_1[0x20];
  fn_824060E8(auStack_518,param_1 + 0xd);
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x11];
  fn_824060E8(&puStack_660,param_1 + 0xd);
  fn_822C7078(auStack_640,&puStack_660,uVar3,uVar2);
  iVar14 = fn_8251F720(param_2 + 0x4c,0);
  iStack_60c = iVar14;
  uVar8 = fn_8251FBA8();
  uVar26 = (uVar8 & 0xffffffff) / 0xa0;
  uStack_628 = fn_8251F720(param_2 + 0x50,0);
  uVar8 = fn_8251FBA8();
  uStack_610 = (uint)((uVar8 & 0xffffffff) / 0x4c);
  iVar15 = fn_8251F720(param_2 + 0x54,0);
  iStack_5f0 = iVar15;
  uVar8 = fn_8251FBA8();
  uVar8 = (uVar8 & 0xffffffff) / 0x48;
  fn_822D53F8(&uStack_618,uVar1);
  dVar34 = (double)(float)lbl_82193AF0;
  appuStack_670[0] = lbl_82193AF0;
  fn_82333DC8(&puStack_650,appuStack_670);
  appuStack_670[0] = (undefined **)(U32)(float)dVar34;
  fn_822EA7D8(&uStack_5b0,appuStack_670);
  fn_82230110(appppuStack_410,0xffffffff821acfe4);
  fn_82230110(appppuStack_540,0xffffffff821aca8c);
  if (uStack_3fc < 0x10) {
    appppuStack_410[0] = appppuStack_410;
  }
  fn_822C8A18(auStack_5b8,param_1,appppuStack_410[0]);
  if (uStack_52c < 0x10) {
    appppuStack_540[0] = appppuStack_540;
  }
  fn_822C8A18(&uStack_630,param_1,appppuStack_540[0]);
  if (uVar8 != 0) {
    iVar31 = iVar15 + 4;
    uVar28 = uVar8;
    do {
      fn_82230110(auStack_390,iVar31);
      fn_82230110(auStack_3b0,iVar31);
      puVar16 = (uint *)fn_82365BD8(&puStack_660,&uStack_630);
      puVar17 = (uint *)fn_82365BD8(&uStack_600,auStack_5b8);
      uVar9 = fn_822C7578((ulonglong)*puVar17 + 0x40,auStack_3b0);
      fn_82230218(uVar9,auStack_390,0,0xffffffffffffffff);
      uVar9 = fn_822C7578((ulonglong)*puVar16 + 0x40,auStack_3b0);
      fn_82230218(uVar9,auStack_390,0,0xffffffffffffffff);
      if (puVar17[1] != 0) {
        fn_822315A0();
      }
      if (puVar16[1] != 0) {
        fn_822315A0();
      }
      fn_82230300(auStack_3b0,1,0);
      fn_82230300(auStack_390,1,0);
      uVar28 = uVar28 - 1;
      iVar31 = iVar31 + 0x48;
    } while (uVar28 != 0);
  }
  uVar9 = fn_82365BD8(&puStack_660,auStack_5b8);
  fn_82333AB0(iVar14,uVar26,uVar9,0);
  uVar9 = fn_82365BD8(&puStack_660,auStack_5b8);
  fn_82333AB0(iVar14,uVar26,uVar9,1);
  uVar9 = fn_82365BD8(&puStack_660,&uStack_630);
  fn_82333AB0(iVar14,uVar26,uVar9,0);
  uVar9 = fn_82365BD8(&puStack_660,&uStack_630);
  fn_82333AB0(iVar14,uVar26,uVar9,1);
  fn_82230110(auStack_5a0,0xffffffff821b09b4);
  fn_82230110(auStack_580,0xffffffff821b09cc);
  puStack_5f4 = (undefined4 *)fn_8265C9E0(0xa8);
  if (puStack_5f4 == (undefined4 *)0x0) {
    puStack_5f4 = (undefined4 *)0x0;
  }
  else {
    *puStack_5f4 = &lbl_821A8D8C;
    puStack_5f4[1] = 1;
    puStack_5f4[2] = 1;
    if (puStack_5f4 + 4 != (undefined4 *)0x0) {
      uStack_550 = 0;
      fn_82230110(auStack_140,0xffffffff821b09b4);
      fn_822FB850(puStack_5f4 + 4,auStack_5a0,auStack_640,uVar1,auStack_140,0,auStack_560);
      fn_82230300(auStack_140,1,0);
      fn_82359C18(auStack_560);
    }
  }
  puStack_5f8 = puStack_5f4 + 4;
  lVar27 = (ulonglong)uStack_630 + 0x40;
  uVar9 = fn_822C7578(lVar27,auStack_5a0);
  fn_82230218(uVar9,auStack_5a0,0,0xffffffffffffffff);
  uVar9 = fn_82365BD8(&puStack_660,&puStack_5f8);
  fn_82333AB0(iVar14,uVar26,uVar9,1);
  fn_822C8B40(param_1,&puStack_5f8);
  puStack_604 = (undefined4 *)fn_8265C9E0(0xa8);
  if (puStack_604 == (undefined4 *)0x0) {
    puStack_604 = (undefined4 *)0x0;
  }
  else {
    *puStack_604 = &lbl_821A8D8C;
    puStack_604[1] = 1;
    puStack_604[2] = 1;
    if (puStack_604 + 4 != (undefined4 *)0x0) {
      uStack_550 = 0;
      fn_82230110(auStack_2e0,0xffffffff821b09cc);
      fn_822FB850(puStack_604 + 4,auStack_580,auStack_640,uVar1,auStack_2e0,0,auStack_560);
      fn_82230300(auStack_2e0,1,0);
      fn_82359C18(auStack_560);
    }
  }
  puStack_608 = puStack_604 + 4;
  uVar9 = fn_822C7578(lVar27,auStack_580);
  fn_82230218(uVar9,auStack_580,0,0xffffffffffffffff);
  uVar9 = fn_82365BD8(&puStack_660,&puStack_608);
  fn_82333AB0(iVar14,uVar26,uVar9,0);
  fn_822C8B40(param_1,&puStack_608);
  fn_82230110(auStack_450,0xffffffff821aca9c);
  puVar18 = (undefined4 *)fn_8265C9E0(0x88);
  appuStack_670[0] = &lbl_821AD588;
  if (puVar18 == (undefined4 *)0x0) {
    puVar18 = (undefined4 *)0x0;
  }
  else {
    *puVar18 = &lbl_821AD588;
    puVar18[1] = 1;
    puVar18[2] = 1;
    if (puVar18 + 3 != (undefined4 *)0x0) {
      fn_82230110(auStack_120,0xffffffff821aca9c);
      fn_822FB670(puVar18 + 3,auStack_450,auStack_640,uVar1,auStack_120,0);
      fn_82230300(auStack_120,1,0);
    }
  }
  puStack_5c8 = puVar18 + 3;
  puStack_5c4 = puVar18;
  uVar9 = fn_822C7578(lVar27,auStack_450);
  fn_82230218(uVar9,auStack_450,0,0xffffffffffffffff);
  if (uVar8 != 0) {
    iVar31 = iVar15 + 4;
    uVar28 = uVar8;
    do {
      fn_82230110(auStack_1a0,iVar31);
      fn_82230110(auStack_2a0,iVar31);
      uVar9 = fn_822C7578(puVar18 + 0x13,auStack_2a0);
      fn_82230218(uVar9,auStack_1a0,0,0xffffffffffffffff);
      fn_82230300(auStack_2a0,1,0);
      fn_82230300(auStack_1a0,1,0);
      uVar28 = uVar28 - 1;
      iVar31 = iVar31 + 0x48;
    } while (uVar28 != 0);
  }
  fn_822C8B40(param_1,&puStack_5c8);
  fn_82230110(auStack_490,0xffffffff821acaa8);
  puVar18 = (undefined4 *)fn_8265C9E0(0x88);
  if (puVar18 == (undefined4 *)0x0) {
    puVar18 = (undefined4 *)0x0;
  }
  else {
    *puVar18 = &lbl_821AD588;
    puVar18[1] = 1;
    puVar18[2] = 1;
    if (puVar18 + 3 != (undefined4 *)0x0) {
      fn_82230110(auStack_260,0xffffffff821acaa8);
      fn_822FB670(puVar18 + 3,auStack_490,auStack_640,uVar1,auStack_260,0);
      fn_82230300(auStack_260,1,0);
    }
  }
  puStack_5d0 = puVar18 + 3;
  puStack_5cc = puVar18;
  uVar9 = fn_822C7578(lVar27,auStack_490);
  fn_82230218(uVar9,auStack_490,0,0xffffffffffffffff);
  if (uVar8 != 0) {
    iVar31 = iVar15 + 4;
    uVar28 = uVar8;
    do {
      fn_82230110(auStack_220,iVar31);
      fn_82230110(auStack_320,iVar31);
      uVar9 = fn_822C7578(puVar18 + 0x13,auStack_320);
      fn_82230218(uVar9,auStack_220,0,0xffffffffffffffff);
      fn_82230300(auStack_320,1,0);
      fn_82230300(auStack_220,1,0);
      uVar28 = uVar28 - 1;
      iVar31 = iVar31 + 0x48;
    } while (uVar28 != 0);
  }
  fn_822C8B40(param_1,&puStack_5d0);
  if (uVar8 != 0) {
    iVar15 = iVar15 + 4;
    do {
      puVar29 = auStack_5a0;
      if (*(int *)(iVar15 + 0x40) == 0) {
        puVar29 = auStack_580;
      }
      fn_82365BD8(&puStack_660,&uStack_618);
      uVar9 = fn_82365BD8(&uStack_600,&puStack_5d0);
      uVar10 = fn_82365BD8(&uStack_5d8,&puStack_5c8);
      uVar11 = fn_82365BD8(&puStack_5e0,&uStack_630);
      uVar12 = fn_8223B688(auStack_560,puVar29);
      uVar13 = fn_82230110(auStack_c0,iVar15);
      fn_82333B98(param_1,uVar13,uVar12,uVar11,uVar10,uVar9,iVar14,uVar26);
      uVar8 = uVar8 - 1;
      iVar15 = iVar15 + 0x48;
    } while (uVar8 != 0);
  }
  fn_82230110(auStack_4d0,0xffffffff821b09e4);
  puVar18 = (undefined4 *)fn_8265C9E0(0x88);
  if (puVar18 == (undefined4 *)0x0) {
    puVar18 = (undefined4 *)0x0;
  }
  else {
    *puVar18 = &lbl_821AD588;
    puVar18[1] = 1;
    puVar18[2] = 1;
    if (puVar18 + 3 != (undefined4 *)0x0) {
      fn_82230110(auStack_160,0xffffffff821b09e4);
      fn_822FB670(puVar18 + 3,auStack_4d0,auStack_640,uVar1,auStack_160,0);
      fn_82230300(auStack_160,1,0);
    }
  }
  uVar8 = ZEXT48(puStack_5f8);
  puStack_660 = puVar18 + 3;
  lVar25 = uVar8 + 0x40;
  puStack_65c = puVar18;
  uVar9 = fn_822C7578(lVar25,auStack_4d0);
  fn_82230218(uVar9,auStack_4d0,0,0xffffffffffffffff);
  uVar9 = fn_822C7578(puVar18 + 0x13,auStack_5a0);
  fn_82230218(uVar9,auStack_5a0,0,0xffffffffffffffff);
  fn_822C8B40(param_1,&puStack_660);
  fn_82230110(auStack_470,0xffffffff821b09fc);
  auStack_658[0] = 0;
  puVar16 = (uint *)fn_82333E80(auStack_510,auStack_470,auStack_640,uVar1,0xffffffff821b09fc,
                                      auStack_658);
  uStack_600 = *puVar16;
  uVar28 = (ulonglong)uStack_600;
  uStack_5fc = puVar16[1];
  *puVar16 = 0;
  puVar16[1] = 0;
  if (iStack_50c != 0) {
    fn_822315A0();
  }
  puVar18 = puStack_608;
  puVar24 = puStack_608 + 0x10;
  uVar9 = fn_822C7578(puVar24,auStack_470);
  fn_82230218(uVar9,auStack_470,0,0xffffffffffffffff);
  uVar9 = fn_822C7578(uVar28 + 0x40,auStack_580);
  fn_82230218(uVar9,auStack_580,0,0xffffffffffffffff);
  fn_822C8B40(param_1,&uStack_600);
  fn_82230110(auStack_430,0xffffffff821b0a14);
  auStack_658[0] = 0;
  puVar16 = (uint *)fn_82333E80(auStack_508,auStack_430,auStack_640,uVar1,0xffffffff821b0a14,
                                      auStack_658);
  uStack_5d8 = *puVar16;
  uVar28 = (ulonglong)uStack_5d8;
  uStack_5d4 = puVar16[1];
  *puVar16 = 0;
  puVar16[1] = 0;
  if (iStack_504 != 0) {
    fn_822315A0();
  }
  uVar9 = fn_822C7578(lVar25,auStack_430);
  fn_82230218(uVar9,auStack_430,0,0xffffffffffffffff);
  uVar9 = fn_822C7578(uVar28 + 0x40,auStack_5a0);
  fn_82230218(uVar9,auStack_5a0,0,0xffffffffffffffff);
  fn_822C8B40(param_1,&uStack_5d8);
  fn_82230110(auStack_4b0,0xffffffff821b0a2c);
  puVar19 = (undefined4 *)fn_8265C9E0(0x88);
  if (puVar19 == (undefined4 *)0x0) {
    puVar19 = (undefined4 *)0x0;
  }
  else {
    puVar19[1] = 1;
    puVar19[2] = 1;
    *puVar19 = appuStack_670[0];
    if (puVar19 + 3 != (undefined4 *)0x0) {
      fn_82230110(auStack_1e0,0xffffffff821b0a2c);
      fn_822FB670(puVar19 + 3,auStack_4b0,auStack_640,uVar1,auStack_1e0,0);
      fn_82230300(auStack_1e0,1,0);
    }
  }
  puStack_5e0 = puVar19 + 3;
  puStack_5dc = puVar19;
  uVar9 = fn_822C7578(puVar24,auStack_4b0);
  fn_82230218(uVar9,auStack_4b0,0,0xffffffffffffffff);
  uVar9 = fn_822C7578(puVar19 + 0x13,auStack_580);
  fn_82230218(uVar9,auStack_580,0,0xffffffffffffffff);
  fn_822C8B40(param_1,&puStack_5e0);
  fn_82230110(auStack_4f0,0xffffffff821b0a44);
  puVar19 = (undefined4 *)fn_8265C9E0(0xa8);
  if (puVar19 == (undefined4 *)0x0) {
    puVar19 = (undefined4 *)0x0;
  }
  else {
    *puVar19 = &lbl_821A8D8C;
    puVar19[1] = 1;
    puVar19[2] = 1;
    if (puVar19 + 4 != (undefined4 *)0x0) {
      uStack_550 = 0;
      fn_82230110(auStack_300,0xffffffff821b0a44);
      fn_822FB850(puVar19 + 4,auStack_4f0,auStack_640,uVar1,auStack_300,0,auStack_560);
      fn_82230300(auStack_300,1,0);
      fn_82359C18(auStack_560);
    }
  }
  puStack_5a8 = puVar19 + 4;
  lVar23 = (ulonglong)uStack_618 + 4;
  puStack_5a4 = puVar19;
  uVar9 = fn_822C7578(puVar19 + 0x14,lVar23);
  fn_82230218(uVar9,appppuStack_540,0,0xffffffffffffffff);
  iVar14 = fn_82365BD8(&uStack_620,&uStack_618);
  fn_82376640(puVar19 + 0x10,iVar14);
  if (*(int *)(iVar14 + 4) != 0) {
    fn_822315A0();
  }
  uVar9 = fn_822C7578(lVar27,auStack_4f0);
  fn_82230218(uVar9,auStack_4f0,0,0xffffffffffffffff);
  fn_822C8B40(param_1,&puStack_5a8);
  puVar16 = (uint *)fn_82365BD8(&uStack_620,&uStack_630);
  uVar28 = (ulonglong)uStack_610;
  if (uVar28 != 0) {
    uVar30 = (ulonglong)uStack_628;
    do {
      fn_82230110(auStack_280,uVar30);
      fn_82230110(auStack_2c0,uVar30);
      uVar9 = fn_822C7578((ulonglong)*puVar16 + 0x40,auStack_2c0);
      fn_82230218(uVar9,auStack_280,0,0xffffffffffffffff);
      fn_82230300(auStack_2c0,1,0);
      fn_82230300(auStack_280,1,0);
      uVar28 = uVar28 - 1;
      uVar30 = uVar30 + 0x4c;
    } while (uVar28 != 0);
  }
  if (puVar16[1] != 0) {
    fn_822315A0();
  }
  fn_82230110(auStack_370,0xffffffff821b0a54);
  fn_82230110(auStack_350,0xffffffff821b0a68);
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x11];
  uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x48) + 4);
  puStack_5e4 = (undefined4 *)fn_8265C9E0(0xa8);
  if (puStack_5e4 == (undefined4 *)0x0) {
    puStack_5e4 = (undefined4 *)0x0;
  }
  else {
    *puStack_5e4 = &lbl_821AD588;
    puStack_5e4[1] = 1;
    puStack_5e4[2] = 1;
    if (puStack_5e4 + 3 != (undefined4 *)0x0) {
      fn_82230110(auStack_240,0xffffffff821b0a7c);
      fn_822FB4C0(puStack_5e4 + 3,auStack_370,auStack_640,auStack_240,uVar3,uVar2,uVar4);
      fn_82230300(auStack_240,1,0);
    }
  }
  puStack_5e8 = puStack_5e4 + 3;
  fn_822C8B40(param_1,&puStack_5e8);
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x11];
  uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x48) + 4);
  puStack_5bc = (undefined4 *)fn_8265C9E0(0xa8);
  if (puStack_5bc == (undefined4 *)0x0) {
    puStack_5bc = (undefined4 *)0x0;
    bVar33 = 2;
  }
  else {
    *puStack_5bc = &lbl_821AD588;
    puVar19 = puStack_5bc + 3;
    puStack_5bc[1] = 1;
    puStack_5bc[2] = 1;
    if (puVar19 != (undefined4 *)0x0) {
      fn_82230110(auStack_200,0xffffffff821b0a94);
      fn_822FB4C0(puVar19,auStack_350,auStack_640,auStack_200,uVar3,uVar2,uVar4);
    }
    bVar6 = puVar19 == (undefined4 *)0x0;
    bVar33 = bVar6 << 1;
    if (!bVar6) {
      fn_82230300(auStack_200,1,0);
    }
  }
  bVar7 = false;
  bVar6 = false;
  puStack_5c0 = puStack_5bc + 3;
  fn_822C8B40(param_1,&puStack_5c0);
  uVar9 = fn_822C7578(lVar25,(ulonglong)uStack_5b0 + 4);
  fn_82230218(uVar9,auStack_370,0,0xffffffffffffffff);
  iVar14 = fn_82365BD8(&uStack_620,&uStack_5b0);
  fn_82376640(uVar8 + 0x30,iVar14);
  if (*(int *)(iVar14 + 4) != 0) {
    fn_822315A0();
  }
  uVar9 = fn_822C7578(puVar24,(ulonglong)uStack_5b0 + 4);
  fn_82230218(uVar9,auStack_350,0,0xffffffffffffffff);
  iVar14 = fn_82365BD8(&uStack_620,&uStack_5b0);
  fn_82376640(puVar18 + 0xc,iVar14);
  if (*(int *)(iVar14 + 4) != 0) {
    fn_822315A0();
  }
  puVar24 = puStack_650;
  uVar28 = ZEXT48(puStack_650);
  uVar30 = ZEXT48(puStack_5e8);
  uVar9 = fn_822C7578(uVar30 + 0x40,uVar28 + 4);
  fn_82230218(uVar9,auStack_5a0,0,0xffffffffffffffff);
  puVar19 = puStack_64c;
  puStack_668 = (undefined4 *)0x0;
  puStack_664 = (undefined4 *)0x0;
  if (puStack_64c != (undefined4 *)0x0) {
    cVar20 = fn_8223AAC0(puStack_64c);
    bVar33 = (cVar20 == '\0') << 1;
    if (cVar20 != '\0') {
      puStack_664 = puVar19;
      puStack_668 = puVar24;
    }
  }
  fn_82376640(uVar30 + 0x30,&puStack_668);
  if (puStack_664 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  uVar30 = ZEXT48(puStack_5c0);
  uVar9 = fn_822C7578(uVar30 + 0x40,uVar28 + 4);
  fn_82230218(uVar9,auStack_580,0,0xffffffffffffffff);
  puStack_668 = (undefined4 *)0x0;
  puStack_664 = (undefined4 *)0x0;
  if (puVar19 != (undefined4 *)0x0) {
    cVar20 = fn_8223AAC0(puVar19);
    bVar33 = (cVar20 == '\0') << 1;
    if (cVar20 != '\0') {
      puStack_664 = puVar19;
      puStack_668 = puVar24;
    }
  }
  fn_82376640(uVar30 + 0x30,&puStack_668);
  if (puStack_664 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (uVar26 != 0) {
    auStack_658[0] = 0;
    pcVar32 = (char *)(iStack_60c + 0x40);
    puStack_668 = (undefined4 *)0x0;
    do {
      uVar9 = fn_82230110(auStack_100,0xffffffff821adae0);
      pcVar22 = pcVar32;
      do {
        cVar20 = *pcVar22;
        pcVar22 = pcVar22 + 1;
      } while (cVar20 != '\0');
      uVar9 = fn_8223DFF0(uVar9,pcVar32,pcVar22 + (-1 - (int)pcVar32));
      fn_82240378(auStack_3f0,uVar9);
      fn_82230300(auStack_100,1,0);
      uVar9 = fn_82230110(auStack_e0,0xffffffff821adae8);
      pcVar22 = pcVar32;
      do {
        cVar20 = *pcVar22;
        pcVar22 = pcVar22 + 1;
      } while (cVar20 != '\0');
      uVar9 = fn_8223DFF0(uVar9,pcVar32,pcVar22 + (-1 - (int)pcVar32));
      fn_82240378(auStack_3d0,uVar9);
      fn_82230300(auStack_e0,1,0);
      puVar16 = (uint *)fn_822EA970(auStack_4f8,auStack_3f0,auStack_640,uVar1,auStack_3f0,
                                          auStack_658);
      puStack_650 = (undefined4 *)*puVar16;
      uVar28 = ZEXT48(puStack_650);
      puStack_64c = (undefined4 *)puVar16[1];
      *puVar16 = 0;
      puVar16[1] = 0;
      if (iStack_4f4 != 0) {
        fn_822315A0();
      }
      puVar16 = (uint *)fn_822EA970(auStack_520,auStack_3d0,auStack_640,uVar1,auStack_3d0,
                                          &puStack_668);
      uStack_620 = *puVar16;
      uVar30 = (ulonglong)uStack_620;
      uStack_61c = puVar16[1];
      *puVar16 = 0;
      puVar16[1] = 0;
      if (iStack_51c != 0) {
        fn_822315A0();
      }
      lVar27 = uVar28 + 0x40;
      if (*(int *)(pcVar32 + 0x58) == 0) {
        uVar9 = fn_822C7578(lVar27,lVar23);
        fn_82230218(uVar9,appppuStack_540,0,0xffffffffffffffff);
        uVar9 = fn_822C7578(uVar30 + 0x40,lVar23);
        pppppuVar21 = appppuStack_540;
      }
      else {
        uVar9 = fn_822C7578(lVar27,lVar23);
        fn_82230218(uVar9,uVar8 + 4,0,0xffffffffffffffff);
        pppppuVar21 = (undefined4 *****)(puVar18 + 1);
        uVar9 = fn_822C7578(uVar30 + 0x40,lVar23);
      }
      fn_82230218(uVar9,pppppuVar21,0,0xffffffffffffffff);
      iVar14 = fn_82365BD8(auStack_330,&uStack_618);
      fn_82376640(uVar28 + 0x30,iVar14);
      if (*(int *)(iVar14 + 4) != 0) {
        fn_822315A0();
      }
      iVar14 = fn_82365BD8(auStack_500,&uStack_618);
      fn_82376640(uVar30 + 0x30,iVar14);
      if (*(int *)(iVar14 + 4) != 0) {
        fn_822315A0();
      }
      fn_822C8B40(param_1,&puStack_650);
      fn_822C8B40(param_1,&uStack_620);
      if (uStack_61c != 0) {
        fn_822315A0();
      }
      if (puStack_64c != (undefined4 *)0x0) {
        fn_822315A0();
      }
      fn_82230300(auStack_3d0,1,0);
      fn_82230300(auStack_3f0,1,0);
      uVar26 = uVar26 - 1;
      bVar33 = (uVar26 == 0) << 1;
      pcVar32 = pcVar32 + 0xa0;
    } while (uVar26 != 0);
  }
  uVar8 = (ulonglong)uStack_610;
  if (uVar8 != 0) {
    uVar26 = (ulonglong)uStack_628;
    do {
      puVar18 = (undefined4 *)fn_8265C9E0(0x88);
      if (puVar18 == (undefined4 *)0x0) {
        puVar18 = (undefined4 *)0x0;
      }
      else {
        puVar18[1] = 1;
        puVar18[2] = 1;
        *puVar18 = appuStack_670[0];
        if (puVar18 + 3 != (undefined4 *)0x0) {
          fn_82230110(auStack_180,uVar26);
          fn_82230110(auStack_1c0,uVar26);
          bVar7 = true;
          bVar6 = true;
          fn_822FB670(puVar18 + 3,auStack_1c0,auStack_640,uVar1,auStack_180,0);
        }
        if (bVar6) {
          bVar6 = false;
          fn_82230300(auStack_1c0,1,0);
        }
        if (bVar7) {
          bVar7 = false;
          fn_82230300(auStack_180,1,0);
        }
      }
      puStack_650 = puVar18 + 3;
      puStack_64c = puVar18;
      uVar9 = fn_822C7578(puVar18 + 0x13,lVar23);
      fn_82230218(uVar9,appppuStack_540,0,0xffffffffffffffff);
      iVar14 = fn_82365BD8(auStack_500,&uStack_618);
      fn_82376640(puVar18 + 0xf,iVar14);
      if (*(int *)(iVar14 + 4) != 0) {
        fn_822315A0();
      }
      fn_822C8B40(param_1,&puStack_650);
      if (puStack_64c != (undefined4 *)0x0) {
        fn_822315A0();
      }
      uVar8 = uVar8 - 1;
      bVar33 = (uVar8 == 0) << 1;
      uVar26 = uVar26 + 0x4c;
    } while (uVar8 != 0);
  }
  fn_8251FA58(iStack_60c);
  fn_8251FA58(uStack_628);
  fn_8251FA58(iStack_5f0);
  if (puStack_5bc != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_5e4 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82230300(auStack_350,1,0);
  fn_82230300(auStack_370,1,0);
  if (puStack_5a4 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82230300(auStack_4f0,1,0);
  if (puStack_5dc != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82230300(auStack_4b0,1,0);
  if (uStack_5d4 != 0) {
    fn_822315A0();
  }
  fn_82230300(auStack_430,1,0);
  if (uStack_5fc != 0) {
    fn_822315A0();
  }
  fn_82230300(auStack_470,1,0);
  if (puStack_65c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82230300(auStack_4d0,1,0);
  if (puStack_5cc != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82230300(auStack_490,1,0);
  if (puStack_5c4 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82230300(auStack_450,1,0);
  if (puStack_604 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_5f4 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82230300(auStack_580,1,0);
  fn_82230300(auStack_5a0,1,0);
  if (iStack_62c != 0) {
    fn_822315A0();
  }
  if (iStack_5b4 != 0) {
    fn_822315A0();
  }
  fn_82230300(appppuStack_540,1,0);
  fn_82230300(appppuStack_410,1,0);
  if (iStack_5ac != 0) {
    fn_822315A0();
  }
  if (puVar19 != (undefined4 *)0x0) {
    fn_822315A0(puVar19);
  }
  if (iStack_614 != 0) {
    fn_822315A0();
  }
  if (ZEXT48(piStack_63c) != 0) {
    lVar27 = ZEXT48(piStack_63c) + 8;
    do {
      puVar16 = (uint *)lVar27;
      lVar25 = (ulonglong)*puVar16 - 1;
      if (in_RESERVE != '\0') {
        uVar5 = storeWordConditionalIndexed(lVar25,0,lVar27);
        *puVar16 = uVar5;
        bVar33 = 2;
      }
    } while (!(bool)(bVar33 >> 1 & 1));
    if ((int)lVar25 == 0) {
      (**(code **)(*piStack_63c + 4))();
    }
  }
  if (ZEXT48(piStack_514) != 0) {
    lVar27 = ZEXT48(piStack_514) + 8;
    do {
      puVar16 = (uint *)lVar27;
      lVar25 = (ulonglong)*puVar16 - 1;
      if (in_RESERVE != '\0') {
        uVar5 = storeWordConditionalIndexed(lVar25,0,lVar27);
        *puVar16 = uVar5;
        bVar33 = 2;
      }
    } while (!(bool)(bVar33 >> 1 & 1));
    if ((int)lVar25 == 0) {
      (**(code **)(*piStack_514 + 4))();
    }
  }
  return param_1;
}

