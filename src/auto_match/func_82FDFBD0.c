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
extern unsigned int lbl_82021544;
extern unsigned int lbl_82175388;


void fn_82FDFBD0(uint param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  
  fVar5 = lbl_82021544;
  fVar1 = *(float *)(param_2 + 0x18);
  uVar9 = 0x2ee007;
  uVar7 = 0;
  if (3 < (int)param_1) {
    pfVar12 = (float *)(param_3 + -4);
    do {
      fVar6 = lbl_82175388;
      uVar10 = uVar9 * 0xbb38435 + 0x3619636b;
      uVar7 = uVar7 + 4;
      fVar3 = fVar1 * *(float *)(param_2 + 0x14) * fVar5;
      uVar11 = uVar10 * 0xbb38435 + 0x3619636b;
      uVar13 = uVar11 * 0xbb38435 + 0x3619636b;
      uVar9 = uVar13 * 0xbb38435 + 0x3619636b;
      fVar2 = (float)uVar11 * lbl_82175388;
      fVar4 = (float)uVar13 * lbl_82175388;
      pfVar12[1] = (float)uVar10 * lbl_82175388 * *(float *)(param_2 + 0x1c) * fVar5 * fVar1 + fVar1
      ;
      fVar1 = *(float *)(param_2 + 0x14);
      pfVar12[2] = fVar2 * *(float *)(param_2 + 0x1c) * fVar5 * fVar3 + fVar3;
      fVar2 = *(float *)(param_2 + 0x14);
      fVar3 = fVar3 * fVar1 * fVar5;
      pfVar12[3] = fVar4 * *(float *)(param_2 + 0x1c) * fVar5 * fVar3 + fVar3;
      fVar1 = *(float *)(param_2 + 0x14);
      fVar2 = fVar3 * fVar2 * fVar5;
      pfVar12 = pfVar12 + 4;
      *pfVar12 = (float)uVar9 * fVar6 * *(float *)(param_2 + 0x1c) * fVar5 * fVar2 + fVar2;
      fVar1 = fVar2 * fVar1 * fVar5;
    } while (uVar7 < param_1 - 3);
  }
  if (uVar7 < param_1) {
    iVar8 = param_1 - uVar7;
    pfVar12 = (float *)(uVar7 * 4 + param_3 + -4);
    do {
      fVar2 = *(float *)(param_2 + 0x14);
      uVar9 = uVar9 * 0xbb38435 + 0x3619636b;
      pfVar12 = pfVar12 + 1;
      *pfVar12 = (float)uVar9 * lbl_82175388 * *(float *)(param_2 + 0x1c) * fVar5 * fVar1 + fVar1;
      iVar8 = iVar8 + -1;
      fVar1 = fVar1 * fVar2 * fVar5;
    } while (iVar8 != 0);
  }
  fn_82F65FE0(param_3,param_1,4,0xffffffff82fdf6f0);
  return;
}

