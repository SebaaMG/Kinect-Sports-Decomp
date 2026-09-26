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
extern unsigned int *auStack_100;
extern unsigned int *auStack_19c;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_23c;
extern unsigned int *auStack_240;
extern unsigned int *auStack_2dc;
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
extern unsigned int *auStack_440;
extern unsigned int *auStack_460;
extern unsigned int *auStack_480;
extern unsigned int *auStack_4a0;
extern unsigned int *auStack_4c0;
extern unsigned int *auStack_4e0;
extern unsigned int *auStack_570;
extern unsigned int *auStack_5b0;
extern unsigned int *auStack_fc;
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
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_82866418();
extern int fn_82866420();
extern int fn_82868378();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_82870970();
extern int fn_82A1F2F8();
extern int fn_82F62578();
extern int fn_82FE7960();
extern unsigned int lbl_8286E2B0;
extern unsigned int uStack_4ec;
extern unsigned int uStack_50c;
extern unsigned int uStack_52c;
extern unsigned int uStack_54c;


undefined8 fn_82870070(int *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar12;
  undefined4 *puVar13;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar14;
  undefined1 auStack_5b0 [48];
  undefined *puStack_580;
  undefined1 *puStack_57c;
  undefined1 auStack_570 [16];
  undefined4 ******appppppuStack_560 [5];
  uint uStack_54c;
  undefined4 ******appppppuStack_540 [5];
  uint uStack_52c;
  undefined4 ******appppppuStack_520 [5];
  uint uStack_50c;
  undefined4 ******appppppuStack_500 [5];
  uint uStack_4ec;
  undefined1 auStack_4e0 [32];
  undefined1 auStack_4c0 [32];
  undefined1 auStack_4a0 [32];
  undefined1 auStack_480 [32];
  undefined1 auStack_460 [32];
  undefined1 auStack_440 [32];
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
  undefined1 auStack_2e0 [4];
  undefined1 auStack_2dc [156];
  undefined1 auStack_240 [4];
  undefined1 auStack_23c [156];
  undefined1 auStack_1a0 [4];
  undefined1 auStack_19c [156];
  undefined1 auStack_100 [4];
  undefined1 auStack_fc [252];
  
  (**(code **)(*param_1 + 0x30))(auStack_5b0,param_1,param_2);
  puStack_57c = auStack_5b0;
  puStack_580 = &lbl_8286E2B0;
  piVar12 = (int *)fn_82870970(param_1[1],param_1[2],CONCAT44(&lbl_8286E2B0,puStack_57c));
  if (piVar12 == (int *)param_1[2]) {
    if ((cRam832116e5 != '\0') || (cRam832116e7 != '\0')) {
      fn_8223CFC0(auStack_2e0,2,1);
      fn_828648B8(auStack_4a0,auStack_5b0);
      puVar13 = (undefined4 *)fn_8223B688(auStack_380,auStack_4a0);
      if (0xf < (uint)puVar13[5]) {
        puVar13 = (undefined4 *)*puVar13;
      }
      uVar4 = fn_828647D8(auStack_5b0);
      uVar5 = fn_828647D8(auStack_5b0);
      uVar6 = fn_82F62578(&puStack_580,10);
      uVar7 = fn_82A1F2F8();
      uVar8 = fn_82F62578(auStack_570,8);
      uVar9 = fn_82240158(auStack_2e0,0xffffffff820217a8);
      uVar8 = fn_8223FCD8(uVar9,uVar8);
      uVar7 = fn_82520AC8(uVar8,uVar7);
      uVar7 = fn_82240158(uVar7,0xffffffff820217a4);
      uVar7 = fn_82240158(uVar7,0xffffffff82021784);
      uVar6 = fn_8223FCD8(uVar7,uVar6);
      uVar5 = fn_82520AC8(uVar6,uVar5);
      uVar5 = fn_82240158(uVar5,0xffffffff82021780);
      uVar5 = fn_82240158(uVar5,0xffffffff82021764);
      uVar5 = fn_82240158(uVar5,puVar13);
      uVar5 = fn_82240158(uVar5,0xffffffff82021760);
      uVar4 = fn_82520AC8(uVar5,uVar4);
      fn_82240158(uVar4,0xffffffff8202175c);
      fn_82230300(auStack_380,1,0);
      fn_82230300(auStack_4a0,1,0);
      if (cRam832116e7 != '\0') {
        fn_822403C8(appppppuStack_560,auStack_2dc);
        if (uStack_54c < 0x10) {
          appppppuStack_560[0] = appppppuStack_560;
        }
        fn_82230110(auStack_480,appppppuStack_560[0]);
        uVar4 = fn_82865170();
        fn_82866420(uVar4,auStack_480,0);
        fn_82230300(auStack_480,1,0);
        fn_82230300(appppppuStack_560,1,0);
      }
      fn_8223DCC8(auStack_2e0);
    }
    fn_82864898(auStack_5b0);
    return 0xffffffffa0100000;
  }
  iVar1 = *piVar12;
  uVar2 = *(uint *)(iVar1 + 0x24);
  if (*(char *)(iVar1 + 0x28) == '\0') {
    *(int *)(iVar1 + 0x24) = (int)((ulonglong)uVar2 - 1);
    if ((longlong)((ulonglong)uVar2 - 1) < 1) {
      uVar4 = fn_828647D8(auStack_5b0);
      uVar4 = fn_82FE7960(uVar4,0xffffffff8286ecf0,iVar1);
      if ((int)uVar4 != 1) {
        fn_828648B8(auStack_4c0,auStack_5b0);
        uVar5 = fn_8223B688(auStack_320,auStack_4c0);
        uVar5 = fn_8286A3D8(uVar5,0,0xffffffff82021888,0x1d);
        uVar5 = fn_8223DFF0(uVar5,0xffffffff82021880,4);
        fn_82240378(auStack_460,uVar5);
        fn_82230300(auStack_320,1,0);
        fn_82230300(auStack_4c0,1,0);
        uVar5 = fn_8223B688(auStack_4e0,auStack_460);
        uVar6 = fn_82868378();
        fn_8286DA10(uVar6,uVar5,uVar4);
        fn_82865170();
        fn_82866418();
        *(undefined1 *)(iVar1 + 0x29) = 1;
        fn_82230300(auStack_460,1,0);
        goto LAB_82870494;
      }
      if ((cRam832116e5 != '\0') || (cRam832116e7 != '\0')) {
        fn_8223CFC0(auStack_100,2,1);
        fn_828648B8(auStack_420,auStack_5b0);
        uVar4 = 0xffffffff820218d0;
        if (*(char *)(iVar1 + 0x28) == '\0') {
          uVar4 = 0xffffffff820218d8;
        }
        puVar13 = (undefined4 *)fn_8223B688(auStack_340,auStack_420);
        if (0xf < (uint)puVar13[5]) {
          puVar13 = (undefined4 *)*puVar13;
        }
        uVar3 = *(undefined4 *)(iVar1 + 0x24);
        uVar5 = fn_828647D8(auStack_5b0);
        uVar6 = fn_82F62578(auStack_4e0,2);
        uVar7 = fn_828647D8(auStack_5b0);
        uVar8 = fn_82F62578(auStack_570,10);
        uVar9 = fn_82A1F2F8();
        uVar10 = fn_82F62578(&puStack_580,8);
        uVar11 = fn_82240158(auStack_100,0xffffffff82021914);
        uVar10 = fn_8223FCD8(uVar11,uVar10);
        uVar9 = fn_82520AC8(uVar10,uVar9);
        uVar9 = fn_82240158(uVar9,0xffffffff82021910);
        uVar9 = fn_82240158(uVar9,0xffffffff820218ec);
        uVar8 = fn_8223FCD8(uVar9,uVar8);
        uVar7 = fn_82520AC8(uVar8,uVar7);
        uVar7 = fn_82240158(uVar7,0xffffffff820218e8);
        uVar7 = fn_82240158(uVar7,0xffffffff820218e0);
        uVar4 = fn_82240158(uVar7,uVar4);
        uVar4 = fn_82240158(uVar4,0xffffffff820218c8);
        uVar4 = fn_8223FCD8(uVar4,uVar6);
        uVar4 = fn_8223FBB0(uVar4,uVar3);
        uVar4 = fn_82240158(uVar4,0xffffffff820218b0);
        uVar4 = fn_82240158(uVar4,puVar13);
        uVar4 = fn_82240158(uVar4,0xffffffff820218ac);
        uVar4 = fn_82520AC8(uVar4,uVar5);
        fn_82240158(uVar4,0xffffffff820218a8);
        fn_82230300(auStack_340,1,0);
        fn_82230300(auStack_420,1,0);
        if (cRam832116e7 != '\0') {
          fn_822403C8(appppppuStack_520,auStack_fc);
          if (uStack_50c < 0x10) {
            appppppuStack_520[0] = appppppuStack_520;
          }
          fn_82230110(auStack_3e0,appppppuStack_520[0]);
          uVar4 = fn_82865170();
          fn_82866420(uVar4,auStack_3e0,0);
          fn_82230300(auStack_3e0,1,0);
          fn_82230300(appppppuStack_520,1,0);
        }
        puVar14 = auStack_100;
        goto LAB_828706a0;
      }
    }
    else if ((cRam832116e5 != '\0') || (cRam832116e7 != '\0')) {
      fn_8223CFC0(auStack_240,2,1);
      fn_828648B8(auStack_440,auStack_5b0);
      uVar4 = 0xffffffff8202183c;
      if (*(char *)(iVar1 + 0x28) == '\0') {
        uVar4 = 0xffffffff82021844;
      }
      puVar13 = (undefined4 *)fn_8223B688(auStack_300,auStack_440);
      if (0xf < (uint)puVar13[5]) {
        puVar13 = (undefined4 *)*puVar13;
      }
      uVar3 = *(undefined4 *)(iVar1 + 0x24);
      uVar5 = fn_828647D8(auStack_5b0);
      uVar6 = fn_82F62578(auStack_4e0,2);
      uVar7 = fn_828647D8(auStack_5b0);
      uVar8 = fn_82F62578(auStack_570,10);
      uVar9 = fn_82A1F2F8();
      uVar10 = fn_82F62578(&puStack_580,8);
      uVar11 = fn_82240158(auStack_240,0xffffffff8202187c);
      uVar10 = fn_8223FCD8(uVar11,uVar10);
      uVar9 = fn_82520AC8(uVar10,uVar9);
      uVar9 = fn_82240158(uVar9,0xffffffff82021878);
      uVar9 = fn_82240158(uVar9,0xffffffff82021858);
      uVar8 = fn_8223FCD8(uVar9,uVar8);
      uVar7 = fn_82520AC8(uVar8,uVar7);
      uVar7 = fn_82240158(uVar7,0xffffffff82021854);
      uVar7 = fn_82240158(uVar7,0xffffffff8202184c);
      uVar4 = fn_82240158(uVar7,uVar4);
      uVar4 = fn_82240158(uVar4,0xffffffff82021834);
      uVar4 = fn_8223FCD8(uVar4,uVar6);
      uVar4 = fn_8223FBB0(uVar4,uVar3);
      uVar4 = fn_82240158(uVar4,0xffffffff8202181c);
      uVar4 = fn_82240158(uVar4,puVar13);
      uVar4 = fn_82240158(uVar4,0xffffffff82021818);
      uVar4 = fn_82520AC8(uVar4,uVar5);
      fn_82240158(uVar4,0xffffffff82021814);
      fn_82230300(auStack_300,1,0);
      fn_82230300(auStack_440,1,0);
      if (cRam832116e7 != '\0') {
        fn_822403C8(appppppuStack_540,auStack_23c);
        if (uStack_52c < 0x10) {
          appppppuStack_540[0] = appppppuStack_540;
        }
        fn_82230110(auStack_3c0,appppppuStack_540[0]);
        uVar4 = fn_82865170();
        fn_82866420(uVar4,auStack_3c0,0);
        fn_82230300(auStack_3c0,1,0);
        fn_82230300(appppppuStack_540,1,0);
      }
      puVar14 = auStack_240;
LAB_828706a0:
      fn_8223DCC8(puVar14);
    }
    uVar4 = 0x20100000;
  }
  else {
    if (1 < (int)uVar2) {
      *(uint *)(iVar1 + 0x24) = uVar2 - 1;
    }
    if ((cRam832116e5 != '\0') || (cRam832116e7 != '\0')) {
      fn_8223CFC0(auStack_1a0,2,1);
      fn_828648B8(auStack_3a0,auStack_5b0);
      uVar4 = 0xffffffff820217d0;
      if (*(char *)(iVar1 + 0x28) == '\0') {
        uVar4 = 0xffffffff820217d8;
      }
      puVar13 = (undefined4 *)fn_8223B688(auStack_360,auStack_3a0);
      if (0xf < (uint)puVar13[5]) {
        puVar13 = (undefined4 *)*puVar13;
      }
      uVar3 = *(undefined4 *)(iVar1 + 0x24);
      uVar5 = fn_828647D8(auStack_5b0);
      uVar6 = fn_82F62578(auStack_570,2);
      uVar7 = fn_828647D8(auStack_5b0);
      uVar8 = fn_82F62578(&puStack_580,10);
      uVar9 = fn_82A1F2F8();
      uVar10 = fn_82F62578(auStack_4e0,8);
      uVar11 = fn_82240158(auStack_1a0,0xffffffff82021810);
      uVar10 = fn_8223FCD8(uVar11,uVar10);
      uVar9 = fn_82520AC8(uVar10,uVar9);
      uVar9 = fn_82240158(uVar9,0xffffffff8202180c);
      uVar9 = fn_82240158(uVar9,0xffffffff820217ec);
      uVar8 = fn_8223FCD8(uVar9,uVar8);
      uVar7 = fn_82520AC8(uVar8,uVar7);
      uVar7 = fn_82240158(uVar7,0xffffffff820217e8);
      uVar7 = fn_82240158(uVar7,0xffffffff820217e0);
      uVar4 = fn_82240158(uVar7,uVar4);
      uVar4 = fn_82240158(uVar4,0xffffffff820217c8);
      uVar4 = fn_8223FCD8(uVar4,uVar6);
      uVar4 = fn_8223FBB0(uVar4,uVar3);
      uVar4 = fn_82240158(uVar4,0xffffffff820217b4);
      uVar4 = fn_82240158(uVar4,puVar13);
      uVar4 = fn_82240158(uVar4,0xffffffff820217b0);
      uVar4 = fn_82520AC8(uVar4,uVar5);
      fn_82240158(uVar4,0xffffffff820217ac);
      fn_82230300(auStack_360,1,0);
      fn_82230300(auStack_3a0,1,0);
      if (cRam832116e7 != '\0') {
        fn_822403C8(appppppuStack_500,auStack_19c);
        if (uStack_4ec < 0x10) {
          appppppuStack_500[0] = appppppuStack_500;
        }
        fn_82230110(auStack_400,appppppuStack_500[0]);
        uVar4 = fn_82865170();
        fn_82866420(uVar4,auStack_400,0);
        fn_82230300(auStack_400,1,0);
        fn_82230300(appppppuStack_500,1,0);
      }
      fn_8223DCC8(auStack_1a0);
    }
LAB_82870494:
    uVar4 = 0xffffffffa0100000;
  }
  fn_82864898(auStack_5b0);
  return uVar4;
}

