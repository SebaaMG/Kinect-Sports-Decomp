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
extern unsigned int *auStack_10;
extern V16 vectorSubtractFloatingPoint();


void fn_82CEC350(int param_1)

{
  float fVar1;
  float *pfVar2;
  int in_r0;
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  float in_register_00010060;
  float in_register_00010064;
  float in_register_00010068;
  undefined1 auStack_10 [16];
  
  vectorSubtractFloatingPoint(in_vs39,in_vs40);
  fVar1 = in_register_00010060 * 0.0 +
          *(float *)(((uint)(auStack_10 + in_r0) & 0xfffffff0) + 4) * in_register_00010064 +
          *(float *)(((uint)(auStack_10 + in_r0) & 0xfffffff0) + 8) * in_register_00010068;
  pfVar2 = (float *)(in_r0 + param_1 & 0xfffffff0);
  *pfVar2 = fVar1;
  pfVar2[1] = fVar1;
  pfVar2[2] = fVar1;
  pfVar2[3] = fVar1;
  return;
}

