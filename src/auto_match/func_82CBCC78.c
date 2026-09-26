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
extern int fn_82CAF880();


ulonglong fn_82CBCC78(int param_1,uint *param_2,int param_3,int param_4,int param_5,int *param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  ulonglong *puVar16;
  longlong *plVar17;
  int iVar19;
  longlong lVar18;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  char cVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  
  piVar8 = (int *)*param_2;
  uVar25 = ZEXT48(piVar8);
  uVar22 = param_2[1];
  uVar9 = param_2[7];
  uVar10 = param_2[8];
  puVar11 = *(ulonglong **)(param_1 + 0x54);
  iVar12 = *(int *)(param_1 + 0x13c);
  uVar23 = (ulonglong)param_2[2] + 1;
  iVar13 = *(int *)(param_1 + 0x140);
  if (param_5 == 0) {
    uVar20 = *puVar11;
    uVar15 = *(uint *)(puVar11 + 1);
    *puVar11 = uVar20 << 1;
    *(int *)(puVar11 + 1) = (int)((ulonglong)uVar15 - 1);
    if ((longlong)((ulonglong)uVar15 - 1) < 0) {
      fn_82C4E5E8(puVar11);
    }
    if ((longlong)uVar20 < 0) {
      if (uVar25 == 0) {
        *(undefined4 *)((int)puVar11 + 0x14) = 3;
      }
      else {
        iVar19 = *piVar8;
        sVar7 = *(short *)((int)((*puVar11 >> (0x40 - (ulonglong)*(byte *)(piVar8 + 2) & 0x7f) &
                                 0xffffffff) << 1) + iVar19);
        uVar25 = (ulonglong)sVar7;
        if (sVar7 < 0) {
          fn_82C4E470(puVar11);
          do {
            uVar20 = *puVar11;
            fn_82C4E470(puVar11,1);
            sVar7 = *(short *)((int)(((uVar25 - ((longlong)uVar20 >> 0x3f)) + 0x8000 & 0xffffffff)
                                    << 1) + iVar19);
            uVar25 = (ulonglong)sVar7;
          } while (sVar7 < 0);
        }
        else {
          iVar19 = *(int *)(puVar11 + 1);
          iVar21 = (int)(uVar25 & 0xf);
          *(int *)(puVar11 + 1) = iVar19 - iVar21;
          *puVar11 = *puVar11 << (uVar25 & 0xf);
          if (iVar19 < iVar21) {
            do {
              pbVar14 = *(byte **)((int)puVar11 + 0xc);
              if (pbVar14 < (byte *)(*(int *)(puVar11 + 2) - 4U)) {
                bVar6 = *pbVar14;
                bVar1 = pbVar14[1];
                bVar2 = pbVar14[2];
                bVar3 = pbVar14[3];
                bVar4 = pbVar14[4];
                bVar5 = pbVar14[5];
                iVar19 = *(int *)(puVar11 + 1);
                *(byte **)((int)puVar11 + 0xc) = pbVar14 + 6;
                *(int *)(puVar11 + 1) = iVar19 + 0x30;
                *puVar11 = ((((((ulonglong)bVar1 + (ulonglong)bVar6 * 0x100) * 0x100 +
                              (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3) * 0x100 +
                            (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5 <<
                           ((longlong)-iVar19 & 0x7fU)) + *puVar11;
                goto LAB_82cbcfac;
              }
              iVar19 = fn_82C4E3B0(puVar11);
            } while (iVar19 == 1);
            uVar25 = (ulonglong)((int)sVar7 >> 4);
          }
          else {
LAB_82cbcfac:
            uVar25 = (ulonglong)((int)sVar7 >> 4);
          }
        }
      }
      if ((uVar25 & 0xffffffff) == (ulonglong)uVar22) {
        return 0xffffffffffffffff;
      }
      uVar20 = *puVar11;
      uVar22 = *(uint *)(puVar11 + 1);
      cVar24 = *(char *)((int)uVar25 + uVar9);
      bVar6 = *(byte *)((int)uVar25 + uVar10);
      *puVar11 = uVar20 << 1;
      uVar9 = (uint)((longlong)uVar20 >> 0x3f);
      *(int *)(puVar11 + 1) = (int)((ulonglong)uVar22 - 1);
      if ((longlong)((ulonglong)uVar22 - 1) < 0) {
        fn_82C4E5E8(puVar11);
      }
      if ((uVar25 & 0xffffffff) < (uVar23 & 0xffffffff)) {
        uVar22 = param_2[5];
      }
      else {
        uVar22 = param_2[6];
      }
      uVar22 = (uint)*(byte *)(uVar22 + (int)cVar24) + *(int *)(param_1 + 0x790) + (uint)bVar6;
      iVar19 = ((int)cVar24 ^ uVar9) - uVar9;
    }
    else {
      uVar25 = *puVar11;
      uVar22 = *(uint *)(puVar11 + 1);
      *puVar11 = uVar25 << 1;
      *(int *)(puVar11 + 1) = (int)((ulonglong)uVar22 - 1);
      if ((longlong)((ulonglong)uVar22 - 1) < 0) {
        fn_82C4E5E8(puVar11);
      }
      uVar25 = -(ulonglong)((longlong)uVar25 < 0) & uVar23;
      if (*(int *)(param_1 + 0x3cb0) < 4) {
        uVar23 = (ulonglong)*(uint *)(puVar11 + 1);
        uVar26 = 6;
        iVar21 = 0;
        uVar20 = uVar23 + 0x10;
        iVar19 = 0;
        if ((uVar20 & 0xffffffff) < 6) {
          do {
            iVar21 = iVar19;
            if ((uVar20 & 0xffffffff) == 0) break;
            uVar26 = uVar26 - uVar20;
            *(int *)(puVar11 + 1) = (int)(uVar23 - uVar20);
            iVar21 = ((int)(*puVar11 >> (0x40 - uVar20 & 0x7f)) << ((uint)uVar26 & 0x3f)) + iVar21;
            *puVar11 = *puVar11 << (uVar20 & 0x7f);
            if ((longlong)(uVar23 - uVar20) < 0) {
              fn_82C4E5E8(puVar11);
            }
            uVar23 = (ulonglong)*(uint *)(puVar11 + 1);
            uVar20 = uVar23 + 0x10;
            iVar19 = iVar21;
          } while ((uVar20 & 0xffffffff) < (uVar26 & 0xffffffff));
        }
        *(int *)(puVar11 + 1) = (int)(uVar23 - uVar26);
        uVar22 = (int)(*puVar11 >> (0x40 - uVar26 & 0x7f)) + iVar21;
        *puVar11 = *puVar11 << (uVar26 & 0x7f);
        if ((longlong)(uVar23 - uVar26) < 0) {
          fn_82C4E5E8(puVar11);
        }
        uVar23 = (ulonglong)*(uint *)(puVar11 + 1);
        uVar26 = 8;
        uVar20 = uVar23 + 0x10;
        iVar19 = 0;
        cVar24 = '\0';
        if ((uVar20 & 0xffffffff) < 8) {
          do {
            cVar24 = (char)iVar19;
            if ((uVar20 & 0xffffffff) == 0) break;
            uVar26 = uVar26 - uVar20;
            *(int *)(puVar11 + 1) = (int)(uVar23 - uVar20);
            iVar19 = ((int)(*puVar11 >> (0x40 - uVar20 & 0x7f)) << ((uint)uVar26 & 0x3f)) + iVar19;
            cVar24 = (char)iVar19;
            *puVar11 = *puVar11 << (uVar20 & 0x7f);
            if ((longlong)(uVar23 - uVar20) < 0) {
              fn_82C4E5E8(puVar11);
            }
            uVar23 = (ulonglong)*(uint *)(puVar11 + 1);
            uVar20 = uVar23 + 0x10;
          } while ((uVar20 & 0xffffffff) < (uVar26 & 0xffffffff));
        }
        uVar20 = *puVar11;
        *(int *)(puVar11 + 1) = (int)(uVar23 - uVar26);
        *puVar11 = uVar20 << (uVar26 & 0x7f);
        if ((longlong)(uVar23 - uVar26) < 0) {
          fn_82C4E5E8(puVar11);
        }
        iVar19 = (int)(char)((char)(uVar20 >> (0x40 - uVar26 & 0x7f)) + cVar24);
      }
      else {
        if (*(int *)(param_1 + 0x79c) != 0) {
          fn_82CAF880(param_1);
          *(undefined4 *)(param_1 + 0x79c) = 0;
        }
        puVar16 = *(ulonglong **)(param_1 + 0x54);
        iVar19 = 0;
        uVar26 = (ulonglong)*(uint *)(param_1 + 0x7a4);
        uVar23 = (ulonglong)*(uint *)(puVar16 + 1);
        uVar20 = uVar23 + 0x10;
        if (uVar26 < 0x21) {
          if (uVar26 == 0) {
            uVar22 = 0;
          }
          else {
            iVar21 = 0;
            if ((uVar20 & 0xffffffff) < uVar26) {
              do {
                iVar19 = iVar21;
                if ((uVar20 & 0xffffffff) == 0) break;
                uVar26 = uVar26 - uVar20;
                *(int *)(puVar16 + 1) = (int)(uVar23 - uVar20);
                iVar19 = ((int)(*puVar16 >> (0x40 - uVar20 & 0x7f)) << ((uint)uVar26 & 0x3f)) +
                         iVar19;
                *puVar16 = *puVar16 << (uVar20 & 0x7f);
                if ((longlong)(uVar23 - uVar20) < 0) {
                  fn_82C4E5E8(puVar16);
                }
                uVar23 = (ulonglong)*(uint *)(puVar16 + 1);
                uVar20 = uVar23 + 0x10;
                iVar21 = iVar19;
              } while ((uVar20 & 0xffffffff) < (uVar26 & 0xffffffff));
            }
            *(int *)(puVar16 + 1) = (int)(uVar23 - uVar26);
            uVar22 = (int)(*puVar16 >> (0x40 - uVar26 & 0x7f)) + iVar19;
            *puVar16 = *puVar16 << (uVar26 & 0x7f);
            if ((longlong)(uVar23 - uVar26) < 0) {
              fn_82C4E5E8(puVar16);
            }
          }
        }
        else {
          uVar22 = 0;
        }
        plVar17 = *(longlong **)(param_1 + 0x54);
        lVar18 = *plVar17;
        uVar9 = *(uint *)(plVar17 + 1);
        *plVar17 = lVar18 << 1;
        *(int *)(plVar17 + 1) = (int)((ulonglong)uVar9 - 1);
        if ((longlong)((ulonglong)uVar9 - 1) < 0) {
          fn_82C4E5E8();
        }
        puVar16 = *(ulonglong **)(param_1 + 0x54);
        uVar26 = (ulonglong)*(uint *)(param_1 + 0x7a0);
        iVar19 = 0;
        uVar23 = (ulonglong)*(uint *)(puVar16 + 1);
        uVar20 = uVar23 + 0x10;
        if (lVar18 < 0) {
          if (uVar26 < 0x21) {
            if (uVar26 == 0) {
              iVar19 = 0;
            }
            else {
              if ((uVar20 & 0xffffffff) < uVar26) {
                do {
                  if ((uVar20 & 0xffffffff) == 0) break;
                  uVar26 = uVar26 - uVar20;
                  *(int *)(puVar16 + 1) = (int)(uVar23 - uVar20);
                  iVar19 = ((int)(*puVar16 >> (0x40 - uVar20 & 0x7f)) << ((uint)uVar26 & 0x3f)) +
                           iVar19;
                  *puVar16 = *puVar16 << (uVar20 & 0x7f);
                  if ((longlong)(uVar23 - uVar20) < 0) {
                    fn_82C4E5E8(puVar16);
                  }
                  uVar23 = (ulonglong)*(uint *)(puVar16 + 1);
                  uVar20 = uVar23 + 0x10;
                } while ((uVar20 & 0xffffffff) < (uVar26 & 0xffffffff));
              }
              uVar20 = *puVar16;
              *(int *)(puVar16 + 1) = (int)(uVar23 - uVar26);
              *puVar16 = uVar20 << (uVar26 & 0x7f);
              if ((longlong)(uVar23 - uVar26) < 0) {
                fn_82C4E5E8(puVar16);
              }
              iVar19 = -((int)(uVar20 >> (0x40 - uVar26 & 0x7f)) + iVar19);
            }
          }
          else {
            iVar19 = 0;
          }
        }
        else if (uVar26 < 0x21) {
          if (uVar26 == 0) {
            iVar19 = 0;
          }
          else {
            if ((uVar20 & 0xffffffff) < uVar26) {
              do {
                if ((uVar20 & 0xffffffff) == 0) break;
                uVar26 = uVar26 - uVar20;
                *(int *)(puVar16 + 1) = (int)(uVar23 - uVar20);
                iVar19 = ((int)(*puVar16 >> (0x40 - uVar20 & 0x7f)) << ((uint)uVar26 & 0x3f)) +
                         iVar19;
                *puVar16 = *puVar16 << (uVar20 & 0x7f);
                if ((longlong)(uVar23 - uVar20) < 0) {
                  fn_82C4E5E8(puVar16);
                }
                uVar23 = (ulonglong)*(uint *)(puVar16 + 1);
                uVar20 = uVar23 + 0x10;
              } while ((uVar20 & 0xffffffff) < (uVar26 & 0xffffffff));
            }
            *(int *)(puVar16 + 1) = (int)(uVar23 - uVar26);
            iVar19 = (int)(*puVar16 >> (0x40 - uVar26 & 0x7f)) + iVar19;
            *puVar16 = *puVar16 << (uVar26 & 0x7f);
            if ((longlong)(uVar23 - uVar26) < 0) {
              fn_82C4E5E8(puVar16);
            }
          }
        }
        else {
          iVar19 = 0;
        }
      }
    }
  }
  else {
    if (uVar25 == 0) {
      *(undefined4 *)((int)puVar11 + 0x14) = 3;
    }
    else {
      iVar19 = *piVar8;
      sVar7 = *(short *)((int)((*puVar11 >> (0x40 - (ulonglong)*(byte *)(piVar8 + 2) & 0x7f) &
                               0xffffffff) << 1) + iVar19);
      uVar25 = (ulonglong)sVar7;
      if (sVar7 < 0) {
        fn_82C4E470(puVar11);
        do {
          uVar20 = *puVar11;
          fn_82C4E470(puVar11,1);
          sVar7 = *(short *)((int)(((uVar25 - ((longlong)uVar20 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                  1) + iVar19);
          uVar25 = (ulonglong)sVar7;
        } while (sVar7 < 0);
      }
      else {
        iVar19 = *(int *)(puVar11 + 1);
        iVar21 = (int)(uVar25 & 0xf);
        *puVar11 = *puVar11 << (uVar25 & 0xf);
        *(int *)(puVar11 + 1) = iVar19 - iVar21;
        if (iVar19 < iVar21) {
          do {
            pbVar14 = *(byte **)((int)puVar11 + 0xc);
            if (pbVar14 < (byte *)(*(int *)(puVar11 + 2) - 4U)) {
              bVar6 = *pbVar14;
              bVar1 = pbVar14[1];
              bVar2 = pbVar14[2];
              bVar3 = pbVar14[3];
              bVar4 = pbVar14[4];
              bVar5 = pbVar14[5];
              iVar19 = *(int *)(puVar11 + 1);
              *(byte **)((int)puVar11 + 0xc) = pbVar14 + 6;
              *(int *)(puVar11 + 1) = iVar19 + 0x30;
              *puVar11 = ((((((ulonglong)bVar6 * 0x100 + (ulonglong)bVar1) * 0x100 +
                            (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3) * 0x100 + (ulonglong)bVar4
                          ) * 0x100 + (ulonglong)bVar5 << ((longlong)-iVar19 & 0x7fU)) + *puVar11;
              goto LAB_82cbcdbc;
            }
            iVar19 = fn_82C4E3B0(puVar11);
          } while (iVar19 == 1);
          uVar25 = (ulonglong)((int)sVar7 >> 4);
        }
        else {
LAB_82cbcdbc:
          uVar25 = (ulonglong)((int)sVar7 >> 4);
        }
      }
    }
    if ((uVar25 & 0xffffffff) == (ulonglong)uVar22) {
      return 0xffffffffffffffff;
    }
    uVar22 = *(uint *)(puVar11 + 1);
    uVar15 = (uint)((longlong)*puVar11 >> 0x3f);
    *puVar11 = *puVar11 << 1;
    *(int *)(puVar11 + 1) = (int)((ulonglong)uVar22 - 1);
    if ((longlong)((ulonglong)uVar22 - 1) < 0) {
      fn_82C4E5E8(puVar11);
    }
    bVar6 = *(byte *)((int)uVar25 + uVar10);
    uVar22 = (uint)bVar6;
    if ((uVar25 & 0xffffffff) < (uVar23 & 0xffffffff)) {
      uVar10 = param_2[3];
    }
    else {
      uVar10 = param_2[4];
    }
    iVar19 = ((int)*(char *)(uVar10 + bVar6) + (int)*(char *)((int)uVar25 + uVar9) ^ uVar15) -
             uVar15;
  }
  if (*(int *)((int)puVar11 + 0x14) != 0) {
    return 0xffffffffffffffff;
  }
  iVar21 = *param_6 + uVar22;
  *param_6 = iVar21;
  if (0x3f < iVar21) {
    return 0xffffffffffffffff;
  }
  bVar6 = *(byte *)(iVar21 + param_4);
  uVar22 = (uint)bVar6;
  if (7 < bVar6) {
    if ((bVar6 & 7) != 0) {
      if (iVar19 < 1) {
        *(int *)(*(int *)(param_1 + 0x6e4) + (uint)bVar6 * 4) = iVar19 * iVar12 - iVar13;
      }
      else {
        *(int *)(*(int *)(param_1 + 0x6e4) + (uint)bVar6 * 4) = iVar19 * iVar12 + iVar13;
      }
      goto LAB_82cbd544;
    }
    uVar22 = ((int)(uint)bVar6 >> 3) + 8;
  }
  *(short *)(uVar22 * 2 + param_3) = *(short *)(uVar22 * 2 + param_3) + (short)iVar19;
LAB_82cbd544:
  *param_6 = *param_6 + 1;
  return uVar25;
}

