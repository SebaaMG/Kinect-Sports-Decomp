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
extern int fn_829DCEC0();
extern unsigned int lbl_82057560;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83217B68;
extern unsigned int lbl_83217B6C;
extern unsigned int lbl_83217B70;


void fn_829DCFB0(ulonglong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  double dVar20;
  
  uVar5 = lbl_821AAD20;
  iVar6 = (int)param_1;
  if (0 < iVar6) {
    iVar14 = 0;
    uVar19 = param_1;
    do {
      *(undefined4 *)(*(int *)(iVar14 + lbl_83217B68) + iVar14) = uVar5;
      iVar14 = iVar14 + 4;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  if (0 < iVar6) {
    iVar17 = 4;
    iVar14 = lbl_83217B68 + -4;
    lVar18 = 0;
    do {
      lVar15 = lVar18 + 1;
      if ((int)lVar15 < iVar6) {
        iVar10 = *(int *)(iVar14 + iVar17);
        lVar16 = lVar15;
        iVar7 = iVar17;
        do {
          dVar20 = (double)fn_829DCEC0(param_3,lVar18,lVar16);
          lVar16 = lVar16 + 1;
          *(float *)(*(int *)(iVar7 + lbl_83217B68) + iVar17 + -4) = (float)dVar20;
          *(float *)(iVar10 + iVar7) = (float)dVar20;
          iVar7 = iVar7 + 4;
        } while ((int)lVar16 < iVar6);
      }
      iVar17 = iVar17 + 4;
      lVar18 = lVar15;
    } while ((int)lVar15 < iVar6);
  }
  iVar14 = 0;
  if (0 < iVar6) {
    iVar17 = 0;
    uVar19 = param_1;
    do {
      *(int *)(iVar17 + lbl_83217B70) = iVar14;
      iVar17 = iVar17 + 4;
      *(undefined1 *)(lbl_83217B6C + iVar14) = 0;
      iVar14 = iVar14 + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  fVar4 = lbl_82057560;
  param_2 = param_1 - param_2;
  if (0 < param_2) {
    lVar18 = (param_1 & 0x3fffffff) << 2;
    uVar19 = param_1;
    do {
      iVar14 = 0;
      iVar17 = 0;
      iVar10 = (int)uVar19;
      if (0 < iVar10) {
        iVar11 = 4;
        fVar3 = fVar4;
        iVar7 = 0;
        do {
          iVar8 = iVar7 + 1;
          if (iVar8 < iVar10) {
            iVar12 = iVar8;
            iVar9 = iVar11;
            do {
              fVar1 = *(float *)(*(int *)(iVar11 + lbl_83217B68 + -4) + iVar9);
              if (fVar1 < fVar3) {
                fVar3 = fVar1;
                iVar17 = iVar12;
                iVar14 = iVar7;
              }
              iVar12 = iVar12 + 1;
              iVar9 = iVar9 + 4;
            } while (iVar12 < iVar10);
          }
          iVar11 = iVar11 + 4;
          iVar7 = iVar8;
        } while (iVar8 < iVar10);
      }
      iVar7 = 0;
      if (iVar10 < 1) {
LAB_829dd1b4:
        iVar14 = iVar17;
      }
      else {
        iVar11 = 0;
        fVar3 = fVar4;
        fVar1 = fVar4;
        do {
          if ((iVar7 != iVar14) && (iVar7 != iVar17)) {
            fVar2 = *(float *)(*(int *)(iVar14 * 4 + lbl_83217B68) + iVar11);
            if (fVar2 < fVar1) {
              fVar1 = fVar2;
            }
            fVar2 = *(float *)(*(int *)(iVar17 * 4 + lbl_83217B68) + iVar11);
            if (fVar2 < fVar3) {
              fVar3 = fVar2;
            }
          }
          iVar7 = iVar7 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar7 < iVar10);
        if (fVar3 <= fVar1) goto LAB_829dd1b4;
      }
      iVar14 = iVar14 * 4;
      uVar19 = uVar19 - 1;
      iVar10 = 0;
      *(undefined1 *)(*(int *)(iVar14 + lbl_83217B70) + lbl_83217B6C) = 1;
      iVar17 = (int)lVar18;
      *(undefined4 *)(iVar14 + lbl_83217B70) = *(undefined4 *)(iVar17 + lbl_83217B70 + -4);
      if (0 < (longlong)uVar19) {
        iVar7 = 0;
        do {
          iVar10 = iVar10 + 1;
          iVar11 = *(int *)(iVar7 + lbl_83217B68);
          *(undefined4 *)(*(int *)(iVar14 + lbl_83217B68) + iVar7) =
               *(undefined4 *)(*(int *)(iVar17 + lbl_83217B68 + -4) + iVar7);
          iVar7 = iVar7 + 4;
          *(undefined4 *)(iVar11 + iVar14) = *(undefined4 *)(iVar17 + iVar11 + -4);
        } while (iVar10 < (int)uVar19);
      }
      lVar18 = lVar18 + -4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  iVar14 = 0;
  if (0 < iVar6) {
    piVar13 = (int *)(param_4 + -4);
    do {
      if (*(char *)(lbl_83217B6C + iVar14) == '\0') {
        piVar13 = piVar13 + 1;
        *piVar13 = iVar14;
      }
      iVar14 = iVar14 + 1;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return;
}

