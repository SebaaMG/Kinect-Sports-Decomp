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


void fn_8270D570(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  piVar1 = *(int **)(*param_1 + 0xc);
  (**(code **)(*piVar1 + 0x6c))(piVar1,param_1[0x15] != 0);
  if ((uint)param_1[0x15] < 0x40) {
    param_1[param_1[0x15] + 0x16] = (int)param_2;
  }
  param_1[0x15] = param_1[0x15] + 1;
  param_1[0x14] = param_1[0x14] + 1;
  param_1[0x13] = param_1[0x13] + 1;
  iVar2 = *piVar1;
  uVar3 = (**(code **)(*param_2 + 0xc))(param_2);
  (**(code **)(iVar2 + 0x2c))(piVar1,uVar3);
  (**(code **)(*param_2 + 0x60))(param_2,param_1);
  (**(code **)(*piVar1 + 0x30))(piVar1);
  param_1[0x13] = param_1[0x13] + -1;
  (**(code **)(*piVar1 + 0x70))(piVar1);
  return;
}

