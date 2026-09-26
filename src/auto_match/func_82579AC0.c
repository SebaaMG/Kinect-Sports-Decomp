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
extern unsigned int lbl_82195530;
extern unsigned int lbl_821CC160;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


int fn_82579AC0(double param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  int in_r0;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar8;
  float fVar9;
  float afStack_10 [4];
  
  iVar5 = 0;
  fVar2 = lbl_82195530;
  if ((double)lbl_821CC160 < param_1) {
    fVar2 = (float)(param_1 * param_1);
  }
  piVar7 = *(int **)(param_2 + 0x310);
  if (*(int **)(param_2 + 0x314) <= piVar7) {
    return iVar5;
  }
  lVar6 = (ulonglong)((uint)((int)*(int **)(param_2 + 0x314) + (-1 - (int)piVar7)) >> 3) + 1;
  do {
    if ((param_4 == 0) || (piVar7[1] == param_4)) {
      iVar1 = *piVar7;
      uVar3 = iVar1 + 0x50U & 0xfffffff0;
      fVar8 = *(float *)(uVar3 + 4);
      fVar9 = *(float *)(uVar3 + 8);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs32,in_vs45); memcpy(in_vs45, &_vt0, 16); }
      fVar8 = fVar8 * fVar8 + 0.0 + fVar9 * fVar9;
      pfVar4 = (float *)((int)afStack_10 + in_r0 & 0xfffffff0);
      *pfVar4 = fVar8;
      pfVar4[1] = fVar8;
      pfVar4[2] = fVar8;
      pfVar4[3] = fVar8;
      if (afStack_10[0] < fVar2) {
        fVar2 = afStack_10[0];
        iVar5 = iVar1;
      }
    }
    piVar7 = piVar7 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return iVar5;
}

