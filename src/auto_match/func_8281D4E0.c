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
extern int fn_82F6A534();
extern int fn_82F6A580();


void fn_8281D4E0(undefined8 param_1,float *param_2,float *param_3)

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
  
  pfVar19 = (float *)fn_82F6A534();
  fVar1 = pfVar19[3];
  fVar2 = param_2[4];
  fVar3 = param_2[7];
  fVar4 = param_2[1];
  fVar5 = pfVar19[1];
  fVar6 = *param_2;
  fVar7 = param_2[8];
  fVar8 = pfVar19[8];
  fVar9 = pfVar19[5];
  fVar10 = pfVar19[4];
  fVar11 = *pfVar19;
  fVar12 = pfVar19[7];
  fVar13 = param_2[2];
  fVar14 = param_2[3];
  fVar15 = param_2[6];
  fVar16 = pfVar19[2];
  fVar17 = param_2[5];
  fVar18 = pfVar19[6];
  *param_3 = fVar13 * fVar18 + fVar6 * fVar11 + fVar4 * fVar1;
  param_3[3] = fVar17 * fVar18 + fVar11 * fVar14 + fVar2 * fVar1;
  param_3[1] = fVar4 * fVar10 + fVar13 * fVar12 + fVar6 * fVar5;
  param_3[6] = fVar7 * fVar18 + fVar15 * fVar11 + fVar3 * fVar1;
  param_3[8] = fVar16 * fVar15 + fVar9 * fVar3 + fVar8 * fVar7;
  param_3[2] = fVar8 * fVar13 + fVar16 * fVar6 + fVar9 * fVar4;
  param_3[4] = fVar12 * fVar17 + fVar5 * fVar14 + fVar10 * fVar2;
  param_3[7] = fVar12 * fVar7 + fVar5 * fVar15 + fVar10 * fVar3;
  param_3[5] = fVar8 * fVar17 + fVar16 * fVar14 + fVar9 * fVar2;
  fn_82F6A580();
  return;
}

