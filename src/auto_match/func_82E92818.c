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
extern int fn_82E91F20();
extern int fn_82E927B8();
extern unsigned int lbl_82005344;
extern unsigned int lbl_8207F248;
extern unsigned int lbl_8215F720;
extern unsigned int lbl_8215F728;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E92818(double param_1,double param_2,double param_3,double param_4,undefined4 *param_5)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  double dVar6;
  double extraout_f1;
  double dVar7;
  double dVar8;
  
  if ((int)param_5[2] < 1) {
    return;
  }
  iVar5 = param_5[0x1f];
  param_5[0x1f] = iVar5 + 1;
  iVar1 = iVar5 / 0x15 + (iVar5 >> 0x1f);
  iVar5 = iVar5 + (iVar1 - (iVar1 >> 0x1f)) * -0x15;
  param_5[0x21] = iVar5;
  param_5[iVar5 + 10] = (float)ABS(param_2);
  if (param_5[1] == 0) {
    param_5 = (undefined4 *)fn_82E91F20();
    param_1 = extraout_f1;
  }
  if (param_5[1] == 0) {
    if (lbl_8215F728 <= param_2) {
      return;
    }
    param_5[4] = (float)param_2;
    param_5[1] = 1;
    param_5[8] = 1;
    return;
  }
  iVar5 = param_5[1] + 1;
  bVar4 = false;
  param_5[1] = iVar5;
  if ((double)(float)param_5[4] <= param_2) {
    dVar6 = (double)lbl_821AAD20;
    if (((dVar6 < param_3) && (param_4 < dVar6)) || ((param_3 < dVar6 && (dVar6 < param_4)))) {
      param_5[7] = param_5[7] + 1;
    }
    if (0 < (int)param_5[7]) goto code_r0x82e92a80;
    if (param_2 <= param_1) {
      param_5[5] = param_5[5] + 1;
      param_5[6] = param_5[6] + 1;
    }
    else {
      if (3 < (int)param_5[5]) goto code_r0x82e92a80;
      if ((double)(float)param_5[3] < param_2) {
        param_5[3] = (float)param_2;
      }
      param_5[6] = 0;
      if (lbl_82005344 < (float)(param_2 - param_1)) {
        param_5[9] = param_5[9] + 1;
      }
    }
  }
  else {
    if (iVar5 == 2) {
      if (lbl_82005344 < (float)(param_1 - param_2)) {
        param_5[8] = param_5[8] + 1;
      }
    }
    else {
      param_5[8] = 1;
    }
    param_5[4] = (float)param_2;
    param_5[1] = 1;
    param_5[5] = 0;
    param_5[6] = 0;
    param_5[7] = 0;
    fVar3 = lbl_821AAD20;
    param_5[9] = 0;
    param_5[3] = fVar3;
  }
  dVar8 = (double)(float)param_5[4];
  dVar7 = -dVar8;
  dVar6 = (double)(float)param_5[3];
  bVar2 = false;
  if ((dVar6 < dVar7) &&
     ((3 < (int)param_5[8] ||
      (bVar2 = true, -(float)(dVar8 / (double)(longlong)(int)param_5[8]) <= lbl_8207F248)))) {
    bVar2 = false;
  }
  if (((int)param_5[9] < 4) &&
     (lbl_8207F248 < (float)(dVar6 - dVar8) / (float)(longlong)(int)param_5[9])) {
    bVar4 = true;
  }
  if ((int)param_5[1] < (int)param_5[2]) {
    if ((int)param_5[6] < 2) {
      return;
    }
    if (((int)param_5[1] < 6) || (dVar6 <= lbl_8215F720)) goto code_r0x82e92a80;
  }
  else if (dVar6 < lbl_8215F720) goto code_r0x82e92a80;
  if (dVar7 < dVar6) {
    dVar6 = dVar7;
  }
  if ((((double)(float)param_5[0x20] <= dVar6) && (!bVar2)) && (!bVar4)) {
    *param_5 = 1;
    return;
  }
code_r0x82e92a80:
  fn_82E927B8();
  return;
}

