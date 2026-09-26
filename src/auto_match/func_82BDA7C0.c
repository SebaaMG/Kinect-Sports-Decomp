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


void fn_82BDA7C0(int param_1,int param_2,int param_3,int param_4,ushort *param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  short sVar8;
  short sVar9;
  ulonglong uVar7;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  int iVar22;
  ushort uVar23;
  short sVar24;
  short sVar25;
  ushort uVar26;
  short sVar27;
  ulonglong uVar21;
  ushort uVar28;
  uint uVar29;
  ulonglong uVar30;
  short sVar31;
  byte bStack_a0;
  
  uVar29 = 0;
  bStack_a0 = 0;
  if (0 < param_4) {
    uVar4 = ((ushort)param_1 ^ 1) - 1;
    do {
      if (param_1 == 0) {
        sVar8 = *(short *)(uVar29 * 2 + param_2);
        uVar15 = sVar8 + -0x1ec8 >> 0x10;
        uVar15 = ~uVar15 & 0x1ec8 | uVar15 & (int)sVar8;
        uVar10 = (ushort)(uVar15 + 0x1ec8 >> 0x10);
        uVar10 = (ushort)uVar15 & ~uVar10 | uVar10 & 0xe138;
      }
      else {
        uVar10 = (ushort)((int)*(char *)((uVar29 >> 1) + param_2) >> ((uVar29 & 1) << 2)) & 0xf;
      }
      uVar28 = param_5[0xd];
      uVar15 = (int)(short)param_5[4] >> 2;
      uVar6 = (int)(short)param_5[4] >> 0xf & 1;
      if (uVar6 != 0) {
        uVar15 = -uVar15 & 0x1fff;
      }
      uVar12 = 0x20 - (int)LZCOUNT(uVar15);
      if (uVar15 == 0) {
        iVar16 = 0x20;
      }
      else {
        iVar16 = (int)(uVar15 << 6) >> (uVar12 & 0x3f);
      }
      iVar22 = ((int)(short)uVar28 >> 6 & 0xfU) + uVar12;
      iVar16 = (((int)(short)uVar28 & 0x3fU) * iVar16 + 0x30 & 0x1ffffff0) << 3;
      if (iVar22 < 0x1b) {
        uVar23 = (ushort)(iVar16 >> (0x1aU - iVar22 & 0x3f));
      }
      else {
        uVar23 = (ushort)(iVar16 << (iVar22 - 0x1aU & 0x3f)) & 0x7fff;
      }
      uVar26 = param_5[0xe];
      uVar28 = ((ushort)((int)(short)uVar28 >> 10) & 1 ^ (ushort)uVar6 ^ 1) - 1;
      uVar6 = (int)(short)param_5[5] >> 0xf & 1;
      uVar15 = (int)(short)param_5[5] >> 2;
      if (uVar6 != 0) {
        uVar15 = -uVar15 & 0x1fff;
      }
      uVar12 = 0x20 - (int)LZCOUNT(uVar15);
      if (uVar15 == 0) {
        iVar16 = 0x20;
      }
      else {
        iVar16 = (int)(uVar15 << 6) >> (uVar12 & 0x3f);
      }
      iVar22 = ((int)(short)uVar26 >> 6 & 0xfU) + uVar12;
      iVar16 = (((int)(short)uVar26 & 0x3fU) * iVar16 + 0x30 & 0x1ffffff0) << 3;
      if (iVar22 < 0x1b) {
        uVar18 = (ushort)(iVar16 >> (0x1aU - iVar22 & 0x3f));
      }
      else {
        uVar18 = (ushort)(iVar16 << (iVar22 - 0x1aU & 0x3f)) & 0x7fff;
      }
      uVar11 = param_5[0xf];
      uVar26 = ((ushort)((int)(short)uVar26 >> 10) & 1 ^ (ushort)uVar6 ^ 1) - 1;
      uVar6 = (int)(short)param_5[6] >> 0xf & 1;
      uVar15 = (int)(short)param_5[6] >> 2;
      if (uVar6 != 0) {
        uVar15 = -uVar15 & 0x1fff;
      }
      uVar12 = 0x20 - (int)LZCOUNT(uVar15);
      if (uVar15 == 0) {
        iVar16 = 0x20;
      }
      else {
        iVar16 = (int)(uVar15 << 6) >> (uVar12 & 0x3f);
      }
      iVar22 = ((int)(short)uVar11 >> 6 & 0xfU) + uVar12;
      iVar16 = (((int)(short)uVar11 & 0x3fU) * iVar16 + 0x30 & 0x1ffffff0) << 3;
      if (iVar22 < 0x1b) {
        uVar20 = (ushort)(iVar16 >> (0x1aU - iVar22 & 0x3f));
      }
      else {
        uVar20 = (ushort)(iVar16 << (iVar22 - 0x1aU & 0x3f)) & 0x7fff;
      }
      uVar19 = param_5[0x10];
      uVar11 = ((ushort)((int)(short)uVar11 >> 10) & 1 ^ (ushort)uVar6 ^ 1) - 1;
      uVar6 = (int)(short)param_5[7] >> 0xf & 1;
      uVar15 = (int)(short)param_5[7] >> 2;
      if (uVar6 != 0) {
        uVar15 = -uVar15 & 0x1fff;
      }
      uVar12 = 0x20 - (int)LZCOUNT(uVar15);
      if (uVar15 == 0) {
        iVar16 = 0x20;
      }
      else {
        iVar16 = (int)(uVar15 << 6) >> (uVar12 & 0x3f);
      }
      iVar22 = ((int)(short)uVar19 >> 6 & 0xfU) + uVar12;
      iVar16 = (((int)(short)uVar19 & 0x3fU) * iVar16 + 0x30 & 0x1ffffff0) << 3;
      if (iVar22 < 0x1b) {
        uVar13 = (ushort)(iVar16 >> (0x1aU - iVar22 & 0x3f));
      }
      else {
        uVar13 = (ushort)(iVar16 << (iVar22 - 0x1aU & 0x3f)) & 0x7fff;
      }
      uVar1 = param_5[0x11];
      uVar19 = ((ushort)((int)(short)uVar19 >> 10) & 1 ^ (ushort)uVar6 ^ 1) - 1;
      uVar6 = (int)(short)param_5[8] >> 0xf & 1;
      uVar15 = (int)(short)param_5[8] >> 2;
      if (uVar6 != 0) {
        uVar15 = -uVar15 & 0x1fff;
      }
      uVar12 = 0x20 - (int)LZCOUNT(uVar15);
      if (uVar15 == 0) {
        iVar16 = 0x20;
      }
      else {
        iVar16 = (int)(uVar15 << 6) >> (uVar12 & 0x3f);
      }
      iVar22 = ((int)(short)uVar1 >> 6 & 0xfU) + uVar12;
      iVar16 = (((int)(short)uVar1 & 0x3fU) * iVar16 + 0x30 & 0x1ffffff0) << 3;
      if (iVar22 < 0x1b) {
        uVar17 = (ushort)(iVar16 >> (0x1aU - iVar22 & 0x3f));
      }
      else {
        uVar17 = (ushort)(iVar16 << (iVar22 - 0x1aU & 0x3f)) & 0x7fff;
      }
      uVar2 = param_5[0x12];
      uVar1 = ((ushort)((int)(short)uVar1 >> 10) & 1 ^ (ushort)uVar6 ^ 1) - 1;
      uVar6 = (int)(short)param_5[9] >> 0xf & 1;
      uVar15 = (int)(short)param_5[9] >> 2;
      if (uVar6 != 0) {
        uVar15 = -uVar15 & 0x1fff;
      }
      uVar12 = 0x20 - (int)LZCOUNT(uVar15);
      if (uVar15 == 0) {
        iVar16 = 0x20;
      }
      else {
        iVar16 = (int)(uVar15 << 6) >> (uVar12 & 0x3f);
      }
      iVar22 = ((int)(short)uVar2 >> 6 & 0xfU) + uVar12;
      iVar16 = (((int)(short)uVar2 & 0x3fU) * iVar16 + 0x30 & 0x1ffffff0) << 3;
      if (iVar22 < 0x1b) {
        uVar14 = (ushort)(iVar16 >> (0x1aU - iVar22 & 0x3f));
      }
      else {
        uVar14 = (ushort)(iVar16 << (iVar22 - 0x1aU & 0x3f)) & 0x7fff;
      }
      uVar3 = param_5[0x15];
      uVar2 = ((ushort)((int)(short)uVar2 >> 10) & 1 ^ (ushort)uVar6 ^ 1) - 1;
      uVar6 = (int)(short)*param_5 >> 0xf & 1;
      sVar8 = (uVar14 & ~uVar2 | -uVar14 & uVar2) + (-uVar17 & uVar1 | uVar17 & ~uVar1) +
              (-uVar13 & uVar19 | uVar13 & ~uVar19) + (-uVar20 & uVar11 | uVar20 & ~uVar11) +
              (-uVar18 & uVar26 | uVar18 & ~uVar26) + (uVar23 & ~uVar28 | -uVar23 & uVar28);
      uVar15 = (int)(short)*param_5 >> 2;
      if (uVar6 != 0) {
        uVar15 = -uVar15 & 0x1fff;
      }
      uVar12 = 0x20 - (int)LZCOUNT(uVar15);
      if (uVar15 == 0) {
        iVar16 = 0x20;
      }
      else {
        iVar16 = (int)(uVar15 << 6) >> (uVar12 & 0x3f);
      }
      iVar22 = ((int)(short)uVar3 >> 6 & 0xfU) + uVar12;
      iVar16 = (((int)(short)uVar3 & 0x3fU) * iVar16 + 0x30 & 0x1ffffff0) << 3;
      if (iVar22 < 0x1b) {
        uVar28 = (ushort)(iVar16 >> (0x1aU - iVar22 & 0x3f));
      }
      else {
        uVar28 = (ushort)(iVar16 << (iVar22 - 0x1aU & 0x3f)) & 0x7fff;
      }
      uVar23 = param_5[0x16];
      uVar26 = ((ushort)((int)(short)uVar3 >> 10) & 1 ^ (ushort)uVar6 ^ 1) - 1;
      uVar6 = (int)(short)param_5[1] >> 0xf & 1;
      uVar15 = (int)(short)param_5[1] >> 2;
      if (uVar6 != 0) {
        uVar15 = -uVar15 & 0x1fff;
      }
      uVar12 = 0x20 - (int)LZCOUNT(uVar15);
      if (uVar15 == 0) {
        iVar16 = 0x20;
      }
      else {
        iVar16 = (int)(uVar15 << 6) >> (uVar12 & 0x3f);
      }
      iVar22 = ((int)(short)uVar23 >> 6 & 0xfU) + uVar12;
      iVar16 = (((int)(short)uVar23 & 0x3fU) * iVar16 + 0x30 & 0x1ffffff0) << 3;
      if (iVar22 < 0x1b) {
        uVar18 = (ushort)(iVar16 >> (0x1aU - iVar22 & 0x3f));
      }
      else {
        uVar18 = (ushort)(iVar16 << (iVar22 - 0x1aU & 0x3f)) & 0x7fff;
      }
      param_5[0x16] = uVar3;
      uVar23 = ((ushort)((int)(short)uVar23 >> 10) & 1 ^ (ushort)uVar6 ^ 1) - 1;
      sVar27 = (short)((uVar18 & ~uVar23 | -uVar18 & uVar23) + (uVar28 & ~uVar26 | -uVar28 & uVar26)
                      + sVar8) >> 1;
      if ((short)param_5[2] < 0x100) {
        sVar31 = (short)param_5[2] >> 2;
      }
      else {
        sVar31 = 0x40;
      }
      uVar28 = param_5[0x19];
      sVar9 = param_5[0x1a] - uVar28;
      sVar31 = (short)((int)(short)(sVar9 + (sVar9 >> 0xf) ^ sVar9 >> 0xf) * (int)sVar31 >> 6);
      if (sVar9 < 0) {
        sVar31 = -sVar31;
      }
      sVar31 = uVar28 + sVar31;
      if (param_1 == 0) {
        sVar9 = uVar10 - sVar27;
        uVar10 = sVar9 + (sVar9 >> 0xf) ^ sVar9 >> 0xf;
        uVar7 = (ulonglong)(short)(uVar10 | 1);
        uVar30 = (uVar7 & 0xffffffff) >> 0xf & 1;
        if (((uVar7 & 0xffffffff) >> 0xe & 1) == uVar30) {
          if (((uVar7 & 0xffffffff) >> 0xd & 1) == uVar30) {
            if (((uVar7 & 0xffffffff) >> 0xc & 1) == uVar30) {
              if (((uVar7 & 0xffffffff) >> 0xb & 1) == uVar30) {
                if (((uVar7 & 0xffffffff) >> 10 & 1) == uVar30) {
                  if (((uVar7 & 0xffffffff) >> 9 & 1) == uVar30) {
                    if (((uVar7 & 0xffffffff) >> 8 & 1) == uVar30) {
                      if (((uVar7 & 0xffffffff) >> 7 & 1) == uVar30) {
                        if (((uVar7 & 0xffffffff) >> 6 & 1) == uVar30) {
                          if (((uVar7 & 0xffffffff) >> 5 & 1) == uVar30) {
                            if (((uVar7 & 0xffffffff) >> 4 & 1) == uVar30) {
                              if (((uVar7 & 0xffffffff) >> 3 & 1) == uVar30) {
                                if (((uVar7 & 0xffffffff) >> 2 & 1) == uVar30) {
                                  if (((uVar7 & 0xffffffff) >> 1 & 1) == uVar30) {
                                    uVar23 = (ushort)((uVar7 & 1) != uVar30);
                                  }
                                  else {
                                    uVar23 = 2;
                                  }
                                }
                                else {
                                  uVar23 = 3;
                                }
                              }
                              else {
                                uVar23 = 4;
                              }
                            }
                            else {
                              uVar23 = 5;
                            }
                          }
                          else {
                            uVar23 = 6;
                          }
                        }
                        else {
                          uVar23 = 7;
                        }
                      }
                      else {
                        uVar23 = 8;
                      }
                    }
                    else {
                      uVar23 = 9;
                    }
                  }
                  else {
                    uVar23 = 10;
                  }
                }
                else {
                  uVar23 = 0xb;
                }
              }
              else {
                uVar23 = 0xc;
              }
            }
            else {
              uVar23 = 0xd;
            }
          }
          else {
            uVar23 = 0xe;
          }
        }
        else {
          uVar23 = 0xf;
        }
        sVar24 = 7 - (uVar23 - 1);
        if (sVar24 < 0) {
          uVar10 = (ushort)((int)(short)uVar10 >> ((int)-sVar24 & 0x3fU));
        }
        else {
          uVar10 = (ushort)((int)(short)uVar10 << ((int)sVar24 & 0x3fU));
        }
        sVar24 = ((uVar23 - 1) * 0x80 - (sVar31 >> 2)) + (uVar10 & 0x7f);
        if (sVar24 < -0x7c) {
          uVar10 = 0xf;
        }
        else if (sVar24 < 0x50) {
LAB_82bdb124:
          uVar10 = 1;
        }
        else if (sVar24 < 0xb2) {
          uVar10 = 2;
        }
        else if (sVar24 < 0xf6) {
          uVar10 = 3;
        }
        else if (sVar24 < 300) {
          uVar10 = 4;
        }
        else if (sVar24 < 0x15d) {
          uVar10 = 5;
        }
        else if (sVar24 < 400) {
          uVar10 = 6;
        }
        else {
          uVar10 = 7;
          if (0x7ff < sVar24) goto LAB_82bdb124;
        }
        if ((sVar9 < 0) && (uVar10 != 0xf)) {
          uVar10 = ~uVar10 & 0xf;
        }
      }
      uVar23 = uVar10;
      if ((short)uVar10 >> 3 != 0) {
        uVar23 = uVar10 ^ 0xf;
      }
      iVar16 = (short)uVar23 * 2;
      uVar15 = (uint)*(ushort *)(iVar16 + -0x7ce8db5c) + ((int)sVar31 >> 2);
      uVar23 = (ushort)uVar15;
      sVar9 = (uVar23 & 0x7f) + 0x80;
      sVar24 = (short)((int)(uVar15 & 0x780) >> 7) + -7;
      if (sVar24 < 0) {
        uVar7 = (ulonglong)((int)sVar9 >> ((int)-sVar24 & 0x3fU));
      }
      else {
        uVar7 = (ulonglong)(short)((int)sVar9 << ((int)sVar24 & 0x3fU));
      }
      sVar9 = (short)uVar28 >> 9;
      uVar7 = (((longlong)(short)uVar23 & 0xffffffffU) >> 0x1f) - 1 & uVar7;
      sVar24 = (short)((int)(uVar28 & 0x1f0) >> 4) + 0x20;
      if (sVar9 < 0) {
        sVar24 = (short)((int)sVar24 >> ((int)-sVar9 & 0x3fU));
      }
      else {
        sVar24 = (short)((int)sVar24 << ((int)sVar9 & 0x3fU));
      }
      sVar25 = 0x3e00;
      if (sVar9 < 9) {
        sVar25 = sVar24;
      }
      sVar9 = (short)uVar7;
      uVar30 = (ulonglong)sVar9;
      if (((int)sVar9 <= (int)(short)(((int)sVar25 >> 1) + (int)sVar25 >> 1)) ||
         (uVar23 = 0xffff, param_5[0x17] != 1)) {
        uVar23 = 0;
      }
      uVar26 = (short)(*(short *)(iVar16 + -0x7ce8db2c) * 0x20 - (int)sVar31 >> 5) + sVar31;
      if ((short)uVar26 < 0x220) {
        uVar26 = 0x220;
      }
      else if (0x13ff < (short)uVar26) {
        uVar26 = 0x1400;
      }
      param_5[0x1a] = uVar26;
      uVar7 = (uVar7 & 0xffffffff) >> 0xf & 1;
      iVar22 = (int)(short)((short)(-((int)(short)param_5[0x18] + (short)uVar28 * 0x40) >> 6) +
                           uVar26) + (int)(short)param_5[0x18] + (short)uVar28 * 0x40;
      param_5[0x19] = (ushort)(iVar22 >> 6);
      param_5[0x18] = (ushort)iVar22 & 0x3f;
      if (((uVar30 & 0xffffffff) >> 0xe & 1) == uVar7) {
        if (((uVar30 & 0xffffffff) >> 0xd & 1) == uVar7) {
          if (((uVar30 & 0xffffffff) >> 0xc & 1) == uVar7) {
            if (((uVar30 & 0xffffffff) >> 0xb & 1) == uVar7) {
              if (((uVar30 & 0xffffffff) >> 10 & 1) == uVar7) {
                if (((uVar30 & 0xffffffff) >> 9 & 1) == uVar7) {
                  if (((uVar30 & 0xffffffff) >> 8 & 1) == uVar7) {
                    if (((uVar30 & 0xffffffff) >> 7 & 1) == uVar7) {
                      if (((uVar30 & 0xffffffff) >> 6 & 1) == uVar7) {
                        if (((uVar30 & 0xffffffff) >> 5 & 1) == uVar7) {
                          if (((uVar30 & 0xffffffff) >> 4 & 1) == uVar7) {
                            if (((uVar30 & 0xffffffff) >> 3 & 1) == uVar7) {
                              if (((uVar30 & 0xffffffff) >> 2 & 1) == uVar7) {
                                if (((uVar30 & 0xffffffff) >> 1 & 1) == uVar7) {
                                  uVar28 = (ushort)((uVar30 & 1) != uVar7);
                                }
                                else {
                                  uVar28 = 2;
                                }
                              }
                              else {
                                uVar28 = 3;
                              }
                            }
                            else {
                              uVar28 = 4;
                            }
                          }
                          else {
                            uVar28 = 5;
                          }
                        }
                        else {
                          uVar28 = 6;
                        }
                      }
                      else {
                        uVar28 = 7;
                      }
                    }
                    else {
                      uVar28 = 8;
                    }
                  }
                  else {
                    uVar28 = 9;
                  }
                }
                else {
                  uVar28 = 10;
                }
              }
              else {
                uVar28 = 0xb;
              }
            }
            else {
              uVar28 = 0xc;
            }
          }
          else {
            uVar28 = 0xd;
          }
        }
        else {
          uVar28 = 0xe;
        }
      }
      else {
        uVar28 = 0xf;
      }
      sVar24 = 6 - uVar28;
      if (sVar24 < 0) {
        uVar26 = (ushort)((int)sVar9 >> ((int)-sVar24 & 0x3fU));
      }
      else {
        uVar26 = (ushort)((int)sVar9 << ((int)sVar24 & 0x3fU));
      }
      if ((short)uVar10 >> 3 == 0) {
        uVar18 = 0;
      }
      else {
        sVar9 = -sVar9;
        uVar18 = 0xfc00;
      }
      sVar27 = sVar27 + sVar9;
      uVar20 = (sVar8 >> 1) + sVar9;
      uVar15 = sVar27 + -0x1fff >> 0x10;
      uVar15 = uVar15 & (int)sVar27 | ~uVar15 & 0x1fff;
      uVar11 = sVar27 >> 0xf;
      uVar19 = (ushort)(uVar15 + 0x2000 >> 0x10);
      uVar13 = uVar11 + sVar27 ^ uVar11;
      uVar7 = (ulonglong)(short)uVar13;
      uVar21 = (uVar7 & 0xffffffff) >> 0xf & 1;
      uVar10 = ((ushort)uVar15 & ~uVar19 | uVar19 & 0xe000) & uVar4 | ~uVar4 & uVar10;
      if (((uVar7 & 0xffffffff) >> 0xe & 1) == uVar21) {
        if (((uVar7 & 0xffffffff) >> 0xd & 1) == uVar21) {
          if (((uVar7 & 0xffffffff) >> 0xc & 1) == uVar21) {
            if (((uVar7 & 0xffffffff) >> 0xb & 1) == uVar21) {
              if (((uVar7 & 0xffffffff) >> 10 & 1) == uVar21) {
                if (((uVar7 & 0xffffffff) >> 9 & 1) == uVar21) {
                  if (((uVar7 & 0xffffffff) >> 8 & 1) == uVar21) {
                    if (((uVar7 & 0xffffffff) >> 7 & 1) == uVar21) {
                      if (((uVar7 & 0xffffffff) >> 6 & 1) == uVar21) {
                        if (((uVar7 & 0xffffffff) >> 5 & 1) == uVar21) {
                          if (((uVar7 & 0xffffffff) >> 4 & 1) == uVar21) {
                            if (((uVar7 & 0xffffffff) >> 3 & 1) == uVar21) {
                              if (((uVar7 & 0xffffffff) >> 2 & 1) == uVar21) {
                                if (((uVar7 & 0xffffffff) >> 1 & 1) == uVar21) {
                                  uVar19 = (ushort)((uVar7 & 1) != uVar21);
                                }
                                else {
                                  uVar19 = 2;
                                }
                              }
                              else {
                                uVar19 = 3;
                              }
                            }
                            else {
                              uVar19 = 4;
                            }
                          }
                          else {
                            uVar19 = 5;
                          }
                        }
                        else {
                          uVar19 = 6;
                        }
                      }
                      else {
                        uVar19 = 7;
                      }
                    }
                    else {
                      uVar19 = 8;
                    }
                  }
                  else {
                    uVar19 = 9;
                  }
                }
                else {
                  uVar19 = 10;
                }
              }
              else {
                uVar19 = 0xb;
              }
            }
            else {
              uVar19 = 0xc;
            }
          }
          else {
            uVar19 = 0xd;
          }
        }
        else {
          uVar19 = 0xe;
        }
      }
      else {
        uVar19 = 0xf;
      }
      sVar8 = 6 - uVar19;
      if (sVar8 < 0) {
        uVar13 = (ushort)((int)(short)uVar13 >> ((int)-sVar8 & 0x3fU));
      }
      else {
        uVar13 = (ushort)((int)(short)uVar13 << ((int)sVar8 & 0x3fU));
      }
      param_5[0x15] = (uVar13 | 0x20) + uVar19 * 0x40 + (uVar11 & 0xfc00);
      uVar11 = ~uVar23;
      uVar19 = -(ushort)(uVar30 != 0) & 0x80;
      cVar5 = (char)(param_5[4] >> 8);
      if ((short)(param_5[0xd] ^ uVar18) < 0) {
        sVar8 = (short)cVar5 + uVar19;
      }
      else {
        sVar8 = (short)cVar5 - uVar19;
      }
      param_5[4] = param_5[4] - sVar8 & uVar11;
      cVar5 = (char)(param_5[5] >> 8);
      if ((short)(param_5[0xe] ^ uVar18) < 0) {
        sVar8 = (short)cVar5 + uVar19;
      }
      else {
        sVar8 = (short)cVar5 - uVar19;
      }
      param_5[5] = param_5[5] - sVar8 & uVar11;
      cVar5 = (char)(param_5[6] >> 8);
      if ((short)(param_5[0xf] ^ uVar18) < 0) {
        sVar8 = (short)cVar5 + uVar19;
      }
      else {
        sVar8 = (short)cVar5 - uVar19;
      }
      param_5[6] = param_5[6] - sVar8 & uVar11;
      cVar5 = (char)(param_5[7] >> 8);
      if ((short)(param_5[0x10] ^ uVar18) < 0) {
        sVar8 = (short)cVar5 + uVar19;
      }
      else {
        sVar8 = (short)cVar5 - uVar19;
      }
      param_5[7] = param_5[7] - sVar8 & uVar11;
      cVar5 = (char)(param_5[8] >> 8);
      if ((short)(param_5[0x11] ^ uVar18) < 0) {
        sVar8 = (short)cVar5 + uVar19;
      }
      else {
        sVar8 = (short)cVar5 - uVar19;
      }
      param_5[8] = param_5[8] - sVar8 & uVar11;
      cVar5 = (char)(param_5[9] >> 8);
      if ((short)(param_5[0x12] ^ uVar18) < 0) {
        sVar8 = (short)cVar5 + uVar19;
      }
      else {
        sVar8 = (short)cVar5 - uVar19;
      }
      param_5[9] = param_5[9] - sVar8 & uVar11;
      uVar19 = param_5[0xe];
      uVar13 = param_5[0xf];
      uVar1 = param_5[0x10];
      uVar17 = param_5[0x11];
      uVar2 = param_5[0x14];
      param_5[0xe] = param_5[0xd];
      uVar14 = param_5[0x13] ^ uVar20;
      param_5[0x14] = param_5[0x13];
      param_5[0xf] = uVar19;
      param_5[0x10] = uVar13;
      param_5[0x11] = uVar1;
      sVar8 = -0x1000;
      param_5[0x12] = uVar17;
      param_5[0xd] = uVar28 * 0x40 + (uVar26 | 0x20) + uVar18;
      param_5[0x13] = uVar20;
      if (-1 < (short)(uVar2 ^ uVar20)) {
        sVar8 = 0x1000;
      }
      uVar28 = *param_5;
      uVar26 = 0xe001;
      if (-0x2000 < (short)uVar28) {
        uVar26 = uVar28;
      }
      if (0x1ffe < (short)uVar26) {
        uVar26 = 0x1fff;
      }
      if (-1 < (short)uVar14) {
        uVar26 = -uVar26;
      }
      if (uVar20 == 0) {
        sVar8 = 0;
        sVar27 = 0;
      }
      else {
        sVar27 = 0xc0;
        sVar8 = (short)(uVar26 + sVar8) >> 5;
      }
      uVar26 = (param_5[1] - ((short)param_5[1] >> 7)) + sVar8;
      if ((short)uVar26 < -0x3000) {
        uVar26 = 0xd000;
      }
      if (0x2fff < (short)uVar26) {
        uVar26 = 0x3000;
      }
      param_5[1] = uVar11 & uVar26;
      cVar5 = (char)(uVar28 >> 8);
      if ((short)uVar14 < 0) {
        sVar27 = cVar5 + sVar27;
      }
      else {
        sVar27 = cVar5 - sVar27;
      }
      uVar20 = 0x3c00 - uVar26;
      uVar18 = uVar28 - sVar27;
      if ((short)(uVar28 - sVar27) < (short)-uVar20) {
        uVar18 = -uVar20;
      }
      if ((short)uVar18 < (short)uVar20) {
        uVar20 = uVar18;
      }
      *param_5 = uVar20 & uVar11;
      uVar7 = ((~((longlong)(short)uVar26 ^ 0xffffffffffffd200U) & 0xffffffff) >> 0x1f) +
              (ulonglong)(0xffffffffffffd1ff < (ulonglong)(longlong)(short)uVar26) & 1;
      param_5[0x17] = (ushort)uVar7 & uVar11;
      sVar8 = *(short *)(iVar16 + -0x7ce8db3c);
      uVar28 = ((short)(sVar8 - param_5[0xb]) >> 5) + param_5[0xb];
      param_5[0xb] = uVar28;
      uVar15 = ((int)(short)(sVar8 * 4 - param_5[10]) >> 7) + (uint)param_5[10];
      uVar26 = (ushort)uVar15;
      param_5[10] = uVar26;
      sVar8 = uVar28 * 4 - uVar26;
      uVar28 = sVar8 >> 0xf;
      if ((int)(short)(sVar8 + uVar28 ^ uVar28) < (int)(uVar15 >> 3 & 0x1fff)) {
        if (sVar31 < 0x600) {
          uVar28 = 0x200;
        }
        else {
          uVar28 = -(ushort)(uVar7 != 0) & 0x200;
        }
      }
      else {
        uVar28 = 0x200;
      }
      param_5[2] = ((short)(uVar28 - param_5[2]) >> 4) + param_5[2] & uVar11 | uVar23 & 0x100;
      if (param_1 == 0) {
        if ((uVar29 & 1) == 0) {
          bStack_a0 = (byte)uVar10 & 0xf;
        }
        else {
          *(byte *)((uVar29 >> 1) + param_3) =
               (byte)(((longlong)(short)uVar10 & 0xffffffffU) << 4) | bStack_a0;
        }
      }
      else {
        *(ushort *)(uVar29 * 2 + param_3) = uVar10 << 2;
      }
      uVar29 = uVar29 + 1;
    } while ((int)uVar29 < param_4);
  }
  return;
}

