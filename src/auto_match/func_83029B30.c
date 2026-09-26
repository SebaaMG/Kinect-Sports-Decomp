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


void fn_83029B30(int param_1,int param_2)

{
  uint uVar1;
  
  param_2 = param_2 - *(int *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 4) = 1;
  uVar1 = param_2 + *(int *)(param_1 + 0x34);
  *(uint *)(param_1 + 0x34) = uVar1;
  *(int *)(param_1 + 0x38) = param_2 + *(int *)(param_1 + 0x38);
  *(float *)(param_1 + 0x44) = -(*(float *)(param_1 + 0x40) * (float)uVar1);
  return;
}

