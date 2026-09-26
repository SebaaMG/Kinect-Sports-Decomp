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
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE6310();


int fn_82E08818(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 *puVar14;
  int *piVar15;
  longlong lVar13;
  
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  if (*(int *)(param_2 + 8) != 0) {
    fn_82CE4040();
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_82CE4118();
  }
  puVar8 = (uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  iVar4 = fn_82CE5410();
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar9 = (ulonglong)uVar2;
  uVar10 = (ulonglong)uVar1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar10 = uVar9;
  }
  if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) < (int)uVar2) {
    uVar11 = ((ulonglong)*(uint *)(param_1 + 0x14) & 0x3fffffff) << 1;
    if ((int)uVar11 <= (int)uVar2) {
      uVar11 = uVar9;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),puVar8,uVar11,4);
  }
  lVar5 = uVar1 - uVar9;
  if (0 < lVar5) {
    puVar14 = (undefined4 *)(uVar2 * 4 + *puVar8 + -4);
    do {
      if (puVar14[1] != 0) {
        fn_82CE4118();
      }
      lVar5 = lVar5 + -1;
      puVar14 = puVar14 + 1;
      *puVar14 = 0;
    } while (lVar5 != 0);
  }
  piVar15 = (int *)*puVar8;
  if (0 < (int)uVar10) {
    iVar4 = *(int *)(param_2 + 0xc) - (int)piVar15;
    uVar11 = uVar10;
    do {
      if (*(int *)(iVar4 + (int)piVar15) != 0) {
        fn_82CE4040();
      }
      if (*piVar15 != 0) {
        fn_82CE4118();
      }
      uVar11 = uVar11 - 1;
      *piVar15 = *(int *)(iVar4 + (int)piVar15);
      piVar15 = piVar15 + 1;
    } while (uVar11 != 0);
  }
  lVar6 = (uVar10 & 0x3fffffff) * 4;
  lVar5 = uVar9 - uVar10;
  lVar13 = (ulonglong)*(uint *)(param_2 + 0xc) + lVar6;
  if (0 < lVar5) {
    lVar6 = ((ulonglong)*puVar8 + lVar6) - lVar13;
    do {
      lVar12 = lVar6 + lVar13;
      if (lVar12 != 0) {
        if (*(int *)lVar13 != 0) {
          fn_82CE4040();
        }
        *(int *)lVar12 = *(int *)lVar13;
      }
      lVar5 = lVar5 + -1;
      lVar13 = lVar13 + 4;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x10) = uVar2;
  if (*(int *)(param_2 + 0x18) != 0) {
    fn_82CE4040();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    fn_82CE4118();
  }
  puVar8 = (uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  iVar4 = fn_82CE5410();
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_2 + 0x20);
  uVar9 = (ulonglong)uVar2;
  uVar10 = (ulonglong)uVar1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar10 = uVar9;
  }
  if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < (int)uVar2) {
    uVar11 = ((ulonglong)*(uint *)(param_1 + 0x24) & 0x3fffffff) << 1;
    if ((int)uVar11 <= (int)uVar2) {
      uVar11 = uVar9;
    }
    fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),puVar8,uVar11,4);
  }
  lVar5 = uVar1 - uVar9;
  if (0 < lVar5) {
    puVar14 = (undefined4 *)(uVar2 * 4 + *puVar8 + -4);
    do {
      if (puVar14[1] != 0) {
        fn_82CE4118();
      }
      lVar5 = lVar5 + -1;
      puVar14 = puVar14 + 1;
      *puVar14 = 0;
    } while (lVar5 != 0);
  }
  piVar15 = (int *)*puVar8;
  if (0 < (int)uVar10) {
    iVar4 = *(int *)(param_2 + 0x1c) - (int)piVar15;
    uVar11 = uVar10;
    do {
      piVar7 = (int *)(iVar4 + (int)piVar15);
      if (piVar15 != piVar7) {
        iVar3 = *piVar7;
        if (iVar3 != 0) {
          fn_82CE4040(iVar3);
        }
        if (*piVar15 != 0) {
          fn_82CE4118();
        }
        *piVar15 = iVar3;
      }
      uVar11 = uVar11 - 1;
      piVar15 = piVar15 + 1;
    } while (uVar11 != 0);
  }
  lVar6 = (uVar10 & 0x3fffffff) * 4;
  lVar5 = uVar9 - uVar10;
  lVar13 = lVar6 + (ulonglong)*(uint *)(param_2 + 0x1c);
  if (0 < lVar5) {
    lVar6 = (lVar6 + (ulonglong)*puVar8) - lVar13;
    do {
      lVar12 = lVar6 + lVar13;
      if (lVar12 != 0) {
        if (*(int *)lVar13 != 0) {
          fn_82CE4040();
        }
        *(int *)lVar12 = *(int *)lVar13;
      }
      lVar5 = lVar5 + -1;
      lVar13 = lVar13 + 4;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  return param_1;
}

