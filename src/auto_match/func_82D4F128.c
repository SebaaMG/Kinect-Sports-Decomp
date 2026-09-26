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
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_821388B0;


void fn_82D4F128(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &lbl_821388B0;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[9] = 0;
  if ((param_1[10] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[8],param_1[10] & 0x3fffffff,2);
  }
  param_1[8] = 0;
  param_1[10] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[6] = 0;
  if ((param_1[7] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[5],param_1[7] & 0x3fffffff,0xc);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[3] = 0;
  if ((param_1[4] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[2],param_1[4] & 0x3fffffff,1);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = &lbl_8212FC60;
  return;
}

