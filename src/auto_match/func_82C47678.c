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
extern int fn_82A1DDC0();


void fn_82C47678(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_1 + 0xef8) + *(int *)(param_1 + 0xdc);
  iVar9 = *(int *)(param_1 + 0xec0) + *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xdc);
  iVar4 = *(int *)(param_1 + 0xe0);
  iVar7 = *(int *)(param_1 + 0xec4) + *(int *)(param_1 + 0xd0) + iVar4;
  iVar5 = *(int *)(param_1 + 0xec8) + *(int *)(param_1 + 0xd0) + iVar4;
  iVar3 = *(int *)(param_1 + 0xefc) + iVar4;
  iVar4 = *(int *)(param_1 + 0xf00) + iVar4;
  fn_82A1DDC0(iVar8,iVar9);
  iVar8 = *(int *)(param_1 + 0xcc) + iVar8;
  fn_82A1DDC0(iVar8,iVar9);
  iVar6 = 0;
  iVar8 = *(int *)(param_1 + 0xcc) + iVar8;
  uVar1 = *(uint *)(param_1 + 0xbc);
  if (0 < (longlong)((longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0)))
  {
    do {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0xb4)) {
        do {
          *(char *)(iVar2 + iVar8) =
               (char)((int)((uint)*(byte *)(*(int *)(param_1 + 0xcc) * 2 + iVar2 + iVar9) +
                            (uint)*(byte *)(iVar9 + iVar2) + 1) >> 1);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 0xb4));
      }
      iVar8 = *(int *)(param_1 + 0xcc) + iVar8;
      iVar9 = *(int *)(param_1 + 0xcc) * 2 + iVar9;
      fn_82A1DDC0(iVar8,iVar9);
      iVar6 = iVar6 + 1;
      iVar8 = *(int *)(param_1 + 0xcc) + iVar8;
      uVar1 = *(uint *)(param_1 + 0xbc);
    } while (iVar6 < (int)(((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)));
  }
  fn_82A1DDC0(iVar3,iVar7,*(undefined4 *)(param_1 + 0xd0));
  iVar3 = *(int *)(param_1 + 0xd0) + iVar3;
  fn_82A1DDC0(iVar3,iVar7);
  uVar1 = *(uint *)(param_1 + 200);
  iVar8 = 0;
  iVar3 = *(int *)(param_1 + 0xd0) + iVar3;
  if (0 < (longlong)((longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0)))
  {
    do {
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0xc0)) {
        do {
          *(char *)(iVar6 + iVar3) =
               (char)((int)((uint)*(byte *)(*(int *)(param_1 + 0xd0) * 2 + iVar6 + iVar7) +
                            (uint)*(byte *)(iVar7 + iVar6) + 1) >> 1);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 0xc0));
      }
      iVar3 = *(int *)(param_1 + 0xd0) + iVar3;
      iVar7 = *(int *)(param_1 + 0xd0) * 2 + iVar7;
      fn_82A1DDC0(iVar3,iVar7);
      uVar1 = *(uint *)(param_1 + 200);
      iVar8 = iVar8 + 1;
      iVar3 = *(int *)(param_1 + 0xd0) + iVar3;
    } while (iVar8 < (int)(((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)));
  }
  fn_82A1DDC0(iVar4,iVar5);
  iVar4 = *(int *)(param_1 + 0xd0) + iVar4;
  fn_82A1DDC0(iVar4,iVar5);
  iVar8 = 0;
  iVar4 = *(int *)(param_1 + 0xd0) + iVar4;
  uVar1 = *(uint *)(param_1 + 200);
  if (0 < (longlong)((longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0)))
  {
    do {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0xc0)) {
        do {
          *(char *)(iVar3 + iVar4) =
               (char)((int)((uint)*(byte *)(*(int *)(param_1 + 0xd0) * 2 + iVar3 + iVar5) +
                            (uint)*(byte *)(iVar5 + iVar3) + 1) >> 1);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0xc0));
      }
      iVar4 = *(int *)(param_1 + 0xd0) + iVar4;
      iVar5 = *(int *)(param_1 + 0xd0) * 2 + iVar5;
      fn_82A1DDC0(iVar4,iVar5);
      iVar8 = iVar8 + 1;
      iVar4 = *(int *)(param_1 + 0xd0) + iVar4;
      uVar1 = *(uint *)(param_1 + 200);
    } while (iVar8 < (int)(((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)));
  }
  return;
}

