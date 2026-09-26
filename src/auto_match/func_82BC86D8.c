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
extern int fn_82AB15D0();
extern int fn_82BA0310();
extern int fn_82BA0690();
extern int fn_82BBFE50();
extern int fn_82BC24F0();
extern int fn_82BC34D8();
extern int fn_82BD34B0();
extern int fn_82BD35C8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820E4EEC;
extern unsigned int lbl_821AAD20;


void fn_82BC86D8(int param_1,undefined8 param_2,uint *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar10;
  longlong lVar9;
  uint uVar11;
  double dVar12;
  
  uVar5 = *param_3;
  piVar1 = (int *)0x0;
  iVar10 = 0;
  iVar6 = (int)(short)uVar5;
  uVar7 = uVar5 >> 0x10 & 0x3f;
  if ((uVar5 & 0x400000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_3[1] >> 9 & 0xf;
  }
  if (uVar8 != 0) {
    if (6 < uVar8) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e7a28,0xffffffff820e74a8,0x367);
    }
    iVar10 = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
    *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = iVar10;
    *(short *)((int)param_3 + 2) = (short)iVar10;
    *param_3 = *param_3 & 0xffc0ffff | 0x40000;
    piVar1 = (int *)fn_82BC24F0(0x13,*(undefined4 *)(param_1 + 0xc));
    piVar1[0xe] = iVar10;
    piVar1[0xf] = iVar10;
    piVar1[0x14] = 0;
    piVar1[0x15] = 0;
    dVar12 = (double)*(float *)(&lbl_820E4EEC + uVar8 * 4);
    fn_82BC34D8(dVar12,dVar12,dVar12,dVar12,piVar1,param_1,2);
    fn_82BBFE50(param_2,piVar1);
  }
  uVar8 = 0;
  lVar9 = 0;
  do {
    iVar2 = fn_82BD34B0(param_3,lVar9);
    uVar11 = (uint)lVar9;
    lVar9 = lVar9 + 1;
    uVar8 = ((uint)LZCOUNT(iVar2 + -2) >> 5) << (uVar11 & 0x3f) | uVar8;
  } while ((int)lVar9 < 4);
  if (uVar8 != 0) {
    if (piVar1 == (int *)0x0) {
      if (iVar10 != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e7a14,0xffffffff820e74a8,0x37f);
      }
      iVar10 = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
      *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = iVar10;
      *(short *)((int)param_3 + 2) = (short)iVar10;
      *param_3 = *param_3 & 0xffc0ffff | 0x40000;
    }
    piVar1 = (int *)fn_82BC24F0(0x31,*(undefined4 *)(param_1 + 0xc));
    piVar1[0xe] = iVar10;
    piVar1[0x14] = 0;
    dVar12 = (double)lbl_821AAD20;
    fn_82BC34D8(dVar12,dVar12,dVar12,piVar1,param_1,1);
    lVar9 = 0;
    do {
      (**(code **)(*piVar1 + 0x54))(piVar1,0,lVar9,((int)uVar8 >> ((uint)lVar9 & 0x3f) & 1U) == 0);
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < 4);
    fn_82BBFE50(param_2,piVar1);
  }
  uVar8 = 0;
  lVar9 = 0;
  do {
    iVar2 = fn_82BD34B0(param_3,lVar9);
    uVar11 = (uint)lVar9;
    lVar9 = lVar9 + 1;
    uVar8 = ((uint)LZCOUNT(iVar2 + -3) >> 5) << (uVar11 & 0x3f) | uVar8;
  } while ((int)lVar9 < 4);
  if (uVar8 != 0) {
    if (piVar1 == (int *)0x0) {
      if (iVar10 != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e7a14,0xffffffff820e74a8,0x39a);
      }
      iVar10 = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
      *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = iVar10;
      *(short *)((int)param_3 + 2) = (short)iVar10;
      *param_3 = *param_3 & 0xffc0ffff | 0x40000;
    }
    piVar1 = (int *)fn_82BC24F0(0x31,*(undefined4 *)(param_1 + 0xc));
    piVar1[0xe] = iVar10;
    piVar1[0x14] = 0;
    dVar12 = (double)lbl_82002AE0;
    fn_82BC34D8(dVar12,dVar12,dVar12,piVar1,param_1,1);
    lVar9 = 0;
    do {
      (**(code **)(*piVar1 + 0x54))(piVar1,0,lVar9,((int)uVar8 >> ((uint)lVar9 & 0x3f) & 1U) == 0);
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < 4);
    fn_82BBFE50(param_2,piVar1);
  }
  cVar3 = fn_82BD35C8(param_3);
  if (cVar3 != '\0') {
    if ((piVar1 == (int *)0x0) || (iVar10 == 0)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e79f4,0xffffffff820e74a8,0x3b0);
    }
    piVar1 = (int *)fn_82BC24F0(0x31,*(undefined4 *)(param_1 + 0xc));
    piVar1[0xe] = iVar10;
    piVar1[0x14] = 0;
    piVar1[0xf] = iVar10;
    piVar1[0x15] = 0;
    fn_82BBFE50(param_2,piVar1);
  }
  if (piVar1 != (int *)0x0) {
    if ((*param_3 >> 0x17 & 1) != 0) {
      cVar3 = fn_82BA0310(param_1);
      if (cVar3 == '\0') {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e79e0,0xffffffff820e74a8,0x3bc);
      }
      if (((uVar7 != 0xf) && (uVar7 != 0x11)) && (uVar7 != 0xb)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e7970,0xffffffff820e74a8,0x3bf);
      }
      iVar6 = uVar7 * 8 + *(int *)(param_1 + 0x5c);
      if (*(char *)(param_1 + 0x844) == '\0') {
        *(undefined1 *)(param_1 + 0x844) = 1;
        *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(iVar6 + 4);
      }
      else if (*(int *)(param_1 + 0x848) != *(int *)(iVar6 + 4)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e793c,0xffffffff820e74a8,0x3c4);
      }
      piVar1[0x32] = (int)(short)uVar5;
      uVar7 = 0x20;
      piVar1[0x39] = piVar1[0x39] | 0x10;
      fn_82BA0690(param_1,piVar1);
      if (*(int *)(param_4 + 4) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e7928,0xffffffff820e74a8,0x3cb);
      }
      uVar5 = *(uint *)(param_4 + 4) - 1;
      if (uVar5 < *(uint *)(param_4 + 4)) {
        piVar4 = (int *)(uVar5 * 4 + *(int *)(param_4 + 8));
      }
      else {
        piVar4 = (int *)0x0;
      }
      iVar6 = *(int *)(*piVar4 + 0x88);
      *param_3 = *param_3 & 0xff7fffff;
    }
    iVar10 = *(int *)(uVar7 * 8 + *(int *)(param_1 + 0x5c) + 4);
    piVar1[0xe] = iVar6;
    piVar1[0x14] = iVar10;
    if ((*param_3 & 0x400000) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_3[1] >> 8 & 1;
    }
    if (uVar5 != 0) {
      *(undefined1 *)(piVar1 + 0x29) = 1;
    }
    if ((*param_3 & 0x400000) != 0) {
      param_3[1] = param_3[1] & 0xfffffeff;
    }
    lVar9 = 0;
    do {
      iVar6 = fn_82BD34B0(param_3,lVar9);
      (**(code **)(*piVar1 + 0x54))(piVar1,0,lVar9,iVar6 == 0);
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < 4);
    if ((*param_3 & 0x400000) != 0) {
      param_3[1] = param_3[1] & 0xffffff00 | 0x55;
    }
  }
  return;
}

