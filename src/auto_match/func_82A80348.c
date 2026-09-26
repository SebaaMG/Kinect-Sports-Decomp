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
extern int fn_82A6E650();
extern int fn_82F691F0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8208DD70;


void fn_82A80348(undefined8 param_1,uint *param_2,longlong param_3)

{
  float fVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar21;
  ulonglong uVar20;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  
  iVar9 = fn_82F6A548();
  dVar27 = (double)fn_82A6E650(*(undefined4 *)(iVar9 + 0x128));
  uVar24 = 0;
  uVar22 = (ulonglong)*param_2;
  uVar25 = 0;
  uVar3 = param_2[0x24];
  uVar23 = (ulonglong)uVar3;
  uVar26 = 0;
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  dVar29 = (double)(lbl_82002AE0 / (float)param_2[0x27]);
  dVar27 = (double)(float)(dVar29 * dVar27);
  if (*(int *)(iVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar23,0,*(int *)(iVar9 + 0x108) << 2);
  }
  uVar6 = *(uint *)(iVar9 + 0x108);
  dVar30 = (double)lbl_8208DD70;
  dVar31 = (double)(float)((double)*(float *)(iVar9 + 0x124) * dVar30);
  iVar7 = (int)param_3;
  if (3 < (int)uVar6) {
    piVar21 = (int *)(iVar9 + 0x21c);
    lVar16 = uVar23 - 4;
    do {
      uVar26 = uVar26 + 4;
      iVar11 = *piVar21;
      iVar10 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
      *(int *)(iVar9 + 0x220) = iVar10;
      iVar15 = (iVar10 >> 4) + (iVar10 >> 2);
      *piVar21 = iVar15;
      iVar10 = (int)lVar16;
      *(float *)(iVar10 + 4) =
           (float)((double)((float)((double)(longlong)(iVar15 - iVar11) * dVar31) *
                           *(float *)(*(int *)(iVar9 + 0x108) * 4 + iVar7)) * dVar27);
      iVar11 = *piVar21;
      iVar15 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
      *(int *)(iVar9 + 0x220) = iVar15;
      iVar15 = (iVar15 >> 4) + (iVar15 >> 2);
      *piVar21 = iVar15;
      *(float *)(iVar10 + 8) =
           (float)((double)((float)((double)(longlong)(iVar15 - iVar11) * dVar31) *
                           *(float *)(*(int *)(iVar9 + 0x108) * 4 + iVar7)) * dVar27);
      iVar11 = *piVar21;
      iVar15 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
      *(int *)(iVar9 + 0x220) = iVar15;
      iVar15 = (iVar15 >> 4) + (iVar15 >> 2);
      *piVar21 = iVar15;
      *(float *)(iVar10 + 0xc) =
           (float)((double)((float)((double)(longlong)(iVar15 - iVar11) * dVar31) *
                           *(float *)(*(int *)(iVar9 + 0x108) * 4 + iVar7)) * dVar27);
      iVar11 = *piVar21;
      iVar10 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
      *(int *)(iVar9 + 0x220) = iVar10;
      iVar10 = (iVar10 >> 4) + (iVar10 >> 2);
      *piVar21 = iVar10;
      lVar16 = lVar16 + 0x10;
      *(float *)lVar16 =
           (float)((double)((float)((double)(longlong)(iVar10 - iVar11) * dVar31) *
                           *(float *)(*(int *)(iVar9 + 0x108) * 4 + iVar7)) * dVar27);
    } while ((int)uVar26 < (int)(uVar6 - 3));
  }
  if ((int)uVar26 < (int)uVar6) {
    lVar17 = uVar6 - uVar26;
    lVar16 = (uVar26 & 0x3fffffff) * 4 + uVar23 + -4;
    uVar26 = lVar17 + uVar26;
    do {
      iVar11 = *(int *)(iVar9 + 0x21c);
      iVar10 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
      *(int *)(iVar9 + 0x220) = iVar10;
      iVar10 = (iVar10 >> 4) + (iVar10 >> 2);
      *(int *)(iVar9 + 0x21c) = iVar10;
      lVar16 = lVar16 + 4;
      *(float *)lVar16 =
           (float)((double)((float)((double)(longlong)(iVar10 - iVar11) * dVar31) *
                           *(float *)(*(int *)(iVar9 + 0x108) * 4 + iVar7)) * dVar27);
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  uVar6 = *(uint *)(iVar9 + 0x194);
  if ((int)uVar26 < (int)uVar6) {
    if (3 < (int)(uVar6 - (int)uVar26)) {
      lVar17 = (uVar26 & 0x3fffffff) * 4 + param_3 + -4;
      piVar21 = (int *)(iVar9 + 0x21c);
      iVar11 = 0;
      lVar12 = uVar26 + 2;
      lVar16 = uVar22 - 4;
      lVar18 = (uVar26 + 1 & 0x3fffffff) * 4 + uVar23;
      do {
        iVar10 = *piVar21;
        iVar15 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
        *(int *)(iVar9 + 0x220) = iVar15;
        iVar15 = (iVar15 >> 4) + (iVar15 >> 2);
        *piVar21 = iVar15;
        if (*(int *)(iVar11 + *(int *)(iVar9 + 0x134) + 4) <= (int)uVar26) {
          uVar24 = uVar24 + 1;
          iVar11 = iVar11 + 4;
        }
        iVar13 = (int)lVar16;
        iVar14 = (int)lVar12;
        pfVar8 = (float *)lVar18;
        pfVar8[-1] = (float)((double)(((float)(longlong)*(int *)(iVar13 + 4) +
                                      (float)((double)(longlong)(iVar15 - iVar10) * dVar31)) *
                                     *(float *)((int)lVar17 + 4)) * dVar27);
        iVar10 = *piVar21;
        iVar15 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
        *(int *)(iVar9 + 0x220) = iVar15;
        iVar15 = (iVar15 >> 4) + (iVar15 >> 2);
        *piVar21 = iVar15;
        if (*(int *)(iVar11 + *(int *)(iVar9 + 0x134) + 4) <= iVar14 + -1) {
          uVar24 = uVar24 + 1;
          iVar11 = iVar11 + 4;
        }
        *pfVar8 = (float)((double)(((float)(longlong)*(int *)(iVar13 + 8) +
                                   (float)((double)(longlong)(iVar15 - iVar10) * dVar31)) *
                                  *(float *)((iVar7 - uVar3) + (int)pfVar8)) * dVar27);
        iVar10 = *piVar21;
        iVar15 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
        *(int *)(iVar9 + 0x220) = iVar15;
        iVar15 = (iVar15 >> 4) + (iVar15 >> 2);
        *piVar21 = iVar15;
        if (*(int *)(iVar11 + *(int *)(iVar9 + 0x134) + 4) <= iVar14) {
          uVar24 = uVar24 + 1;
          iVar11 = iVar11 + 4;
        }
        pfVar8[1] = (float)((double)(((float)(longlong)*(int *)(iVar13 + 0xc) +
                                     (float)((double)(longlong)(iVar15 - iVar10) * dVar31)) *
                                    *(float *)((int)lVar17 + 0xc)) * dVar27);
        iVar10 = *piVar21;
        iVar15 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
        *(int *)(iVar9 + 0x220) = iVar15;
        iVar15 = (iVar15 >> 4) + (iVar15 >> 2);
        *piVar21 = iVar15;
        if (*(int *)(iVar11 + *(int *)(iVar9 + 0x134) + 4) <= iVar14 + 1) {
          uVar24 = uVar24 + 1;
          iVar11 = iVar11 + 4;
        }
        lVar16 = lVar16 + 0x10;
        lVar17 = lVar17 + 0x10;
        uVar26 = uVar26 + 4;
        uVar25 = uVar25 + 4;
        lVar12 = lVar12 + 4;
        pfVar8[2] = (float)((double)(((float)(longlong)*(int *)lVar16 +
                                     (float)((double)(longlong)(iVar15 - iVar10) * dVar31)) *
                                    *(float *)lVar17) * dVar27);
        lVar18 = lVar18 + 0x10;
      } while ((int)uVar26 < (int)(uVar6 - 3));
    }
    if ((int)uVar26 < (int)uVar6) {
      lVar18 = uVar6 - uVar26;
      lVar12 = (uVar24 & 0x3fffffff) << 2;
      lVar17 = (uVar26 & 0x3fffffff) * 4 + uVar23;
      lVar16 = (uVar25 & 0x3fffffff) * 4 + uVar22 + -4;
      uVar25 = lVar18 + uVar25;
      do {
        iVar11 = *(int *)(iVar9 + 0x21c);
        iVar10 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
        *(int *)(iVar9 + 0x220) = iVar10;
        iVar10 = (iVar10 >> 4) + (iVar10 >> 2);
        *(int *)(iVar9 + 0x21c) = iVar10;
        if (*(int *)(*(int *)(iVar9 + 0x134) + (int)lVar12 + 4) <= (int)uVar26) {
          uVar24 = uVar24 + 1;
          lVar12 = lVar12 + 4;
        }
        lVar16 = lVar16 + 4;
        uVar26 = uVar26 + 1;
        *(float *)lVar17 =
             (float)((double)(((float)(longlong)*(int *)lVar16 +
                              (float)((double)(longlong)(iVar10 - iVar11) * dVar31)) *
                             *(float *)((iVar7 - uVar3) + (int)(float *)lVar17)) * dVar27);
        lVar17 = lVar17 + 4;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
  }
  uVar20 = (ulonglong)*(uint *)(iVar9 + 0x10c);
  if ((int)uVar26 < (int)*(uint *)(iVar9 + 0x10c)) {
    iVar11 = 0;
    lVar16 = uVar4 + uVar24;
    lVar17 = (uVar24 & 0x3fffffff) << 2;
    do {
      iVar10 = (int)uVar26;
      if (*(int *)(*(int *)(iVar9 + 0x134) + (int)lVar17 + 4) <= iVar10) {
        lVar17 = lVar17 + 4;
        lVar16 = lVar16 + 1;
      }
      uVar4 = *(uint *)(*(int *)(iVar9 + 0x134) + (int)lVar17 + 4);
      uVar24 = (ulonglong)uVar4;
      if ((int)uVar20 <= (int)uVar4) {
        uVar24 = uVar20;
      }
      iVar15 = (int)uVar24;
      if (*(char *)lVar16 == '\x01') {
        dVar28 = (double)fn_82A6E650(*(undefined4 *)(iVar11 + uVar5));
        fVar1 = (float)((double)(float)((double)(float)((double)*(float *)(param_2[4] + iVar11) *
                                                       dVar28) * dVar29) * dVar30);
        if (iVar10 < iVar15) {
          if (3 < iVar15 - iVar10) {
            lVar12 = (uVar26 & 0x3fffffff) * 4 + param_3 + -4;
            piVar21 = (int *)(iVar9 + 0x21c);
            lVar18 = (uVar26 + 1 & 0x3fffffff) * 4 + uVar23;
            do {
              uVar26 = uVar26 + 4;
              iVar10 = *piVar21;
              iVar13 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
              *(int *)(iVar9 + 0x220) = iVar13;
              iVar13 = (iVar13 >> 4) + (iVar13 >> 2);
              *piVar21 = iVar13;
              pfVar8 = (float *)lVar18;
              pfVar8[-1] = (float)(longlong)(iVar13 - iVar10) * *(float *)((int)lVar12 + 4) * fVar1;
              iVar10 = *piVar21;
              iVar13 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
              *(int *)(iVar9 + 0x220) = iVar13;
              iVar13 = (iVar13 >> 4) + (iVar13 >> 2);
              *piVar21 = iVar13;
              *pfVar8 = *(float *)((iVar7 - uVar3) + (int)pfVar8) *
                        (float)(longlong)(iVar13 - iVar10) * fVar1;
              iVar10 = *piVar21;
              iVar13 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
              *(int *)(iVar9 + 0x220) = iVar13;
              iVar13 = (iVar13 >> 4) + (iVar13 >> 2);
              *piVar21 = iVar13;
              pfVar8[1] = (float)(longlong)(iVar13 - iVar10) * *(float *)((int)lVar12 + 0xc) * fVar1
              ;
              iVar10 = *piVar21;
              iVar13 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
              *(int *)(iVar9 + 0x220) = iVar13;
              iVar13 = (iVar13 >> 4) + (iVar13 >> 2);
              *piVar21 = iVar13;
              lVar12 = lVar12 + 0x10;
              pfVar8[2] = (float)(longlong)(iVar13 - iVar10) * *(float *)lVar12 * fVar1;
              lVar18 = lVar18 + 0x10;
            } while ((int)uVar26 < iVar15 + -3);
          }
          if ((int)uVar26 < iVar15) {
            lVar12 = uVar24 - uVar26;
            lVar18 = (uVar26 & 0x3fffffff) * 4 + uVar23;
            uVar26 = lVar12 + uVar26;
            do {
              iVar10 = *(int *)(iVar9 + 0x21c);
              iVar15 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
              *(int *)(iVar9 + 0x220) = iVar15;
              iVar15 = (iVar15 >> 4) + (iVar15 >> 2);
              *(int *)(iVar9 + 0x21c) = iVar15;
              *(float *)lVar18 =
                   *(float *)((int)(float *)lVar18 + (iVar7 - uVar3)) *
                   (float)(longlong)(iVar15 - iVar10) * fVar1;
              lVar18 = lVar18 + 4;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
        iVar11 = iVar11 + 4;
      }
      else {
        if ((int)uVar20 < iVar15) {
          uVar24 = uVar20;
        }
        iVar15 = (int)uVar24;
        if (iVar10 < iVar15) {
          if (3 < iVar15 - iVar10) {
            lVar18 = (uVar26 & 0x3fffffff) * 4 + param_3 + -4;
            piVar21 = (int *)(iVar9 + 0x21c);
            lVar12 = (uVar25 & 0x3fffffff) * 4 + uVar22 + -4;
            lVar19 = (uVar26 + 1 & 0x3fffffff) * 4 + uVar23;
            do {
              uVar26 = uVar26 + 4;
              iVar10 = *piVar21;
              uVar25 = uVar25 + 4;
              iVar13 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
              *(int *)(iVar9 + 0x220) = iVar13;
              iVar14 = (iVar13 >> 4) + (iVar13 >> 2);
              *piVar21 = iVar14;
              iVar13 = (int)lVar12;
              pfVar8 = (float *)lVar19;
              pfVar8[-1] = (float)((double)((float)((double)(longlong)(iVar14 - iVar10) * dVar31 +
                                                   (double)(longlong)*(int *)(iVar13 + 4)) *
                                           *(float *)((int)lVar18 + 4)) * dVar27);
              iVar14 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
              iVar10 = *piVar21;
              *(int *)(iVar9 + 0x220) = iVar14;
              iVar14 = (iVar14 >> 4) + (iVar14 >> 2);
              *piVar21 = iVar14;
              *pfVar8 = (float)((double)((float)((double)(longlong)(iVar14 - iVar10) * dVar31 +
                                                (double)(longlong)*(int *)(iVar13 + 8)) *
                                        *(float *)((iVar7 - uVar3) + (int)pfVar8)) * dVar27);
              iVar14 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
              iVar10 = *piVar21;
              *(int *)(iVar9 + 0x220) = iVar14;
              iVar14 = (iVar14 >> 4) + (iVar14 >> 2);
              *piVar21 = iVar14;
              pfVar8[1] = (float)((double)((float)((double)(longlong)(iVar14 - iVar10) * dVar31 +
                                                  (double)(longlong)*(int *)(iVar13 + 0xc)) *
                                          *(float *)((int)lVar18 + 0xc)) * dVar27);
              iVar10 = *piVar21;
              iVar13 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
              *(int *)(iVar9 + 0x220) = iVar13;
              iVar13 = (iVar13 >> 4) + (iVar13 >> 2);
              *piVar21 = iVar13;
              lVar12 = lVar12 + 0x10;
              lVar18 = lVar18 + 0x10;
              pfVar8[2] = (float)((double)((float)((double)(longlong)(iVar13 - iVar10) * dVar31 +
                                                  (double)(longlong)*(int *)lVar12) *
                                          *(float *)lVar18) * dVar27);
              lVar19 = lVar19 + 0x10;
            } while ((int)uVar26 < iVar15 + -3);
          }
          if ((int)uVar26 < iVar15) {
            lVar18 = uVar24 - uVar26;
            lVar19 = (uVar26 & 0x3fffffff) * 4 + uVar23;
            lVar12 = (uVar25 & 0x3fffffff) * 4 + uVar22 + -4;
            uVar25 = lVar18 + uVar25;
            uVar26 = lVar18 + uVar26;
            do {
              iVar10 = *(int *)(iVar9 + 0x21c);
              iVar15 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
              *(int *)(iVar9 + 0x220) = iVar15;
              iVar15 = (iVar15 >> 4) + (iVar15 >> 2);
              *(int *)(iVar9 + 0x21c) = iVar15;
              lVar12 = lVar12 + 4;
              *(float *)lVar19 =
                   (float)((double)((float)((double)(longlong)(iVar15 - iVar10) * dVar31 +
                                           (double)(longlong)*(int *)lVar12) *
                                   *(float *)((iVar7 - uVar3) + (int)(float *)lVar19)) * dVar27);
              lVar19 = lVar19 + 4;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
        }
      }
      uVar20 = (ulonglong)*(uint *)(iVar9 + 0x10c);
    } while ((int)uVar26 < (int)*(uint *)(iVar9 + 0x10c));
  }
  sVar2 = *(short *)((int)param_2 + 0x76);
  fVar1 = (float)((double)(float)((double)*(float *)((int)(uVar20 << 2) + iVar7 + -4) * dVar27) *
                 dVar31);
  if ((int)uVar26 < (int)sVar2) {
    if (3 < (int)sVar2 - (int)uVar26) {
      piVar21 = (int *)(iVar9 + 0x21c);
      lVar16 = (uVar26 & 0x3fffffff) * 4 + uVar23 + -4;
      do {
        uVar26 = uVar26 + 4;
        iVar7 = *piVar21;
        iVar11 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
        *(int *)(iVar9 + 0x220) = iVar11;
        iVar10 = (iVar11 >> 4) + (iVar11 >> 2);
        *piVar21 = iVar10;
        iVar11 = (int)lVar16;
        *(float *)(iVar11 + 4) = (float)(longlong)(iVar10 - iVar7) * fVar1;
        iVar7 = *piVar21;
        iVar10 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
        *(int *)(iVar9 + 0x220) = iVar10;
        iVar10 = (iVar10 >> 4) + (iVar10 >> 2);
        *piVar21 = iVar10;
        *(float *)(iVar11 + 8) = (float)(longlong)(iVar10 - iVar7) * fVar1;
        iVar7 = *piVar21;
        iVar10 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
        *(int *)(iVar9 + 0x220) = iVar10;
        iVar10 = (iVar10 >> 4) + (iVar10 >> 2);
        *piVar21 = iVar10;
        *(float *)(iVar11 + 0xc) = (float)(longlong)(iVar10 - iVar7) * fVar1;
        iVar7 = *piVar21;
        iVar11 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
        *(int *)(iVar9 + 0x220) = iVar11;
        iVar11 = (iVar11 >> 4) + (iVar11 >> 2);
        *piVar21 = iVar11;
        lVar16 = lVar16 + 0x10;
        *(float *)lVar16 = (float)(longlong)(iVar11 - iVar7) * fVar1;
      } while ((int)uVar26 < sVar2 + -3);
    }
    if ((int)uVar26 < (int)sVar2) {
      lVar17 = (longlong)sVar2 - uVar26;
      lVar16 = (uVar26 & 0x3fffffff) * 4 + uVar23 + -4;
      do {
        iVar7 = *(int *)(iVar9 + 0x21c);
        iVar11 = *(int *)(iVar9 + 0x220) * 0x19660d + 0x3c6ef35f;
        *(int *)(iVar9 + 0x220) = iVar11;
        iVar11 = (iVar11 >> 4) + (iVar11 >> 2);
        *(int *)(iVar9 + 0x21c) = iVar11;
        lVar16 = lVar16 + 4;
        *(float *)lVar16 = (float)(longlong)(iVar11 - iVar7) * fVar1;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
  }
  fn_82F6A594(0);
  return;
}

