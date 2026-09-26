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
extern unsigned int *auStack_80;
extern unsigned int fStack_84;
extern int fn_82F5A730();
extern int fn_82F5A7D0();
extern int fn_82F5A8C0();
extern int fn_82F5AC80();
extern unsigned int lbl_82165FD8;
extern unsigned int lbl_821AAD20;


void fn_82F5AF98(double param_1,uint *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  uint uVar5;
  float *pfVar6;
  uint *puVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fStack_84;
  undefined1 auStack_80 [128];
  
  lVar11 = 0x14;
  puVar7 = param_2 + 0x73;
  do {
    puVar7 = puVar7 + 1;
    *puVar7 = 0x3f800000;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  if (*(int *)(param_4 * 0x1c0 + param_3 + 0x30) == 2) {
    if ((*param_2 & 1) != 0) {
      fn_82F5A730(param_2,param_3,param_4,auStack_80);
      pfVar8 = &fStack_84;
      pfVar6 = (float *)(param_2 + 0x73);
      lVar11 = 0x14;
      do {
        pfVar1 = pfVar6 + 1;
        pfVar8 = pfVar8 + 1;
        pfVar6 = pfVar6 + 1;
        *pfVar6 = *pfVar1 * *pfVar8;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if ((*param_2 >> 1 & 1) != 0) {
      fn_82F5A7D0(param_2,param_3,param_4,auStack_80);
      pfVar8 = &fStack_84;
      pfVar6 = (float *)(param_2 + 0x73);
      lVar11 = 0x14;
      do {
        pfVar1 = pfVar6 + 1;
        pfVar8 = pfVar8 + 1;
        pfVar6 = pfVar6 + 1;
        *pfVar6 = *pfVar1 * *pfVar8;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if ((*param_2 >> 2 & 1) != 0) {
      fn_82F5AC80(param_2,param_3,param_4,auStack_80);
      pfVar8 = &fStack_84;
      pfVar6 = (float *)(param_2 + 0x73);
      lVar11 = 0x14;
      do {
        pfVar1 = pfVar6 + 1;
        pfVar8 = pfVar8 + 1;
        pfVar6 = pfVar6 + 1;
        *pfVar6 = *pfVar1 * *pfVar8;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if ((*param_2 >> 3 & 1) != 0) {
      fn_82F5A8C0(param_2,param_3,param_4,auStack_80);
      pfVar8 = &fStack_84;
      pfVar6 = (float *)(param_2 + 0x73);
      lVar11 = 0x14;
      do {
        pfVar1 = pfVar6 + 1;
        pfVar8 = pfVar8 + 1;
        pfVar6 = pfVar6 + 1;
        *pfVar6 = *pfVar1 * *pfVar8;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  fVar3 = lbl_821AAD20;
  pfVar8 = (float *)(param_2 + 0x9b);
  piVar9 = (int *)&lbl_82165FD8;
  lVar11 = 3;
  do {
    uVar5 = 0;
    lVar12 = 0x14;
    fVar2 = fVar3;
    piVar4 = piVar9;
    pfVar6 = (float *)(param_2 + 0x74);
    do {
      if (*piVar4 != 0) {
        uVar5 = uVar5 + 1;
        fVar2 = *pfVar6 + fVar2;
      }
      pfVar6 = pfVar6 + 1;
      piVar4 = piVar4 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar11 = lVar11 + -1;
    piVar9 = piVar9 + 1;
    pfVar8 = pfVar8 + 1;
    *pfVar8 = fVar2 / (float)uVar5;
  } while (lVar11 != 0);
  lVar11 = 0x14;
  iVar10 = 0;
  pfVar8 = (float *)(param_2 + 0x88);
  do {
    if (*(int *)((param_4 * 0x70 + 100 + iVar10) * 4 + param_3) == 2) {
      *pfVar8 = fVar3;
    }
    else {
      *pfVar8 = (float)((double)*pfVar8 + param_1);
    }
    iVar10 = iVar10 + 1;
    pfVar8 = pfVar8 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  return;
}

