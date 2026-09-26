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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F643F8();
extern int fn_82F68918();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82006848;
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_82015438;
extern unsigned int lbl_8201543C;
extern unsigned int lbl_82089F00;
extern unsigned int lbl_821AAD20;


void fn_82A5E338(undefined8 param_1,ulonglong param_2,longlong param_3,longlong param_4,
                  int param_5)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  float *pfVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar14;
  longlong lVar13;
  undefined4 *puVar15;
  int *piVar19;
  ulonglong uVar16;
  ulonglong uVar17;
  float *pfVar20;
  longlong lVar18;
  undefined8 uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  
  uVar7 = fn_82F6A53C();
  uVar21 = 0;
  puVar9 = (undefined4 *)0x0;
  pfVar10 = (float *)0x0;
  lVar8 = fn_8265C940((uVar7 & 0x3fffffff) << 2,0x20970000);
  if (lVar8 != 0) {
    lVar25 = (param_2 & 0x3fffffff) << 2;
    puVar9 = (undefined4 *)fn_8265C940(lVar25,0x20970000);
    if (puVar9 != (undefined4 *)0x0) {
      pfVar10 = (float *)fn_8265C940(lVar25,0x20970000);
      if (pfVar10 != (float *)0x0) {
        iVar14 = 0;
        iVar23 = (int)uVar7;
        if (0 < iVar23) {
          lVar25 = lVar8 + -4;
          uVar26 = uVar7;
          do {
            lVar25 = lVar25 + 4;
            *(int *)lVar25 = iVar14;
            iVar14 = iVar14 + 1;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
        iVar14 = 0;
        iVar22 = (int)param_2;
        if (0 < iVar22) {
          piVar19 = puVar9 + -1;
          uVar26 = param_2;
          do {
            piVar19 = piVar19 + 1;
            *piVar19 = iVar14;
            iVar14 = iVar14 + 1;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
        do {
          bVar4 = false;
          iVar12 = 0;
          iVar14 = (int)param_3;
          if (0 < iVar23 + -1) {
            iVar24 = (int)lVar8 - iVar14;
            lVar13 = lVar8;
            lVar25 = param_3;
            do {
              pfVar20 = (float *)(lVar25 + 4);
              fVar1 = pfVar20[-1];
              if (*pfVar20 < fVar1) {
                *(float *)lVar25 = *pfVar20;
                bVar4 = true;
                *pfVar20 = fVar1;
                uVar2 = *(undefined4 *)lVar13;
                *(undefined4 *)lVar13 = *(undefined4 *)(iVar24 + (int)pfVar20);
                *(undefined4 *)(iVar24 + (int)pfVar20) = uVar2;
              }
              iVar12 = iVar12 + 1;
              lVar13 = lVar13 + 4;
              lVar25 = lVar25 + 4;
            } while (iVar12 < iVar23 + -1);
          }
        } while (bVar4);
        do {
          bVar4 = false;
          iVar24 = 0;
          iVar12 = (int)param_4;
          if (0 < iVar22 + -1) {
            lVar25 = param_4;
            puVar15 = puVar9;
            do {
              pfVar20 = (float *)(lVar25 + 4);
              fVar1 = pfVar20[-1];
              if (*pfVar20 < fVar1) {
                *(float *)lVar25 = *pfVar20;
                bVar4 = true;
                *pfVar20 = fVar1;
                uVar2 = *puVar15;
                *puVar15 = *(undefined4 *)((int)pfVar20 + ((int)puVar9 - iVar12));
                *(undefined4 *)((int)pfVar20 + ((int)puVar9 - iVar12)) = uVar2;
              }
              iVar24 = iVar24 + 1;
              puVar15 = puVar15 + 1;
              lVar25 = lVar25 + 4;
            } while (iVar24 < iVar22 + -1);
          }
          fVar1 = lbl_821AAD20;
        } while (bVar4);
        uVar16 = 0;
        dVar33 = (double)lbl_821AAD20;
        uVar26 = uVar7;
        if (0 < iVar23) {
          do {
            uVar26 = uVar16;
            if (dVar33 <= (double)*(float *)param_3) break;
            uVar16 = uVar16 + 1;
            param_3 = param_3 + 4;
            uVar26 = uVar7;
          } while ((int)uVar16 < iVar23);
        }
        uVar17 = 0;
        lVar25 = param_4;
        uVar16 = param_2;
        if (0 < iVar22) {
          do {
            uVar16 = uVar17;
            if (dVar33 <= (double)*(float *)lVar25) break;
            uVar17 = uVar17 + 1;
            lVar25 = lVar25 + 4;
            uVar16 = param_2;
          } while ((int)uVar17 < iVar22);
        }
        if (0 < iVar22) {
          lVar25 = 0;
          uVar17 = param_2;
          pfVar20 = pfVar10;
          do {
            *pfVar20 = fVar1;
            lVar13 = 0;
            uVar27 = uVar7;
            if (0 < iVar23) {
              do {
                uVar11 = lVar25 + lVar13;
                lVar13 = lVar13 + 1;
                *(float *)((int)((uVar11 & 0xffffffff) << 2) + param_5) = fVar1;
                uVar27 = uVar27 - 1;
              } while (uVar27 != 0);
            }
            uVar17 = uVar17 - 1;
            pfVar20 = pfVar20 + 1;
            lVar25 = lVar25 + uVar7;
          } while (uVar17 != 0);
        }
        iVar24 = (int)(param_2 - uVar16);
        if (0 < iVar24) {
          dVar30 = (double)lbl_82002AE0;
          if ((int)uVar26 < iVar23) {
            lVar25 = (uVar26 & 0x3fffffff) * 4 + lVar8;
            iVar14 = iVar14 - (int)lVar8;
            dVar31 = (double)lbl_8201543C;
            dVar32 = (double)lbl_82015438;
            dVar29 = lbl_82089F00;
            do {
              piVar19 = (int *)lVar25;
              uVar17 = uVar16;
              if ((int)uVar16 < iVar22) {
                lVar13 = (uVar16 & 0x3fffffff) * 4 + param_4;
                do {
                  if (*(float *)(iVar14 + (int)piVar19) <= *(float *)lVar13) break;
                  uVar17 = uVar17 + 1;
                  lVar13 = lVar13 + 4;
                } while ((int)uVar17 < iVar22);
              }
              lVar18 = uVar17 - uVar16;
              lVar13 = lVar18 + (param_2 - uVar16) + -1;
              uVar27 = (lVar18 - (longlong)((int)lVar18 / iVar24) * (longlong)iVar24) + uVar16;
              uVar17 = (lVar13 - (longlong)((int)lVar13 / iVar24) * (longlong)iVar24) + uVar16;
              iVar3 = (int)((uVar17 & 0x3fffffff) << 2);
              dVar35 = (double)(*(float *)((int)((uVar27 & 0xffffffff) << 2) + iVar12) -
                               *(float *)(iVar3 + iVar12));
              dVar28 = (double)fn_82F68918((double)(float)(dVar35 * dVar32));
              dVar34 = (double)(*(float *)(iVar14 + (int)piVar19) - *(float *)(iVar3 + iVar12));
              dVar35 = -(double)(float)((double)(float)dVar28 * dVar31 - dVar35);
              dVar28 = (double)fn_82F68918((double)(float)(dVar34 * dVar32));
              if ((int)uVar17 != (int)uVar27) {
                if (dVar35 != dVar33) {
                    /* WARNING: Subroutine does not return */
                  fn_82F643F8((double)(float)(-(double)(float)((double)(float)dVar28 * dVar31
                                                                    - dVar34) / dVar35) * dVar29);
                }
                uVar21 = 0xffffffff80070057;
                goto LAB_82a5e80c;
              }
              *(float *)((*(int *)(iVar3 + (int)puVar9) * iVar23 + *piVar19) * 4 + param_5) =
                   (float)dVar30;
              uVar26 = uVar26 + 1;
              pfVar10[*(int *)(iVar3 + (int)puVar9)] =
                   (float)((double)pfVar10[*(int *)(iVar3 + (int)puVar9)] + dVar30);
              lVar25 = lVar25 + 4;
            } while ((int)uVar26 < iVar23);
          }
          fVar6 = lbl_8200DFF4;
          fVar5 = lbl_82006848;
          fVar1 = lbl_82002C5C;
          uVar26 = param_2;
          dVar29 = dVar33;
          pfVar20 = pfVar10;
          if (0 < iVar22) {
            do {
              if (dVar29 < (double)*pfVar20) {
                dVar29 = (double)*pfVar20;
              }
              uVar26 = uVar26 - 1;
              pfVar20 = pfVar20 + 1;
            } while (uVar26 != 0);
            if (dVar29 != dVar33) {
              lVar25 = 0;
              do {
                lVar13 = 0;
                if (0 < iVar23) {
                  uVar26 = uVar7;
                  do {
                    uVar16 = lVar25 + lVar13;
                    lVar13 = lVar13 + 1;
                    iVar14 = (int)((uVar16 & 0xffffffff) << 2);
                    *(float *)(iVar14 + param_5) =
                         (float)(longlong)
                                (int)((float)(dVar30 / dVar29) * *(float *)(iVar14 + param_5) *
                                      fVar6 + fVar1) * fVar5;
                    uVar26 = uVar26 - 1;
                  } while (uVar26 != 0);
                }
                param_2 = param_2 - 1;
                lVar25 = lVar25 + uVar7;
              } while (param_2 != 0);
            }
          }
        }
        goto LAB_82a5e80c;
      }
    }
  }
  uVar21 = 0xffffffff8007000e;
LAB_82a5e80c:
  fn_8265C990(lVar8,0x20970000);
  fn_8265C990(puVar9,0x20970000);
  fn_8265C990(pfVar10,0x20970000);
  fn_82F6A588(uVar21);
  return;
}

