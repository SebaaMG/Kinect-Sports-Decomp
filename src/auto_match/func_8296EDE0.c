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
extern int fn_82963400();
extern int fn_829698F8();
extern int fn_8296D7F0();


undefined8 fn_8296EDE0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar17;
  int iVar18;
  longlong lVar16;
  uint uVar21;
  int iVar22;
  int iVar23;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  int iVar30;
  
  bVar8 = false;
  uVar21 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar9 = 0;
    do {
      piVar6 = (int *)(iVar9 + *(int *)(param_1 + 0x14));
      iVar9 = iVar9 + 4;
      *(uint *)(*piVar6 + 0x30) = uVar21;
      uVar21 = uVar21 + 1;
    } while (uVar21 < *(uint *)(param_1 + 8));
  }
  uVar21 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      puVar4 = *(uint **)(uVar21 * 4 + *(int *)(param_1 + 0x18));
      uVar26 = *puVar4;
      if ((0xfffffff < (uVar26 & 0xf0000000)) && ((uVar26 & 0xf0000000) < 0x40000001)) {
        uVar13 = (ulonglong)uVar26;
        uVar7 = uVar13 & 0xfffff;
        uVar24 = puVar4[1] / uVar7;
        trapWord(6,uVar7,0);
        iVar9 = fn_82963400(puVar4);
        uVar28 = 1;
        if (1 < uVar7) {
          lVar20 = (uVar13 & 0xfffff) * 4;
          iVar30 = 4;
          uVar25 = uVar7;
          lVar27 = lVar20;
          do {
            lVar27 = lVar27 + 4;
            uVar1 = puVar4[4];
            iVar2 = *(int *)(param_1 + 0x14);
            if (((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(uVar1 + iVar30) * 4 + iVar2) + 4) *
                                     4 + *(int *)(param_1 + 0x10)) + 4) & 0x1020) == 0) &&
               (uVar11 = 0, (uVar28 & 0xffffffff) != 0)) {
              iVar10 = 0;
              lVar29 = lVar20;
              do {
                if ((*(int *)(uVar1 + iVar10) == -1) ||
                   ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(uVar1 + iVar10) * 4 + iVar2) + 4)
                                        * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x1020) != 0))
                goto LAB_8296f2e4;
                if (uVar24 == 1) {
                  iVar15 = *(int *)(iVar30 + puVar4[2]);
                  if (iVar15 == -1) {
                    iVar15 = -1;
                  }
                  else {
                    iVar15 = *(int *)(*(int *)(iVar15 * 4 + iVar2) + 0x30);
                  }
                  iVar22 = *(int *)(iVar10 + puVar4[2]);
                  if (iVar22 == -1) {
                    iVar22 = -1;
                  }
                  else {
                    iVar22 = *(int *)(*(int *)(iVar22 * 4 + iVar2) + 0x30);
                  }
                  if (iVar15 != iVar22) goto LAB_8296ef6c;
LAB_8296f2fc:
                  fn_829698F8(param_1,*(undefined4 *)((int)((uVar11 & 0xffffffff) << 2) + uVar1));
                  uVar25 = uVar25 - 1;
                  *(undefined4 *)(puVar4[4] + iVar30) = 0xffffffff;
                  break;
                }
LAB_8296ef6c:
                iVar15 = (int)lVar27;
                iVar22 = (int)lVar29;
                if (uVar24 == 2) {
                  uVar3 = puVar4[2];
                  iVar18 = *(int *)(iVar30 + uVar3);
                  if (iVar18 == -1) {
                    iVar17 = -1;
                  }
                  else {
                    iVar17 = *(int *)(*(int *)(iVar18 * 4 + iVar2) + 0x30);
                  }
                  iVar5 = *(int *)(iVar10 + uVar3);
                  if (iVar5 == -1) {
                    iVar23 = -1;
                  }
                  else {
                    iVar23 = *(int *)(*(int *)(iVar5 * 4 + iVar2) + 0x30);
                  }
                  if (iVar17 == iVar23) {
                    if (*(int *)(iVar15 + uVar3) == -1) {
                      iVar17 = -1;
                    }
                    else {
                      iVar17 = *(int *)(*(int *)(*(int *)(iVar15 + uVar3) * 4 + iVar2) + 0x30);
                    }
                    if (*(int *)(iVar22 + uVar3) == -1) {
                      iVar23 = -1;
                    }
                    else {
                      iVar23 = *(int *)(*(int *)(*(int *)(iVar22 + uVar3) * 4 + iVar2) + 0x30);
                    }
                    if (iVar17 == iVar23) goto LAB_8296f2fc;
                  }
                  if (iVar9 != 0) {
                    if (iVar18 == -1) {
                      iVar18 = -1;
                    }
                    else {
                      iVar18 = *(int *)(*(int *)(iVar18 * 4 + iVar2) + 0x30);
                    }
                    if (*(int *)(iVar22 + uVar3) == -1) {
                      iVar17 = -1;
                    }
                    else {
                      iVar17 = *(int *)(*(int *)(*(int *)(iVar22 + uVar3) * 4 + iVar2) + 0x30);
                    }
                    if (iVar18 == iVar17) {
                      if (*(int *)(iVar15 + uVar3) == -1) {
                        iVar18 = -1;
                      }
                      else {
                        iVar18 = *(int *)(*(int *)(*(int *)(iVar15 + uVar3) * 4 + iVar2) + 0x30);
                      }
                      if (iVar5 == -1) {
                        iVar17 = -1;
                      }
                      else {
                        iVar17 = *(int *)(*(int *)(iVar5 * 4 + iVar2) + 0x30);
                      }
                      if (iVar18 == iVar17) goto LAB_8296f2fc;
                      goto LAB_8296f098;
                    }
                  }
                }
                else {
LAB_8296f098:
                  if (uVar24 == 3) {
                    uVar3 = puVar4[2];
                    if (*(int *)(iVar30 + uVar3) == -1) {
                      iVar18 = -1;
                    }
                    else {
                      iVar18 = *(int *)(*(int *)(*(int *)(iVar30 + uVar3) * 4 + iVar2) + 0x30);
                    }
                    if (*(int *)(iVar10 + uVar3) == -1) {
                      iVar17 = -1;
                    }
                    else {
                      iVar17 = *(int *)(*(int *)(*(int *)(iVar10 + uVar3) * 4 + iVar2) + 0x30);
                    }
                    if (iVar18 == iVar17) {
                      if (*(int *)(iVar15 + uVar3) == -1) {
                        iVar18 = -1;
                      }
                      else {
                        iVar18 = *(int *)(*(int *)(*(int *)(iVar15 + uVar3) * 4 + iVar2) + 0x30);
                      }
                      if (*(int *)(iVar22 + uVar3) == -1) {
                        iVar17 = -1;
                      }
                      else {
                        iVar17 = *(int *)(*(int *)(*(int *)(iVar22 + uVar3) * 4 + iVar2) + 0x30);
                      }
                      if (iVar18 == iVar17) {
                        lVar16 = (uVar13 & 0xfffff) * 2;
                        iVar18 = *(int *)((int)((lVar16 + uVar28 & 0xffffffff) << 2) + uVar3);
                        if (iVar18 == -1) {
                          iVar18 = -1;
                        }
                        else {
                          iVar18 = *(int *)(*(int *)(iVar18 * 4 + iVar2) + 0x30);
                        }
                        iVar17 = *(int *)((int)((lVar16 + uVar11 & 0xffffffff) << 2) + uVar3);
                        if (iVar17 == -1) {
                          iVar17 = -1;
                        }
                        else {
                          iVar17 = *(int *)(*(int *)(iVar17 * 4 + iVar2) + 0x30);
                        }
                        if (iVar18 == iVar17) goto LAB_8296f2fc;
                        goto LAB_8296f190;
                      }
                    }
                  }
                  else {
LAB_8296f190:
                    if (uVar24 == 4) {
                      uVar3 = puVar4[2];
                      if (*(int *)(iVar30 + uVar3) == -1) {
                        iVar18 = -1;
                      }
                      else {
                        iVar18 = *(int *)(*(int *)(*(int *)(iVar30 + uVar3) * 4 + iVar2) + 0x30);
                      }
                      if (*(int *)(iVar10 + uVar3) == -1) {
                        iVar17 = -1;
                      }
                      else {
                        iVar17 = *(int *)(*(int *)(*(int *)(iVar10 + uVar3) * 4 + iVar2) + 0x30);
                      }
                      if (iVar18 == iVar17) {
                        if (*(int *)(iVar15 + uVar3) == -1) {
                          iVar15 = -1;
                        }
                        else {
                          iVar15 = *(int *)(*(int *)(*(int *)(iVar15 + uVar3) * 4 + iVar2) + 0x30);
                        }
                        if (*(int *)(iVar22 + uVar3) == -1) {
                          iVar22 = -1;
                        }
                        else {
                          iVar22 = *(int *)(*(int *)(*(int *)(iVar22 + uVar3) * 4 + iVar2) + 0x30);
                        }
                        if (iVar15 == iVar22) {
                          lVar16 = (uVar13 & 0xfffff) * 2;
                          iVar15 = *(int *)((int)((lVar16 + uVar28 & 0xffffffff) << 2) + uVar3);
                          if (iVar15 == -1) {
                            iVar15 = -1;
                          }
                          else {
                            iVar15 = *(int *)(*(int *)(iVar15 * 4 + iVar2) + 0x30);
                          }
                          iVar22 = *(int *)((int)((lVar16 + uVar11 & 0xffffffff) << 2) + uVar3);
                          if (iVar22 == -1) {
                            iVar22 = -1;
                          }
                          else {
                            iVar22 = *(int *)(*(int *)(iVar22 * 4 + iVar2) + 0x30);
                          }
                          if (iVar15 == iVar22) {
                            iVar15 = *(int *)((int)((uVar7 * 3 + uVar28 & 0xffffffff) << 2) + uVar3)
                            ;
                            if (iVar15 == -1) {
                              iVar15 = -1;
                            }
                            else {
                              iVar15 = *(int *)(*(int *)(iVar15 * 4 + iVar2) + 0x30);
                            }
                            iVar22 = *(int *)((int)((uVar7 * 3 + uVar11 & 0xffffffff) << 2) + uVar3)
                            ;
                            if (iVar22 == -1) {
                              iVar22 = -1;
                            }
                            else {
                              iVar22 = *(int *)(*(int *)(iVar22 * 4 + iVar2) + 0x30);
                            }
                            if (iVar15 == iVar22) goto LAB_8296f2fc;
                          }
                        }
                      }
                    }
                  }
                }
LAB_8296f2e4:
                uVar11 = uVar11 + 1;
                iVar10 = iVar10 + 4;
                lVar29 = lVar29 + 4;
              } while ((uVar11 & 0xffffffff) < (uVar28 & 0xffffffff));
            }
            uVar28 = uVar28 + 1;
            iVar30 = iVar30 + 4;
          } while ((uVar28 & 0xffffffff) < uVar7);
          if ((uVar25 & 0xffffffff) < uVar7) {
            if ((uVar26 & 0xfffff) != 0) {
              lVar29 = 0;
              lVar27 = 0;
              uVar13 = uVar7;
              do {
                iVar9 = *(int *)(puVar4[4] + (int)lVar29);
                if (iVar9 != -1) {
                  *(int *)(puVar4[4] + (int)lVar27) = iVar9;
                  lVar16 = lVar27;
                  lVar19 = lVar29;
                  for (uVar28 = uVar24; uVar28 != 0; uVar28 = uVar28 - 1) {
                    iVar9 = (int)lVar19;
                    lVar19 = lVar19 + lVar20;
                    *(undefined4 *)((int)lVar16 + puVar4[2]) = *(undefined4 *)(iVar9 + puVar4[2]);
                    lVar16 = lVar16 + lVar20;
                  }
                  lVar27 = lVar27 + 4;
                }
                uVar13 = uVar13 - 1;
                lVar29 = lVar29 + 4;
              } while (uVar13 != 0);
            }
            if (1 < uVar24) {
              lVar27 = uVar24 - 1;
              uVar13 = uVar25;
              uVar28 = uVar7;
              do {
                lVar20 = 0;
                uVar11 = uVar25;
                uVar12 = uVar25 & 0xffffffff;
                while (uVar12 != 0) {
                  uVar14 = uVar28 + lVar20;
                  uVar12 = uVar13 + lVar20;
                  lVar20 = lVar20 + 1;
                  *(undefined4 *)((int)((uVar12 & 0xffffffff) << 2) + puVar4[2]) =
                       *(undefined4 *)((int)((uVar14 & 0xffffffff) << 2) + puVar4[2]);
                  uVar11 = uVar11 - 1;
                  uVar12 = uVar11;
                }
                lVar27 = lVar27 + -1;
                uVar28 = uVar28 + uVar7;
                uVar13 = uVar13 + uVar25;
              } while (lVar27 != 0);
            }
            uVar26 = (uint)uVar25;
            puVar4[3] = uVar26;
            puVar4[1] = uVar26 * (int)uVar24;
            bVar8 = true;
            *puVar4 = uVar26 & 0xfffff | *puVar4 & 0xfff00000;
          }
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < *(uint *)(param_1 + 0xc));
    if (bVar8) {
      fn_8296D7F0(param_1);
      return 0;
    }
  }
  return 1;
}

