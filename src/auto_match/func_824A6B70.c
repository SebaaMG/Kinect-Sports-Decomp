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
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82292780();
extern int fn_82292AE8();
extern int fn_824A75E0();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_82536358();
extern int fn_828647D8();
extern int fn_82864898();
extern unsigned int lbl_821CC160;


void fn_824A6B70(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar8;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  ulonglong uVar9;
  undefined4 auStack_90 [4];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [80];
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (*(float *)(iVar1 + 0x20) <= lbl_821CC160) {
    return;
  }
  if ((*(float *)(iVar1 + 0x24) <= lbl_821CC160) ||
     (bVar2 = true, *(float *)(iVar1 + 0x20) <= *(float *)(iVar1 + 0x24))) {
    bVar2 = false;
  }
  if ((*(float *)(iVar1 + 0x28) <= lbl_821CC160) ||
     (bVar3 = true,
     *(float *)(*(int *)(param_1 + 0x3c) + 0x20) <= *(float *)(*(int *)(param_1 + 0x3c) + 0x28))) {
    bVar3 = false;
  }
  if (bVar2) {
    if (bVar3) {
      fn_824A75E0(param_1);
      uVar9 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x3c) + 0x38);
      if (uVar9 == 0) {
        return;
      }
      cVar8 = fn_82536358(uVar9);
      if (cVar8 != '\0') {
        (**(code **)*(undefined4 *)uVar9)(uVar9);
        fn_82536288((ulonglong)*(uint *)(param_1 + 0x3c) + 0x38);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x38) = 0;
      return;
    }
  }
  else if (bVar3) {
    fn_824A75E0(param_1);
    if (*(int *)(*(int *)(param_1 + 0x3c) + 0x38) != 0) {
      return;
    }
    lVar4 = fn_82292AE8();
    fn_82292780(auStack_80,lVar4 + 0x28);
    iVar1 = *(int *)(param_1 + 0x3c);
    uVar5 = fn_828647D8(auStack_80);
    auStack_90[0] = *(undefined4 *)(iVar1 + 0x30);
    uVar6 = fn_82535298(auStack_90,uVar5,0xffffffff83296bc0,0xffffffff83296bd0);
    puVar7 = auStack_80;
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x38) = uVar6;
    goto LAB_824a6d78;
  }
  uVar9 = (ulonglong)*(uint *)(iVar1 + 0x38);
  if (uVar9 != 0) {
    cVar8 = fn_82536358(uVar9);
    if (cVar8 != '\0') {
      (**(code **)*(undefined4 *)uVar9)(uVar9);
      fn_82536288((ulonglong)*(uint *)(param_1 + 0x3c) + 0x38);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x38) = 0;
  }
  if (!bVar2) {
    fn_824A75E0(param_1);
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x3c) + 0x34) != 0) {
    return;
  }
  lVar4 = fn_82292AE8();
  fn_82292780(auStack_50,lVar4 + 0x28);
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar5 = fn_828647D8(auStack_50);
  auStack_90[0] = *(undefined4 *)(iVar1 + 0x30);
  uVar6 = fn_82535298(auStack_90,uVar5,0xffffffff83296bc0,0xffffffff83296bd0);
  puVar7 = auStack_50;
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x34) = uVar6;
LAB_824a6d78:
  fn_82864898(puVar7);
  return;
}

