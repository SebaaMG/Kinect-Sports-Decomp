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
extern int fn_822ABA88();
extern int fn_82399CB8();
extern unsigned int iStack_54;
extern unsigned int lbl_832975B0;


void fn_823A1C50(int param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  int iStack_54;
  
  iVar17 = *(int *)(*(int *)(param_1 + 8) + 8) + 0x8d4;
  uVar7 = fn_82399CB8();
  iVar8 = (int)uVar7;
  lVar18 = 2;
  iVar15 = 0;
  lVar16 = (uVar7 & 0x7fffffff) * 2;
  iVar14 = **(int **)(*(int *)(*(int *)(param_1 + 8) + 8) + 8);
  piVar3 = *(int **)((int)((uVar7 & 0xffffffff) << 2) + iVar14);
  piVar4 = *(int **)((uint)(iVar8 == 0) * 4 + iVar14);
  uVar1 = (uint)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  iVar14 = (int)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
  uVar7 = (ulonglong)*(uint *)(*(int *)(piVar3[4] * 4 + *piVar3) + 8);
  do {
    iVar6 = (int)lVar16;
    iVar9 = iVar15 + iVar6;
    iVar15 = iVar15 + 1;
    iVar9 = iVar9 * 0xb0 + iVar17;
    *(int *)(iVar9 + 0x48) = *(int *)(iVar9 + 0x48) + 1;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  iVar9 = 0;
  iVar15 = (uint)(iVar8 == 0) * 2;
  lVar18 = 2;
  do {
    iVar13 = iVar15 + iVar9;
    iVar9 = iVar9 + 1;
    iVar13 = iVar13 * 0xb0 + iVar17;
    *(int *)(iVar13 + 0x48) = *(int *)(iVar13 + 0x48) + 1;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  iVar9 = 0;
  lVar18 = 2;
  iStack_54 = (int)(longlong)*(float *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x878);
  do {
    iVar13 = iVar9 + iVar6;
    iVar9 = iVar9 + 1;
    iVar13 = iVar13 * 0xb0 + iVar17;
    *(int *)(iVar13 + 0x7c) = *(int *)(iVar13 + 0x7c) + iStack_54;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  iVar9 = 0;
  lVar18 = 2;
  do {
    iVar13 = iVar15 + iVar9;
    iVar9 = iVar9 + 1;
    iVar13 = iVar13 * 0xb0 + iVar17;
    *(int *)(iVar13 + 0x7c) = *(int *)(iVar13 + 0x7c) + iStack_54;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  if (iVar14 == 0) {
    iVar9 = 0;
    lVar18 = 2;
    do {
      iVar13 = iVar9 + iVar6;
      iVar9 = iVar9 + 1;
      iVar13 = iVar13 * 0xb0 + iVar17;
      *(int *)(iVar13 + 0x3c) = *(int *)(iVar13 + 0x3c) + 1;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  else if (uVar1 == 0) {
    iVar9 = 0;
    lVar18 = 2;
    do {
      iVar13 = iVar15 + iVar9;
      iVar9 = iVar9 + 1;
      iVar13 = iVar13 * 0xb0 + iVar17;
      *(int *)(iVar13 + 0x3c) = *(int *)(iVar13 + 0x3c) + 1;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  iVar9 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar9 = fn_82250A18();
  }
  cVar2 = *(char *)(iVar9 + 4);
  lVar18 = 0;
  lVar19 = 2;
  do {
    lVar12 = lVar18 + lVar16;
    lVar18 = lVar18 + 1;
    iVar9 = (int)((lVar12 * 0x2c + (-(ulonglong)(cVar2 != '\0') & 0xfffffff7) + 0x1d & 0xffffffff)
                 << 2);
    *(int *)(iVar9 + iVar17) = *(int *)(iVar9 + iVar17) + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  iVar9 = 0;
  lVar16 = 2;
  do {
    iVar13 = iVar15 + iVar9;
    iVar9 = iVar9 + 1;
    iVar13 = (iVar13 * 0x2c + (-(uint)(cVar2 != '\0') & 0xfffffffe) + 0x15) * 4;
    *(int *)(iVar13 + iVar17) = *(int *)(iVar13 + iVar17) + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  uVar11 = 0;
  piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 8) + 8);
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) != 0) {
    do {
      uVar10 = 0;
      if (uVar7 != 0) {
        lVar16 = (uVar11 & 0x3fffffff) << 2;
        lVar18 = (uVar11 & 0x7fffffff) << 1;
        do {
          piVar3 = *(int **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 8) + 8) + (int)lVar16);
          iVar9 = fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3));
          lVar19 = lVar18 + uVar10;
          uVar5 = (ulonglong)(*(int *)(iVar9 + 0x214) == 0);
          if ((int)uVar11 == iVar8) {
            lVar12 = uVar5 + 8;
          }
          else {
            lVar12 = uVar5 + 6;
          }
          uVar10 = uVar10 + 1;
          iVar9 = (int)((lVar19 * 0x2c + lVar12 + 1U & 0xffffffff) << 2);
          *(int *)(iVar9 + iVar17) = *(int *)(iVar9 + iVar17) + 1;
        } while ((uVar10 & 0xffffffff) < uVar7);
      }
      uVar11 = uVar11 + 1;
      piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 8) + 8);
    } while ((int)uVar11 < piVar3[1] - *piVar3 >> 2);
  }
  iVar8 = 0;
  if (uVar7 != 0) {
    uVar11 = uVar7;
    do {
      iVar9 = (iVar6 + iVar8) * 0xb0 + iVar17;
      if ((uint)(*(int *)(iVar9 + 8) - *(int *)(iVar9 + 4)) < uVar1 - iVar14) {
        *(uint *)(iVar9 + 8) = uVar1;
        *(int *)(iVar9 + 4) = iVar14;
      }
      iVar8 = iVar8 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  iVar8 = 0;
  if (uVar7 != 0) {
    uVar11 = uVar7;
    do {
      iVar9 = (iVar15 + iVar8) * 0xb0 + iVar17;
      if ((uint)(*(int *)(iVar9 + 0x84) - *(int *)(iVar9 + 0x88)) < uVar1 - iVar14) {
        *(int *)(iVar9 + 0x88) = iVar14;
        *(uint *)(iVar9 + 0x84) = uVar1;
      }
      iVar8 = iVar8 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  iVar14 = 0;
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    iVar8 = (iVar6 + iVar14) * 0xb0 + iVar17;
    if (*(uint *)(iVar8 + 0xc) < uVar1) {
      *(uint *)(iVar8 + 0xc) = uVar1;
    }
    iVar8 = (iVar15 + iVar14) * 0xb0 + iVar17;
    if (uVar1 < *(uint *)(iVar8 + 0x80)) {
      *(uint *)(iVar8 + 0x80) = uVar1;
    }
    iVar14 = iVar14 + 1;
  }
  return;
}

