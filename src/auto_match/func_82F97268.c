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


void fn_82F97268(int param_1,undefined4 *param_2)

{
  float fVar1;
  ushort uVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar6;
  longlong lVar5;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  
  if (((param_2[1] & 8) == 0) || (*(char *)(param_1 + 0x34) != '\0')) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x10);
  }
  else {
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x10) - 1;
  }
  if ((uVar7 & 0xffffffff) == 0) {
    return;
  }
  pfVar4 = (float *)*param_2;
  fVar1 = *(float *)(param_1 + 0xc);
  uVar2 = *(ushort *)(param_2 + 3);
  pfVar8 = pfVar4 + *(ushort *)((int)param_2 + 0xe);
  pfVar3 = pfVar8 + -3;
  do {
    if (pfVar4 < pfVar8) {
      uVar6 = (int)pfVar8 + (3 - (int)pfVar4);
      pfVar9 = pfVar4;
      if (3 < (int)(((int)uVar6 >> 2) + (uint)((int)uVar6 < 0 && (uVar6 & 3) != 0))) {
        do {
          *pfVar9 = *pfVar9 * fVar1;
          pfVar9[1] = pfVar9[1] * fVar1;
          pfVar9[2] = pfVar9[2] * fVar1;
          pfVar9[3] = pfVar9[3] * fVar1;
          pfVar9 = pfVar9 + 4;
        } while ((int)pfVar9 < (int)pfVar3);
      }
      if (pfVar9 < pfVar8) {
        pfVar10 = pfVar9 + -1;
        lVar5 = (ulonglong)((uint)((int)pfVar8 + (-1 - (int)pfVar9)) >> 2) + 1;
        do {
          pfVar9 = pfVar10 + 1;
          pfVar10 = pfVar10 + 1;
          *pfVar10 = *pfVar9 * fVar1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    uVar7 = uVar7 - 1;
    pfVar4 = pfVar4 + uVar2;
    pfVar8 = pfVar8 + uVar2;
    pfVar3 = pfVar3 + uVar2;
  } while (uVar7 != 0);
  return;
}

