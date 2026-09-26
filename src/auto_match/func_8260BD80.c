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
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_82195634;


bool fn_8260BD80(longlong param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  lVar10 = (ulonglong)*(uint *)param_1 * 0x28 + param_1;
  uVar11 = (ulonglong)*(uint *)param_1 - 1;
  iVar4 = (int)lVar10 + 4;
  if ((longlong)uVar11 < 0) {
    uVar11 = ((((-uVar11 - 1 & 0xffffffff) >> 1) + 1) * 2 & 0xfffffffe) + uVar11;
  }
  if (1 < (int)uVar11) {
    uVar11 = uVar11 - (uVar11 & 0xfffffffe);
  }
  param_1 = uVar11 * 0x28 + param_1;
  iVar6 = (int)param_1;
  iVar3 = iVar6 + 4;
  if (*(int *)((int)lVar10 + 0x10) == *(int *)(iVar6 + 0x10)) {
    uVar8 = 0;
    lVar9 = lVar10 + 0x24;
    do {
      fVar2 = *(float *)((iVar3 - iVar4) + (int)(float *)lVar9);
      fVar1 = *(float *)lVar9;
      if ((fVar1 < fVar2 - lbl_82193CC0) || (fVar2 + lbl_82193CC0 < fVar1)) goto LAB_8260bdd8;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while (uVar8 < 2);
    param_1 = param_1 + 0x18;
    lVar10 = lVar10 + 0x14;
    uVar8 = 0;
    do {
      pfVar5 = (float *)param_1;
      fVar1 = *(float *)lVar10 - pfVar5[-1];
      if ((((fVar1 < lbl_82195634) || (lbl_82193CC0 < fVar1)) ||
          (fVar1 = *(float *)((iVar4 - iVar3) + (int)pfVar5) - *pfVar5, fVar1 < lbl_82195634)) ||
         (lbl_82193CC0 < fVar1)) goto LAB_8260bdd8;
      uVar8 = uVar8 + 1;
      param_1 = param_1 + 8;
      lVar10 = lVar10 + 8;
    } while (uVar8 < 2);
    bVar7 = true;
  }
  else {
LAB_8260bdd8:
    bVar7 = false;
  }
  return !bVar7;
}

