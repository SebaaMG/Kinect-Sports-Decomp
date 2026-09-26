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


void fn_82DA5580(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[5];
  if (*param_2 - param_2[5] < 0.0) {
    fVar1 = *param_2;
  }
  fVar2 = param_2[10];
  if (fVar1 - param_2[10] < 0.0) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0xc0) = fVar2;
  *(float *)(param_1 + 0xc4) = fVar2;
  *(float *)(param_1 + 200) = fVar2;
  return;
}

