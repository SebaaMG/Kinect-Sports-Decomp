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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_8200D8A8;
extern unsigned int lbl_8201DFF4;
extern unsigned int lbl_82022FD0;
extern unsigned int lbl_820288E4;
extern unsigned int lbl_82089FC0;
extern unsigned int lbl_8208DDAC;
extern unsigned int lbl_8208DDDC;
extern unsigned int lbl_8208DE14;
extern unsigned int lbl_8209A984;
extern unsigned int lbl_8209A988;
extern unsigned int lbl_8209A98C;
extern unsigned int lbl_8209A990;
extern unsigned int lbl_8209A994;
extern unsigned int lbl_8209A998;
extern unsigned int lbl_8209A99C;
extern unsigned int lbl_8209A9A0;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;


void fn_82E69A68(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  int *piVar26;
  uint *puVar27;
  float *pfVar28;
  
  iVar1 = *param_1;
  iVar16 = *(int *)(iVar1 + 0x50);
  iVar18 = *(int *)(iVar1 + 0xfc);
  uVar2 = **(uint **)(iVar1 + 0x154);
  uVar17 = (ulonglong)uVar2;
  param_1[0x3e7d] = 0;
  uVar22 = uVar17 - 1;
  fVar5 = (float)(longlong)iVar16 / (float)(longlong)iVar18;
  if (-1 < (int)uVar22) {
    lVar20 = (uVar22 & 0x3fffffff) << 2;
    uVar25 = uVar22;
    do {
      if ((float)(longlong)*(int *)((int)lVar20 + *(int *)(iVar1 + 0x158)) * fVar5 <= lbl_8209A9A0)
      {
        param_1[0x3e7d] = (int)uVar25;
        break;
      }
      uVar25 = uVar25 - 1;
      lVar20 = lVar20 + -4;
    } while (-1 < (longlong)uVar25);
  }
  param_1[0x3e7e] = 0;
  if (-1 < (int)uVar22) {
    lVar20 = (uVar22 & 0x3fffffff) << 2;
    do {
      if ((float)(longlong)*(int *)((int)lVar20 + *(int *)(iVar1 + 0x158)) * fVar5 <= lbl_8209A99C)
      {
        param_1[0x3e7e] = (int)uVar22;
        break;
      }
      uVar22 = uVar22 - 1;
      lVar20 = lVar20 + -4;
    } while (-1 < (longlong)uVar22);
  }
  if ((0 < (int)uVar2) && (piVar26 = param_1 + 0x3e60, uVar22 = uVar17, uVar2 != 0)) {
    do {
      piVar26 = piVar26 + 1;
      *piVar26 = 0x3f800000;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  fVar15 = lbl_821AAD20;
  fVar14 = lbl_82186E6C;
  fVar13 = lbl_8209A98C;
  fVar12 = lbl_82022FD0;
  fVar11 = lbl_8201DFF4;
  fVar10 = lbl_82002AE0;
  if (param_1[0x4255] != 0) {
    fVar7 = *(float *)(iVar1 + 0x30) - lbl_8208DE14;
    fVar8 = fVar7 * lbl_8200D8A8 + lbl_8209A998;
    fVar7 = fVar7 * lbl_82089FC0 + lbl_8209A994;
    if (fVar8 < lbl_8209A990) {
      fVar8 = lbl_8209A990;
    }
    if (fVar7 < fVar8 + lbl_82002AE0) {
      fVar7 = fVar8 + lbl_82002AE0;
    }
    if (0 < (int)uVar2) {
      iVar16 = 0;
      do {
        puVar27 = (uint *)(*(int *)(iVar1 + 0x158) + iVar16);
        uVar2 = *puVar27;
        uVar22 = (ulonglong)uVar2;
        uVar3 = puVar27[1];
        fVar9 = fVar15;
        if ((int)uVar2 < (int)uVar3) {
          if (7 < (int)(uVar3 - uVar2)) {
            lVar20 = uVar22 + 2;
            do {
              fVar6 = (float)(longlong)(int)uVar22 * fVar5;
              if (fVar12 < fVar6) {
                if (fVar8 < fVar6) {
                  if (fVar7 < fVar6) goto LAB_82e69ca4;
                  fVar9 = (fVar10 - ((fVar6 - fVar8) * fVar11) / (fVar7 - fVar8)) + fVar9;
                }
                else {
                  fVar9 = fVar9 + fVar10;
                }
              }
              else {
                fVar9 = fVar6 * fVar13 + fVar9;
LAB_82e69ca4:
                fVar9 = fVar9 + fVar14;
              }
              iVar18 = (int)lVar20;
              fVar6 = (float)(longlong)(iVar18 + -1) * fVar5;
              if (fVar12 < fVar6) {
                if (fVar8 < fVar6) {
                  if (fVar7 < fVar6) goto LAB_82e69cd0;
                  fVar9 = (fVar10 - ((fVar6 - fVar8) * fVar11) / (fVar7 - fVar8)) + fVar9;
                }
                else {
                  fVar9 = fVar9 + fVar10;
                }
              }
              else {
                fVar9 = fVar6 * fVar13 + fVar9;
LAB_82e69cd0:
                fVar9 = fVar9 + fVar14;
              }
              fVar6 = (float)(longlong)iVar18 * fVar5;
              if (fVar12 < fVar6) {
                if (fVar8 < fVar6) {
                  if (fVar7 < fVar6) goto LAB_82e69cf8;
                  fVar9 = (fVar10 - ((fVar6 - fVar8) * fVar11) / (fVar7 - fVar8)) + fVar9;
                }
                else {
                  fVar9 = fVar9 + fVar10;
                }
              }
              else {
                fVar9 = fVar6 * fVar13 + fVar9;
LAB_82e69cf8:
                fVar9 = fVar9 + fVar14;
              }
              fVar6 = (float)(longlong)(iVar18 + 1) * fVar5;
              if (fVar12 < fVar6) {
                if (fVar8 < fVar6) {
                  if (fVar7 < fVar6) goto LAB_82e69d24;
                  fVar9 = (fVar10 - ((fVar6 - fVar8) * fVar11) / (fVar7 - fVar8)) + fVar9;
                }
                else {
                  fVar9 = fVar9 + fVar10;
                }
              }
              else {
                fVar9 = fVar6 * fVar13 + fVar9;
LAB_82e69d24:
                fVar9 = fVar9 + fVar14;
              }
              fVar6 = (float)(longlong)(iVar18 + 2) * fVar5;
              if (fVar12 < fVar6) {
                if (fVar8 < fVar6) {
                  if (fVar7 < fVar6) goto LAB_82e69d50;
                  fVar9 = (fVar10 - ((fVar6 - fVar8) * fVar11) / (fVar7 - fVar8)) + fVar9;
                }
                else {
                  fVar9 = fVar9 + fVar10;
                }
              }
              else {
                fVar9 = fVar6 * fVar13 + fVar9;
LAB_82e69d50:
                fVar9 = fVar9 + fVar14;
              }
              fVar6 = (float)(longlong)(iVar18 + 3) * fVar5;
              if (fVar12 < fVar6) {
                if (fVar8 < fVar6) {
                  if (fVar7 < fVar6) goto LAB_82e69d7c;
                  fVar9 = (fVar10 - ((fVar6 - fVar8) * fVar11) / (fVar7 - fVar8)) + fVar9;
                }
                else {
                  fVar9 = fVar9 + fVar10;
                }
              }
              else {
                fVar9 = fVar6 * fVar13 + fVar9;
LAB_82e69d7c:
                fVar9 = fVar9 + fVar14;
              }
              fVar6 = (float)(longlong)(iVar18 + 4) * fVar5;
              if (fVar12 < fVar6) {
                if (fVar8 < fVar6) {
                  if (fVar7 < fVar6) goto LAB_82e69da8;
                  fVar9 = (fVar10 - ((fVar6 - fVar8) * fVar11) / (fVar7 - fVar8)) + fVar9;
                }
                else {
                  fVar9 = fVar9 + fVar10;
                }
              }
              else {
                fVar9 = fVar6 * fVar13 + fVar9;
LAB_82e69da8:
                fVar9 = fVar9 + fVar14;
              }
              fVar6 = (float)(longlong)(iVar18 + 5) * fVar5;
              if (fVar12 < fVar6) {
                if (fVar8 < fVar6) {
                  if (fVar7 < fVar6) goto LAB_82e69dd4;
                  fVar9 = (fVar10 - ((fVar6 - fVar8) * fVar11) / (fVar7 - fVar8)) + fVar9;
                }
                else {
                  fVar9 = fVar9 + fVar10;
                }
              }
              else {
                fVar9 = fVar6 * fVar13 + fVar9;
LAB_82e69dd4:
                fVar9 = fVar9 + fVar14;
              }
              uVar22 = uVar22 + 8;
              lVar20 = lVar20 + 8;
            } while ((int)uVar22 < (int)(uVar3 - 7));
          }
          if ((int)uVar22 < (int)uVar3) {
            lVar20 = uVar3 - uVar22;
            do {
              fVar6 = (float)(longlong)(int)uVar22 * fVar5;
              if (fVar12 < fVar6) {
                if (fVar8 < fVar6) {
                  if (fVar7 < fVar6) goto LAB_82e69e1c;
                  fVar9 = (fVar10 - ((fVar6 - fVar8) * fVar11) / (fVar7 - fVar8)) + fVar9;
                }
                else {
                  fVar9 = fVar9 + fVar10;
                }
              }
              else {
                fVar9 = fVar6 * fVar13 + fVar9;
LAB_82e69e1c:
                fVar9 = fVar9 + fVar14;
              }
              uVar22 = uVar22 + 1;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
        }
        uVar17 = uVar17 - 1;
        piVar26 = (int *)(*(int *)(iVar1 + 0x158) + iVar16);
        *(float *)((int)param_1 + iVar16 + 0xf984) =
             fVar9 / (float)(longlong)(piVar26[1] - *piVar26);
        iVar16 = iVar16 + 4;
      } while (uVar17 != 0);
    }
    fVar15 = lbl_8209A988;
    fVar14 = lbl_8209A984;
    fVar13 = lbl_8208DDDC;
    fVar12 = lbl_8208DDAC;
    fVar11 = lbl_820288E4;
    fVar5 = lbl_82002C2C;
    iVar16 = 0;
    if (0 < *(int *)(iVar1 + 0xf4)) {
      iVar18 = 0;
      iVar19 = 0;
      do {
        iVar23 = iVar19 + param_1[0x1df4];
        uVar2 = *(uint *)((int)*(int **)(iVar1 + 0x154) + iVar18);
        uVar17 = (ulonglong)uVar2;
        iVar4 = **(int **)(iVar1 + 0x154);
        if (param_1[0x4255] == 2) {
          if ((0 < (int)uVar2) && (puVar24 = (undefined4 *)(iVar23 + -4), uVar2 != 0)) {
            do {
              puVar24 = puVar24 + 1;
              *puVar24 = 0x3f800000;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
        }
        else if ((*(int *)(iVar1 + 0x50) < 0xac44) || (*(float *)(iVar1 + 0x30) <= fVar13)) {
          if (0 < (int)uVar2) {
            puVar24 = (undefined4 *)(iVar23 + -4);
            for (; uVar17 != 0; uVar17 = uVar17 - 1) {
              puVar24 = puVar24 + 1;
              *puVar24 = 0x40000000;
            }
          }
        }
        else {
          iVar21 = 0;
          if (*(float *)(iVar1 + 0x30) <= fVar12) {
            if (0 < (int)uVar2) {
              pfVar28 = (float *)(iVar23 + -4);
              fVar7 = (float)(longlong)iVar4;
              do {
                lVar20 = (longlong)iVar21;
                iVar21 = iVar21 + 1;
                pfVar28 = pfVar28 + 1;
                *pfVar28 = ((((float)lVar20 + fVar7 + fVar10) - (float)(longlong)(int)uVar2) *
                           fVar11) / fVar7 + fVar15;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
          }
          else if (0 < (int)uVar2) {
            pfVar28 = (float *)(iVar23 + -4);
            fVar7 = (float)(longlong)iVar4;
            do {
              lVar20 = (longlong)iVar21;
              iVar21 = iVar21 + 1;
              pfVar28 = pfVar28 + 1;
              *pfVar28 = ((((float)lVar20 + fVar7 + fVar10) - (float)(longlong)(int)uVar2) * fVar5)
                         / fVar7 + fVar14;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
        }
        iVar16 = iVar16 + 1;
        iVar19 = iVar19 + 0x74;
        iVar18 = iVar18 + 4;
      } while (iVar16 < *(int *)(iVar1 + 0xf4));
    }
  }
  return;
}

