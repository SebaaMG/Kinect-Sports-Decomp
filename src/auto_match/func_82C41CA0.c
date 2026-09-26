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


void fn_82C41CA0(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  uint *param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int aiStack_1d0 [116];
  
  lVar6 = 0;
  if (0 < param_3) {
    piVar4 = aiStack_1d0;
    do {
      if (param_5 <= (int)lVar6) break;
      *piVar4 = 0;
      if (-1 < (int)lVar6) {
        lVar8 = lVar6 + 1;
        piVar1 = (int *)(param_2 + -4);
        piVar3 = (int *)((int)piVar4 + (param_4 - (int)aiStack_1d0) + 4);
        do {
          piVar3 = piVar3 + -1;
          piVar1 = piVar1 + 1;
          *piVar4 = (int)((longlong)*piVar3 * (longlong)*piVar1 >> 0x1e) + *piVar4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      lVar6 = lVar6 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)lVar6 < param_3);
  }
  uVar5 = param_3 + param_5;
  iVar7 = ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
  if (param_3 < iVar7) {
    piVar4 = aiStack_1d0 + param_3;
    iVar7 = iVar7 - param_3;
    do {
      *piVar4 = 0;
      if (0 < param_3) {
        piVar1 = (int *)(param_2 + -4);
        piVar3 = (int *)((int)piVar4 + (param_4 - (int)aiStack_1d0) + 4);
        iVar9 = param_3;
        do {
          piVar3 = piVar3 + -1;
          piVar1 = piVar1 + 1;
          *piVar4 = (int)((longlong)*piVar3 * (longlong)*piVar1 >> 0x1e) + *piVar4;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar7 = iVar7 + -1;
      piVar4 = piVar4 + 1;
    } while (iVar7 != 0);
  }
  uVar5 = uVar5 - 1;
  iVar7 = 0;
  *param_7 = uVar5;
  if (0 < (longlong)((longlong)((int)uVar5 >> 1) + (ulonglong)((int)uVar5 < 0 && (uVar5 & 1) != 0)))
  {
    piVar4 = aiStack_1d0;
    do {
      iVar9 = *piVar4;
      *(int *)((param_6 - (int)aiStack_1d0) + (int)piVar4) = iVar9;
      piVar4 = piVar4 + 1;
      iVar2 = *param_7 - iVar7;
      iVar7 = iVar7 + 1;
      *(int *)((iVar2 + -1) * 4 + param_6) = iVar9;
      uVar5 = *param_7;
    } while (iVar7 < (int)(((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0)));
  }
  uVar5 = *param_7;
  iVar7 = ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
  *(int *)(iVar7 * 4 + param_6) = aiStack_1d0[iVar7];
  return;
}

