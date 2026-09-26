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
extern int fn_82F6A548();
extern int fn_82F6A594();


void fn_8268D280(undefined8 param_1,float *param_2,float *param_3)

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
  float *pfVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  pfVar11 = (float *)fn_82F6A548();
  dVar12 = (double)param_3[1];
  dVar17 = (double)pfVar11[1];
  fVar7 = *param_3;
  fVar8 = param_3[2];
  dVar16 = (double)pfVar11[4];
  fVar9 = *pfVar11;
  fVar10 = pfVar11[3];
  dVar15 = (double)param_3[3];
  dVar14 = (double)pfVar11[2];
  dVar13 = (double)pfVar11[5];
  fVar1 = (float)((double)(fVar9 * fVar7 + (float)(dVar17 * dVar12)) + dVar14);
  *param_2 = fVar1;
  fVar2 = (float)((double)(fVar9 * fVar8 + (float)(dVar17 * dVar12)) + dVar14);
  param_2[2] = fVar1;
  fVar3 = (float)((double)(float)(dVar16 * dVar15 + (double)(fVar10 * fVar8)) + dVar13);
  fVar4 = (float)((double)(fVar10 * fVar7 + (float)(dVar16 * dVar12)) + dVar13);
  param_2[1] = fVar4;
  param_2[3] = fVar4;
  fVar5 = (float)((double)(fVar10 * fVar8 + (float)(dVar16 * dVar12)) + dVar13);
  fVar6 = (float)((double)(float)(dVar17 * dVar15 + (double)(fVar9 * fVar7)) + dVar14);
  fVar8 = (float)((double)(float)(dVar17 * dVar15 + (double)(fVar9 * fVar8)) + dVar14);
  fVar7 = (float)((double)(float)(dVar16 * dVar15 + (double)(fVar10 * fVar7)) + dVar13);
  fVar9 = fVar2;
  if (fVar1 < fVar2) {
    fVar9 = fVar1;
  }
  *param_2 = fVar9;
  fVar10 = fVar5;
  if (fVar4 < fVar5) {
    fVar10 = fVar4;
  }
  param_2[1] = fVar10;
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  param_2[2] = fVar1;
  if (fVar5 < fVar4) {
    fVar5 = fVar4;
  }
  param_2[3] = fVar5;
  fVar2 = fVar8;
  if (fVar9 < fVar8) {
    fVar2 = fVar9;
  }
  *param_2 = fVar2;
  fVar4 = fVar3;
  if (fVar10 < fVar3) {
    fVar4 = fVar10;
  }
  param_2[1] = fVar4;
  if (fVar1 <= fVar8) {
    fVar1 = fVar8;
  }
  param_2[2] = fVar1;
  if (fVar5 <= fVar3) {
    fVar5 = fVar3;
  }
  param_2[3] = fVar5;
  if (fVar6 <= fVar2) {
    fVar2 = fVar6;
  }
  *param_2 = fVar2;
  if (fVar7 <= fVar4) {
    fVar4 = fVar7;
  }
  param_2[1] = fVar4;
  if (fVar1 <= fVar6) {
    fVar1 = fVar6;
  }
  param_2[2] = fVar1;
  if (fVar7 < fVar5) {
    fVar7 = fVar5;
  }
  param_2[3] = fVar7;
  fn_82F6A594(dVar13,dVar14,dVar15);
  return;
}

