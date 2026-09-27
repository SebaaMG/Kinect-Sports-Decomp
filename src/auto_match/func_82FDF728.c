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
extern int fn_82F65FE0();
extern float lbl_82021544;
extern unsigned int lbl_82175388;


void fn_82FDF728(double param_1,double param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                  float *param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  fVar7 = lbl_82021544;
  uVar16 = 0x6b4cc7;
  uVar15 = 0;
  fVar1 = (float)((double)(param_6[1] - *param_6) * param_1) * lbl_82021544 + *param_6;
  fVar2 = ((float)((double)(param_6[4] - param_6[3]) * param_2) * lbl_82021544 + param_6[3]) * fVar1
  ;
  fVar1 = (fVar1 - fVar2) + fVar1;
  if (3 < (int)param_5) {
    fVar3 = fVar1 - fVar2;
    pfVar12 = (float *)(param_7 + -4);
    fVar5 = (float)(param_5 - 1);
    uVar14 = 2;
    do {
      fVar8 = lbl_82175388;
      uVar9 = uVar16 * 0xbb38435 + 0x3619636b;
      uVar10 = uVar9 * 0xbb38435 + 0x3619636b;
      uVar6 = (ulonglong)uVar15;
      uVar11 = uVar10 * 0xbb38435 + 0x3619636b;
      uVar16 = uVar11 * 0xbb38435 + 0x3619636b;
      uVar15 = uVar15 + 4;
      fVar4 = ((float)uVar6 * fVar3) / fVar5 + fVar2;
      pfVar12[1] = (float)uVar9 * lbl_82175388 * param_6[2] * fVar7 * fVar4 + fVar4;
      fVar4 = ((float)(uVar14 - 1) * fVar3) / fVar5 + fVar2;
      pfVar12[2] = (float)uVar10 * fVar8 * param_6[2] * fVar7 * fVar4 + fVar4;
      fVar4 = ((float)uVar14 * fVar3) / fVar5 + fVar2;
      pfVar12[3] = (float)uVar11 * fVar8 * param_6[2] * fVar7 * fVar4 + fVar4;
      fVar4 = ((float)(uVar14 + 1) * fVar3) / fVar5 + fVar2;
      pfVar12 = pfVar12 + 4;
      *pfVar12 = (float)uVar16 * fVar8 * param_6[2] * fVar7 * fVar4 + fVar4;
      uVar14 = uVar14 + 4;
    } while (uVar15 < param_5 - 3);
  }
  if (uVar15 < param_5) {
    iVar13 = param_5 - uVar15;
    pfVar12 = (float *)(uVar15 * 4 + param_7 + -4);
    do {
      uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
      fVar3 = ((float)uVar15 * (fVar1 - fVar2)) / (float)(param_5 - 1) + fVar2;
      pfVar12 = pfVar12 + 1;
      *pfVar12 = (float)uVar16 * lbl_82175388 * param_6[2] * fVar7 * fVar3 + fVar3;
      iVar13 = iVar13 + -1;
      uVar15 = uVar15 + 1;
    } while (iVar13 != 0);
  }
  fn_82F65FE0(param_7,param_5,4,0xffffffff82fdf6f0);
  return;
}

