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
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82B661E0();
extern int fn_82B664D0();
extern int fn_82F691F0();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


undefined8 fn_82B66550(int *param_1)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  int *piVar6;
  longlong lVar4;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar5;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  float *pfVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint *puVar23;
  longlong lVar24;
  int *piVar25;
  int *piVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  uint *puStack_c0;
  
  uVar18 = (ulonglong)(uint)param_1[2];
  lVar24 = 0;
  puStack_c0 = (uint *)0x0;
  piVar6 = (int *)0x0;
  lVar21 = 0;
  puVar23 = (uint *)0x0;
  iVar8 = 0;
  lVar3 = fn_82B661E0(*(undefined4 *)(*param_1 + 0x68),*(undefined4 *)(param_1[1] + 0x68),
                        (~uVar18 & 0xffffffff) >> 0x10 & 1);
  if (((lVar3 == 0) ||
      (piVar6 = (int *)fn_82B661E0(*(undefined4 *)(*param_1 + 0x6c),
                                     *(undefined4 *)(param_1[1] + 0x6c),
                                     (~uVar18 & 0xffffffff) >> 0x11 & 1), piVar6 == (int *)0x0)) ||
     (lVar21 = fn_82B661E0(*(undefined4 *)(*param_1 + 0x70),*(undefined4 *)(param_1[1] + 0x70),
                             (~uVar18 & 0xffffffff) >> 0x12 & 1), lVar21 == 0)) {
    uVar28 = 0xffffffff80004005;
  }
  else {
    iVar1 = *piVar6;
    uVar20 = (ulonglong)*(uint *)lVar3 + lVar3;
    uVar9 = *(uint *)(param_1[1] + 0x70);
    uVar27 = (ulonglong)uVar9;
    uVar22 = (ulonglong)*(uint *)lVar21 + lVar21;
    uVar18 = uVar27 * 0xc;
    if (0x15555555 < uVar27) {
      uVar18 = 0xffffffffffffffff;
    }
    lVar4 = uVar18 + 4;
    if (0xfffffffb < (uVar18 & 0xffffffff)) {
      lVar4 = -1;
    }
    puVar7 = (uint *)fn_8265C9E0(lVar4);
    if (puVar7 == (uint *)0x0) {
      puVar23 = (uint *)0x0;
    }
    else {
      *puVar7 = uVar9;
      puVar23 = puVar7 + 1;
      if (-1 < (longlong)(uVar27 - 1)) {
        do {
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7 = puVar7 + 3;
          *puVar7 = 0;
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
      }
    }
    if (puVar23 != (uint *)0x0) {
      lVar4 = ((ulonglong)*(uint *)(*param_1 + 0x68) & 0xfffffff) << 4;
      if (0xfffffff < *(uint *)(*param_1 + 0x68)) {
        lVar4 = -1;
      }
      iVar8 = fn_8265C9E0(lVar4);
      if (iVar8 != 0) {
        uVar27 = lVar21 + 4;
        uVar18 = uVar27;
        if ((uVar27 & 0xffffffff) < (uVar22 & 0xffffffff)) {
          do {
            uVar12 = *(uint *)uVar18 + uVar18;
            if ((uVar18 + 4 & 0xffffffff) < (uVar12 & 0xffffffff)) {
              lVar4 = uVar18 - 4;
              lVar19 = (((uVar12 - (uVar18 + 4)) - 1 & 0xffffffff) >> 3) + 1;
              do {
                lVar4 = lVar4 + 8;
                puVar23[*(int *)lVar4 * 3 + 2] = puVar23[*(int *)lVar4 * 3 + 2] + 1;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            uVar18 = uVar12;
          } while ((uVar12 & 0xffffffff) < (uVar22 & 0xffffffff));
        }
        if ((uVar27 & 0xffffffff) < (uVar22 & 0xffffffff)) {
          dVar31 = (double)lbl_821AAD20;
          dVar33 = (double)lbl_82002AE0;
          dVar32 = (double)lbl_8200133C;
          do {
            uVar12 = uVar27 + 4;
            uVar27 = *(uint *)uVar27 + uVar27;
            uVar18 = uVar12;
            if ((uVar12 & 0xffffffff) < (uVar27 & 0xffffffff)) {
              do {
                iVar17 = *(int *)uVar18;
                if (puVar23[iVar17 * 3] == 0) {
                  if (puStack_c0 == (uint *)0x0) {
                    uVar18 = (longlong)*(int *)(param_1[1] + 0x6c) *
                             (longlong)*(int *)(param_1[1] + 0x68);
                    lVar24 = (uVar18 & 0xfffffff) << 4;
                    if (0xfffffff < (uVar18 & 0xffffffff)) {
                      lVar24 = -1;
                    }
                    uVar9 = fn_8265C9E0(lVar24);
                    puVar23[iVar17 * 3] = uVar9;
                    if (uVar9 == 0) goto LAB_82b66cd0;
                  }
                  else {
                    puVar23[iVar17 * 3] = *puStack_c0;
                    *puStack_c0 = 0;
                  }
                    /* WARNING: Subroutine does not return */
                  fn_82F691F0(puVar23[iVar17 * 3],0,
                               ((longlong)*(int *)(param_1[1] + 0x6c) *
                                (longlong)*(int *)(param_1[1] + 0x68) & 0xfffffffU) << 4);
                }
                uVar18 = uVar18 + 8;
              } while ((uVar18 & 0xffffffff) < (uVar27 & 0xffffffff));
            }
            lVar4 = 0;
            if (piVar6 + 1 < (int *)(iVar1 + (int)piVar6)) {
              piVar26 = piVar6 + 1;
              do {
                piVar25 = (int *)(*piVar26 + (int)piVar26);
                (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,lVar4,lVar24,iVar8);
                if ((lVar3 + 4U & 0xffffffff) < (uVar20 & 0xffffffff)) {
                  pfVar13 = (float *)(iVar8 + 8);
                  uVar18 = lVar3 + 4U;
                  do {
                    uVar5 = *(uint *)uVar18 + uVar18;
                    if ((uVar12 & 0xffffffff) < (uVar27 & 0xffffffff)) {
                      uVar10 = uVar12;
                      do {
                        if (piVar26 + 1 < piVar25) {
                          piVar11 = piVar26 + 1;
                          do {
                            iVar17 = puVar23[*(int *)uVar10 * 3] +
                                     *(int *)(param_1[1] + 0x68) * *piVar11 * 0x10;
                            if ((uVar18 + 4 & 0xffffffff) < (uVar5 & 0xffffffff)) {
                              lVar19 = uVar18 - 4;
                              lVar14 = (((uVar5 - (uVar18 + 4)) - 1 & 0xffffffff) >> 3) + 1;
                              do {
                                iVar16 = (int)lVar19;
                                iVar15 = *(int *)(iVar16 + 8) * 0x10;
                                fVar2 = (float)piVar11[1] * (float)((int *)uVar10)[1] *
                                        *(float *)(iVar16 + 0xc);
                                *(float *)(iVar15 + iVar17) =
                                     fVar2 * pfVar13[-2] + *(float *)(iVar15 + iVar17);
                                iVar15 = *(int *)(iVar16 + 8) * 0x10 + iVar17;
                                *(float *)(iVar15 + 4) =
                                     fVar2 * pfVar13[-1] + *(float *)(iVar15 + 4);
                                iVar15 = *(int *)(iVar16 + 8) * 0x10 + iVar17;
                                *(float *)(iVar15 + 8) = fVar2 * *pfVar13 + *(float *)(iVar15 + 8);
                                lVar19 = lVar19 + 8;
                                iVar15 = *(int *)lVar19 * 0x10 + iVar17;
                                *(float *)(iVar15 + 0xc) =
                                     fVar2 * pfVar13[1] + *(float *)(iVar15 + 0xc);
                                lVar14 = lVar14 + -1;
                              } while (lVar14 != 0);
                            }
                            piVar11 = piVar11 + 2;
                          } while (piVar11 < piVar25);
                        }
                        uVar10 = uVar10 + 8;
                      } while ((uVar10 & 0xffffffff) < (uVar27 & 0xffffffff));
                    }
                    pfVar13 = pfVar13 + 4;
                    uVar18 = uVar5;
                  } while ((uVar5 & 0xffffffff) < (uVar20 & 0xffffffff));
                }
                lVar4 = lVar4 + 1;
                piVar26 = piVar25;
              } while (piVar25 < (int *)(iVar1 + (int)piVar6));
            }
            if ((uVar12 & 0xffffffff) < (uVar27 & 0xffffffff)) {
              do {
                puVar7 = puVar23 + *(int *)uVar12 * 3;
                uVar9 = puVar7[2];
                puVar7[2] = (uint)((ulonglong)uVar9 - 1);
                if ((ulonglong)uVar9 - 1 == 0) {
                  iVar17 = param_1[1];
                  uVar18 = 0;
                  if (*(int *)(iVar17 + 0x6c) != 0) {
                    do {
                      iVar17 = *(int *)(iVar17 + 0x68);
                      iVar15 = *(int *)(*param_1 + 8);
                      iVar16 = iVar17 * (int)uVar18 * 0x10 + *puVar7;
                      if (iVar15 == 1) {
                        uVar9 = 0;
                        if (iVar17 != 0) {
                          pfVar13 = (float *)(iVar16 + -4);
                          do {
                            dVar30 = (double)pfVar13[1];
                            dVar29 = dVar31;
                            if ((dVar31 <= dVar30) && (dVar29 = dVar30, dVar33 <= dVar30)) {
                              dVar29 = dVar33;
                            }
                            dVar30 = (double)pfVar13[2];
                            pfVar13[1] = (float)dVar29;
                            dVar29 = dVar31;
                            if ((dVar31 <= dVar30) && (dVar29 = dVar33, dVar30 < dVar33)) {
                              dVar29 = dVar30;
                            }
                            dVar30 = (double)pfVar13[3];
                            pfVar13[2] = (float)dVar29;
                            dVar29 = dVar31;
                            if ((dVar31 <= dVar30) && (dVar29 = dVar33, dVar30 < dVar33)) {
                              dVar29 = dVar30;
                            }
                            dVar30 = (double)pfVar13[4];
                            pfVar13[3] = (float)dVar29;
                            dVar29 = dVar31;
                            if ((dVar31 <= dVar30) && (dVar29 = dVar30, dVar33 <= dVar30)) {
                              dVar29 = dVar33;
                            }
                            pfVar13 = pfVar13 + 4;
                            *pfVar13 = (float)dVar29;
                            uVar9 = uVar9 + 1;
                          } while (uVar9 < *(uint *)(param_1[1] + 0x68));
                        }
                      }
                      else if (iVar15 == 2) {
                        uVar9 = 0;
                        if (iVar17 != 0) {
                          pfVar13 = (float *)(iVar16 + -4);
                          do {
                            dVar30 = (double)pfVar13[1];
                            dVar29 = dVar32;
                            if ((dVar32 <= dVar30) && (dVar29 = dVar30, dVar33 <= dVar30)) {
                              dVar29 = dVar33;
                            }
                            dVar30 = (double)pfVar13[2];
                            pfVar13[1] = (float)dVar29;
                            dVar29 = dVar32;
                            if ((dVar32 <= dVar30) && (dVar29 = dVar33, dVar30 < dVar33)) {
                              dVar29 = dVar30;
                            }
                            dVar30 = (double)pfVar13[3];
                            pfVar13[2] = (float)dVar29;
                            dVar29 = dVar32;
                            if ((dVar32 <= dVar30) && (dVar29 = dVar33, dVar30 < dVar33)) {
                              dVar29 = dVar30;
                            }
                            dVar30 = (double)pfVar13[4];
                            pfVar13[3] = (float)dVar29;
                            dVar29 = dVar31;
                            if ((dVar31 <= dVar30) && (dVar29 = dVar30, dVar33 <= dVar30)) {
                              dVar29 = dVar33;
                            }
                            pfVar13 = pfVar13 + 4;
                            *pfVar13 = (float)dVar29;
                            uVar9 = uVar9 + 1;
                          } while (uVar9 < *(uint *)(param_1[1] + 0x68));
                        }
                      }
                      else if ((iVar15 == 3) && (uVar9 = 0, iVar17 != 0)) {
                        pfVar13 = (float *)(iVar16 + -4);
                        do {
                          dVar30 = (double)pfVar13[1];
                          dVar29 = dVar32;
                          if ((dVar32 <= dVar30) && (dVar29 = dVar30, dVar33 <= dVar30)) {
                            dVar29 = dVar33;
                          }
                          dVar30 = (double)pfVar13[2];
                          pfVar13[1] = (float)dVar29;
                          dVar29 = dVar32;
                          if ((dVar32 <= dVar30) && (dVar29 = dVar33, dVar30 < dVar33)) {
                            dVar29 = dVar30;
                          }
                          dVar30 = (double)pfVar13[3];
                          pfVar13[2] = (float)dVar29;
                          dVar29 = dVar32;
                          if ((dVar32 <= dVar30) && (dVar29 = dVar33, dVar30 < dVar33)) {
                            dVar29 = dVar30;
                          }
                          dVar30 = (double)pfVar13[4];
                          pfVar13[3] = (float)dVar29;
                          dVar29 = dVar32;
                          if ((dVar32 <= dVar30) && (dVar29 = dVar30, dVar33 <= dVar30)) {
                            dVar29 = dVar33;
                          }
                          pfVar13 = pfVar13 + 4;
                          *pfVar13 = (float)dVar29;
                          uVar9 = uVar9 + 1;
                        } while (uVar9 < *(uint *)(param_1[1] + 0x68));
                      }
                      piVar26 = (int *)param_1[1];
                      (**(code **)(*piVar26 + 8))
                                (piVar26,uVar18,*(int *)uVar12,
                                 ((longlong)piVar26[0x1a] * (longlong)(int)uVar18 & 0xfffffffU) *
                                 0x10 + (ulonglong)*puVar7);
                      iVar17 = param_1[1];
                      uVar18 = uVar18 + 1;
                    } while ((uVar18 & 0xffffffff) < (ulonglong)*(uint *)(iVar17 + 0x6c));
                  }
                  puVar7[1] = (uint)puStack_c0;
                  puStack_c0 = puVar7;
                }
                uVar12 = uVar12 + 8;
              } while ((uVar12 & 0xffffffff) < (uVar27 & 0xffffffff));
            }
            lVar24 = lVar24 + 1;
          } while ((uVar27 & 0xffffffff) < (uVar22 & 0xffffffff));
        }
        uVar28 = 0;
        goto LAB_82b66ce4;
      }
    }
LAB_82b66cd0:
    uVar28 = 0xffffffff8007000e;
  }
LAB_82b66ce4:
  if (puVar23 != (uint *)0x0) {
    fn_82B664D0(puVar23,3);
  }
  fn_8265CA20(lVar21);
  fn_8265CA20(piVar6);
  fn_8265CA20(lVar3);
  fn_8265CA20(iVar8);
  fn_8265CA20(0);
  return uVar28;
}

