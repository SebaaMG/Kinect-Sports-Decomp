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
extern int fn_82D43000();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82134CD4;
extern unsigned int lbl_821385C8;
extern unsigned int lbl_821385EC;


void fn_82D43798(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_1 = &lbl_821385EC;
  param_1[4] = &lbl_821385C8;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x34] = 0;
  if ((param_1[0x35] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x33],param_1[0x35] & 0x3fffffff,2);
  }
  param_1[0x33] = 0;
  param_1[0x35] = 0x80000000;
  iVar2 = fn_82CE5410();
  uVar3 = (ulonglong)(uint)param_1[0x31];
  uVar4 = (ulonglong)(uint)param_1[0x30];
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < (int)param_1[0x31]) {
    do {
      fn_82D43000(uVar4);
      uVar3 = uVar3 - 1;
      uVar4 = uVar4 + 0x40;
    } while (uVar3 != 0);
  }
  param_1[0x31] = 0;
  if ((param_1[0x32] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x30],param_1[0x32] & 0x3fffffff,0x40);
  }
  param_1[0x30] = 0;
  param_1[0x32] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x2e] = 0;
  if ((param_1[0x2f] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x2d],param_1[0x2f] & 0x3fffffff,0x60);
  }
  param_1[0x2d] = 0;
  param_1[0x2f] = 0x80000000;
  param_1[4] = &lbl_82134CD4;
  *param_1 = &lbl_8212FC60;
  return;
}

