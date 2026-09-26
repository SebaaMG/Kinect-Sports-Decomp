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
extern unsigned int *auStack_b4;
extern unsigned int *auStack_c0;
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82975B00();
extern int fn_82BA02A8();
extern unsigned int iStack_c4;
extern unsigned int iStack_d0;
extern unsigned int lbl_82005758;
extern unsigned int stack0xffffff48;


longlong fn_829A8088(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar12;
  undefined8 uVar11;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  uint *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  int *piVar28;
  int iVar29;
  uint uVar30;
  int *piVar31;
  uint *puVar32;
  ulonglong uVar33;
  int iStack_d0;
  uint *puStack_cc;
  uint *puStack_c8;
  int iStack_c4;
  uint auStack_c0 [3];
  undefined1 auStack_b4 [4];
  int aiStack_b0 [44];
  
  dVar7 = lbl_82005758;
  puVar20 = *(uint **)(param_1 + 0x104);
  uVar19 = *puVar20;
  uVar17 = (ulonglong)uVar19 & 0xfffff;
  if ((uVar19 & 0xfffff) != 0) {
    uVar12 = puVar20[1];
    uVar24 = 0;
    trapWord(6,uVar17,0);
    if ((int)(uVar12 / uVar17) != 0) {
      lVar26 = 0;
      lVar27 = 0;
      do {
        iStack_d0 = -1;
        puVar23 = (uint *)0x0;
        iStack_c4 = -1;
        iVar9 = -1;
        uVar25 = 0;
        puStack_c8 = (uint *)0x0;
        piVar31 = (int *)0x0;
        puStack_cc = (uint *)0x0;
        piVar28 = (int *)0x0;
        stack0xffffff48 = 0xffffffffffffffff;
        iVar29 = -1;
        if ((uVar19 & 0xfffff) != 0) {
          iVar22 = *(int *)(param_1 + 0x14);
          puVar16 = auStack_b4;
          piVar14 = &iStack_c4;
          lVar10 = (ulonglong)puVar20[2] + lVar27;
          uVar8 = uVar17;
          do {
            iVar1 = *(int *)lVar10;
            iVar21 = *(int *)(iVar1 * 4 + iVar22);
            uVar30 = *(uint *)(iVar21 + 0x10);
            if (uVar30 == 0) {
              iVar21 = *(int *)(iVar21 + 0x48);
              if ((iVar21 != -1) && (piVar31 == (int *)0x0)) {
                iVar3 = *(int *)(param_1 + 0x18);
                *(int *)(puVar16 + 4) = iVar1;
                piVar14[1] = iVar21;
                piVar31 = *(int **)(iVar21 * 4 + iVar3);
                goto LAB_829a82f4;
              }
            }
            else if (uVar30 == 1) {
              iVar21 = *(int *)(iVar21 + 0x48);
              if ((iVar21 != -1) && (piVar28 == (int *)0x0)) {
                iVar3 = *(int *)(param_1 + 0x18);
                *(int *)(puVar16 + 4) = iVar1;
                piVar14[1] = iVar21;
                piVar28 = *(int **)(iVar3 + iVar21 * 4);
                goto LAB_829a82f4;
              }
            }
            else if (uVar30 < 3) {
              if (iVar9 == -1) {
                iVar21 = *(int *)(iVar21 + 0x48);
                *(int *)(puVar16 + 4) = iVar1;
                piVar14[1] = -1;
                iVar9 = iVar1;
                iStack_d0 = iVar1;
                if (iVar21 != -1) {
                  puVar23 = *(uint **)(iVar21 * 4 + *(int *)(param_1 + 0x18));
                  uVar30 = *puVar23;
                  if ((uVar30 & 0xfff00000) == 0x10000000) {
                    uVar18 = 0;
                    if ((uVar30 & 0xfffff) != 0) {
                      iVar21 = 0;
                      do {
                        if (*(int *)(puVar23[4] + iVar21) == iVar1) {
                          iVar9 = *(int *)(uVar18 * 4 + puVar23[2]);
                          iStack_d0 = iVar9;
                          break;
                        }
                        uVar18 = uVar18 + 1;
                        iVar21 = iVar21 + 4;
                      } while (uVar18 < (uVar30 & 0xfffff));
                    }
                  }
                  else {
                    puVar23 = (uint *)0x0;
                  }
                }
                goto LAB_829a82f4;
              }
            }
            else if ((uVar30 == 3) && (iVar29 == -1)) {
              iVar21 = *(int *)(iVar21 + 0x48);
              *(int *)(puVar16 + 4) = iVar1;
              piVar14[1] = -1;
              iVar29 = iVar1;
              if (iVar21 != -1) {
                puStack_cc = *(uint **)(iVar21 * 4 + *(int *)(param_1 + 0x18));
                uVar30 = *puStack_cc;
                if ((uVar30 & 0xfff00000) == 0x10000000) {
                  uVar18 = 0;
                  if ((uVar30 & 0xfffff) != 0) {
                    iVar21 = 0;
                    do {
                      iVar9 = iStack_d0;
                      if (*(int *)(puStack_cc[4] + iVar21) == iVar1) {
                        iVar29 = *(int *)(uVar18 * 4 + puStack_cc[2]);
                        break;
                      }
                      uVar18 = uVar18 + 1;
                      iVar21 = iVar21 + 4;
                    } while (uVar18 < (uVar30 & 0xfffff));
                  }
                }
                else {
                  puStack_cc = (uint *)0x0;
                }
              }
LAB_829a82f4:
              puVar16 = puVar16 + 4;
              piVar14 = piVar14 + 1;
              uVar25 = uVar25 + 1;
            }
            uVar8 = uVar8 - 1;
            lVar10 = lVar10 + 4;
            puStack_c8 = puVar23;
            iStack_c4 = iVar29;
          } while (uVar8 != 0);
        }
        if (((uVar25 & 0xffffffff) == uVar17) && (1 < (uVar25 & 0xffffffff))) {
          bVar6 = false;
          bVar5 = false;
          if (piVar28 != (int *)0x0) {
            if (*piVar28 != 0x20500001) goto LAB_829a83bc;
            bVar5 = bVar6;
            if (((iVar9 != -1) && (iVar9 != *(int *)piVar28[2])) &&
               (iVar9 != ((int *)piVar28[2])[1])) {
              bVar5 = true;
            }
            if (iStack_c4 != -1) {
              if ((iStack_c4 != *(int *)piVar28[2]) && (iStack_c4 != ((int *)piVar28[2])[1])) {
                bVar5 = true;
              }
              if (iVar9 != -1) {
                iVar29 = *(int *)piVar28[2];
                iVar22 = ((int *)piVar28[2])[1];
                if (iStack_c4 == iVar9) {
                  if (iVar29 != iVar22) goto LAB_829a83bc;
                }
                else if (iVar29 == iVar22) {
LAB_829a83bc:
                  bVar5 = true;
                }
              }
            }
          }
          if (piVar31 != (int *)0x0) {
            if (*piVar31 != 0x10000001) goto LAB_829a85b0;
            iVar9 = *(int *)(*(int *)piVar31[2] * 4 + *(int *)(param_1 + 0x14));
            if (((*(uint *)(*(int *)(*(int *)(iVar9 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                 0x100) == 0) || (*(double *)(iVar9 + 0x20) != dVar7)) {
              bVar5 = true;
            }
          }
          if ((!bVar5) && (uVar30 = 0, (uVar25 & 0xffffffff) != 0)) {
            puVar23 = auStack_c0;
            do {
              uVar18 = *puVar23;
              if (uVar18 != 0xffffffff) {
                bVar5 = true;
                lVar10 = 0;
                uVar8 = uVar17;
                if ((uVar19 & 0xfffff) != 0) {
                  uVar33 = uVar17;
                  do {
                    iVar9 = *(int *)(*(int *)((int)((lVar26 + lVar10 & 0xffffffffU) << 2) +
                                             puVar20[2]) * 4 + *(int *)(param_1 + 0x14));
                    bVar5 = (bool)(*(uint *)(iVar9 + 0x4c) <= uVar18 &
                                  *(uint *)(param_1 + 0x100) <= *(uint *)(iVar9 + 0x50) & bVar5);
                    if (((puStack_c8 == (uint *)0x0) && (*(int *)(iVar9 + 0x10) == 2)) ||
                       ((puStack_cc == (uint *)0x0 && (*(int *)(iVar9 + 0x10) == 3)))) {
                      uVar8 = uVar8 - 1;
                    }
                    else {
                      bVar5 = (bool)(uVar18 <= *(uint *)(iVar9 + 0x54) & bVar5);
                    }
                    lVar10 = lVar10 + 1;
                    uVar33 = uVar33 - 1;
                  } while (uVar33 != 0);
                }
                puVar32 = auStack_c0;
                uVar33 = uVar25;
                do {
                  if (*puVar32 != 0xffffffff) {
                    uVar13 = 0;
                    iVar9 = *(int *)(*puVar32 * 4 + *(int *)(param_1 + 0x18));
                    uVar15 = *(uint *)(iVar9 + 4);
                    if (uVar15 != 0) {
                      iVar29 = 0;
                      do {
                        iVar22 = *(int *)(*(int *)(iVar29 + *(int *)(iVar9 + 8)) * 4 +
                                         *(int *)(param_1 + 0x14));
                        uVar2 = *(uint *)(iVar22 + 0x48);
                        if (((uVar18 < uVar2) && (uVar2 != 0xffffffff)) ||
                           (*(uint *)(iVar22 + 0x50) < uVar18)) {
                          bVar5 = false;
                        }
                        uVar13 = uVar13 + 1;
                        iVar29 = iVar29 + 4;
                      } while (uVar13 < uVar15);
                    }
                  }
                  puVar32 = puVar32 + 1;
                  uVar33 = uVar33 - 1;
                } while (uVar33 != 0);
                if (bVar5) {
                  uVar30 = auStack_c0[uVar30];
                  if ((uVar30 != 0xffffffff) && (1 < (uVar8 & 0xffffffff))) {
                    iVar9 = fn_82963998(0x74);
                    if (iVar9 == 0) {
                      iVar9 = 0;
                    }
                    else {
                      iVar9 = fn_829632A0();
                    }
                    if (iVar9 == 0) {
                      return -0x7ff8fff2;
                    }
                    lVar26 = fn_82963A30(iVar9,uVar8 & 0xffffffff000fffff | 0x70900000,
                                               (uVar8 & 0x7fffffff) << 1,uVar8,0);
                    if ((lVar26 < 0) ||
                       (lVar26 = fn_829632F0(iVar9,*(undefined4 *)(param_1 + 0x104)),
                       (int)lVar26 < 0)) goto LAB_829a8638;
                    uVar17 = 0;
                    if ((uVar8 & 0xffffffff) == 0) goto LAB_829a8700;
                    iVar29 = 0;
                    lVar26 = (uVar8 & 0x3fffffff) << 2;
                    goto LAB_829a8684;
                  }
                  break;
                }
              }
              uVar30 = uVar30 + 1;
              puVar23 = puVar23 + 1;
            } while ((ulonglong)uVar30 < (uVar25 & 0xffffffff));
          }
        }
LAB_829a85b0:
        uVar24 = uVar24 + 1;
        lVar26 = lVar26 + uVar17;
        lVar27 = ((ulonglong)uVar19 & 0xfffff) * 4 + lVar27;
      } while ((uVar24 & 0xffffffff) < uVar12 / uVar17);
    }
  }
  return 1;
LAB_829a8684:
  do {
    iVar22 = (int)lVar26;
    if (piVar28 == (int *)0x0) {
      if (iStack_c4 == -1) {
        if (iStack_d0 == -1) {
LAB_829a8944:
          uVar11 = 0x12d9;
          goto LAB_829a8948;
        }
        *(int *)(iVar29 + *(int *)(iVar9 + 8)) = iStack_d0;
        *(int *)(iVar22 + *(int *)(iVar9 + 8)) = iStack_d0;
      }
      else {
        if (iStack_d0 != -1) goto LAB_829a8944;
        *(int *)(iVar29 + *(int *)(iVar9 + 8)) = iStack_c4;
        *(int *)(iVar22 + *(int *)(iVar9 + 8)) = iStack_c4;
      }
    }
    else {
      *(undefined4 *)(iVar29 + *(int *)(iVar9 + 8)) = *(undefined4 *)piVar28[2];
      *(undefined4 *)(iVar22 + *(int *)(iVar9 + 8)) = *(undefined4 *)(piVar28[2] + 4);
    }
    uVar17 = uVar17 + 1;
    iVar29 = iVar29 + 4;
    lVar26 = lVar26 + 4;
  } while ((uVar17 & 0xffffffff) < (uVar8 & 0xffffffff));
LAB_829a8700:
  uVar24 = 0;
  uVar17 = 0;
  iVar29 = 0;
  piVar28 = aiStack_b0;
  do {
    iVar22 = *(int *)(*piVar28 * 4 + *(int *)(param_1 + 0x14));
    if (((puStack_c8 != (uint *)0x0) || (*(int *)(iVar22 + 0x10) != 2)) &&
       ((puStack_cc != (uint *)0x0 || (*(int *)(iVar22 + 0x10) != 3)))) {
      uVar24 = uVar24 + 1;
      *(int *)(*(int *)(iVar9 + 0x10) + iVar29) = *piVar28;
      iVar29 = iVar29 + 4;
    }
    if ((uVar8 & 0xffffffff) < (uVar24 & 0xffffffff)) {
      uVar11 = 0x12da;
LAB_829a8948:
      fn_82975B00(param_1,*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x3c),uVar11,
                        0xffffffff82051e7c);
      lVar26 = 1;
LAB_829a8638:
      fn_82BA02A8(iVar9);
      fn_829639F0(iVar9);
      return lVar26;
    }
    uVar17 = uVar17 + 1;
    piVar28 = piVar28 + 1;
  } while ((uVar17 & 0xffffffff) < (uVar25 & 0xffffffff));
  uVar19 = *(uint *)(iVar9 + 0xc);
  uVar12 = 0;
  if (uVar19 != 0) {
    iVar29 = 0;
    uVar18 = 1;
    do {
      uVar15 = uVar18;
      iVar22 = iVar29;
      if (uVar18 < uVar19) {
        do {
          iVar22 = iVar22 + 4;
          iVar1 = *(int *)(*(int *)(iVar29 + *(int *)(iVar9 + 0x10)) * 4 + *(int *)(param_1 + 0x14))
          ;
          iVar21 = *(int *)(*(int *)(iVar22 + *(int *)(iVar9 + 0x10)) * 4 + *(int *)(param_1 + 0x14)
                           );
          if (*(uint *)(iVar21 + 0x10) < *(uint *)(iVar1 + 0x10)) {
            iVar3 = *(int *)(iVar9 + 0x10);
            uVar4 = *(undefined4 *)(iVar22 + iVar3);
            *(undefined4 *)(iVar22 + iVar3) = *(undefined4 *)(iVar29 + iVar3);
            *(undefined4 *)(iVar29 + *(int *)(iVar9 + 0x10)) = uVar4;
          }
          if (*(int *)(iVar1 + 0x10) == *(int *)(iVar21 + 0x10)) {
            fn_82975B00(param_1,*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x3c),0x12db,
                              0xffffffff82037830);
            lVar26 = -0x7fffbffb;
            goto LAB_829a8638;
          }
          uVar19 = *(uint *)(iVar9 + 0xc);
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar19);
      }
      uVar12 = uVar12 + 1;
      uVar18 = uVar18 + 1;
      iVar29 = iVar29 + 4;
    } while (uVar12 < uVar19);
  }
  puVar20 = auStack_c0;
  do {
    if (*puVar20 != 0xffffffff) {
      **(undefined4 **)(*puVar20 * 4 + *(int *)(param_1 + 0x18)) = 0;
    }
    puVar20 = puVar20 + 1;
    uVar25 = uVar25 - 1;
  } while (uVar25 != 0);
  if (puStack_c8 != (uint *)0x0) {
    if (*puStack_c8 == 0x10000001) {
LAB_829a88ac:
      *puStack_c8 = 0;
    }
    else if (*puStack_c8 == 0x10000002) {
      piVar28 = (int *)puStack_c8[2];
      if ((*piVar28 == iStack_d0) && (piVar28[1] == iStack_c4)) {
        *puStack_c8 = 0;
      }
      if ((piVar28[1] == iStack_d0) && (*piVar28 == iStack_c4)) goto LAB_829a88ac;
    }
  }
  if (puStack_cc == (uint *)0x0) goto LAB_829a8910;
  if (*puStack_cc != 0x10000001) {
    if (*puStack_cc != 0x10000002) goto LAB_829a8910;
    piVar28 = (int *)puStack_cc[2];
    if ((*piVar28 == iStack_d0) && (piVar28[1] == iStack_c4)) {
      *puStack_cc = 0;
    }
    if ((piVar28[1] != iStack_d0) || (*piVar28 != iStack_c4)) goto LAB_829a8910;
  }
  *puStack_cc = 0;
LAB_829a8910:
  iVar22 = uVar30 * 4;
  iVar29 = *(int *)(*(int *)(param_1 + 0x18) + iVar22);
  if (iVar29 != 0) {
    fn_82BA02A8(iVar29);
    fn_829639F0(iVar29);
  }
  *(int *)(*(int *)(param_1 + 0x18) + iVar22) = iVar9;
  return 0;
}

