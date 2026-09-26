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


undefined8 fn_82966FE0(int param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar8;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  iVar10 = (int)param_2 * 4;
  iVar5 = *(int *)(*(int *)(param_1 + 0x18) + iVar10);
  uVar1 = *(uint *)(iVar5 + 0x2c);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar4 = param_2;
  iVar8 = iVar10;
  if ((int)param_2 != 0) {
    do {
      if (*(uint *)(*(int *)(iVar8 + *(int *)(param_1 + 0x18) + -4) + 0x2c) <= uVar1) break;
      uVar4 = uVar4 - 1;
      iVar8 = iVar8 + -4;
    } while (uVar4 != 0);
  }
  uVar11 = (param_2 - uVar4 & 0xffffffff) >> 1;
  if (uVar11 != 0) {
    lVar6 = (uVar4 & 0x3fffffff) << 2;
    iVar8 = iVar10;
    do {
      iVar2 = *(int *)(param_1 + 0x18);
      uVar3 = *(undefined4 *)((int)lVar6 + iVar2);
      *(undefined4 *)((int)lVar6 + iVar2) = *(undefined4 *)(iVar8 + iVar2 + -4);
      lVar6 = lVar6 + 4;
      iVar2 = iVar8 + *(int *)(param_1 + 0x18);
      iVar8 = iVar8 + -4;
      *(undefined4 *)(iVar2 + -4) = uVar3;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar4;
  if ((uVar4 & 0xffffffff) != 0) {
    lVar6 = (uVar4 & 0x3fffffff) << 2;
    uVar1 = *(uint *)(iVar5 + 0x2c);
    if (*(uint *)(*(int *)((int)lVar6 + *(int *)(param_1 + 0x18) + -4) + 0x2c) < uVar1) {
      uVar11 = uVar4 - 1;
      goto LAB_82967114;
    }
    do {
      if (uVar1 != *(uint *)(*(int *)((int)lVar6 + *(int *)(param_1 + 0x18) + -4) + 0x2c)) break;
      uVar11 = uVar11 - 1;
      lVar6 = lVar6 + -4;
    } while (uVar11 != 0);
  }
  uVar12 = (uVar4 - uVar11 & 0xffffffff) >> 1;
  if (uVar12 != 0) {
    lVar7 = (uVar11 & 0x3fffffff) << 2;
    lVar6 = (uVar4 & 0x3fffffff) << 2;
    do {
      iVar5 = *(int *)(param_1 + 0x18);
      iVar8 = (int)lVar6;
      uVar3 = *(undefined4 *)((int)lVar7 + iVar5);
      *(undefined4 *)((int)lVar7 + iVar5) = *(undefined4 *)(iVar8 + iVar5 + -4);
      lVar7 = lVar7 + 4;
      lVar6 = lVar6 + -4;
      *(undefined4 *)(iVar8 + *(int *)(param_1 + 0x18) + -4) = uVar3;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
LAB_82967114:
  if ((uVar11 & 0xffffffff) == (uVar4 & 0xffffffff)) {
    return 0;
  }
  uVar4 = (param_2 - uVar11 & 0xffffffff) >> 1;
  if (uVar4 != 0) {
    lVar6 = (uVar11 & 0x3fffffff) << 2;
    iVar5 = iVar10;
    do {
      iVar8 = *(int *)(param_1 + 0x18);
      uVar3 = *(undefined4 *)((int)lVar6 + iVar8);
      *(undefined4 *)((int)lVar6 + iVar8) = *(undefined4 *)(iVar5 + iVar8 + -4);
      lVar6 = lVar6 + 4;
      iVar8 = iVar5 + *(int *)(param_1 + 0x18);
      iVar5 = iVar5 + -4;
      *(undefined4 *)(iVar8 + -4) = uVar3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar9 = (undefined4 *)(iVar10 + *(int *)(param_1 + 0x18));
  uVar3 = puVar9[-1];
  puVar9[-1] = *puVar9;
  *(undefined4 *)(iVar10 + *(int *)(param_1 + 0x18)) = uVar3;
  return 1;
}

