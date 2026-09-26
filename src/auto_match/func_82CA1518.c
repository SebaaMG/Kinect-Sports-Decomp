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


void fn_82CA1518(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  
  uVar11 = (ulonglong)*(uint *)(param_1 + 0xe0);
  uVar1 = *(uint *)(param_1 + 0xdc);
  iVar14 = 0;
  uVar2 = *(uint *)(param_1 + 0xec0);
  uVar3 = *(uint *)(param_1 + 0xefc);
  uVar4 = *(uint *)(param_1 + 0xec4);
  uVar5 = *(uint *)(param_1 + 0xf00);
  iVar6 = *(int *)(param_1 + 0xcc);
  iVar7 = *(int *)(param_1 + 0xd0);
  uVar8 = *(uint *)(param_1 + 0xef8);
  uVar9 = *(uint *)(param_1 + 0xec8);
  *(undefined4 *)(*(int *)(param_1 + 0xeb0) + 0x268) =
       *(undefined4 *)(*(int *)(param_1 + 0xea0) + 0x268);
  lVar12 = (longlong)(iVar7 >> 1) * (longlong)param_2;
  lVar10 = (longlong)(iVar6 >> 1) * (longlong)param_2;
  lVar13 = (ulonglong)uVar2 + (ulonglong)uVar1 + lVar10;
  lVar16 = uVar4 + uVar11 + lVar12;
  lVar15 = uVar9 + uVar11 + lVar12;
  lVar10 = (ulonglong)uVar8 + (ulonglong)uVar1 + lVar10;
  lVar17 = uVar3 + uVar11 + lVar12;
  lVar12 = uVar5 + uVar11 + lVar12;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      fn_82A1DDC0(lVar17,lVar16,*(int *)(param_1 + 0xd0) >> 1);
      uVar1 = *(uint *)(param_1 + 0xd0);
      lVar17 = (ulonglong)uVar1 + lVar17;
      lVar16 = (ulonglong)uVar1 + lVar16;
      fn_82A1DDC0(lVar12,lVar15,(int)uVar1 >> 1);
      lVar12 = (ulonglong)*(uint *)(param_1 + 0xd0) + lVar12;
      lVar15 = (ulonglong)*(uint *)(param_1 + 0xd0) + lVar15;
      fn_82A1DDC0(lVar10,lVar13,*(int *)(param_1 + 0xcc) >> 1);
      uVar1 = *(uint *)(param_1 + 0xcc);
      lVar10 = (ulonglong)uVar1 + lVar10;
      lVar13 = (ulonglong)uVar1 + lVar13;
      fn_82A1DDC0(lVar10,lVar13,(int)uVar1 >> 1);
      iVar14 = iVar14 + 1;
      lVar10 = (ulonglong)*(uint *)(param_1 + 0xcc) + lVar10;
      lVar13 = (ulonglong)*(uint *)(param_1 + 0xcc) + lVar13;
    } while (iVar14 < *(int *)(param_1 + 200));
  }
  return;
}

