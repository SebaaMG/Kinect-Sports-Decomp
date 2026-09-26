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
extern int fn_82CE5410();
extern int fn_82CED5B8();
extern int fn_82D395E0();
extern int fn_82D39710();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82134CD4;


void fn_82D46000(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  iVar2 = fn_82CE5410();
  uVar5 = (ulonglong)(uint)param_1[0x33];
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < (int)param_1[0x33]) {
    lVar4 = (ulonglong)(uint)param_1[0x32] + 4;
    do {
      fn_82CED5B8(lVar4);
      uVar5 = uVar5 - 1;
      lVar4 = lVar4 + 8;
    } while (uVar5 != 0);
  }
  param_1[0x33] = 0;
  if ((param_1[0x34] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x32],param_1[0x34] & 0x3fffffff,8);
  }
  param_1[0x32] = 0;
  param_1[0x34] = 0x80000000;
  iVar2 = fn_82CE5410();
  uVar5 = (ulonglong)(uint)param_1[0x22];
  uVar3 = (ulonglong)(uint)param_1[0x21];
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < (int)param_1[0x22]) {
    do {
      fn_82D39710(uVar3);
      uVar5 = uVar5 - 1;
      uVar3 = uVar3 + 0x40;
    } while (uVar5 != 0);
  }
  param_1[0x22] = 0;
  if ((param_1[0x23] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x21],param_1[0x23] & 0x3fffffff,0x40);
  }
  param_1[0x21] = 0;
  param_1[0x23] = 0x80000000;
  iVar2 = fn_82CE5410();
  uVar5 = (ulonglong)(uint)param_1[0x1f];
  uVar3 = (ulonglong)(uint)param_1[0x1e];
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < (int)param_1[0x1f]) {
    do {
      fn_82D395E0(uVar3);
      uVar5 = uVar5 - 1;
      uVar3 = uVar3 + 0x50;
    } while (uVar5 != 0);
  }
  param_1[0x1f] = 0;
  if ((param_1[0x20] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x1e],param_1[0x20] & 0x3fffffff,0x50);
  }
  param_1[0x1e] = 0;
  param_1[0x20] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x1c] = 0;
  if ((param_1[0x1d] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x1b],param_1[0x1d] & 0x3fffffff,0x10);
  }
  param_1[0x1b] = 0;
  param_1[0x1d] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x19] = 0;
  if ((param_1[0x1a] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x18],param_1[0x1a] & 0x3fffffff,0x10);
  }
  param_1[0x18] = 0;
  param_1[0x1a] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x16] = 0;
  if ((param_1[0x17] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x15],param_1[0x17] & 0x3fffffff,0x40);
  }
  param_1[0x15] = 0;
  param_1[0x17] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x13] = 0;
  if ((param_1[0x14] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x12],param_1[0x14] & 0x3fffffff,1);
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x10] = 0;
  if ((param_1[0x11] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0xf],param_1[0x11] & 0x3fffffff,2);
  }
  param_1[0xf] = 0;
  param_1[0x11] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0xd] = 0;
  if ((param_1[0xe] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0xc],param_1[0xe] & 0x3fffffff,4);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  param_1[4] = &lbl_82134CD4;
  *param_1 = &lbl_8212FC60;
  return;
}

