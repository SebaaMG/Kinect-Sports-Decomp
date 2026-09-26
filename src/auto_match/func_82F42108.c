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


void fn_82F42108(int param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar5;
  ulonglong uVar4;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  uVar1 = *(uint *)(param_1 + 0x2d0);
  lVar13 = ((ulonglong)uVar1 & 0x3fffffff) * 4;
  uVar15 = lVar13 + 0x10;
  iVar5 = (int)param_2;
  lVar7 = ((longlong)*(int *)(param_1 + 0x564) * (longlong)iVar5 & 0xfffffffU) * 0x10;
  lVar6 = ((longlong)(int)uVar15 * (longlong)iVar5 & 0x3fffffffU) * 4;
  iVar3 = (int)((param_3 - param_2 & 0xfffffff) << 4);
  lVar10 = (ulonglong)*(uint *)(param_1 + 0x14) + lVar7;
  lVar11 = (ulonglong)*(uint *)(param_1 + 0x1a94) + lVar6;
  lVar7 = (ulonglong)*(uint *)(param_1 + 0x1e7c) + lVar7;
  lVar6 = (ulonglong)*(uint *)(param_1 + 0x1a98) + lVar6;
  if (iVar5 == 0) {
    iVar9 = iVar3 + 0x20;
  }
  else {
    lVar8 = (uVar15 & 0x1fffffff) * 8;
    lVar12 = ((ulonglong)*(uint *)(param_1 + 0x564) & 0x7ffffff) * 0x20;
    lVar11 = lVar8 + lVar11;
    lVar10 = lVar12 + lVar10;
    lVar7 = lVar12 + lVar7;
    lVar6 = lVar8 + lVar6;
    iVar9 = iVar3;
  }
  if ((param_3 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 0x2d4)) {
    iVar9 = iVar9 + 0x20;
    iVar3 = (*(int *)(param_1 + 800) - (int)((param_3 & 0xffffffff) << 4)) + iVar3;
  }
  iVar9 = iVar9 >> 1;
  lVar12 = (uVar15 & 0x7fffffff) << 1;
  uVar2 = iVar3 >> 1 & 0xfffffffe;
  (**(code **)(param_1 + 0x1bac))
            (lVar10,*(int *)(param_1 + 0x564),*(int *)(param_1 + 0x564) << 1,lVar11,lVar12,iVar9);
  iVar3 = *(int *)(param_1 + 0x31c);
  iVar14 = (int)lVar13;
  lVar13 = ((ulonglong)uVar1 & 0x1fffffff) << 3;
  (**(code **)(param_1 + 0x1bac))
            (((longlong)iVar3 * (longlong)iVar5 & 0xfffffffU) * 0x10 +
             (ulonglong)*(uint *)(param_1 + 0x1abc),iVar3,iVar3 << 1,
             ((longlong)iVar14 * (longlong)iVar5 & 0x3fffffffU) * 4 +
             (ulonglong)*(uint *)(param_1 + 0x1a90),lVar13,uVar2);
  if (*(int *)(param_1 + 0xaf0) == 2) {
    (**(code **)(param_1 + 0x1bac))
              (lVar7,*(int *)(param_1 + 0x564),*(int *)(param_1 + 0x564) << 1,lVar6,lVar12,iVar9);
  }
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x564);
  (**(code **)(param_1 + 0x1bac))
            (uVar4 + lVar10,uVar4,*(uint *)(param_1 + 0x564) << 1,lVar11 + uVar15,lVar12,iVar9);
  iVar3 = *(int *)(param_1 + 0x31c);
  (**(code **)(param_1 + 0x1bac))
            ((longlong)((int)((param_2 & 0xffffffff) << 4) + 1) * (longlong)iVar3 +
             (ulonglong)*(uint *)(param_1 + 0x1abc),iVar3,iVar3 << 1,
             (longlong)((int)((param_2 & 0xffffffff) << 2) + 1) * (longlong)iVar14 +
             (ulonglong)*(uint *)(param_1 + 0x1a90),lVar13,uVar2);
  if (*(int *)(param_1 + 0xaf0) == 2) {
    (**(code **)(param_1 + 0x1bac))
              (uVar4 + lVar7,*(int *)(param_1 + 0x564),*(int *)(param_1 + 0x564) << 1,lVar6 + uVar15
               ,lVar12,iVar9);
  }
  return;
}

