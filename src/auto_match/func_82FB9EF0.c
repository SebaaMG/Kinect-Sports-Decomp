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


void fn_82FB9EF0(double param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4)

{
  ushort uVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar5;
  longlong lVar4;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  
  if ((param_4 & 0xffffffff) == 0) {
    return;
  }
  pfVar3 = (float *)*param_2;
  uVar1 = *(ushort *)(param_2 + 3);
  pfVar6 = pfVar3 + *(ushort *)((int)param_2 + 0xe);
  pfVar2 = pfVar6 + -3;
  do {
    if (pfVar3 < pfVar6) {
      uVar5 = (int)pfVar6 + (3 - (int)pfVar3);
      pfVar7 = pfVar3;
      if (3 < (int)(((int)uVar5 >> 2) + (uint)((int)uVar5 < 0 && (uVar5 & 3) != 0))) {
        do {
          *pfVar7 = (float)((double)*pfVar7 * param_1);
          pfVar7[1] = (float)((double)pfVar7[1] * param_1);
          pfVar7[2] = (float)((double)pfVar7[2] * param_1);
          pfVar7[3] = (float)((double)pfVar7[3] * param_1);
          pfVar7 = pfVar7 + 4;
        } while ((int)pfVar7 < (int)pfVar2);
      }
      if (pfVar7 < pfVar6) {
        pfVar8 = pfVar7 + -1;
        lVar4 = (ulonglong)((uint)((int)pfVar6 + (-1 - (int)pfVar7)) >> 2) + 1;
        do {
          pfVar7 = pfVar8 + 1;
          pfVar8 = pfVar8 + 1;
          *pfVar8 = (float)((double)*pfVar7 * param_1);
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    param_4 = param_4 - 1;
    pfVar3 = pfVar3 + uVar1;
    pfVar6 = pfVar6 + uVar1;
    pfVar2 = pfVar2 + uVar1;
  } while (param_4 != 0);
  return;
}

