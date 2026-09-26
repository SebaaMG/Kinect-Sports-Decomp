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


void fn_8280AE70(float *param_1,float *param_2,float *param_3)

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
  float fVar16;
  
  fVar1 = param_2[1];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  fVar4 = param_2[2];
  fVar5 = param_1[8];
  fVar6 = *param_2;
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  fVar9 = param_1[4];
  fVar10 = param_1[10];
  fVar11 = param_1[0xb];
  fVar12 = param_2[3];
  fVar13 = param_1[0xc];
  fVar14 = param_1[0xf];
  fVar15 = param_1[0xe];
  fVar16 = *param_1;
  param_3[1] = param_1[0xd] * fVar12 + param_1[9] * fVar4 + param_1[1] * fVar6 + param_1[5] * fVar1;
  param_3[2] = fVar15 * fVar12 + fVar10 * fVar4 + fVar7 * fVar6 + fVar2 * fVar1;
  param_3[3] = fVar14 * fVar12 + fVar11 * fVar4 + fVar8 * fVar6 + fVar3 * fVar1;
  *param_3 = fVar16 * fVar6 + fVar13 * fVar12 + fVar9 * fVar1 + fVar5 * fVar4;
  return;
}

