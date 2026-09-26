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
extern int fn_82F6A540();
extern int fn_82F6A58C();


void fn_8281C9E8(undefined8 param_1,float *param_2,float *param_3)

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
  float fVar17;
  float fVar18;
  float *pfVar19;
  
  pfVar19 = (float *)fn_82F6A540();
  fVar1 = pfVar19[1];
  fVar2 = param_2[4];
  fVar3 = param_2[7];
  fVar4 = pfVar19[4];
  fVar5 = param_2[1];
  fVar6 = pfVar19[7];
  fVar7 = param_2[3];
  fVar8 = *pfVar19;
  fVar9 = param_2[6];
  fVar10 = pfVar19[3];
  fVar11 = *param_2;
  fVar12 = pfVar19[6];
  fVar13 = pfVar19[2];
  fVar14 = param_2[5];
  fVar15 = param_2[8];
  fVar16 = pfVar19[5];
  fVar17 = pfVar19[8];
  fVar18 = param_2[2];
  param_3[3] = fVar14 * fVar13 + fVar8 * fVar7 + fVar2 * fVar1;
  param_3[6] = fVar15 * fVar13 + fVar9 * fVar8 + fVar3 * fVar1;
  param_3[4] = fVar16 * fVar14 + fVar10 * fVar7 + fVar4 * fVar2;
  param_3[1] = fVar18 * fVar16 + fVar11 * fVar10 + fVar5 * fVar4;
  param_3[5] = fVar17 * fVar14 + fVar12 * fVar7 + fVar6 * fVar2;
  param_3[7] = fVar16 * fVar15 + fVar10 * fVar9 + fVar4 * fVar3;
  param_3[2] = fVar17 * fVar18 + fVar12 * fVar11 + fVar6 * fVar5;
  param_3[8] = fVar17 * fVar15 + fVar12 * fVar9 + fVar6 * fVar3;
  *param_3 = fVar18 * fVar13 + fVar11 * fVar8 + fVar5 * fVar1;
  fn_82F6A58C();
  return;
}

