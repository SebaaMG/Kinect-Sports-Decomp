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
extern int fn_8265CA60();
extern int fn_82F68CC0();
extern unsigned int lbl_82191118;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821954C8;
extern unsigned int lbl_821A7E74;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


undefined4 * fn_8226AE28(undefined4 *param_1,int param_2,int param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  double dVar13;
  
  param_1[0xc] = param_3;
  param_1[0xd] = param_2;
  uVar6 = lbl_821CC160;
  uVar8 = lbl_82193E50;
  param_1[2] = lbl_821CC160;
  param_1[3] = uVar6;
  dVar13 = (double)lbl_821CA460;
  param_1[4] = lbl_821CA460;
  param_1[5] = uVar8;
  param_1[7] = uVar6;
  param_1[8] = uVar6;
  param_1[9] = uVar6;
  param_1[6] = 0xffffffff;
  param_1[10] = uVar6;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &lbl_821A7E74;
  fn_82F68CC0(param_1 + 0xe,param_4,0x70);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  uVar12 = (longlong)param_2 * (longlong)param_3;
  lVar7 = uVar12 * 0x18;
  if (0xaaaaaaa < (uVar12 & 0xffffffff)) {
    lVar7 = -1;
  }
  uVar8 = fn_8265CA60(lVar7);
  param_1[0xb] = uVar8;
  fVar5 = lbl_82193AF0;
  fVar4 = lbl_82192604;
  fVar3 = lbl_82191118;
  iVar9 = 0;
  if (0 < (int)uVar12) {
    iVar11 = 0;
    do {
      fVar1 = (float)param_1[0xe];
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      iVar9 = iVar9 + 1;
      *(float *)(param_1[0xb] + iVar11) =
           ((float)param_1[0xf] - fVar1) *
           (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar13) + fVar1;
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(int *)(param_1[0xb] + iVar11 + 0xc) =
           (int)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar13) * fVar4);
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(int *)(param_1[0xb] + iVar11 + 0x10) =
           (int)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar13) * fVar4);
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(int *)(param_1[0xb] + iVar11 + 0x14) =
           (int)((float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar13) * fVar4);
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(float *)(param_1[0xb] + iVar11 + 4) =
           (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar13) * fVar3 + fVar5;
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(float *)(param_1[0xb] + iVar11 + 8) =
           (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar13) * fVar3 + fVar5;
      iVar10 = param_1[0xb] + iVar11;
      fVar1 = *(float *)(iVar10 + 4);
      iVar11 = iVar11 + 0x18;
      fVar2 = 1.0 / SQRT(fVar1 * fVar1 + *(float *)(iVar10 + 8) * *(float *)(iVar10 + 8));
      *(float *)(iVar10 + 4) = fVar1 * fVar2;
      *(float *)(iVar10 + 8) = *(float *)(iVar10 + 8) * fVar2;
    } while (iVar9 < (int)uVar12);
  }
  uVar8 = lbl_821954C8;
  param_1[0x2a] = lbl_821954C8;
  param_1[0x2b] = uVar8;
  return param_1;
}

