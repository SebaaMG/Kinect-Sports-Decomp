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


void fn_8280AF20(float *param_1,int param_2,float *param_3,ulonglong param_4)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float *pfVar16;
  
  fVar1 = *param_1;
  fVar2 = param_1[4];
  fVar3 = param_1[8];
  fVar4 = param_1[0xc];
  fVar5 = param_1[1];
  fVar6 = param_1[5];
  fVar7 = param_1[9];
  fVar8 = param_1[0xd];
  fVar9 = param_1[2];
  fVar10 = param_1[6];
  fVar11 = param_1[10];
  fVar12 = param_1[0xe];
  if ((param_4 & 0xffffffff) != 0) {
    pfVar16 = (float *)(param_2 + -0xc);
    do {
      fVar13 = pfVar16[5];
      param_4 = param_4 - 1;
      fVar14 = pfVar16[4];
      pfVar16 = pfVar16 + 3;
      fVar15 = *pfVar16;
      param_3[2] = fVar14 * fVar10 + fVar15 * fVar9 + fVar13 * fVar11 + fVar12;
      param_3[1] = fVar14 * fVar6 + fVar15 * fVar5 + fVar13 * fVar7 + fVar8;
      *param_3 = fVar14 * fVar2 + fVar15 * fVar1 + fVar13 * fVar3 + fVar4;
      param_3 = param_3 + 3;
    } while (param_4 != 0);
  }
  return;
}

