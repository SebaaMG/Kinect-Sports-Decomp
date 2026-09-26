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
extern int fn_82EFE560();
extern int fn_82EFE610();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82007310;
extern unsigned int lbl_82015610;
extern unsigned int lbl_8202DCE0;
extern unsigned int lbl_8202DCF0;
extern unsigned int lbl_820A6C58;
extern unsigned int lbl_820AA960;
extern unsigned int lbl_820FBB20;
extern unsigned int lbl_8215F6E0;
extern unsigned int lbl_8215F708;
extern unsigned int lbl_82160708;
extern unsigned int lbl_82160738;
extern unsigned int lbl_82160740;
extern unsigned int lbl_82160748;
extern unsigned int lbl_82160750;
extern unsigned int lbl_831A7B18;


void fn_82EFE7C0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double extraout_f1;
  double dVar14;
  
  if (*(longlong *)(param_1 + 0x2e0) == 1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x2a4);
  *(double *)(param_1 + 0x1f68) = *(double *)(param_1 + 0x2b0);
  *(int *)(param_1 + 0x1f5c) = iVar2;
  dVar12 = lbl_82005758;
  *(undefined4 *)(param_1 + 0x1f60) = *(undefined4 *)(param_1 + 0x590);
  if (dVar12 < ABS(*(double *)(param_1 + 0x2b0) - (double)(longlong)iVar2)) {
    *(double *)(param_1 + 0x2b0) = (double)(longlong)iVar2;
  }
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x1f50);
  dVar14 = *(double *)(param_1 + 0x2b0);
  uVar7 = (ulonglong)*(uint *)(param_1 + 8000);
  uVar3 = *(uint *)(param_1 + 0x1f10);
  dVar13 = (double)fn_82EFE610(dVar14,param_1,uVar7,uVar3 - uVar9,uVar7 - uVar9,uVar9);
  iVar8 = (int)uVar7;
  iVar6 = fn_82EFE560(dVar14);
  dVar13 = dVar13 + extraout_f1;
  dVar5 = lbl_82002C40;
  if ((lbl_82002C40 < dVar13) || (dVar5 = lbl_8202DCF0, dVar13 < lbl_8202DCF0)) {
    dVar13 = dVar5;
  }
  dVar14 = dVar14 + dVar13;
  *(double *)(iVar6 + 0x2b0) = dVar14;
  dVar5 = lbl_82005730;
  iVar10 = 0;
  iVar1 = (int)(dVar14 + lbl_82005730);
  dVar12 = dVar12 - (double)(longlong)(int)uVar3 / (double)(longlong)iVar8;
  if ((lbl_8215F6E0 <= dVar12) || (*(int *)(iVar6 + 0x1f58) != 0)) {
    iVar10 = 0xc;
  }
  else if (dVar12 < lbl_820FBB20) {
    if (dVar12 < lbl_82160750) {
      if (dVar12 < lbl_82160748) {
        if (dVar12 < lbl_820A6C58) {
          if (dVar12 < lbl_82007310) {
            if (dVar12 < lbl_8215F708) {
              if (dVar12 < lbl_82005730) {
                if (dVar12 < lbl_820AA960) {
                  if (dVar12 < lbl_82160740) {
                    if (dVar12 < lbl_82160708) {
                      if (lbl_82015610 <= dVar12) {
                        iVar10 = 1;
                      }
                    }
                    else {
                      iVar10 = 2;
                    }
                  }
                  else {
                    iVar10 = 3;
                  }
                }
                else {
                  iVar10 = 4;
                }
              }
              else {
                iVar10 = 5;
              }
            }
            else {
              iVar10 = 6;
            }
          }
          else {
            iVar10 = 7;
          }
        }
        else {
          iVar10 = 8;
        }
      }
      else {
        iVar10 = 9;
      }
    }
    else {
      iVar10 = 10;
    }
  }
  else {
    iVar10 = 0xb;
  }
  if (*(int *)(iVar6 + 0x10) != 0) {
    iVar10 = *(int *)(&lbl_831A7B18 + (*(int *)(iVar6 + 0x10) * 0xd + iVar10 + -0xd) * 4);
  }
  iVar10 = *(int *)(iVar6 + 0x1ee8) + iVar10;
  if (0x1e < iVar10) {
    iVar10 = 0x1e;
  }
  *(int *)(iVar6 + 0x1ee4) = iVar10;
  if ((lbl_82160738 <= dVar12) && (iVar10 < iVar2)) {
    iVar10 = iVar2;
  }
  iVar8 = iVar1;
  if (iVar10 <= iVar1) {
    iVar8 = iVar10;
  }
  iVar4 = *(int *)(iVar6 + 0x1efc);
  iVar11 = iVar4;
  if ((iVar4 <= iVar8) && (iVar11 = iVar10, iVar1 < iVar10)) {
    iVar11 = iVar1;
  }
  if (((iVar11 < 9) && (iVar11 != iVar4)) && (ABS(dVar14 - (double)(longlong)iVar11) < dVar5)) {
    iVar11 = (int)(dVar14 + lbl_8202DCE0);
    if (iVar11 < 1) {
      iVar11 = 1;
    }
    else if (ABS(dVar14 - ((double)(longlong)iVar11 + dVar5)) < lbl_8202DCE0) {
      *(undefined4 *)(iVar6 + 0x590) = 1;
      goto LAB_82efeb08;
    }
  }
  *(undefined4 *)(iVar6 + 0x590) = 0;
LAB_82efeb08:
  if ((*(int *)(iVar6 + 0x1f58) != 0) &&
     (iVar8 = 0x16 - (*(int *)(iVar6 + 0x1ee0) * 0xe) / 100, iVar11 <= iVar8)) {
    iVar11 = iVar8;
  }
  if (iVar11 < iVar2 + 2) {
    if (iVar2 + -2 < iVar11) {
      *(int *)(iVar6 + 0x2a4) = iVar11;
    }
    else {
      *(int *)(iVar6 + 0x2a4) = iVar2 + -2;
    }
  }
  else {
    *(int *)(iVar6 + 0x2a4) = iVar2 + 2;
  }
  if (dVar14 < *(double *)(iVar6 + 0x1f68)) {
    *(double *)(iVar6 + 0x2b0) = *(double *)(iVar6 + 0x1f68);
    *(undefined4 *)(iVar6 + 0x2a4) = *(undefined4 *)(iVar6 + 0x1f5c);
    *(undefined4 *)(iVar6 + 0x590) = *(undefined4 *)(iVar6 + 0x1f60);
  }
  *(undefined4 *)(iVar6 + 0x2a0) = *(undefined4 *)(iVar6 + 0x2a4);
  return;
}

