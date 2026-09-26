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
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CAF880();
extern unsigned int uStack_bc;


undefined8 fn_82CAFB90(int param_1,int *param_2,int param_3,undefined8 param_4,int *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong *puVar18;
  longlong *plVar19;
  uint uVar20;
  byte *pbVar21;
  int iVar22;
  int iVar24;
  longlong lVar23;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  char cVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  int iVar36;
  ulonglong uVar34;
  ulonglong uVar35;
  uint uStack_bc;
  
  param_2 = (int *)*param_2;
  uVar30 = 0;
  uStack_bc = 0;
  uVar8 = param_2[10];
  lVar29 = 0;
  iVar9 = param_2[3];
  iVar10 = param_2[4];
  iVar11 = param_2[5];
  iVar12 = param_2[6];
  iVar13 = param_2[1];
  piVar14 = (int *)*param_2;
  iVar15 = param_2[7];
  uVar28 = param_2[2] + 1;
  iVar16 = param_2[8];
  if (*(int *)(param_1 + 0x3cb0) < 6) {
    iVar25 = *(int *)(param_1 + 0x134);
    iVar24 = *(int *)(param_1 + 0x138);
    iVar27 = *(int *)(param_1 + 0x13c);
    iVar17 = *(int *)(param_1 + 0x140);
  }
  else {
    iVar25 = param_5[2];
    iVar24 = param_5[3];
    iVar27 = *param_5;
    iVar17 = param_5[1];
  }
  dataCacheBlockClearToZero((ulonglong)*(uint *)(param_1 + 0x6e4));
  dataCacheBlockClearToZero((ulonglong)*(uint *)(param_1 + 0x6e4) + 0x80);
  do {
    puVar18 = *(ulonglong **)(param_1 + 0x54);
    if (piVar14 == (int *)0x0) {
      uVar32 = 0;
      *(undefined4 *)((int)puVar18 + 0x14) = 3;
    }
    else {
      iVar36 = *piVar14;
      sVar7 = *(short *)((int)((*puVar18 >> (0x40 - (ulonglong)*(byte *)(piVar14 + 2) & 0x7f) &
                               0xffffffff) << 1) + iVar36);
      uVar32 = (ulonglong)sVar7;
      if (sVar7 < 0) {
        fn_82C4E470(puVar18);
        do {
          uVar33 = *puVar18;
          fn_82C4E470(puVar18,1);
          sVar7 = *(short *)((int)(((uVar32 - ((longlong)uVar33 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                  1) + iVar36);
          uVar32 = (ulonglong)sVar7;
        } while (sVar7 < 0);
      }
      else {
        iVar36 = *(int *)(puVar18 + 1);
        iVar26 = (int)(uVar32 & 0xf);
        *puVar18 = *puVar18 << (uVar32 & 0xf);
        *(int *)(puVar18 + 1) = iVar36 - iVar26;
        if (iVar36 < iVar26) {
          do {
            pbVar21 = *(byte **)((int)puVar18 + 0xc);
            if (pbVar21 < (byte *)(*(int *)(puVar18 + 2) - 4U)) {
              bVar6 = *pbVar21;
              bVar1 = pbVar21[1];
              bVar2 = pbVar21[2];
              bVar3 = pbVar21[4];
              bVar4 = pbVar21[3];
              bVar5 = pbVar21[5];
              iVar36 = *(int *)(puVar18 + 1);
              *(byte **)((int)puVar18 + 0xc) = pbVar21 + 6;
              *(int *)(puVar18 + 1) = iVar36 + 0x30;
              *puVar18 = ((((((ulonglong)bVar6 * 0x100 + (ulonglong)bVar1) * 0x100 +
                            (ulonglong)bVar2) * 0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar3
                          ) * 0x100 + (ulonglong)bVar5 << ((longlong)-iVar36 & 0x7fU)) + *puVar18;
              goto LAB_82cafd54;
            }
            iVar36 = fn_82C4E3B0(puVar18);
          } while (iVar36 == 1);
          uVar32 = (ulonglong)((int)sVar7 >> 4);
        }
        else {
LAB_82cafd54:
          uVar32 = (ulonglong)((int)sVar7 >> 4);
        }
      }
    }
    plVar19 = *(longlong **)(param_1 + 0x54);
    uVar32 = uVar32 & 0xff;
    if (*(int *)((int)plVar19 + 0x14) != 0) {
      return 1;
    }
    iVar36 = (int)uVar32;
    if (iVar36 == iVar13) {
      lVar23 = *plVar19;
      uVar20 = *(uint *)(plVar19 + 1);
      *plVar19 = lVar23 << 1;
      *(int *)(plVar19 + 1) = (int)((ulonglong)uVar20 - 1);
      if ((longlong)((ulonglong)uVar20 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar23 < 0) {
        puVar18 = *(ulonglong **)(param_1 + 0x54);
        if (*(int *)((int)puVar18 + 0x14) != 0) {
          return 1;
        }
        if (piVar14 == (int *)0x0) {
          uVar33 = 0;
          *(undefined4 *)((int)puVar18 + 0x14) = 3;
        }
        else {
          iVar36 = *piVar14;
          sVar7 = *(short *)((int)((*puVar18 >> (0x40 - (ulonglong)*(byte *)(piVar14 + 2) & 0x7f) &
                                   0xffffffff) << 1) + iVar36);
          uVar33 = (ulonglong)sVar7;
          if (sVar7 < 0) {
            fn_82C4E470(puVar18);
            do {
              uVar32 = *puVar18;
              fn_82C4E470(puVar18,1);
              sVar7 = *(short *)((int)(((uVar33 - ((longlong)uVar32 >> 0x3f)) + 0x8000 & 0xffffffff)
                                      << 1) + iVar36);
              uVar33 = (ulonglong)sVar7;
            } while (sVar7 < 0);
          }
          else {
            iVar36 = *(int *)(puVar18 + 1);
            iVar26 = (int)(uVar33 & 0xf);
            *puVar18 = *puVar18 << (uVar33 & 0xf);
            *(int *)(puVar18 + 1) = iVar36 - iVar26;
            if (iVar36 < iVar26) {
              do {
                pbVar21 = *(byte **)((int)puVar18 + 0xc);
                if (pbVar21 < (byte *)(*(int *)(puVar18 + 2) - 4U)) {
                  bVar6 = *pbVar21;
                  bVar1 = pbVar21[1];
                  bVar2 = pbVar21[2];
                  bVar3 = pbVar21[4];
                  bVar4 = pbVar21[3];
                  bVar5 = pbVar21[5];
                  iVar36 = *(int *)(puVar18 + 1);
                  *(byte **)((int)puVar18 + 0xc) = pbVar21 + 6;
                  *(int *)(puVar18 + 1) = iVar36 + 0x30;
                  *puVar18 = ((((((ulonglong)bVar1 + (ulonglong)bVar6 * 0x100) * 0x100 +
                                (ulonglong)bVar2) * 0x100 + (ulonglong)bVar4) * 0x100 +
                              (ulonglong)bVar3) * 0x100 + (ulonglong)bVar5 <<
                             ((longlong)-iVar36 & 0x7fU)) + *puVar18;
                  goto LAB_82caff48;
                }
                iVar36 = fn_82C4E3B0(puVar18);
              } while (iVar36 == 1);
              uVar33 = (ulonglong)((int)sVar7 >> 4);
            }
            else {
LAB_82caff48:
              uVar33 = (ulonglong)((int)sVar7 >> 4);
            }
          }
        }
        plVar19 = *(longlong **)(param_1 + 0x54);
        uVar33 = uVar33 & 0xff;
        if (*(int *)((int)plVar19 + 0x14) != 0) {
          return 1;
        }
        iVar36 = (int)uVar33;
        if (iVar36 == iVar13) {
          return 1;
        }
        if (uVar8 <= uVar33) {
          return 1;
        }
        uVar32 = (ulonglong)*(byte *)(iVar36 + iVar16);
        iVar26 = iVar9;
        if (uVar28 <= uVar33) {
          uVar30 = 1;
          iVar26 = iVar10;
        }
        uVar20 = *(uint *)(plVar19 + 1);
        iVar36 = (int)*(char *)((uint)*(byte *)(iVar36 + iVar16) + iVar26) +
                 (int)*(char *)(iVar36 + iVar15);
        lVar23 = *plVar19;
        *(int *)(plVar19 + 1) = (int)((ulonglong)uVar20 - 1);
        *plVar19 = lVar23 << 1;
        if ((longlong)((ulonglong)uVar20 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar23 < 0) {
          iVar36 = -iVar36;
        }
      }
      else {
        plVar19 = *(longlong **)(param_1 + 0x54);
        lVar23 = *plVar19;
        uVar20 = *(uint *)(plVar19 + 1);
        *plVar19 = lVar23 << 1;
        *(int *)(plVar19 + 1) = (int)((ulonglong)uVar20 - 1);
        if ((longlong)((ulonglong)uVar20 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar23 < 0) {
          puVar18 = *(ulonglong **)(param_1 + 0x54);
          if (*(int *)((int)puVar18 + 0x14) != 0) {
            return 1;
          }
          if (piVar14 == (int *)0x0) {
            uVar32 = 0;
            *(undefined4 *)((int)puVar18 + 0x14) = 3;
          }
          else {
            iVar36 = *piVar14;
            sVar7 = *(short *)((int)((*puVar18 >> (0x40 - (ulonglong)*(byte *)(piVar14 + 2) & 0x7f)
                                     & 0xffffffff) << 1) + iVar36);
            uVar32 = (ulonglong)sVar7;
            if (sVar7 < 0) {
              fn_82C4E470(puVar18);
              do {
                uVar33 = *puVar18;
                fn_82C4E470(puVar18,1);
                sVar7 = *(short *)((int)(((uVar32 - ((longlong)uVar33 >> 0x3f)) + 0x8000 &
                                         0xffffffff) << 1) + iVar36);
                uVar32 = (ulonglong)sVar7;
              } while (sVar7 < 0);
            }
            else {
              iVar36 = *(int *)(puVar18 + 1);
              iVar26 = (int)(uVar32 & 0xf);
              *puVar18 = *puVar18 << (uVar32 & 0xf);
              *(int *)(puVar18 + 1) = iVar36 - iVar26;
              if (iVar36 < iVar26) {
                do {
                  pbVar21 = *(byte **)((int)puVar18 + 0xc);
                  if (pbVar21 < (byte *)(*(int *)(puVar18 + 2) - 4U)) {
                    bVar6 = *pbVar21;
                    bVar1 = pbVar21[1];
                    bVar2 = pbVar21[2];
                    bVar3 = pbVar21[3];
                    bVar4 = pbVar21[4];
                    bVar5 = pbVar21[5];
                    iVar36 = *(int *)(puVar18 + 1);
                    *(byte **)((int)puVar18 + 0xc) = pbVar21 + 6;
                    *(int *)(puVar18 + 1) = iVar36 + 0x30;
                    *puVar18 = ((((((ulonglong)bVar6 * 0x100 + (ulonglong)bVar1) * 0x100 +
                                  (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3) * 0x100 +
                                (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5 <<
                               ((longlong)-iVar36 & 0x7fU)) + *puVar18;
                    goto LAB_82cb0150;
                  }
                  iVar36 = fn_82C4E3B0(puVar18);
                } while (iVar36 == 1);
                uVar32 = (ulonglong)((int)sVar7 >> 4);
              }
              else {
LAB_82cb0150:
                uVar32 = (ulonglong)((int)sVar7 >> 4);
              }
            }
          }
          plVar19 = *(longlong **)(param_1 + 0x54);
          uVar32 = uVar32 & 0xff;
          if (*(int *)((int)plVar19 + 0x14) != 0) {
            return 1;
          }
          iVar26 = (int)uVar32;
          if (iVar26 == iVar13) {
            return 1;
          }
          if (uVar8 <= uVar32) {
            return 1;
          }
          cVar31 = *(char *)(iVar26 + iVar15);
          iVar36 = (int)cVar31;
          iVar22 = iVar11;
          if (uVar28 <= uVar32) {
            uVar30 = 1;
            iVar22 = iVar12;
          }
          uVar20 = *(uint *)(plVar19 + 1);
          uVar32 = (ulonglong)*(byte *)(cVar31 + iVar22) + (ulonglong)*(uint *)(param_1 + 0x790) +
                   (ulonglong)*(byte *)(iVar26 + iVar16);
          lVar23 = *plVar19;
          *(int *)(plVar19 + 1) = (int)((ulonglong)uVar20 - 1);
          *plVar19 = lVar23 << 1;
          if ((longlong)((ulonglong)uVar20 - 1) < 0) {
            fn_82C4E5E8();
          }
          if (lVar23 < 0) {
            iVar36 = -(int)cVar31;
          }
        }
        else {
          puVar18 = *(ulonglong **)(param_1 + 0x54);
          uVar20 = *(uint *)(puVar18 + 1);
          uVar30 = *puVar18 >> 0x3f;
          *puVar18 = *puVar18 << 1;
          *(int *)(puVar18 + 1) = (int)((ulonglong)uVar20 - 1);
          if ((longlong)((ulonglong)uVar20 - 1) < 0) {
            fn_82C4E5E8();
          }
          if (*(int *)(param_1 + 0x3cb0) < 4) {
            puVar18 = *(ulonglong **)(param_1 + 0x54);
            uVar34 = 6;
            lVar23 = 0;
            uVar33 = (ulonglong)*(uint *)(puVar18 + 1);
            uVar32 = uVar33 + 0x10;
            if ((uVar32 & 0xffffffff) < 6) {
              do {
                if ((uVar32 & 0xffffffff) == 0) break;
                uVar34 = uVar34 - uVar32;
                *(int *)(puVar18 + 1) = (int)(uVar33 - uVar32);
                lVar23 = (ulonglong)
                         (uint)((int)(*puVar18 >> (0x40 - uVar32 & 0x7f)) << ((uint)uVar34 & 0x3f))
                         + lVar23;
                *puVar18 = *puVar18 << (uVar32 & 0x7f);
                if ((longlong)(uVar33 - uVar32) < 0) {
                  fn_82C4E5E8(puVar18);
                }
                uVar33 = (ulonglong)*(uint *)(puVar18 + 1);
                uVar32 = uVar33 + 0x10;
              } while ((uVar32 & 0xffffffff) < (uVar34 & 0xffffffff));
            }
            *(int *)(puVar18 + 1) = (int)(uVar33 - uVar34);
            uVar32 = (*puVar18 >> (0x40 - uVar34 & 0x7f) & 0xffffffff) + lVar23;
            *puVar18 = *puVar18 << (uVar34 & 0x7f);
            if ((longlong)(uVar33 - uVar34) < 0) {
              fn_82C4E5E8(puVar18);
            }
            puVar18 = *(ulonglong **)(param_1 + 0x54);
            uVar35 = 8;
            iVar36 = 0;
            cVar31 = '\0';
            uVar33 = (ulonglong)*(uint *)(puVar18 + 1);
            uVar34 = uVar33 + 0x10;
            if ((uVar34 & 0xffffffff) < 8) {
              do {
                cVar31 = (char)iVar36;
                if ((uVar34 & 0xffffffff) == 0) break;
                uVar35 = uVar35 - uVar34;
                *(int *)(puVar18 + 1) = (int)(uVar33 - uVar34);
                iVar36 = ((int)(*puVar18 >> (0x40 - uVar34 & 0x7f)) << ((uint)uVar35 & 0x3f)) +
                         iVar36;
                cVar31 = (char)iVar36;
                *puVar18 = *puVar18 << (uVar34 & 0x7f);
                if ((longlong)(uVar33 - uVar34) < 0) {
                  fn_82C4E5E8(puVar18);
                }
                uVar33 = (ulonglong)*(uint *)(puVar18 + 1);
                uVar34 = uVar33 + 0x10;
              } while ((uVar34 & 0xffffffff) < (uVar35 & 0xffffffff));
            }
            uVar34 = *puVar18;
            *(int *)(puVar18 + 1) = (int)(uVar33 - uVar35);
            *puVar18 = uVar34 << (uVar35 & 0x7f);
            if ((longlong)(uVar33 - uVar35) < 0) {
              fn_82C4E5E8(puVar18);
            }
            iVar36 = (int)(char)((char)(uVar34 >> (0x40 - uVar35 & 0x7f)) + cVar31);
          }
          else {
            if (*(int *)(param_1 + 0x79c) != 0) {
              fn_82CAF880(param_1);
              *(undefined4 *)(param_1 + 0x79c) = 0;
            }
            puVar18 = *(ulonglong **)(param_1 + 0x54);
            lVar23 = 0;
            uVar34 = (ulonglong)*(uint *)(param_1 + 0x7a4);
            uVar33 = (ulonglong)*(uint *)(puVar18 + 1);
            uVar32 = uVar33 + 0x10;
            if (uVar34 < 0x21) {
              if (uVar34 == 0) {
                uVar32 = 0;
              }
              else {
                if ((uVar32 & 0xffffffff) < uVar34) {
                  do {
                    if ((uVar32 & 0xffffffff) == 0) break;
                    uVar34 = uVar34 - uVar32;
                    *(int *)(puVar18 + 1) = (int)(uVar33 - uVar32);
                    lVar23 = (ulonglong)
                             (uint)((int)(*puVar18 >> (0x40 - uVar32 & 0x7f)) <<
                                   ((uint)uVar34 & 0x3f)) + lVar23;
                    *puVar18 = *puVar18 << (uVar32 & 0x7f);
                    if ((longlong)(uVar33 - uVar32) < 0) {
                      fn_82C4E5E8(puVar18);
                    }
                    uVar33 = (ulonglong)*(uint *)(puVar18 + 1);
                    uVar32 = uVar33 + 0x10;
                  } while ((uVar32 & 0xffffffff) < (uVar34 & 0xffffffff));
                }
                *(int *)(puVar18 + 1) = (int)(uVar33 - uVar34);
                uVar32 = (*puVar18 >> (0x40 - uVar34 & 0x7f) & 0xffffffff) + lVar23;
                *puVar18 = *puVar18 << (uVar34 & 0x7f);
                if ((longlong)(uVar33 - uVar34) < 0) {
                  fn_82C4E5E8(puVar18);
                }
              }
            }
            else {
              uVar32 = 0;
            }
            plVar19 = *(longlong **)(param_1 + 0x54);
            lVar23 = *plVar19;
            uVar20 = *(uint *)(plVar19 + 1);
            *plVar19 = lVar23 << 1;
            *(int *)(plVar19 + 1) = (int)((ulonglong)uVar20 - 1);
            if ((longlong)((ulonglong)uVar20 - 1) < 0) {
              fn_82C4E5E8();
            }
            puVar18 = *(ulonglong **)(param_1 + 0x54);
            uVar35 = (ulonglong)*(uint *)(param_1 + 0x7a0);
            iVar36 = 0;
            uVar33 = (ulonglong)*(uint *)(puVar18 + 1);
            uVar34 = uVar33 + 0x10;
            if (lVar23 < 0) {
              if (uVar35 < 0x21) {
                if (uVar35 == 0) {
                  iVar36 = 0;
                }
                else {
                  iVar26 = 0;
                  if ((uVar34 & 0xffffffff) < uVar35) {
                    do {
                      iVar36 = iVar26;
                      if ((uVar34 & 0xffffffff) == 0) break;
                      uVar35 = uVar35 - uVar34;
                      *(int *)(puVar18 + 1) = (int)(uVar33 - uVar34);
                      iVar36 = ((int)(*puVar18 >> (0x40 - uVar34 & 0x7f)) << ((uint)uVar35 & 0x3f))
                               + iVar36;
                      *puVar18 = *puVar18 << (uVar34 & 0x7f);
                      if ((longlong)(uVar33 - uVar34) < 0) {
                        fn_82C4E5E8(puVar18);
                      }
                      uVar33 = (ulonglong)*(uint *)(puVar18 + 1);
                      uVar34 = uVar33 + 0x10;
                      iVar26 = iVar36;
                    } while ((uVar34 & 0xffffffff) < (uVar35 & 0xffffffff));
                  }
                  uVar34 = *puVar18;
                  *(int *)(puVar18 + 1) = (int)(uVar33 - uVar35);
                  *puVar18 = uVar34 << (uVar35 & 0x7f);
                  if ((longlong)(uVar33 - uVar35) < 0) {
                    fn_82C4E5E8(puVar18);
                  }
                  iVar36 = -((int)(uVar34 >> (0x40 - uVar35 & 0x7f)) + iVar36);
                }
              }
              else {
                iVar36 = 0;
              }
            }
            else if (uVar35 < 0x21) {
              if (uVar35 == 0) {
                iVar36 = 0;
              }
              else {
                iVar26 = 0;
                if ((uVar34 & 0xffffffff) < uVar35) {
                  do {
                    iVar36 = iVar26;
                    if ((uVar34 & 0xffffffff) == 0) break;
                    uVar35 = uVar35 - uVar34;
                    *(int *)(puVar18 + 1) = (int)(uVar33 - uVar34);
                    iVar36 = ((int)(*puVar18 >> (0x40 - uVar34 & 0x7f)) << ((uint)uVar35 & 0x3f)) +
                             iVar36;
                    *puVar18 = *puVar18 << (uVar34 & 0x7f);
                    if ((longlong)(uVar33 - uVar34) < 0) {
                      fn_82C4E5E8(puVar18);
                    }
                    uVar33 = (ulonglong)*(uint *)(puVar18 + 1);
                    uVar34 = uVar33 + 0x10;
                    iVar26 = iVar36;
                  } while ((uVar34 & 0xffffffff) < (uVar35 & 0xffffffff));
                }
                *(int *)(puVar18 + 1) = (int)(uVar33 - uVar35);
                iVar36 = (int)(*puVar18 >> (0x40 - uVar35 & 0x7f)) + iVar36;
                *puVar18 = *puVar18 << (uVar35 & 0x7f);
                if ((longlong)(uVar33 - uVar35) < 0) {
                  fn_82C4E5E8(puVar18);
                }
              }
            }
            else {
              iVar36 = 0;
            }
          }
        }
      }
    }
    else {
      if (uVar8 <= uVar32) {
        return 1;
      }
      if (uVar28 <= uVar32) {
        uVar30 = 1;
      }
      lVar23 = *plVar19;
      uVar20 = *(uint *)(plVar19 + 1);
      uVar32 = (ulonglong)*(byte *)(iVar36 + iVar16);
      *plVar19 = lVar23 << 1;
      *(int *)(plVar19 + 1) = (int)((ulonglong)uVar20 - 1);
      if ((longlong)((ulonglong)uVar20 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar23 < 0) {
        iVar36 = -(int)*(char *)(iVar36 + iVar15);
      }
      else {
        iVar36 = (int)*(char *)(iVar36 + iVar15);
      }
    }
    if ((*(int *)(*(int *)(param_1 + 0x54) + 0x14) != 0) ||
       (uVar32 = uVar32 + lVar29, 0x3f < (uVar32 & 0xffffffff))) {
      return 1;
    }
    iVar26 = (int)uVar32;
    bVar6 = *(byte *)(*(int *)(param_1 + 0x728) + iVar26);
    if ((bVar6 & 7) != 0) {
      uStack_bc = 1 << ((int)(uint)bVar6 >> 3 & 7U) | uStack_bc;
    }
    if (iVar36 == 1) {
      *(int *)((uint)*(byte *)(iVar26 + param_3) * 4 + *(int *)(param_1 + 0x6e4)) = iVar25;
    }
    else if (iVar36 == -1) {
      *(int *)((uint)*(byte *)(iVar26 + param_3) * 4 + *(int *)(param_1 + 0x6e4)) = iVar24;
    }
    else {
      if (iVar36 < 1) {
        bVar6 = *(byte *)(iVar26 + param_3);
        iVar36 = iVar36 * iVar27 - iVar17;
      }
      else {
        bVar6 = *(byte *)(iVar26 + param_3);
        iVar36 = iVar36 * iVar27 + iVar17;
      }
      *(int *)((uint)bVar6 * 4 + *(int *)(param_1 + 0x6e4)) = iVar36;
    }
    lVar29 = uVar32 + 1;
    if ((int)uVar30 != 0) {
      *(uint *)(param_1 + 0x798) = uStack_bc;
      return 0;
    }
  } while( true );
}

