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
extern unsigned int *auStack_b0;
extern int fn_8265C940();
extern int fn_8291C948();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack_108;
extern unsigned int iStack_10c;
extern unsigned int lbl_28280086;
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_100;
extern unsigned int uStack_102;
extern unsigned int uStack_104;
extern unsigned int uStack_110;
extern unsigned int uStack_138;
extern unsigned int uStack_d6;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


undefined8 fn_8291D9A8(undefined4 *param_1,longlong param_2,ulonglong param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar12;
  undefined1 *puVar11;
  uint uVar14;
  uint uVar15;
  ulonglong uVar13;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar22;
  ulonglong uVar21;
  ulonglong uVar23;
  ulonglong uVar24;
  byte *pbVar26;
  ulonglong uVar25;
  uint *puVar28;
  ulonglong uVar27;
  longlong lVar29;
  ulonglong uStack_138;
  uint auStack_130 [4];
  float afStack_120 [4];
  uint uStack_110;
  int iStack_10c;
  int iStack_108;
  undefined2 uStack_104;
  undefined2 uStack_102;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e0;
  short sStack_dc;
  short sStack_da;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  uint auStack_b0 [44];
  
  if ((param_3 & 0xffffffff) < 4) {
    return 0xffffffff80004005;
  }
  puVar28 = &uStack_e0;
  fn_82F68CC0(&uStack_e0,param_2,0x28);
  fn_8291C948(&uStack_e0,&uStack_e0);
  if ((param_3 & 0xffffffff) < (ulonglong)uStack_e0) {
    return 0xffffffff80004005;
  }
  if (uStack_e0 == 0xc) {
    puVar28 = &uStack_110;
    uStack_110 = 0xc;
    iStack_10c = (int)sStack_dc;
    iStack_108 = (int)sStack_da;
    uStack_104 = uStack_d8;
    uStack_102 = uStack_d6;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
  }
  else if (uStack_e0 < 0x28) {
    return 0xffffffff80004005;
  }
  uVar16 = puVar28[1];
  uVar6 = (ulonglong)uVar16;
  uVar18 = puVar28[2];
  uVar22 = uVar18;
  if ((int)uVar18 < 1) {
    uVar22 = -uVar18;
  }
  uVar20 = *puVar28;
  uVar1 = *(ushort *)((int)puVar28 + 0xe);
  uVar14 = puVar28[8];
  uStack_138 = (ulonglong)uVar1 << 0x20;
  if ((uVar1 < 9) && (uVar14 == 0)) {
    uVar14 = 1 << (uVar1 & 0x3f);
  }
  uVar24 = (longlong)(int)(((uint)LZCOUNT(uVar20 - 0xc) >> 5 ^ 1) + 3) * (longlong)(int)uVar14 +
           (ulonglong)uVar20;
  if ((param_3 & 0xffffffff) < (uVar24 & 0xffffffff)) {
    return 0xffffffff80004005;
  }
  if (*(short *)(puVar28 + 3) != 1) {
    return 0xffffffff80004005;
  }
  uVar14 = puVar28[4];
  if (uVar14 < 3) {
    if (uVar1 != 0x10) {
      if ((uVar1 != 0x18) && (uVar1 != 0x20)) {
        return 0xffffffff80004005;
      }
      puVar11 = &lbl_28280086;
      goto LAB_8291ddd0;
    }
LAB_8291ddc8:
    uVar20 = 0x28280000;
  }
  else {
    if (uVar14 != 3) {
      return 0xffffffff80004005;
    }
    if ((ulonglong)uVar20 < 0x34) {
      return 0xffffffff80004005;
    }
    uVar15 = puVar28[0xc];
    uVar2 = puVar28[0xb];
    uVar3 = puVar28[10];
    if (uVar20 < 0x38) {
      uVar20 = 0;
    }
    else {
      uVar20 = puVar28[0xd];
    }
    puVar11 = (undefined1 *)0x1a22aaa6;
    if (uVar1 != 0x10) {
      if (uVar1 == 0x18) {
        if (((uVar15 != 0xff) || (uVar2 != 0xff00)) || ((uVar3 != 0xff0000 || (uVar20 != 0))))
        goto LAB_8291ddd0;
LAB_8291dc90:
        uVar20 = 0x28280000;
      }
      else {
        if (uVar1 != 0x20) {
          return 0xffffffff80004005;
        }
        if (uVar15 != 0xff) {
          if (uVar15 == 0x3ff00000) {
            if (((uVar2 != 0xffc00) || (uVar3 != 0x3ff)) || (uVar20 != 0xc0000000))
            goto LAB_8291ddd0;
            uVar20 = 0x1a200000;
          }
          else {
            if (uVar15 == 0xff0000) {
              if ((uVar2 != 0xff00) || (uVar3 != 0xff)) goto LAB_8291ddd0;
              if (uVar20 == 0xff000000) {
                uVar20 = 0x1a200000;
              }
              else {
                if (uVar20 != 0) goto LAB_8291ddd0;
                uVar20 = 0x2a200000;
              }
              goto LAB_8291dc94;
            }
            if (uVar15 == 0) {
              if (((uVar2 == 0xffff0000) && (uVar3 == 0xffff)) && (uVar20 == 0)) {
                puVar11 = (undefined1 *)0x2d200099;
              }
              goto LAB_8291ddd0;
            }
            if (uVar15 != 0x3ff) {
              if (((uVar15 != 0xff00) || (uVar2 != 0xff0000)) ||
                 ((uVar3 != 0xff000000 || (uVar20 != 0)))) goto LAB_8291ddd0;
              uVar24 = uVar24 + 1;
              goto LAB_8291dc90;
            }
            if (((uVar2 != 0xffc00) || (uVar3 != 0x3ff00000)) || (uVar20 != 0xc0000000))
            goto LAB_8291ddd0;
            uVar20 = 0x18280000;
          }
          puVar11 = (undefined1 *)(uVar20 | 0xb6);
          goto LAB_8291ddd0;
        }
        if ((uVar2 != 0xff00) || (uVar3 != 0xff0000)) goto LAB_8291ddd0;
        if (uVar20 == 0) goto LAB_8291dc90;
        if (uVar20 != 0xff000000) goto LAB_8291ddd0;
        uVar20 = 0x18280000;
      }
LAB_8291dc94:
      puVar11 = (undefined1 *)(uVar20 | 0x86);
      goto LAB_8291ddd0;
    }
    if (uVar15 == 0xff) {
      if (((uVar2 == 0xff) && (uVar3 == 0xff)) && (uVar20 == 0xff00)) {
        puVar11 = (undefined1 *)0x800004a;
      }
      goto LAB_8291ddd0;
    }
    if (uVar15 != 0x1f) {
      if (uVar15 == 0xf) {
        if ((uVar2 == 0xf0) && (uVar3 == 0xf00)) {
          if (uVar20 == 0xf000) {
            uVar20 = 0x18280000;
          }
          else {
            if (uVar20 != 0) goto LAB_8291ddd0;
            uVar20 = 0x28280000;
          }
          puVar11 = (undefined1 *)(uVar20 | 0x4f);
        }
      }
      else if ((((uVar15 == 0xffff) && (uVar2 == 0xffff)) && (uVar3 == 0xffff)) && (uVar20 == 0)) {
        puVar11 = (undefined1 *)0x28000058;
      }
      goto LAB_8291ddd0;
    }
    if (uVar2 == 0x7e0) {
      if ((uVar3 == 0xf800) && (uVar20 == 0)) {
        puVar11 = (undefined1 *)0x28280044;
      }
      goto LAB_8291ddd0;
    }
    if ((uVar2 != 0x3e0) || (uVar3 != 0x7c00)) goto LAB_8291ddd0;
    if (uVar20 == 0) goto LAB_8291ddc8;
    if (uVar20 != 0x8000) goto LAB_8291ddd0;
    uVar20 = 0x18280000;
  }
  puVar11 = (undefined1 *)(uVar20 | 0x43);
LAB_8291ddd0:
  uVar20 = (uint)puVar11 & 0xfffffe3f;
  if (uVar20 != 0xfffffe3f) {
    if (uVar1 == 1) {
      uVar23 = (uVar6 + 7 & 0xffffffff) >> 3;
    }
    else if (uVar1 == 4) {
      uVar23 = (uVar6 + 1 & 0xffffffff) >> 1;
    }
    else if (uVar1 == 0x18) {
      uVar23 = uVar6 * 3;
      uVar6 = ((ulonglong)uVar16 & 0x3fffffff) << 2;
    }
    else {
      uVar23 = (longlong)(int)(uint)(uVar1 >> 3) * (longlong)(int)uVar16;
      uVar6 = uVar23;
    }
    if (uVar20 == 0x1a22aa26) {
      uVar6 = ((ulonglong)uVar16 & 0xfffffff) << 4;
    }
    uVar25 = uVar23 + 3 & 0xfffffffc;
    if (((uVar14 != 0) && (uVar14 != 3)) ||
       (((longlong)(int)(uVar22 - 1) * (longlong)(int)uVar25 + uVar23 + uVar24 & 0xffffffff) <=
        (param_3 & 0xffffffff))) {
      if (((uVar14 == 0) && (uVar20 == 0x28280006)) && (uVar20 = 0, uVar22 != 0)) {
        lVar7 = uVar24 + param_2;
        do {
          uVar15 = 0;
          lVar29 = lVar7;
          if (uVar16 != 0) {
            do {
              if ((*(uint *)lVar29 & 0xff000000) != 0) {
                puVar11 = (undefined1 *)0x18280086;
                break;
              }
              uVar15 = uVar15 + 1;
              lVar29 = lVar29 + 4;
            } while (uVar15 < uVar16);
            if (uVar15 < uVar16) break;
          }
          uVar20 = uVar20 + 1;
          lVar7 = lVar7 + uVar25;
        } while (uVar20 < uVar22);
      }
      *param_1 = puVar11;
      uVar20 = (int)uVar6 + 3U & 0xfffffffc;
      param_1[3] = uVar16;
      param_1[4] = uVar22;
      param_1[0xd] = 0;
      param_1[0xc] = uVar20;
      param_1[5] = 1;
      if (param_1[0x10] != 0) {
        if (((uVar14 == 0) || (uVar14 == 3)) &&
           ((((int)uVar18 < 0 && ((7 < uVar1 && (uVar1 != 0x18)))) &&
            (((uint)puVar11 & 0xfffffe3f) != 0x1a22aa26)))) {
          param_1[0xe] = 0;
          param_1[1] = (int)uVar24 + (int)param_2;
        }
        else {
          param_1[0xe] = 1;
          uVar23 = fn_8265C940((longlong)(int)uVar20 * (longlong)(int)uVar22,0x24810000);
          param_1[1] = (int)uVar23;
          fVar5 = lbl_82002AE0;
          if (uVar23 == 0) {
            return 0xffffffff8007000e;
          }
          uVar24 = uVar24 + param_2;
          uVar20 = param_1[0xc];
          uVar13 = (ulonglong)uVar20;
          param_3 = param_2 + param_3;
          uVar27 = uVar23;
          if (-1 < (int)uVar18) {
            uVar13 = -uVar13;
            uVar27 = (longlong)(int)(uVar22 - 1) * (longlong)(int)uVar20 + uVar23;
          }
          uVar21 = (longlong)(int)uVar20 * (longlong)(int)uVar22 + uVar23;
          if (uVar14 == 2) {
            uVar6 = uVar27;
            uVar25 = uVar24;
            if ((uVar23 & 0xffffffff) <= (uVar27 & 0xffffffff)) {
              do {
                if ((uVar21 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
                  return 0;
                }
                if ((uVar25 & 0xffffffff) < (uVar24 & 0xffffffff)) {
                  return 0xffffffff80004005;
                }
                if ((param_3 & 0xffffffff) <= (uVar25 + 1 & 0xffffffff)) {
                  return 0xffffffff80004005;
                }
                pbVar26 = (byte *)uVar25;
                uVar9 = (ulonglong)*pbVar26;
                pbVar8 = (byte *)(uVar25 + 1);
                if (uVar9 == 0) {
                  bVar12 = *pbVar8;
                  uVar10 = (ulonglong)bVar12;
                  if (uVar10 == 0) {
                    uVar27 = uVar6 + uVar13;
                    uVar9 = uVar27;
                  }
                  else {
                    uVar9 = uVar21;
                    if (uVar10 != 1) {
                      if (uVar10 < 3) {
                        uVar9 = uVar25 + 3;
                        if ((param_3 & 0xffffffff) <= (uVar9 & 0xffffffff)) {
                          return 0xffffffff80004005;
                        }
                        uVar25 = uVar25 + 2;
                        uVar27 = (longlong)(int)(uint)*(byte *)uVar9 * (longlong)(int)uVar13 +
                                 (ulonglong)*(byte *)uVar25 + uVar27;
                        uVar9 = uVar6;
                      }
                      else {
                        if ((uVar27 & 0xffffffff) < (uVar23 & 0xffffffff)) {
                          return 0xffffffff80004005;
                        }
                        if ((uVar21 & 0xffffffff) < (uVar10 + uVar27 & 0xffffffff)) {
                          return 0xffffffff80004005;
                        }
                        if ((uVar10 != 0) &&
                           ((param_3 & 0xffffffff) <=
                            ((longlong)((int)(bVar12 - 1) >> 1) + uVar25 + 2 & 0xffffffff))) {
                          return 0xffffffff80004005;
                        }
                        uVar16 = 0;
                        if (bVar12 != 0) {
                          do {
                            if ((uVar16 & 1) == 0) {
                              bVar12 = pbVar26[((int)uVar16 >> 1) + 2] >> 4;
                            }
                            else {
                              bVar12 = pbVar26[((int)uVar16 >> 1) + 2] & 0xf;
                            }
                            *(byte *)(uVar16 + (int)uVar27) = bVar12;
                            uVar16 = uVar16 + 1;
                          } while ((int)uVar16 < (int)(uint)*pbVar8);
                        }
                        uVar27 = *pbVar8 + uVar27;
                        uVar25 = ((ulonglong)(*pbVar8 >> 1) + 1 & 0xfffffffe) + uVar25;
                        uVar9 = uVar6;
                      }
                    }
                  }
                }
                else {
                  if ((uVar27 & 0xffffffff) < (uVar23 & 0xffffffff)) {
                    return 0xffffffff80004005;
                  }
                  if ((uVar21 & 0xffffffff) < (uVar9 + uVar27 & 0xffffffff)) {
                    return 0xffffffff80004005;
                  }
                  uVar16 = 0;
                  if (*pbVar26 != 0) {
                    do {
                      if ((uVar16 & 1) == 0) {
                        bVar12 = *pbVar8 >> 4;
                      }
                      else {
                        bVar12 = *pbVar8 & 0xf;
                      }
                      *(byte *)(uVar16 + (int)uVar27) = bVar12;
                      uVar16 = uVar16 + 1;
                      uVar9 = (ulonglong)*pbVar26;
                    } while ((int)uVar16 < (int)(uint)*pbVar26);
                  }
                  uVar27 = uVar9 + uVar27;
                  uVar9 = uVar6;
                }
                uVar25 = uVar25 + 2;
                uVar6 = uVar9;
              } while ((uVar23 & 0xffffffff) <= (uVar9 & 0xffffffff));
            }
          }
          else if (uVar14 == 1) {
            uVar6 = uVar27;
            uVar25 = uVar24;
            if ((uVar23 & 0xffffffff) <= (uVar27 & 0xffffffff)) {
              do {
                if ((uVar21 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
                  return 0;
                }
                if ((uVar25 & 0xffffffff) < (uVar24 & 0xffffffff)) {
                  return 0xffffffff80004005;
                }
                if ((param_3 & 0xffffffff) <= (uVar25 + 1 & 0xffffffff)) {
                  return 0xffffffff80004005;
                }
                pbVar8 = (byte *)(uVar25 + 1);
                if ((ulonglong)*(byte *)uVar25 != 0) {
                  if ((uVar27 & 0xffffffff) < (uVar23 & 0xffffffff)) {
                    return 0xffffffff80004005;
                  }
                  if ((uVar21 & 0xffffffff) < (*(byte *)uVar25 + uVar27 & 0xffffffff)) {
                    return 0xffffffff80004005;
                  }
                    /* WARNING: Subroutine does not return */
                  fn_82F691F0(uVar27,*pbVar8);
                }
                uVar9 = (ulonglong)*pbVar8;
                if (uVar9 == 0) {
                  uVar27 = uVar6 + uVar13;
                  uVar10 = uVar27;
                }
                else {
                  uVar10 = uVar21;
                  if (uVar9 != 1) {
                    uVar10 = uVar6;
                    if (uVar9 < 3) {
                      uVar6 = uVar25 + 3;
                      if ((param_3 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
                        return 0xffffffff80004005;
                      }
                      uVar25 = uVar25 + 2;
                      uVar27 = (longlong)(int)(uint)*(byte *)uVar6 * (longlong)(int)uVar13 +
                               (ulonglong)*(byte *)uVar25 + uVar27;
                    }
                    else {
                      if ((uVar27 & 0xffffffff) < (uVar23 & 0xffffffff)) {
                        return 0xffffffff80004005;
                      }
                      if ((uVar21 & 0xffffffff) < (uVar9 + uVar27 & 0xffffffff)) {
                        return 0xffffffff80004005;
                      }
                      if ((param_3 & 0xffffffff) < (uVar9 + uVar25 + 2 & 0xffffffff)) {
                        return 0xffffffff80004005;
                      }
                      fn_82F68CC0(uVar27,uVar25 + 2);
                      uVar27 = *pbVar8 + uVar27;
                      uVar25 = ((ulonglong)*pbVar8 + 1 & 0xfffffffe) + uVar25;
                    }
                  }
                }
                uVar25 = uVar25 + 2;
                uVar6 = uVar10;
              } while ((uVar23 & 0xffffffff) <= (uVar10 & 0xffffffff));
            }
          }
          else if (uVar1 == 1) {
            if ((uVar23 & 0xffffffff) <= (uVar27 & 0xffffffff)) {
              do {
                if ((uVar21 & 0xffffffff) <= (uVar27 & 0xffffffff)) {
                  return 0;
                }
                uVar18 = 0;
                for (uVar6 = (ulonglong)uVar16; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(byte *)(uVar18 + (int)uVar27) =
                       *(byte *)((uVar18 >> 3) + (int)uVar24) >> (7 - (uVar18 & 7) & 0x3f) & 1;
                  uVar18 = uVar18 + 1;
                }
                uVar27 = uVar27 + uVar13;
                uVar24 = uVar24 + uVar25;
              } while ((uVar23 & 0xffffffff) <= (uVar27 & 0xffffffff));
            }
          }
          else if (uVar1 == 4) {
            if ((uVar23 & 0xffffffff) <= (uVar27 & 0xffffffff)) {
              do {
                if ((uVar21 & 0xffffffff) <= (uVar27 & 0xffffffff)) {
                  return 0;
                }
                uVar18 = 0;
                for (uVar6 = (ulonglong)uVar16; uVar6 != 0; uVar6 = uVar6 - 1) {
                  bVar12 = *(byte *)((uVar18 >> 1) + (int)uVar24);
                  if ((uVar18 & 1) == 0) {
                    bVar12 = bVar12 >> 4;
                  }
                  else {
                    bVar12 = bVar12 & 0xf;
                  }
                  *(byte *)(uVar18 + (int)uVar27) = bVar12;
                  uVar18 = uVar18 + 1;
                }
                uVar27 = uVar27 + uVar13;
                uVar24 = uVar24 + uVar25;
              } while ((uVar23 & 0xffffffff) <= (uVar27 & 0xffffffff));
            }
          }
          else if (uVar1 == 0x18) {
            if ((uVar23 & 0xffffffff) <= (uVar27 & 0xffffffff)) {
              do {
                uVar6 = (ulonglong)uVar16;
                uVar9 = uVar24;
                uVar10 = uVar27;
                if ((uVar21 & 0xffffffff) <= (uVar27 & 0xffffffff)) {
                  return 0;
                }
                for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                  puVar11 = (undefined1 *)uVar9;
                  puVar17 = (undefined1 *)uVar10;
                  *puVar17 = *puVar11;
                  puVar17[1] = puVar11[1];
                  puVar17[2] = puVar11[2];
                  puVar17[3] = 0xff;
                  uVar9 = uVar9 + 3;
                  uVar10 = uVar10 + 4;
                }
                uVar27 = uVar27 + uVar13;
                uVar24 = uVar24 + uVar25;
              } while ((uVar23 & 0xffffffff) <= (uVar27 & 0xffffffff));
            }
          }
          else if (((uint)puVar11 & 0xfffffe3f) == 0x1a22aa26) {
            uVar18 = 0;
            do {
              uVar22 = *(uint *)((int)auStack_130 + uVar18);
              *(undefined4 *)((int)auStack_b0 + uVar18) = 0;
              if (uVar22 != 0) {
                while ((uVar22 & 1) == 0) {
                  uVar22 = *(uint *)((int)auStack_130 + uVar18) >> 1;
                  *(uint *)((int)auStack_130 + uVar18) = uVar22;
                  *(int *)((int)auStack_b0 + uVar18) = *(int *)((int)auStack_b0 + uVar18) + 1;
                }
                uStack_138 = (ulonglong)*(uint *)((int)auStack_130 + uVar18);
                *(float *)((int)afStack_120 + uVar18) = fVar5 / (float)uStack_138;
              }
              uVar18 = uVar18 + 4;
            } while (uVar18 < 0x10);
            if ((uVar23 & 0xffffffff) <= (uVar27 & 0xffffffff)) {
              do {
                if ((uVar21 & 0xffffffff) <= (uVar27 & 0xffffffff)) {
                  return 0;
                }
                if ((ulonglong)uVar16 != 0) {
                  lVar7 = uVar24 - 2;
                  uVar6 = uVar27;
                  uVar9 = (ulonglong)uVar16;
                  do {
                    if (uVar1 == 0x10) {
                      lVar7 = lVar7 + 2;
                      uStack_138 = ((((U64)(uStack_138)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)*(ushort *)lVar7)) & ((U64)0xFFFFFFFF)) << 0));
                    }
                    else if (uVar1 == 0x20) {
                      uStack_138 = ((((U64)(uStack_138)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)(*(uint *)((int)lVar7 + 2))) & ((U64)0xFFFFFFFF)) << 0));
                      lVar7 = lVar7 + 4;
                    }
                    iVar19 = 0;
                    lVar29 = 4;
                    do {
                      fVar4 = fVar5;
                      if (*(uint *)((int)auStack_130 + iVar19) != 0) {
                        fVar4 = (float)((((U64)(uStack_138) >> 0) & 0xFFFFFFFF) >>
                                        (*(uint *)((int)auStack_b0 + iVar19) & 0x3f) &
                                       *(uint *)((int)auStack_130 + iVar19)) *
                                *(float *)((int)afStack_120 + iVar19);
                      }
                      *(float *)(iVar19 + (int)uVar6) = fVar4;
                      iVar19 = iVar19 + 4;
                      lVar29 = lVar29 + -1;
                    } while (lVar29 != 0);
                    uVar9 = uVar9 - 1;
                    uVar6 = uVar6 + 0x10;
                  } while (uVar9 != 0);
                }
                uVar27 = uVar27 + uVar13;
                uVar24 = uVar24 + uVar25;
              } while ((uVar23 & 0xffffffff) <= (uVar27 & 0xffffffff));
            }
          }
          else {
            for (; ((uVar23 & 0xffffffff) <= (uVar27 & 0xffffffff) &&
                   ((uVar27 & 0xffffffff) < (uVar21 & 0xffffffff))); uVar27 = uVar27 + uVar13) {
              fn_82F68CC0(uVar27,uVar24,uVar6);
              uVar24 = uVar24 + uVar25;
            }
          }
        }
      }
      return 0;
    }
  }
  return 0xffffffff80004005;
}

