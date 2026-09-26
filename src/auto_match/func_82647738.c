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
extern int fn_82645110();
extern U64 storeDoubleWordConditionalIndexed();


void fn_82647738(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x2a9c) == 0) {
    fn_82645110();
  }
  lVar7 = param_1 + 0x5ea0;
  uVar11 = *(ulonglong *)(iVar1 + 0x5ea0);
  while (puVar8 = (ulonglong *)lVar7, (uVar11 & 0x8000000000000000) != 0) {
    lVar13 = 4;
    do {
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    uVar11 = *puVar8;
  }
  do {
    uVar12 = *puVar8;
    uVar9 = (uVar12 >> 0x1f) << 0x20 | (uVar12 & 0xffffffff) + 1 & 0xffffffff | 0x100000000;
    uVar11 = uVar12;
    if (uVar9 == uVar12) break;
    uVar4 = *puVar8;
    if (uVar4 == uVar12) {
      uVar11 = storeDoubleWordConditionalIndexed(uVar9,0,lVar7);
      *puVar8 = uVar11;
    }
    else {
      uVar11 = storeDoubleWordConditionalIndexed(uVar4,0,lVar7);
      *puVar8 = uVar11;
    }
    uVar11 = uVar9;
  } while (uVar12 != uVar4);
  uVar6 = (uint)uVar11;
  uVar10 = *(int *)(iVar1 + 0x5e90) + 0x220;
  uVar3 = *(uint *)(iVar1 + 0x30);
  puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x5e98) + (uVar6 & 0x1f) * 0x10);
  uVar10 = ((uVar10 >> 0x14) + 0x200 & 0x1000) + (uVar10 & 0x1fffffff);
  if (*(uint *)(iVar1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar3 + 4) = 0x57a;
  *(uint *)(uVar3 + 8) = uVar6 & 0x1f | 0x8000000;
  if ((uVar11 & 0x80000000) == 0) {
    uVar5 = uVar6 & 0x7fffffff;
    uVar6 = (uint)((~(uVar11 & 0xffffffff) & 0xffffffff) << 1) & 0x80000000;
  }
  else {
    uVar5 = (uint)((~(uVar11 & 0xffffffff) & 0xffffffff) << 1) & 0x80000000;
    uVar6 = uVar6 & 0x7fffffff;
  }
  *(undefined4 *)(uVar3 + 0xc) = 0xc0043c00;
  *(undefined4 *)(uVar3 + 0x10) = 0x15;
  *(uint *)(uVar3 + 0x14) = uVar10 | 2;
  *(uint *)(uVar3 + 0x18) = uVar5;
  *(undefined4 *)(uVar3 + 0x1c) = 0xffffffff;
  *(undefined4 *)(uVar3 + 0x20) = 0x100;
  *(undefined4 *)(uVar3 + 0x24) = 0xc0043c00;
  *(undefined4 *)(uVar3 + 0x28) = 0x15;
  *(uint *)(uVar3 + 0x2c) = uVar10 + 4 | 2;
  *(uint *)(uVar3 + 0x30) = uVar6;
  *(undefined4 *)(uVar3 + 0x34) = 0xffffffff;
  *(undefined4 *)(uVar3 + 0x38) = 0x100;
  *(undefined4 *)(uVar3 + 0x3c) = 0x57a;
  *(undefined4 *)(uVar3 + 0x40) = 0;
  *(undefined4 **)(iVar1 + 0x30) = (undefined4 *)(uVar3 + 0x40);
  *(ulonglong *)(puVar2 + 2) = (uVar11 << 0x20) + (ulonglong)*(uint *)(iVar1 + 0x2a9c);
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}

