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
extern int fn_82CE5410();
extern int fn_8308B0C0();
extern int fn_83095D20();


void fn_83092850(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  undefined2 *puVar14;
  int iVar17;
  ulonglong uVar15;
  longlong lVar16;
  
  uVar1 = *(uint *)(param_1 + 0xa4);
  piVar6 = (int *)fn_82CE5410();
  iVar2 = *piVar6;
  *piVar6 = (uVar1 * 0x10 + 0x7f & 0xffffff80) + iVar2;
  piVar6 = (int *)fn_82CE5410();
  iVar3 = *piVar6;
  uVar5 = uVar1 * 4 + 0x7f & 0xffffff80;
  *piVar6 = uVar5 + iVar3;
  piVar6 = (int *)fn_82CE5410();
  iVar4 = *piVar6;
  *piVar6 = uVar5 + iVar4;
  if (0 < *(int *)(param_1 + 0xa4)) {
    iVar17 = 0;
    puVar14 = (undefined2 *)(iVar3 + -2);
    iVar10 = 0;
    do {
      iVar9 = iVar17 + iVar2;
      iVar12 = iVar17 + *(int *)(param_1 + 0xa0);
      iVar11 = iVar10 + 1;
      *(undefined4 *)(iVar17 + iVar2) = *(undefined4 *)(iVar17 + *(int *)(param_1 + 0xa0));
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar12 + 4);
      *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar12 + 8);
      *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar12 + 0xc);
      iVar12 = iVar17 + *(int *)(param_1 + 0xa0);
      iVar17 = iVar17 + 0x10;
      puVar14[1] = *(undefined2 *)(iVar12 + 8);
      puVar14 = puVar14 + 2;
      *puVar14 = (short)iVar10;
      iVar10 = iVar11;
    } while (iVar11 < *(int *)(param_1 + 0xa4));
  }
  if (1 < (int)(uVar1 - 1)) {
    fn_83095D20(iVar3 + 4,0,(ulonglong)uVar1 - 2,0);
  }
  iVar10 = *(int *)(param_1 + 0xa4);
  iVar17 = 0;
  if (0 < iVar10) {
    iVar12 = 0;
    puVar13 = (ushort *)(iVar3 + -2);
    do {
      puVar13 = puVar13 + 2;
      puVar8 = (undefined4 *)((uint)*puVar13 * 0x10 + iVar2);
      *(int *)((uint)*puVar13 * 4 + iVar4) = iVar17;
      iVar17 = iVar17 + 1;
      puVar7 = (undefined4 *)(iVar12 + *(int *)(param_1 + 0xa0));
      iVar12 = iVar12 + 0x10;
      *puVar7 = *puVar8;
      puVar7[1] = puVar8[1];
      puVar7[2] = puVar8[2];
      puVar7[3] = puVar8[3];
      iVar10 = *(int *)(param_1 + 0xa4);
    } while (iVar17 < iVar10);
  }
  iVar17 = 1;
  if (1 < iVar10) {
    iVar10 = 0x10;
    do {
      piVar6 = *(int **)(iVar10 + *(int *)(param_1 + 0xa0) + 0xc);
      if (((uint)piVar6 & 1) == 0) {
        *piVar6 = iVar17;
      }
      else {
        *(short *)(((uint)piVar6 & 0xfffffffe) + *(int *)(param_1 + 0xd8)) = (short)iVar17;
      }
      iVar17 = iVar17 + 1;
      iVar10 = iVar10 + 0x10;
    } while (iVar17 < *(int *)(param_1 + 0xa4));
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0xd0)) {
    iVar17 = 0;
    do {
      iVar12 = iVar17 + *(int *)(param_1 + 0xd8);
      uVar15 = (ulonglong)*(uint *)(iVar12 + 8);
      if (-1 < (longlong)(uVar15 - 1)) {
        lVar16 = (uVar15 - 1 & 0x7fffffff) << 1;
        do {
          puVar13 = (ushort *)((int)lVar16 + *(int *)(iVar12 + 4));
          lVar16 = lVar16 + -2;
          *puVar13 = (ushort)*(undefined4 *)((uint)*puVar13 * 4 + iVar4);
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      iVar10 = iVar10 + 1;
      iVar17 = iVar17 + 0x10;
    } while (iVar10 < *(int *)(param_1 + 0xd0));
  }
  piVar6 = (int *)(param_1 + 0xb0);
  lVar16 = 3;
  do {
    iVar10 = 0;
    if (0 < *piVar6) {
      puVar14 = (undefined2 *)(piVar6[-1] + -2);
      do {
        puVar13 = puVar14 + 2;
        iVar10 = iVar10 + 1;
        puVar14 = puVar14 + 2;
        *puVar14 = (short)*(undefined4 *)((uint)*puVar13 * 4 + iVar4);
      } while (iVar10 < *piVar6);
    }
    piVar6 = piVar6 + 3;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar16 = 1;
  if (1 < *(int *)(param_1 + 0xa4)) {
    do {
      fn_8308B0C0(param_1);
      lVar16 = lVar16 + 1;
    } while ((int)lVar16 < *(int *)(param_1 + 0xa4));
  }
  piVar6 = (int *)fn_82CE5410();
  *piVar6 = iVar4;
  piVar6 = (int *)fn_82CE5410();
  *piVar6 = iVar3;
  piVar6 = (int *)fn_82CE5410();
  *piVar6 = iVar2;
  return;
}

