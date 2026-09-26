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
extern unsigned int lbl_8217BA98;


void fn_82FE59B8(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float *pfVar9;
  longlong lVar8;
  float *pfVar10;
  
  pfVar9 = param_2 + param_3;
  if (param_2 < pfVar9) {
    uVar7 = (int)pfVar9 + (3 - (int)param_2);
    if (3 < (int)(((int)uVar7 >> 2) + (uint)((int)uVar7 < 0 && (uVar7 & 3) != 0))) {
      fVar1 = param_1[2];
      do {
        fVar2 = *param_2;
        fVar3 = *param_1;
        fVar4 = param_2[1];
        fVar5 = param_2[2];
        *param_1 = fVar2;
        fVar6 = param_2[3];
        *param_1 = fVar4;
        *param_1 = fVar5;
        *param_1 = fVar6;
        fVar3 = param_1[1] * fVar1 + (fVar2 - fVar3);
        *param_2 = fVar3;
        param_1[1] = fVar3;
        fVar2 = fVar3 * fVar1 + (fVar4 - fVar2);
        param_2[1] = fVar2;
        param_1[1] = fVar2;
        fVar2 = fVar2 * fVar1 + (fVar5 - fVar4);
        param_2[2] = fVar2;
        param_1[1] = fVar2;
        fVar2 = fVar2 * fVar1 + (fVar6 - fVar5);
        param_2[3] = fVar2;
        param_2 = param_2 + 4;
        param_1[1] = fVar2;
      } while ((int)param_2 < (int)(pfVar9 + -3));
    }
    if (param_2 < pfVar9) {
      fVar1 = param_1[2];
      pfVar10 = param_2 + -1;
      lVar8 = (ulonglong)((uint)((int)pfVar9 + (-1 - (int)param_2)) >> 2) + 1;
      do {
        fVar2 = pfVar10[1];
        fVar3 = *param_1;
        *param_1 = fVar2;
        fVar2 = param_1[1] * fVar1 + (fVar2 - fVar3);
        param_1[1] = fVar2;
        pfVar10 = pfVar10 + 1;
        *pfVar10 = fVar2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  param_1[1] = (param_1[1] + lbl_8217BA98) - lbl_8217BA98;
  return;
}

