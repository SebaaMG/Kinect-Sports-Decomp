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


int fn_82825030(int param_1,longlong param_2,longlong param_3,byte *param_4,uint param_5,
                 int param_6,int param_7,int param_8)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 *in_stack_00000054;
  
  while (iVar6 = param_7, uVar8 = iVar6 - param_6, 1 < (int)uVar8) {
    param_7 = ((int)uVar8 >> 1) + (uint)((int)uVar8 < 0 && (uVar8 & 1) != 0) + param_6;
    uVar7 = (ulonglong)*(uint *)(param_7 * 4 + param_1);
    uVar2 = param_3 - uVar7;
    if ((int)param_5 <= (int)uVar2) {
      uVar2 = (ulonglong)param_5;
    }
    lVar3 = uVar7 + param_2;
    lVar11 = 0;
    if ((uVar2 & 0xffffffff) != 0) {
      iVar1 = (int)lVar3;
      pbVar12 = param_4;
      do {
        lVar11 = (ulonglong)*(byte *)lVar3 - (ulonglong)*pbVar12;
        if (lVar11 != 0) break;
        lVar3 = lVar3 + 1;
        pbVar12 = pbVar12 + 1;
      } while ((int)lVar3 != iVar1 + (int)uVar2);
    }
    if ((int)lVar11 < 0) {
      param_6 = param_7;
      param_7 = iVar6;
    }
  }
  iVar13 = 0;
  uVar8 = *(uint *)(param_6 * 4 + param_1);
  lVar3 = param_3 - (ulonglong)uVar8;
  iVar1 = (int)param_2;
  if (0 < lVar3) {
    do {
      if (((int)param_5 <= iVar13) || (*(byte *)(uVar8 + iVar13 + iVar1) != param_4[iVar13])) break;
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)lVar3);
  }
  iVar9 = 0;
  uVar8 = *(uint *)(iVar6 * 4 + param_1);
  lVar3 = param_3 - (ulonglong)uVar8;
  if (0 < lVar3) {
    do {
      if (((int)param_5 <= iVar9) || (*(byte *)(uVar8 + iVar9 + iVar1) != param_4[iVar9])) break;
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)lVar3);
  }
  if (iVar9 < iVar13) {
    iVar6 = param_6;
    iVar9 = iVar13;
  }
  piVar5 = (int *)(iVar6 * 4 + param_1);
  iVar13 = iVar6;
  piVar10 = piVar5;
  if (*piVar5 < param_8) {
    do {
      if (iVar13 < 1) break;
      piVar10 = piVar10 + -1;
      iVar13 = iVar13 + -1;
    } while (*piVar10 < param_8);
    do {
      if ((int)param_3 <= iVar6) break;
      piVar5 = piVar5 + 1;
      iVar6 = iVar6 + 1;
    } while (*piVar5 < param_8);
    iVar4 = 0;
    uVar8 = *(uint *)(iVar13 * 4 + param_1);
    lVar3 = param_3 - (ulonglong)uVar8;
    if (0 < lVar3) {
      do {
        if (((int)param_5 <= iVar4) || (*(byte *)(uVar8 + iVar4 + iVar1) != param_4[iVar4])) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)lVar3);
    }
    iVar9 = 0;
    uVar8 = *(uint *)(iVar6 * 4 + param_1);
    param_3 = param_3 - (ulonglong)uVar8;
    if (0 < param_3) {
      do {
        if (((int)param_5 <= iVar9) || (*(byte *)(uVar8 + iVar9 + iVar1) != param_4[iVar9])) break;
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)param_3);
    }
    if (iVar9 < iVar4) {
      iVar6 = iVar13;
      iVar9 = iVar4;
    }
  }
  *in_stack_00000054 = *(undefined4 *)(iVar6 * 4 + param_1);
  return iVar9;
}

