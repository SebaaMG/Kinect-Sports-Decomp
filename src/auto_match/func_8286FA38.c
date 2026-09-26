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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_18c;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_1f0;
extern unsigned int *auStack_210;
extern unsigned int *auStack_230;
extern unsigned int *auStack_250;
extern unsigned int *auStack_270;
extern unsigned int *auStack_290;
extern unsigned int *auStack_2b0;
extern unsigned int *auStack_2d0;
extern unsigned int *auStack_2f0;
extern unsigned int *auStack_310;
extern unsigned int *auStack_320;
extern unsigned int *auStack_340;
extern unsigned int *auStack_38c;
extern unsigned int *auStack_3b0;
extern unsigned int *auStack_f0;
extern char cRam832116e5;
extern char cRam832116e7;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223DFF0();
extern int fn_8223FBB0();
extern int fn_8223FCD8();
extern int fn_82240158();
extern int fn_82240378();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_8257A9F0();
extern int fn_82811080();
extern int fn_82811400();
extern int fn_828647C0();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_828663F0();
extern int fn_82866418();
extern int fn_82866420();
extern int fn_82868378();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_8286E250();
extern int fn_82870970();
extern int fn_82A1F2F8();
extern int fn_82F62578();
extern int fn_82FE93B8();
extern unsigned int lbl_8286E2B0;
extern unsigned int uStack_34c;
extern unsigned int uStack_36c;


undefined8 fn_8286FA38(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int *piVar12;
  char cVar14;
  undefined4 *puVar13;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar15;
  undefined *puStack_3c0;
  undefined1 *puStack_3bc;
  undefined1 auStack_3b0 [36];
  undefined1 auStack_38c [12];
  undefined4 ****appppuStack_380 [5];
  uint uStack_36c;
  undefined4 ****appppuStack_360 [5];
  uint uStack_34c;
  undefined1 auStack_340 [32];
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [32];
  undefined1 auStack_2f0 [32];
  undefined1 auStack_2d0 [32];
  undefined1 auStack_2b0 [32];
  undefined1 auStack_290 [32];
  undefined1 auStack_270 [32];
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [4];
  undefined1 auStack_18c [156];
  undefined1 auStack_f0 [240];
  
  puStack_3c0 = (undefined *)0x0;
  (**(code **)(*param_1 + 0x30))(auStack_3b0,param_1,param_2);
  puStack_3bc = auStack_3b0;
  puStack_3c0 = &lbl_8286E2B0;
  piVar12 = (int *)fn_82870970(param_1[1],param_1[2],CONCAT44(&lbl_8286E2B0,puStack_3bc));
  if (piVar12 == (int *)param_1[2]) {
LAB_8286fc5c:
    fn_828648B8(auStack_2d0,auStack_3b0);
    fn_8223B688(appppuStack_380,auStack_2d0);
    fn_82230300(auStack_2d0,1,0);
    uVar15 = fn_82811400(auStack_340,4);
    lVar11 = fn_82811080(0xffffffff832116f8,0x48,uVar15);
    if (lVar11 == 0) {
      puStack_3c0 = (undefined *)0x0;
    }
    else {
      fn_828648B8(auStack_230,auStack_3b0);
      puStack_3c0 = (undefined *)fn_8286E250(lVar11,auStack_230,param_3);
      fn_82230300(auStack_230,1,0);
    }
    fn_8257A9F0(param_1 + 1,&puStack_3c0);
    puVar3 = puStack_3c0;
    if (uStack_36c < 0x10) {
      appppuStack_380[0] = appppuStack_380;
    }
    uVar15 = fn_82FE93B8(appppuStack_380[0],0xffffffff8286e9b0,puStack_3c0,0xffffffffffffffff,
                               auStack_38c);
    if ((int)uVar15 != 1) {
      fn_828648B8(auStack_250,auStack_3b0);
      uVar4 = fn_8223B688(auStack_1f0,auStack_250);
      uVar4 = fn_8286A3D8(uVar4,0,0xffffffff8202164c,0x1b);
      uVar4 = fn_8223DFF0(uVar4,0xffffffff82021644,4);
      fn_82240378(auStack_2f0,uVar4);
      fn_82230300(auStack_1f0,1,0);
      fn_82230300(auStack_250,1,0);
      uVar4 = fn_8223B688(auStack_340,auStack_2f0);
      uVar5 = fn_82868378();
      fn_8286DA10(uVar5,uVar4,uVar15);
      fn_82865170();
      fn_82866418();
      fn_828648B8(auStack_310,auStack_3b0);
      fn_82865170();
      piVar12 = (int *)fn_828663F0();
      puVar13 = (undefined4 *)fn_8223B688(auStack_1d0,auStack_310);
      if (0xf < (uint)puVar13[5]) {
        puVar13 = (undefined4 *)*puVar13;
      }
      (**(code **)(*piVar12 + 0xc))(piVar12,0xffffffff82021690,0x99,0xffffffff82021668,puVar13);
      fn_82230300(auStack_1d0,1,0);
      fn_82230300(auStack_310,1,0);
      puVar3[0x29] = 1;
      fn_82230300(auStack_2f0,1,0);
      fn_82230300(appppuStack_380,1,0);
      uVar15 = 0xffffffffa0100000;
      goto LAB_8286fc48;
    }
    if (cRam832116e5 != '\0') {
      fn_8223CFC0(auStack_190,2,1);
      fn_828648B8(auStack_2b0,auStack_3b0);
      uVar15 = 0xffffffff8202170c;
      if (puVar3[0x28] == '\0') {
        uVar15 = 0xffffffff82021714;
      }
      puVar13 = (undefined4 *)fn_8223B688(auStack_1b0,auStack_2b0);
      if (0xf < (uint)puVar13[5]) {
        puVar13 = (undefined4 *)*puVar13;
      }
      uVar2 = *(undefined4 *)(puVar3 + 0x24);
      uVar4 = fn_828647D8(auStack_3b0);
      uVar5 = fn_82F62578(auStack_340,2);
      uVar6 = fn_828647D8(auStack_3b0);
      uVar7 = fn_82F62578(auStack_320,10);
      uVar8 = fn_82A1F2F8();
      uVar9 = fn_82F62578(&puStack_3c0,8);
      uVar10 = fn_82240158(auStack_190,0xffffffff8202174c);
      uVar9 = fn_8223FCD8(uVar10,uVar9);
      uVar8 = fn_82520AC8(uVar9,uVar8);
      uVar8 = fn_82240158(uVar8,0xffffffff82021748);
      uVar8 = fn_82240158(uVar8,0xffffffff82021728);
      uVar7 = fn_8223FCD8(uVar8,uVar7);
      uVar6 = fn_82520AC8(uVar7,uVar6);
      uVar6 = fn_82240158(uVar6,0xffffffff82021724);
      uVar6 = fn_82240158(uVar6,0xffffffff8202171c);
      uVar15 = fn_82240158(uVar6,uVar15);
      uVar15 = fn_82240158(uVar15,0xffffffff82021704);
      uVar15 = fn_8223FCD8(uVar15,uVar5);
      uVar15 = fn_8223FBB0(uVar15,uVar2);
      uVar15 = fn_82240158(uVar15,0xffffffff820216ec);
      uVar15 = fn_82240158(uVar15,puVar13);
      uVar15 = fn_82240158(uVar15,0xffffffff820216e8);
      uVar15 = fn_82520AC8(uVar15,uVar4);
      fn_82240158(uVar15,0xffffffff820216e4);
      fn_82230300(auStack_1b0,1,0);
      fn_82230300(auStack_2b0,1,0);
      if (cRam832116e7 != '\0') {
        fn_822403C8(appppuStack_360,auStack_18c);
        if (uStack_34c < 0x10) {
          appppuStack_360[0] = appppuStack_360;
        }
        fn_82230110(auStack_270,appppuStack_360[0]);
        uVar15 = fn_82865170();
        fn_82866420(uVar15,auStack_270,0);
        fn_82230300(auStack_270,1,0);
        fn_82230300(appppuStack_360,1,0);
      }
      fn_8223DCC8(auStack_190);
    }
    fn_82230300(appppuStack_380,1,0);
  }
  else {
    iVar1 = *piVar12;
    cVar14 = fn_828647C0(iVar1,auStack_3b0);
    if (cVar14 == '\0') goto LAB_8286fc5c;
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + 1;
    if (cRam832116e5 != '\0') {
      fn_8223CFC0(auStack_f0,2,1);
      fn_828648B8(auStack_290,auStack_3b0);
      uVar15 = 0xffffffff82021600;
      if (*(char *)(iVar1 + 0x28) == '\0') {
        uVar15 = 0xffffffff82021608;
      }
      puVar13 = (undefined4 *)fn_8223B688(auStack_210,auStack_290);
      if (0xf < (uint)puVar13[5]) {
        puVar13 = (undefined4 *)*puVar13;
      }
      uVar2 = *(undefined4 *)(iVar1 + 0x24);
      uVar4 = fn_828647D8(auStack_3b0);
      uVar5 = fn_82F62578(&puStack_3c0,2);
      uVar6 = fn_828647D8(auStack_3b0);
      uVar7 = fn_82F62578(auStack_320,10);
      uVar8 = fn_82A1F2F8();
      uVar9 = fn_82F62578(auStack_340,8);
      uVar10 = fn_82240158(auStack_f0,0xffffffff82021640);
      uVar9 = fn_8223FCD8(uVar10,uVar9);
      uVar8 = fn_82520AC8(uVar9,uVar8);
      uVar8 = fn_82240158(uVar8,0xffffffff8202163c);
      uVar8 = fn_82240158(uVar8,0xffffffff8202161c);
      uVar7 = fn_8223FCD8(uVar8,uVar7);
      uVar6 = fn_82520AC8(uVar7,uVar6);
      uVar6 = fn_82240158(uVar6,0xffffffff82021618);
      uVar6 = fn_82240158(uVar6,0xffffffff82021610);
      uVar15 = fn_82240158(uVar6,uVar15);
      uVar15 = fn_82240158(uVar15,0xffffffff820215f8);
      uVar15 = fn_8223FCD8(uVar15,uVar5);
      uVar15 = fn_8223FBB0(uVar15,uVar2);
      uVar15 = fn_82240158(uVar15,0xffffffff820215e0);
      uVar15 = fn_82240158(uVar15,puVar13);
      uVar15 = fn_82240158(uVar15,0xffffffff820215dc);
      uVar15 = fn_82520AC8(uVar15,uVar4);
      fn_82240158(uVar15,0xffffffff820215d8);
      fn_82230300(auStack_210,1,0);
      fn_82230300(auStack_290,1,0);
      fn_8223DCC8(auStack_f0);
    }
  }
  uVar15 = 0x20100000;
LAB_8286fc48:
  fn_82864898(auStack_3b0);
  return uVar15;
}

