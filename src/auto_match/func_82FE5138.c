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
extern unsigned int lbl_8200533C;
extern unsigned int lbl_8217BA98;


void fn_82FE5138(uint *param_1,int param_2,int param_3,int param_4,ulonglong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float *pfVar11;
  float fVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  float *pfVar16;
  float *pfVar17;
  uint uVar18;
  uint uVar19;
  
  fVar12 = lbl_8200533C;
  uVar15 = param_1[2];
  fVar1 = (float)param_1[0xc];
  uVar14 = param_1[5];
  fVar2 = (float)param_1[0xf];
  uVar19 = param_1[8];
  fVar3 = (float)param_1[0x12];
  uVar18 = param_1[0xb];
  fVar4 = (float)param_1[0x15];
  if ((param_5 & 0xffffffff) != 0) {
    pfVar16 = (float *)(param_4 + -4);
    pfVar17 = (float *)(param_3 + -4);
    pfVar13 = (float *)(param_2 + -4);
    do {
      uVar7 = param_1[1];
      fVar3 = *(float *)(uVar19 * 4 + param_1[7]) * (float)param_1[0x13] -
              (float)param_1[0x14] * fVar3;
      fVar2 = (float)param_1[0x10] * *(float *)(uVar14 * 4 + param_1[4]) -
              (float)param_1[0x11] * fVar2;
      fVar4 = (float)param_1[0x16] * *(float *)(param_1[10] + uVar18 * 4) -
              fVar4 * (float)param_1[0x17];
      pfVar11 = pfVar17 + 1;
      fVar5 = pfVar16[1];
      pfVar13 = pfVar13 + 1;
      fVar6 = *pfVar13;
      fVar1 = (float)param_1[0xd] * *(float *)(uVar15 * 4 + uVar7) - (float)param_1[0xe] * fVar1;
      fVar10 = (fVar4 + fVar3 + fVar2 + fVar1) * fVar12;
      pfVar17 = pfVar17 + 1;
      *pfVar17 = (((fVar1 - fVar2) + fVar3) - fVar4) + *pfVar11;
      pfVar16 = pfVar16 + 1;
      *pfVar16 = (((fVar2 + fVar1) - fVar3) - fVar4) + fVar5;
      *(float *)(uVar15 * 4 + uVar7) = fVar2 + fVar10 + fVar6;
      uVar7 = *param_1;
      *(float *)(uVar14 * 4 + param_1[4]) = fVar3 + fVar10 + fVar6;
      uVar8 = param_1[3];
      *(float *)(param_1[7] + uVar19 * 4) = fVar4 + fVar10 + fVar6;
      uVar9 = param_1[6];
      uVar15 = -(uint)(uVar7 != uVar15 + 1) & uVar15 + 1;
      uVar14 = -(uint)(uVar8 != uVar14 + 1) & uVar14 + 1;
      *(float *)(param_1[10] + uVar18 * 4) = fVar1 + fVar10 + fVar6;
      uVar19 = -(uint)(uVar9 != uVar19 + 1) & uVar19 + 1;
      uVar18 = -(uint)(param_1[9] != uVar18 + 1) & uVar18 + 1;
      param_5 = param_5 - 1;
    } while (param_5 != 0);
  }
  param_1[2] = uVar15;
  param_1[5] = uVar14;
  param_1[8] = uVar19;
  param_1[0xb] = uVar18;
  fVar12 = lbl_8217BA98;
  fVar3 = fVar3 + lbl_8217BA98;
  fVar4 = fVar4 + lbl_8217BA98;
  fVar1 = fVar1 + lbl_8217BA98;
  param_1[0xf] = (uint)((fVar2 + lbl_8217BA98) - lbl_8217BA98);
  param_1[0x12] = (uint)(fVar3 - fVar12);
  param_1[0x15] = (uint)(fVar4 - fVar12);
  param_1[0xc] = (uint)(fVar1 - fVar12);
  return;
}

