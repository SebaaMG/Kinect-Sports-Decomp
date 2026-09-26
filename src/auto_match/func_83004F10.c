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


void fn_83004F10(int *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x134))(param_1,param_4);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x3d) = *(byte *)(iVar1 + 0x3d) & ~(byte)param_3 | (byte)param_2;
  }
  (**(code **)(*param_1 + 0x14))(param_1);
  if ((param_4 & 0xffffffff) == 0) {
    (**(code **)(*param_1 + 0xe4))(param_1,param_2,param_3);
  }
  (**(code **)(*param_1 + 0x54))(param_1,param_2,param_3,param_4,0);
  return;
}

