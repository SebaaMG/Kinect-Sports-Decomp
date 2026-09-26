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
extern unsigned int *auStack_c0;
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82964180();
extern int fn_82964628();
extern int fn_829699A0();
extern int fn_8296ADB0();
extern int fn_8296B540();
extern int fn_8296CF68();
extern int fn_8296D7F0();
extern int fn_82978C60();
extern int fn_82BA02A8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


undefined8 fn_8297B810(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar18;
  longlong lVar17;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  uint auStack_c0 [48];
  
  bVar8 = false;
  uVar20 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar11 = 0;
    do {
      piVar6 = (int *)(iVar11 + *(int *)(param_1 + 0x14));
      iVar11 = iVar11 + 4;
      *(uint *)(*piVar6 + 0x30) = uVar20;
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(uint *)(param_1 + 8));
  }
  fn_8296CF68(param_1);
  uVar20 = 0;
  iVar11 = -1;
  uVar25 = 0xffffffffffffffff;
  dVar29 = lbl_82005758;
  dVar30 = lbl_82005710;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      puVar2 = *(uint **)(uVar20 * 4 + *(int *)(param_1 + 0x18));
      uVar22 = *puVar2;
      if ((uVar22 & 0xfff00000) != 0) {
        uVar12 = *(uint *)(param_1 + 8);
        if ((uVar22 & 0xfff00000) == 0x11000000) {
          uVar22 = 0;
          if (puVar2[1] != 0) {
            iVar10 = 0;
            do {
              if ((**(uint **)(*(int *)(*(int *)(*(int *)(iVar10 + puVar2[2]) * 4 +
                                                *(int *)(param_1 + 0x14)) + 0x30) * 4 +
                              *(int *)(param_1 + 0x14)) & 4) == 0) break;
              uVar22 = uVar22 + 1;
              iVar10 = iVar10 + 4;
            } while (uVar22 < puVar2[1]);
          }
          if (uVar22 != puVar2[1]) goto LAB_8297c8dc;
LAB_8297c8cc:
          puVar2[3] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
LAB_8297c8d8:
          bVar8 = true;
        }
        else {
          uVar26 = uVar22 & 0xf0000000;
          if (uVar26 == 0x10000000) {
            uVar22 = 0;
            uVar12 = 0;
            if (puVar2[3] != 0) {
              iVar10 = 0;
              do {
                iVar18 = *(int *)(param_1 + 0x14);
                iVar24 = *(int *)(iVar10 + puVar2[4]);
                if (((*puVar2 & 0xfff00000) == 0x10000000) || ((*puVar2 & 0xfff00000) == 0x10100000)
                   ) {
                  puVar5 = *(uint **)(iVar24 * 4 + iVar18);
                  puVar3 = *(uint **)(*(int *)(*(int *)(*(int *)(iVar10 + puVar2[2]) * 4 + iVar18) +
                                              0x30) * 4 + iVar18);
                  uVar26 = *puVar5;
                  uVar14 = *puVar3 | uVar26;
                  uVar21 = uVar14 & 0xe000000;
                  if ((uVar14 & 0x2000000) == 0) {
                    if ((uVar14 & 0x4000000) == 0) {
                      if ((uVar14 & 0x8000000) != 0) {
                        uVar21 = 0x8000000;
                      }
                    }
                    else {
                      uVar21 = 0x4000000;
                    }
                  }
                  else {
                    uVar21 = 0x2000000;
                  }
                  if (uVar21 != (uVar26 & 0xe000000)) {
                    bVar8 = true;
                    *puVar5 = uVar26 & 0xf1ffffff | uVar21;
                  }
                  if (((uVar21 != (*puVar3 & 0xe000000)) &&
                      ((*(uint *)(*(int *)(puVar3[1] * 4 + *(int *)(param_1 + 0x10)) + 4) & 2) != 0)
                      ) && (puVar3[0x17] == 1)) {
                    bVar8 = true;
                    *puVar3 = *puVar3 & 0xf1ffffff | uVar21;
                  }
                }
                uVar9 = fn_82978C60(param_1,puVar2,iVar24);
                if ((int)uVar9 < 0) {
                  return uVar9;
                }
                iVar18 = *(int *)(param_1 + 0x14);
                iVar1 = *(int *)(*(int *)(iVar24 * 4 + iVar18) + 0x30);
                if (iVar1 == iVar24) {
                  uVar22 = uVar22 + 1;
                }
                else if (*(int *)(*(int *)(iVar1 * 4 + iVar18) + 0x30) == -1) {
                  iVar24 = *(int *)(*(int *)(iVar24 * 4 + iVar18) + 0x30);
                  *(int *)(*(int *)(iVar24 * 4 + iVar18) + 0x30) = iVar24;
                }
                uVar12 = uVar12 + 1;
                iVar10 = iVar10 + 4;
              } while (uVar12 < puVar2[3]);
            }
            if (uVar22 == puVar2[3]) goto LAB_8297c8dc;
            uVar12 = 0;
            uVar22 = 0;
            if (puVar2[3] == 0) {
LAB_8297bb9c:
              uVar22 = 0;
            }
            else {
              iVar18 = 0;
              iVar10 = 0;
              do {
                iVar24 = *(int *)(param_1 + 0x14);
                iVar1 = *(int *)(iVar18 + puVar2[4]);
                if (*(int *)(*(int *)(iVar1 * 4 + iVar24) + 0x30) == iVar1) {
                  *(int *)(iVar10 + puVar2[4]) = iVar1;
                  uVar12 = uVar12 + 1;
                  *(undefined4 *)(iVar10 + puVar2[2]) = *(undefined4 *)(iVar18 + puVar2[2]);
                  iVar10 = iVar10 + 4;
                }
                else {
                  iVar1 = *(int *)(iVar1 * 4 + iVar24);
                  iVar24 = *(int *)(*(int *)(iVar1 + 0x30) * 4 + iVar24);
                  if (((*(uint *)(*(int *)(*(int *)(iVar24 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4)
                       & 2) != 0) && (*(int *)(iVar24 + 0x60) == 0)) {
                    *(undefined4 *)(iVar24 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
                    *(undefined4 *)(iVar24 + 100) =
                         *(undefined4 *)
                          (*(int *)(*(int *)(iVar18 + puVar2[4]) * 4 + *(int *)(param_1 + 0x14)) +
                          100);
                  }
                }
                uVar22 = uVar22 + 1;
                iVar18 = iVar18 + 4;
              } while (uVar22 < puVar2[3]);
              if (uVar12 == 0) goto LAB_8297bb9c;
              uVar22 = uVar12 & 0xfffff | *puVar2 & 0xfff00000;
            }
            *puVar2 = uVar22;
            puVar2[1] = uVar12;
            puVar2[3] = uVar12;
            goto LAB_8297c8d8;
          }
          if (uVar26 == 0x20000000) {
            uVar22 = 0;
            uVar26 = 0;
            if (puVar2[3] != 0) {
              iVar10 = 0;
              do {
                iVar18 = *(int *)(param_1 + 0x14);
                iVar24 = *(int *)(iVar10 + puVar2[4]);
                if (((*puVar2 & 0xfff00000) == 0x20000000) || ((*puVar2 & 0xfff00000) == 0x20100000)
                   ) {
                  puVar5 = *(uint **)(*(int *)(*(int *)(*(int *)((uVar26 + puVar2[3]) * 4 +
                                                                puVar2[2]) * 4 + iVar18) + 0x30) * 4
                                     + iVar18);
                  puVar3 = *(uint **)(*(int *)(*(int *)(*(int *)(iVar10 + puVar2[2]) * 4 + iVar18) +
                                              0x30) * 4 + iVar18);
                  uVar14 = *puVar3;
                  uVar21 = uVar14 | *puVar5;
                  uVar23 = uVar21 & 0xe000000;
                  if ((uVar21 & 0x8000000) == 0) {
                    if ((uVar21 & 0x4000000) == 0) {
                      if ((uVar21 & 0x2000000) != 0) {
                        uVar23 = 0x2000000;
                      }
                    }
                    else {
                      uVar23 = 0x4000000;
                    }
                  }
                  else {
                    uVar23 = 0x8000000;
                  }
                  uVar23 = **(uint **)(iVar24 * 4 + iVar18) & 0xe000000 | uVar23;
                  if ((uVar23 & 0x2000000) == 0) {
                    if ((uVar23 & 0x4000000) == 0) {
                      if ((uVar23 & 0x8000000) != 0) {
                        uVar23 = 0x8000000;
                      }
                    }
                    else {
                      uVar23 = 0x4000000;
                    }
                  }
                  else {
                    uVar23 = 0x2000000;
                  }
                  if (((uVar23 != (uVar14 & 0xe000000)) &&
                      ((*(uint *)(*(int *)(puVar3[1] * 4 + *(int *)(param_1 + 0x10)) + 4) & 2) != 0)
                      ) && (puVar3[0x17] == 1)) {
                    bVar8 = true;
                    *puVar3 = uVar14 & 0xf1ffffff | uVar23;
                  }
                  if (((uVar23 != (*puVar5 & 0xe000000)) &&
                      ((*(uint *)(*(int *)(puVar5[1] * 4 + *(int *)(param_1 + 0x10)) + 4) & 2) != 0)
                      ) && (puVar5[0x17] == 1)) {
                    bVar8 = true;
                    *puVar5 = *puVar5 & 0xf1ffffff | uVar23;
                  }
                }
                uVar9 = fn_829699A0(param_1,puVar2,iVar24);
                if ((int)uVar9 < 0) {
                  return uVar9;
                }
                iVar18 = *(int *)(param_1 + 0x14);
                iVar1 = *(int *)(*(int *)(iVar24 * 4 + iVar18) + 0x30);
                if (iVar1 == iVar24) {
                  uVar22 = uVar22 + 1;
                }
                else if (*(int *)(*(int *)(iVar1 * 4 + iVar18) + 0x30) == -1) {
                  iVar24 = *(int *)(*(int *)(iVar24 * 4 + iVar18) + 0x30);
                  *(int *)(*(int *)(iVar24 * 4 + iVar18) + 0x30) = iVar24;
                }
                uVar26 = uVar26 + 1;
                iVar10 = iVar10 + 4;
              } while (uVar26 < puVar2[3]);
            }
            uVar13 = (ulonglong)puVar2[3];
            if (uVar22 != uVar13) {
              uVar26 = *puVar2;
              uVar15 = 0;
              bVar7 = false;
              uVar28 = (ulonglong)uVar26 & 0xfffff;
              if ((uVar26 & 0xfffff) != 0) {
                iVar10 = 0;
                uVar27 = uVar28;
                do {
                  if (*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar10 + puVar2[4]) * 4 +
                                                          *(int *)(param_1 + 0x14)) + 0x30) * 4 +
                                        *(int *)(param_1 + 0x14)) + 0x48) != uVar20) {
                    uVar15 = uVar15 + 1;
                  }
                  iVar10 = iVar10 + 4;
                  uVar27 = uVar27 - 1;
                } while (uVar27 != 0);
                if ((((uVar15 & 0xffffffff) != 0) && ((uVar15 & 0xffffffff) != uVar13)) &&
                   ((ulonglong)uVar22 == (uVar13 - uVar15 & 0xffffffff))) {
                  uVar15 = uVar28 - uVar15;
                  iVar10 = fn_82963998(0x74);
                  if (iVar10 == 0) {
                    iVar10 = 0;
                  }
                  else {
                    iVar10 = fn_829632A0();
                  }
                  if (iVar10 == 0) {
                    return 0xffffffff8007000e;
                  }
                  fn_82963A30(iVar10,uVar15 & 0xfffff |
                                           (ulonglong)*puVar2 & 0xfffffffffff00000,
                                    (uVar15 & 0x7fffffff) << 1,uVar15,0);
                  fn_829632F0(iVar10,puVar2);
                  iVar18 = 0;
                  iVar24 = 0;
                  lVar17 = (uVar15 & 0x3fffffff) << 2;
                  lVar16 = ((ulonglong)uVar26 & 0xfffff) << 2;
                  do {
                    iVar1 = *(int *)(*(int *)(iVar24 + puVar2[4]) * 4 + *(int *)(param_1 + 0x14));
                    if (*(uint *)(*(int *)(*(int *)(iVar1 + 0x30) * 4 + *(int *)(param_1 + 0x14)) +
                                 0x48) == uVar20) {
                      *(undefined4 *)(iVar18 + *(int *)(iVar10 + 8)) =
                           *(undefined4 *)(iVar24 + puVar2[2]);
                      *(undefined4 *)((int)lVar17 + *(int *)(iVar10 + 8)) =
                           *(undefined4 *)((int)lVar16 + puVar2[2]);
                      lVar17 = lVar17 + 4;
                      *(undefined4 *)(*(int *)(iVar10 + 0x10) + iVar18) =
                           *(undefined4 *)(iVar24 + puVar2[4]);
                      iVar18 = iVar18 + 4;
                    }
                    else {
                      *(undefined4 *)(iVar1 + 0x48) = 0xffffffff;
                    }
                    iVar24 = iVar24 + 4;
                    lVar16 = lVar16 + 4;
                    uVar28 = uVar28 - 1;
                  } while (uVar28 != 0);
                  uVar9 = fn_82963D50(puVar2,iVar10);
                  fn_82BA02A8(iVar10);
                  fn_829639F0(iVar10);
                  if ((int)uVar9 < 0) {
                    return uVar9;
                  }
                  if ((ulonglong)uVar22 == (uVar15 & 0xffffffff)) {
                    bVar7 = true;
                  }
                }
              }
              uVar26 = uVar22;
              if (uVar22 == 0) {
                uVar14 = 1;
                if (1 < puVar2[3]) {
                  iVar18 = 4;
                  iVar10 = *(int *)(param_1 + 0x14);
                  do {
                    uVar26 = puVar2[3];
                    if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar2[4] * 4 + iVar10) + 0x30)
                                          * 4 + iVar10) + 4) !=
                        *(int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)puVar2[4] + iVar18) * 4 +
                                                           iVar10) + 0x30) * 4 + iVar10) + 4))
                    break;
                    uVar14 = uVar14 + 1;
                    iVar18 = iVar18 + 4;
                    uVar26 = uVar22;
                  } while (uVar14 < puVar2[3]);
                }
              }
              if (bVar7) goto LAB_8297c8d8;
              if (uVar26 == 0) {
                uVar22 = 0;
                if (puVar2[3] != 0) {
                  iVar10 = 0;
                  do {
                    iVar18 = *(int *)(*(int *)(puVar2[4] + iVar10) * 4 + *(int *)(param_1 + 0x14));
                    iVar24 = *(int *)(*(int *)(iVar18 + 0x30) * 4 + *(int *)(param_1 + 0x14));
                    if (((*(uint *)(*(int *)(*(int *)(iVar24 + 4) * 4 + *(int *)(param_1 + 0x10)) +
                                   4) & 2) != 0) && (*(int *)(iVar24 + 0x60) == 0)) {
                      *(undefined4 *)(iVar24 + 0x60) = *(undefined4 *)(iVar18 + 0x60);
                      *(undefined4 *)(iVar24 + 100) =
                           *(undefined4 *)
                            (*(int *)(*(int *)(puVar2[4] + iVar10) * 4 + *(int *)(param_1 + 0x14)) +
                            100);
                    }
                    uVar22 = uVar22 + 1;
                    iVar10 = iVar10 + 4;
                  } while (uVar22 < puVar2[3]);
                }
                goto LAB_8297c8cc;
              }
              uVar22 = 0;
              if (puVar2[3] != 0) {
                iVar10 = 0;
                do {
                  uVar26 = *(uint *)(puVar2[4] + iVar10);
                  puVar5 = *(uint **)(uVar26 * 4 + *(int *)(param_1 + 0x14));
                  if (puVar5[0xc] != uVar26) {
                    uVar14 = *puVar5;
                    uVar21 = **(uint **)(puVar5[0xc] * 4 + *(int *)(param_1 + 0x14));
                    if (uVar14 != (uVar21 & 0xf1ffffff | uVar14)) {
                      *puVar5 = uVar21 & 0xf1ffffff | uVar14;
                      bVar8 = true;
                    }
                    *(uint *)(*(int *)(uVar26 * 4 + *(int *)(param_1 + 0x14)) + 0x30) = uVar26;
                  }
                  uVar22 = uVar22 + 1;
                  iVar10 = iVar10 + 4;
                } while (uVar22 < puVar2[3]);
              }
              if (uVar12 < *(uint *)(param_1 + 8)) {
                iVar10 = uVar12 << 2;
                uVar22 = uVar12;
                do {
                  iVar18 = *(int *)(*(int *)(param_1 + 0x14) + iVar10);
                  if (iVar18 != 0) {
                    fn_82BA02A8(iVar18);
                    fn_82964180(iVar18);
                  }
                  uVar22 = uVar22 + 1;
                  iVar10 = iVar10 + 4;
                } while (uVar22 < *(uint *)(param_1 + 8));
              }
LAB_8297c0a0:
              *(uint *)(param_1 + 8) = uVar12;
            }
          }
          else if (uVar26 == 0x30000000) {
            uVar22 = 0;
            uVar13 = 0;
            if (puVar2[3] != 0) {
              iVar10 = 0;
              do {
                uVar26 = puVar2[2];
                iVar18 = *(int *)(param_1 + 0x14);
                iVar24 = *(int *)(puVar2[4] + iVar10);
                uVar19 = *(undefined4 *)(*(int *)(*(int *)(uVar26 + iVar10) * 4 + iVar18) + 0x30);
                if ((*puVar2 & 0xfff00000) == 0x30000000) {
                  puVar5 = *(uint **)(*(int *)(*(int *)(*(int *)((int)((((ulonglong)puVar2[3] &
                                                                        0x7fffffff) * 2 + uVar13 &
                                                                       0xffffffff) << 2) + uVar26) *
                                                        4 + iVar18) + 0x30) * 4 + iVar18);
                  puVar3 = *(uint **)(*(int *)(*(int *)(*(int *)((int)((puVar2[3] + uVar13 &
                                                                       0xffffffff) << 2) + uVar26) *
                                                        4 + iVar18) + 0x30) * 4 + iVar18);
                  uVar26 = *puVar3;
                  uVar14 = uVar26 | *puVar5;
                  uVar21 = uVar14 & 0xe000000;
                  if ((uVar14 & 0x8000000) == 0) {
                    if ((uVar14 & 0x4000000) == 0) {
                      if ((uVar14 & 0x2000000) != 0) {
                        uVar21 = 0x2000000;
                      }
                    }
                    else {
                      uVar21 = 0x4000000;
                    }
                  }
                  else {
                    uVar21 = 0x8000000;
                  }
                  uVar21 = **(uint **)(iVar24 * 4 + iVar18) & 0xe000000 | uVar21;
                  if ((uVar21 & 0x2000000) == 0) {
                    if ((uVar21 & 0x4000000) == 0) {
                      if ((uVar21 & 0x8000000) != 0) {
                        uVar21 = 0x8000000;
                      }
                    }
                    else {
                      uVar21 = 0x4000000;
                    }
                  }
                  else {
                    uVar21 = 0x2000000;
                  }
                  if (((uVar21 != (uVar26 & 0xe000000)) &&
                      ((*(uint *)(*(int *)(puVar3[1] * 4 + *(int *)(param_1 + 0x10)) + 4) & 2) != 0)
                      ) && (puVar3[0x17] == 1)) {
                    bVar8 = true;
                    *puVar3 = uVar26 & 0xf1ffffff | uVar21;
                  }
                  if (((uVar21 != (*puVar5 & 0xe000000)) &&
                      ((*(uint *)(*(int *)(puVar5[1] * 4 + *(int *)(param_1 + 0x10)) + 4) & 2) != 0)
                      ) && (puVar5[0x17] == 1)) {
                    bVar8 = true;
                    *puVar5 = *puVar5 & 0xf1ffffff | uVar21;
                  }
                }
                uVar9 = fn_8296ADB0(param_1,puVar2,iVar24,uVar19);
                if ((int)uVar9 < 0) {
                  return uVar9;
                }
                iVar18 = *(int *)(param_1 + 0x14);
                iVar1 = *(int *)(*(int *)(iVar24 * 4 + iVar18) + 0x30);
                if (iVar1 == iVar24) {
                  uVar22 = uVar22 + 1;
                }
                else if (*(int *)(*(int *)(iVar1 * 4 + iVar18) + 0x30) == -1) {
                  iVar24 = *(int *)(*(int *)(iVar24 * 4 + iVar18) + 0x30);
                  *(int *)(*(int *)(iVar24 * 4 + iVar18) + 0x30) = iVar24;
                }
                uVar13 = uVar13 + 1;
                iVar10 = iVar10 + 4;
              } while ((uVar13 & 0xffffffff) < (ulonglong)puVar2[3]);
            }
            uVar26 = puVar2[3];
            if (uVar22 != uVar26) {
              if (uVar22 != 0) {
LAB_8297c46c:
                uVar22 = 0;
                if (uVar26 != 0) {
                  iVar10 = 0;
                  do {
                    uVar26 = *(uint *)(puVar2[4] + iVar10);
                    puVar5 = *(uint **)(uVar26 * 4 + *(int *)(param_1 + 0x14));
                    if (puVar5[0xc] != uVar26) {
                      uVar14 = *puVar5;
                      uVar21 = **(uint **)(puVar5[0xc] * 4 + *(int *)(param_1 + 0x14));
                      if (uVar14 != (uVar21 & 0xf1ffffff | uVar14)) {
                        *puVar5 = uVar21 & 0xf1ffffff | uVar14;
                        bVar8 = true;
                      }
                      *(uint *)(*(int *)(uVar26 * 4 + *(int *)(param_1 + 0x14)) + 0x30) = uVar26;
                    }
                    uVar22 = uVar22 + 1;
                    iVar10 = iVar10 + 4;
                  } while (uVar22 < puVar2[3]);
                }
                if (uVar12 < *(uint *)(param_1 + 8)) {
                  iVar10 = uVar12 << 2;
                  uVar22 = uVar12;
                  do {
                    iVar18 = *(int *)(*(int *)(param_1 + 0x14) + iVar10);
                    if (iVar18 != 0) {
                      fn_82BA02A8(iVar18);
                      fn_82964180(iVar18);
                    }
                    uVar22 = uVar22 + 1;
                    iVar10 = iVar10 + 4;
                  } while (uVar22 < *(uint *)(param_1 + 8));
                }
                goto LAB_8297c0a0;
              }
              uVar22 = 1;
              if (1 < uVar26) {
                iVar18 = 4;
                iVar10 = *(int *)(param_1 + 0x14);
                do {
                  if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)puVar2[4] * 4 + iVar10) + 0x30) *
                                        4 + iVar10) + 4) !=
                      *(int *)(*(int *)(*(int *)(*(int *)(*(int *)((int)puVar2[4] + iVar18) * 4 +
                                                         iVar10) + 0x30) * 4 + iVar10) + 4)) {
                    if (uVar26 != 0) goto LAB_8297c46c;
                    break;
                  }
                  uVar22 = uVar22 + 1;
                  iVar18 = iVar18 + 4;
                } while (uVar22 < puVar2[3]);
              }
              uVar22 = 0;
              if (uVar26 != 0) {
                iVar10 = 0;
                do {
                  iVar18 = *(int *)(*(int *)(puVar2[4] + iVar10) * 4 + *(int *)(param_1 + 0x14));
                  iVar24 = *(int *)(*(int *)(iVar18 + 0x30) * 4 + *(int *)(param_1 + 0x14));
                  if (((*(uint *)(*(int *)(*(int *)(iVar24 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4)
                       & 2) != 0) && (*(int *)(iVar24 + 0x60) == 0)) {
                    *(undefined4 *)(iVar24 + 0x60) = *(undefined4 *)(iVar18 + 0x60);
                    *(undefined4 *)(iVar24 + 100) =
                         *(undefined4 *)
                          (*(int *)(*(int *)(puVar2[4] + iVar10) * 4 + *(int *)(param_1 + 0x14)) +
                          100);
                  }
                  uVar22 = uVar22 + 1;
                  iVar10 = iVar10 + 4;
                } while (uVar22 < puVar2[3]);
              }
              goto LAB_8297c8cc;
            }
          }
          else if ((uVar22 & 0xfff00000) == 0x50000000) {
            uVar9 = fn_8296B540(param_1,puVar2,1);
            if ((int)uVar9 < 0) {
              return uVar9;
            }
            if ((int)uVar9 != 1) {
              bVar8 = true;
            }
            iVar10 = *(int *)(param_1 + 0x14);
            iVar18 = *(int *)puVar2[4];
            if (*(int *)(*(int *)(iVar18 * 4 + iVar10) + 0x30) != iVar18) {
              iVar18 = *(int *)(iVar18 * 4 + iVar10);
              iVar10 = *(int *)(*(int *)(iVar18 + 0x30) * 4 + iVar10);
              if (((*(uint *)(*(int *)(*(int *)(iVar10 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 2
                   ) != 0) && (*(int *)(iVar10 + 0x60) == 0)) {
                *(undefined4 *)(iVar10 + 0x60) = *(undefined4 *)(iVar18 + 0x60);
                *(undefined4 *)(iVar10 + 100) =
                     *(undefined4 *)
                      (*(int *)(*(int *)puVar2[4] * 4 + *(int *)(param_1 + 0x14)) + 100);
              }
              *puVar2 = 0;
              puVar2[1] = 0;
              puVar2[3] = 0;
            }
          }
          else if (uVar22 == 0x50100004) {
            piVar6 = (int *)puVar2[2];
            iVar10 = *(int *)(param_1 + 0x14);
            iVar18 = *(int *)(param_1 + 0x10);
            auStack_c0[3] = 1;
            auStack_c0[0] = 1;
            iVar24 = *(int *)(*piVar6 * 4 + iVar10);
            iVar1 = *(int *)(piVar6[1] * 4 + iVar10);
            iVar4 = *(int *)(piVar6[3] * 4 + iVar10);
            if (((*(uint *)(*(int *)(*(int *)(iVar24 + 4) * 4 + iVar18) + 4) & 0x100) == 0) ||
               (*(int *)(iVar24 + 8) != -1)) {
              auStack_c0[1] =
                   -(uint)(*(int *)(*(int *)(*(int *)(puVar2[4] + 4) * 4 + iVar10) + 0x5c) != 0);
LAB_8297c730:
              auStack_c0[2] =
                   -(uint)(*(int *)(*(int *)(*(int *)(puVar2[4] + 8) * 4 + iVar10) + 0x5c) != 0);
              if ((auStack_c0[1] == -1) || (auStack_c0[2] == -1)) goto LAB_8297c8dc;
            }
            else if (*(double *)(iVar24 + 0x20) <= dVar30) {
              auStack_c0[1] = 0;
LAB_8297c704:
              auStack_c0[2] = 0;
            }
            else {
              auStack_c0[1] = 2;
              if (((*(uint *)(*(int *)(*(int *)(iVar1 + 4) * 4 + iVar18) + 4) & 0x100) == 0) ||
                 (*(int *)(iVar1 + 8) != -1)) goto LAB_8297c730;
              if (*(double *)(iVar1 + 0x20) <= dVar30) goto LAB_8297c704;
              if (((*(uint *)(*(int *)(*(int *)(iVar4 + 4) * 4 + iVar18) + 4) & 0x100) == 0) ||
                 (*(int *)(iVar4 + 8) != -1)) goto LAB_8297c730;
              if (*(double *)(iVar4 + 0x20) == dVar30) {
                auStack_c0[2] = 1;
              }
              else {
                if (*(double *)(iVar4 + 0x20) != dVar29) goto LAB_8297c730;
                auStack_c0[2] = 3;
              }
            }
            uVar22 = 0;
            do {
              uVar12 = *(uint *)((int)auStack_c0 + uVar22);
              if (uVar12 == 0) {
                if ((int)uVar25 == -1) {
                  uVar25 = fn_82964628(dVar30,param_1,*(undefined4 *)(param_1 + 0x78),0,0);
                  *(int *)(*(int *)((int)((uVar25 & 0xffffffff) << 2) + *(int *)(param_1 + 0x14)) +
                          0x30) = (int)uVar25;
                }
                *(int *)(*(int *)(*(int *)(puVar2[4] + uVar22) * 4 + *(int *)(param_1 + 0x14)) +
                        0x30) = (int)uVar25;
              }
              else if (uVar12 == 1) {
                if (iVar11 == -1) {
                  iVar11 = fn_82964628(dVar29,param_1,*(undefined4 *)(param_1 + 0x78),0,0);
                  *(int *)(*(int *)(iVar11 * 4 + *(int *)(param_1 + 0x14)) + 0x30) = iVar11;
                }
                *(int *)(*(int *)(*(int *)(puVar2[4] + uVar22) * 4 + *(int *)(param_1 + 0x14)) +
                        0x30) = iVar11;
              }
              else {
                if (uVar12 < 3) {
                  uVar19 = *(undefined4 *)puVar2[2];
                }
                else {
                  if (uVar12 != 3) goto LAB_8297c854;
                  uVar19 = *(undefined4 *)(puVar2[2] + 4);
                }
                *(undefined4 *)
                 (*(int *)(*(int *)(puVar2[4] + uVar22) * 4 + *(int *)(param_1 + 0x14)) + 0x30) =
                     uVar19;
              }
LAB_8297c854:
              iVar10 = *(int *)(*(int *)(puVar2[4] + uVar22) * 4 + *(int *)(param_1 + 0x14));
              iVar18 = *(int *)(*(int *)(iVar10 + 0x30) * 4 + *(int *)(param_1 + 0x14));
              if (((*(uint *)(*(int *)(*(int *)(iVar18 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 2
                   ) != 0) && (*(int *)(iVar18 + 0x60) == 0)) {
                *(undefined4 *)(iVar18 + 0x60) = *(undefined4 *)(iVar10 + 0x60);
                *(undefined4 *)(iVar18 + 100) =
                     *(undefined4 *)
                      (*(int *)(*(int *)(puVar2[4] + uVar22) * 4 + *(int *)(param_1 + 0x14)) + 100);
              }
              uVar22 = uVar22 + 4;
            } while (uVar22 < 0x10);
            goto LAB_8297c8cc;
          }
        }
LAB_8297c8dc:
        if (puVar2[3] != 0) {
          uVar22 = 0;
          iVar10 = 0;
          do {
            puVar5 = *(uint **)(*(int *)(puVar2[4] + iVar10) * 4 + *(int *)(param_1 + 0x14));
            uVar12 = *puVar5;
            if (((((uVar12 & 0x40) != 0) ||
                 ((*(uint *)(*(int *)(puVar5[1] * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x11028) != 0
                 )) || ((uVar12 & 4) == 0)) || ((uVar12 & 8) == 0)) break;
            uVar22 = uVar22 + 1;
            iVar10 = iVar10 + 4;
          } while (uVar22 < puVar2[3]);
          if (uVar22 == puVar2[3]) {
            if ((int)uVar25 == -1) {
              uVar25 = fn_82964628(dVar30,param_1,*(undefined4 *)(param_1 + 0x78),0,0);
              *(int *)(*(int *)((int)((uVar25 & 0xffffffff) << 2) + *(int *)(param_1 + 0x14)) + 0x30
                      ) = (int)uVar25;
            }
            uVar22 = 0;
            if (puVar2[3] != 0) {
              iVar10 = 0;
              do {
                uVar22 = uVar22 + 1;
                piVar6 = (int *)(puVar2[4] + iVar10);
                iVar10 = iVar10 + 4;
                *(int *)(*(int *)(*piVar6 * 4 + *(int *)(param_1 + 0x14)) + 0x30) = (int)uVar25;
              } while (uVar22 < puVar2[3]);
            }
            *puVar2 = 0;
            bVar8 = true;
            puVar2[1] = 0;
            puVar2[3] = 0;
          }
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(uint *)(param_1 + 0xc));
    if (bVar8) {
      fn_8296D7F0(param_1);
      return 0;
    }
  }
  return 1;
}

