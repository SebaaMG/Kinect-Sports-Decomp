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
extern unsigned int *auStack_d0;
extern int fn_82A71E30();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82090FC8;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8321A3C0;
extern unsigned int uStack_d8;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_82A72458(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  int iVar14;
  ulonglong uVar13;
  uint uVar15;
  float *pfVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint *puVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uStack_d8;
  uint auStack_d0 [52];
  
  iVar14 = *(int *)(param_1 + 0x11c);
  if (param_4 != 0) {
    if (param_4 == 1) {
      iVar19 = 0;
    }
    else {
      if (2 < param_4) {
        return 0xffffffff80070057;
      }
      iVar19 = 1;
    }
    if ((*(int *)(param_1 + 8) != 0) || (*(int *)(param_1 + 0x24) != 0)) {
      if (*(int *)(param_1 + 0x24) == 0) {
        uVar20 = 0x100000;
      }
      else {
        uVar20 = (ulonglong)(uint)(&lbl_8321A3C0)[param_3 & 0xff];
      }
      uVar2 = *(uint *)(param_1 + 0x78);
      uVar21 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        iVar6 = 0;
        iVar24 = 0;
        uVar25 = uVar21;
        do {
          iVar17 = iVar24 + *(int *)(iVar14 + 0x140);
          iVar24 = iVar24 + 0x6f0;
          *(undefined4 *)(iVar6 + *(int *)(param_2 + 0x184)) = *(undefined4 *)(iVar17 + 0x3c);
          iVar6 = iVar6 + 4;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      lVar12 = (longlong)((int)param_5 >> 8) +
               (ulonglong)((int)param_5 < 0 && (param_5 & 0xff) != 0);
      if ((int)lVar12 < 2) {
        lVar12 = 2;
      }
      else if (0x10 < (int)lVar12) {
        lVar12 = 0x10;
      }
      iVar14 = (int)lVar12;
      if (-1 < iVar14) {
        lVar10 = lVar12 + 1;
        piVar11 = (int *)((int)&uStack_d8 + 4);
        iVar6 = 0;
        do {
          iVar24 = iVar6 / iVar14;
          iVar6 = iVar6 + param_5;
          piVar11 = piVar11 + 1;
          *piVar11 = iVar24;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        if (0 < iVar14) {
          puVar22 = auStack_d0;
          dVar29 = (double)lbl_82090FC8;
          dVar30 = (double)lbl_82002C5C;
          dVar31 = (double)lbl_821AAD20;
          do {
            puVar22 = puVar22 + 1;
            uVar3 = puVar22[-1];
            uVar25 = (ulonglong)uVar3;
            uVar4 = *puVar22;
            uVar23 = (ulonglong)uVar4;
            dVar27 = dVar31;
            if (0 < (int)uVar2) {
              piVar11 = *(int **)(param_2 + 0x184);
              uVar8 = uVar21;
              do {
                pfVar16 = (float *)(uVar3 * 4 + *piVar11);
                dVar28 = dVar31;
                if ((int)uVar3 < (int)uVar4) {
                  uVar13 = uVar25;
                  if (3 < (int)(uVar4 - uVar3)) {
                    do {
                      dVar26 = (double)*pfVar16;
                      if (dVar26 <= dVar31) {
                        dVar26 = -dVar26;
                      }
                      if (dVar28 < dVar26) {
                        dVar28 = dVar26;
                      }
                      dVar26 = (double)pfVar16[1];
                      if (dVar26 <= dVar31) {
                        dVar26 = -dVar26;
                      }
                      if (dVar28 < dVar26) {
                        dVar28 = dVar26;
                      }
                      dVar26 = (double)pfVar16[2];
                      if (dVar26 <= dVar31) {
                        dVar26 = -dVar26;
                      }
                      if (dVar28 < dVar26) {
                        dVar28 = dVar26;
                      }
                      dVar26 = (double)pfVar16[3];
                      if (dVar26 <= dVar31) {
                        dVar26 = -dVar26;
                      }
                      if (dVar28 < dVar26) {
                        dVar28 = dVar26;
                      }
                      uVar13 = uVar13 + 4;
                      pfVar16 = pfVar16 + 4;
                    } while ((int)uVar13 < (int)(uVar4 - 3));
                  }
                  if ((int)uVar13 < (int)uVar4) {
                    lVar10 = uVar23 - uVar13;
                    do {
                      dVar26 = (double)*pfVar16;
                      if (dVar26 <= dVar31) {
                        dVar26 = -dVar26;
                      }
                      if (dVar28 < dVar26) {
                        dVar28 = dVar26;
                      }
                      pfVar16 = pfVar16 + 1;
                      lVar10 = lVar10 + -1;
                    } while (lVar10 != 0);
                  }
                }
                if (dVar27 < dVar28) {
                  dVar27 = dVar28;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 1;
              } while (uVar8 != 0);
            }
            dVar27 = (double)(float)((double)*(float *)(param_1 + 0x80) * dVar27);
            if (dVar31 <= dVar27) {
              dVar28 = dVar27 + dVar30;
            }
            else {
              dVar28 = dVar27 - dVar30;
            }
            iVar14 = 0x7fffff;
            if ((int)dVar28 < 0x7fffff) {
              if (dVar31 <= dVar27) {
                iVar14 = (int)(dVar27 + dVar30);
              }
              else {
                iVar14 = (int)(dVar27 - dVar30);
              }
            }
            if (*(int *)(param_1 + 8) == 0) {
              uVar9 = 0x7ffffe;
              uVar8 = uVar20;
            }
            else {
              iVar6 = iVar19 * 4;
              lVar10 = (longlong)(int)uVar20;
              if (*(int *)(*(int *)(param_1 + 0xc4) + iVar6) == 0) {
                uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x118) + iVar6);
                uVar8 = (longlong)(int)(*(int *)(*(int *)(param_1 + 0xc0) + iVar6) * lVar10 >> 0x14)
                ;
              }
              else {
                uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x118) + iVar6);
                uVar7 = (uint)(iVar14 * lVar10 >> 0x14);
                iVar14 = ((int)uVar7 >> 0xd) * 4;
                uVar8 = (longlong)
                        (int)((((int)(*(int *)(*(int *)(*(int *)(param_1 + 0x108) + iVar6) + iVar14)
                                     * (uVar7 & 0x1fff)) >>
                               (*(uint *)(*(int *)(param_1 + 0x128) + iVar6) & 0x3f)) +
                              *(int *)(*(int *)(*(int *)(param_1 + 0x104) + iVar6) + iVar14)) *
                              lVar10 >> 0x14);
              }
            }
            iVar14 = *(int *)(param_1 + 0xac);
            if (dVar31 <= dVar27) {
              dVar27 = dVar27 + dVar30;
            }
            else {
              dVar27 = dVar27 - dVar30;
            }
            iVar6 = fn_82A71E30(param_1,uVar8,(int)dVar27,uVar9,uVar23 - uVar25);
            iVar24 = (int)(uVar23 - uVar25);
            uVar7 = iVar24 >> 2;
            if (uVar7 != 0) {
              uVar15 = 0;
              uVar18 = uVar7;
              while (1 < uVar18) {
                uVar15 = uVar15 + 1;
                uVar18 = uVar7 >> (uVar15 & 0x3f);
              }
            }
            iVar17 = iVar6;
            if (iVar6 <= iVar14) {
              iVar17 = iVar14;
            }
            if (iVar17 < 3) {
              iVar17 = 2;
            }
            uVar18 = 0;
            uVar7 = iVar17 - 1U;
            while (1 < uVar7) {
              uVar18 = uVar18 + 1;
              uVar7 = iVar17 - 1U >> (uVar18 & 0x3f);
            }
            uStack_d8 = (longlong)iVar6;
            fVar1 = (float)((double)uStack_d8 * dVar29);
            if (0 < (int)uVar2) {
              piVar11 = *(int **)(param_2 + 0x184);
              uVar8 = uVar21;
              do {
                pfVar16 = (float *)(uVar3 * 4 + *piVar11);
                if ((int)uVar3 < (int)uVar4) {
                  uVar13 = uVar25;
                  if (3 < iVar24) {
                    do {
                      uVar13 = uVar13 + 4;
                      *pfVar16 = *pfVar16 * fVar1;
                      pfVar16[1] = pfVar16[1] * fVar1;
                      pfVar16[2] = pfVar16[2] * fVar1;
                      pfVar16[3] = pfVar16[3] * fVar1;
                      pfVar16 = pfVar16 + 4;
                    } while ((int)uVar13 < (int)(uVar4 - 3));
                  }
                  if ((int)uVar13 < (int)uVar4) {
                    lVar10 = uVar23 - uVar13;
                    pfVar16 = pfVar16 + -1;
                    do {
                      pfVar5 = pfVar16 + 1;
                      pfVar16 = pfVar16 + 1;
                      *pfVar16 = *pfVar5 * fVar1;
                      lVar10 = lVar10 + -1;
                    } while (lVar10 != 0);
                  }
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 1;
              } while (uVar8 != 0);
            }
            lVar12 = lVar12 + -1;
            *(int *)(param_1 + 0xac) = iVar6;
          } while (lVar12 != 0);
        }
      }
    }
  }
  return 0;
}

