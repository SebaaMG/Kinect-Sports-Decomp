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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;


longlong fn_82D3E760(int param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_r0;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  lVar4 = param_2;
  iVar5 = *(uint *)(param_1 + 0x4c) - 1;
  if (2 < iVar5) {
    uVar3 = *(uint *)(param_1 + 0x4c) >> 2;
    uVar8 = (ulonglong)uVar3;
    iVar5 = iVar5 + uVar3 * -4;
    do {
      iVar6 = (int)param_2;
      puVar1 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (undefined4 *)(in_r0 + iVar6 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      param_2 = param_2 + 0x40;
      puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (undefined4 *)(in_r0 + iVar6 + 0x10 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (undefined4 *)(in_r0 + iVar6 + 0x20 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (undefined4 *)(in_r0 + iVar6 + 0x30 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  iVar7 = (int)param_2;
  iVar6 = iVar7;
  if (-1 < iVar5) {
    iVar6 = iVar7 + 0x10;
    puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
  }
  iVar7 = iVar6;
  if (0 < iVar5) {
    iVar7 = iVar6 + 0x10;
    puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + iVar6 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
  }
  if (1 < iVar5) {
    puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
  }
  return lVar4;
}

