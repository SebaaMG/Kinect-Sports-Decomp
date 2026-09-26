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
extern int fn_82250A18();
extern int fn_82372F88();
extern unsigned int iStack_44;
extern unsigned int lbl_832975B0;


void fn_82371F70(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iStack_44;
  
  iVar6 = fn_82372F88();
  bVar5 = iVar6 == 0;
  iVar13 = iVar6 * 4;
  piVar2 = *(int **)(iVar13 + **(int **)(param_1 + 8));
  piVar3 = *(int **)((uint)bVar5 * 4 + **(int **)(param_1 + 8));
  iVar11 = (int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20);
  iVar1 = (int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  iVar7 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar7 = fn_82250A18();
  }
  iVar8 = param_1 + 0xa14;
  iVar12 = 0;
  iVar6 = iVar6 * 2;
  lVar14 = 2;
  if (*(char *)(iVar7 + 4) == '\0') {
    do {
      iVar7 = iVar6 + iVar12;
      iVar12 = iVar12 + 1;
      iVar7 = iVar7 * 0x88 + iVar8;
      *(int *)(iVar7 + 0x44) = *(int *)(iVar7 + 0x44) + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    iVar7 = 0;
    lVar14 = 2;
    do {
      iVar12 = (uint)bVar5 * 2 + iVar7;
      iVar7 = iVar7 + 1;
      iVar12 = iVar12 * 0x88 + iVar8;
      *(int *)(iVar12 + 0x40) = *(int *)(iVar12 + 0x40) + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  else {
    do {
      iVar7 = iVar6 + iVar12;
      iVar12 = iVar12 + 1;
      iVar7 = iVar7 * 0x88 + iVar8;
      *(int *)(iVar7 + 0x3c) = *(int *)(iVar7 + 0x3c) + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    iVar7 = 0;
    lVar14 = 2;
    do {
      iVar12 = (uint)bVar5 * 2 + iVar7;
      iVar7 = iVar7 + 1;
      iVar12 = iVar12 * 0x88 + iVar8;
      *(int *)(iVar12 + 0x38) = *(int *)(iVar12 + 0x38) + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if (iVar1 == 0) {
    iVar7 = 0;
    lVar14 = 2;
    do {
      iVar12 = iVar6 + iVar7;
      iVar7 = iVar7 + 1;
      iVar12 = iVar12 * 0x88 + iVar8;
      *(int *)(iVar12 + 0x2c) = *(int *)(iVar12 + 0x2c) + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  uVar9 = 0;
  piVar2 = *(int **)(**(int **)(param_1 + 8) + iVar13);
  if (*(int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8) != 0) {
    do {
      iVar4 = (iVar6 + uVar9) * 0x88 + param_1;
      iVar10 = ((uint)bVar5 * 2 + uVar9) * 0x88 + param_1;
      iVar7 = *(int *)(iVar10 + 0xa28);
      iVar12 = *(int *)(iVar10 + 0xa24);
      if ((uint)(*(int *)(iVar4 + 0xa20) - *(int *)(iVar4 + 0xa1c)) < (uint)(iVar11 - iVar1)) {
        *(int *)(iVar4 + 0xa20) = iVar11;
        *(int *)(iVar4 + 0xa1c) = iVar1;
      }
      if ((uint)(iVar12 - iVar7) < (uint)(iVar11 - iVar1)) {
        *(int *)(iVar10 + 0xa24) = iVar11;
        *(int *)(iVar10 + 0xa28) = iVar1;
      }
      uVar9 = uVar9 + 1;
      piVar2 = *(int **)(**(int **)(param_1 + 8) + iVar13);
    } while (uVar9 < *(uint *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8));
  }
  iStack_44 = (int)(longlong)*(float *)(param_1 + 0x208);
  iVar11 = 0;
  lVar14 = 2;
  do {
    iVar1 = iVar6 + iVar11;
    iVar11 = iVar11 + 1;
    iVar1 = iVar1 * 0x88 + iVar8;
    *(int *)(iVar1 + 100) = iStack_44 + *(int *)(iVar1 + 100);
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  iVar11 = 0;
  lVar14 = 2;
  do {
    iVar1 = (uint)bVar5 * 2 + iVar11;
    iVar11 = iVar11 + 1;
    iVar1 = iVar1 * 0x88 + iVar8;
    *(int *)(iVar1 + 100) = *(int *)(iVar1 + 100) + iStack_44;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  return;
}

