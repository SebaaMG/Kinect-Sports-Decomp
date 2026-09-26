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
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_823DC240(undefined8 param_1,int param_2,int *param_3)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  int in_r0;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float afStack_60 [4];
  float afStack_50 [4];
  int aiStack_40 [14];
  
  iVar6 = 0;
  lVar7 = 6;
  aiStack_40[0] = 0;
  aiStack_40[2] = 0;
  aiStack_40[5] = 0;
  iVar4 = 0;
  aiStack_40[1] = 1;
  piVar5 = aiStack_40 + 1;
  aiStack_40[3] = 2;
  aiStack_40[4] = 1;
  aiStack_40[6] = 1;
  aiStack_40[7] = 2;
  aiStack_40[8] = 2;
  aiStack_40[9] = 0;
  aiStack_40[10] = 2;
  aiStack_40[0xb] = 1;
  fVar1 = lbl_82195530;
  do {
    uVar2 = piVar5[-1] * 0x10 + param_2 & 0xfffffff0;
    fVar10 = *(float *)(uVar2 + 4);
    fVar11 = *(float *)(uVar2 + 8);
    uVar2 = *piVar5 * 0x10 + param_2 & 0xfffffff0;
    fVar8 = *(float *)(uVar2 + 4);
    fVar9 = *(float *)(uVar2 + 8);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs32,in_vs44); memcpy(in_vs44, &_vt0, 16); }{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs45,in_vs43); memcpy(in_vs43, &_vt1, 16); }
    fVar10 = fVar10 * fVar10 + 0.0 + fVar11 * fVar11;
    fVar8 = fVar8 * fVar8 + 0.0 + fVar9 * fVar9;
    pfVar3 = (float *)((int)afStack_60 + in_r0 & 0xfffffff0);
    *pfVar3 = fVar10;
    pfVar3[1] = fVar10;
    pfVar3[2] = fVar10;
    pfVar3[3] = fVar10;
    pfVar3 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *pfVar3 = fVar8;
    pfVar3[1] = fVar8;
    pfVar3[2] = fVar8;
    pfVar3[3] = fVar8;
    if (afStack_50[0] + afStack_60[0] < fVar1) {
      fVar1 = afStack_50[0] + afStack_60[0];
      iVar4 = iVar6;
    }
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar6 = aiStack_40[iVar4 * 2 + 1];
  *param_3 = aiStack_40[iVar4 * 2];
  param_3[1] = iVar6;
  return 2;
}

