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


void fn_82DC0398(undefined1 *param_1,int param_2,int *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar8;
  longlong lVar7;
  undefined1 uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int aiStack_60 [24];
  
  uVar11 = *(uint *)(param_2 + 0x48);
  piVar10 = param_3 + param_4;
  iVar13 = 0;
  iVar12 = 0;
  aiStack_60[1] = *(int *)(param_2 + 0x38);
  aiStack_60[0] = *(int *)(param_2 + 0x28);
  if (param_3 < piVar10) {
    uVar8 = (int)piVar10 + (3 - (int)param_3);
    if (1 < (int)(((int)uVar8 >> 2) + (uint)((int)uVar8 < 0 && (uVar8 & 3) != 0))) {
      lVar7 = (ulonglong)((uint)((int)piVar10 + (-5 - (int)param_3)) >> 3) + 1;
      do {
        iVar2 = *param_3;
        piVar6 = param_3 + 1;
        param_3 = param_3 + 2;
        iVar3 = *(int *)(iVar2 + 0x30);
        iVar4 = *(int *)(*piVar6 + 0x30);
        iVar2 = (*(byte *)(iVar2 + 0x1c) < 5) - 1;
        iVar5 = (*(byte *)(*piVar6 + 0x1c) < 5) - 1;
        uVar1 = *(ushort *)(iVar4 + 0x14);
        iVar13 = (uint)*(ushort *)(iVar3 + 0x18) * 4 + iVar13;
        iVar12 = (uint)*(ushort *)(iVar4 + 0x18) * 4 + iVar12;
        aiStack_60[-iVar2] = (uint)*(ushort *)(iVar3 + 0x14) + aiStack_60[-iVar2];
        aiStack_60[-iVar5] = (uint)uVar1 + aiStack_60[-iVar5];
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (param_3 < piVar10) {
      iVar2 = *(int *)(*param_3 + 0x30);
      iVar3 = (*(byte *)(*param_3 + 0x1c) < 5) - 1;
      uVar11 = (uint)*(ushort *)(iVar2 + 0x18) * 4 + uVar11;
      aiStack_60[-iVar3] = (uint)*(ushort *)(iVar2 + 0x14) + aiStack_60[-iVar3];
    }
    uVar11 = iVar12 + iVar13 + uVar11;
  }
  if (((*(uint *)(param_2 + 0x44) < uVar11) || (*(uint *)(param_2 + 0x24) < aiStack_60[0] + 4U)) ||
     (uVar9 = 1, *(uint *)(param_2 + 0x34) < aiStack_60[1] + 4U)) {
    uVar9 = 0;
  }
  *param_1 = uVar9;
  return;
}

