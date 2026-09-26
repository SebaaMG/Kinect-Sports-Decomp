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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82057518;
extern unsigned int lbl_82186E18;
extern unsigned int lbl_82188080;
extern unsigned int lbl_821AAD20;


void fn_830B1FC8(int param_1,float *param_2,int param_3)

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
  int iVar13;
  float *pfVar14;
  bool bVar15;
  
  fVar3 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x84);
  fVar1 = *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x80);
  *(float *)(param_3 + 0x1c) = fVar3;
  fVar11 = lbl_82002AE0;
  *(float *)(param_3 + 0x20) = fVar1;
  fVar12 = lbl_82057518;
  if (fVar1 * fVar1 + fVar3 * fVar3 < fVar11) {
    *(float *)(param_1 + 0x98) = lbl_821AAD20;
    return;
  }
  iVar13 = 0;
  fVar3 = param_2[0x11] * fVar3;
  fVar2 = *param_2 * fVar1;
  fVar4 = fVar2 * fVar2 + fVar3 * fVar3;
  pfVar14 = param_2;
  fVar5 = lbl_821AAD20;
  fVar7 = lbl_821AAD20;
  fVar10 = lbl_821AAD20;
  while (fVar6 = fVar4, fVar9 = fVar2, fVar8 = fVar3, fVar6 <= fVar11) {
    iVar13 = iVar13 + 1;
    pfVar14 = pfVar14 + 1;
    if (0xf < iVar13) break;
    fVar3 = param_2[0x10] * fVar8;
    fVar2 = *pfVar14 * fVar1;
    fVar5 = fVar6;
    fVar7 = fVar8;
    fVar10 = fVar9;
    fVar4 = fVar2 * fVar2 + fVar3 * fVar3;
  }
  fVar3 = (SQRT(fVar6) - fVar11) - (SQRT(fVar5) - fVar11);
  if (ABS(fVar3) < lbl_82057518) {
    fVar3 = lbl_82057518;
  }
  fVar1 = *(float *)(param_1 + 0x80);
  fVar2 = *(float *)(param_1 + 0x84);
  fVar6 = (fVar11 / fVar3) * (SQRT(fVar6) - fVar11);
  fVar4 = *(float *)(param_1 + 0x60) * *(float *)(param_1 + 0x60) +
          *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x68);
  fVar3 = -((fVar11 / fVar3) * (SQRT(fVar5) - fVar11));
  fVar5 = fVar3 * fVar9 + fVar6 * fVar10;
  bVar15 = ABS(fVar4) < lbl_82057518;
  fVar3 = fVar6 * fVar7 + fVar3 * fVar8;
  if (fVar5 - lbl_82188080 < 0.0) {
    fVar5 = lbl_82188080;
  }
  if (fVar3 - lbl_82188080 < 0.0) {
    fVar3 = lbl_82188080;
  }
  fVar7 = lbl_82186E18;
  if (fVar5 - lbl_82186E18 < 0.0) {
    fVar7 = fVar5;
  }
  fVar5 = lbl_82186E18;
  if (fVar3 - lbl_82186E18 < 0.0) {
    fVar5 = fVar3;
  }
  fVar7 = fVar7 * *(float *)(param_1 + 0x88);
  *(float *)(param_1 + 0x80) = fVar7;
  fVar5 = fVar5 * *(float *)(param_1 + 0x8c);
  *(float *)(param_1 + 0x84) = fVar5;
  *(float *)(param_1 + 0x98) = fVar1 - fVar7;
  if (bVar15) {
    fVar4 = fVar12;
  }
  fVar3 = *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x88);
  fVar1 = *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x8c) * (fVar2 - fVar5);
  *(float *)(param_3 + 8) = SQRT((fVar1 * fVar1 + fVar3 * fVar3) * (fVar11 / fVar4));
  return;
}

