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
extern int fn_822B2EA8();
extern unsigned int lbl_821CC160;
extern V16 vectorCompareEqualToFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


float * fn_822B2F90(float *param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  int in_r0;
  ulonglong uVar4;
  byte in_cr6;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float afStack_40 [10];
  
  fn_822B2EA8(afStack_40);
  uVar4 = (ulonglong)(uint)afStack_40[0] + 1;
  uVar2 = (int)(((ulonglong)(uint)afStack_40[0] + 1 & 0xffffffff) << 4) + param_2 & 0xfffffff0;
  fVar7 = *(float *)(uVar2 + 4);
  fVar8 = *(float *)(uVar2 + 8);
  uVar2 = (int)((uVar4 + ((longlong)((int)uVar4 >> 2) +
                          (ulonglong)((int)uVar4 < 0 && (uVar4 & 3) != 0) & 0x3fffffff) * -4 + 1 &
                0xffffffff) << 4) + param_2 & 0xfffffff0;
  fVar5 = *(float *)(uVar2 + 4);
  fVar6 = *(float *)(uVar2 + 8);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  vectorCompareEqualToFloatingPoint(in_vs43,in_vs44);
  fVar1 = lbl_821CC160;
  if (!(bool)(in_cr6 >> 3 & 1)) {
    fVar1 = fVar5 * fVar5 + 0.0 + fVar6 * fVar6;
    vectorSubtractFloatingPoint(in_vs43,in_vs45);
    pfVar3 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
    *pfVar3 = fVar1;
    pfVar3[1] = fVar1;
    pfVar3[2] = fVar1;
    pfVar3[3] = fVar1;
    fVar1 = fVar5 * fVar7 + 0.0 + fVar6 * fVar8;
    pfVar3 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
    *pfVar3 = fVar1;
    pfVar3[1] = fVar1;
    pfVar3[2] = fVar1;
    pfVar3[3] = fVar1;
    fVar1 = afStack_40[0] / afStack_40[0];
  }
  param_1[1] = fVar1;
  *param_1 = afStack_40[0];
  return param_1;
}

