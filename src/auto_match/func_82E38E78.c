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
extern int fn_82A753E8();
extern int fn_82E38C18();
extern int fn_82E38D58();


undefined8
fn_82E38E78(ulonglong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,short *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  short sVar10;
  ushort uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  
  iVar1 = param_3[0x1b];
  uVar21 = (ulonglong)(uint)param_3[0x1c];
  iVar2 = *(int *)(param_5 + 2);
  uVar23 = (ulonglong)(ushort)param_5[1];
  uVar17 = 2;
  uVar3 = *(uint *)(param_5 + 0xe);
  uVar18 = (ulonglong)uVar3;
  bVar8 = false;
  uVar12 = *(uint *)(param_5 + 0x10);
  uVar19 = (ulonglong)uVar12;
  uVar4 = *(uint *)(param_5 + 0x12);
  uVar15 = (ulonglong)uVar4;
  uVar5 = *(uint *)(param_5 + 0x14);
  uVar20 = (ulonglong)uVar5;
  uVar6 = *(uint *)(param_5 + 0x16);
  uVar13 = (ulonglong)uVar6;
  if (((param_3[0x17] == 0) && (param_3[0x15] == 0)) && (iVar1 == 0)) {
    return 1;
  }
  if ((param_1 & 0xffffffff) < 3) {
    uVar11 = param_5[10];
    if (((uVar11 & 2) == 0) || ((uVar11 & 4) == 0)) {
      uVar24 = 1;
    }
    else {
      lVar9 = fn_82E38D58(iVar2,uVar23,*(undefined4 *)(param_5 + 0xc),uVar19,param_1);
      trapWord(6,uVar23,0);
      if (((lVar9 + 7U & 0xffffffff) >> 3) / uVar23 < 4000) {
        uVar24 = 2 << (uVar11 >> 3 & 3);
      }
      else {
        uVar24 = 8 << (uVar11 >> 3 & 3);
      }
    }
  }
  else {
    uVar11 = param_5[10] & 6;
    uVar24 = 1 << ((ushort)param_5[10] >> 3 & 7);
    if (6 < uVar11) {
      return 0;
    }
    if (uVar11 != 0) {
      if (uVar11 == 1) {
        return 0;
      }
      if (uVar11 == 2) {
        uVar17 = 1;
      }
      else {
        if (uVar11 == 3) {
          return 0;
        }
        if (uVar11 == 4) {
          uVar17 = 4;
        }
        else {
          if (uVar11 == 5) {
            return 0;
          }
          uVar17 = 8;
        }
      }
    }
  }
  uVar23 = uVar18;
  if ((((param_1 & 0xffffffff) == 3) && (param_3[0x17] != 0)) && (*param_3 == 0)) {
    if ((uint)param_3[0x18] < 0x97) {
      uVar7 = uVar3 >> 2;
    }
    else {
      if (0xfa < (uint)param_3[0x18]) goto LAB_82e3902c;
      uVar7 = uVar3 >> 1;
    }
    uVar22 = (ulonglong)uVar7;
    if (iVar1 != 0) {
      if (uVar22 <= uVar21) {
        uVar21 = uVar22;
      }
      goto LAB_82e3902c;
    }
    if (uVar22 <= uVar18) goto LAB_82e3903c;
  }
  else {
LAB_82e3902c:
    if ((iVar1 != 0) && (uVar22 = uVar21, (param_1 & 0xffffffff) == 3)) {
LAB_82e3903c:
      if (uVar22 != uVar18) {
        uVar23 = ((ulonglong)uVar3 & 0x7fffffff) << 1;
        if ((uVar23 == uVar22) && (1 < uVar17)) {
          bVar8 = true;
          uVar17 = uVar17 >> 1;
          uVar13 = (ulonglong)(uVar6 >> 1);
          if ((*param_3 != 0) || (param_3[9] == 0)) {
            uVar20 = 1;
            if ((ulonglong)(uVar5 >> 1) != 0) {
              uVar20 = (ulonglong)(uVar5 >> 1);
            }
            uVar15 = 1;
            if ((ulonglong)(uVar4 >> 1) != 0) {
              uVar15 = (ulonglong)(uVar4 >> 1);
            }
            uVar19 = uVar20;
            if (5 < uVar20) {
              uVar19 = uVar20 % 5;
              if (uVar19 == 0) {
                uVar19 = uVar20 / 5;
              }
              else if ((uVar20 < 5) || ((uVar20 & 3) != 0)) {
                if ((uVar20 < 4) || (uVar20 % 3 != 0)) {
                  uVar21 = uVar20 & 3;
                  uVar18 = uVar20 % 3;
                  if (uVar18 < uVar21) {
LAB_82e39158:
                    if (uVar19 < uVar18) {
LAB_82e3916c:
                      uVar20 = uVar20 - uVar19;
                      uVar19 = (uVar20 & 0xffffffff) / 5;
                    }
                    else {
                      uVar20 = uVar20 - uVar18;
                      uVar19 = (uVar20 & 0xffffffff) / 3;
                    }
                  }
                  else {
                    if (uVar19 < uVar21) {
                      if (uVar18 <= uVar21) goto LAB_82e39158;
                      goto LAB_82e3916c;
                    }
                    uVar20 = uVar20 - uVar21;
                    uVar19 = (uVar20 & 0xffffffff) >> 2;
                  }
                  if ((uVar20 + 1 & 0xffffffff) <= uVar15) {
                    uVar15 = uVar20 + 1;
                  }
                }
                else {
                  uVar19 = uVar20 / 3;
                }
              }
              else {
                uVar19 = uVar20 >> 2;
              }
            }
          }
        }
        else if ((uVar18 == (uVar22 & 0x7fffffff) << 1) && (uVar17 < 8)) {
          bVar8 = true;
          uVar17 = uVar17 << 1;
          uVar13 = ((ulonglong)uVar6 & 0x7fffffff) << 1;
          uVar23 = (ulonglong)(uVar3 >> 1);
          if ((*param_3 != 0) || (param_3[9] == 0)) {
            uVar20 = ((ulonglong)uVar5 & 0x7fffffff) << 1;
            uVar15 = ((ulonglong)uVar4 & 0x7fffffff) << 1;
            uVar19 = ((ulonglong)uVar12 & 0x7fffffff) << 1;
          }
        }
        else {
          uVar23 = uVar18;
          if ((uVar18 == (uVar22 & 0x3fffffff) << 2) && (uVar17 < 4)) {
            bVar8 = true;
            uVar17 = uVar17 << 2;
            uVar13 = ((ulonglong)uVar6 & 0x3fffffff) << 2;
            uVar23 = (ulonglong)(uVar3 >> 2);
            if ((*param_3 != 0) || (param_3[9] == 0)) {
              uVar20 = ((ulonglong)uVar5 & 0x3fffffff) << 2;
              uVar15 = ((ulonglong)uVar4 & 0x3fffffff) << 2;
              uVar19 = ((ulonglong)uVar12 & 0x3fffffff) << 2;
            }
          }
        }
      }
    }
  }
  uVar14 = (undefined4)uVar13;
  if (param_3[0x17] != 0) {
    uVar21 = ((longlong)param_3[0x18] * (longlong)iVar2 + 999U & 0xffffffff) / 1000;
    if (*param_3 == 0) {
      do {
        if ((uVar23 + (uVar23 & 0x7fffffff) * 2 & 0xffffffff) <= uVar21) break;
        if ((param_1 & 0xffffffff) < 3) {
          return 0;
        }
        uVar17 = (uVar17 & 0x7fffffff) << 1;
        uVar23 = uVar23 >> 1;
        bVar8 = true;
      } while (uVar17 < 0x10);
      if (uVar21 < ((longlong)((int)uVar20 + 2) * (longlong)(int)uVar23 & 0xffffffffU)) {
        trapWord(6,uVar23,0);
        uVar19 = uVar21 / uVar23 & 0xffff;
        bVar8 = true;
        if (uVar19 < 2) {
          return 0;
        }
        uVar20 = uVar19 - 2;
        if ((uVar20 & 0xffffffff) == 0) {
          return 0;
        }
        if ((uVar19 - 1 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
          uVar15 = uVar19 - 1;
        }
        uVar19 = uVar20;
        if (5 < (uVar20 & 0xffffffff)) {
          uVar19 = uVar20 + ((uVar20 & 0xffffffff) / 5) * -5;
          if (uVar19 == 0) {
            uVar19 = (uVar20 & 0xffffffff) / 5;
          }
          else if (((uVar20 & 0xffffffff) < 5) || ((uVar20 & 3) != 0)) {
            if (((uVar20 & 0xffffffff) < 4) || (uVar20 + ((uVar20 & 0xffffffff) / 3) * -3 != 0)) {
              uVar21 = uVar20 & 3;
              uVar18 = uVar20 + ((uVar20 & 0xffffffff) / 3) * -3;
              if ((uVar18 & 0xffffffff) < uVar21) {
LAB_82e39368:
                if ((uVar19 & 0xffffffff) < (uVar18 & 0xffffffff)) {
LAB_82e3937c:
                  uVar20 = uVar20 - uVar19;
                  uVar19 = (uVar20 & 0xffffffff) / 5;
                }
                else {
                  uVar20 = uVar20 - uVar18;
                  uVar19 = (uVar20 & 0xffffffff) / 3;
                }
              }
              else {
                if ((uVar19 & 0xffffffff) < uVar21) {
                  if ((uVar18 & 0xffffffff) <= uVar21) goto LAB_82e39368;
                  goto LAB_82e3937c;
                }
                uVar20 = uVar20 - uVar21;
                uVar19 = (uVar20 & 0xffffffff) >> 2;
              }
              if ((uVar20 + 1 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
                uVar15 = uVar20 + 1;
              }
            }
            else {
              uVar19 = (uVar20 & 0xffffffff) / 3;
            }
          }
          else {
            uVar19 = (uVar20 & 0xffffffff) >> 2;
          }
        }
      }
    }
    else {
      do {
        if ((*param_5 == 0x163) || (uVar18 = (uVar23 & 0x7fffffff) << 1, *param_5 == 0x167)) {
          uVar18 = uVar23;
        }
        if (uVar18 <= uVar21) break;
        bVar8 = true;
        uVar17 = (uVar17 & 0x7fffffff) << 1;
        uVar23 = uVar23 >> 1;
        if ((param_1 & 0xffffffff) < 3) {
          return 0;
        }
      } while (uVar17 < 0x10);
      if (uVar21 < ((longlong)(int)uVar15 * (longlong)(int)uVar23 & 0xffffffffU)) {
        uVar15 = uVar21 / uVar23;
        trapWord(6,uVar23,0);
        bVar8 = true;
        if (uVar15 <= uVar19) {
          uVar19 = uVar15;
        }
        if (uVar15 == 0) {
          return 0;
        }
      }
    }
  }
  uVar16 = (undefined4)uVar15;
  if ((param_3[1] == 0) && (param_3[0x15] != 0)) {
    uVar21 = uVar13 + uVar19 + 3;
    uVar13 = ((longlong)param_3[0x16] * (longlong)iVar2 + 999U & 0xffffffff) / 1000;
    if (uVar13 < ((longlong)(int)uVar21 * (longlong)(int)uVar23 & 0xffffffffU)) {
      trapWord(6,uVar23,0);
      if (uVar13 / uVar23 < 5) {
        if ((param_1 & 0xffffffff) == 2) {
          return 0;
        }
        if (uVar17 == 8) {
          return 0;
        }
      }
      if (((uVar13 / uVar23 < 6) && ((param_1 & 0xffffffff) == 3)) && (uVar17 != 8)) {
        uVar18 = 8 / uVar17;
        trapWord(6,uVar17,0);
        uVar17 = 8;
        uVar23 = uVar23 / uVar18;
        trapWord(6,uVar18,0);
      }
      uVar18 = uVar13 / uVar23;
      trapWord(6,uVar23,0);
      if ((uVar21 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
        uVar15 = uVar21;
      }
      uVar16 = (int)uVar15;
      if (uVar13 < ((longlong)(int)uVar21 * (longlong)(int)uVar23 & 0xffffffffU)) {
        if (uVar18 < 5) {
          return 0;
        }
        if ((uVar19 + 4 & 0xffffffff) < uVar18) {
          uVar13 = (uVar18 - uVar19) + 0xfd & 0xff;
          uVar14 = (undefined4)uVar13;
          uVar18 = uVar13 + uVar19 + 3;
        }
        else {
          uVar14 = 1;
          uVar19 = uVar18 - 4;
          if (*param_3 == 0) {
            uVar13 = uVar19 & 0xffff;
            trapWord(6,uVar13,0);
            uVar20 = (longlong)(int)((uVar20 & 0xffffffff) / uVar13) * (longlong)(int)uVar13;
          }
        }
        if ((uVar18 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
          uVar16 = (int)uVar18;
        }
      }
      goto LAB_82e394e0;
    }
  }
  if (!bVar8) {
    return 1;
  }
LAB_82e394e0:
  if (((uVar20 & 0xffffffff) == 1) && ((param_1 & 0xffffffff) < 3)) {
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
      uVar11 = param_5[10];
      param_5[10] = uVar11 & 0xfff9 | 4;
      if (8 < uVar24) {
        uVar24 = 8;
      }
      uVar12 = 0;
      uVar11 = uVar11 & 0xffc1 | 4;
      param_5[10] = uVar11;
      uVar3 = uVar24;
      while (1 < uVar3) {
        uVar12 = uVar12 + 1;
        uVar3 = uVar24 >> (uVar12 & 0x3f);
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
      uVar11 = param_5[10];
      param_5[10] = uVar11 | 6;
      if (4 < uVar24) {
        uVar24 = 4;
      }
      uVar12 = 0;
      uVar11 = uVar11 & 0xffc7 | 6;
      param_5[10] = uVar11;
      uVar3 = uVar24;
      while (1 < uVar3) {
        uVar12 = uVar12 + 1;
        uVar3 = uVar24 >> (uVar12 & 0x3f);
      }
    }
    param_5[10] = (ushort)(uVar12 << 3) | uVar11;
  }
  *(int *)(param_5 + 0xe) = (int)uVar23;
  *(undefined4 *)(param_5 + 0x16) = uVar14;
  *(int *)(param_5 + 0x14) = (int)uVar20;
  *(int *)(param_5 + 0x10) = (int)uVar19;
  *(undefined4 *)(param_5 + 0x12) = uVar16;
  lVar9 = fn_82E38D58(*param_2,param_2[1],*(undefined4 *)(param_5 + 0xc),uVar19,param_1,
                        param_5[10]);
  *(int *)(param_5 + 4) = (int)((lVar9 + 7U & 0xffffffff) >> 3);
  sVar10 = fn_82E38C18(*param_2,param_2[1],*(undefined4 *)(param_5 + 0xc),
                         *(undefined4 *)(param_5 + 0x10),param_1,param_5[10]);
  param_5[6] = sVar10;
  if (param_3[7] != 0) {
    sVar10 = (short)*(int *)(param_5 + 0xe) << 2;
    if (*(int *)(param_5 + 0xe) == 0x1000) {
      sVar10 = 0x2000;
    }
    param_5[6] = sVar10;
  }
  fn_82A753E8(*param_5);
  return 1;
}

