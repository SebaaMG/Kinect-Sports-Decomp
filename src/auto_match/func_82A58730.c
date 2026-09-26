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
extern int fn_82A58520();
extern int fn_82A58620();
extern int fn_82A753E8();


undefined8
fn_82A58730(ulonglong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,short *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  short sVar11;
  ushort uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  
  iVar19 = param_3[0x1b];
  uVar22 = (ulonglong)(uint)param_3[0x1c];
  iVar2 = *(int *)(param_5 + 2);
  uVar12 = param_5[1];
  uVar17 = 2;
  uVar3 = *(uint *)(param_5 + 0xe);
  uVar18 = (ulonglong)uVar3;
  bVar8 = false;
  uVar13 = *(uint *)(param_5 + 0x10);
  uVar20 = (ulonglong)uVar13;
  uVar4 = *(uint *)(param_5 + 0x12);
  uVar15 = (ulonglong)uVar4;
  uVar5 = *(uint *)(param_5 + 0x14);
  uVar21 = (ulonglong)uVar5;
  uVar6 = *(uint *)(param_5 + 0x16);
  uVar14 = (ulonglong)uVar6;
  if (((param_3[0x17] == 0) && (param_3[0x15] == 0)) && (iVar19 == 0)) {
    return 1;
  }
  if ((param_1 & 0xffffffff) < 3) {
    uVar1 = param_5[10];
    if (((uVar1 & 2) == 0) || ((uVar1 & 4) == 0)) {
      uVar24 = 1;
    }
    else {
      uVar9 = fn_82A58620(iVar2,(ulonglong)uVar12,*(undefined4 *)(param_5 + 0xc),uVar20,param_1);
      if ((uVar9 & 0xffffffff) / (ulonglong)uVar12 < 4000) {
        uVar24 = 2 << (uVar1 >> 3 & 3);
      }
      else {
        uVar24 = 8 << (uVar1 >> 3 & 3);
      }
    }
  }
  else {
    uVar12 = param_5[10] & 6;
    uVar24 = 1 << ((ushort)param_5[10] >> 3 & 7);
    if (6 < uVar12) {
      return 0;
    }
    if (uVar12 != 0) {
      if (uVar12 == 1) {
        return 0;
      }
      if (uVar12 == 2) {
        uVar17 = 1;
      }
      else {
        if (uVar12 == 3) {
          return 0;
        }
        if (uVar12 == 4) {
          uVar17 = 4;
        }
        else {
          if (uVar12 == 5) {
            return 0;
          }
          uVar17 = 8;
        }
      }
    }
  }
  uVar9 = uVar18;
  if ((((param_1 & 0xffffffff) == 3) && (param_3[0x17] != 0)) && (*param_3 == 0)) {
    if ((uint)param_3[0x18] < 0x97) {
      uVar7 = uVar3 >> 2;
    }
    else {
      if (0xfa < (uint)param_3[0x18]) goto LAB_82a588d8;
      uVar7 = uVar3 >> 1;
    }
    uVar23 = (ulonglong)uVar7;
    if (iVar19 != 0) {
      if (uVar23 <= uVar22) {
        uVar22 = uVar23;
      }
      goto LAB_82a588d8;
    }
    if (uVar23 <= uVar18) goto LAB_82a588e8;
  }
  else {
LAB_82a588d8:
    if ((iVar19 != 0) && (uVar23 = uVar22, (param_1 & 0xffffffff) == 3)) {
LAB_82a588e8:
      if (uVar23 != uVar18) {
        uVar9 = ((ulonglong)uVar3 & 0x7fffffff) << 1;
        if ((uVar9 == uVar23) && (1 < uVar17)) {
          bVar8 = true;
          uVar17 = uVar17 >> 1;
          uVar14 = (ulonglong)(uVar6 >> 1);
          if ((*param_3 != 0) || (param_3[9] == 0)) {
            uVar21 = 1;
            if ((ulonglong)(uVar5 >> 1) != 0) {
              uVar21 = (ulonglong)(uVar5 >> 1);
            }
            uVar15 = 1;
            if ((ulonglong)(uVar4 >> 1) != 0) {
              uVar15 = (ulonglong)(uVar4 >> 1);
            }
            uVar20 = uVar21;
            if (5 < uVar21) {
              uVar20 = uVar21 % 5;
              if (uVar20 == 0) {
                uVar20 = uVar21 / 5;
              }
              else if ((uVar21 < 5) || ((uVar21 & 3) != 0)) {
                if ((uVar21 < 4) || (uVar21 != (uVar21 / 3) * 3)) {
                  uVar22 = uVar21 & 3;
                  uVar18 = uVar21 % 3;
                  if (uVar18 < uVar22) {
LAB_82a58a04:
                    if (uVar20 < uVar18) {
LAB_82a58a18:
                      uVar21 = uVar21 - uVar20;
                      uVar20 = (uVar21 & 0xffffffff) / 5;
                    }
                    else {
                      uVar21 = uVar21 - uVar18;
                      uVar20 = (uVar21 & 0xffffffff) / 3;
                    }
                  }
                  else {
                    if (uVar20 < uVar22) {
                      if (uVar18 <= uVar22) goto LAB_82a58a04;
                      goto LAB_82a58a18;
                    }
                    uVar21 = uVar21 - uVar22;
                    uVar20 = (uVar21 & 0xffffffff) >> 2;
                  }
                  if ((uVar21 + 1 & 0xffffffff) <= uVar15) {
                    uVar15 = uVar21 + 1;
                  }
                }
                else {
                  uVar20 = uVar21 / 3;
                }
              }
              else {
                uVar20 = uVar21 >> 2;
              }
            }
          }
        }
        else if ((uVar18 == (uVar23 & 0x7fffffff) << 1) && (uVar17 < 8)) {
          bVar8 = true;
          uVar17 = uVar17 << 1;
          uVar14 = ((ulonglong)uVar6 & 0x7fffffff) << 1;
          uVar9 = (ulonglong)(uVar3 >> 1);
          if ((*param_3 != 0) || (param_3[9] == 0)) {
            uVar21 = ((ulonglong)uVar5 & 0x7fffffff) << 1;
            uVar15 = ((ulonglong)uVar4 & 0x7fffffff) << 1;
            uVar20 = ((ulonglong)uVar13 & 0x7fffffff) << 1;
          }
        }
        else {
          uVar9 = uVar18;
          if ((uVar18 == (uVar23 & 0x3fffffff) << 2) && (uVar17 < 4)) {
            bVar8 = true;
            uVar17 = uVar17 << 2;
            uVar14 = ((ulonglong)uVar6 & 0x3fffffff) << 2;
            uVar9 = (ulonglong)(uVar3 >> 2);
            if ((*param_3 != 0) || (param_3[9] == 0)) {
              uVar21 = ((ulonglong)uVar5 & 0x3fffffff) << 2;
              uVar15 = ((ulonglong)uVar4 & 0x3fffffff) << 2;
              uVar20 = ((ulonglong)uVar13 & 0x3fffffff) << 2;
            }
          }
        }
      }
    }
  }
  uVar10 = (undefined4)uVar14;
  if (param_3[0x17] != 0) {
    uVar22 = ((longlong)param_3[0x18] * (longlong)iVar2 + 999U & 0xffffffff) / 1000;
    if (*param_3 == 0) {
      do {
        if ((uVar9 + (uVar9 & 0x7fffffff) * 2 & 0xffffffff) <= uVar22) break;
        if ((param_1 & 0xffffffff) < 3) {
          return 0;
        }
        uVar17 = (uVar17 & 0x7fffffff) << 1;
        uVar9 = uVar9 >> 1;
        bVar8 = true;
      } while (uVar17 < 0x10);
      if (uVar22 < ((longlong)((int)uVar21 + 2) * (longlong)(int)uVar9 & 0xffffffffU)) {
        bVar8 = true;
        uVar20 = uVar22 / uVar9 & 0xffff;
        if (uVar20 < 2) {
          return 0;
        }
        uVar21 = uVar20 - 2;
        if ((uVar21 & 0xffffffff) == 0) {
          return 0;
        }
        if ((uVar20 - 1 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
          uVar15 = uVar20 - 1;
        }
        uVar20 = uVar21;
        if (5 < (uVar21 & 0xffffffff)) {
          uVar20 = uVar21 + ((uVar21 & 0xffffffff) / 5) * -5;
          if (uVar20 == 0) {
            uVar20 = (uVar21 & 0xffffffff) / 5;
          }
          else if (((uVar21 & 0xffffffff) < 5) || ((uVar21 & 3) != 0)) {
            if (((uVar21 & 0xffffffff) < 4) || (uVar21 != ((uVar21 & 0xffffffff) / 3) * 3)) {
              uVar22 = uVar21 & 3;
              uVar18 = uVar21 + ((uVar21 & 0xffffffff) / 3) * -3;
              if ((uVar18 & 0xffffffff) < uVar22) {
LAB_82a58c10:
                if ((uVar20 & 0xffffffff) < (uVar18 & 0xffffffff)) {
LAB_82a58c24:
                  uVar21 = uVar21 - uVar20;
                  uVar20 = (uVar21 & 0xffffffff) / 5;
                }
                else {
                  uVar21 = uVar21 - uVar18;
                  uVar20 = (uVar21 & 0xffffffff) / 3;
                }
              }
              else {
                if ((uVar20 & 0xffffffff) < uVar22) {
                  if ((uVar18 & 0xffffffff) <= uVar22) goto LAB_82a58c10;
                  goto LAB_82a58c24;
                }
                uVar21 = uVar21 - uVar22;
                uVar20 = (uVar21 & 0xffffffff) >> 2;
              }
              if ((uVar21 + 1 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
                uVar15 = uVar21 + 1;
              }
            }
            else {
              uVar20 = (uVar21 & 0xffffffff) / 3;
            }
          }
          else {
            uVar20 = (uVar21 & 0xffffffff) >> 2;
          }
        }
      }
    }
    else {
      do {
        if ((*param_5 == 0x163) || (uVar18 = (uVar9 & 0x7fffffff) << 1, *param_5 == 0x167)) {
          uVar18 = uVar9;
        }
        if (uVar18 <= uVar22) break;
        bVar8 = true;
        uVar17 = (uVar17 & 0x7fffffff) << 1;
        uVar9 = uVar9 >> 1;
        if ((param_1 & 0xffffffff) < 3) {
          return 0;
        }
      } while (uVar17 < 0x10);
      if (uVar22 < ((longlong)(int)uVar15 * (longlong)(int)uVar9 & 0xffffffffU)) {
        uVar15 = uVar22 / uVar9;
        bVar8 = true;
        if (uVar15 <= uVar20) {
          uVar20 = uVar15;
        }
        if (uVar15 == 0) {
          return 0;
        }
      }
    }
  }
  uVar16 = (undefined4)uVar15;
  iVar19 = (int)uVar9;
  if ((param_3[1] == 0) && (param_3[0x15] != 0)) {
    uVar22 = uVar14 + uVar20 + 3;
    uVar14 = ((longlong)param_3[0x16] * (longlong)iVar2 + 999U & 0xffffffff) / 1000;
    if (uVar14 < ((longlong)(int)uVar22 * (longlong)iVar19 & 0xffffffffU)) {
      if (uVar14 / uVar9 < 5) {
        if ((param_1 & 0xffffffff) == 2) {
          return 0;
        }
        if (uVar17 == 8) {
          return 0;
        }
      }
      if (((uVar14 / uVar9 < 6) && ((param_1 & 0xffffffff) == 3)) && (uVar17 != 8)) {
        uVar18 = 8 / uVar17;
        uVar17 = 8;
        uVar9 = uVar9 / uVar18;
      }
      iVar19 = (int)uVar9;
      uVar9 = uVar14 / uVar9;
      if ((uVar22 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
        uVar15 = uVar22;
      }
      uVar16 = (int)uVar15;
      if (uVar14 < ((longlong)(int)uVar22 * (longlong)iVar19 & 0xffffffffU)) {
        if (uVar9 < 5) {
          return 0;
        }
        if ((uVar20 + 4 & 0xffffffff) < uVar9) {
          uVar14 = (uVar9 - uVar20) + 0xfd & 0xff;
          uVar10 = (undefined4)uVar14;
          uVar9 = uVar14 + uVar20 + 3;
        }
        else {
          uVar10 = 1;
          uVar20 = uVar9 - 4;
          if (*param_3 == 0) {
            uVar21 = (longlong)(int)((uVar21 & 0xffffffff) / (uVar20 & 0xffff)) *
                     (longlong)(int)(uVar20 & 0xffff);
          }
        }
        if ((uVar9 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
          uVar16 = (int)uVar9;
        }
      }
      goto LAB_82a58d74;
    }
  }
  if (!bVar8) {
    return 1;
  }
LAB_82a58d74:
  if (((uVar21 & 0xffffffff) == 1) && ((param_1 & 0xffffffff) < 3)) {
    param_5[10] = param_5[10] & 0xfff9;
  }
  if (7 < (uVar17 - 1 & 0xffffffff)) {
    return 0;
  }
  if ((int)(uVar17 - 1) == 0) {
    param_5[10] = param_5[10] & 0xfff9U | 2;
  }
  else if (uVar17 == 2) {
    if ((param_1 & 0xffffffff) == 3) {
      param_5[10] = param_5[10] & 0xfff9;
    }
  }
  else {
    if (uVar17 == 3) {
      return 0;
    }
    if (uVar17 == 4) {
      uVar12 = param_5[10];
      param_5[10] = uVar12 & 0xfff9 | 4;
      if (8 < uVar24) {
        uVar24 = 8;
      }
      uVar13 = 0;
      sVar11 = 0;
      uVar12 = uVar12 & 0xffc1 | 4;
      param_5[10] = uVar12;
      uVar3 = uVar24;
      while (1 < uVar3) {
        uVar13 = uVar13 + 1;
        sVar11 = (short)uVar13;
        uVar3 = uVar24 >> (uVar13 & 0x3f);
      }
    }
    else {
      if (uVar17 == 5) {
        return 0;
      }
      if (uVar17 == 6) {
        return 0;
      }
      if (uVar17 == 7) {
        return 0;
      }
      uVar12 = param_5[10];
      param_5[10] = uVar12 | 6;
      if (4 < uVar24) {
        uVar24 = 4;
      }
      uVar13 = 0;
      sVar11 = 0;
      uVar12 = uVar12 & 0xffc7 | 6;
      param_5[10] = uVar12;
      uVar3 = uVar24;
      while (1 < uVar3) {
        uVar13 = uVar13 + 1;
        sVar11 = (short)uVar13;
        uVar3 = uVar24 >> (uVar13 & 0x3f);
      }
    }
    param_5[10] = sVar11 << 3 | uVar12;
  }
  *(int *)(param_5 + 0xe) = iVar19;
  *(undefined4 *)(param_5 + 0x16) = uVar10;
  *(int *)(param_5 + 0x14) = (int)uVar21;
  *(int *)(param_5 + 0x10) = (int)uVar20;
  *(undefined4 *)(param_5 + 0x12) = uVar16;
  uVar10 = fn_82A58620(*param_2,param_2[1],*(undefined4 *)(param_5 + 0xc),uVar20,param_1,
                         param_5[10]);
  *(undefined4 *)(param_5 + 4) = uVar10;
  sVar11 = fn_82A58520(*param_2,param_2[1],*(undefined4 *)(param_5 + 0xc),
                         *(undefined4 *)(param_5 + 0x10),param_1,param_5[10]);
  param_5[6] = sVar11;
  if (param_3[7] != 0) {
    sVar11 = (short)*(int *)(param_5 + 0xe) << 2;
    if (*(int *)(param_5 + 0xe) == 0x1000) {
      sVar11 = 0x2000;
    }
    param_5[6] = sVar11;
  }
  fn_82A753E8(*param_5);
  return 1;
}

