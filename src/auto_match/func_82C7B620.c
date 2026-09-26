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


void fn_82C7B620(int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  
  piVar9 = (int *)(param_3 + -4);
  piVar11 = (int *)(((param_4 & 2) * 4 + (param_4 & 1)) * 0x10 + param_1);
  lVar12 = 4;
  piVar10 = piVar11;
  do {
    piVar1 = piVar9 + 1;
    piVar2 = piVar9 + 3;
    piVar3 = piVar9 + 2;
    piVar9 = piVar9 + 4;
    iVar7 = *piVar3 * 0x764 + *piVar9 * 0x310;
    iVar6 = (*piVar2 + *piVar1) * 0x5a8;
    iVar4 = *piVar3 * 0x310 + *piVar9 * -0x764;
    iVar5 = (*piVar1 - *piVar2) * 0x5a8;
    *piVar10 = iVar7 + iVar6 + 0x40 >> 7;
    piVar10[1] = iVar4 + iVar5 + 0x40 >> 7;
    piVar10[2] = (iVar5 - iVar4) + 0x40 >> 7;
    piVar10[3] = (iVar6 - iVar7) + 0x40 >> 7;
    piVar10 = piVar10 + param_2;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  piVar9 = piVar11 + param_2;
  iVar4 = (int)piVar11 - (int)piVar9;
  lVar12 = 4;
  do {
    iVar5 = *(int *)(iVar4 + (int)piVar9);
    iVar8 = *piVar9 * 0x764 + piVar9[param_2 * 2] * 0x310;
    iVar6 = (iVar5 - piVar9[param_2]) * 0x5a8;
    iVar5 = (piVar9[param_2] + iVar5) * 0x5a8;
    iVar7 = *piVar9 * 0x310 + piVar9[param_2 * 2] * -0x764;
    *(int *)(iVar4 + (int)piVar9) = iVar8 + iVar5 + 0x8000 >> 0x10;
    *piVar9 = iVar7 + iVar6 + 0x8000 >> 0x10;
    piVar9[param_2] = (iVar6 - iVar7) + 0x8000 >> 0x10;
    piVar9[param_2 * 2] = (iVar5 - iVar8) + 0x8000 >> 0x10;
    piVar9 = piVar9 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  return;
}

