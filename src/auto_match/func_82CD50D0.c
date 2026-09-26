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


void fn_82CD50D0(int param_1,int param_2,int param_3,int param_4,longlong param_5,longlong param_6
                  ,int param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar11 = *(int *)(param_7 + 0x3920);
  param_6 = param_6 - param_5;
  iVar3 = (int)param_5;
  if (iVar11 == 0) {
    iVar6 = *(int *)(param_7 + 0x38fc) * iVar3;
    uVar12 = *(int *)(param_7 + 0x38fc) - *(int *)(param_7 + 0x3890);
    iVar8 = iVar6 >> 1;
    iVar10 = ((int)uVar12 >> 1) + (uint)((int)uVar12 < 0 && (uVar12 & 1) != 0);
    iVar11 = iVar10;
  }
  else {
    uVar12 = *(uint *)(param_7 + 0x3890);
    iVar6 = iVar11 * iVar3;
    iVar5 = ((int)uVar12 >> 1) + (uint)((int)uVar12 < 0 && (uVar12 & 1) != 0);
    iVar8 = *(int *)(param_7 + 0x3924) * iVar3;
    uVar12 = iVar11 - uVar12;
    iVar10 = *(int *)(param_7 + 0x3928) - iVar5;
    iVar11 = *(int *)(param_7 + 0x3924) - iVar5;
  }
  puVar9 = (undefined1 *)(*(int *)(param_7 + 0x38cc) + iVar6 + param_2);
  param_1 = *(int *)(param_7 + 0x389c) * iVar3 + *(int *)(param_7 + 0x38a4) + param_1;
  if (0 < (int)param_6) {
    iVar3 = *(int *)(param_7 + 0x3890);
    puVar4 = (undefined1 *)(*(int *)(param_7 + 0x38d0) + iVar8 + param_3 + -1);
    puVar2 = (undefined1 *)(*(int *)(param_7 + 0x38d4) + iVar8 + param_4 + -1);
    do {
      iVar8 = 0;
      if (0 < iVar3) {
        puVar7 = (undefined1 *)(param_1 + -1);
        do {
          iVar8 = iVar8 + 2;
          puVar7[1] = *puVar9;
          puVar1 = puVar9 + 1;
          puVar9 = puVar9 + 2;
          puVar7[3] = *puVar1;
          puVar4 = puVar4 + 1;
          puVar7[2] = *puVar4;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 4;
          *puVar7 = *puVar2;
          iVar3 = *(int *)(param_7 + 0x3890);
        } while (iVar8 < iVar3);
      }
      puVar9 = puVar9 + uVar12;
      puVar4 = puVar4 + iVar11;
      puVar2 = puVar2 + iVar10;
      param_1 = *(int *)(param_7 + 0x389c) + param_1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}

