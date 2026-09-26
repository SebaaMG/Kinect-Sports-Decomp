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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_8;
extern V16 vectorSubtractFloatingPoint();


double fn_822F7668(void)

{
  undefined4 *puVar1;
  int in_r0;
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  float afStack_10 [2];
  float fStack_8;
  
  vectorSubtractFloatingPoint(in_vs33,in_vs34);
  puVar1 = (undefined4 *)((int)afStack_10 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010000;
  puVar1[1] = in_ACC;
  puVar1[2] = in_register_00010008;
  puVar1[3] = in_vr0;
  return (double)SQRT(fStack_8 * fStack_8 + afStack_10[0] * afStack_10[0]);
}

