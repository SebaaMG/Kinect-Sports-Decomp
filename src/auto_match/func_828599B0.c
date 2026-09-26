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
extern int fn_828116D8();


void fn_828599B0(float *param_1,undefined8 param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = *param_4;
  fVar4 = param_4[1];
  *param_3 = *param_3 * fVar1;
  param_3[1] = param_3[1] * fVar2;
  *param_4 = fVar1 * fVar3;
  param_4[1] = fVar4 * fVar2;
  fn_828116D8(param_3);
  fn_828116D8(param_4,param_2,param_4);
  fVar1 = param_3[1];
  param_3[1] = param_4[1];
  param_4[1] = fVar1;
  return;
}

