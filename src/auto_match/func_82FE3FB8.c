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


void fn_82FE3FB8(float *param_1,float *param_2,int param_3)

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
  uint uVar14;
  float *pfVar16;
  longlong lVar15;
  float *pfVar17;
  
  pfVar16 = param_2 + param_3;
  if (param_2 < pfVar16) {
    uVar14 = (int)pfVar16 + (3 - (int)param_2);
    if (3 < (int)(((int)uVar14 >> 2) + (uint)((int)uVar14 < 0 && (uVar14 & 3) != 0))) {
      fVar1 = param_1[2];
      fVar2 = *param_1;
      fVar3 = param_1[1];
      fVar4 = param_1[4];
      fVar5 = param_1[3];
      do {
        fVar6 = param_1[6];
        fVar7 = *param_2;
        fVar8 = param_1[5];
        param_1[6] = fVar8;
        fVar9 = param_1[8];
        fVar10 = param_2[1];
        param_1[5] = fVar7;
        param_1[6] = fVar7;
        param_1[5] = fVar10;
        fVar11 = param_2[3];
        fVar12 = param_1[7];
        param_1[8] = fVar12;
        fVar13 = param_2[2];
        param_1[5] = fVar13;
        param_1[6] = fVar10;
        fVar9 = fVar5 * fVar12 + fVar9 * fVar4 + fVar3 * fVar8 + fVar2 * fVar7 + fVar6 * fVar1;
        *param_2 = fVar9;
        param_1[7] = fVar9;
        fVar6 = param_1[5];
        param_1[6] = fVar6;
        param_1[8] = fVar9;
        param_1[5] = fVar11;
        fVar8 = fVar5 * fVar9 + fVar12 * fVar4 + fVar3 * fVar7 + fVar2 * fVar10 + fVar8 * fVar1;
        param_2[1] = fVar8;
        param_1[7] = fVar8;
        param_1[8] = fVar8;
        fVar7 = fVar5 * fVar8 + fVar9 * fVar4 + fVar3 * fVar10 + fVar2 * fVar13 + fVar7 * fVar1;
        param_2[2] = fVar7;
        param_1[7] = fVar7;
        param_1[8] = fVar7;
        fVar6 = fVar5 * fVar7 + fVar8 * fVar4 + fVar3 * fVar6 + fVar2 * fVar11 + fVar10 * fVar1;
        param_2[3] = fVar6;
        param_2 = param_2 + 4;
        param_1[7] = fVar6;
      } while ((int)param_2 < (int)(pfVar16 + -3));
    }
    if (param_2 < pfVar16) {
      fVar1 = param_1[2];
      fVar2 = *param_1;
      pfVar17 = param_2 + -1;
      fVar3 = param_1[1];
      fVar4 = param_1[4];
      fVar5 = param_1[3];
      lVar15 = (ulonglong)((uint)((int)pfVar16 + (-1 - (int)param_2)) >> 2) + 1;
      do {
        fVar6 = param_1[6];
        fVar7 = pfVar17[1];
        fVar8 = param_1[5];
        fVar9 = param_1[8];
        param_1[6] = fVar8;
        param_1[5] = fVar7;
        param_1[8] = param_1[7];
        fVar6 = fVar5 * param_1[7] + fVar9 * fVar4 + fVar3 * fVar8 + fVar2 * fVar7 + fVar6 * fVar1;
        param_1[7] = fVar6;
        pfVar17 = pfVar17 + 1;
        *pfVar17 = fVar6;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  }
  fVar1 = lbl_8217BA98;
  param_1[7] = (param_1[7] + lbl_8217BA98) - lbl_8217BA98;
  param_1[8] = (param_1[8] + fVar1) - fVar1;
  return;
}

