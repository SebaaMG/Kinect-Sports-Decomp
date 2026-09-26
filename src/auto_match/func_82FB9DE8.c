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


void fn_82FB9DE8(double param_1,double param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  ushort uVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar5;
  longlong lVar4;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar1 = *(ushort *)(param_3 + 3);
  dVar12 = (double)((float)(param_2 - param_1) / (float)uVar1);
  if ((param_6 & 0xffffffff) == 0) {
    return;
  }
  pfVar3 = (float *)*param_3;
  pfVar6 = pfVar3 + *(ushort *)((int)param_3 + 0xe);
  pfVar2 = pfVar6 + -3;
  do {
    if (pfVar3 < pfVar6) {
      uVar5 = (int)pfVar6 + (3 - (int)pfVar3);
      dVar9 = param_1;
      pfVar7 = pfVar3;
      if (3 < (int)(((int)uVar5 >> 2) + (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0))) {
        do {
          dVar11 = (double)(float)((double)(float)(dVar9 + dVar12) + dVar12);
          *pfVar7 = (float)((double)*pfVar7 * (double)(float)(dVar9 + dVar12));
          dVar10 = (double)(float)(dVar11 + dVar12);
          pfVar7[1] = (float)((double)pfVar7[1] * dVar11);
          dVar9 = (double)(float)(dVar10 + dVar12);
          pfVar7[2] = (float)((double)pfVar7[2] * dVar10);
          pfVar7[3] = (float)((double)pfVar7[3] * dVar9);
          pfVar7 = pfVar7 + 4;
        } while ((int)pfVar7 < (int)pfVar2);
      }
      if (pfVar7 < pfVar6) {
        pfVar8 = pfVar7 + -1;
        lVar4 = (ulonglong)((uint)((int)pfVar6 + (-1 - (int)pfVar7)) >> 2) + 1;
        do {
          dVar9 = (double)(float)(dVar9 + dVar12);
          pfVar7 = pfVar8 + 1;
          pfVar8 = pfVar8 + 1;
          *pfVar8 = (float)((double)*pfVar7 * dVar9);
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    param_6 = param_6 - 1;
    pfVar3 = pfVar3 + uVar1;
    pfVar6 = pfVar6 + uVar1;
    pfVar2 = pfVar2 + uVar1;
  } while (param_6 != 0);
  return;
}

