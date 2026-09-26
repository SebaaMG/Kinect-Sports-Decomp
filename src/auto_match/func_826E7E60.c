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


void fn_826E7E60(int *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  undefined8 uVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  
  if (param_1[3] != 0) {
    param_1[2] = param_1[2] + 1;
  }
  param_1[3] = 0;
  bVar1 = *(byte *)(param_1[2] + *param_1);
  param_1[3] = 1;
  bVar2 = *(byte *)(param_1[2] + *param_1);
  param_1[3] = 2;
  uVar6 = fn_826E7468(param_1,4);
  fVar3 = lbl_82002AE0;
  uVar9 = (uint)uVar6;
  if ((bVar2 & 0x40) == 0) {
    pfVar8 = param_2 + -2;
    lVar10 = 4;
    do {
      pfVar8 = pfVar8 + 2;
      *pfVar8 = fVar3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  else {
    uVar7 = fn_826E7468(param_1,uVar6);
    uVar4 = 1 << (uVar9 - 1 & 0x3f);
    if ((uVar4 & uVar7) != 0) {
      uVar7 = -1 << (uVar9 & 0x3f) | uVar7;
    }
    dVar11 = (double)lbl_8200D4C0;
    *param_2 = (float)((double)(longlong)(int)uVar7 * dVar11);
    uVar7 = fn_826E7468(param_1,uVar6);
    if ((uVar4 & uVar7) != 0) {
      uVar7 = -1 << (uVar9 & 0x3f) | uVar7;
    }
    param_2[2] = (float)((double)(longlong)(int)uVar7 * dVar11);
    uVar7 = fn_826E7468(param_1,uVar6);
    fVar3 = lbl_82002AE0;
    if ((uVar4 & uVar7) != 0) {
      uVar7 = -1 << (uVar9 & 0x3f) | uVar7;
    }
    param_2[6] = lbl_82002AE0;
    param_2[4] = (float)((double)(longlong)(int)uVar7 * dVar11);
  }
  fVar5 = lbl_821AAD20;
  dVar11 = (double)fVar3;
  if ((bVar1 & 0x80) == 0) {
    param_2 = param_2 + -1;
    lVar10 = 4;
    do {
      param_2 = param_2 + 2;
      *param_2 = fVar5;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  else {
    uVar7 = fn_826E7468(param_1,uVar6);
    uVar4 = 1 << (uVar9 - 1 & 0x3f);
    if ((uVar4 & uVar7) != 0) {
      uVar7 = -1 << (uVar9 & 0x3f) | uVar7;
    }
    param_2[1] = (float)(longlong)(int)uVar7;
    uVar7 = fn_826E7468(param_1,uVar6);
    if ((uVar4 & uVar7) != 0) {
      uVar7 = -1 << (uVar9 & 0x3f) | uVar7;
    }
    param_2[3] = (float)(longlong)(int)uVar7;
    uVar7 = fn_826E7468(param_1,uVar6);
    if ((uVar4 & uVar7) != 0) {
      uVar7 = -1 << (uVar9 & 0x3f) | uVar7;
    }
    param_2[7] = (float)dVar11;
    param_2[5] = (float)(longlong)(int)uVar7;
  }
  return;
}

