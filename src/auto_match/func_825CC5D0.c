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


void fn_825CC5D0(int param_1,ulonglong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0xb4);
  fVar2 = *(float *)(param_1 + 0xb8);
  fVar3 = *(float *)(param_1 + 0xbc) + fVar1;
  fVar4 = fVar2 + *(float *)(param_1 + 0xbc);
  *(float *)(param_2 + 0x4ee) = fVar1;
  *(float *)((int)param_2 + 0x2774) = fVar3;
  *(float *)(param_2 + 0x4ef) = fVar2;
  *(float *)((int)param_2 + 0x277c) = fVar4;
  param_2[1] = param_2[1] | 1;
  *(float *)(param_2 + 0x2ee) = fVar1;
  *(float *)((int)param_2 + 0x1774) = fVar3;
  *(float *)(param_2 + 0x2ef) = fVar2;
  *(float *)((int)param_2 + 0x177c) = fVar4;
  *param_2 = *param_2 | 1;
  return;
}

