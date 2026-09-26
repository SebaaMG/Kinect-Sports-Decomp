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
extern unsigned int *auStack_b8;
extern int fn_82964628();
extern int fn_82965778();
extern int fn_82F65018();
extern unsigned int iStack00000024;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200E890;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_829699A0(int param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar20;
  uint uVar21;
  ulonglong uVar19;
  int iVar22;
  uint *puVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int *piVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  uint *puStack0000001c;
  int iStack00000024;
  uint uStack0000002c;
  uint uStack00000034;
  uint auStack_b8 [46];
  
  iVar13 = *(int *)(param_1 + 0x14);
  uVar12 = *param_2;
  puVar4 = *(uint **)(param_3 * 4 + iVar13);
  uVar27 = *(uint *)(*(int *)(param_5 * 4 + iVar13) + 0x30);
  uVar25 = *(uint *)(*(int *)(param_4 * 4 + iVar13) + 0x30);
  iVar26 = uVar25 * 4;
  iVar16 = uVar27 * 4;
  puVar5 = *(uint **)(iVar13 + iVar26);
  puVar6 = *(uint **)(iVar16 + iVar13);
  uVar17 = *(uint *)(*(int *)(puVar4[1] * 4 + *(int *)(param_1 + 0x10)) + 4);
  if ((uVar17 & 1) == 0) {
    return 0;
  }
  if ((uVar17 & 0x1000) != 0) {
    return 0;
  }
  uVar17 = *puVar4;
  uVar29 = *puVar5;
  uVar2 = *puVar6;
  uVar14 = uVar29 & 0x1f;
  uVar28 = uVar2 & 0x1f;
  if (((uVar17 & 0xe000000) == 0) &&
     (((((uVar21 = uVar12 & 0xfff00000, uVar21 == 0x20000000 || (uVar21 == 0x20100000)) ||
        (uVar21 == 0x20400000)) || ((uVar21 == 0x20700000 || (uVar21 == 0x20800000)))) ||
      (uVar21 == 0x20900000)))) {
    uVar21 = uVar2 | uVar29;
    if ((uVar21 & 0x8000000) == 0) {
      if ((uVar21 & 0x4000000) == 0) {
        if ((uVar21 & 0x2000000) == 0) goto LAB_82969ac4;
        uVar21 = uVar17 | 0x2000000;
      }
      else {
        uVar21 = uVar17 | 0x4000000;
      }
    }
    else {
      uVar21 = uVar17 | 0x8000000;
    }
    *puVar4 = uVar21;
  }
LAB_82969ac4:
  if (((*puVar6 | *puVar5) & 0x40) != 0) {
    uVar21 = uVar12 & 0xfff00000;
    if (uVar21 < 0x20600001) {
      if ((((uVar21 == 0x20600000) || (uVar21 == 0x20000000)) || (uVar21 == 0x20100000)) ||
         ((uVar21 == 0x20400000 || (uVar21 == 0x20500000)))) {
LAB_82969b2c:
        *puVar4 = *puVar4 | 0x40;
      }
    }
    else if (((uVar21 == 0x20700000) || (uVar21 == 0x20800000)) || (uVar21 == 0x20900000))
    goto LAB_82969b2c;
  }
  uVar12 = uVar12 & 0xfff00000;
  if (uVar12 < 0x20400001) {
    if (uVar12 == 0x20400000) {
      uVar21 = uVar28 & uVar14 & 0xe;
    }
    else {
      if (uVar12 == 0x20000000) {
        uVar20 = uVar14 | 8;
        uVar21 = 8;
      }
      else {
        if (uVar12 != 0x20100000) {
          if ((uVar12 == 0x20200000) || (uVar12 == 0x20300000)) {
            uVar21 = *puVar4 | 0x17;
            goto LAB_82969d88;
          }
          goto LAB_82969d8c;
        }
        uVar20 = uVar14 | 4;
        uVar21 = 4;
      }
      uVar21 = uVar20 & uVar28 | uVar29 & uVar21;
    }
    uVar21 = uVar21 | *puVar4;
LAB_82969d88:
    *puVar4 = uVar21;
  }
  else {
    if (uVar12 != 0x20500000) {
      if (((uVar12 != 0x20700000) && (uVar12 != 0x20800000)) && (uVar12 != 0x20900000))
      goto LAB_82969d8c;
      uVar21 = uVar28 & uVar14 | *puVar4;
      goto LAB_82969d88;
    }
    uVar21 = uVar28 & uVar14 & 3 | *puVar4;
    *puVar4 = uVar21;
    if ((((uVar29 & 4) != 0) && ((uVar2 & 4) != 0)) || (((uVar29 & 8) != 0 && ((uVar2 & 8) != 0))))
    {
      *puVar4 = uVar21 | 4;
    }
    if ((((uVar29 & 4) != 0) && ((uVar2 & 8) != 0)) || (((uVar29 & 8) != 0 && ((uVar2 & 4) != 0))))
    {
      *puVar4 = *puVar4 | 8;
    }
    if (puVar5 == puVar6) {
      uVar21 = *puVar4 | 4;
      goto LAB_82969d88;
    }
    if (((*(uint *)(*(int *)(puVar5[1] * 4 + *(int *)(param_1 + 0x10)) + 4) & 2) == 0) ||
       (puVar7 = *(uint **)(puVar5[0x12] * 4 + *(int *)(param_1 + 0x18)),
       (*puVar7 & 0xfff00000) != 0x10100000)) {
      if (((*(uint *)(*(int *)(puVar6[1] * 4 + *(int *)(param_1 + 0x10)) + 4) & 2) != 0) &&
         (puVar7 = *(uint **)(puVar6[0x12] * 4 + *(int *)(param_1 + 0x18)),
         (*puVar7 & 0xfff00000) == 0x10100000)) {
        uVar21 = puVar7[3];
        uVar20 = 0;
        if (uVar21 != 0) {
          iVar13 = 0;
          do {
            if (*(uint *)(iVar13 + puVar7[4]) == uVar27) break;
            uVar20 = uVar20 + 1;
            iVar13 = iVar13 + 4;
          } while (uVar20 < uVar21);
        }
        if (uVar20 < uVar21) {
          bVar1 = *(uint *)(uVar20 * 4 + puVar7[2]) == uVar25;
          goto LAB_82969d7c;
        }
      }
    }
    else {
      uVar21 = puVar7[3];
      uVar20 = 0;
      if (uVar21 != 0) {
        iVar13 = 0;
        do {
          if (*(uint *)(iVar13 + puVar7[4]) == uVar25) break;
          uVar20 = uVar20 + 1;
          iVar13 = iVar13 + 4;
        } while (uVar20 < uVar21);
      }
      if (uVar20 < uVar21) {
        bVar1 = *(uint *)(uVar20 * 4 + puVar7[2]) == uVar27;
LAB_82969d7c:
        if (bVar1) {
          uVar21 = *puVar4 | 8;
          goto LAB_82969d88;
        }
      }
    }
  }
LAB_82969d8c:
  dVar32 = lbl_82005710;
  uVar21 = uVar27;
  puStack0000001c = param_2;
  iStack00000024 = param_3;
  uStack0000002c = uVar25;
  uStack00000034 = uVar27;
  if ((uVar17 & 0x40) == 0) {
    if (((uVar29 & 4) == 0) || ((uVar2 & 8) == 0)) {
LAB_82969dfc:
      if (((uVar29 & 8) != 0) && ((uVar2 & 4) != 0)) {
        if (uVar12 == 0x20000000) {
LAB_82969de8:
          puVar4[0xc] = uVar25;
          return 0;
        }
        if (uVar12 == 0x20100000) goto LAB_82969df4;
      }
      goto LAB_82969e1c;
    }
    if (uVar12 == 0x20000000) goto LAB_82969df4;
    if (uVar12 == 0x20100000) goto LAB_82969de8;
    if (uVar12 == 0x20200000) goto LAB_82969dcc;
    if (uVar12 != 0x20300000) goto LAB_82969dfc;
LAB_82969dc4:
    dVar32 = lbl_82005758;
    goto LAB_82969dcc;
  }
LAB_82969e1c:
  iVar13 = *(int *)(param_1 + 0x10);
  uVar20 = *(uint *)(*(int *)(puVar5[1] * 4 + iVar13) + 4);
  if (((((uVar20 & 0x100) != 0) && (puVar5[2] == 0xffffffff)) &&
      ((*(uint *)(*(int *)(puVar6[1] * 4 + iVar13) + 4) & 0x100) != 0)) && (puVar6[2] == 0xffffffff)
     ) {
    dVar31 = *(double *)(puVar5 + 8);
    dVar33 = *(double *)(puVar6 + 8);
    dVar32 = dVar31;
    if (uVar12 == 0x20000000) {
      if (dVar31 < dVar33) goto LAB_82969dcc;
    }
    else {
      if (uVar12 != 0x20100000) {
        if (uVar12 == 0x20200000) {
          dVar32 = lbl_82005710;
          if (dVar33 <= dVar31) goto LAB_82969dcc;
        }
        else {
          if (uVar12 != 0x20300000) {
            if (uVar12 == 0x20400000) {
              dVar32 = dVar33 + dVar31;
            }
            else if (uVar12 == 0x20500000) {
              dVar32 = dVar33 * dVar31;
            }
            else {
              if (uVar12 != 0x20600000) {
                return 0;
              }
              dVar32 = (double)fn_82F65018();
            }
            goto LAB_82969dcc;
          }
          dVar32 = lbl_82005710;
          if (dVar31 < dVar33) goto LAB_82969dcc;
        }
        goto LAB_82969dc4;
      }
      if (dVar33 <= dVar31) goto LAB_82969dcc;
    }
    dVar32 = dVar33;
    goto LAB_82969dcc;
  }
  if (((uVar17 & 0x40) != 0) ||
     ((((uVar20 & 0x100) == 0 || (puVar5[2] != 0xffffffff)) &&
      (((*(uint *)(*(int *)(puVar6[1] * 4 + iVar13) + 4) & 0x100) == 0 || (puVar6[2] != 0xffffffff))
      )))) {
    if (puVar5 == puVar6) {
      uVar21 = uVar25;
      if ((uVar12 == 0x20000000) || (uVar12 == 0x20100000)) goto LAB_82969df4;
      if (uVar12 == 0x20200000) {
        if ((uVar17 & 0x40) != 0) {
          return 0;
        }
        goto LAB_82969dcc;
      }
      if (uVar12 == 0x20300000) {
        if ((uVar17 & 0x40) != 0) {
          return 0;
        }
        goto LAB_82969dc4;
      }
      if ((uVar12 == 0x20500000) && ((uVar29 & 1) != 0)) goto LAB_82969df4;
    }
    if ((uVar17 & 0x40) != 0) {
      return 0;
    }
    if (uVar12 == 0x20400000) {
      if (((*(uint *)(*(int *)(puVar6[1] * 4 + iVar13) + 4) & 2) != 0) &&
         (puVar7 = *(uint **)(puVar6[0x12] * 4 + *(int *)(param_1 + 0x18)),
         (*puVar7 & 0xfff00000) == 0x10100000)) {
        uVar17 = puVar7[3];
        uVar29 = 0;
        if (uVar17 != 0) {
          iVar22 = 0;
          do {
            if (*(uint *)(iVar22 + puVar7[4]) == uVar27) break;
            uVar29 = uVar29 + 1;
            iVar22 = iVar22 + 4;
          } while (uVar29 < uVar17);
        }
        if ((uVar29 < uVar17) && (uVar25 == *(uint *)(uVar29 * 4 + puVar7[2]))) goto LAB_82969dcc;
      }
      if (((uVar20 & 2) != 0) &&
         (puVar7 = *(uint **)(puVar5[0x12] * 4 + *(int *)(param_1 + 0x18)),
         (*puVar7 & 0xfff00000) == 0x10100000)) {
        uVar17 = puVar7[3];
        uVar29 = 0;
        if (uVar17 != 0) {
          iVar22 = 0;
          do {
            if (*(uint *)(iVar22 + puVar7[4]) == uVar25) break;
            uVar29 = uVar29 + 1;
            iVar22 = iVar22 + 4;
          } while (uVar29 < uVar17);
        }
        if ((uVar29 < uVar17) && (uVar27 == *(uint *)(uVar29 * 4 + puVar7[2]))) goto LAB_82969dcc;
      }
      uVar17 = 0;
      do {
        uVar14 = 0;
        uVar28 = 0;
        uVar21 = uVar25;
        uVar29 = uVar27;
        if ((uVar17 & 4) != 0) {
          uVar21 = uVar27;
          uVar29 = uVar25;
        }
        if ((uVar17 & 2) == 0) {
LAB_8296a4ac:
          iVar22 = *(int *)(param_1 + 0x14);
          iVar15 = *(int *)(uVar21 * 4 + iVar22);
          if ((*(uint *)(*(int *)(*(int *)(iVar15 + 4) * 4 + iVar13) + 4) & 2) != 0) {
            puVar7 = *(uint **)(*(int *)(iVar15 + 0x48) * 4 + *(int *)(param_1 + 0x18));
            if ((*puVar7 & 0xfff00000) == 0x20400000) {
              uVar18 = (ulonglong)puVar7[3];
              uVar19 = 0;
              if (uVar18 != 0) {
                iVar15 = 0;
                do {
                  if (uVar21 == *(uint *)(iVar15 + puVar7[4])) {
                    iVar15 = (int)((uVar19 & 0x3fffffff) << 2);
                    iVar24 = (int)((uVar18 + uVar19 & 0x3fffffff) << 2);
                    if ((uVar17 & 1) == 0) {
                      iVar15 = *(int *)(iVar15 + puVar7[2]);
                      iVar3 = *(int *)(iVar24 + puVar7[2]);
                    }
                    else {
                      iVar3 = *(int *)(iVar15 + puVar7[2]);
                      iVar15 = *(int *)(iVar24 + puVar7[2]);
                    }
                    uVar14 = *(uint *)(*(int *)(iVar3 * 4 + *(int *)(param_1 + 0x14)) + 0x30);
                    uVar28 = *(uint *)(*(int *)(iVar15 * 4 + *(int *)(param_1 + 0x14)) + 0x30);
                    break;
                  }
                  uVar19 = uVar19 + 1;
                  iVar15 = iVar15 + 4;
                } while ((uVar19 & 0xffffffff) < uVar18);
              }
              if ((uVar17 & 2) == 0) {
                iVar15 = *(int *)(uVar14 * 4 + iVar22);
                if (((*(uint *)(*(int *)(*(int *)(iVar15 + 4) * 4 + iVar13) + 4) & 2) == 0) ||
                   (puVar7 = *(uint **)(*(int *)(iVar15 + 0x48) * 4 + *(int *)(param_1 + 0x18)),
                   (*puVar7 & 0xfff00000) != 0x10100000)) goto LAB_8296a614;
                uVar21 = 0;
                if (puVar7[3] != 0) {
                  iVar15 = 0;
                  do {
                    if (uVar14 == *(uint *)(puVar7[4] + iVar15)) {
                      uVar14 = *(uint *)(*(int *)(*(int *)(uVar21 * 4 + puVar7[2]) * 4 + iVar22) +
                                        0x30);
                      break;
                    }
                    uVar21 = uVar21 + 1;
                    iVar15 = iVar15 + 4;
                  } while (uVar21 < puVar7[3]);
                }
              }
              if (uVar29 == uVar14) {
                puVar4[0xc] = uVar28;
                return 0;
              }
            }
          }
        }
        else {
          iVar22 = *(int *)(uVar29 * 4 + *(int *)(param_1 + 0x14));
          if (((*(uint *)(*(int *)(*(int *)(iVar22 + 4) * 4 + iVar13) + 4) & 2) != 0) &&
             (puVar7 = *(uint **)(*(int *)(iVar22 + 0x48) * 4 + *(int *)(param_1 + 0x18)),
             (*puVar7 & 0xfff00000) == 0x10100000)) {
            uVar20 = 0;
            if (puVar7[3] != 0) {
              iVar22 = 0;
              do {
                if (uVar29 == *(uint *)(iVar22 + puVar7[4])) {
                  uVar29 = *(uint *)(*(int *)(*(int *)(uVar20 * 4 + puVar7[2]) * 4 +
                                             *(int *)(param_1 + 0x14)) + 0x30);
                  break;
                }
                uVar20 = uVar20 + 1;
                iVar22 = iVar22 + 4;
              } while (uVar20 < puVar7[3]);
            }
            goto LAB_8296a4ac;
          }
        }
LAB_8296a614:
        uVar17 = uVar17 + 1;
      } while (uVar17 < 8);
    }
    if (uVar12 == 0x20500000) {
      uVar17 = 0;
      iVar22 = *(int *)(param_1 + 0x14);
      auStack_b8[5] = 0;
      auStack_b8[4] = 0;
      auStack_b8[0] = uVar25;
      auStack_b8[1] = uVar27;
      auStack_b8[3] = 0;
      auStack_b8[2] = 0;
      do {
        piVar30 = (int *)((int)auStack_b8 + uVar17);
        iVar15 = *(int *)((int)auStack_b8 + uVar17);
        iVar24 = *(int *)(iVar15 * 4 + iVar22);
        if ((*(uint *)(*(int *)(*(int *)(iVar24 + 4) * 4 + iVar13) + 4) & 2) != 0) {
          iVar3 = *(int *)(param_1 + 0x18);
          do {
            puVar7 = *(uint **)(*(int *)(iVar24 + 0x48) * 4 + iVar3);
            if ((*puVar7 & 0xfff00000) == 0x10100000) {
              puVar23 = auStack_b8 + 4;
            }
            else {
              if ((*puVar7 & 0xfff00000) != 0x10300000) break;
              puVar23 = auStack_b8 + 2;
            }
            uVar29 = puVar7[3];
            *(uint *)(uVar17 + (int)puVar23) =
                 (uint)LZCOUNT(*(undefined4 *)(uVar17 + (int)puVar23)) >> 5;
            uVar14 = 0;
            if (uVar29 != 0) {
              iVar24 = 0;
              do {
                if (*(int *)(puVar7[4] + iVar24) == iVar15) {
                  iVar15 = *(int *)(*(int *)(*(int *)(uVar14 * 4 + puVar7[2]) * 4 + iVar22) + 0x30);
                  break;
                }
                uVar14 = uVar14 + 1;
                iVar24 = iVar24 + 4;
              } while (uVar14 < uVar29);
            }
            if (uVar29 <= uVar14) {
              return 0xffffffff80004005;
            }
            iVar24 = *(int *)(iVar15 * 4 + iVar22);
          } while ((*(uint *)(*(int *)(*(int *)(iVar24 + 4) * 4 + iVar13) + 4) & 2) != 0);
        }
        uVar17 = uVar17 + 4;
        *piVar30 = iVar15;
      } while (uVar17 < 8);
      if ((auStack_b8[0] == auStack_b8[1]) && (auStack_b8[2] != auStack_b8[3])) {
        dVar32 = lbl_8200E890;
        if (auStack_b8[4] != auStack_b8[5]) goto LAB_82969dcc;
        goto LAB_82969dc4;
      }
    }
    if ((((uVar12 == 0x20200000) &&
         (iVar22 = *(int *)(iVar26 + *(int *)(param_1 + 0x14)),
         (*(uint *)(*(int *)(*(int *)(iVar22 + 4) * 4 + iVar13) + 4) & 2) != 0)) &&
        ((uVar2 & 1) != 0)) &&
       (puVar7 = *(uint **)(*(int *)(iVar22 + 0x48) * 4 + *(int *)(param_1 + 0x18)),
       (*puVar7 & 0xfff00000) == 0x10100000)) {
      uVar17 = 0;
      if (puVar7[3] != 0) {
        iVar22 = 0;
        do {
          if (*(uint *)(puVar7[4] + iVar22) == uVar25) break;
          uVar17 = uVar17 + 1;
          iVar22 = iVar22 + 4;
        } while (uVar17 < puVar7[3]);
      }
      uVar21 = uVar27;
      if (*(uint *)(uVar17 * 4 + puVar7[2]) == uVar27) {
LAB_82969df4:
        puVar4[0xc] = uVar21;
        return 0;
      }
    }
    iVar22 = *(int *)(param_1 + 0x14);
    if ((*(uint *)(*(int *)(*(int *)(*(int *)(iVar26 + iVar22) + 4) * 4 + iVar13) + 4) & 2) == 0) {
      return 0;
    }
    if ((*(uint *)(*(int *)(*(int *)(*(int *)(iVar16 + iVar22) + 4) * 4 + iVar13) + 4) & 2) == 0) {
      return 0;
    }
    if (((uVar12 == 0x20500000) || (uVar12 == 0x20200000)) || (uVar12 == 0x20300000)) {
      puVar7 = *(uint **)(*(int *)(*(int *)(iVar26 + *(int *)(param_1 + 0x14)) + 0x48) * 4 +
                         *(int *)(param_1 + 0x18));
      puVar23 = *(uint **)(*(int *)(*(int *)(iVar16 + *(int *)(param_1 + 0x14)) + 0x48) * 4 +
                          *(int *)(param_1 + 0x18));
      if (((*puVar7 & 0xfff00000) == 0x10100000) && ((*puVar23 & 0xfff00000) == 0x10100000)) {
        uVar17 = 0;
        if (param_2[3] != 0) {
          iVar13 = 0;
          do {
            if (param_3 == *(int *)(param_2[4] + iVar13)) break;
            uVar17 = uVar17 + 1;
            iVar13 = iVar13 + 4;
          } while (uVar17 < param_2[3]);
        }
        uVar29 = 0;
        if (puVar7[3] != 0) {
          iVar13 = 0;
          do {
            if (uVar25 == *(uint *)(puVar7[4] + iVar13)) break;
            uVar29 = uVar29 + 1;
            iVar13 = iVar13 + 4;
          } while (uVar29 < puVar7[3]);
        }
        uVar25 = 0;
        if (puVar23[3] != 0) {
          iVar13 = 0;
          do {
            if (uVar27 == *(uint *)(puVar23[4] + iVar13)) break;
            uVar25 = uVar25 + 1;
            iVar13 = iVar13 + 4;
          } while (uVar25 < puVar23[3]);
        }
        if (uVar12 == 0x20500000) {
          iVar13 = *(int *)(uVar29 * 4 + puVar7[2]);
          iVar26 = *(int *)(uVar25 * 4 + puVar23[2]);
        }
        else {
          iVar13 = *(int *)(uVar25 * 4 + puVar23[2]);
          iVar26 = *(int *)(uVar29 * 4 + puVar7[2]);
        }
        *(undefined4 *)(uVar17 * 4 + param_2[2]) =
             *(undefined4 *)(*(int *)(iVar13 * 4 + *(int *)(param_1 + 0x14)) + 0x30);
        *(undefined4 *)((param_2[3] + uVar17) * 4 + param_2[2]) =
             *(undefined4 *)(*(int *)(iVar26 * 4 + *(int *)(param_1 + 0x14)) + 0x30);
        return 0;
      }
    }
    if (uVar12 != 0x20500000) {
      return 0;
    }
    if (uVar25 == uVar27) {
      puVar7 = *(uint **)(*(int *)(*(int *)(iVar26 + iVar22) + 0x48) * 4 + *(int *)(param_1 + 0x18))
      ;
      uVar12 = *puVar7 & 0xfff00000;
      if ((uVar12 == 0x10300000) || (uVar12 == 0x10700000)) {
        uVar17 = 0;
        if (puVar7[3] != 0) {
          iVar26 = 0;
          do {
            if (*(uint *)(puVar7[4] + iVar26) == uVar25) break;
            uVar17 = uVar17 + 1;
            iVar26 = iVar26 + 4;
          } while (uVar17 < puVar7[3]);
        }
        iVar26 = *(int *)(*(int *)(uVar17 * 4 + puVar7[2]) * 4 + iVar22);
        if (((*(uint *)(*(int *)(*(int *)(iVar26 + 4) * 4 + iVar13) + 4) & 2) != 0) &&
           (*(int *)(iVar26 + 8) == -1)) {
          puVar23 = *(uint **)(*(int *)(iVar26 + 0x48) * 4 + *(int *)(param_1 + 0x18));
          uVar29 = *puVar23 & 0xfff00000;
          if (((uVar29 == 0x10300000) || (uVar29 == 0x10700000)) && (uVar12 != uVar29)) {
            uVar12 = 0;
            if (puVar23[3] != 0) {
              uVar27 = puVar23[4];
              iVar13 = 0;
              do {
                *(undefined4 *)(uVar27 + iVar13) = *(undefined4 *)(uVar17 * 4 + puVar7[2]);
                uVar27 = puVar23[4];
                if (*(int *)(uVar27 + iVar13) != 0) break;
                uVar12 = uVar12 + 1;
                iVar13 = iVar13 + 4;
              } while (uVar12 < puVar23[3]);
            }
            puVar4[0xc] = *(uint *)(*(int *)(*(int *)(uVar12 * 4 + puVar23[2]) * 4 +
                                            *(int *)(param_1 + 0x14)) + 0x30);
            return 0;
          }
        }
      }
    }
    uVar12 = *puVar5;
    if (((uVar12 & 1) != 0) && (iVar13 = fn_82965778(param_1,uVar25,uVar27), iVar13 != 0)) {
      puVar4[0xc] = uVar27;
      return 0;
    }
    uVar17 = *puVar6;
    if (((uVar17 & 1) != 0) && (iVar13 = fn_82965778(param_1,uVar27,uVar25), iVar13 != 0)) {
      puVar4[0xc] = uVar25;
      return 0;
    }
    uVar2 = uStack00000034;
    uVar29 = uStack0000002c;
    bVar1 = false;
    bVar9 = false;
    bVar10 = true;
    bVar11 = true;
    uVar27 = puVar4[5];
    uVar25 = puVar4[6];
    if (uVar27 == 0xffffffff) {
      return 0;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    iVar26 = *(int *)(param_1 + 0x14);
    do {
      uVar18 = 0;
      iVar16 = *(int *)(*(int *)(*(int *)(uVar27 * 4 + iVar22) + 0x48) * 4 + iVar13);
      if ((ulonglong)*(uint *)(iVar16 + 0xc) != 0) {
        iVar15 = 0;
        do {
          if (*(uint *)(*(int *)(iVar16 + 0x10) + iVar15) == uVar27) break;
          uVar18 = uVar18 + 1;
          iVar15 = iVar15 + 4;
        } while ((uVar18 & 0xffffffff) < (ulonglong)*(uint *)(iVar16 + 0xc));
      }
      if ((uVar12 & 1) != 0) {
        uVar8 = *(undefined4 *)((int)((uVar18 & 0xffffffff) << 2) + *(int *)(iVar16 + 8));
        uVar14 = fn_82965778(param_1,uVar29,uVar8);
        if ((uVar14 & uVar25) != 0) {
          bVar1 = true;
        }
        if ((uVar25 == 0) && (iVar15 = fn_82965778(param_1,uVar8,uVar29), iVar15 != 0)) {
          bVar1 = true;
          bVar10 = false;
        }
      }
      if ((uVar17 & 1) != 0) {
        uVar18 = (ulonglong)*(uint *)((int)((uVar18 & 0xffffffff) << 2) + *(int *)(iVar16 + 8));
        uVar14 = fn_82965778(param_1,uVar2,uVar18);
        if ((uVar14 & uVar25) != 0) {
          bVar9 = true;
        }
        if ((uVar25 == 0) && (iVar16 = fn_82965778(param_1,uVar18,uVar2), iVar16 != 0)) {
          bVar9 = true;
          bVar11 = false;
        }
      }
      iVar16 = *(int *)(iVar26 + uVar27 * 4);
      uVar27 = *(uint *)(iVar16 + 0x14);
      uVar25 = *(uint *)(iVar16 + 0x18);
      if (uVar27 == 0xffffffff) {
        if (((bVar1) &&
            (((bVar9 && ((dVar32 = lbl_82005710, !bVar10 || (dVar32 = lbl_82005758, bVar11)))) ||
             (dVar32 = lbl_82005710, !bVar10)))) || ((bVar9 && (dVar32 = lbl_82005710, !bVar11)))) {
          uVar12 = fn_82964628(dVar32,param_1,*(undefined4 *)(param_1 + 0x78),0,0);
          puVar4[0xc] = uVar12;
          return 0;
        }
        if ((bVar1) && (bVar10)) {
          puVar4[0xc] = uVar2;
          return 0;
        }
        if (!bVar9) {
          return 0;
        }
        if (!bVar11) {
          return 0;
        }
        puVar4[0xc] = uVar29;
        return 0;
      }
    } while( true );
  }
  if (((uVar20 & 0x100) == 0) || (puVar5[2] != 0xffffffff)) {
    dVar31 = *(double *)(puVar6 + 8);
    uVar17 = uVar25;
  }
  else {
    dVar31 = *(double *)(puVar5 + 8);
    uVar17 = uVar27;
    uVar14 = uVar28;
  }
  if (uVar12 == 0x20000000) {
    if ((lbl_82005758 <= dVar31) && ((uVar14 & 1) != 0)) goto LAB_82969fe4;
    if (lbl_82005710 < dVar31) {
      return 0;
    }
    uVar14 = uVar14 & 4;
  }
  else {
    if (uVar12 == 0x20100000) {
      if ((lbl_82005758 <= dVar31) && (dVar32 = dVar31, (uVar14 & 1) != 0)) goto LAB_82969dcc;
      if (lbl_82005710 < dVar31) {
        return 0;
      }
      uVar14 = uVar14 & 4;
LAB_8296a158:
      if (uVar14 == 0) {
        return 0;
      }
LAB_82969fe4:
      puVar4[0xc] = uVar17;
      return 0;
    }
    if (uVar12 == 0x20200000) {
      if (uVar17 == uVar27) {
        if (((dVar31 < lbl_82005710) && (dVar32 = lbl_82005758, (uVar14 & 4) != 0)) ||
           ((lbl_82005710 <= dVar31 && (dVar32 = lbl_82005710, (uVar14 & 8) != 0))))
        goto LAB_82969dcc;
        dVar33 = lbl_82005710;
        if (lbl_82005758 <= dVar31) {
joined_r0x8296a1b8:
          dVar32 = lbl_82005710;
          if ((uVar14 & 1) != 0) goto LAB_82969dcc;
        }
LAB_8296a150:
        if (dVar31 != dVar33) {
          return 0;
        }
        uVar14 = uVar14 & 1;
        goto LAB_8296a158;
      }
      if (((dVar31 <= lbl_82005710) && ((uVar14 & 4) != 0)) ||
         ((lbl_82005710 < dVar31 && (dVar32 = lbl_82005758, (uVar14 & 8) != 0)))) goto LAB_82969dcc;
      if (dVar31 <= lbl_82005758) {
        return 0;
      }
    }
    else {
      if (uVar12 != 0x20300000) {
        if (uVar12 == 0x20400000) {
          if (dVar31 == lbl_82005710) {
            puVar4[0xc] = uVar17;
            return 0;
          }
          return 0;
        }
        if (uVar12 == 0x20500000) {
          if (dVar31 != lbl_82005710) {
            if (dVar31 != lbl_82005758) {
              if (dVar31 != lbl_82005730) {
                return 0;
              }
              iVar26 = *(int *)(uVar17 * 4 + *(int *)(param_1 + 0x14));
              if ((*(uint *)(*(int *)(*(int *)(iVar26 + 4) * 4 + iVar13) + 4) & 2) == 0) {
                return 0;
              }
              puVar5 = *(uint **)(*(int *)(iVar26 + 0x48) * 4 + *(int *)(param_1 + 0x18));
              if ((*puVar5 & 0xfff00000) != 0x20400000) {
                return 0;
              }
              uVar18 = (ulonglong)puVar5[3];
              uVar19 = 0;
              if (uVar18 != 0) {
                iVar13 = 0;
                do {
                  if (*(uint *)(iVar13 + puVar5[4]) == uVar17) break;
                  uVar19 = uVar19 + 1;
                  iVar13 = iVar13 + 4;
                } while ((uVar19 & 0xffffffff) < uVar18);
              }
              if (uVar18 <= (uVar19 & 0xffffffff)) {
                return 0;
              }
              uVar12 = puVar5[2];
              iVar13 = (int)((uVar19 & 0xffffffff) << 2);
              if (*(int *)(uVar12 + iVar13) !=
                  *(int *)((int)((uVar18 + uVar19 & 0xffffffff) << 2) + uVar12)) {
                return 0;
              }
              uVar21 = *(uint *)(*(int *)(*(int *)(iVar13 + uVar12) * 4 + *(int *)(param_1 + 0x14))
                                + 0x30);
              goto LAB_82969df4;
            }
            goto LAB_82969fe4;
          }
        }
        else {
          if (uVar12 != 0x20600000) {
            return 0;
          }
          if (dVar31 != lbl_82005710) {
            return 0;
          }
          if (uVar17 != uVar25) {
            return 0;
          }
        }
        goto LAB_82969dcc;
      }
      if (uVar17 != uVar27) {
        if (((dVar31 <= lbl_82005710) && (dVar32 = lbl_82005758, (uVar14 & 4) != 0)) ||
           ((lbl_82005710 < dVar31 && (dVar32 = lbl_82005710, (uVar14 & 8) != 0))))
        goto LAB_82969dcc;
        dVar33 = lbl_82005758;
        if (lbl_82005758 < dVar31) goto joined_r0x8296a1b8;
        goto LAB_8296a150;
      }
      if (((dVar31 < lbl_82005710) && ((uVar14 & 4) != 0)) ||
         ((lbl_82005710 <= dVar31 && (dVar32 = lbl_82005758, (uVar14 & 8) != 0))))
      goto LAB_82969dcc;
      if (dVar31 < lbl_82005758) {
        return 0;
      }
    }
    uVar14 = uVar14 & 1;
    dVar31 = lbl_82005758;
  }
  dVar32 = dVar31;
  if (uVar14 == 0) {
    return 0;
  }
LAB_82969dcc:
  uVar12 = fn_82964628(dVar32,param_1,*(undefined4 *)(param_1 + 0x78),0,0);
  puVar4[0xc] = uVar12;
  return 0;
}

