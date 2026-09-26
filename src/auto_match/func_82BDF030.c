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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int lbl_82002C40;
extern unsigned int lbl_820E8848;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831738F4;
extern unsigned int lbl_83174FF0;
extern unsigned int lbl_83175010;
extern unsigned int lbl_8329EC80;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BDF030(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  int iVar20;
  int *piVar21;
  longlong lVar22;
  uint uVar24;
  uint uVar25;
  longlong lVar23;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  ulonglong uVar32;
  float *pfVar33;
  ulonglong uVar34;
  uint uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  
  dVar38 = (double)(longlong)param_6;
  if (*(int *)(param_1 + 0x14c) == 0) {
    *(undefined4 *)(param_1 + 0x14c) = 1;
    *(undefined4 *)(param_1 + 0x150) = 1;
    *(undefined4 *)(param_1 + 0x154) = 1;
    *(undefined4 *)(param_1 + 0x158) = 1;
    *(undefined4 *)(param_1 + 0x15c) = 1;
  }
  fVar15 = lbl_821AAD20;
  dVar14 = lbl_820E8848;
  dVar13 = lbl_82002C40;
  iVar30 = 0;
  bVar12 = false;
  if (0 < param_2) {
    dVar39 = (double)lbl_821AAD20;
    iVar26 = lbl_8329EC80;
    do {
      iVar27 = *(int *)(iVar30 * 4 + param_4);
      dVar40 = (double)*(float *)(iVar30 * 4 + param_3);
      dVar41 = -dVar40;
      pfVar33 = (float *)(iVar26 * iVar30 * 4 + param_5);
      if ((iVar27 < 7) && (-1 < iVar27)) {
        iVar6 = iVar27 * 4;
        iVar31 = 0;
        uVar28 = *(uint *)(iVar6 + -0x7ce8db0c);
        iVar20 = *(int *)(&lbl_83175010 + iVar6);
        uVar34 = ZEXT48((&lbl_831738F4)[iVar27]);
        uVar29 = *(uint *)(&lbl_83174FF0 + iVar6);
        uVar32 = (ulonglong)(uint)(1 << (uVar28 & 0x3f)) - 1;
        uVar16 = uVar34;
        if (0 < iVar20) {
          do {
            do {
              puVar3 = *(ushort **)(param_1 + 0x148);
              uVar35 = (uint)puVar3[-1] << (0x10 - *(uint *)(param_1 + 0x144) & 0x3f) |
                       (uint)(*puVar3 >> (*(uint *)(param_1 + 0x144) & 0x3f));
              uVar24 = uVar35 >> 0xe & 2;
              lVar23 = 0xf;
              while( true ) {
                iVar26 = *(int *)(param_1 + 0x138);
                lVar22 = lVar23 + -1;
                uVar2 = *(ushort *)(uVar24 + (int)uVar16);
                uVar18 = (ulonglong)uVar2;
                uVar24 = (uint)lVar22;
                *(int *)(param_1 + 0x138) = iVar26 + -1;
                uVar17 = uVar18 & 1;
                uVar16 = uVar18 * 2 + uVar34;
                if ((uVar2 & 1) != 0) break;
                lVar22 = lVar23 + -2;
                uVar25 = (uint)lVar22;
                uVar2 = *(ushort *)((uVar35 >> (uVar24 & 0x3f) & 1) * 2 + (int)uVar16);
                uVar18 = (ulonglong)uVar2;
                *(int *)(param_1 + 0x138) = iVar26 + -2;
                uVar17 = uVar18 & 1;
                uVar16 = uVar18 * 2 + uVar34;
                if ((uVar2 & 1) != 0) break;
                lVar22 = lVar23 + -3;
                uVar24 = (uint)lVar22;
                uVar2 = *(ushort *)((uVar35 >> (uVar25 & 0x3f) & 1) * 2 + (int)uVar16);
                uVar18 = (ulonglong)uVar2;
                *(int *)(param_1 + 0x138) = iVar26 + -3;
                uVar17 = uVar18 & 1;
                uVar16 = uVar18 * 2 + uVar34;
                if ((uVar2 & 1) != 0) break;
                lVar22 = lVar23 + -4;
                *(int *)(param_1 + 0x138) = iVar26 + -4;
                uVar2 = *(ushort *)((uVar35 >> (uVar24 & 0x3f) & 1) * 2 + (int)uVar16);
                uVar18 = (ulonglong)uVar2;
                uVar17 = uVar18 & 1;
                uVar16 = uVar18 * 2 + uVar34;
                if (((uVar2 & 1) != 0) ||
                   (uVar24 = (uVar35 >> ((uint)lVar22 & 0x3f) & 1) << 1, lVar23 = lVar22,
                   (int)(uint)lVar22 < 0)) break;
              }
              lVar22 = (ulonglong)*(uint *)(param_1 + 0x144) + lVar22;
              lVar23 = lVar22 + -0xf;
              *(int *)(param_1 + 0x144) = (int)lVar23;
              if (lVar23 < 0) {
                uVar2 = *puVar3;
                *(ushort **)(param_1 + 0x148) = puVar3 + 1;
                *(int *)(param_1 + 0x144) = (int)lVar22 + 1;
                *(int *)(param_1 + 0x140) = (int)(short)uVar2;
              }
            } while ((uVar17 == 0) && (0 < *(int *)(param_1 + 0x138)));
            if (*(int *)(param_1 + 0x138) < 0) {
LAB_82bdf47c:
              bVar12 = true;
              iVar26 = lbl_8329EC80;
              goto LAB_82bdf434;
            }
            puVar3 = *(ushort **)(param_1 + 0x148);
            uVar18 = uVar18 >> 1;
            iVar26 = iVar27 * 0x38 + -0x7ce8c080;
            uVar35 = (uint)puVar3[-1] << (0x10 - *(uint *)(param_1 + 0x144) & 0x3f) |
                     (uint)(*puVar3 >> (*(uint *)(param_1 + 0x144) & 0x3f));
            lVar23 = 0xf;
            uVar24 = uVar35 >> 0xf;
            dVar36 = (double)*(float *)((int)((uVar18 & uVar32) << 2) + iVar26);
            if ((uVar29 & 1) != 0) {
              if (dVar36 == dVar39) {
                *pfVar33 = fVar15;
              }
              else {
                dVar42 = dVar40;
                if ((uVar24 & 1) == 0) {
                  dVar42 = dVar41;
                }
                *pfVar33 = (float)((double)(float)(dVar36 * dVar42) * dVar38);
                lVar23 = 0xe;
              }
              uVar18 = (ulonglong)((uint)uVar18 >> (uVar28 & 0x3f));
              pfVar33 = pfVar33 + 1;
              uVar24 = uVar35 >> (int)lVar23;
              dVar36 = (double)*(float *)((int)((uVar18 & uVar32) << 2) + iVar26);
            }
            uVar25 = uVar29 & 0xfffe;
            if (uVar25 != 0) {
              lVar22 = (ulonglong)(uVar25 - 1 >> 1) + 1;
              do {
                dVar42 = dVar39;
                if (dVar36 != dVar39) {
                  dVar42 = dVar40;
                  if ((uVar24 & 1) == 0) {
                    dVar42 = dVar41;
                  }
                  lVar23 = lVar23 + -1;
                  dVar42 = (double)(float)(dVar36 * dVar42);
                }
                uVar24 = (uint)uVar18 >> (uVar28 & 0x3f);
                dVar37 = (double)*(float *)((int)((uVar24 & uVar32) << 2) + iVar26);
                dVar36 = dVar39;
                if (dVar37 != dVar39) {
                  dVar36 = dVar40;
                  if ((uVar35 >> ((uint)lVar23 & 0x3f) & 1) == 0) {
                    dVar36 = dVar41;
                  }
                  lVar23 = lVar23 + -1;
                  dVar36 = (double)(float)(dVar37 * dVar36);
                }
                uVar18 = (ulonglong)(uVar24 >> (uVar28 & 0x3f));
                *pfVar33 = (float)(dVar42 * dVar38);
                pfVar33[1] = (float)(dVar36 * dVar38);
                pfVar33 = pfVar33 + 2;
                uVar24 = uVar35 >> ((uint)lVar23 & 0x3f);
                dVar36 = (double)*(float *)((int)((uVar18 & uVar32) << 2) + iVar26);
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
            }
            lVar22 = (ulonglong)*(uint *)(param_1 + 0x144) - (0xf - lVar23);
            iVar26 = (int)lVar22;
            *(int *)(param_1 + 0x144) = iVar26;
            if (lVar22 < 0) {
              uVar2 = *puVar3;
              *(ushort **)(param_1 + 0x148) = puVar3 + 1;
              *(int *)(param_1 + 0x144) = iVar26 + 0x10;
              *(int *)(param_1 + 0x140) = (int)(short)uVar2;
            }
            lVar23 = (ulonglong)*(uint *)(param_1 + 0x138) - (0xf - lVar23);
            *(int *)(param_1 + 0x138) = (int)lVar23;
            if (lVar23 < 0) goto LAB_82bdf47c;
            iVar31 = iVar31 + 1;
            uVar16 = uVar34;
            iVar26 = lbl_8329EC80;
          } while (iVar31 < iVar20);
        }
        if (!bVar12) goto LAB_82bdf488;
LAB_82bdf434:
        iVar27 = iVar30 + 1;
        if (iVar27 < param_2) {
          puVar19 = (undefined4 *)(iVar27 * 4 + param_4 + -4);
          for (iVar27 = param_2 - iVar27; iVar27 != 0; iVar27 = iVar27 + -1) {
            puVar19 = puVar19 + 1;
            *puVar19 = 7;
            iVar26 = lbl_8329EC80;
          }
        }
        pfVar33 = (float *)(iVar26 * iVar30 * 4 + param_5);
LAB_82bdf76c:
        uVar28 = *(int *)(param_1 + 0x15c) + *(int *)(param_1 + 0x150);
        fVar1 = (float)(dVar40 * dVar14);
        fVar10 = -fVar1;
        if ((uVar28 & 0x8000) != 0) {
          uVar28 = uVar28 + 1;
        }
        uVar4 = *(undefined4 *)(param_1 + 0x150);
        uVar5 = *(undefined4 *)(param_1 + 0x154);
        *(uint *)(param_1 + 0x150) = uVar28;
        *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x158);
        *(undefined4 *)(param_1 + 0x154) = uVar4;
        uVar29 = *(int *)(param_1 + 0x158) + uVar28;
        *(undefined4 *)(param_1 + 0x158) = uVar5;
        if ((uVar29 & 0x8000) != 0) {
          uVar29 = uVar29 + 1;
        }
        pfVar33 = pfVar33 + -1;
        uVar4 = *(undefined4 *)(param_1 + 0x150);
        *(uint *)(param_1 + 0x150) = uVar29;
        *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x158);
        lVar23 = 5;
        *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x154);
        *(undefined4 *)(param_1 + 0x154) = uVar4;
        do {
          fVar11 = fVar1;
          if ((uVar28 & 1) == 0) {
            fVar11 = fVar10;
          }
          pfVar33[1] = fVar11;
          fVar11 = fVar1;
          if ((uVar29 & 1) == 0) {
            fVar11 = fVar10;
          }
          pfVar33[2] = fVar11;
          fVar11 = fVar1;
          if ((uVar28 & 2) == 0) {
            fVar11 = fVar10;
          }
          pfVar33[3] = fVar11;
          fVar11 = fVar1;
          if ((uVar29 & 2) == 0) {
            fVar11 = fVar10;
          }
          uVar28 = (int)uVar28 >> 2;
          pfVar33 = pfVar33 + 4;
          *pfVar33 = fVar11;
          uVar29 = (int)uVar29 >> 2;
          lVar23 = lVar23 + -1;
          iVar26 = lbl_8329EC80;
        } while (lVar23 != 0);
      }
      else {
LAB_82bdf488:
        if ((iVar27 == 5) || (iVar27 == 6)) {
          uVar28 = 0;
          iVar20 = iVar26 * iVar30 * 4 + param_5;
          if (iVar27 == 6) {
            if (0 < iVar26) {
              piVar21 = (int *)(iVar20 + -4);
              lVar23 = (ulonglong)(iVar26 - 1U >> 2) + 1;
              do {
                piVar7 = piVar21 + 1;
                piVar8 = piVar21 + 2;
                piVar9 = piVar21 + 3;
                piVar21 = piVar21 + 4;
                uVar28 = (uint)(*piVar21 != 0) +
                         (uint)(*piVar9 != 0) + (uint)(*piVar8 != 0) + (*piVar7 != 0) + uVar28;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
              if (0x13 < uVar28) {
                uVar28 = 0x13;
              }
            }
            fVar1 = *(float *)(uVar28 * 4 + -0x7ce8c6a0);
          }
          else {
            dVar41 = dVar40 * dVar13;
            if (0 < iVar26) {
              pfVar33 = (float *)(iVar20 + 8);
              piVar21 = (int *)(iVar20 + -4);
              lVar23 = (ulonglong)(iVar26 - 1U >> 2) + 1;
              do {
                uVar29 = uVar28;
                if ((piVar21[1] != 0) && (uVar29 = uVar28 + 1, dVar41 < ABS((double)pfVar33[-2]))) {
                  uVar29 = uVar28 + 4;
                }
                uVar28 = uVar29;
                if ((piVar21[2] != 0) && (uVar28 = uVar29 + 1, dVar41 < ABS((double)pfVar33[-1]))) {
                  uVar28 = uVar29 + 4;
                }
                uVar29 = uVar28;
                if ((piVar21[3] != 0) && (uVar29 = uVar28 + 1, dVar41 < ABS((double)*pfVar33))) {
                  uVar29 = uVar28 + 4;
                }
                piVar21 = piVar21 + 4;
                uVar28 = uVar29;
                if ((*piVar21 != 0) && (uVar28 = uVar29 + 1, dVar41 < ABS((double)pfVar33[1]))) {
                  uVar28 = uVar29 + 4;
                }
                pfVar33 = pfVar33 + 4;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
              if (0x13 < uVar28) {
                uVar28 = 0x13;
              }
            }
            fVar1 = *(float *)(uVar28 * 4 + -0x7ce8c6f0);
          }
          fVar1 = (float)((double)fVar1 * dVar40);
          uVar28 = *(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x15c);
          fVar10 = -fVar1;
          if ((uVar28 & 0x8000) != 0) {
            uVar28 = uVar28 + 1;
          }
          uVar4 = *(undefined4 *)(param_1 + 0x154);
          *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x150);
          *(uint *)(param_1 + 0x150) = uVar28;
          uVar29 = *(int *)(param_1 + 0x158) + uVar28;
          *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x158);
          *(undefined4 *)(param_1 + 0x158) = uVar4;
          if ((uVar29 & 0x8000) != 0) {
            uVar29 = uVar29 + 1;
          }
          uVar4 = *(undefined4 *)(param_1 + 0x150);
          uVar5 = *(undefined4 *)(param_1 + 0x154);
          *(uint *)(param_1 + 0x150) = uVar29;
          *(undefined4 *)(param_1 + 0x154) = uVar4;
          *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x158);
          lVar23 = 5;
          *(undefined4 *)(param_1 + 0x158) = uVar5;
          iVar26 = lbl_8329EC80;
          pfVar33 = (float *)(lbl_8329EC80 * iVar30 * 4 + param_5);
          do {
            if ((double)*pfVar33 == dVar39) {
              fVar11 = fVar1;
              if ((uVar28 & 1) == 0) {
                fVar11 = fVar10;
              }
              *pfVar33 = fVar11;
            }
            if ((double)pfVar33[1] == dVar39) {
              fVar11 = fVar1;
              if ((uVar29 & 1) == 0) {
                fVar11 = fVar10;
              }
              pfVar33[1] = fVar11;
            }
            if ((double)pfVar33[2] == dVar39) {
              fVar11 = fVar1;
              if ((uVar28 & 2) == 0) {
                fVar11 = fVar10;
              }
              pfVar33[2] = fVar11;
            }
            if ((double)pfVar33[3] == dVar39) {
              fVar11 = fVar1;
              if ((uVar29 & 2) == 0) {
                fVar11 = fVar10;
              }
              pfVar33[3] = fVar11;
            }
            uVar28 = (int)uVar28 >> 2;
            uVar29 = (int)uVar29 >> 2;
            pfVar33 = pfVar33 + 4;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
        }
        if (iVar27 == 7) goto LAB_82bdf76c;
      }
      iVar30 = iVar30 + 1;
    } while (iVar30 < param_2);
    if (bVar12) {
      *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
    }
  }
  return;
}

