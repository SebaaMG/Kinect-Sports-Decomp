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


longlong fn_82372F88(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int aiStack_20 [6];
  
  iVar10 = *(int *)(param_1 + 0x260);
  piVar3 = *(int **)**(int **)(param_1 + 8);
  piVar4 = (int *)((int *)**(int **)(param_1 + 8))[1];
  uVar1 = (uint)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  uVar2 = (uint)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
  uVar9 = (ulonglong)uVar1;
  uVar8 = (ulonglong)uVar2;
  if (*(int *)(param_1 + 0x204) == 0) {
    uVar5 = *(uint *)(iVar10 + 0x148);
    uVar6 = *(uint *)(iVar10 + 0x14c);
    aiStack_20[0] = (((int)uVar1 >> 0x1f) - ((int)uVar5 >> 0x1f)) + (uint)(uVar5 <= uVar9);
    aiStack_20[1] = (((int)uVar2 >> 0x1f) - ((int)uVar5 >> 0x1f)) + (uint)(uVar5 <= uVar8);
    aiStack_20[2] =
         (((int)(uVar9 - uVar8) >> 0x1f) - ((int)uVar6 >> 0x1f)) +
         (uint)((ulonglong)uVar6 <= uVar9 - uVar8);
    aiStack_20[3] =
         (((int)(uVar8 - uVar9) >> 0x1f) - ((int)uVar6 >> 0x1f)) +
         (uint)((ulonglong)uVar6 <= uVar8 - uVar9);
    if (((int)uVar1 < *(int *)(iVar10 + 0x150)) && ((int)uVar2 < *(int *)(iVar10 + 0x150))) {
      lVar7 = 0;
      iVar10 = 0;
      do {
        if ((*(int *)((int)aiStack_20 + iVar10) != 0) &&
           (*(int *)((int)aiStack_20 + iVar10 + 8) != 0)) {
          return lVar7;
        }
        iVar10 = iVar10 + 4;
        lVar7 = lVar7 + 1;
      } while (iVar10 < 8);
      lVar7 = -1;
    }
    else {
      lVar7 = (ulonglong)(uVar1 >> 0x1f) + (longlong)((int)uVar2 >> 0x1f) +
              (ulonglong)(uVar9 <= uVar8);
    }
  }
  else {
    lVar7 = 0;
  }
  return lVar7;
}

