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
extern unsigned int *auStack_340;
extern unsigned int *auStack_360;
extern unsigned int *auStack_380;
extern unsigned int *auStack_3a0;
extern unsigned int *auStack_3c0;
extern unsigned int *auStack_3e0;
extern unsigned int *auStack_400;
extern unsigned int *auStack_420;
extern unsigned int *auStack_490;
extern unsigned int *auStack_4a0;
extern unsigned int *auStack_4c0;
extern unsigned int *auStack_510;
extern unsigned int *auStack_5c8;
extern unsigned int *auStack_5e0;
extern unsigned int *auStack_5f0;
extern unsigned int *auStack_600;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_610;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822B6788();
extern int fn_822C7078();
extern int fn_822C70F0();
extern int fn_822C72A0();
extern int fn_822C7578();
extern int fn_822C7FD8();
extern int fn_822C8A18();
extern int fn_822C8B40();
extern int fn_822D5340();
extern int fn_822D53F8();
extern int fn_822FB078();
extern int fn_822FE028();
extern int fn_822FEC40();
extern int fn_822FED38();
extern int fn_822FEE60();
extern int fn_822FF048();
extern int fn_822FF208();
extern int fn_822FF2F0();
extern int fn_822FF3A8();
extern int fn_82304538();
extern int fn_8234F250();
extern int fn_82359BB0();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_823F2E20();
extern int fn_824060E8();
extern int fn_82522588();
extern int fn_8255FD70();
extern int fn_82560010();
extern int fn_8265C9E0();
extern int fn_827D9C88();
extern unsigned int iStack_47c;
extern unsigned int iStack_49c;
extern unsigned int iStack_4bc;
extern unsigned int iStack_4cc;
extern unsigned int iStack_4d0;
extern unsigned int iStack_4ec;
extern unsigned int iStack_50c;
extern unsigned int iStack_5cc;
extern unsigned int iStack_5d4;
extern unsigned int iStack_5dc;
extern unsigned int iStack_5fc;
extern unsigned int iStack_604;
extern unsigned int iStack_60c;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AEBEC;
extern unsigned int lbl_821AEEC0;
extern unsigned int uStack_42c;
extern unsigned int uStack_44c;
extern unsigned int uStack_52c;
extern unsigned int uStack_5d0;
extern unsigned int uStack_5d8;
extern unsigned int uStack_608;


undefined4 * fn_822FC818(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined4 *puVar11;
  char cVar16;
  undefined4 *puVar12;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar13;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar17;
  longlong lVar18;
  uint *puVar19;
  longlong lVar20;
  uint *puVar21;
  char **ppcVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  uint uVar30;
  double dVar31;
  undefined4 *puStack_620;
  undefined4 *puStack_61c;
  undefined4 *puStack_618;
  undefined4 *puStack_614;
  float fStack_610;
  int iStack_60c;
  uint uStack_608;
  int iStack_604;
  undefined1 auStack_600 [4];
  int iStack_5fc;
  undefined1 auStack_5f0 [16];
  undefined1 auStack_5e0 [4];
  int iStack_5dc;
  undefined4 uStack_5d8;
  int iStack_5d4;
  undefined4 uStack_5d0;
  int iStack_5cc;
  undefined1 auStack_5c8 [8];
  uint *puStack_5c0;
  uint *puStack_5bc;
  undefined4 *puStack_5b0;
  undefined4 *puStack_5ac;
  char *pcStack_5a0;
  char *pcStack_59c;
  char *pcStack_598;
  char *pcStack_594;
  char *pcStack_590;
  char *pcStack_58c;
  char *pcStack_588;
  char *pcStack_584;
  uint *puStack_580;
  uint *puStack_57c;
  uint *puStack_570;
  uint *puStack_56c;
  uint *puStack_560;
  uint *puStack_55c;
  undefined4 *puStack_550;
  undefined4 *puStack_54c;
  undefined4 ****appppuStack_540 [5];
  uint uStack_52c;
  uint *puStack_520;
  uint *puStack_51c;
  undefined1 auStack_510 [4];
  int iStack_50c;
  uint *puStack_500;
  uint *puStack_4fc;
  undefined4 *puStack_4f0;
  int iStack_4ec;
  uint *puStack_4e0;
  uint *puStack_4dc;
  int iStack_4d0;
  int iStack_4cc;
  undefined1 auStack_4c0 [4];
  int iStack_4bc;
  uint *puStack_4b0;
  uint *puStack_4ac;
  undefined1 auStack_4a0 [4];
  int iStack_49c;
  undefined1 auStack_490 [16];
  undefined4 *puStack_480;
  int iStack_47c;
  uint *puStack_470;
  uint *puStack_46c;
  undefined4 ****appppuStack_460 [5];
  uint uStack_44c;
  undefined4 ****appppuStack_440 [5];
  uint uStack_42c;
  undefined1 auStack_420 [32];
  undefined1 auStack_400 [32];
  undefined1 auStack_3e0 [32];
  undefined1 auStack_3c0 [32];
  undefined1 auStack_3a0 [32];
  undefined1 auStack_380 [32];
  undefined1 auStack_360 [32];
  undefined1 auStack_340 [32];
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
  
  puStack_620 = (undefined4 *)0x0;
  fn_822C7FD8();
  *param_1 = &lbl_821AEBEC;
  puVar19 = param_1 + 0x30;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  iVar1 = param_1[0x20];
  uVar2 = **(uint **)(param_2 + 0x50);
  fn_824060E8(&uStack_5d0,param_1 + 0xd);
  fn_822C7078(auStack_5f0,&uStack_5d0,(ulonglong)uVar2 + 0x80,(ulonglong)uVar2 + 0xc0);
  fn_822D53F8(auStack_600,iVar1);
  fn_82230110(appppuStack_440,0xffffffff821acfe4);
  if (uStack_42c < 0x10) {
    appppuStack_440[0] = appppuStack_440;
  }
  fn_822C8A18(&uStack_608,param_1,appppuStack_440[0]);
  uVar6 = fn_822C8A18(auStack_510,param_1,0xffffffff821aca8c);
  uVar6 = fn_82522588(auStack_4a0,uVar6);
  fn_823F2E20(puVar19,uVar6);
  if (iStack_49c != 0) {
    fn_822315A0();
  }
  if (iStack_50c != 0) {
    fn_822315A0();
  }
  fn_82230110(appppuStack_540,0xffffffff821aca94);
  if (uStack_52c < 0x10) {
    appppuStack_540[0] = appppuStack_540;
  }
  fn_822C8A18(&uStack_5d0,param_1,appppuStack_540[0]);
  iVar13 = **(int **)(param_2 + 0x50);
  puVar11 = (undefined4 *)fn_8265C9E0(100);
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11[1] = 1;
    puVar12 = puVar11 + 3;
    puVar11[2] = 1;
    *puVar11 = &lbl_821AD588;
    if (puVar12 != (undefined4 *)0x0) {
      fn_82230110(auStack_160,0xffffffff821ace70);
      fn_822C70F0(puVar12,auStack_160,auStack_5f0);
      puVar11[0x18] = iVar13 + 0x254;
      *puVar12 = &lbl_821AEEC0;
      fn_82230300(auStack_160,1,0);
    }
  }
  puStack_620 = (undefined4 *)0x0;
  puStack_61c = (undefined4 *)0x0;
  if ((puVar11 != (undefined4 *)0x0) && (cVar16 = fn_8223AAC0(puVar11), cVar16 != '\0')) {
    puStack_620 = puVar11 + 3;
    puStack_61c = puVar11;
  }
  fn_822C8B40(param_1,&puStack_620);
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  uVar6 = fn_822C7578(puVar11 + 0x13,appppuStack_540);
  fn_82230218(uVar6,appppuStack_540,0,0xffffffffffffffff);
  uVar3 = param_1[0x20];
  puVar12 = (undefined4 *)fn_8265C9E0(0xac);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12[1] = 1;
    puVar12[2] = 1;
    *puVar12 = &lbl_821AD588;
    if (puVar12 + 3 != (undefined4 *)0x0) {
      fn_82230110(auStack_3a0,0xffffffff821ae904);
      fn_82230110(auStack_120,0xffffffff821ae914);
      fn_822FB078(puVar12 + 3,auStack_120,auStack_5f0,uVar3,auStack_3a0);
      fn_82230300(auStack_120,1,0);
      fn_82230300(auStack_3a0,1,0);
    }
  }
  puStack_618 = puVar12 + 3;
  puStack_614 = puVar12;
  fn_82365BD8(&puStack_620,&puStack_618);
  fn_822C8B40(param_1,&puStack_620);
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  dVar31 = (double)lbl_821917D4;
  fStack_610 = lbl_821917D4;
  uVar7 = fn_8265C9E0(0x34);
  if ((uVar7 & 0xffffffff) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = fn_822FF2F0(uVar7,&fStack_610,param_2 + 0x44);
  }
  fStack_610 = (float)dVar31;
  puStack_620 = lbl_82191FCC;
  uVar2 = **(uint **)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x48) + 4);
  uVar8 = fn_8265C9E0(0xe4);
  if ((uVar8 & 0xffffffff) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = fn_822FF3A8(uVar8,0xffffffff821ae92c,auStack_5f0,(ulonglong)uVar2 + 0x80,uVar3,
                              0xffffffff821ae920,&puStack_620,&fStack_610);
  }
  lVar18 = uVar8 + 0xc;
  uVar2 = *puVar19;
  uVar6 = fn_822C7578(uVar8 + 0x4c,(ulonglong)uVar2 + 4);
  fn_82230218(uVar6,(ulonglong)uVar2 + 4,0,0xffffffffffffffff);
  uVar6 = fn_822C7578(uVar8 + 0x4c,(ulonglong)uStack_608 + 4);
  fn_82230218(uVar6,(ulonglong)uStack_608 + 4,0,0xffffffffffffffff);
  puStack_620 = (undefined4 *)0x0;
  puStack_61c = (undefined4 *)0x0;
  if (((uVar8 & 0xffffffff) != 0) && (cVar16 = fn_8223AAC0(uVar8), cVar16 != '\0')) {
    puStack_620 = (undefined4 *)lVar18;
    puStack_61c = (undefined4 *)(int)uVar8;
  }
  fn_822C8B40(param_1,&puStack_620);
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  uVar6 = fn_822C7578((ulonglong)*puVar19 + 0x40,uVar7 + 0x10);
  fn_82230218(uVar6,uVar8 + 0x10,0,0xffffffffffffffff);
  puStack_620 = (undefined4 *)0x0;
  puStack_61c = (undefined4 *)0x0;
  if (((uVar7 & 0xffffffff) != 0) && (cVar16 = fn_8223AAC0(uVar7), cVar16 != '\0')) {
    puStack_620 = (undefined4 *)((int)uVar7 + 0xc);
    puStack_61c = (undefined4 *)(int)uVar7;
  }
  fn_82376640((ulonglong)*puVar19 + 0x30,&puStack_620);
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  pcStack_5a0 = "cornerkick";
  pcStack_59c = "headerfromcorner";
  pcStack_598 = "lefthandup";
  pcStack_594 = "leftkickhighfromcorner";
  pcStack_590 = "leftkicklowfromcorner";
  pcStack_58c = "righthandup";
  pcStack_588 = "rightkickhighfromcorner";
  puVar17 = (undefined4 *)(iVar1 + 0x24);
  pcStack_584 = "rightkicklowfromcorner";
  ppcVar22 = &pcStack_5a0;
  lVar20 = 8;
  do {
    pcVar4 = *ppcVar22;
    iVar13 = fn_82560010(*puVar17,pcVar4);
    if (iVar13 != 0) {
      fn_82365BD8(&fStack_610,puVar19);
      fn_82365BD8(&puStack_620,puVar19);
      fn_82230110(auStack_220,pcVar4);
      fn_822FED38(&uStack_5d8,param_1,iVar1,auStack_5f0,auStack_220,&uStack_608,&puStack_620,
                        auStack_600);
      if (iStack_5d4 != 0) {
        fn_822315A0();
      }
      fn_82230300(auStack_220,1,0);
      if (puStack_61c != (undefined4 *)0x0) {
        fn_822315A0();
      }
      if (iStack_60c != 0) {
        fn_822315A0();
      }
    }
    lVar20 = lVar20 + -1;
    ppcVar22 = ppcVar22 + 1;
  } while (lVar20 != 0);
  fn_82365BD8(&fStack_610,puVar19);
  fn_82365BD8(&puStack_620,&puStack_618);
  fn_82230110(auStack_360,0xffffffff821ae9cc);
  fn_822FED38(&uStack_5d8,param_1,iVar1,auStack_5f0,auStack_360,&uStack_608,&puStack_620,
                    auStack_600);
  if (iStack_5d4 != 0) {
    fn_822315A0();
  }
  fn_82230300(auStack_360,1,0);
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (iStack_60c != 0) {
    fn_822315A0();
  }
  fn_82365BD8(&fStack_610,puVar19);
  fn_82365BD8(&puStack_620,&puStack_618);
  fn_82230110(auStack_400,0xffffffff821ae9d4);
  fn_822FED38(&uStack_5d8,param_1,iVar1,auStack_5f0,auStack_400,&uStack_608,&puStack_620,
                    auStack_600);
  if (iStack_5d4 != 0) {
    fn_822315A0();
  }
  fn_82230300(auStack_400,1,0);
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (iStack_60c != 0) {
    fn_822315A0();
  }
  fn_82365BD8(&puStack_620,puVar19);
  fn_82365BD8(&puStack_618,puVar19);
  fn_822FEC40(&pcStack_5a0,0xffffffff821ae9e4,param_1,iVar1,auStack_5f0,&uStack_608,
                    &puStack_618,auStack_600);
  fn_82359BB0(&pcStack_5a0);
  if (puStack_614 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82365BD8(&puStack_620,puVar19);
  fn_82365BD8(&puStack_618,puVar19);
  fn_822FEC40(&puStack_560,0xffffffff821ae9f0,param_1,iVar1,auStack_5f0,&uStack_608,
                    &puStack_618,auStack_600);
  if (puStack_614 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82365BD8(&puStack_618,puVar19);
  fn_822FEC40(&puStack_5b0,0xffffffff821ae9fc,param_1,iVar1,auStack_5f0,&uStack_608,
                    &puStack_618,auStack_600);
  if (puStack_614 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82365BD8(&puStack_620,puVar19);
  fn_82365BD8(&puStack_618,puVar19);
  fn_822FEC40(&puStack_550,0xffffffff821aea04,param_1,iVar1,auStack_5f0,&uStack_608,
                    &puStack_618,auStack_600);
  if (puStack_614 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82230110(appppuStack_460,0xffffffff821aea18);
  fn_82230110(auStack_420,0xffffffff821aea20);
  iVar13 = fn_822B6788(**(undefined4 **)(param_2 + 0x50));
  if (iVar13 == 1) {
    fn_82230360(appppuStack_460,0xffffffff821aea30,0xb);
    fn_82230360(auStack_420,0xffffffff821aea3c,0x14);
  }
  fn_82365BD8(&puStack_620,puVar19);
  fn_82365BD8(&puStack_618,puVar19);
  if (uStack_44c < 0x10) {
    appppuStack_460[0] = appppuStack_460;
  }
  fn_822FEC40(&puStack_4e0,appppuStack_460[0],param_1,iVar1,auStack_5f0,&uStack_608,
                    &puStack_618,auStack_600);
  if (puStack_614 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82365BD8(&puStack_620,puVar19);
  fn_82365BD8(&puStack_618,puVar19);
  fn_822FED38(&uStack_5d8,param_1,iVar1,auStack_5f0,auStack_420,&uStack_608,&puStack_618,
                    auStack_600);
  if (puStack_614 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  for (; puStack_4e0 != puStack_4dc; puStack_4e0 = puStack_4e0 + 2) {
    fn_822C72A0(uStack_5d8,(ulonglong)*puStack_4e0 + 4,(ulonglong)*puStack_4e0 + 4);
  }
  fn_82365BD8(&puStack_620,puVar19);
  fn_82365BD8(&puStack_618,puVar19);
  fn_822FEC40(&puStack_500,0xffffffff821aea54,param_1,iVar1,auStack_5f0,&uStack_608,
                    &puStack_618,auStack_600);
  if (puStack_614 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82365BD8(&puStack_620,puVar19);
  fn_82365BD8(&puStack_618,puVar19);
  fn_822FEC40(&puStack_5c0,0xffffffff821aea60,param_1,iVar1,auStack_5f0,&uStack_608,
                    &puStack_618,auStack_600);
  if (puStack_614 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  puVar21 = puStack_500;
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
    puVar21 = puStack_500;
  }
  for (; puVar29 = puStack_560, puVar21 != puStack_4fc; puVar21 = puVar21 + 2) {
    fn_822C72A0(lVar18,(ulonglong)*puVar21 + 4,(ulonglong)*puVar21 + 4);
    puVar29 = puStack_5bc;
    for (puVar27 = puStack_5c0; puVar5 = puStack_55c, puVar28 = puStack_560, puVar27 != puVar29;
        puVar27 = puVar27 + 2) {
      fn_822C72A0(*puVar21,(ulonglong)*puVar27 + 4,(ulonglong)*puVar27 + 4);
    }
    for (; puVar28 != puVar5; puVar28 = puVar28 + 2) {
      fn_822C72A0(*puVar21,(ulonglong)*puVar28 + 4,(ulonglong)*puVar28 + 4);
    }
  }
  for (; puVar29 != puStack_55c; puVar29 = puVar29 + 2) {
    fn_822C72A0(lVar18,(ulonglong)*puVar29 + 4,(ulonglong)*puVar29 + 4);
    puVar21 = puStack_5bc;
    for (puVar27 = puStack_5c0; puVar27 != puVar21; puVar27 = puVar27 + 2) {
      fn_822C72A0(*puVar27,(ulonglong)*puVar29 + 4,(ulonglong)*puVar29 + 4);
    }
  }
  fn_82365BD8(&puStack_620,puVar19);
  fn_82365BD8(&puStack_618,puVar19);
  fn_822FEC40(&pcStack_5a0,0xffffffff821aea68,param_1,iVar1,auStack_5f0,&uStack_608,
                    &puStack_618,auStack_600);
  fn_82359BB0(&pcStack_5a0);
  if (puStack_614 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82230110(auStack_1e0,0xffffffff821aea74);
  fn_82230110(auStack_320,0xffffffff821aea84);
  uVar6 = fn_82365BD8(auStack_5e0,auStack_600);
  uVar9 = fn_82365BD8(&puStack_618,puVar19);
  uVar10 = fn_82365BD8(&puStack_620,&uStack_608);
  fn_822FF048(param_1,iVar1,auStack_5f0,auStack_320,auStack_1e0,uVar10,uVar9,uVar6);
  fn_82230300(auStack_320,1,0);
  fn_82230300(auStack_1e0,1,0);
  uVar2 = **(uint **)(param_2 + 0x50);
  puVar14 = (undefined4 *)fn_8265C9E0(0x200);
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar14[1] = 1;
    puVar14[2] = 1;
    *puVar14 = &lbl_821A8D8C;
    if (puVar14 + 4 != (undefined4 *)0x0) {
      fn_82304538(puVar14 + 4,auStack_5f0,(ulonglong)uVar2,(ulonglong)uVar2 + 0x244);
    }
  }
  puStack_61c = puVar14;
  puStack_620 = puStack_61c + 4;
  fn_822C8B40(param_1,&puStack_620);
  fn_82365BD8(&fStack_610,puVar19);
  fn_82365BD8(&puStack_618,puVar19);
  fn_822FEC40(&puStack_580,0xffffffff821aea98,param_1,iVar1,auStack_5f0,&uStack_608,
                    &puStack_618,auStack_600);
  if (puStack_614 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  puVar29 = puStack_580;
  puVar21 = puStack_57c;
  puVar14 = puStack_620;
  if (iStack_60c != 0) {
    fn_822315A0();
    puVar29 = puStack_580;
    puVar21 = puStack_57c;
    puVar14 = puStack_620;
  }
  for (; puVar29 != puVar21; puVar29 = puVar29 + 2) {
    fn_822C72A0(puVar14,(ulonglong)*puVar29 + 4);
  }
  fn_82365BD8(&fStack_610,puVar19);
  fn_82365BD8(&puStack_618,puVar19);
  fn_822FEC40(&puStack_520,0xffffffff821aeaa0,param_1,iVar1,auStack_5f0,&uStack_608,
                    &puStack_618,auStack_600);
  if (puStack_614 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  puVar21 = puStack_520;
  if (iStack_60c != 0) {
    fn_822315A0();
    puVar21 = puStack_520;
  }
  for (; puVar21 != puStack_51c; puVar21 = puVar21 + 2) {
    lVar20 = (ulonglong)*puVar21 + 4;
    fn_822C72A0(puVar14,lVar20,lVar20);
    puVar29 = puStack_57c;
    for (puVar27 = puStack_580; puVar27 != puVar29; puVar27 = puVar27 + 2) {
      fn_822C72A0(*puVar27,lVar20,lVar20);
    }
  }
  fn_822FEC40(&puStack_570,0xffffffff821aeaa8,param_1,iVar1,auStack_5f0,&uStack_608,
                    &puStack_620,auStack_600);
  puVar21 = puStack_56c;
  for (puVar29 = puStack_570; puVar29 != puVar21; puVar29 = puVar29 + 2) {
    fn_822C72A0(puVar14,(ulonglong)*puVar29 + 4);
  }
  puVar15 = (undefined4 *)
            fn_822FF208(auStack_4c0,auStack_5f0,**(undefined4 **)(param_2 + 0x50));
  puStack_618 = (undefined4 *)*puVar15;
  puStack_614 = (undefined4 *)puVar15[1];
  *puVar15 = 0;
  puVar15[1] = 0;
  if (iStack_4bc != 0) {
    fn_822315A0();
  }
  fn_822C8B40(param_1,&puStack_618);
  fn_82365BD8(auStack_5e0,puVar19);
  fn_82365BD8(&fStack_610,puVar19);
  fn_822FEC40(&puStack_4b0,0xffffffff821acea4,param_1,iVar1,auStack_5f0,&uStack_608,
                    &fStack_610,auStack_600);
  if (iStack_60c != 0) {
    fn_822315A0();
  }
  if (iStack_5dc != 0) {
    fn_822315A0();
  }
  for (; puStack_4b0 != puStack_4ac; puStack_4b0 = puStack_4b0 + 2) {
    fn_822C72A0(puStack_618,(ulonglong)*puStack_4b0 + 4);
  }
  fn_82365BD8(&fStack_610,puVar19);
  fn_82365BD8(auStack_5e0,puVar19);
  fn_822FEC40(&puStack_470,0xffffffff821ace98,param_1,iVar1,auStack_5f0,&uStack_608,
                    auStack_5e0,auStack_600);
  if (iStack_5dc != 0) {
    fn_822315A0();
  }
  puVar21 = puStack_470;
  if (iStack_60c != 0) {
    fn_822315A0();
    puVar21 = puStack_470;
  }
  for (; puVar21 != puStack_46c; puVar21 = puVar21 + 2) {
    lVar20 = (ulonglong)*puVar21 + 4;
    fn_822C72A0(uStack_5d0,lVar20,lVar20);
    fn_822C72A0(lVar18,lVar20,lVar20);
    puVar15 = puStack_5ac;
    for (puVar23 = puStack_5b0; puVar23 != puVar15; puVar23 = puVar23 + 2) {
      fn_822C72A0(*puVar23,lVar20,lVar20);
    }
    fn_822C72A0(puVar14,lVar20,lVar20);
    puVar29 = puStack_5bc;
    for (puVar27 = puStack_5c0; puVar5 = puStack_57c, puVar28 = puStack_580, puVar27 != puVar29;
        puVar27 = puVar27 + 2) {
      fn_822C72A0(*puVar27,lVar20,lVar20);
    }
    for (; puVar29 = puStack_56c, puVar27 = puStack_570, puVar28 != puVar5; puVar28 = puVar28 + 2) {
      fn_822C72A0(*puVar28,lVar20,lVar20);
    }
    for (; puVar27 != puVar29; puVar27 = puVar27 + 2) {
      fn_822C72A0(*puVar27,lVar20,lVar20);
    }
  }
  fn_8255FD70(&iStack_4d0,*puVar17,0xffffffff821ace80);
  fn_8234F250(&pcStack_5a0,puVar17,appppuStack_440);
  uVar30 = 0;
  uVar2 = iStack_4cc - iStack_4d0 >> 2;
  if (uVar2 != 0) {
    puVar15 = (undefined4 *)(iStack_4d0 + -4);
    do {
      puVar15 = puVar15 + 1;
      fn_82230110(auStack_2e0,*puVar15);
      uVar6 = fn_82365BD8(auStack_5e0,auStack_600);
      uVar9 = fn_82365BD8(&fStack_610,puVar19);
      uVar10 = fn_82365BD8(auStack_5c8,&uStack_608);
      fn_822FEE60(param_1,iVar1,auStack_5f0,auStack_2e0,uVar10,uVar9,uVar6,&pcStack_5a0);
      fn_82230300(auStack_2e0,1,0);
      uVar30 = uVar30 + 1;
    } while (uVar30 < uVar2);
  }
  fn_8255FD70(auStack_490,*puVar17,0xffffffff821ace88);
  fn_8255FD70(&puStack_4f0,*puVar17,0xffffffff821aeab4);
  puVar15 = puStack_4f0;
  for (lVar20 = (longlong)(iStack_4ec - (int)puStack_4f0 >> 2); lVar20 != 0; lVar20 = lVar20 + -1) {
    fn_82230110(auStack_e0,*puVar15);
    uVar6 = fn_82365BD8(auStack_5c8,auStack_600);
    uVar9 = fn_82365BD8(auStack_5e0,puVar19);
    uVar10 = fn_82365BD8(&fStack_610,&uStack_608);
    fn_822FEE60(param_1,iVar1,auStack_5f0,auStack_e0,uVar10,uVar9,uVar6,auStack_490);
    fn_82230300(auStack_e0,1,0);
    fn_82230110(auStack_1a0,*puVar15);
    fn_82230110(auStack_2a0,*puVar15);
    fn_822C72A0(lVar18,auStack_2a0,auStack_1a0);
    fn_82230300(auStack_2a0,1,0);
    fn_82230300(auStack_1a0,1,0);
    fn_82230110(auStack_3e0,*puVar15);
    fn_82230110(auStack_260,*puVar15);
    fn_822C72A0(puVar14,auStack_260,auStack_3e0);
    fn_82230300(auStack_260,1,0);
    fn_82230300(auStack_3e0,1,0);
    puVar23 = puStack_54c;
    for (puVar24 = puStack_550; puVar26 = puStack_5ac, puVar25 = puStack_5b0, puVar24 != puVar23;
        puVar24 = puVar24 + 2) {
      fn_82230110(auStack_380,*puVar15);
      fn_82230110(auStack_3c0,*puVar15);
      fn_822C72A0(*puVar24,auStack_3c0,auStack_380);
      fn_82230300(auStack_3c0,1,0);
      fn_82230300(auStack_380,1,0);
    }
    for (; puVar25 != puVar26; puVar25 = puVar25 + 2) {
      fn_82230110(auStack_300,*puVar15);
      fn_82230110(auStack_340,*puVar15);
      fn_822C72A0(*puVar25,auStack_340,auStack_300);
      fn_82230300(auStack_340,1,0);
      fn_82230300(auStack_300,1,0);
    }
    puVar15 = puVar15 + 1;
  }
  fn_8255FD70(&puStack_480,*puVar17,0xffffffff821aeac4);
  puVar17 = puStack_480;
  for (lVar20 = (longlong)(iStack_47c - (int)puStack_480 >> 2); lVar20 != 0; lVar20 = lVar20 + -1) {
    fn_82230110(auStack_2c0,*puVar17);
    uVar6 = fn_82365BD8(auStack_5c8,auStack_600);
    uVar9 = fn_82365BD8(auStack_5e0,puVar19);
    uVar10 = fn_82365BD8(&fStack_610,&uStack_608);
    fn_822FEE60(param_1,iVar1,auStack_5f0,auStack_2c0,uVar10,uVar9,uVar6,auStack_490);
    fn_82230300(auStack_2c0,1,0);
    fn_82230110(auStack_240,*puVar17);
    fn_82230110(auStack_280,*puVar17);
    fn_822C72A0(lVar18,auStack_280,auStack_240);
    fn_82230300(auStack_280,1,0);
    fn_82230300(auStack_240,1,0);
    fn_82230110(auStack_1c0,*puVar17);
    fn_82230110(auStack_200,*puVar17);
    fn_822C72A0(puVar14,auStack_200,auStack_1c0);
    fn_82230300(auStack_200,1,0);
    fn_82230300(auStack_1c0,1,0);
    puVar15 = puStack_54c;
    for (puVar23 = puStack_550; puVar24 = puStack_5ac, puVar26 = puStack_5b0, puVar23 != puVar15;
        puVar23 = puVar23 + 2) {
      fn_82230110(auStack_140,*puVar17);
      fn_82230110(auStack_180,*puVar17);
      fn_822C72A0(*puVar23,auStack_180,auStack_140);
      fn_82230300(auStack_180,1,0);
      fn_82230300(auStack_140,1,0);
    }
    for (; puVar26 != puVar24; puVar26 = puVar26 + 2) {
      fn_82230110(auStack_c0,*puVar17);
      fn_82230110(auStack_100,*puVar17);
      fn_822C72A0(*puVar26,auStack_100,auStack_c0);
      fn_82230300(auStack_100,1,0);
      fn_82230300(auStack_c0,1,0);
    }
    puVar17 = puVar17 + 1;
  }
  fn_822D5340(&puStack_480);
  fn_822D5340(&puStack_4f0);
  fn_822D5340(auStack_490);
  fn_822D5340(&pcStack_5a0);
  fn_822D5340(&iStack_4d0);
  if (*(int *)(**(int **)(param_2 + 0x50) + 0x1ec) != 0) {
    uVar6 = fn_82365BD8(auStack_5c8,auStack_600);
    uVar9 = fn_82365BD8(auStack_5e0,&uStack_608);
    fn_822FE028(param_1,param_2,auStack_5f0,uVar9,uVar6);
  }
  fn_82359BB0(&puStack_470);
  fn_82359BB0(&puStack_4b0);
  if (puStack_614 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82359BB0(&puStack_570);
  fn_82359BB0(&puStack_520);
  fn_82359BB0(&puStack_580);
  if (puStack_61c != (undefined4 *)0x0) {
    fn_822315A0();
  }
  fn_82359BB0(&puStack_5c0);
  fn_82359BB0(&puStack_500);
  if (iStack_5d4 != 0) {
    fn_822315A0();
  }
  fn_82359BB0(&puStack_4e0);
  fn_82230300(auStack_420,1,0);
  fn_82230300(appppuStack_460,1,0);
  fn_82359BB0(&puStack_550);
  fn_82359BB0(&puStack_5b0);
  fn_82359BB0(&puStack_560);
  if ((uVar8 & 0xffffffff) != 0) {
    fn_822315A0(uVar8);
  }
  if ((uVar7 & 0xffffffff) != 0) {
    fn_822315A0(uVar7);
  }
  if (puVar12 != (undefined4 *)0x0) {
    fn_822315A0(puVar12);
  }
  if (puVar11 != (undefined4 *)0x0) {
    fn_822315A0(puVar11);
  }
  if (iStack_5cc != 0) {
    fn_822315A0();
  }
  fn_82230300(appppuStack_540,1,0);
  if (iStack_604 != 0) {
    fn_822315A0();
  }
  fn_82230300(appppuStack_440,1,0);
  if (iStack_5fc != 0) {
    fn_822315A0();
  }
  fn_827D9C88(auStack_5f0);
  return param_1;
}

