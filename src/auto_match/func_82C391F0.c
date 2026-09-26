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
extern int fn_82C38BA0();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82090FC8;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8329F200;
extern unsigned int uStack_d8;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_82C391F0(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int *piVar10;
  int iVar12;
  ulonglong uVar11;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint *puVar21;
  ulonglong uVar22;
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
  
  iVar12 = *(int *)(param_1 + 0x11c);
  if (param_4 != 0) {
    if (param_4 == 1) {
      iVar18 = 0;
    }
    else {
      if (2 < param_4) {
        return 0xffffffff80070057;
      }
      iVar18 = 1;
    }
    if ((*(int *)(param_1 + 8) != 0) || (*(int *)(param_1 + 0x24) != 0)) {
      if (*(int *)(param_1 + 0x24) == 0) {
        uVar19 = 0x100000;
      }
      else {
        uVar19 = (ulonglong)(uint)(&lbl_8329F200)[param_3 & 0xff];
      }
      uVar2 = *(uint *)(param_1 + 0x78);
      uVar20 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        iVar5 = 0;
        iVar24 = 0;
        uVar25 = uVar20;
        do {
          iVar16 = iVar24 + *(int *)(iVar12 + 0x140);
          iVar24 = iVar24 + 0x6f0;
          *(undefined4 *)(iVar5 + *(int *)(param_2 + 0x184)) = *(undefined4 *)(iVar16 + 0x3c);
          iVar5 = iVar5 + 4;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      uVar25 = (longlong)((int)param_5 >> 8) +
               (ulonglong)((int)param_5 < 0 && (param_5 & 0xff) != 0);
      if ((int)uVar25 < 2) {
        uVar25 = 2;
      }
      else if (0x10 < (int)uVar25) {
        uVar25 = 0x10;
      }
      iVar12 = (int)uVar25;
      if (-1 < iVar12) {
        lVar9 = uVar25 + 1;
        piVar10 = (int *)((int)&uStack_d8 + 4);
        uVar14 = 0;
        do {
          uVar3 = uVar14 >> 0x1f;
          uVar22 = (ulonglong)uVar14;
          trapWord(6,uVar25,0);
          piVar10 = piVar10 + 1;
          *piVar10 = (int)uVar14 / iVar12;
          uVar14 = uVar14 + param_5;
          trapWord(5,uVar25 & ~(((uVar22 & 0x7fffffff) << 1 | (ulonglong)uVar3) - 1),0xffff);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        if (0 < iVar12) {
          puVar21 = auStack_d0;
          dVar29 = (double)lbl_82090FC8;
          dVar30 = (double)lbl_82002C5C;
          dVar31 = (double)lbl_821AAD20;
          do {
            puVar21 = puVar21 + 1;
            uVar14 = puVar21[-1];
            uVar22 = (ulonglong)uVar14;
            uVar3 = *puVar21;
            uVar23 = (ulonglong)uVar3;
            dVar27 = dVar31;
            if (0 < (int)uVar2) {
              piVar10 = *(int **)(param_2 + 0x184);
              uVar7 = uVar20;
              do {
                pfVar15 = (float *)(uVar14 * 4 + *piVar10);
                dVar28 = dVar31;
                if ((int)uVar14 < (int)uVar3) {
                  uVar11 = uVar22;
                  if (3 < (int)(uVar3 - uVar14)) {
                    do {
                      dVar26 = (double)*pfVar15;
                      if (dVar26 <= dVar31) {
                        dVar26 = -dVar26;
                      }
                      if (dVar28 < dVar26) {
                        dVar28 = dVar26;
                      }
                      dVar26 = (double)pfVar15[1];
                      if (dVar26 <= dVar31) {
                        dVar26 = -dVar26;
                      }
                      if (dVar28 < dVar26) {
                        dVar28 = dVar26;
                      }
                      dVar26 = (double)pfVar15[2];
                      if (dVar26 <= dVar31) {
                        dVar26 = -dVar26;
                      }
                      if (dVar28 < dVar26) {
                        dVar28 = dVar26;
                      }
                      dVar26 = (double)pfVar15[3];
                      if (dVar26 <= dVar31) {
                        dVar26 = -dVar26;
                      }
                      if (dVar28 < dVar26) {
                        dVar28 = dVar26;
                      }
                      uVar11 = uVar11 + 4;
                      pfVar15 = pfVar15 + 4;
                    } while ((int)uVar11 < (int)(uVar3 - 3));
                  }
                  if ((int)uVar11 < (int)uVar3) {
                    lVar9 = uVar23 - uVar11;
                    do {
                      dVar26 = (double)*pfVar15;
                      if (dVar26 <= dVar31) {
                        dVar26 = -dVar26;
                      }
                      if (dVar28 < dVar26) {
                        dVar28 = dVar26;
                      }
                      pfVar15 = pfVar15 + 1;
                      lVar9 = lVar9 + -1;
                    } while (lVar9 != 0);
                  }
                }
                if (dVar27 < dVar28) {
                  dVar27 = dVar28;
                }
                uVar7 = uVar7 - 1;
                piVar10 = piVar10 + 1;
              } while (uVar7 != 0);
            }
            dVar27 = (double)(float)((double)*(float *)(param_1 + 0x80) * dVar27);
            if (dVar31 <= dVar27) {
              dVar28 = dVar27 + dVar30;
            }
            else {
              dVar28 = dVar27 - dVar30;
            }
            iVar12 = 0x7fffff;
            if ((int)dVar28 < 0x7fffff) {
              if (dVar31 <= dVar27) {
                iVar12 = (int)(dVar27 + dVar30);
              }
              else {
                iVar12 = (int)(dVar27 - dVar30);
              }
            }
            if (*(int *)(param_1 + 8) == 0) {
              uVar8 = 0x7ffffe;
              uVar7 = uVar19;
            }
            else {
              iVar5 = iVar18 * 4;
              lVar9 = (longlong)(int)uVar19;
              if (*(int *)(*(int *)(param_1 + 0xc4) + iVar5) == 0) {
                uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x118) + iVar5);
                uVar7 = (longlong)(int)(*(int *)(*(int *)(param_1 + 0xc0) + iVar5) * lVar9 >> 0x14);
              }
              else {
                uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x118) + iVar5);
                uVar6 = (uint)(iVar12 * lVar9 >> 0x14);
                iVar12 = ((int)uVar6 >> 0xd) * 4;
                uVar7 = (longlong)
                        (int)((((int)(*(int *)(*(int *)(*(int *)(param_1 + 0x108) + iVar5) + iVar12)
                                     * (uVar6 & 0x1fff)) >>
                               (*(uint *)(*(int *)(param_1 + 0x128) + iVar5) & 0x3f)) +
                              *(int *)(*(int *)(*(int *)(param_1 + 0x104) + iVar5) + iVar12)) *
                              lVar9 >> 0x14);
              }
            }
            iVar12 = *(int *)(param_1 + 0xac);
            if (dVar31 <= dVar27) {
              dVar27 = dVar27 + dVar30;
            }
            else {
              dVar27 = dVar27 - dVar30;
            }
            iVar5 = fn_82C38BA0(param_1,uVar7,(int)dVar27,uVar8,uVar23 - uVar22);
            iVar24 = (int)(uVar23 - uVar22);
            uVar6 = iVar24 >> 2;
            if (uVar6 != 0) {
              uVar13 = 0;
              uVar17 = uVar6;
              while (1 < uVar17) {
                uVar13 = uVar13 + 1;
                uVar17 = uVar6 >> (uVar13 & 0x3f);
              }
            }
            iVar16 = iVar5;
            if (iVar5 <= iVar12) {
              iVar16 = iVar12;
            }
            if (iVar16 < 3) {
              iVar16 = 2;
            }
            uVar17 = 0;
            uVar6 = iVar16 - 1U;
            while (1 < uVar6) {
              uVar17 = uVar17 + 1;
              uVar6 = iVar16 - 1U >> (uVar17 & 0x3f);
            }
            uStack_d8 = (longlong)iVar5;
            fVar1 = (float)((double)uStack_d8 * dVar29);
            if (0 < (int)uVar2) {
              piVar10 = *(int **)(param_2 + 0x184);
              uVar7 = uVar20;
              do {
                pfVar15 = (float *)(uVar14 * 4 + *piVar10);
                if ((int)uVar14 < (int)uVar3) {
                  uVar11 = uVar22;
                  if (3 < iVar24) {
                    do {
                      uVar11 = uVar11 + 4;
                      *pfVar15 = *pfVar15 * fVar1;
                      pfVar15[1] = pfVar15[1] * fVar1;
                      pfVar15[2] = pfVar15[2] * fVar1;
                      pfVar15[3] = pfVar15[3] * fVar1;
                      pfVar15 = pfVar15 + 4;
                    } while ((int)uVar11 < (int)(uVar3 - 3));
                  }
                  if ((int)uVar11 < (int)uVar3) {
                    lVar9 = uVar23 - uVar11;
                    pfVar15 = pfVar15 + -1;
                    do {
                      pfVar4 = pfVar15 + 1;
                      pfVar15 = pfVar15 + 1;
                      *pfVar15 = *pfVar4 * fVar1;
                      lVar9 = lVar9 + -1;
                    } while (lVar9 != 0);
                  }
                }
                uVar7 = uVar7 - 1;
                piVar10 = piVar10 + 1;
              } while (uVar7 != 0);
            }
            uVar25 = uVar25 - 1;
            *(int *)(param_1 + 0xac) = iVar5;
          } while (uVar25 != 0);
        }
      }
    }
  }
  return 0;
}

