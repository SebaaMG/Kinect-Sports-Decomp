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
extern int fn_826E7468();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D4C0;
extern unsigned int lbl_821AAD20;


void fn_826E80A8(int *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  undefined8 uVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  
  if (param_1[3] != 0) {
    param_1[2] = param_1[2] + 1;
  }
  param_1[3] = 0;
  bVar1 = *(byte *)(param_1[2] + *param_1);
  param_1[3] = 1;
  bVar2 = *(byte *)(param_1[2] + *param_1);
  param_1[3] = 2;
  uVar5 = fn_826E7468(param_1,4);
  fVar4 = lbl_82002AE0;
  uVar8 = (uint)uVar5;
  if ((bVar2 & 0x40) == 0) {
    pfVar7 = param_2 + -2;
    lVar9 = 4;
    do {
      pfVar7 = pfVar7 + 2;
      *pfVar7 = fVar4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  else {
    uVar6 = fn_826E7468(param_1,uVar5);
    uVar3 = 1 << (uVar8 - 1 & 0x3f);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    dVar10 = (double)lbl_8200D4C0;
    *param_2 = (float)((double)(longlong)(int)uVar6 * dVar10);
    uVar6 = fn_826E7468(param_1,uVar5);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    param_2[2] = (float)((double)(longlong)(int)uVar6 * dVar10);
    uVar6 = fn_826E7468(param_1,uVar5);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    param_2[4] = (float)((double)(longlong)(int)uVar6 * dVar10);
    uVar6 = fn_826E7468(param_1,uVar5);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    param_2[6] = (float)((double)(longlong)(int)uVar6 * dVar10);
  }
  fVar4 = lbl_821AAD20;
  if ((bVar1 & 0x80) == 0) {
    param_2 = param_2 + -1;
    lVar9 = 4;
    do {
      param_2 = param_2 + 2;
      *param_2 = fVar4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  else {
    uVar6 = fn_826E7468(param_1,uVar5);
    uVar3 = 1 << (uVar8 - 1 & 0x3f);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    param_2[1] = (float)(longlong)(int)uVar6;
    uVar6 = fn_826E7468(param_1,uVar5);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    param_2[3] = (float)(longlong)(int)uVar6;
    uVar6 = fn_826E7468(param_1,uVar5);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    param_2[5] = (float)(longlong)(int)uVar6;
    uVar6 = fn_826E7468(param_1,uVar5);
    if ((uVar3 & uVar6) != 0) {
      uVar6 = -1 << (uVar8 & 0x3f) | uVar6;
    }
    param_2[7] = (float)(longlong)(int)uVar6;
  }
  return;
}

