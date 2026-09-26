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
extern unsigned int *auStack_e4;
extern unsigned int *auStack_f8;
extern int fn_829632A0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82BA02A8();
extern int fn_82F691F0();
extern unsigned int iStack_140;


/* WARNING: Type propagation algorithm not settling */

longlong fn_8299C670(int param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  bool bVar18;
  uint uVar16;
  int *piVar17;
  uint uVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  uint uVar27;
  uint *puVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  int *piStack0000001c;
  int iStack_140;
  int aiStack_134 [15];
  undefined4 auStack_f8 [5];
  uint auStack_e4 [57];
  
  iStack_140 = 0;
  iVar10 = 0;
  uVar24 = 0;
  uVar27 = 0;
  do {
    iVar25 = *(int *)(uVar27 + *(int *)(param_1 + 0x230));
    piStack0000001c = param_2;
    if (((iVar25 != 0) && (*(int *)(iVar25 + 0xc) != 0)) &&
       (uVar26 = 0, *(int *)(param_1 + 0x228) != 0)) {
      iVar25 = 0;
LAB_8299c6d0:
      puVar28 = *(uint **)(iVar25 + *(int *)(param_1 + 0x234));
      if ((puVar28 == (uint *)0x0) || (uVar12 = *puVar28, uVar12 == 0)) goto LAB_8299c828;
      uVar6 = (ulonglong)uVar12 & 0xfffff;
      iVar23 = 0;
      uVar7 = -(ulonglong)(uVar26 < 6) & 1;
      if ((uVar12 & 0xfffff) == 0) goto LAB_8299c828;
      bVar18 = false;
      uVar29 = (ulonglong)puVar28[1];
      uVar30 = 0;
      trapWord(6,uVar6,0);
      iVar9 = *(int *)(uVar27 + *(int *)(param_1 + 0x230));
      if (*(int *)(iVar9 + 0xc) == 0) goto LAB_8299c828;
      do {
        if (uVar7 < uVar29 / uVar6) {
          lVar15 = (longlong)(int)uVar6 * (longlong)(int)uVar7;
          lVar8 = uVar29 / uVar6 - uVar7;
          do {
            lVar13 = 0;
            if ((uVar12 & 0xfffff) != 0) {
              uVar31 = uVar6;
              do {
                iVar11 = *(int *)(*(int *)(iVar9 + 0x10) + uVar30 * 4);
                iVar21 = *(int *)((int)((lVar15 + lVar13 & 0xffffffffU) << 2) + puVar28[2]);
                if (((iVar21 == iVar11) ||
                    (*(int *)(*(int *)(iVar21 * 4 + *(int *)(param_1 + 0x14)) + 0x38) == iVar11)) &&
                   (((uVar24 & 0xffffffff) < (uVar26 & 0xffffffff) &&
                    (((puVar1 = *(uint **)(uVar27 + *(int *)(param_1 + 0x234)),
                      puVar1 != (uint *)0x0 && (uVar19 = *puVar1, uVar19 != 0)) &&
                     ((uVar19 & 0xfff00000) != 0x11000000)))))) {
                  bVar18 = true;
                  iVar23 = iVar9;
                }
                lVar13 = lVar13 + 1;
                uVar31 = uVar31 - 1;
              } while (uVar31 != 0);
            }
            lVar8 = lVar8 + -1;
            lVar15 = lVar15 + uVar6;
          } while (lVar8 != 0);
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 < *(uint *)(*(int *)(uVar27 + *(int *)(param_1 + 0x230)) + 0xc));
      if (!bVar18) goto LAB_8299c828;
      if (param_2 != (int *)0x0) {
        iVar23 = *param_2;
        *param_2 = iVar23 + 1;
        *param_2 = iVar23 + 2;
        goto LAB_8299c828;
      }
      uVar27 = 0;
      aiStack_134[3] = -1;
      aiStack_134[4] = -1;
      if (uVar29 != 0) {
        uVar12 = *(uint *)(iVar23 + 0xc);
        iVar10 = 0;
        do {
          if ((ulonglong)uVar12 != 0) {
            piVar17 = *(int **)(iVar23 + 0x10);
            iVar25 = *(int *)(puVar28[2] + iVar10);
            piVar14 = aiStack_134 + uVar27;
            uVar24 = (ulonglong)uVar12;
            do {
              iVar9 = *piVar17;
              if ((iVar9 == iVar25) ||
                 (iVar9 == *(int *)(*(int *)(iVar25 * 4 + *(int *)(param_1 + 0x14)) + 0x38))) {
                uVar30 = 0;
                if (uVar27 != 0) {
                  piVar22 = aiStack_134;
                  do {
                    piVar22 = piVar22 + 1;
                    if (*piVar22 == iVar9) break;
                    uVar30 = uVar30 + 1;
                  } while (uVar30 < uVar27);
                }
                if (uVar30 == uVar27) {
                  piVar14 = piVar14 + 1;
                  *piVar14 = iVar9;
                  uVar27 = uVar27 + 1;
                }
              }
              piVar17 = piVar17 + 1;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          uVar29 = uVar29 - 1;
          iVar10 = iVar10 + 4;
        } while (uVar29 != 0);
      }
      iVar10 = fn_82963998(0x74);
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = fn_829632A0();
      }
      if (iVar10 == 0) {
        lVar8 = -0x7ff8fff2;
      }
      else {
        lVar8 = fn_82963A30(iVar10,uVar27 & 0xfffff | 0x10000000,uVar27,uVar27,0);
        if (-1 < lVar8) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(undefined4 *)(iVar10 + 0x10),0xff,uVar27 & 0x3fffffff);
        }
      }
      goto LAB_8299d028;
    }
LAB_8299c83c:
    uVar27 = uVar27 + 4;
    uVar24 = uVar24 + 1;
  } while (uVar27 < 0x18);
  uVar27 = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    iVar25 = 0;
    puVar28 = auStack_e4;
    do {
      piVar14 = *(int **)(*(int *)(param_1 + 0x230) + iVar25);
      if ((piVar14 != (int *)0x0) && (*piVar14 != 0)) {
        bVar18 = false;
        iVar23 = 0;
        uVar12 = 0;
        if (piVar14[3] != 0) {
          iVar11 = 0;
          iVar9 = *(int *)(param_1 + 0x14);
          do {
            if (*(int *)(*(int *)(*(int *)(iVar11 + piVar14[4]) * 4 + iVar9) + 0x10) == 3) {
              bVar18 = true;
              iVar23 = *(int *)(iVar11 + piVar14[4]);
            }
            uVar12 = uVar12 + 1;
            iVar11 = iVar11 + 4;
          } while (uVar12 < (uint)piVar14[3]);
          if (bVar18) {
            uVar30 = 0;
            uVar12 = 6;
            if (6 < *(uint *)(param_1 + 0x228)) {
              piVar14 = (int *)(*(int *)(param_1 + 0x234) + 0x18);
              do {
                piVar17 = (int *)*piVar14;
                if ((piVar17 != (int *)0x0) && (*piVar17 != 0)) {
                  uVar19 = piVar17[1];
                  uVar16 = 0;
                  if (uVar19 != 0) {
                    iVar11 = piVar17[2];
                    iVar21 = 0;
                    piVar22 = aiStack_134 + uVar30 + 4;
                    do {
                      if ((*(int *)(*(int *)(*(int *)(iVar11 + iVar21) * 4 + iVar9) + 0x38) ==
                           iVar23) || (*(int *)(iVar11 + iVar21) == iVar23)) {
                        if (0xf < uVar30) {
                          return -0x7fffbffb;
                        }
                        piVar22 = piVar22 + 1;
                        *piVar22 = (int)piVar17;
                        uVar30 = uVar30 + 1;
                      }
                      uVar16 = uVar16 + 1;
                      iVar21 = iVar21 + 4;
                    } while (uVar16 < uVar19);
                  }
                }
                uVar12 = uVar12 + 1;
                piVar14 = piVar14 + 1;
              } while (uVar12 < *(uint *)(param_1 + 0x228));
            }
            if (piStack0000001c != (int *)0x0) {
              uVar12 = 0;
              if (*(int *)(param_1 + 0xc) != 0) {
                piVar14 = *(int **)(param_1 + 0x18);
                do {
                  piVar17 = (int *)*piVar14;
                  if (((piVar17 != (int *)0x0) && (*piVar17 != 0)) && (piVar17[10] != 1)) {
                    uVar19 = 0;
                    if (piVar17[1] != 0) {
                      iVar11 = 0;
                      do {
                        if ((*(int *)(*(int *)(*(int *)(piVar17[2] + iVar11) * 4 + iVar9) + 0x38) ==
                             iVar23) || (*(int *)(piVar17[2] + iVar11) == iVar23)) {
                          if (0xf < uVar30) {
                            return -0x7fffbffb;
                          }
                          uVar30 = uVar30 + 1;
                        }
                        uVar19 = uVar19 + 1;
                        iVar11 = iVar11 + 4;
                      } while (uVar19 < (uint)piVar17[1]);
                    }
                  }
                  uVar12 = uVar12 + 1;
                  piVar14 = piVar14 + 1;
                } while (uVar12 < *(uint *)(param_1 + 0xc));
              }
              if (uVar30 == 0) goto LAB_8299cf64;
              *piStack0000001c = *piStack0000001c + 1;
            }
            if ((uVar30 != 0) && (piStack0000001c == (int *)0x0)) {
              if (0xb < *(uint *)(param_1 + 0x408)) {
                return 1;
              }
              iVar9 = fn_82963998(0x74);
              if (iVar9 == 0) {
                iVar9 = 0;
              }
              else {
                iVar9 = fn_829632A0();
              }
              iVar11 = fn_82963998(0x74);
              if (iVar11 == 0) {
                uVar12 = 0;
              }
              else {
                uVar12 = fn_829632A0();
              }
              if (((iVar9 == 0) || (uVar12 == 0)) ||
                 (uVar19 = *(uint *)(param_1 + 0x40c), 0x40 < uVar19)) {
                return -0x7ff8fff2;
              }
              iVar11 = *(int *)((uVar19 + 0xc3) * 4 + param_1);
              iVar21 = *(int *)((uVar19 + 0xc2) * 4 + param_1);
              iVar2 = *(int *)(iVar11 * 4 + *(int *)(param_1 + 0x14));
              *(undefined4 *)(iVar2 + 0x3c) = 0;
              *(undefined4 *)(iVar2 + 0x10) = 3;
              *(undefined4 *)(iVar2 + 0x38) = 0xffffffff;
              iVar2 = *(int *)(iVar21 * 4 + *(int *)(param_1 + 0x14));
              *(undefined4 *)(iVar2 + 0x10) = 4;
              *(undefined4 *)(iVar2 + 0x3c) = 0;
              *(undefined4 *)(iVar2 + 0x38) = 0xffffffff;
              *(int *)(param_1 + 0x40c) = *(int *)(param_1 + 0x40c) + 2;
              if (uVar30 != 0) {
                piVar14 = aiStack_134 + 5;
                do {
                  iVar2 = *piVar14;
                  uVar19 = 0;
                  if (*(int *)(iVar2 + 4) != 0) {
                    iVar20 = 0;
                    do {
                      iVar3 = *(int *)(*(int *)(iVar2 + 8) + iVar20);
                      iVar4 = *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x14));
                      if (*(int *)(iVar4 + 0x38) == iVar23) {
                        *(int *)(iVar4 + 0x38) = iVar11;
                      }
                      else if (iVar3 == iVar23) {
                        *(int *)(*(int *)(iVar2 + 8) + iVar20) = iVar11;
                      }
                      uVar19 = uVar19 + 1;
                      iVar20 = iVar20 + 4;
                    } while (uVar19 < *(uint *)(iVar2 + 4));
                  }
                  piVar14 = piVar14 + 1;
                  uVar30 = uVar30 - 1;
                } while (uVar30 != 0);
              }
              lVar8 = fn_82963A30(iVar9,0x10000001,1,1,0);
              if (lVar8 < 0) {
                return lVar8;
              }
              lVar8 = fn_82963A30(uVar12,0x10000001,1,1,0);
              if (lVar8 < 0) {
                return lVar8;
              }
              piVar14 = *(int **)(iVar9 + 0x10);
              puVar28 = puVar28 + 1;
              *puVar28 = uVar12;
              iStack_140 = iStack_140 + 1;
              *piVar14 = iVar21;
              **(int **)(iVar9 + 8) = iVar23;
              *(undefined4 *)(iVar9 + 0x28) = 1;
              **(int **)(uVar12 + 0x10) = iVar11;
              **(int **)(uVar12 + 8) = iVar21;
              *(undefined4 *)(iVar9 + 0x28) = 2;
              *(int *)((*(int *)(param_1 + 0x408) + 0xb2) * 4 + param_1) = iVar9;
              *(uint *)((*(int *)(param_1 + 0x408) + 0xb3) * 4 + param_1) = uVar12;
              *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + 2;
              *(int *)(*(int *)(param_1 + 0x224) * 4 + *(int *)(param_1 + 0x230)) = iVar9;
              *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 1;
            }
          }
        }
      }
LAB_8299cf64:
      uVar27 = uVar27 + 1;
      iVar25 = iVar25 + 4;
    } while (uVar27 < *(uint *)(param_1 + 0x224));
  }
  uVar27 = *(uint *)(param_1 + 0x228);
  if (uVar27 + iStack_140 < 0x201) {
    if (5 < uVar27) {
      iVar23 = uVar27 - 5;
      iVar25 = uVar27 << 2;
      iVar9 = (uVar27 + iStack_140) * 4;
      do {
        puVar5 = (undefined4 *)(iVar25 + *(int *)(param_1 + 0x234));
        iVar25 = iVar25 + -4;
        *(undefined4 *)(iVar9 + *(int *)(param_1 + 0x234)) = *puVar5;
        iVar9 = iVar9 + -4;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
    }
    if (iStack_140 != 0) {
      iVar23 = 0x18;
      iVar25 = iStack_140;
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x234) + iVar23) =
             *(undefined4 *)((int)auStack_f8 + iVar23);
        iVar23 = iVar23 + 4;
        iVar25 = iVar25 + -1;
      } while (iVar25 != 0);
    }
    lVar8 = 0;
    *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + iStack_140;
LAB_8299d028:
    if (iVar10 != 0) {
      fn_82BA02A8(iVar10);
      fn_829639F0(iVar10);
    }
  }
  else {
    lVar8 = -0x7fffbffb;
  }
  return lVar8;
LAB_8299c828:
  uVar26 = uVar26 + 1;
  iVar25 = iVar25 + 4;
  if ((ulonglong)*(uint *)(param_1 + 0x228) <= (uVar26 & 0xffffffff)) goto LAB_8299c83c;
  goto LAB_8299c6d0;
}

