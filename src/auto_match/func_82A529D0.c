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
extern int fn_82A6C8E8();
extern int fn_82A6CB88();
extern int fn_82A6CF00();
extern int fn_82A6D200();
extern int fn_82C16A38();


undefined8 fn_82A529D0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar4;
  undefined8 uVar3;
  longlong lVar5;
  ushort uVar7;
  ulonglong uVar6;
  uint uVar8;
  short sVar10;
  int iVar9;
  
  iVar9 = 0;
  if ((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0)) {
    return 0xffffffff80070057;
  }
  if (*(int *)(iVar1 + 0x3c) < 3) {
    iVar9 = 4;
  }
  if (param_1[8] == 1) goto LAB_82a52c9c;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 4) = 1;
  if (param_1[0xb0] != 0) {
    return 0;
  }
  if ((*(int *)(iVar1 + 0xd4) == 0) && (*(int *)(iVar1 + 0x3c) < 3)) {
    param_1[3] = 0;
    if (*(int *)(iVar1 + 4) < 0) {
      *(undefined4 *)(iVar1 + 4) = 0;
      param_1[3] = 1;
    }
    if (param_1[0x3b] != *(int *)(iVar1 + 4)) {
      fn_82A6CB88(param_1 + 0x38);
    }
    if (param_1[0x3b] == *(int *)(iVar1 + 4)) {
      fn_82A6C8E8(param_1 + 0x38);
      return 0xffffffff80040004;
    }
    *(int *)(iVar1 + 4) = param_1[0x3b];
  }
  else {
    while( true ) {
      if (param_1[0x3b] == 0) {
        do {
          if (param_1[0x3c] == 0) {
            fn_82A6C8E8(param_1 + 0x38);
            uVar4 = fn_82C16A38(param_1);
            uVar3 = fn_82A6CF00(param_1 + 0x38,3,uVar4);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
          }
          else {
            iVar2 = param_1[0x3c];
            param_1[0x3c] = 0;
            param_1[0x3b] = iVar2;
          }
        } while (param_1[0x3b] == 0);
      }
      iVar2 = param_1[0x3b];
      if (*(int *)(iVar1 + 0x3c) < 3) break;
      uVar7 = (ushort)((uint)iVar2 >> 0x1b) & 1;
      *(ushort *)((int)param_1 + 0x12) = uVar7;
      uVar8 = (uint)(iVar2 << 6) >> (0x20U - *(int *)(iVar1 + 8) & 0x3f);
      param_1[0x10] = uVar8;
      param_1[0x11] = uVar8;
      uVar6 = (ulonglong)*(uint *)(iVar1 + 8) + 6 + (ulonglong)uVar8;
      if (uVar7 == 1) {
        *(undefined2 *)(param_1 + 4) = 1;
        if (*(int *)(iVar1 + 0xc) <= (int)uVar6) {
          return 0xffffffff80040002;
        }
      }
      else {
        *(ushort *)(param_1 + 4) =
             (short)((~(*(uint *)(iVar1 + 0xc) ^ uVar6) & 0xffffffff) >> 0x1f) +
             (ushort)(*(uint *)(iVar1 + 0xc) <= uVar6) & 1;
      }
      iVar2 = param_1[3];
      if (iVar2 == 0) {
        if (*(short *)(param_1 + 4) == 0) {
          param_1[0x3b] = 0;
        }
        else {
LAB_82a52be8:
          if ((int)uVar6 < *(int *)(iVar1 + 0xc)) goto LAB_82a52c34;
          if (iVar2 == 1) {
            param_1[0x45] = -2;
          }
          param_1[0x3b] = 0;
        }
      }
      else {
        if ((iVar2 != 1) || (uVar7 != 0)) goto LAB_82a52be8;
        param_1[0x45] = -2;
        param_1[0x3b] = 0;
        fn_82A6C8E8(param_1 + 0x38);
        param_1[0x47] = 1;
      }
    }
    *(short *)(param_1 + 4) = (short)((uint)(iVar2 << 4) >> (0x20U - iVar9 & 0x3f));
    uVar8 = (uint)(iVar2 << iVar9 + 4) >> (0x1dU - *(int *)(iVar1 + 8) & 0x3f);
    param_1[0x10] = uVar8;
    param_1[0x11] = uVar8;
LAB_82a52c34:
    if (uVar8 == 0) {
      fn_82A6CB88(param_1 + 0x38);
    }
    param_1[0x3b] = 0;
  }
  if (param_1[0x27] == 1) {
    if (*(short *)((int)param_1 + 0x9a) == 1) {
      *(longlong *)(param_1 + 0x2e) =
           ((longlong)param_1[0x54] * *(longlong *)(param_1 + 0x2a)) / 10000000;
LAB_82a52c84:
      *(undefined2 *)((int)param_1 + 0x9a) = 0;
      param_1[0x27] = 0;
    }
    else {
      if (*(short *)((int)param_1 + 0x9a) != 2) goto LAB_82a52c84;
      lVar5 = *(longlong *)(param_1 + 0x2a);
      *(undefined2 *)((int)param_1 + 0x9a) = 1;
      *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_1 + 0x2c);
      *(longlong *)(param_1 + 0x2e) = (param_1[0x54] * lVar5) / 10000000;
    }
    param_1[0x28] = 1;
  }
  if (param_1[3] == 0) {
    return 0;
  }
LAB_82a52c9c:
  param_1[8] = 1;
  if (0x18 < param_1[0x10]) {
    do {
      uVar3 = fn_82A6D200(param_1 + 0x38,0x18);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      iVar9 = param_1[0x10];
      param_1[0x10] = iVar9 + -0x18;
    } while (0x18 < iVar9 + -0x18);
  }
  uVar3 = fn_82A6D200(param_1 + 0x38,param_1[0x10]);
  if (-1 < (int)uVar3) {
    if (*(short *)(iVar1 + 0x22) != 0) {
      iVar9 = 0;
      do {
        iVar2 = iVar9 * 0x6f0;
        sVar10 = (short)iVar9 + 1;
        iVar9 = (int)sVar10;
        *(undefined2 *)(iVar2 + *(int *)(iVar1 + 0x140) + 0x70) = 0x7fff;
      } while ((int)sVar10 < (int)(uint)*(ushort *)(iVar1 + 0x22));
    }
    *(undefined4 *)(iVar1 + 0x48) = 3;
    param_1[8] = 0;
    return 0;
  }
  return uVar3;
}

