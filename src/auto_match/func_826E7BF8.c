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
extern int fn_8268CC00();
extern int fn_826E7468();
extern unsigned int lbl_82054148;


void fn_826E7BF8(int *param_1,float *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar6;
  longlong lVar5;
  uint uVar7;
  double dVar8;
  
  if (param_1[3] != 0) {
    param_1[2] = param_1[2] + 1;
  }
  param_1[3] = 0;
  fn_8268CC00(param_2);
  iVar2 = param_1[3];
  uVar7 = iVar2 + 1;
  bVar1 = *(byte *)(param_1[2] + *param_1);
  param_1[3] = uVar7;
  if (7 < uVar7) {
    param_1[3] = 0;
    param_1[2] = param_1[2] + 1;
  }
  dVar8 = (double)lbl_82054148;
  if ((1 << (7U - iVar2 & 0x3f) & (uint)bVar1) != 0) {
    uVar4 = fn_826E7468(param_1,5);
    uVar6 = fn_826E7468(param_1,uVar4);
    uVar3 = (uint)uVar4;
    uVar7 = 1 << (uVar3 - 1 & 0x3f);
    if ((uVar7 & uVar6) != 0) {
      uVar6 = -1 << (uVar3 & 0x3f) | uVar6;
    }
    *param_2 = (float)((double)(longlong)(int)uVar6 * dVar8);
    uVar6 = fn_826E7468(param_1,uVar4);
    if ((uVar7 & uVar6) != 0) {
      uVar6 = -1 << (uVar3 & 0x3f) | uVar6;
    }
    param_2[4] = (float)((double)(longlong)(int)uVar6 * dVar8);
  }
  iVar2 = param_1[3];
  uVar7 = iVar2 + 1;
  bVar1 = *(byte *)(param_1[2] + *param_1);
  param_1[3] = uVar7;
  if (7 < uVar7) {
    param_1[3] = 0;
    param_1[2] = param_1[2] + 1;
  }
  if ((1 << (7U - iVar2 & 0x3f) & (uint)bVar1) != 0) {
    uVar4 = fn_826E7468(param_1,5);
    uVar6 = fn_826E7468(param_1,uVar4);
    uVar3 = (uint)uVar4;
    uVar7 = 1 << (uVar3 - 1 & 0x3f);
    if ((uVar7 & uVar6) != 0) {
      uVar6 = -1 << (uVar3 & 0x3f) | uVar6;
    }
    param_2[3] = (float)((double)(longlong)(int)uVar6 * dVar8);
    uVar6 = fn_826E7468(param_1,uVar4);
    if ((uVar7 & uVar6) != 0) {
      uVar6 = -1 << (uVar3 & 0x3f) | uVar6;
    }
    param_2[1] = (float)((double)(longlong)(int)uVar6 * dVar8);
  }
  lVar5 = fn_826E7468(param_1,5);
  if (0 < lVar5) {
    uVar6 = fn_826E7468(param_1,lVar5);
    uVar3 = (uint)lVar5;
    uVar7 = 1 << (uVar3 - 1 & 0x3f);
    if ((uVar7 & uVar6) != 0) {
      uVar6 = -1 << (uVar3 & 0x3f) | uVar6;
    }
    param_2[2] = (float)(longlong)(int)uVar6;
    uVar6 = fn_826E7468(param_1,lVar5);
    if ((uVar7 & uVar6) != 0) {
      uVar6 = -1 << (uVar3 & 0x3f) | uVar6;
    }
    param_2[5] = (float)(longlong)(int)uVar6;
  }
  return;
}

