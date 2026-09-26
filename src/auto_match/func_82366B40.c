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
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82F65018();
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern V16 vectorSubtractFloatingPoint();


float * fn_82366B40(float *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int in_r0;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 in_vs33 [16];
  undefined1 in_vs34 [16];
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  fVar3 = lbl_821CA1A8;
  fVar2 = lbl_821CA1A4;
  vectorSubtractFloatingPoint(in_vs34,in_vs33);
  *param_1 = lbl_821CA1A0;
  puVar1 = (undefined4 *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010000;
  puVar1[1] = in_ACC;
  puVar1[2] = in_register_00010008;
  puVar1[3] = in_vr0;
  dVar6 = (double)fStack_28;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  dVar5 = (double)fStack_30;
  dVar4 = (double)fn_82F65018(-dVar5,-dVar6);
  param_1[1] = (float)dVar4;
  dVar4 = (double)fn_82F65018((double)fStack_2c,
                               (double)SQRT((float)(dVar6 * dVar6 + (double)(float)(dVar5 * dVar5)))
                              );
  *param_1 = (float)dVar4;
  return param_1;
}

