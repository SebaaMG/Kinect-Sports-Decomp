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


void fn_8268CEC0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[3];
  fVar4 = param_1[4];
  *param_1 = param_2[3] * fVar2 + *param_2 * fVar1;
  param_1[3] = param_2[3] * fVar4 + *param_2 * fVar3;
  param_1[1] = fVar2 * param_2[4] + fVar1 * param_2[1];
  param_1[4] = fVar4 * param_2[4] + fVar3 * param_2[1];
  param_1[2] = fVar2 * param_2[5] + fVar1 * param_2[2] + param_1[2];
  param_1[5] = fVar4 * param_2[5] + fVar3 * param_2[2] + param_1[5];
  return;
}

