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
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005728;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_820105A0;
extern unsigned int lbl_820116D8;
extern unsigned int lbl_82015408;
extern unsigned int lbl_820288A0;
extern unsigned int lbl_82079F08;
extern unsigned int lbl_820AA960;
extern unsigned int lbl_8215F708;
extern unsigned int lbl_8215F710;
extern unsigned int lbl_8215F738;
extern unsigned int lbl_82160708;
extern unsigned int lbl_82160740;
extern unsigned int lbl_82160760;
extern unsigned int lbl_82160770;
extern unsigned int lbl_82160778;
extern unsigned int lbl_82160780;
extern unsigned int lbl_82160788;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82EFF5A8(int param_1,uint param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar5 = param_2;
  if (999 < param_2) {
    uVar5 = 1000;
  }
  dVar9 = *(double *)(param_1 + 0x1ed0);
  bVar8 = lbl_82005728 < dVar9;
  *(undefined4 *)(param_1 + 0x1efc) = 2;
  *(int *)(param_1 + 0x1f44) = (int)((double)uVar5 * dVar9);
  if (bVar8) {
    if (lbl_82160788 < dVar9) {
      if (lbl_820288A0 < dVar9) {
        if (lbl_82160780 < dVar9) {
          if (lbl_82160778 < dVar9) {
            if (lbl_8215F738 < dVar9) {
              if (*(int *)(param_1 + 0x1f78) != 0) {
                *(undefined4 *)(param_1 + 0x1f70) = 1;
              }
              uVar5 = *(uint *)(param_1 + 0x1ee0);
              if (lbl_82160770 <=
                  dVar9 / ((double)(longlong)*(int *)(param_1 + 0x560) *
                          *(double *)(param_1 + 0x1e08))) {
                *(undefined4 *)(param_1 + 0x2a0) = 1;
                *(undefined4 *)(param_1 + 0x1efc) = 1;
                iVar4 = 0x18 - (int)(((ulonglong)uVar5 + ((ulonglong)uVar5 & 0x7fffffff) * 2 &
                                     0xffffffff) << 2) / 100;
                goto LAB_82effab0;
              }
              *(undefined4 *)(param_1 + 0x2a0) = 2;
              iVar4 = 0x1a - (int)(((ulonglong)uVar5 + ((ulonglong)uVar5 & 0x3fffffff) * 4 &
                                   0xffffffff) << 1) / 100;
            }
            else {
              *(undefined4 *)(param_1 + 0x2a0) = 4;
              iVar4 = 0x1c - (*(int *)(param_1 + 0x1ee0) << 4) / 100;
            }
            *(undefined4 *)(param_1 + 0x1efc) = 2;
          }
          else {
            *(undefined4 *)(param_1 + 0x2a0) = 4;
            if (*(int *)(param_1 + 0x560) < 0x6301) {
              *(undefined4 *)(param_1 + 0x1efc) = 2;
              *(undefined4 *)(param_1 + 0x1ee4) = 0xe;
              goto LAB_82effab4;
            }
            iVar4 = *(int *)(param_1 + 0x1ee0);
            if (0x18c00 < *(int *)(param_1 + 0x560)) goto LAB_82eff9a8;
            iVar4 = 0x1c - (iVar4 << 4) / 100;
          }
        }
        else {
          if (*(int *)(param_1 + 0x560) < 0x6301) {
            *(undefined4 *)(param_1 + 0x2a0) = 4;
            *(undefined4 *)(param_1 + 0x1efc) = 2;
            *(undefined4 *)(param_1 + 0x1ee4) = 0x11;
            goto LAB_82effab4;
          }
          iVar4 = *(int *)(param_1 + 0x1ee0);
          if (*(int *)(param_1 + 0x560) < 0x18c01) {
            *(undefined4 *)(param_1 + 0x2a0) = 4;
            iVar4 = 0x1c - (iVar4 * 0x12) / 100;
          }
          else {
            *(undefined4 *)(param_1 + 0x2a0) = 6;
LAB_82eff9a8:
            iVar4 = 0x1e - (iVar4 * 0xe) / 100;
          }
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0x560);
        if (iVar4 < 0x6301) {
          *(undefined4 *)(param_1 + 0x2a0) = 4;
          iVar4 = 0x18 - (*(int *)(param_1 + 0x1ee0) * 0xc) / 100;
        }
        else if (iVar4 < 0xa501) {
          *(undefined4 *)(param_1 + 0x2a0) = 4;
          iVar4 = 0x1c - (*(int *)(param_1 + 0x1ee0) * 0xe) / 100;
        }
        else {
          if (iVar4 < 0x18c01) {
            if (0x45 < *(int *)(param_1 + 0x1ee0)) {
              uVar5 = param_2;
              if (1999 < param_2) {
                uVar5 = 2000;
              }
              *(int *)(param_1 + 0x1f44) = (int)((double)uVar5 * dVar9);
            }
            *(undefined4 *)(param_1 + 0x2a0) = 6;
            *(int *)(param_1 + 0x1ee4) = 0x1e - (*(int *)(param_1 + 0x1ee0) << 4) / 100;
            goto LAB_82effab4;
          }
          *(undefined4 *)(param_1 + 0x2a0) = 10;
          iVar4 = 0x1e - (*(int *)(param_1 + 0x1ee0) * 0xc) / 100;
        }
      }
    }
    else {
      if (0x6300 < *(int *)(param_1 + 0x560)) {
        if (*(int *)(param_1 + 0x1ee0) < 0x60) {
          uVar5 = param_2;
          if (1999 < param_2) {
            uVar5 = 2000;
          }
          *(undefined4 *)(param_1 + 0x2a0) = 8;
          *(int *)(param_1 + 0x1ee4) = 0x1e - (*(int *)(param_1 + 0x1ee0) << 4) / 100;
          *(int *)(param_1 + 0x1f44) = (int)((double)uVar5 * dVar9);
        }
        else {
          *(undefined4 *)(param_1 + 0x2a0) = 4;
          *(undefined4 *)(param_1 + 0x1ee4) = 10;
          *(int *)(param_1 + 0x1f44) = (int)((double)param_2 * dVar9);
        }
        goto LAB_82effab4;
      }
      if (0x61 < *(int *)(param_1 + 0x1ee0)) {
        *(undefined4 *)(param_1 + 0x2a0) = 4;
        *(undefined4 *)(param_1 + 0x1ee4) = 10;
        *(int *)(param_1 + 0x1f44) = (int)((double)param_2 * dVar9);
        goto LAB_82effab4;
      }
      *(undefined4 *)(param_1 + 0x2a0) = 6;
      iVar4 = 0x1e - (*(int *)(param_1 + 0x1ee0) * 0x12) / 100;
    }
  }
  else if (*(int *)(param_1 + 0x560) < 0x6301) {
    iVar4 = *(int *)(param_1 + 0x1ee0);
    if (0x32 < iVar4) {
      if (iVar4 < 0x5f) {
        *(undefined4 *)(param_1 + 0x1efc) = 6;
        uVar5 = param_2;
        if (0x513 < param_2) {
          uVar5 = 0x514;
        }
        *(undefined4 *)(param_1 + 0x2a0) = 10;
        *(int *)(param_1 + 0x1ee4) = 0x12 - (iVar4 << 3) / 100;
        *(int *)(param_1 + 0x1f44) = (int)((double)uVar5 * dVar9);
      }
      else {
        *(undefined4 *)(param_1 + 0x1ee4) = 10;
        *(undefined4 *)(param_1 + 0x2a0) = 4;
        *(int *)(param_1 + 0x1f44) = (int)((double)param_2 * dVar9);
      }
      goto LAB_82effab4;
    }
    *(undefined4 *)(param_1 + 0x1efc) = 6;
    *(undefined4 *)(param_1 + 0x2a0) = 10;
    iVar4 = 0x1e - (iVar4 * 0x18) / 100;
  }
  else {
    if (0x18c00 < *(int *)(param_1 + 0x560)) {
      *(undefined4 *)(param_1 + 0x2a0) = 10;
      *(undefined4 *)(param_1 + 0x1efc) = 6;
      *(undefined4 *)(param_1 + 0x1ee4) = 0x1f;
      goto LAB_82effab4;
    }
    iVar4 = *(int *)(param_1 + 0x1ee0);
    if (0x5e < iVar4) {
      *(undefined4 *)(param_1 + 0x2a0) = 4;
      *(undefined4 *)(param_1 + 0x1efc) = 4;
      *(undefined4 *)(param_1 + 0x1ee4) = 10;
      *(int *)(param_1 + 0x1f44) = (int)((double)param_2 * dVar9);
      goto LAB_82effab4;
    }
    *(undefined4 *)(param_1 + 0x1efc) = 6;
    *(int *)(param_1 + 0x2a0) = 0x18 - (iVar4 * 0xe) / 100;
    iVar4 = 0x1f - (iVar4 * 0x12) / 100;
  }
LAB_82effab0:
  *(int *)(param_1 + 0x1ee4) = iVar4;
LAB_82effab4:
  if (((*(int *)(param_1 + 0x5254) == 1) || (*(int *)(param_1 + 0x5254) == 2)) &&
     (0x19 < *(int *)(param_1 + 0x1ee4))) {
    *(undefined4 *)(param_1 + 0x1ee4) = 0x19;
  }
  uVar6 = 2;
  if (0x59 < *(int *)(param_1 + 0x1ee0)) {
    uVar6 = 1;
  }
  *(undefined4 *)(param_1 + 0x1efc) = uVar6;
  dVar2 = lbl_82005730;
  *(int *)(param_1 + 0x1ee4) = 0x1e - (*(int *)(param_1 + 0x1ee0) * 0x1c) / 100;
  dVar11 = (double)param_2 * dVar2;
  if (lbl_820116D8 <= (double)param_2 * dVar2) {
    dVar11 = lbl_820116D8;
  }
  iVar4 = (int)((double)param_2 * dVar9 * lbl_82160760);
  iVar7 = (int)((double)(float)dVar11 * dVar9);
  if ((int)((double)(float)dVar11 * dVar9) <= iVar4) {
    iVar7 = iVar4;
  }
  *(int *)(param_1 + 0x1f44) = iVar7;
  if (*(int *)(param_1 + 0x1eb8) != 0) {
    uVar5 = param_2;
    if (999 < param_2) {
      uVar5 = 1000;
    }
    *(undefined4 *)(param_1 + 0x1efc) = 1;
    *(undefined4 *)(param_1 + 0x1ee4) = 0x1f;
    *(int *)(param_1 + 0x1f44) = (int)((double)uVar5 * dVar9);
  }
  dVar3 = lbl_8215F708;
  dVar11 = lbl_82005758;
  if ((*(int *)(param_1 + 0x76c8) == 0) || (*(int *)(param_1 + 0x1dac) != 5)) {
    if (*(int *)(param_1 + 0x76cc) != 0) {
      if (999 < param_2) {
        param_2 = 1000;
      }
      *(int *)(param_1 + 0x1f44) = (int)((double)param_2 * dVar9);
    }
  }
  else {
    dVar12 = *(double *)(param_1 + 0x1ed8);
    dVar13 = dVar9;
    if (dVar12 <= dVar9 * lbl_820105A0) {
      dVar10 = lbl_8215F710;
      if (lbl_82079F08 < dVar9) {
        dVar10 = lbl_82015408;
      }
      dVar13 = dVar12;
      if (dVar9 * dVar10 < dVar12) {
        dVar13 = dVar9 * dVar10;
      }
    }
    if (999 < param_2) {
      param_2 = 1000;
    }
    iVar4 = (int)((double)*(longlong *)(param_1 + 0x1e18) * dVar9 * lbl_8215F708);
    iVar7 = (int)((double)param_2 * dVar13);
    *(int *)(param_1 + 0x1f44) = iVar7;
    if (iVar4 <= iVar7) {
      iVar7 = iVar4;
    }
    *(int *)(param_1 + 0x1f44) = iVar7;
    dVar9 = (double)(longlong)iVar7 / (double)(longlong)*(int *)(param_1 + 0x560);
    if (dVar9 <= lbl_82002C40) {
      if (dVar9 <= dVar11) {
        if (dVar9 <= dVar3) {
          if (dVar9 <= lbl_820AA960) {
            if (dVar9 <= lbl_82160740) {
              uVar6 = 0x12;
              if (dVar9 <= lbl_82160708) {
                uVar6 = 0x16;
              }
              *(undefined4 *)(param_1 + 0x2a0) = uVar6;
            }
            else {
              *(undefined4 *)(param_1 + 0x2a0) = 0xe;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x2a0) = 10;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x2a0) = 6;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x2a0) = 4;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x2a0) = 2;
    }
    iVar4 = *(int *)(param_1 + 0x1ee4) + 0xe;
    *(int *)(param_1 + 0x1ee8) = *(int *)(param_1 + 0x1ee4);
    if (0x1e < iVar4) {
      iVar4 = 0x1e;
    }
    *(int *)(param_1 + 0x7710) = iVar4;
    if (*(int *)(param_1 + 0x2a0) < iVar4) {
      iVar4 = *(int *)(param_1 + 0x2a0);
    }
    *(int *)(param_1 + 0x2a0) = iVar4;
    if (iVar4 <= *(int *)(param_1 + 0x1efc)) {
      iVar4 = *(int *)(param_1 + 0x1efc);
    }
    *(int *)(param_1 + 0x2a0) = iVar4;
  }
  iVar7 = *(int *)(param_1 + 0x1ee4);
  iVar1 = *(int *)(param_1 + 0x2a0);
  *(double *)(param_1 + 0x2b0) = (double)(longlong)iVar1;
  *(int *)(param_1 + 0x2a4) = iVar1;
  *(double *)(param_1 + 0x1f68) = (double)(longlong)iVar1;
  *(int *)(param_1 + 0x1f74) = iVar7;
  *(int *)(param_1 + 0x1f5c) = iVar1;
  *(undefined4 *)(param_1 + 0x1f60) = *(undefined4 *)(param_1 + 0x590);
  *(int *)(param_1 + 0x1eec) = iVar7;
  iVar4 = (int)((double)(longlong)iVar7 * dVar3 + dVar2);
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0x1ef4) = iVar4;
  *(int *)(param_1 + 0x1ef0) = iVar4;
  iVar4 = (int)(((double)(longlong)iVar4 + dVar11) * dVar2);
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0x1ef8) = iVar4;
  *(int *)(param_1 + 0x1ee8) = iVar7;
  *(int *)(param_1 + 0x77b0) = iVar1;
  return;
}

