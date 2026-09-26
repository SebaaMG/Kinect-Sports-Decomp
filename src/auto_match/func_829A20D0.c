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
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82963FA8();
extern int fn_829644B8();
extern int fn_82964628();
extern int fn_82975B00();
extern int fn_82997E38();
extern int fn_8299D3A0();
extern int fn_8299D5C0();
extern int fn_82BA02A8();
extern unsigned int iStack_180;
extern unsigned int iStack_190;
extern unsigned int lbl_82005710;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;


longlong fn_829A20D0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar11;
  longlong lVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  undefined8 uVar30;
  int iStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  int iStack_180;
  int aiStack_170 [8];
  undefined1 auStack_150 [16];
  uint auStack_140 [4];
  uint auStack_130 [4];
  int aiStack_120 [72];
  
  uVar17 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar14 = 0;
    do {
      iVar11 = *(int *)(*(int *)(param_1 + 0x14) + iVar14);
      *(undefined4 *)(iVar11 + 0x30) = 0;
      if (*(int *)(iVar11 + 4) == *(int *)(param_1 + 0x88)) {
        *(undefined4 *)(iVar11 + 0xc) = 0xffffffff;
      }
      uVar17 = uVar17 + 1;
      iVar14 = iVar14 + 4;
    } while (uVar17 < *(uint *)(param_1 + 8));
  }
  uVar17 = *(uint *)(param_1 + 0x4c);
  if (uVar17 < *(uint *)(param_1 + 0x228)) {
    iVar14 = uVar17 << 2;
    do {
      piVar18 = *(int **)(*(int *)(param_1 + 0x234) + iVar14);
      if (((piVar18 != (int *)0x0) && (*piVar18 != 0)) && (uVar19 = 0, piVar18[3] != 0)) {
        iVar11 = 0;
        do {
          uVar19 = uVar19 + 1;
          piVar6 = (int *)(iVar11 + piVar18[4]);
          iVar11 = iVar11 + 4;
          *(uint *)(*(int *)(*piVar6 * 4 + *(int *)(param_1 + 0x14)) + 0x48) = uVar17;
        } while (uVar19 < (uint)piVar18[3]);
      }
      uVar17 = uVar17 + 1;
      iVar14 = iVar14 + 4;
    } while (uVar17 < *(uint *)(param_1 + 0x228));
  }
  uStack_184 = *(uint *)(param_1 + 0x228);
  uStack_18c = *(uint *)(param_1 + 0x4c);
  uVar30 = lbl_82005710;
  uVar17 = uStack_184;
  if (uStack_18c < uStack_184) {
    do {
      iVar14 = 0;
      puVar4 = *(uint **)(uStack_18c * 4 + *(int *)(param_1 + 0x234));
      if ((puVar4 != (uint *)0x0) && (*puVar4 != 0)) {
        iVar11 = fn_82963998(0x74);
        if (iVar11 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = fn_829632A0();
        }
        iStack_190 = iVar11;
        if (iVar11 != 0) {
          lVar10 = fn_82963D50(iVar11,puVar4);
          if (lVar10 < 0) goto LAB_829a2bb4;
          if (*(uint *)(param_1 + 0x228) < 0x200) {
            bVar23 = false;
            bVar9 = false;
            if (((*puVar4 & 0xfff00000) == 0x50000000) && (puVar4[3] == 1)) {
              iVar13 = *(int *)(*(int *)puVar4[4] * 4 + *(int *)(param_1 + 0x14));
              if (*(int *)(iVar13 + 0x10) != 3) goto LAB_829a240c;
              fn_8299D5C0(param_1,*(undefined4 *)(param_1 + 0x234),uStack_18c,uStack_184,
                                (int *)puVar4[4],1,auStack_150,&uStack_188);
              bVar8 = false;
              if (iStack_180 == 0) goto LAB_829a2484;
              iVar12 = fn_82964628(uVar30,param_1,*(undefined4 *)(param_1 + 0x88),0,3);
              if (iVar12 == -1) goto LAB_829a2400;
              iVar15 = *(int *)(iVar12 * 4 + *(int *)(param_1 + 0x14));
              fn_82963FA8(iVar15,iVar13);
              uVar1 = *(undefined4 *)(param_1 + 0x88);
              *(undefined4 *)(iVar15 + 0x3c) = 0;
              *(undefined4 *)(iVar15 + 0x10) = 3;
              *(undefined4 *)(iVar15 + 4) = uVar1;
              iVar13 = fn_82963998(0x74);
              if (iVar13 == 0) {
                iVar13 = 0;
              }
              else {
                iVar13 = fn_829632A0();
              }
              if (iVar13 == 0) goto LAB_829a2400;
              lVar10 = fn_82963A30(iVar13,0x10000001,1,1,0);
              if ((lVar10 < 0) || (lVar10 = fn_829632F0(iVar13,puVar4), lVar10 < 0)) {
                fn_82BA02A8(iVar13);
                goto LAB_829a2bb0;
              }
              **(undefined4 **)(iVar13 + 0x10) = *(undefined4 *)puVar4[4];
              **(int **)(iVar13 + 8) = iVar12;
              **(int **)(iVar11 + 0x10) = iVar12;
              *(int *)(*(int *)(param_1 + 0x228) * 4 + *(int *)(param_1 + 0x234)) = iVar11;
              *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
              iVar12 = fn_829644B8(param_1);
              if ((iVar12 < 0) || (0x1ff < *(uint *)(param_1 + 0x228))) goto LAB_829a2400;
              *(int *)(*(uint *)(param_1 + 0x228) * 4 + *(int *)(param_1 + 0x234)) = iVar13;
              *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
              iVar13 = fn_829644B8(param_1,iVar13);
              if (iVar13 < 0) goto LAB_829a2400;
            }
            else {
LAB_829a240c:
              bVar8 = false;
              if (((*puVar4 & 0xfff00000) == 0x10000000) &&
                 (iVar13 = fn_82997E38(param_1,puVar4), iVar13 != 0)) {
                bVar23 = true;
                uVar17 = 0;
                if (puVar4[3] != 0) {
                  iVar13 = 0;
                  bVar23 = true;
                  do {
                    piVar18 = (int *)(puVar4[4] + iVar13);
                    uVar17 = uVar17 + 1;
                    iVar13 = iVar13 + 4;
                    bVar23 = (bool)(*(int *)(*(int *)(*piVar18 * 4 + *(int *)(param_1 + 0x14)) +
                                            0x3c) == 0 & bVar23);
                  } while (uVar17 < puVar4[3]);
                  bVar8 = bVar23;
                  if (!bVar23) goto LAB_829a2484;
                }
                fn_82BA02A8(iVar11);
                fn_829639F0(iVar11);
                iVar11 = 0;
              }
              else {
LAB_829a2484:
                bVar23 = bVar8;
                iVar13 = fn_829644B8(param_1,iVar11);
                if (iVar13 < 0) goto LAB_829a2400;
                *(int *)(*(int *)(param_1 + 0x228) * 4 + *(int *)(param_1 + 0x234)) = iVar11;
                *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
              }
            }
            iStack_190 = 0;
            iVar14 = fn_82997E38(param_1,puVar4);
            uVar17 = uStack_184;
            if (iVar14 != 0) {
              uVar19 = puVar4[3];
              bVar8 = false;
              uVar16 = 0;
              aiStack_170[2] = -1;
              aiStack_170[3] = -1;
              if (uVar19 != 0) {
                iVar14 = *(int *)(param_1 + 0x14);
                iVar13 = 0;
                uVar2 = puVar4[4];
                bVar8 = false;
                do {
                  iVar12 = *(int *)(*(int *)(uVar2 + iVar13) * 4 + iVar14);
                  if (*(int *)(iVar12 + 0x30) != 0) {
                    iVar12 = *(int *)(iVar12 + 0x10);
                    bVar8 = true;
                    uVar20 = *(uint *)(puVar4[2] + iVar13);
                    aiStack_170[iVar12] = *(int *)(uVar2 + iVar13);
                    auStack_130[iVar12] = uVar20;
                  }
                  uVar16 = uVar16 + 1;
                  iVar13 = iVar13 + 4;
                } while (uVar16 < uVar19);
              }
              uStack_188 = 0;
              fn_8299D3A0(param_1,*(undefined4 *)(param_1 + 0x234),uStack_18c,uStack_184,
                              puVar4[4],uVar19,aiStack_120,&uStack_188);
              uVar19 = uStack_188;
              if (bVar8) {
                uVar16 = 0;
                aiStack_170[6] = -1;
                aiStack_170[7] = -1;
                if (uStack_188 != 0) {
                  iVar14 = *(int *)(param_1 + 0x14);
                  piVar18 = aiStack_120;
                  bVar9 = false;
                  do {
                    iVar12 = *(int *)(*piVar18 * 4 + iVar14);
                    iVar13 = *(int *)(iVar12 + 0x38);
                    iVar15 = *piVar18;
                    if (iVar13 != -1) {
                      iVar12 = *(int *)(iVar13 * 4 + iVar14);
                      iVar15 = iVar13;
                    }
                    uVar2 = *(uint *)(iVar12 + 0x48);
                    if (((uVar17 <= uVar2) || (uVar2 < uStack_18c)) && (uVar2 != 0xffffffff)) {
                      puVar5 = *(uint **)(uVar2 * 4 + *(int *)(param_1 + 0x234));
                      iVar13 = fn_82997E38(param_1,puVar5);
                      if (iVar13 != 0) {
                        if ((((*puVar5 & 0xfff00000) == 0x10000000) &&
                            (*(int *)(iVar12 + 0x38) == -1)) && (uVar20 = 0, puVar5[3] != 0)) {
                          iVar13 = 0;
                          do {
                            if (iVar15 == *(int *)(puVar5[4] + iVar13)) {
                              bVar9 = true;
                              auStack_140[*(int *)(iVar12 + 0x10)] =
                                   *(uint *)(puVar5[2] + uVar20 * 4);
                              break;
                            }
                            uVar20 = uVar20 + 1;
                            iVar13 = iVar13 + 4;
                          } while (uVar20 < *(uint *)(*(int *)(uVar2 * 4 + *(int *)(param_1 + 0x234)
                                                              ) + 0xc));
                        }
                        if (aiStack_170[*(int *)(iVar12 + 0x10) + 4] == -1) {
                          aiStack_170[*(int *)(iVar12 + 0x10) + 4] = iVar15;
                        }
                        else if (aiStack_170[*(int *)(iVar12 + 0x10) + 4] != iVar15)
                        goto LAB_829a2c3c;
                      }
                    }
                    uVar16 = uVar16 + 1;
                    piVar18 = piVar18 + 1;
                  } while (uVar16 < uVar19);
                }
                uVar24 = 0;
                uVar17 = 0;
                do {
                  iVar14 = *(int *)((int)aiStack_170 + uVar17 + 0x10);
                  if (iVar14 == -1) {
LAB_829a2710:
                    if (*(int *)((int)aiStack_170 + uVar17) != -1) goto LAB_829a2720;
                  }
                  else {
                    if (*(int *)((int)aiStack_170 + uVar17) != -1) {
LAB_829a2c3c:
                      fn_82975B00(param_1,puVar4[0xf],0x11b9,0xffffffff820518e4,
                                        *(undefined1 *)(param_1 + 0xcb));
                      return -0x7fffbffb;
                    }
                    if (iVar14 == -1) goto LAB_829a2710;
LAB_829a2720:
                    uVar24 = uVar24 + 1;
                  }
                  uVar17 = uVar17 + 4;
                } while (uVar17 < 0x10);
                iVar14 = fn_82963998(0x74);
                if (iVar14 == 0) {
                  iVar13 = 0;
                }
                else {
                  iVar13 = fn_829632A0();
                }
                if (iVar13 == 0) {
                  return -0x7ff8fff2;
                }
                lVar10 = fn_82963A30(iVar13,uVar24 & 0xffffffff000fffff | 0x70100000,
                                           uVar24 * 3,uVar24,0);
                if ((-1 < lVar10) && (lVar10 = fn_829632F0(iVar13,puVar4), -1 < lVar10)) {
                  lVar29 = (uVar24 & 0x3fffffff) << 2;
                  lVar28 = 0;
                  uVar25 = 0;
                  uVar26 = 0;
                  iVar12 = 0;
                  uVar17 = 0;
                  lVar27 = lVar29;
                  do {
                    iVar15 = *(int *)((int)aiStack_170 + uVar17);
                    iVar14 = iVar13;
                    if (iVar15 == -1) {
                      iVar15 = *(int *)((int)aiStack_170 + uVar17 + 0x10);
                      if (iVar15 != -1) {
                        *(int *)(*(int *)(iVar13 + 0x10) + iVar12) = iVar15;
                        if (bVar9) {
                          uVar26 = (ulonglong)*(uint *)((int)auStack_140 + uVar17);
                          *(undefined4 *)(*(int *)(iVar15 * 4 + *(int *)(param_1 + 0x14)) + 0x48) =
                               *(undefined4 *)(param_1 + 0x228);
                        }
                        else {
                          iVar21 = *(int *)(iVar15 * 4 + *(int *)(param_1 + 0x14));
                          uVar26 = fn_82964628(uVar30,param_1,*(undefined4 *)(param_1 + 0x88),
                                                     0,*(undefined4 *)(iVar21 + 0x10));
                          if ((int)uVar26 == -1) goto LAB_829a2400;
                          *(undefined4 *)
                           (*(int *)((int)((uVar26 & 0xffffffff) << 2) + *(int *)(param_1 + 0x14)) +
                           0x3c) = *(undefined4 *)(iVar21 + 0x3c);
                          iVar3 = *(int *)(iVar21 + 0x48);
                          *(undefined4 *)(iVar21 + 0x3c) = 0;
                          if ((iVar3 == -1) || (iVar3 == *(int *)(param_1 + 0x228))) {
                            fn_82975B00(param_1,puVar4[0xf],0x12ca,0xffffffff820518bc);
                            goto LAB_829a2b9c;
                          }
                          uVar19 = 0;
                          iVar3 = *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x234));
                          if (*(int *)(iVar3 + 0xc) != 0) {
                            iVar22 = 0;
                            do {
                              if (*(int *)(iVar22 + *(int *)(iVar3 + 0x10)) == iVar15) {
                                *(int *)(iVar22 + *(int *)(iVar3 + 0x10)) = (int)uVar26;
                              }
                              uVar19 = uVar19 + 1;
                              iVar22 = iVar22 + 4;
                            } while (uVar19 < *(uint *)(iVar3 + 0xc));
                          }
                          *(undefined4 *)(iVar21 + 0x48) = *(undefined4 *)(param_1 + 0x228);
                        }
                        *(undefined4 *)(*(int *)(iVar13 + 8) + iVar12) =
                             *(undefined4 *)(param_1 + 0x444);
                        *(int *)((int)(((uVar24 & 0x7fffffff) * 2 + lVar28 & 0xffffffff) << 2) +
                                *(int *)(iVar13 + 8)) = (int)uVar26;
                        goto LAB_829a2994;
                      }
                    }
                    else {
                      *(int *)(*(int *)(iVar13 + 0x10) + iVar12) = iVar15;
                      if (bVar23) {
                        uVar25 = (ulonglong)*(uint *)((int)auStack_130 + uVar17);
                        *(undefined4 *)(*(int *)(iVar15 * 4 + *(int *)(param_1 + 0x14)) + 0x48) =
                             *(undefined4 *)(param_1 + 0x228);
                      }
                      else {
                        iVar21 = *(int *)(iVar15 * 4 + *(int *)(param_1 + 0x14));
                        uVar25 = fn_82964628(uVar30,param_1,*(undefined4 *)(param_1 + 0x88),0,
                                                   *(undefined4 *)(iVar21 + 0x10));
                        if ((int)uVar25 == -1) goto LAB_829a2400;
                        uVar19 = 0;
                        *(undefined4 *)
                         (*(int *)((int)((uVar25 & 0xffffffff) << 2) + *(int *)(param_1 + 0x14)) +
                         0x3c) = *(undefined4 *)(iVar21 + 0x3c);
                        *(undefined4 *)(iVar21 + 0x3c) = 0;
                        *(undefined4 *)(iVar21 + 0x48) = *(undefined4 *)(param_1 + 0x228);
                        if (*(int *)(iVar11 + 0xc) != 0) {
                          iVar21 = 0;
                          do {
                            if (*(int *)(*(int *)(iVar11 + 0x10) + iVar21) == iVar15) {
                              *(int *)(*(int *)(iVar11 + 0x10) + iVar21) = (int)uVar25;
                            }
                            uVar19 = uVar19 + 1;
                            iVar21 = iVar21 + 4;
                          } while (uVar19 < *(uint *)(iVar11 + 0xc));
                        }
                      }
                      *(int *)(*(int *)(iVar13 + 8) + (int)lVar27) = (int)uVar25;
                      *(undefined4 *)(*(int *)(iVar13 + 8) + iVar12) =
                           *(undefined4 *)(param_1 + 0x448);
LAB_829a2994:
                      iVar12 = iVar12 + 4;
                      lVar27 = lVar27 + 4;
                      lVar28 = lVar28 + 1;
                    }
                    uVar17 = uVar17 + 4;
                  } while (uVar17 < 0x10);
                  lVar10 = 0;
                  uVar17 = 0;
                  do {
                    if (*(int *)((int)aiStack_170 + uVar17) == -1) {
                      iVar12 = *(int *)((int)aiStack_170 + uVar17 + 0x10);
                      if (iVar12 != -1) {
                        iVar12 = *(int *)(iVar12 * 4 + *(int *)(param_1 + 0x14));
                        iVar15 = fn_82964628(uVar30,param_1,*(undefined4 *)(param_1 + 0x88),0,
                                                   *(undefined4 *)(iVar12 + 0x10));
                        if (iVar15 != -1) {
                          iVar21 = *(int *)(iVar15 * 4 + *(int *)(param_1 + 0x14));
                          *(int *)(iVar21 + 0x38) = (int)uVar25;
                          *(undefined4 *)(iVar21 + 0x3c) = *(undefined4 *)(iVar12 + 0x3c);
                          if ((int)uVar25 != -1) {
                            *(undefined4 *)(iVar21 + 4) =
                                 *(undefined4 *)
                                  (*(int *)((int)((uVar25 & 0xffffffff) << 2) +
                                           *(int *)(param_1 + 0x14)) + 4);
                          }
                          *(int *)(*(int *)(iVar13 + 8) + (int)lVar29) = iVar15;
                          goto LAB_829a2ab4;
                        }
                        goto LAB_829a2400;
                      }
                    }
                    else {
                      iVar12 = *(int *)(*(int *)((int)aiStack_170 + uVar17) * 4 +
                                       *(int *)(param_1 + 0x14));
                      iVar15 = fn_82964628(uVar30,param_1,*(undefined4 *)(param_1 + 0x88),0,
                                                 *(undefined4 *)(iVar12 + 0x10));
                      if (iVar15 == -1) goto LAB_829a2400;
                      iVar21 = *(int *)(iVar15 * 4 + *(int *)(param_1 + 0x14));
                      *(int *)(iVar21 + 0x38) = (int)uVar26;
                      *(undefined4 *)(iVar21 + 0x3c) = *(undefined4 *)(iVar12 + 0x3c);
                      if ((int)uVar26 != -1) {
                        *(undefined4 *)(iVar21 + 4) =
                             *(undefined4 *)
                              (*(int *)((int)((uVar26 & 0xffffffff) << 2) + *(int *)(param_1 + 0x14)
                                       ) + 4);
                      }
                      *(int *)((int)(((uVar24 & 0x7fffffff) * 2 + lVar10 & 0xffffffff) << 2) +
                              *(int *)(iVar13 + 8)) = iVar15;
LAB_829a2ab4:
                      lVar29 = lVar29 + 4;
                      lVar10 = lVar10 + 1;
                    }
                    uVar17 = uVar17 + 4;
                  } while (uVar17 < 0x10);
                  if (*(uint *)(param_1 + 0x228) < 0x200) {
                    *(int *)(*(uint *)(param_1 + 0x228) * 4 + *(int *)(param_1 + 0x234)) = iVar13;
                    *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
                    iVar13 = fn_829644B8(param_1,iVar13);
                    uVar17 = uStack_184;
                    if (-1 < iVar13) goto LAB_829a2b0c;
                  }
                  goto LAB_829a2400;
                }
                goto LAB_829a2b9c;
              }
              uVar24 = (ulonglong)uStack_188;
              if (uVar24 != 0) {
                piVar18 = aiStack_120;
                do {
                  iVar14 = *(int *)(*piVar18 * 4 + *(int *)(param_1 + 0x14));
                  if (*(int *)(iVar14 + 0x38) != -1) {
                    iVar14 = *(int *)(*(int *)(iVar14 + 0x38) * 4 + *(int *)(param_1 + 0x14));
                  }
                  piVar18 = piVar18 + 1;
                  *(undefined4 *)(iVar14 + 0x30) = 1;
                  uVar24 = uVar24 - 1;
                } while (uVar24 != 0);
              }
            }
LAB_829a2b0c:
            if ((iVar11 != 0) && (uVar19 = 0, *(int *)(iVar11 + 0xc) != 0)) {
              iVar14 = 0;
              do {
                uVar19 = uVar19 + 1;
                piVar18 = (int *)(*(int *)(iVar11 + 0x10) + iVar14);
                iVar14 = iVar14 + 4;
                *(int *)(*(int *)(*piVar18 * 4 + *(int *)(param_1 + 0x14)) + 0x48) =
                     *(int *)(param_1 + 0x228) + -1;
              } while (uVar19 < *(uint *)(iVar11 + 0xc));
            }
            goto LAB_829a2b5c;
          }
        }
LAB_829a2400:
        iVar13 = iVar14;
        lVar10 = -0x7ff8fff2;
        goto LAB_829a2b9c;
      }
LAB_829a2b5c:
      uVar19 = uStack_18c + 1;
      uStack_18c = uStack_18c + 1;
    } while (uVar19 < uVar17);
  }
  iStack_190 = 0;
  iVar13 = 0;
  uVar19 = *(uint *)(param_1 + 0x4c);
  if (uVar19 < uVar17) {
    iVar11 = uVar17 - uVar19;
    iVar14 = uVar19 << 2;
    do {
      puVar7 = (undefined4 *)(iVar14 + *(int *)(param_1 + 0x234));
      iVar14 = iVar14 + 4;
      *(undefined4 *)*puVar7 = 0;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  lVar10 = 0;
LAB_829a2b9c:
  if (iVar13 != 0) {
    fn_82BA02A8(iVar13);
LAB_829a2bb0:
    fn_829639F0(iVar13);
  }
LAB_829a2bb4:
  if (iStack_190 != 0) {
    fn_82BA02A8(iStack_190);
    fn_829639F0(iStack_190);
  }
  return lVar10;
}

