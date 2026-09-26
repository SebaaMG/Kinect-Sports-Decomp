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
extern unsigned int *auStack_170;
extern int fn_82A9FA30();
extern int fn_82C45168();
extern int fn_82C483D0();
extern int fn_82C498F8();
extern int fn_82C49BB0();
extern int fn_82C4E1D0();
extern int fn_82C562F0();
extern int fn_82C563B0();
extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_190;


undefined8 fn_82C49C68(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar7;
  undefined8 uVar6;
  byte *pbVar8;
  ulonglong uVar9;
  bool bVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  double dVar15;
  uint uStack_190;
  byte *pbStack_18c;
  int aiStack_188 [2];
  longlong lStack_180;
  undefined1 auStack_170 [368];
  
  pbStack_18c = (byte *)0x0;
  aiStack_188[0] = 1;
  if ((param_1 == (int *)0x0) || (*(longlong *)*param_1 != 0x1996011419991223)) {
    return 0xfffffffffffffffd;
  }
  iVar2 = *(int *)((longlong *)*param_1 + 0x5c);
  if (*(int *)(iVar2 + 0x10) != 0) {
    return 0xfffffffffffffffc;
  }
  uVar3 = *(undefined4 *)(iVar2 + 0xd30);
  lVar11 = (ulonglong)*(uint *)(iVar2 + 0x6070) + 8;
  fn_82A9FA30(uVar3,0,&pbStack_18c,4,&uStack_190,aiStack_188);
  uVar13 = 0;
  if (aiStack_188[0] != 0) {
    do {
      if ((*(int *)(iVar2 + 0x3cb0) != 7) || (uVar12 = uStack_190 + uVar13, 0xff < uVar12)) break;
      fn_82F68CC0(auStack_170 + uVar13,pbStack_18c);
      fn_82A9FA30(*(undefined4 *)(iVar2 + 0xd30),0,&pbStack_18c,4,&uStack_190,aiStack_188);
      uVar13 = uVar12;
    } while (aiStack_188[0] != 0);
    if (uVar13 != 0) {
      iVar14 = uStack_190 + uVar13;
      if (*(int *)(iVar2 + 0x5da0) < iVar14) {
        if (*(int *)(iVar2 + 0x5da0) != 0) {
          fn_82C563B0(lVar11,*(undefined4 *)(iVar2 + 0x5da4));
        }
        iVar7 = fn_82C562F0(lVar11,iVar14,0xffffffff82196582);
        *(int *)(iVar2 + 0x5da4) = iVar7;
        if (iVar7 == 0) {
          *(undefined4 *)(iVar2 + 0x5da0) = 0;
          return 0xfffffffffffffff7;
        }
        *(int *)(iVar2 + 0x5da0) = iVar14;
      }
      fn_82F68CC0(*(undefined4 *)(iVar2 + 0x5da4),auStack_170,uVar13);
      fn_82F68CC0(*(int *)(iVar2 + 0x5da4) + uVar13,pbStack_18c,uStack_190);
      uStack_190 = uStack_190 + uVar13;
      pbStack_18c = *(byte **)(iVar2 + 0x5da4);
    }
    if ((aiStack_188[0] != 0) && ((uStack_190 == 0 || (pbStack_18c == (byte *)0x0)))) {
      return 7;
    }
  }
  *(undefined4 *)(iVar2 + 0x5650) = 0;
  *(undefined4 *)(iVar2 + 0x5660) = 0;
  *(undefined4 *)(iVar2 + 0x5654) = 0;
  *(undefined4 *)(iVar2 + 0x5658) = 0;
  if (*(int *)(iVar2 + 0x3cb0) == 7) {
    bVar1 = *pbStack_18c;
    if ((bVar1 & 2) == 0) {
      *(undefined4 *)(iVar2 + 0x5660) = 0;
      *(undefined4 *)(iVar2 + 0x39f4) = 1;
    }
    else {
      *(undefined4 *)(iVar2 + 0x5660) = 1;
      *(undefined4 *)(iVar2 + 0x39f4) = 0;
    }
    *(uint *)(iVar2 + 0x5650) = bVar1 >> 2 & 1;
    if ((bVar1 & 0x20) == 0) {
      *(undefined4 *)(iVar2 + 0x565c) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0x565c) = 1;
    }
    uVar9 = (ulonglong)uStack_190 - 1;
    uStack_190 = (uint)uVar9;
    if (uVar9 != 0) {
      pbVar8 = pbStack_18c + 1;
      bVar10 = *(int *)(iVar2 + 0x3cb0) == 7;
      goto LAB_82c49f04;
    }
    fn_82A9FA30(*(undefined4 *)(iVar2 + 0xd30),0,&pbStack_18c,4,&uStack_190,aiStack_188);
    bVar10 = *(int *)(iVar2 + 0x3cb0) == 7;
  }
  else {
    bVar10 = false;
  }
  uVar9 = (ulonglong)uStack_190;
  pbVar8 = pbStack_18c;
LAB_82c49f04:
  fn_82C4E1D0(*(undefined4 *)(iVar2 + 0x50),pbVar8,uVar9,aiStack_188[0],bVar10);
  *(int *)(*(int *)(iVar2 + 0x50) + 0x18) = aiStack_188[0];
  uVar6 = fn_82C45168(iVar2,pbStack_18c,uStack_190);
  if ((int)uVar6 == 0) {
    if ((*(int *)(iVar2 + 0x3c04) == 0) && (*(int *)(iVar2 + 0x3c48) == 0)) {
      fn_82C483D0(iVar2);
    }
    else {
      uVar4 = *(undefined4 *)(iVar2 + 0x58);
      uVar5 = *(undefined4 *)(iVar2 + 0x5c);
      if ((*param_1 == 0) ||
         ((iVar14 = *(int *)(*param_1 + 0x2e0), *(int *)(iVar14 + 0x10) != 0 ||
          (iVar14 = *(int *)(iVar14 + 0xe80), iVar14 < 1)))) {
        iVar14 = 0x1e;
      }
      if (*(int *)(iVar2 + 0x3c48) == 0) {
        fn_82C49BB0();
        lStack_180 = (longlong)iVar14;
        dVar15 = (double)lbl_821AAD20;
        *param_1 = 0;
        uVar6 = fn_82C498F8((double)lStack_180,dVar15,param_1,uVar3,0x574d5633);
      }
      else {
        fn_82C49BB0();
        lStack_180 = (longlong)iVar14;
        dVar15 = (double)lbl_821AAD20;
        *param_1 = 0;
        uVar6 = fn_82C498F8((double)lStack_180,dVar15,param_1,uVar3,0x57565032);
      }
      iVar2 = *(int *)(*param_1 + 0x2e0);
      if ((int)uVar6 == 0) {
        *(undefined4 *)(iVar2 + 0x3c0c) = uVar4;
        *(undefined4 *)(iVar2 + 0x3c10) = uVar5;
        if (*(int *)(iVar2 + 0x3cb0) == 7) {
          uVar9 = (ulonglong)uStack_190 - 1;
          uStack_190 = (uint)uVar9;
          bVar10 = *(int *)(iVar2 + 0x3cb0) == 7;
          pbVar8 = pbStack_18c + 1;
        }
        else {
          uVar9 = (ulonglong)uStack_190;
          bVar10 = false;
          pbVar8 = pbStack_18c;
        }
        fn_82C4E1D0(*(undefined4 *)(iVar2 + 0x50),pbVar8,uVar9,aiStack_188[0],bVar10);
        uVar6 = fn_82C45168(iVar2,pbStack_18c,uStack_190);
      }
    }
  }
  return uVar6;
}

