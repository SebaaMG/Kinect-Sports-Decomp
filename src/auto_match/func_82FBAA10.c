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


void fn_82FBAA10(double param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar5;
  longlong lVar4;
  ulonglong uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  uVar1 = *(ushort *)(param_3 + 3);
  dVar13 = (double)*(float *)(param_2 + 0xc);
  uVar6 = (ulonglong)*(uint *)(param_2 + 0x14);
  dVar14 = (double)((float)(param_1 - dVar13) / (float)uVar1);
  if (uVar6 == 0) {
    return;
  }
  pfVar3 = (float *)*param_3;
  pfVar7 = pfVar3 + *(ushort *)((int)param_3 + 0xe);
  pfVar2 = pfVar7 + -3;
  do {
    if (pfVar3 < pfVar7) {
      uVar5 = (int)pfVar7 + (3 - (int)pfVar3);
      dVar10 = dVar13;
      pfVar8 = pfVar3;
      if (3 < (int)(((int)uVar5 >> 2) + (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0))) {
        do {
          dVar12 = (double)(float)((double)(float)(dVar10 + dVar14) + dVar14);
          *pfVar8 = (float)((double)*pfVar8 * (double)(float)(dVar10 + dVar14));
          dVar11 = (double)(float)(dVar12 + dVar14);
          pfVar8[1] = (float)((double)pfVar8[1] * dVar12);
          dVar10 = (double)(float)(dVar11 + dVar14);
          pfVar8[2] = (float)((double)pfVar8[2] * dVar11);
          pfVar8[3] = (float)((double)pfVar8[3] * dVar10);
          pfVar8 = pfVar8 + 4;
        } while ((int)pfVar8 < (int)pfVar2);
      }
      if (pfVar8 < pfVar7) {
        pfVar9 = pfVar8 + -1;
        lVar4 = (ulonglong)((uint)((int)pfVar7 + (-1 - (int)pfVar8)) >> 2) + 1;
        do {
          dVar10 = (double)(float)(dVar10 + dVar14);
          pfVar8 = pfVar9 + 1;
          pfVar9 = pfVar9 + 1;
          *pfVar9 = (float)((double)*pfVar8 * dVar10);
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    uVar6 = uVar6 - 1;
    pfVar3 = pfVar3 + uVar1;
    pfVar7 = pfVar7 + uVar1;
    pfVar2 = pfVar2 + uVar1;
  } while (uVar6 != 0);
  return;
}

