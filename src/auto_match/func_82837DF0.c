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
extern int fn_82F691F0();
extern unsigned int lbl_83157104;
extern unsigned int lbl_83157105;
extern unsigned int lbl_83157106;


void fn_82837DF0(byte *param_1,ulonglong param_2,longlong param_3,longlong param_4,int param_5,
                  ulonglong param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  
  iVar5 = (int)param_4;
  iVar10 = (int)param_3;
  if ((param_2 & 0xffffffff) < 0x1a200187) {
    if ((param_2 & 0xffffffff) != 0x1a200186) {
      if ((param_2 & 0xffffffff) < 0x1a20007e) {
        if ((param_2 & 0xffffffff) != 0x1a20007d) {
          param_2 = param_2 - 0x18280043;
          if (param_2 != 0) {
            if ((param_2 & 0xffffffff) == 0xc) {
LAB_8283841c:
              if (iVar5 < 1) {
                return;
              }
              do {
                lVar7 = param_3;
                pbVar6 = param_1;
                if (0 < iVar10) {
                  do {
                    *pbVar6 = 0xff;
                    lVar7 = lVar7 + -1;
                    pbVar6[1] = 6;
                    pbVar6 = pbVar6 + 2;
                  } while (lVar7 != 0);
                }
                param_4 = param_4 + -1;
                param_1 = param_1 + param_5;
              } while (param_4 != 0);
              return;
            }
            if ((param_2 & 0xffffffff) != 0x43) {
              if ((param_2 & 0xffffffff) == 0x100) goto LAB_82838250;
              if ((param_2 & 0xffffffff) == 0x10c) goto LAB_8283841c;
              if ((param_2 & 0xffffffff) != 0x143) {
                return;
              }
            }
LAB_82837e64:
            if (iVar5 < 1) {
              return;
            }
            do {
              if (0 < iVar10) {
                lVar7 = param_3;
                pbVar6 = param_1;
                do {
                  *pbVar6 = 0xff;
                  lVar7 = lVar7 + -1;
                  iVar5 = (int)((param_6 & 0x1fffffff) << 3);
                  pbVar6[1] = (&lbl_83157104)[iVar5];
                  pbVar6[2] = (&lbl_83157105)[iVar5];
                  pbVar6[3] = (&lbl_83157106)[iVar5];
                  pbVar6 = pbVar6 + 4;
                } while (lVar7 != 0);
              }
              param_4 = param_4 + -1;
              param_1 = param_1 + param_5;
            } while (param_4 != 0);
            return;
          }
          goto LAB_82838250;
        }
      }
      else {
        param_2 = param_2 - 0x1a200086;
        if (param_2 == 0) goto LAB_828383a0;
        if ((param_2 & 0xffffffff) == 0xcc) {
          iVar4 = (int)((param_6 & 0x1fffffff) << 3);
          bVar1 = (&lbl_83157105)[iVar4];
          bVar2 = (&lbl_83157104)[iVar4];
          bVar3 = (&lbl_83157106)[iVar4];
          if (iVar5 < 1) {
            return;
          }
          do {
            lVar7 = param_3;
            pbVar6 = param_1;
            if (0 < iVar10) {
              do {
                *pbVar6 = bVar2 & 0xf8 | bVar1 >> 5;
                lVar7 = lVar7 + -1;
                pbVar6[1] = (bVar1 >> 2) << 5 | bVar3 >> 3;
                pbVar6[2] = 0;
                pbVar6[3] = 0;
                pbVar6[4] = 0;
                pbVar6[5] = 0;
                pbVar6[6] = 0;
                pbVar6[7] = 0;
                pbVar6 = pbVar6 + 8;
              } while (lVar7 != 0);
            }
            param_4 = param_4 + -1;
            param_1 = param_1 + param_5;
          } while (param_4 != 0);
          return;
        }
        if ((param_2 & 0xffffffff) == 0xcd) {
          iVar4 = (int)((param_6 & 0xffffffff) << 3);
          lVar7 = param_4;
          pbVar6 = param_1;
          if (iVar5 < 1) {
            return;
          }
          do {
            if (0 < iVar10) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(pbVar6,0xff,8,param_4,(byte)(&lbl_83157105)[iVar4] >> 5,
                           (&lbl_83157104)[iVar4] & 0xf8,param_1,
                           ((ulonglong)((byte)(&lbl_83157105)[iVar4] >> 2) & 7) << 5);
            }
            lVar7 = lVar7 + -1;
            pbVar6 = pbVar6 + param_5;
          } while (lVar7 != 0);
          return;
        }
        if ((param_2 & 0xffffffff) == 0xce) {
          iVar4 = (int)((param_6 & 0xffffffff) << 3);
          bVar1 = (&lbl_83157105)[iVar4];
          bVar2 = (&lbl_83157104)[iVar4];
          lVar7 = param_4;
          pbVar6 = param_1;
          if (iVar5 < 1) {
            return;
          }
          do {
            if (0 < iVar10) {
              *pbVar6 = 0xff;
              pbVar6[1] = 0xff;
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(pbVar6 + 2,0,6,param_4,bVar1 >> 5,bVar2 & 0xf8,param_1,
                           ((ulonglong)(bVar1 >> 2) & 7) << 5);
            }
            lVar7 = lVar7 + -1;
            pbVar6 = pbVar6 + param_5;
          } while (lVar7 != 0);
          return;
        }
        if ((param_2 & 0xffffffff) != 0xf7) {
          return;
        }
      }
      iVar4 = (int)((param_6 & 0x1fffffff) << 3);
      bVar1 = (&lbl_83157106)[iVar4];
      bVar2 = (&lbl_83157105)[iVar4];
      bVar3 = (&lbl_83157104)[iVar4];
      if (iVar5 < 1) {
        return;
      }
      do {
        lVar7 = param_3;
        pbVar6 = param_1;
        if (0 < iVar10) {
          do {
            lVar8 = 8;
            do {
              *pbVar6 = (byte)((((((ulonglong)(bVar1 >> 7) << 1 | (ulonglong)(bVar2 >> 7)) << 1 |
                                 (ulonglong)(bVar3 >> 7)) << 2 | (ulonglong)(bVar1 >> 7)) << 1 |
                                0x1c4 | (ulonglong)(bVar2 >> 7)) << 1) | bVar3 >> 7;
              lVar8 = lVar8 + -1;
              pbVar6 = pbVar6 + 1;
            } while (lVar8 != 0);
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        param_4 = param_4 + -1;
        param_1 = param_1 + param_5;
      } while (param_4 != 0);
      return;
    }
  }
  else {
    if ((param_2 & 0xffffffff) < 0x28280145) {
      if ((param_2 & 0xffffffff) != 0x28280144) {
        param_2 = param_2 - 0x28280043;
        if (param_2 != 0) {
          if ((param_2 & 0xffffffff) == 1) goto LAB_828382e4;
          if ((param_2 & 0xffffffff) == 2) goto LAB_82838464;
          if ((param_2 & 0xffffffff) == 0xc) goto LAB_8283841c;
          if ((param_2 & 0xffffffff) == 0x43) goto LAB_82837e64;
          if ((param_2 & 0xffffffff) != 0x100) {
            return;
          }
        }
LAB_82838250:
        iVar4 = (int)((param_6 & 0x1fffffff) << 3);
        bVar1 = (&lbl_83157105)[iVar4];
        bVar2 = (&lbl_83157104)[iVar4];
        bVar3 = (&lbl_83157106)[iVar4];
        if (iVar5 < 1) {
          return;
        }
        do {
          lVar7 = param_3;
          pbVar6 = param_1;
          if (0 < iVar10) {
            do {
              *pbVar6 = (byte)(((ulonglong)bVar2 & 0xf9 | (ulonglong)(bVar1 >> 5)) >> 1) | 0x80;
              lVar7 = lVar7 + -1;
              pbVar6[1] = (bVar1 >> 3) << 5 | bVar3 >> 3;
              pbVar6 = pbVar6 + 2;
            } while (lVar7 != 0);
          }
          param_4 = param_4 + -1;
          param_1 = param_1 + param_5;
        } while (param_4 != 0);
        return;
      }
LAB_828382e4:
      iVar4 = (int)((param_6 & 0x1fffffff) << 3);
      bVar1 = (&lbl_83157105)[iVar4];
      bVar2 = (&lbl_83157104)[iVar4];
      bVar3 = (&lbl_83157106)[iVar4];
      if (iVar5 < 1) {
        return;
      }
      do {
        lVar7 = param_3;
        pbVar6 = param_1;
        if (0 < iVar10) {
          do {
            *pbVar6 = bVar2 & 0xf8 | bVar1 >> 5;
            lVar7 = lVar7 + -1;
            pbVar6[1] = (bVar1 >> 2) << 5 | bVar3 >> 3;
            pbVar6 = pbVar6 + 2;
          } while (lVar7 != 0);
        }
        param_4 = param_4 + -1;
        param_1 = param_1 + param_5;
      } while (param_4 != 0);
      return;
    }
    uVar9 = param_2 - 0x28280145;
    if (uVar9 == 0) {
LAB_82838464:
      iVar4 = (int)((param_6 & 0x1fffffff) << 3);
      bVar1 = (&lbl_83157105)[iVar4];
      bVar2 = (&lbl_83157104)[iVar4];
      bVar3 = (&lbl_83157106)[iVar4];
      if (iVar5 < 1) {
        return;
      }
      do {
        lVar7 = param_3;
        pbVar6 = param_1;
        if (0 < iVar10) {
          do {
            *pbVar6 = bVar2 & 0xfc | bVar1 >> 6;
            lVar7 = lVar7 + -1;
            pbVar6[1] = (bVar1 >> 3) << 5 | bVar3 >> 3;
            pbVar6 = pbVar6 + 2;
          } while (lVar7 != 0);
        }
        param_4 = param_4 + -1;
        param_1 = param_1 + param_5;
      } while (param_4 != 0);
      return;
    }
    if ((uVar9 & 0xffffffff) == 10) goto LAB_8283841c;
    if ((uVar9 & 0xffffffff) == 0x41) goto LAB_82837e64;
    if ((param_2 - 0x2a200086 != 0) && ((param_2 - 0x2a200086 & 0xffffffff) != 0x100)) {
      return;
    }
  }
LAB_828383a0:
  if (0 < iVar5) {
    do {
      if (0 < iVar10) {
        lVar7 = param_3;
        pbVar6 = param_1;
        do {
          *pbVar6 = 0xff;
          lVar7 = lVar7 + -1;
          iVar5 = (int)((param_6 & 0x1fffffff) << 3);
          pbVar6[1] = (&lbl_83157106)[iVar5];
          pbVar6[2] = (&lbl_83157105)[iVar5];
          pbVar6[3] = (&lbl_83157104)[iVar5];
          pbVar6 = pbVar6 + 4;
        } while (lVar7 != 0);
      }
      param_4 = param_4 + -1;
      param_1 = param_1 + param_5;
    } while (param_4 != 0);
  }
  return;
}

