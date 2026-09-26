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
extern unsigned int *auStack_100;
extern unsigned int *auStack_180;
extern unsigned int *auStack_f0;
extern int fn_8294AC48();
extern int fn_8294C890();
extern int fn_8294CF28();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200E890;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_154;
extern unsigned int uStack_160;
extern unsigned int uStack_174;


longlong fn_82956318(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  int iVar16;
  longlong lVar15;
  ulonglong *puVar18;
  ulonglong uVar17;
  int *piVar19;
  ulonglong uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  ulonglong *puVar24;
  int *piVar25;
  ulonglong uVar26;
  uint **ppuVar27;
  ulonglong uVar28;
  int iVar29;
  undefined4 *puVar30;
  ulonglong uVar31;
  uint *puVar32;
  uint uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  double dVar37;
  uint auStack_180 [3];
  undefined4 uStack_174;
  int aiStack_170 [4];
  ulonglong uStack_160;
  undefined4 uStack_154;
  uint *apuStack_150 [16];
  int aiStack_110 [4];
  ulonglong auStack_100 [2];
  ulonglong auStack_f0 [2];
  int aiStack_e0 [4];
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [36];
  
  aiStack_170[3] = 3;
  uVar23 = **(uint **)(param_1 + 0x104);
  auStack_180[0] = 0;
  uVar36 = (ulonglong)uVar23 & 0xfffff;
  aiStack_170[0] = 0;
  aiStack_170[1] = 1;
  aiStack_170[2] = 2;
  uVar31 = 0;
  puVar18 = (ulonglong *)0x0;
  bVar12 = false;
  iVar16 = fn_8294AC48(param_1,*(uint **)(param_1 + 0x104),0xffffffff82035f90,apuStack_150,
                         auStack_180,aiStack_110,aiStack_170,uVar36);
  bVar1 = iVar16 == 1;
  if (bVar1) {
    iVar16 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82035f30,apuStack_150,
                           auStack_180,aiStack_110,aiStack_170,uVar36);
  }
  if (iVar16 == 0) {
    puVar18 = (ulonglong *)0x0;
    uVar33 = 0;
    do {
      bVar11 = false;
      iVar16 = 0;
      if ((uVar23 & 0xfffff) == 0) {
LAB_82956484:
        puVar18 = auStack_f0 + (uVar33 & 0xfffffff) * -2;
        break;
      }
      uVar34 = uVar36;
      do {
        iVar29 = *(int *)(*(int *)((int)auStack_100 + (uVar33 * 4 + iVar16) * 4) * 4 +
                         *(int *)(param_1 + 0x14));
        if (((*(uint *)(*(int *)(*(int *)(iVar29 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100)
             == 0) || (*(int *)(iVar29 + 8) != -1)) {
LAB_82956460:
          bVar11 = true;
        }
        else {
          dVar37 = (double)lbl_821AAD20;
          if (bVar1) {
            dVar37 = (double)lbl_82002AE0;
          }
          if (*(double *)(iVar29 + 0x20) != dVar37) goto LAB_82956460;
        }
        iVar16 = iVar16 + 1;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
      if (!bVar11) goto LAB_82956484;
      uVar33 = uVar33 + 1;
    } while (uVar33 < 2);
    bVar11 = false;
    if ((uVar23 & 0xfffff) != 0) {
      piVar19 = aiStack_110;
      uVar34 = uVar36;
      do {
        iVar16 = *(int *)(*piVar19 * 4 + *(int *)(param_1 + 0x14));
        if (((*(uint *)(*(int *)(*(int *)(iVar16 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100)
             == 0) || (*(int *)(iVar16 + 8) != -1)) {
LAB_829564fc:
          bVar11 = true;
        }
        else {
          dVar37 = (double)lbl_82002AE0;
          if (bVar1) {
            dVar37 = (double)lbl_821AAD20;
          }
          if (*(double *)(iVar16 + 0x20) != dVar37) goto LAB_829564fc;
        }
        piVar19 = piVar19 + 1;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
      puVar18 = (ulonglong *)(-(uint)!bVar11 & (uint)puVar18);
    }
    if (puVar18 != (ulonglong *)0x0) {
      if ((uVar23 & 0xfffff) != 0) {
        iVar16 = *(int *)(param_1 + 0x14);
        puVar30 = &uStack_174;
        uVar34 = uVar36;
        puVar24 = puVar18;
        do {
          uVar28 = 0;
          iVar29 = *(int *)(*(int *)puVar24 * 4 + iVar16);
          if ((uVar31 & 0xffffffff) != 0) {
            piVar19 = aiStack_170;
            do {
              if (*(int *)(iVar29 + 0x48) == *piVar19) break;
              uVar28 = uVar28 + 1;
              piVar19 = piVar19 + 1;
            } while ((uVar28 & 0xffffffff) < (uVar31 & 0xffffffff));
          }
          if ((uVar28 & 0xffffffff) == (uVar31 & 0xffffffff)) {
            uVar31 = uVar31 + 1;
            puVar30 = puVar30 + 1;
            *puVar30 = *(undefined4 *)(iVar29 + 0x48);
          }
          puVar24 = (ulonglong *)((int)puVar24 + 4);
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
LAB_8295659c:
      uVar34 = (ulonglong)auStack_180[0];
      goto LAB_829565a0;
    }
LAB_8295651c:
    lVar15 = 1;
  }
  else {
    uVar23 = **(uint **)(param_1 + 0x104);
    uVar36 = (ulonglong)uVar23 & 0xfffff;
    lVar15 = fn_8294AC48(param_1,*(uint **)(param_1 + 0x104),0xffffffff82035d30,apuStack_150,
                           auStack_180,aiStack_110,aiStack_170,uVar36);
    bVar1 = (int)lVar15 != 1;
    if (!bVar1) {
      lVar15 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82035e90,
                             apuStack_150,auStack_180,aiStack_110,aiStack_170,uVar36);
    }
    dVar13 = lbl_82005758;
    dVar37 = lbl_82005710;
    if ((int)lVar15 == 0) {
      uVar34 = 0;
      if ((uVar23 & 0xfffff) != 0) {
        iVar16 = *(int *)(param_1 + 0x14);
        puVar30 = &uStack_174;
        puVar18 = auStack_100;
        do {
          iVar29 = *(int *)(puVar18 + 2);
          iVar10 = *(int *)(*(int *)(puVar18 + -2) * 4 + iVar16);
          iVar4 = *(int *)(*(int *)puVar18 * 4 + iVar16);
          if ((((iVar29 != *(int *)(puVar18 + 8)) ||
               (*(int *)(puVar18 + 4) != *(int *)(puVar18 + 10))) ||
              (*(int *)(puVar18 + 6) != *(int *)(puVar18 + 0xc))) ||
             (iVar29 != *(int *)(puVar18 + 4))) goto LAB_8295651c;
          iVar2 = *(int *)(param_1 + 0x10);
          iVar5 = *(int *)(*(int *)(puVar18 + 6) * 4 + *(int *)(param_1 + 0x14));
          if (((((*(uint *)(*(int *)(*(int *)(iVar10 + 4) * 4 + iVar2) + 4) & 0x100) == 0) ||
               ((*(uint *)(*(int *)(*(int *)(iVar4 + 4) * 4 + iVar2) + 4) & 0x100) == 0)) ||
              (((*(uint *)(*(int *)(*(int *)(iVar5 + 4) * 4 + iVar2) + 4) & 0x100) == 0 ||
               ((*(double *)(iVar10 + 0x20) != dVar13 ||
                (uStack_160 = (ulonglong)(int)((-(uint)bVar1 & 0xfffffffe) + 1),
                *(double *)(iVar4 + 0x20) != (double)(longlong)uStack_160)))))) ||
             (*(double *)(iVar5 + 0x20) != dVar37)) goto LAB_8295651c;
          iVar29 = *(int *)(iVar29 * 4 + *(int *)(param_1 + 0x14));
          if (*(int *)(iVar29 + 4) != *(int *)(param_1 + 0x88)) {
            bVar12 = true;
          }
          uVar28 = 0;
          if ((uVar31 & 0xffffffff) != 0) {
            piVar19 = aiStack_170;
            do {
              if (*(int *)(iVar29 + 0x48) == *piVar19) break;
              uVar28 = uVar28 + 1;
              piVar19 = piVar19 + 1;
            } while ((uVar28 & 0xffffffff) < (uVar31 & 0xffffffff));
          }
          if (((uVar28 & 0xffffffff) == (uVar31 & 0xffffffff)) && (!bVar12)) {
            uVar31 = uVar31 + 1;
            puVar30 = puVar30 + 1;
            *puVar30 = *(undefined4 *)(iVar29 + 0x48);
          }
          uVar34 = uVar34 + 1;
          puVar18 = (ulonglong *)((int)puVar18 + 4);
        } while ((uVar34 & 0xffffffff) < uVar36);
      }
      puVar18 = auStack_f0;
      goto LAB_8295659c;
    }
    if ((int)lVar15 == 1) {
      lVar15 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82035dd0,
                             apuStack_150,auStack_180,aiStack_110,aiStack_170,uVar36);
      dVar14 = lbl_8200E890;
      dVar13 = lbl_82005758;
      dVar37 = lbl_82005710;
      if (lVar15 == 0) {
        uVar34 = 0;
        if ((uVar23 & 0xfffff) != 0) {
          puVar30 = &uStack_174;
          iVar16 = 0;
          do {
            bVar1 = false;
            iVar29 = *(int *)((int)auStack_100 + iVar16);
            if ((((iVar29 != *(int *)((int)aiStack_e0 + iVar16)) ||
                 (iVar10 = *(int *)((int)auStack_f0 + iVar16),
                 iVar10 != *(int *)((int)aiStack_d0 + iVar16))) ||
                (iVar4 = *(int *)((int)aiStack_c0 + iVar16),
                iVar4 != *(int *)((int)aiStack_a0 + iVar16))) ||
               (iVar2 = *(int *)((int)aiStack_b0 + iVar16),
               iVar2 != *(int *)((int)aiStack_90 + iVar16))) goto LAB_8295651c;
            bVar11 = false;
            iVar5 = *(int *)(iVar4 * 4 + *(int *)(param_1 + 0x14));
            iVar6 = *(int *)(iVar2 * 4 + *(int *)(param_1 + 0x14));
            iVar7 = *(int *)(*(int *)(iVar5 + 4) * 4 + *(int *)(param_1 + 0x10));
            iVar8 = *(int *)(*(int *)(iVar6 + 4) * 4 + *(int *)(param_1 + 0x10));
            if ((((iVar4 == iVar10) && ((*(uint *)(iVar8 + 4) & 0x100) != 0)) &&
                (*(double *)(iVar6 + 0x20) == dVar14)) ||
               (((iVar2 == iVar10 && ((*(uint *)(iVar7 + 4) & 0x100) != 0)) &&
                (*(double *)(iVar5 + 0x20) == dVar14)))) {
              bVar11 = true;
            }
            puVar18 = auStack_f0;
            if (!bVar11) {
              iVar4 = *(int *)(iVar5 + 0x38);
              iVar2 = *(int *)(iVar29 * 4 + *(int *)(param_1 + 0x14));
              if ((((iVar4 == iVar29) || ((iVar4 != -1 && (*(int *)(iVar2 + 0x38) == iVar4)))) &&
                  (*(uint *)(iVar5 + 0x3c) == (*(uint *)(iVar2 + 0x3c) ^ 0x80000))) &&
                 (((*(uint *)(iVar8 + 4) & 0x100) != 0 && (*(double *)(iVar6 + 0x20) == dVar13)))) {
                bVar11 = true;
              }
              iVar4 = *(int *)(iVar6 + 0x38);
              if (((iVar4 == iVar29) || ((iVar4 != -1 && (*(int *)(iVar2 + 0x38) == iVar4)))) &&
                 ((*(uint *)(iVar6 + 0x3c) == (*(uint *)(iVar2 + 0x3c) ^ 0x80000) &&
                  (((*(uint *)(iVar7 + 4) & 0x100) != 0 && (*(double *)(iVar5 + 0x20) == dVar13)))))
                 ) {
                bVar11 = true;
              }
              bVar1 = true;
              if (!bVar11) goto LAB_8295651c;
              puVar18 = auStack_100;
            }
            iVar4 = *(int *)(param_1 + 0x14);
            iVar2 = *(int *)(*(int *)((int)aiStack_110 + iVar16) * 4 + iVar4);
            if (!bVar1) {
              iVar10 = iVar29;
            }
            iVar29 = *(int *)(iVar10 * 4 + iVar4);
            if (((((*(uint *)(*(int *)(*(int *)(iVar2 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                   0x100) == 0) || (*(double *)(iVar2 + 0x20) != dVar37)) ||
                ((*(uint *)(*(int *)(*(int *)(iVar29 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                 0x100) == 0)) || (*(double *)(iVar29 + 0x20) != dVar13)) goto LAB_8295651c;
            iVar29 = *(int *)(*(int *)((int)puVar18 + iVar16) * 4 + iVar4);
            if (*(int *)(iVar29 + 4) != *(int *)(param_1 + 0x88)) {
              bVar12 = true;
            }
            uVar28 = 0;
            if ((uVar31 & 0xffffffff) != 0) {
              piVar19 = aiStack_170;
              do {
                if (*(int *)(iVar29 + 0x48) == *piVar19) break;
                uVar28 = uVar28 + 1;
                piVar19 = piVar19 + 1;
              } while ((uVar28 & 0xffffffff) < (uVar31 & 0xffffffff));
            }
            if (((uVar28 & 0xffffffff) == (uVar31 & 0xffffffff)) && (!bVar12)) {
              uVar31 = uVar31 + 1;
              puVar30 = puVar30 + 1;
              *puVar30 = *(undefined4 *)(iVar29 + 0x48);
            }
            uVar34 = uVar34 + 1;
            iVar16 = iVar16 + 4;
          } while ((uVar34 & 0xffffffff) < uVar36);
        }
        goto LAB_8295659c;
      }
      puVar32 = (uint *)0x0;
      uStack_160 = uStack_160 & 0xffffffff;
      if (((*(uint *)(param_1 + 0x6c) & 0x100) == 0) ||
         ((iVar16 = fn_8294C890(param_1,&uStack_160,apuStack_150,auStack_180), iVar16 != 0 &&
          (iVar16 = fn_8294CF28(param_1,&uStack_160,apuStack_150,auStack_180), iVar16 != 0)))) {
        puVar22 = *(uint **)(param_1 + 0x104);
        uVar34 = 1;
        apuStack_150[0] = puVar22;
      }
      else {
        uVar34 = (ulonglong)auStack_180[0];
        puVar22 = (((U64)(uStack_160) >> 0) & 0xFFFFFFFF);
        puVar32 = (((U64)(uStack_160) >> 0) & 0xFFFFFFFF);
      }
      dVar37 = lbl_82005758;
      if ((puVar22 != (uint *)0x0) && (uVar23 = *puVar22, (uVar23 & 0xfff00000) == 0x70b00000)) {
        uVar36 = (ulonglong)uVar23 & 0xfffff;
        uVar33 = 0;
        lVar15 = 0;
        uVar28 = uVar36;
        do {
          uVar17 = 0;
          if ((uVar23 & 0xfffff) != 0) {
            iVar16 = *(int *)(param_1 + 0x14);
            puVar18 = &uStack_160;
            do {
              iVar10 = (int)((lVar15 + uVar17 & 0xffffffff) << 2);
              puVar9 = *(uint **)(*(int *)(puVar22[2] + iVar10) * 4 + iVar16);
              iVar29 = *(int *)(*(int *)((int)((uVar28 + uVar17 & 0xffffffff) << 2) + puVar22[2]) *
                                4 + iVar16);
              if ((puVar9[0xf] & 0x80000) == 0) {
                uVar21 = *puVar9 & 4;
              }
              else {
                uVar21 = *puVar9 & 8;
              }
              if ((((uVar21 == 0) ||
                   ((*(uint *)(*(int *)(*(int *)(iVar29 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                    0x100) == 0)) || (*(double *)(iVar29 + 0x20) != dVar37)) ||
                 (*(int *)(iVar29 + 8) != -1)) break;
              uVar21 = puVar9[1];
              uVar3 = *(uint *)(param_1 + 0x88);
              *(undefined4 *)puVar18 = *(undefined4 *)(iVar10 + puVar22[2]);
              if (uVar21 != uVar3) {
                bVar12 = true;
              }
              uVar17 = uVar17 + 1;
              puVar18 = (ulonglong *)((int)puVar18 + 4);
            } while ((uVar17 & 0xffffffff) < uVar36);
          }
          if ((uVar17 & 0xffffffff) == uVar36) {
            if ((uVar23 & 0xfffff) != 0) {
              iVar16 = *(int *)(param_1 + 0x14);
              puVar30 = &uStack_174;
              piVar19 = (int *)(uVar33 * (int)uVar36 * 4 + puVar22[2]);
              uVar28 = uVar36;
              do {
                iVar29 = *(int *)(*piVar19 * 4 + iVar16);
                if (*(int *)(iVar29 + 0x38) == -1) {
                  uVar17 = 0;
                  if ((uVar31 & 0xffffffff) != 0) {
                    piVar25 = aiStack_170;
                    do {
                      if (*(int *)(iVar29 + 0x48) == *piVar25) break;
                      uVar17 = uVar17 + 1;
                      piVar25 = piVar25 + 1;
                    } while ((uVar17 & 0xffffffff) < (uVar31 & 0xffffffff));
                  }
                  if (((uVar17 & 0xffffffff) == (uVar31 & 0xffffffff)) && (!bVar12)) {
                    uVar31 = uVar31 + 1;
                    puVar30 = puVar30 + 1;
                    *puVar30 = *(undefined4 *)(iVar29 + 0x48);
                  }
                }
                else {
                  bVar12 = true;
                }
                piVar19 = piVar19 + 1;
                uVar28 = uVar28 - 1;
              } while (uVar28 != 0);
            }
            break;
          }
          uVar33 = uVar33 + 1;
          uVar28 = uVar28 - uVar36;
          lVar15 = lVar15 + uVar36;
        } while (uVar33 < 2);
        if (uVar33 == 2) goto LAB_8295651c;
        puVar18 = &uStack_160;
        lVar15 = 0;
      }
      if (puVar32 != (uint *)0x0) {
        fn_82BA02A8(puVar32);
        fn_829639F0(puVar32);
      }
    }
    else {
      uVar34 = (ulonglong)auStack_180[0];
    }
    if ((int)lVar15 != 0) {
      return lVar15;
    }
LAB_829565a0:
    uVar28 = 0;
    if ((uVar31 & 0xffffffff) != 0) {
      piVar19 = aiStack_170;
      do {
        if ((*piVar19 == -1) ||
           (puVar32 = *(uint **)(*piVar19 * 4 + *(int *)(param_1 + 0x18)),
           (*puVar32 & 0xf0000000) == 0x60000000)) goto LAB_82956ecc;
        uVar26 = (ulonglong)puVar32[3];
        uVar17 = 0;
        puVar24 = puVar18;
        for (uVar20 = uVar36; uVar20 != 0; uVar20 = uVar20 - 1) {
          if (uVar26 != 0) {
            iVar16 = 0;
            uVar35 = uVar26;
            do {
              if (*(int *)(iVar16 + puVar32[4]) == *(int *)puVar24) {
                uVar17 = uVar17 + 1;
              }
              iVar16 = iVar16 + 4;
              uVar35 = uVar35 - 1;
            } while (uVar35 != 0);
          }
          puVar24 = (ulonglong *)((int)puVar24 + 4);
        }
        if ((uVar17 & 0xffffffff) != uVar26) {
          bVar12 = true;
          break;
        }
        uVar28 = uVar28 + 1;
        piVar19 = piVar19 + 1;
      } while ((uVar28 & 0xffffffff) < (uVar31 & 0xffffffff));
    }
    if (bVar12) {
LAB_82956ecc:
      iVar16 = fn_82963998(0x74);
      if (iVar16 == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = fn_829632A0();
      }
      if (iVar16 == 0) goto LAB_8295651c;
      lVar15 = fn_82963A30(iVar16,uVar36 | 0x10000000,uVar36,uVar36,0);
      if ((lVar15 < 0) ||
         (lVar15 = fn_829632F0(iVar16,*(undefined4 *)(param_1 + 0x104)), lVar15 < 0)) {
        fn_82BA02A8(iVar16);
        fn_829639F0(iVar16);
        return lVar15;
      }
      fn_82F68CC0(*(undefined4 *)(iVar16 + 8),puVar18,uVar36 << 2);
      fn_82F68CC0(*(undefined4 *)(iVar16 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10),
                   uVar36 << 2);
      if (uVar36 != 0) {
        iVar29 = 0;
        do {
          piVar19 = (int *)(iVar29 + *(int *)(iVar16 + 0x10));
          iVar29 = iVar29 + 4;
          iVar10 = *(int *)(*piVar19 * 4 + *(int *)(param_1 + 0x14));
          *(uint *)(iVar10 + 0x3c) = *(uint *)(iVar10 + 0x3c) | 0x200;
          uVar36 = uVar36 - 1;
        } while (uVar36 != 0);
      }
      if (uVar34 != 0) {
        puVar30 = &uStack_154;
        do {
          puVar30 = puVar30 + 1;
          *(undefined4 *)*puVar30 = 0;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
      iVar29 = *(int *)(*(int *)(param_1 + 0x100) * 4 + *(int *)(param_1 + 0x18));
      if (iVar29 != 0) {
        fn_82BA02A8(iVar29);
        fn_829639F0(iVar29);
      }
      *(int *)(*(int *)(param_1 + 0x100) * 4 + *(int *)(param_1 + 0x18)) = iVar16;
    }
    else {
      uVar23 = 0;
      uVar33 = 0xffffffff;
      if (uVar36 != 0) {
        uVar28 = uVar36;
        puVar24 = puVar18;
        do {
          iVar16 = *(int *)(*(int *)puVar24 * 4 + *(int *)(param_1 + 0x14));
          uVar21 = *(uint *)(iVar16 + 0x58);
          if (uVar23 < uVar21) {
            uVar23 = uVar21;
          }
          uVar21 = *(uint *)(iVar16 + 0x54);
          if (uVar21 < uVar33) {
            uVar33 = uVar21;
          }
          puVar24 = (ulonglong *)((int)puVar24 + 4);
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
      uVar28 = (ulonglong)*(uint *)(param_1 + 0xc);
      if (uVar28 != 0) {
        piVar19 = *(int **)(param_1 + 0x18);
        do {
          puVar32 = (uint *)*piVar19;
          if (*puVar32 != 0) {
            uVar17 = 0;
            if (uVar34 != 0) {
              ppuVar27 = apuStack_150;
              do {
                if (puVar32 == *ppuVar27) break;
                uVar17 = uVar17 + 1;
                ppuVar27 = ppuVar27 + 1;
              } while ((uVar17 & 0xffffffff) < uVar34);
            }
            if (((uVar17 & 0xffffffff) == uVar34) && (uVar17 = (ulonglong)puVar32[1], uVar17 != 0))
            {
              piVar25 = (int *)puVar32[2];
              do {
                puVar24 = puVar18;
                for (uVar20 = uVar36; uVar20 != 0; uVar20 = uVar20 - 1) {
                  if ((*(int *)puVar24 == *piVar25) ||
                     (*(int *)(*(int *)(*piVar25 * 4 + *(int *)(param_1 + 0x14)) + 0x38) ==
                      *(int *)puVar24)) {
                    bVar12 = true;
                  }
                  puVar24 = (ulonglong *)((int)puVar24 + 4);
                }
                uVar17 = uVar17 - 1;
                piVar25 = piVar25 + 1;
              } while (uVar17 != 0);
            }
          }
          uVar28 = uVar28 - 1;
          piVar19 = piVar19 + 1;
        } while (uVar28 != 0);
        if (bVar12) goto LAB_82956ecc;
      }
      if ((uVar31 & 0xffffffff) != 0) {
        piVar19 = aiStack_170;
        do {
          iVar16 = *piVar19;
          uVar33 = 0;
          uVar23 = *(uint *)(*(int *)(param_1 + 0x104) + 0xc);
          puVar32 = *(uint **)(iVar16 * 4 + *(int *)(param_1 + 0x18));
          if (uVar23 != 0) {
            do {
              uVar21 = 0;
              if (puVar32[3] != 0) {
                iVar29 = 0;
                do {
                  if (*(int *)(iVar29 + puVar32[4]) == *(int *)((int)puVar18 + uVar33 * 4)) {
                    *(undefined4 *)(iVar29 + puVar32[4]) =
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + uVar33 * 4);
                    iVar10 = *(int *)(*(int *)(iVar29 + puVar32[4]) * 4 + *(int *)(param_1 + 0x14));
                    *(uint *)(iVar10 + 0x3c) = *(uint *)(iVar10 + 0x3c) | 0x200;
                    *(int *)(*(int *)(*(int *)(iVar29 + puVar32[4]) * 4 + *(int *)(param_1 + 0x14))
                            + 0x48) = iVar16;
                  }
                  uVar21 = uVar21 + 1;
                  iVar29 = iVar29 + 4;
                } while (uVar21 < puVar32[3]);
              }
              uVar33 = uVar33 + 1;
            } while (uVar33 < uVar23);
          }
          if (uVar34 != 0) {
            ppuVar27 = apuStack_150;
            uVar36 = uVar34;
            do {
              if (puVar32 == *ppuVar27) {
                *ppuVar27 = (uint *)0x0;
              }
              ppuVar27 = ppuVar27 + 1;
              uVar36 = uVar36 - 1;
            } while (uVar36 != 0);
          }
          uVar31 = uVar31 - 1;
          piVar19 = piVar19 + 1;
        } while (uVar31 != 0);
      }
      if (uVar34 != 0) {
        ppuVar27 = apuStack_150;
        do {
          if (*ppuVar27 != (uint *)0x0) {
            **ppuVar27 = 0;
          }
          ppuVar27 = ppuVar27 + 1;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
    }
    lVar15 = 0;
  }
  return lVar15;
}

