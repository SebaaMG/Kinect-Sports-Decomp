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
extern V16 vectorSubtractFloatingPoint();


void fn_82DD3730(int param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  float *pfVar1;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  pfVar1 = (float *)(in_r0 + param_4 & 0xfffffff0);
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  pfVar1 = (float *)(in_r0 + param_5 & 0xfffffff0);
  *pfVar1 = fVar2;
  pfVar1[1] = fVar3;
  pfVar1[2] = fVar4;
  pfVar1[3] = fVar5;
  fVar2 = fVar2 * in_register_000100c0 + fVar3 * in_register_000100c4 + fVar4 * in_register_000100c8
  ;
  pfVar1 = (float *)(in_r0 + param_1 & 0xfffffff0);
  *pfVar1 = fVar2;
  pfVar1[1] = fVar2;
  pfVar1[2] = fVar2;
  pfVar1[3] = fVar2;
  return;
}

