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
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82C7D448();


undefined8 fn_82C7E4E8(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  bool bVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  byte *pbVar17;
  uint uVar18;
  ulonglong uVar19;
  byte bVar22;
  ulonglong uVar20;
  int iVar21;
  char *pcVar23;
  uint *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint *puVar28;
  ulonglong uVar29;
  int iVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  
  plVar8 = *(longlong **)(param_1 + 0x54);
  bVar10 = false;
  lVar14 = *plVar8;
  uVar18 = *(uint *)(plVar8 + 1);
  uVar26 = ((ulonglong)*(uint *)(param_1 + 0x88) + 1 & 0xffffffff) >> 1;
  puVar24 = *(uint **)(param_1 + 0x110);
  uVar20 = ((ulonglong)*(uint *)(param_1 + 0x8c) + 1 & 0xffffffff) >> 1;
  pbVar17 = *(byte **)(param_1 + 0x5748);
  uVar31 = ZEXT48(pbVar17);
  iVar13 = (int)uVar20;
  iVar12 = (int)uVar26;
  uVar25 = (longlong)iVar13 * (longlong)iVar12;
  *plVar8 = lVar14 << 1;
  *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
  if ((longlong)((ulonglong)uVar18 - 1) < 0) {
    fn_82C4E5E8();
  }
  puVar9 = *(ulonglong **)(param_1 + 0x54);
  uVar29 = 2;
  lVar27 = 0;
  uVar15 = (ulonglong)*(uint *)(puVar9 + 1);
  uVar19 = uVar15 + 0x10;
  if ((uVar19 & 0xffffffff) < 2) {
    do {
      if ((uVar19 & 0xffffffff) == 0) break;
      uVar29 = uVar29 - uVar19;
      *(int *)(puVar9 + 1) = (int)(uVar15 - uVar19);
      lVar27 = (ulonglong)(uint)((int)(*puVar9 >> (0x40 - uVar19 & 0x7f)) << ((uint)uVar29 & 0x3f))
               + lVar27;
      *puVar9 = *puVar9 << (uVar19 & 0x7f);
      if ((longlong)(uVar15 - uVar19) < 0) {
        fn_82C4E5E8(puVar9);
      }
      uVar15 = (ulonglong)*(uint *)(puVar9 + 1);
      uVar19 = uVar15 + 0x10;
    } while ((uVar19 & 0xffffffff) < (uVar29 & 0xffffffff));
  }
  *(int *)(puVar9 + 1) = (int)(uVar15 - uVar29);
  uVar19 = (*puVar9 >> (0x40 - uVar29 & 0x7f) & 0xffffffff) + lVar27;
  *puVar9 = *puVar9 << (uVar29 & 0x7f);
  if ((longlong)(uVar15 - uVar29) < 0) {
    fn_82C4E5E8(puVar9);
  }
  iVar21 = (int)uVar25;
  if ((uVar19 & 0xffffffff) == 1) {
    plVar8 = *(longlong **)(param_1 + 0x54);
    lVar27 = *plVar8;
    uVar18 = *(uint *)(plVar8 + 1);
    *plVar8 = lVar27 << 1;
    *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
    if ((longlong)((ulonglong)uVar18 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar27 < 0) {
      uVar15 = uVar26;
      if (iVar12 != 0) {
        do {
          plVar8 = *(longlong **)(param_1 + 0x54);
          lVar27 = *plVar8;
          uVar18 = *(uint *)(plVar8 + 1);
          *plVar8 = lVar27 << 1;
          *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
          if ((longlong)((ulonglong)uVar18 - 1) < 0) {
            fn_82C4E5E8();
          }
          if (lVar27 < 0) {
            if (iVar13 != 0) {
              lVar27 = uVar31 - uVar26;
              uVar19 = uVar20;
              do {
                plVar8 = *(longlong **)(param_1 + 0x54);
                lVar16 = *plVar8;
                uVar18 = *(uint *)(plVar8 + 1);
                *plVar8 = lVar16 << 1;
                *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
                if ((longlong)((ulonglong)uVar18 - 1) < 0) {
                  fn_82C4E5E8();
                }
                uVar19 = uVar19 - 1;
                lVar27 = lVar27 + uVar26;
                *(byte *)lVar27 = (byte)((ulonglong)lVar16 >> 0x3f);
              } while (uVar19 != 0);
            }
          }
          else if (iVar13 != 0) {
            lVar27 = uVar31 - uVar26;
            uVar19 = uVar20;
            do {
              lVar27 = lVar27 + uVar26;
              *(undefined1 *)lVar27 = 0;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          uVar15 = uVar15 - 1;
          uVar31 = uVar31 + 1;
        } while (uVar15 != 0);
      }
    }
    else if (iVar13 != 0) {
      do {
        plVar8 = *(longlong **)(param_1 + 0x54);
        lVar27 = *plVar8;
        uVar18 = *(uint *)(plVar8 + 1);
        *plVar8 = lVar27 << 1;
        *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
        if ((longlong)((ulonglong)uVar18 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar27 < 0) {
          iVar30 = 0;
          if (iVar12 != 0) {
            do {
              plVar8 = *(longlong **)(param_1 + 0x54);
              lVar27 = *plVar8;
              uVar18 = *(uint *)(plVar8 + 1);
              *plVar8 = lVar27 << 1;
              *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
              if ((longlong)((ulonglong)uVar18 - 1) < 0) {
                fn_82C4E5E8();
              }
              *(byte *)((int)uVar31 + iVar30) = (byte)((ulonglong)lVar27 >> 0x3f);
              iVar30 = iVar30 + 1;
            } while (iVar30 < iVar12);
          }
        }
        else {
          iVar30 = 0;
          uVar15 = uVar26;
          if (iVar12 != 0) {
            do {
              *(undefined1 *)((int)uVar31 + iVar30) = 0;
              iVar30 = iVar30 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
        }
        uVar20 = uVar20 - 1;
        uVar31 = uVar31 + uVar26;
      } while (uVar20 != 0);
    }
  }
  else if ((uVar19 & 0xffffffff) == 2) {
    iVar30 = (int)(uVar25 & 1);
    if (iVar30 != 0) {
      plVar8 = *(longlong **)(param_1 + 0x54);
      lVar27 = *plVar8;
      uVar18 = *(uint *)(plVar8 + 1);
      *plVar8 = lVar27 << 1;
      *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
      if ((longlong)((ulonglong)uVar18 - 1) < 0) {
        fn_82C4E5E8();
      }
      *pbVar17 = (byte)((ulonglong)lVar27 >> 0x3f);
      uVar31 = uVar31 + 1;
    }
    if (iVar30 < iVar21) {
      lVar27 = (((uVar25 - (uVar25 & 1)) - 1 & 0xffffffff) >> 1) + 1;
      do {
        plVar8 = *(longlong **)(param_1 + 0x54);
        lVar16 = *plVar8;
        uVar18 = *(uint *)(plVar8 + 1);
        *plVar8 = lVar16 << 1;
        *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
        if ((longlong)((ulonglong)uVar18 - 1) < 0) {
          fn_82C4E5E8();
        }
        puVar32 = (undefined1 *)uVar31;
        if (lVar16 < 0) {
          plVar8 = *(longlong **)(param_1 + 0x54);
          lVar16 = *plVar8;
          uVar18 = *(uint *)(plVar8 + 1);
          *plVar8 = lVar16 << 1;
          *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
          if ((longlong)((ulonglong)uVar18 - 1) < 0) {
            fn_82C4E5E8();
          }
          if (lVar16 < 0) {
            *puVar32 = 1;
            puVar32[1] = 1;
          }
          else {
            plVar8 = *(longlong **)(param_1 + 0x54);
            lVar16 = *plVar8;
            uVar18 = *(uint *)(plVar8 + 1);
            *plVar8 = lVar16 << 1;
            *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
            if ((longlong)((ulonglong)uVar18 - 1) < 0) {
              fn_82C4E5E8();
            }
            if (-1 < lVar16) {
              *puVar32 = 1;
              goto LAB_82c7e8d0;
            }
            *puVar32 = 0;
            puVar32[1] = 1;
          }
        }
        else {
          *puVar32 = 0;
LAB_82c7e8d0:
          puVar32[1] = 0;
        }
        uVar31 = uVar31 + 2;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
  }
  else if ((uVar19 & 0xffffffff) == 3) {
    uVar11 = fn_82C7D448(param_1,uVar31);
    if ((int)uVar11 != 0) {
      return uVar11;
    }
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x54);
    lVar27 = *plVar8;
    uVar18 = *(uint *)(plVar8 + 1);
    *plVar8 = lVar27 << 1;
    *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
    if ((longlong)((ulonglong)uVar18 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar27 < 0) {
      iVar30 = (int)(uVar25 & 1);
      bVar10 = true;
      if (iVar30 != 0) {
        plVar8 = *(longlong **)(param_1 + 0x54);
        lVar27 = *plVar8;
        uVar18 = *(uint *)(plVar8 + 1);
        *plVar8 = lVar27 << 1;
        *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
        if ((longlong)((ulonglong)uVar18 - 1) < 0) {
          fn_82C4E5E8();
        }
        *pbVar17 = (byte)((ulonglong)lVar27 >> 0x3f);
        uVar31 = uVar31 + 1;
      }
      if (iVar30 < iVar21) {
        lVar27 = (((uVar25 - (uVar25 & 1)) - 1 & 0xffffffff) >> 1) + 1;
        do {
          plVar8 = *(longlong **)(param_1 + 0x54);
          lVar16 = *plVar8;
          uVar18 = *(uint *)(plVar8 + 1);
          *plVar8 = lVar16 << 1;
          *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
          if ((longlong)((ulonglong)uVar18 - 1) < 0) {
            fn_82C4E5E8();
          }
          puVar32 = (undefined1 *)uVar31;
          if (lVar16 < 0) {
            plVar8 = *(longlong **)(param_1 + 0x54);
            lVar16 = *plVar8;
            uVar18 = *(uint *)(plVar8 + 1);
            *plVar8 = lVar16 << 1;
            *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
            if ((longlong)((ulonglong)uVar18 - 1) < 0) {
              fn_82C4E5E8();
            }
            if (lVar16 < 0) {
              *puVar32 = 1;
              puVar32[1] = 1;
            }
            else {
              plVar8 = *(longlong **)(param_1 + 0x54);
              lVar16 = *plVar8;
              uVar18 = *(uint *)(plVar8 + 1);
              *plVar8 = lVar16 << 1;
              *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
              if ((longlong)((ulonglong)uVar18 - 1) < 0) {
                fn_82C4E5E8();
              }
              if (-1 < lVar16) {
                *puVar32 = 1;
                goto LAB_82c7e750;
              }
              *puVar32 = 0;
              puVar32[1] = 1;
            }
          }
          else {
            *puVar32 = 0;
LAB_82c7e750:
            puVar32[1] = 0;
          }
          uVar31 = uVar31 + 2;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
    }
    else {
      plVar8 = *(longlong **)(param_1 + 0x54);
      lVar27 = *plVar8;
      uVar18 = *(uint *)(plVar8 + 1);
      *plVar8 = lVar27 << 1;
      *(int *)(plVar8 + 1) = (int)((ulonglong)uVar18 - 1);
      if ((longlong)((ulonglong)uVar18 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar27 < 0) {
        bVar10 = true;
        fn_82C7D448(param_1,uVar31);
      }
    }
  }
  pbVar17 = *(byte **)(param_1 + 0x5748);
  if (bVar10) {
    lVar27 = 0;
    if (iVar13 != 0) {
      do {
        lVar16 = 0;
        if (iVar12 != 0) {
          do {
            if (lVar16 + lVar27 == 0) {
LAB_82c7eae4:
              bVar22 = (byte)((ulonglong)lVar14 >> 0x3f);
            }
            else if ((int)lVar27 == 0) {
              bVar22 = pbVar17[-1];
            }
            else if ((int)lVar16 == 0) {
              bVar22 = pbVar17[-iVar12];
            }
            else {
              bVar22 = pbVar17[-1];
              if (pbVar17[-1] != pbVar17[-iVar12]) goto LAB_82c7eae4;
            }
            lVar16 = lVar16 + 1;
            *pbVar17 = *pbVar17 ^ bVar22;
            pbVar17 = pbVar17 + 1;
          } while ((int)lVar16 < iVar12);
        }
        lVar27 = lVar27 + 1;
      } while ((int)lVar27 < iVar13);
    }
  }
  else if ((lVar14 < 0) && (iVar13 = 0, 0 < iVar21)) {
    do {
      pbVar17[iVar13] = pbVar17[iVar13] ^ 1;
      iVar13 = iVar13 + 1;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  pcVar23 = *(char **)(param_1 + 0x5748);
  lVar14 = (ulonglong)*(uint *)(param_1 + 0x8c) - ((ulonglong)*(uint *)(param_1 + 0x8c) & 1);
  iVar13 = *(uint *)(param_1 + 0x88) - (*(uint *)(param_1 + 0x88) & 1);
  if (0 < lVar14) {
    lVar14 = ((lVar14 - 1U & 0xffffffff) >> 1) + 1;
    do {
      uVar26 = 0;
      puVar28 = puVar24;
      if (0 < iVar13) {
        do {
          cVar1 = *pcVar23;
          pcVar23 = pcVar23 + 1;
          if (cVar1 == '\0') {
            puVar9 = *(ulonglong **)(param_1 + 0x54);
            if ((int *)(param_1 + 0x574c) == (int *)0x0) {
              uVar20 = 0;
              *(undefined4 *)((int)puVar9 + 0x14) = 3;
            }
            else {
              iVar12 = *(int *)(param_1 + 0x574c);
              sVar7 = *(short *)((int)((*puVar9 >>
                                        (0x40 - (ulonglong)*(byte *)(param_1 + 0x5754) & 0x7f) &
                                       0xffffffff) << 1) + iVar12);
              uVar20 = (ulonglong)sVar7;
              if (sVar7 < 0) {
                fn_82C4E470(puVar9);
                do {
                  uVar25 = *puVar9;
                  fn_82C4E470(puVar9,1);
                  sVar7 = *(short *)((int)(((uVar20 - ((longlong)uVar25 >> 0x3f)) + 0x8000 &
                                           0xffffffff) << 1) + iVar12);
                  uVar20 = (ulonglong)sVar7;
                } while (sVar7 < 0);
              }
              else {
                iVar12 = *(int *)(puVar9 + 1);
                iVar21 = (int)(uVar20 & 0xf);
                *puVar9 = *puVar9 << (uVar20 & 0xf);
                *(int *)(puVar9 + 1) = iVar12 - iVar21;
                if (iVar12 < iVar21) {
                  do {
                    pbVar17 = *(byte **)((int)puVar9 + 0xc);
                    if (pbVar17 < (byte *)(*(int *)(puVar9 + 2) - 4U)) {
                      bVar22 = *pbVar17;
                      bVar2 = pbVar17[1];
                      bVar3 = pbVar17[2];
                      bVar4 = pbVar17[3];
                      bVar5 = pbVar17[4];
                      bVar6 = pbVar17[5];
                      iVar12 = *(int *)(puVar9 + 1);
                      *(byte **)((int)puVar9 + 0xc) = pbVar17 + 6;
                      *(int *)(puVar9 + 1) = iVar12 + 0x30;
                      *puVar9 = ((((((ulonglong)bVar2 + (ulonglong)bVar22 * 0x100) * 0x100 +
                                   (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 +
                                 (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6 <<
                                ((longlong)-iVar12 & 0x7fU)) + *puVar9;
                      goto LAB_82c7ec94;
                    }
                    iVar12 = fn_82C4E3B0(puVar9);
                  } while (iVar12 == 1);
                  uVar20 = (ulonglong)((int)sVar7 >> 4);
                }
                else {
LAB_82c7ec94:
                  uVar20 = (ulonglong)((int)sVar7 >> 4);
                }
              }
            }
            iVar21 = (int)uVar20;
            *puVar28 = (uint)((uVar20 & 0xffffffff) << 0x1f) | *puVar28 & 0x7fffffff;
            puVar28[6] = (iVar21 >> 1) << 0x1f | puVar28[6] & 0x7fffffff;
            uVar20 = *(uint *)(param_1 + 0x88) + uVar26;
            iVar12 = (int)((uVar20 + (uVar20 & 0x7fffffff) * 2 & 0xffffffff) << 3);
            *(uint *)(iVar12 + (int)puVar24) =
                 (iVar21 >> 2) << 0x1f | *(uint *)(iVar12 + (int)puVar24) & 0x7fffffff;
            uVar20 = *(uint *)(param_1 + 0x88) + uVar26 + 1;
            iVar12 = (int)((uVar20 + (uVar20 & 0x7fffffff) * 2 & 0x1fffffff) << 3);
            uVar18 = (iVar21 >> 3) << 0x1f | *(uint *)(iVar12 + (int)puVar24) & 0x7fffffff;
          }
          else {
            puVar28[6] = puVar28[6] | 0x80000000;
            *puVar28 = *puVar28 | 0x80000000;
            uVar20 = *(uint *)(param_1 + 0x88) + uVar26;
            iVar12 = (int)((uVar20 + (uVar20 & 0x7fffffff) * 2 & 0xffffffff) << 3);
            *(uint *)(iVar12 + (int)puVar24) = *(uint *)(iVar12 + (int)puVar24) | 0x80000000;
            uVar20 = *(uint *)(param_1 + 0x88) + uVar26 + 1;
            iVar12 = (int)((uVar20 + (uVar20 & 0x7fffffff) * 2 & 0x1fffffff) << 3);
            uVar18 = *(uint *)(iVar12 + (int)puVar24) | 0x80000000;
          }
          uVar26 = uVar26 + 2;
          *(uint *)(iVar12 + (int)puVar24) = uVar18;
          puVar28 = puVar28 + 0xc;
        } while ((int)uVar26 < iVar13);
      }
      if ((*(uint *)(param_1 + 0x88) & 1) != 0) {
        cVar1 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        if (cVar1 == '\0') {
          puVar9 = *(ulonglong **)(param_1 + 0x54);
          if ((int *)(param_1 + 0x574c) == (int *)0x0) {
            uVar20 = 0;
            *(undefined4 *)((int)puVar9 + 0x14) = 3;
          }
          else {
            iVar12 = *(int *)(param_1 + 0x574c);
            sVar7 = *(short *)((int)((*puVar9 >>
                                      (0x40 - (ulonglong)*(byte *)(param_1 + 0x5754) & 0x7f) &
                                     0xffffffff) << 1) + iVar12);
            uVar20 = (ulonglong)sVar7;
            if (sVar7 < 0) {
              fn_82C4E470(puVar9);
              do {
                uVar25 = *puVar9;
                fn_82C4E470(puVar9,1);
                sVar7 = *(short *)((int)(((uVar20 - ((longlong)uVar25 >> 0x3f)) + 0x8000 &
                                         0xffffffff) << 1) + iVar12);
                uVar20 = (ulonglong)sVar7;
              } while (sVar7 < 0);
            }
            else {
              iVar12 = *(int *)(puVar9 + 1);
              iVar21 = (int)(uVar20 & 0xf);
              *puVar9 = *puVar9 << (uVar20 & 0xf);
              *(int *)(puVar9 + 1) = iVar12 - iVar21;
              if (iVar12 < iVar21) {
                do {
                  pbVar17 = *(byte **)((int)puVar9 + 0xc);
                  if (pbVar17 < (byte *)(*(int *)(puVar9 + 2) - 4U)) {
                    bVar22 = *pbVar17;
                    bVar2 = pbVar17[1];
                    bVar3 = pbVar17[2];
                    bVar4 = pbVar17[3];
                    bVar5 = pbVar17[4];
                    bVar6 = pbVar17[5];
                    iVar12 = *(int *)(puVar9 + 1);
                    *(byte **)((int)puVar9 + 0xc) = pbVar17 + 6;
                    *(int *)(puVar9 + 1) = iVar12 + 0x30;
                    *puVar9 = ((((((ulonglong)bVar2 + (ulonglong)bVar22 * 0x100) * 0x100 +
                                 (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 +
                               (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6 <<
                              ((longlong)-iVar12 & 0x7fU)) + *puVar9;
                    goto LAB_82c7eec8;
                  }
                  iVar12 = fn_82C4E3B0(puVar9);
                } while (iVar12 == 1);
                uVar20 = (ulonglong)((int)sVar7 >> 4);
              }
              else {
LAB_82c7eec8:
                uVar20 = (ulonglong)((int)sVar7 >> 4);
              }
            }
          }
          iVar12 = (int)((uVar26 + (uVar26 & 0x7fffffff) * 2 & 0xffffffff) << 3);
          *(uint *)(iVar12 + (int)puVar24) =
               (uint)((uVar20 & 0xffffffff) << 0x1f) | *(uint *)(iVar12 + (int)puVar24) & 0x7fffffff
          ;
          uVar26 = *(uint *)(param_1 + 0x88) + uVar26;
          iVar12 = (int)((uVar26 + (uVar26 & 0x7fffffff) * 2 & 0xffffffff) << 3);
          *(uint *)(iVar12 + (int)puVar24) =
               ((int)uVar20 >> 2) << 0x1f | *(uint *)(iVar12 + (int)puVar24) & 0x7fffffff;
        }
        else {
          iVar12 = (int)((uVar26 + (uVar26 & 0x7fffffff) * 2 & 0xffffffff) << 3);
          *(uint *)(iVar12 + (int)puVar24) = *(uint *)(iVar12 + (int)puVar24) | 0x80000000;
          uVar26 = *(uint *)(param_1 + 0x88) + uVar26;
          iVar12 = (int)((uVar26 + (uVar26 & 0x7fffffff) * 2 & 0xffffffff) << 3);
          *(uint *)(iVar12 + (int)puVar24) = *(uint *)(iVar12 + (int)puVar24) | 0x80000000;
        }
      }
      lVar14 = lVar14 + -1;
      puVar24 = puVar24 + *(int *)(param_1 + 0x88) * 0xc;
    } while (lVar14 != 0);
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    uVar26 = 0;
    if (0 < iVar13) {
      lVar14 = (ulonglong)(iVar13 - 1U >> 1) + 1;
      uVar26 = lVar14 * 2 & 0xfffffffe;
      puVar28 = puVar24;
      do {
        cVar1 = *pcVar23;
        pcVar23 = pcVar23 + 1;
        if (cVar1 == '\0') {
          puVar9 = *(ulonglong **)(param_1 + 0x54);
          if ((int *)(param_1 + 0x574c) == (int *)0x0) {
            uVar20 = 0;
            *(undefined4 *)((int)puVar9 + 0x14) = 3;
          }
          else {
            iVar13 = *(int *)(param_1 + 0x574c);
            sVar7 = *(short *)((int)((*puVar9 >>
                                      (0x40 - (ulonglong)*(byte *)(param_1 + 0x5754) & 0x7f) &
                                     0xffffffff) << 1) + iVar13);
            uVar20 = (ulonglong)sVar7;
            if (sVar7 < 0) {
              fn_82C4E470(puVar9);
              do {
                uVar25 = *puVar9;
                fn_82C4E470(puVar9,1);
                sVar7 = *(short *)((int)(((uVar20 - ((longlong)uVar25 >> 0x3f)) + 0x8000 &
                                         0xffffffff) << 1) + iVar13);
                uVar20 = (ulonglong)sVar7;
              } while (sVar7 < 0);
            }
            else {
              iVar13 = *(int *)(puVar9 + 1);
              iVar12 = (int)(uVar20 & 0xf);
              *puVar9 = *puVar9 << (uVar20 & 0xf);
              *(int *)(puVar9 + 1) = iVar13 - iVar12;
              if (iVar13 < iVar12) {
                do {
                  pbVar17 = *(byte **)((int)puVar9 + 0xc);
                  if (pbVar17 < (byte *)(*(int *)(puVar9 + 2) - 4U)) {
                    bVar22 = *pbVar17;
                    bVar2 = pbVar17[1];
                    bVar3 = pbVar17[2];
                    bVar4 = pbVar17[3];
                    bVar5 = pbVar17[4];
                    bVar6 = pbVar17[5];
                    iVar13 = *(int *)(puVar9 + 1);
                    *(byte **)((int)puVar9 + 0xc) = pbVar17 + 6;
                    *(int *)(puVar9 + 1) = iVar13 + 0x30;
                    *puVar9 = ((((((ulonglong)bVar22 * 0x100 + (ulonglong)bVar2) * 0x100 +
                                 (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 +
                               (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6 <<
                              ((longlong)-iVar13 & 0x7fU)) + *puVar9;
                    goto LAB_82c7f0d8;
                  }
                  iVar13 = fn_82C4E3B0(puVar9);
                } while (iVar13 == 1);
                uVar20 = (ulonglong)((int)sVar7 >> 4);
              }
              else {
LAB_82c7f0d8:
                uVar20 = (ulonglong)((int)sVar7 >> 4);
              }
            }
          }
          *puVar28 = (uint)((uVar20 & 0xffffffff) << 0x1f) | *puVar28 & 0x7fffffff;
          puVar28[6] = ((int)uVar20 >> 1) << 0x1f | puVar28[6] & 0x7fffffff;
        }
        else {
          *puVar28 = *puVar28 | 0x80000000;
          puVar28[6] = puVar28[6] | 0x80000000;
        }
        lVar14 = lVar14 + -1;
        puVar28 = puVar28 + 0xc;
      } while (lVar14 != 0);
    }
    if ((*(uint *)(param_1 + 0x88) & 1) != 0) {
      if (*pcVar23 == '\0') {
        puVar9 = *(ulonglong **)(param_1 + 0x54);
        if ((int *)(param_1 + 0x574c) == (int *)0x0) {
          uVar20 = 0;
          *(undefined4 *)((int)puVar9 + 0x14) = 3;
        }
        else {
          iVar13 = *(int *)(param_1 + 0x574c);
          sVar7 = *(short *)((int)((*puVar9 >>
                                    (0x40 - (ulonglong)*(byte *)(param_1 + 0x5754) & 0x7f) &
                                   0xffffffff) << 1) + iVar13);
          uVar20 = (ulonglong)sVar7;
          if (sVar7 < 0) {
            fn_82C4E470(puVar9);
            do {
              uVar25 = *puVar9;
              fn_82C4E470(puVar9,1);
              sVar7 = *(short *)((int)(((uVar20 - ((longlong)uVar25 >> 0x3f)) + 0x8000 & 0xffffffff)
                                      << 1) + iVar13);
              uVar20 = (ulonglong)sVar7;
            } while (sVar7 < 0);
          }
          else {
            iVar13 = *(int *)(puVar9 + 1);
            iVar12 = (int)(uVar20 & 0xf);
            *puVar9 = *puVar9 << (uVar20 & 0xf);
            *(int *)(puVar9 + 1) = iVar13 - iVar12;
            if (iVar13 < iVar12) {
              do {
                pbVar17 = *(byte **)((int)puVar9 + 0xc);
                if (pbVar17 < (byte *)(*(int *)(puVar9 + 2) - 4U)) {
                  bVar22 = *pbVar17;
                  bVar2 = pbVar17[1];
                  bVar3 = pbVar17[2];
                  bVar4 = pbVar17[3];
                  bVar5 = pbVar17[4];
                  bVar6 = pbVar17[5];
                  iVar13 = *(int *)(puVar9 + 1);
                  *(byte **)((int)puVar9 + 0xc) = pbVar17 + 6;
                  *(int *)(puVar9 + 1) = iVar13 + 0x30;
                  *puVar9 = ((((((ulonglong)bVar22 * 0x100 + (ulonglong)bVar2) * 0x100 +
                               (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4) * 0x100 +
                             (ulonglong)bVar5) * 0x100 + (ulonglong)bVar6 <<
                            ((longlong)-iVar13 & 0x7fU)) + *puVar9;
                  goto LAB_82c7f274;
                }
                iVar13 = fn_82C4E3B0(puVar9);
              } while (iVar13 == 1);
              uVar20 = (ulonglong)((int)sVar7 >> 4);
            }
            else {
LAB_82c7f274:
              uVar20 = (ulonglong)((int)sVar7 >> 4);
            }
          }
        }
        iVar13 = (int)((uVar26 + (uVar26 & 0x7fffffff) * 2 & 0xffffffff) << 3);
        *(uint *)(iVar13 + (int)puVar24) =
             (uint)((uVar20 & 0xffffffff) << 0x1f) | *(uint *)(iVar13 + (int)puVar24) & 0x7fffffff;
        return 0;
      }
      iVar13 = (int)((uVar26 + (uVar26 & 0x7fffffff) * 2 & 0xffffffff) << 3);
      *(uint *)(iVar13 + (int)puVar24) = *(uint *)(iVar13 + (int)puVar24) | 0x80000000;
    }
  }
  return 0;
}

