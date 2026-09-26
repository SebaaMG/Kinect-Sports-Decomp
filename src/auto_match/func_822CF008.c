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
extern unsigned int *auStack_20;
extern int fn_822CDCF8();
extern V16 vectorSubtractFloatingPoint();


bool fn_822CF008(undefined8 param_1)

{
  uint uVar1;
  float *pfVar2;
  int in_r0;
  double dVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar4;
  float fVar5;
  float afStack_30 [4];
  undefined1 auStack_20 [16];
  
  dVar3 = (double)fn_822CDCF8(param_1,afStack_30,auStack_20);
  uVar1 = (int)param_1 + 0x80U & 0xfffffff0;
  fVar4 = *(float *)(uVar1 + 4);
  fVar5 = *(float *)(uVar1 + 8);
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  fVar4 = fVar4 * fVar4 + 0.0 + fVar5 * fVar5;
  pfVar2 = (float *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *pfVar2 = fVar4;
  pfVar2[1] = fVar4;
  pfVar2[2] = fVar4;
  pfVar2[3] = fVar4;
  return afStack_30[0] <= (float)(dVar3 * dVar3);
}

