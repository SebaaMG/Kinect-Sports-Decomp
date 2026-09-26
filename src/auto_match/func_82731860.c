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
extern unsigned int *auStack_480;
extern unsigned int *auStack_888;
extern unsigned int *auStack_8d0;
extern int fn_8267BE38();
extern int fn_8267BF50();
extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_8268B8E8();
extern int fn_8268F7C0();
extern int fn_8269F500();
extern int fn_826BD6B0();
extern int fn_826BD758();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_82722C50();
extern int fn_82726458();
extern int fn_827266E8();
extern int fn_82728090();
extern int fn_82729B90();
extern int fn_827314A0();
extern int fn_8276A220();
extern int fn_82773930();
extern int fn_82773958();
extern int fn_82773A88();
extern int fn_8278B290();
extern int fn_827912D8();
extern int fn_82791420();
extern int fn_82793908();
extern int fn_82794DC0();
extern int fn_82799D18();
extern int fn_82799D60();
extern int fn_82799EB8();
extern int fn_82799F60();
extern int fn_827A3A50();
extern unsigned int iStack_93c;
extern unsigned int iStack_94c;
extern unsigned int lbl_82010C6C;
extern unsigned int lbl_82196582;
extern unsigned int uStack_484;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_88c;
extern unsigned int uStack_8d4;
extern unsigned int uStack_8d8;
extern unsigned int uStack_8da;
extern unsigned int uStack_8dc;
extern unsigned int uStack_8de;
extern unsigned int uStack_8e0;
extern unsigned int uStack_8e2;
extern unsigned int uStack_8e4;
extern unsigned int uStack_8e8;
extern unsigned int uStack_8ec;
extern unsigned int uStack_8fa;
extern unsigned int uStack_8fc;
extern unsigned int uStack_8fe;
extern unsigned int uStack_900;
extern unsigned int uStack_902;
extern unsigned int uStack_904;
extern unsigned int uStack_908;
extern unsigned int uStack_90c;
extern unsigned int uStack_91a;
extern unsigned int uStack_91c;
extern unsigned int uStack_91e;
extern unsigned int uStack_920;
extern unsigned int uStack_922;
extern unsigned int uStack_924;
extern unsigned int uStack_928;
extern unsigned int uStack_92c;
extern unsigned int uStack_934;
extern unsigned int uStack_938;
extern unsigned int uStack_940;
extern unsigned int uStack_944;
extern unsigned int uStack_948;
extern unsigned int uStack_950;


void fn_82731860(int *param_1,undefined8 param_2,char param_3,char param_4)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar7;
  int *piVar8;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte bVar12;
  undefined4 uStack_950;
  int iStack_94c;
  undefined4 uStack_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  int iStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined **ppuStack_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined2 uStack_924;
  undefined2 uStack_922;
  undefined2 uStack_920;
  undefined2 uStack_91e;
  undefined2 uStack_91c;
  undefined2 uStack_91a;
  undefined **ppuStack_910;
  undefined4 uStack_90c;
  undefined4 uStack_908;
  undefined2 uStack_904;
  undefined2 uStack_902;
  undefined2 uStack_900;
  undefined2 uStack_8fe;
  undefined2 uStack_8fc;
  undefined2 uStack_8fa;
  undefined **ppuStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined2 uStack_8e4;
  undefined2 uStack_8e2;
  undefined2 uStack_8e0;
  undefined2 uStack_8de;
  undefined2 uStack_8dc;
  undefined2 uStack_8da;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined1 auStack_8d0 [48];
  undefined1 *puStack_8a0;
  undefined1 **ppuStack_89c;
  undefined1 *puStack_898;
  byte bStack_894;
  undefined1 *puStack_890;
  undefined4 uStack_88c;
  undefined1 auStack_888 [1024];
  undefined1 *puStack_488;
  undefined4 uStack_484;
  undefined1 auStack_480 [1024];
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  
  bVar4 = false;
  if (((int *)param_1[0x34] == (int *)0x0) || (bVar2 = true, *(int *)param_1[0x34] == 0)) {
    bVar2 = false;
  }
  if (bVar2) {
    param_3 = '\x01';
  }
  fn_8268B8E8(param_1 + 0x33);
  if (param_3 == '\0') {
    uVar10 = (ulonglong)*(ushort *)(param_1 + 0x32) & 0xefff;
  }
  else {
    uVar10 = (ulonglong)*(ushort *)(param_1 + 0x32) | 0x1000;
  }
  *(short *)(param_1 + 0x32) = (short)uVar10;
  bVar2 = false;
  bVar12 = 0;
  lVar11 = ((ulonglong)(uint)param_1[0x33] & 0xfffffffc) + 8;
  if ((uVar10 >> 3 & 1) == 0) {
    iVar7 = (**(code **)(*param_1 + 0x40))(param_1);
    piVar8 = (int *)(**(code **)(*(int *)(iVar7 + 8) + 0xc))((int *)(iVar7 + 8),3);
    if (piVar8 != (int *)0x0) {
      if (((uint)param_1[0x23] >> 0xe & 1) == 0) {
        iVar7 = param_1[0x20];
        if (iVar7 == 0) {
          iVar7 = fn_8269F500(param_1);
        }
        if (iVar7 == 0) {
          iVar7 = (**(code **)(*param_1 + 0x58))(param_1);
          iVar7 = *(int *)(iVar7 + 0x78);
        }
        puStack_898 = (undefined1 *)**(undefined4 **)(iVar7 + 8);
      }
      else {
        puStack_898 = &lbl_82196582;
      }
      puStack_890 = auStack_888;
      puStack_488 = auStack_480;
      puStack_8a0 = (undefined1 *)0x0;
      puStack_80 = auStack_888;
      puStack_78 = auStack_888;
      bStack_894 = 0;
      puStack_70 = auStack_480;
      uStack_88c = 0x200;
      puStack_68 = auStack_480;
      uStack_484 = 0x200;
      ppuStack_89c = &puStack_80;
      uStack_7c = 0;
      uStack_74 = 0x200;
      uStack_6c = 0;
      uStack_64 = 0x200;
      if ((param_3 == '\0') || (uVar10 = (**(code **)(*piVar8 + 4))(piVar8), (uVar10 & 1) != 0)) {
        lVar9 = fn_826BD758(lVar11,0xffffffffffffffff);
        fn_82773958(&puStack_70,lVar9 + 1);
        fn_826BD6B0(puStack_70,lVar11,0xffffffffffffffff);
        puStack_8a0 = puStack_70;
        if (param_3 != '\0') {
          bStack_894 = bStack_894 | 4;
        }
        (**(code **)(*piVar8 + 8))(piVar8,&puStack_8a0);
      }
      else {
        uVar5 = fn_8267BF50(param_1);
        fn_826FDED0(auStack_8d0,uVar5);
        ppuStack_930 = &lbl_82010C6C;
        uStack_92c = 1;
        uStack_928 = 0;
        uStack_924 = 0;
        uStack_922 = 0;
        uStack_920 = 0;
        uStack_91e = 0;
        uStack_91c = 0;
        uStack_91a = 0;
        fn_827266E8(param_1,auStack_8d0,&ppuStack_930);
        puVar1 = (uint *)param_1[0x34];
        if ((puVar1 == (uint *)0x0) || (bVar3 = true, *puVar1 == 0)) {
          bVar3 = false;
        }
        if (bVar3) {
          lVar9 = (ulonglong)*puVar1 + 0x30;
        }
        else {
          lVar9 = 0;
        }
        fn_82799EB8(param_1[0x28],lVar11,0xffffffffffffffff,*(ushort *)(param_1 + 0x32) >> 4 & 1
                        ,0,lVar9,auStack_8d0,&ppuStack_930);
        fn_82791420(*(undefined4 *)(param_1[0x28] + 8),&puStack_70);
        uVar10 = (**(code **)(*piVar8 + 4))(piVar8);
        if (((uVar10 & 0xffffffff) >> 1 & 1) != 0) {
          fn_82773A88(&puStack_70);
        }
        puStack_8a0 = puStack_70;
        (**(code **)(*piVar8 + 8))(piVar8,&puStack_8a0);
        ppuStack_930 = &lbl_82010C6C;
        fn_8278B290(&ppuStack_930);
        fn_8267C488(&ppuStack_930);
        fn_826FDF58(auStack_8d0);
      }
      bVar12 = bStack_894 & 1;
      if ((bStack_894 & 1) != 0) {
        if ((bStack_894 & 2) == 0) {
          fn_82793908(*(undefined4 *)(param_1[0x28] + 8),&uStack_8d8,&uStack_8d4,0);
          fn_82794DC0(*(undefined4 *)(param_1[0x28] + 8),uStack_8d8);
          fn_8276A220(*(undefined4 *)(param_1[0x28] + 8),uStack_8d4);
          uVar10 = ZEXT48(puStack_80);
          if (uVar10 == 0) {
            uVar10 = 0xffffffff820e975c;
          }
          fn_82799D60(param_1[0x28],uVar10,0xffffffffffffffff);
        }
        else {
          uVar5 = fn_8267BF50(param_1);
          fn_826FDED0(auStack_8d0,uVar5);
          ppuStack_910 = &lbl_82010C6C;
          uStack_90c = 1;
          uStack_908 = 0;
          uStack_904 = 0;
          uStack_902 = 0;
          uStack_900 = 0;
          uStack_8fe = 0;
          uStack_8fc = 0;
          uStack_8fa = 0;
          fn_827266E8(param_1,auStack_8d0,&ppuStack_910);
          uStack_934 = fn_8267BF50(param_1);
          puVar1 = (uint *)param_1[0x34];
          uStack_940 = 0;
          iStack_93c = 0;
          uStack_938 = 0;
          if ((puVar1 == (uint *)0x0) || (bVar2 = true, *puVar1 == 0)) {
            bVar2 = false;
          }
          if (bVar2) {
            lVar9 = (ulonglong)*puVar1 + 0x30;
          }
          else {
            lVar9 = 0;
          }
          uVar10 = ZEXT48(puStack_80);
          if (uVar10 == 0) {
            uVar10 = 0xffffffff820e975c;
          }
          fn_82799F60(param_1[0x28],uVar10,0xffffffffffffffff,
                            *(ushort *)(param_1 + 0x32) >> 4 & 1,&uStack_940,lVar9,auStack_8d0,
                            &ppuStack_910);
          if (iStack_93c != 0) {
            fn_82728090(param_1,&uStack_940);
          }
          fn_82726458(uStack_940,iStack_93c);
          fn_8267BE38(uStack_940);
          ppuStack_910 = &lbl_82010C6C;
          fn_8278B290(&ppuStack_910);
          fn_8267C488(&ppuStack_910);
          fn_826FDF58(auStack_8d0);
        }
        bVar2 = true;
      }
      fn_82773930(&puStack_70);
      fn_82773930(&puStack_80);
      fn_8267C4F0(piVar8);
    }
  }
  if (bVar12 == 0) {
    if (param_3 == '\0') {
      fn_82799D18(param_1[0x28],lVar11,0xffffffffffffffff);
    }
    else {
      uVar5 = fn_8267BF50(param_1);
      fn_826FDED0(auStack_8d0,uVar5);
      ppuStack_8f0 = &lbl_82010C6C;
      uStack_8ec = 1;
      uStack_8e8 = 0;
      uStack_8e4 = 0;
      uStack_8e2 = 0;
      uStack_8e0 = 0;
      uStack_8de = 0;
      uStack_8dc = 0;
      uStack_8da = 0;
      fn_827266E8(param_1,auStack_8d0,&ppuStack_8f0);
      uStack_944 = fn_8267BF50(param_1);
      puVar1 = (uint *)param_1[0x34];
      uStack_950 = 0;
      iStack_94c = 0;
      uStack_948 = 0;
      if ((puVar1 == (uint *)0x0) || (bVar3 = true, *puVar1 == 0)) {
        bVar3 = false;
      }
      if (bVar3) {
        lVar9 = (ulonglong)*puVar1 + 0x30;
      }
      else {
        lVar9 = 0;
      }
      fn_82799EB8(param_1[0x28],lVar11,0xffffffffffffffff,*(ushort *)(param_1 + 0x32) >> 4 & 1,
                      &uStack_950,lVar9,auStack_8d0,&ppuStack_8f0);
      if (iStack_94c != 0) {
        fn_82728090(param_1,&uStack_950);
      }
      fn_82726458(uStack_950,iStack_94c);
      fn_8267BE38(uStack_950);
      ppuStack_8f0 = &lbl_82010C6C;
      fn_8278B290(&ppuStack_8f0);
      fn_8267C488(&ppuStack_8f0);
      fn_826FDF58(auStack_8d0);
    }
  }
  iVar7 = *(int *)(param_1[0x28] + 0x114);
  if ((iVar7 != 0) && ((*(ushort *)(iVar7 + 0x68) & 1) == 0)) {
    uVar10 = fn_827912D8(*(undefined4 *)(param_1[0x28] + 8));
    uVar6 = fn_8268F7C0(*(undefined4 *)(param_1[0x28] + 0x114));
    if ((uVar10 & 0xffffffff) < (uVar6 & 0xffffffff)) {
      fn_827A3A50(*(undefined4 *)(param_1[0x28] + 0x114),uVar10,0);
    }
  }
  if (((int *)param_1[0x34] != (int *)0x0) && (*(int *)param_1[0x34] != 0)) {
    bVar4 = true;
  }
  if ((bVar4) && ((*(byte *)(*(int *)(param_1[0x28] + 8) + 0x20) & 1) != 0)) {
    fn_827314A0(param_1);
  }
  if (param_4 != '\0') {
    fn_82722C50(param_1);
  }
  if (bVar2) {
    fn_82729B90(param_1);
  }
  (**(code **)(*param_1 + 0x13c))(param_1);
  return;
}

