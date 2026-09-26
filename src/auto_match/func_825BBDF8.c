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
extern int fn_825BBEF0();
extern V16 vectorSubtractFloatingPoint();


bool fn_825BBDF8(int param_1,float *param_2,int param_3)

{
  ulonglong uVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  int in_r0;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double extraout_f1;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar12;
  float fVar13;
  float afStack_20 [8];
  
  if (param_3 != 0) {
    uVar3 = in_r0 + (int)param_2 & 0xfffffff0;
    fVar12 = *(float *)(uVar3 + 4);
    fVar13 = *(float *)(uVar3 + 8);
    fVar2 = *(float *)(param_1 + 0x4c);
    vectorSubtractFloatingPoint(in_vs32,in_vs45);
    fVar12 = fVar12 * fVar12 + 0.0 + fVar13 * fVar13;
    pfVar4 = (float *)((int)afStack_20 + in_r0 & 0xfffffff0);
    *pfVar4 = fVar12;
    pfVar4[1] = fVar12;
    pfVar4[2] = fVar12;
    pfVar4[3] = fVar12;
    if (fVar2 * fVar2 < afStack_20[0]) {
      return false;
    }
  }
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x30);
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x34);
  uVar6 = 0;
  uVar9 = 0;
  dVar11 = (double)(*(float *)(param_1 + 0x4c) - (*param_2 - *(float *)(param_1 + 0x20)));
  uVar8 = uVar7;
  if (uVar7 < uVar10) {
    do {
      uVar1 = uVar6 & 0xffffffff;
      uVar6 = uVar7;
      if (uVar1 != 0) {
        param_1 = fn_825BBEF0(dVar11);
        uVar6 = uVar7;
        dVar11 = extraout_f1;
        if (param_1 != 0) {
          uVar9 = uVar9 + 1;
        }
      }
      uVar7 = uVar6 + 0x14;
    } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
    if (((uVar6 & 0xffffffff) != 0) &&
       (iVar5 = fn_825BBEF0(dVar11,param_1,uVar6,uVar8), iVar5 != 0)) {
      uVar9 = uVar9 + 1;
    }
  }
  return uVar9 != ((longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0) &
                  0x7fffffff) << 1;
}

