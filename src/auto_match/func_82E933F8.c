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
extern int fn_82E915E0();
extern int fn_82E91630();
extern int fn_82F00330();
extern float lbl_82002C40;
extern unsigned int lbl_82005710;
extern float lbl_82005730;
extern unsigned int lbl_82005758;
extern float lbl_820105A0;
extern float lbl_82015408;
extern unsigned int lbl_820A6C58;


undefined8 fn_82E933F8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar6;
  longlong lVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar2 = *(int *)(param_1 + 0xaf0);
  if ((iVar2 == 0) && (param_2 == 0)) {
    *(undefined4 *)(param_1 + 0x77e8) = 0;
  }
  if (*(int *)(param_1 + 0x654) != 0) {
    if (*(int *)(param_1 + 0x76d4) != 0) {
      if ((param_2 == 0) && (*(undefined4 *)(param_1 + 0x76d0) = 0, iVar2 != 0)) {
        *(undefined4 *)(param_1 + 0x76d8) = 1;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x300);
      fn_82E915E0(*(undefined4 *)(param_1 + 0x830),param_1 + 0x300,0xffffffffffffffff);
      iVar2 = fn_82E91630(*(undefined4 *)(param_1 + 0x830),uVar1);
      if (iVar2 != 0) {
        return 0xffffffffffffff9c;
      }
      fn_82F00330(param_1);
      *(undefined4 *)(param_1 + 0x76d4) = 0;
    }
    if (((*(int *)(param_1 + 0x82c) == 1) && (param_2 == 0)) && (*(int *)(param_1 + 0x202c) == 0)) {
      *(undefined4 *)(param_1 + 0x82c) = 0;
      uVar1 = *(undefined4 *)(param_1 + 0x300);
      fn_82E915E0(*(undefined4 *)(param_1 + 0x830),param_1 + 0x300,0xffffffffffffffff);
      iVar2 = fn_82E91630(*(undefined4 *)(param_1 + 0x830),uVar1);
      if (iVar2 != 0) {
        return 0xffffffffffffff9c;
      }
      fn_82F00330(param_1);
    }
    iVar2 = *(int *)(param_1 + 0xaf0);
    if (((iVar2 == 0) ||
        (((iVar2 == 1 &&
          (*(longlong *)(param_1 + 0x7758) <=
           *(longlong *)(param_1 + 0x1e30) - *(longlong *)(param_1 + 0x7740))) &&
         (*(longlong *)(param_1 + 0x7758) >> 1 <=
          *(longlong *)(param_1 + 0x1e18) - *(longlong *)(param_1 + 0x1e20))))) && (param_2 == 0)) {
      *(undefined4 *)(param_1 + 0x82c) = 1;
      *(undefined8 *)(param_1 + 0x7748) = *(undefined8 *)(param_1 + 0x7740);
      *(undefined8 *)(param_1 + 0x7740) = *(undefined8 *)(param_1 + 0x1e30);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x7750) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x7750) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x1e14) != 0) {
    *(undefined4 *)(param_1 + 0x1e14) = 0;
  }
  if (*(int *)(param_1 + 0x1dac) == 5) {
    if (iVar2 == 1) {
      if (*(int *)(param_1 + 0x4f20) == 0) {
        if (*(double *)(param_1 + 0x7720) < lbl_82005758) {
          *(undefined8 *)(param_1 + 0x7720) = *(undefined8 *)(param_1 + 0x7718);
        }
        else {
          *(double *)(param_1 + 0x7720) =
               (*(double *)(param_1 + 0x7718) + *(double *)(param_1 + 0x7720)) * lbl_82005730;
        }
        *(undefined4 *)(param_1 + 0x7730) = 1;
        *(double *)(param_1 + 0x7728) = (double)(longlong)*(int *)(param_1 + 0x2a4);
      }
      else {
        iVar6 = *(int *)(param_1 + 0x7730) + 1;
        *(int *)(param_1 + 0x7730) = iVar6;
        dVar8 = (double)(longlong)*(int *)(param_1 + 0x2a4) + *(double *)(param_1 + 0x7728);
        *(double *)(param_1 + 0x7728) = dVar8;
        if (500 < *(longlong *)(param_1 + 0x1e20)) {
          *(double *)(param_1 + 0x7718) = dVar8 / (double)(longlong)iVar6;
        }
      }
    }
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x7780) = 1;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x1f08);
      if (iVar2 == 0) {
        dVar8 = *(double *)(param_1 + 0x76f8) - *(double *)(param_1 + 0x76e8);
        *(double *)(param_1 + 0x76f8) = dVar8;
        dVar7 = (double)(longlong)iVar6;
        dVar9 = (double)*(longlong *)(param_1 + 0x1e18) * *(double *)(param_1 + 0x1ed0) - dVar7;
        *(double *)(param_1 + 0x7700) = dVar9;
        if (*(double *)(param_1 + 0x76e8) <= dVar8) {
          *(double *)(param_1 + 0x7700) = dVar9 + dVar8;
          *(double *)(param_1 + 0x76e8) = dVar7;
          *(undefined8 *)(param_1 + 0x1e20) = 0;
        }
        else {
          *(double *)(param_1 + 0x76e8) = dVar7;
          *(undefined8 *)(param_1 + 0x1e20) = 0;
          *(double *)(param_1 + 0x7700) = dVar8 * lbl_820A6C58 + dVar9;
        }
      }
      else {
        *(double *)(param_1 + 0x76e8) = *(double *)(param_1 + 0x76e8) + (double)(longlong)iVar6;
        if (iVar2 == 1) {
          *(int *)(param_1 + 0x7760) = iVar6;
          *(double *)(param_1 + 0x7700) = *(double *)(param_1 + 0x7700) - (double)(longlong)iVar6;
        }
      }
      *(undefined4 *)(param_1 + 0x7780) = 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x1e40);
    *(double *)(param_1 + 0x76f8) =
         (double)(longlong)*(int *)(param_1 + 0x7774) + *(double *)(param_1 + 0x76f8);
    if (1 < lVar3) {
      lVar5 = *(longlong *)(param_1 + 0x1e20);
      lVar4 = *(longlong *)(param_1 + 0x1e18);
      dVar8 = *(double *)(param_1 + 0x7700);
      if (*(double *)(param_1 + 0x7700) < 0.0) {
        dVar8 = lbl_82005710;
      }
      *(double *)(param_1 + 0x7700) = dVar8;
      dVar8 = (double)lVar3 * dVar8;
      if (lVar4 <= lVar5 << 1) {
        if (lVar4 < lVar3 * 6 + lVar5) {
          *(double *)(param_1 + 0x7708) = (dVar8 / (double)(lVar4 - lVar5)) * lbl_82015408;
          return 0;
        }
        *(double *)(param_1 + 0x7708) = (dVar8 / (double)(lVar4 - lVar5)) * lbl_82002C40;
        return 0;
      }
      *(double *)(param_1 + 0x7708) = (dVar8 / (double)(lVar4 - lVar5)) * lbl_820105A0;
      return 0;
    }
    *(double *)(param_1 + 0x7708) =
         (((double)*(longlong *)(param_1 + 0x1e28) * *(double *)(param_1 + 0x7700)) /
         (double)(*(longlong *)(param_1 + 0x1e18) - *(longlong *)(param_1 + 0x1e20))) * lbl_820105A0
    ;
  }
  return 0;
}

