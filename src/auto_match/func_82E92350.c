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
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8207F4E0;
extern unsigned int lbl_8215F718;
extern unsigned int uStack_10;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E92350(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uStack_10;
  
  fVar10 = lbl_8215F718;
  fVar6 = lbl_8207F4E0;
  fVar9 = lbl_82002C5C;
  if ((uint)param_1[7] < 2) {
    uVar12 = (ulonglong)uStack_10;
  }
  else {
    uVar12 = (ulonglong)(uint)param_1[5];
    if (uVar12 == 0) {
      uVar12 = (ulonglong)(uint)param_1[1];
    }
    uVar11 = uVar12 - 1;
    if ((uVar11 & 0xffffffff) == 0) {
      uVar12 = (ulonglong)(uint)param_1[1] - 1;
    }
    else {
      uVar12 = uVar12 - 2;
    }
    iVar3 = (int)((uVar11 + (uVar11 & 0x3fffffff) * 4 & 0xffffffff) << 3);
    iVar4 = (int)((uVar12 + (uVar12 & 0x3fffffff) * 4 & 0xffffffff) << 3);
    pfVar1 = *(float **)(*param_1 + iVar3 + 4);
    pfVar2 = *(float **)(iVar4 + *param_1 + 4);
    fVar5 = *pfVar2 * lbl_8215F718 + *pfVar1 * lbl_8207F4E0;
    *pfVar2 = fVar5;
    *pfVar1 = (*pfVar1 + fVar5) * fVar9;
    iVar3 = *(int *)(*param_1 + iVar3 + 4);
    iVar4 = *(int *)(iVar4 + *param_1 + 4);
    fVar5 = *(float *)(iVar3 + 8) * fVar6 + *(float *)(iVar4 + 8) * fVar10;
    *(float *)(iVar4 + 8) = fVar5;
    *(float *)(iVar3 + 8) = (fVar5 + *(float *)(iVar3 + 8)) * fVar9;
  }
  uVar11 = uVar12;
  if (2 < (uint)param_1[7]) {
    if ((uVar12 & 0xffffffff) == 0) {
      uVar11 = (ulonglong)(uint)param_1[1];
    }
    uVar11 = uVar11 - 1;
    iVar4 = (int)((uVar12 + (uVar12 & 0x3fffffff) * 4 & 0xffffffff) << 3);
    iVar3 = (int)((uVar11 + (uVar11 & 0x3fffffff) * 4 & 0xffffffff) << 3);
    pfVar1 = *(float **)(iVar3 + *param_1 + 4);
    pfVar1[1] = **(float **)(*param_1 + iVar4 + 4) - *pfVar1;
    iVar3 = *(int *)(iVar3 + *param_1 + 4);
    *(float *)(iVar3 + 0xc) = *(float *)(*(int *)(*param_1 + iVar4 + 4) + 8) - *(float *)(iVar3 + 8)
    ;
  }
  if ((uint)param_1[7] < 4) {
    return;
  }
  uVar12 = uVar11;
  if ((uVar11 & 0xffffffff) == 0) {
    uVar12 = (ulonglong)(uint)param_1[1];
  }
  iVar7 = (int)((uVar11 + (uVar11 & 0x3fffffff) * 4 & 0xffffffff) << 3);
  iVar8 = (int)(((uVar12 - 1) + (uVar12 - 1 & 0x3fffffff) * 4 & 0xffffffff) << 3);
  iVar3 = *(int *)(*param_1 + iVar7 + 4);
  iVar4 = *(int *)(iVar8 + *param_1 + 4);
  fVar5 = *(float *)(iVar4 + 4) * fVar10 + *(float *)(iVar3 + 4) * fVar6;
  *(float *)(iVar4 + 4) = fVar5;
  *(float *)(iVar3 + 4) = (fVar5 + *(float *)(iVar3 + 4)) * fVar9;
  iVar3 = *(int *)(iVar8 + *param_1 + 4);
  iVar4 = *(int *)(*param_1 + iVar7 + 4);
  fVar6 = *(float *)(iVar3 + 0xc) * fVar10 + *(float *)(iVar4 + 0xc) * fVar6;
  *(float *)(iVar3 + 0xc) = fVar6;
  *(float *)(iVar4 + 0xc) = (*(float *)(iVar4 + 0xc) + fVar6) * fVar9;
  return;
}

