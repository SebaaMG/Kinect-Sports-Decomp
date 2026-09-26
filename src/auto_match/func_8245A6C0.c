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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_8225C590();
extern int fn_8225D9B8();
extern int fn_8225F160();
extern int fn_823AB478();
extern int fn_8245B458();
extern int fn_8245B630();
extern int fn_828B8F40();
extern int fn_82A1D7A8();
extern int fn_82A1DD38();
extern int fn_82A1E228();
extern int fn_82A1E230();
extern int fn_82CE0668();
extern int fn_82F68CC0();
extern unsigned int lbl_83265988;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


undefined8
fn_8245A6C0(int param_1,undefined4 param_2,ulonglong param_3,uint param_4,uint param_5,
             uint param_6,uint param_7,uint param_8)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined2 uVar6;
  int iVar5;
  short sVar8;
  uint uVar7;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ushort in_stack_00000056;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 9;
  }
  if (param_5 == 1) {
    param_4 = 6;
  }
  if (param_5 == 0) {
    iVar5 = fn_8225F160();
    iVar5 = *(int *)(iVar5 + 8);
    if ((iVar5 == 1) || (iVar5 == 2)) {
      uVar10 = 5;
    }
    else {
      uVar10 = -(uint)(iVar5 == 0) & 4;
    }
  }
  else if (param_5 == 1) {
    uVar10 = 1;
  }
  else if (param_5 < 3) {
    uVar10 = 2;
  }
  else {
    uVar10 = 3;
  }
  uVar1 = fn_823AB478(lbl_83265988);
  piVar9 = (int *)(param_1 + 0x80068);
  uVar1 = -(((uVar1 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar1 < 4)) & uVar1;
  if (*piVar9 != 0) {
    return 10;
  }
  iVar5 = param_1 + 0x8008c;
  RtlEnterCriticalSection(iVar5);
  if (*piVar9 != 0) {
    if (iVar5 == 0) {
      return 10;
    }
    RtlLeaveCriticalSection(iVar5);
    return 10;
  }
  *piVar9 = 1;
  if (iVar5 != 0) {
    RtlLeaveCriticalSection(iVar5);
  }
  fn_82CE0668(auStack_b0,0x10);
  fn_82A1E228(auStack_c0);
  *(undefined4 *)(param_1 + 0x80088) = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < 4)) {
    uVar2 = fn_8225C590();
    iVar3 = fn_8225D9B8(uVar2,uVar1);
    if (iVar3 != 0) {
      puVar4 = (undefined8 *)fn_828B8F40();
      uVar2 = *puVar4;
      goto LAB_8245a83c;
    }
  }
  uVar2 = 0;
LAB_8245a83c:
  uVar7 = *(uint *)(param_1 + 0x80074);
  uVar12 = (ulonglong)uVar7;
  *(undefined8 *)(param_1 + 0x800c0) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 3;
  uVar11 = (uint)param_3;
  *(uint *)(param_1 + 0x8006c) = uVar11;
  *(undefined4 *)(param_1 + 0x80070) = param_2;
  sVar8 = (short)((param_3 & 0xffffffff) / uVar12);
  if (param_3 != (longlong)(int)((param_3 & 0xffffffff) / uVar12) * (longlong)(int)uVar7) {
    sVar8 = sVar8 + 1;
  }
  *(short *)(param_1 + 0x26) = sVar8;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined2 *)(param_1 + 0x24) = 0;
  if ((param_3 & 0xffffffff) <= (ulonglong)uVar7) {
    uVar7 = uVar11;
  }
  *(uint *)(param_1 + 0x20) = uVar7;
  fn_82F68CC0(param_1 + 0x10,auStack_b0,0x10);
  fn_82F68CC0(param_1 + 0x28,param_1 + 0x800ac,0x10);
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar3 + 0x5c0);
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(iVar3 + 0x690);
  *(uint *)(param_1 + 0x3e) = uVar11;
  *(undefined8 *)(param_1 + 0x42) = auStack_c0[0];
  RtlEnterCriticalSection(iVar3 + 0x1c);
  uStack_9c = *(undefined4 *)(iVar3 + 0x6bc);
  uStack_98 = *(undefined4 *)(iVar3 + 0x6c0);
  uStack_94 = *(undefined4 *)(iVar3 + 0x6c4);
  if (iVar3 != -0x1c) {
    RtlLeaveCriticalSection(iVar3 + 0x1c);
  }
  fn_82F68CC0(param_1 + 0x4a,auStack_a0,0x10);
  *(uint *)(param_1 + 0x5a) = (uint)in_stack_00000056 << 0x10 | param_8 & 0xffff;
  *(uint *)(param_1 + 0x5e) =
       (((param_7 & 0xff) << 8 | param_4 & 0xff) << 8 | uVar10) << 8 | param_6 & 0xff;
  uVar6 = fn_82A1E230();
  *(undefined2 *)(param_1 + 0x62) = uVar6;
  uVar6 = fn_82A1D7A8();
  *(undefined2 *)(param_1 + 100) = uVar6;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(byte *)(param_1 + 0x3c) = (byte)((uVar1 & 0xffffffff) << 4) | 0x40;
  fn_82A1DD38(param_1 + 0x66,*(undefined4 *)(param_1 + 0x80070),
                    *(undefined4 *)(param_1 + 0x20));
  uVar10 = *(uint *)(param_1 + 0x20);
  uVar7 = *(uint *)(param_1 + 0x80074);
  uVar2 = fn_8245B458();
  iVar3 = fn_8245B630(uVar2,param_1 + 0xc,(uVar10 - uVar12) + (ulonglong)uVar7 + 0x5a,param_1);
  if (iVar3 == 0) {
    RtlEnterCriticalSection(iVar5);
    *piVar9 = 0;
    if (iVar5 != 0) {
      RtlLeaveCriticalSection(iVar5);
    }
    iVar5 = fn_8245B458();
    if (*(int *)(iVar5 + 0x588) != 0) {
      iVar5 = fn_8245B458();
      if (*(int *)(iVar5 + 0x6a4) == 3) {
        return 10;
      }
      return 2;
    }
    return 1;
  }
  return 0xb;
}

