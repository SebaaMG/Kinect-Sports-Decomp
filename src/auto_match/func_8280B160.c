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


void fn_8280B160(float *param_1,int param_2,int param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  
  fVar1 = *param_1;
  fVar2 = param_1[4];
  fVar3 = param_1[8];
  fVar4 = param_1[1];
  fVar5 = param_1[5];
  fVar6 = param_1[9];
  fVar7 = param_1[2];
  fVar8 = param_1[6];
  fVar9 = param_1[10];
  if ((int)param_4 == 0) {
    return;
  }
  pfVar13 = (float *)(param_3 + -4);
  pfVar14 = (float *)(param_2 + 4);
  do {
    fVar10 = pfVar14[1];
    fVar11 = pfVar14[-1];
    fVar12 = *pfVar14;
    *(float *)((param_3 - param_2) + (int)pfVar14) =
         fVar12 * fVar5 + fVar11 * fVar4 + fVar10 * fVar6;
    pfVar13[1] = fVar12 * fVar2 + fVar11 * fVar1 + fVar10 * fVar3;
    pfVar13 = pfVar13 + 3;
    *pfVar13 = fVar12 * fVar8 + fVar11 * fVar7 + fVar10 * fVar9;
    pfVar14 = pfVar14 + 3;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  return;
}

