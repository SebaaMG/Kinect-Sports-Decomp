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


void fn_8277C2A0(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  
  uVar7 = (uint)param_2;
  if ((param_3 & 0xffffffff) <= (param_2 & 0xffffffff)) {
    return;
  }
  lVar8 = param_3 - param_2;
  do {
    uVar5 = uVar7 >> 4;
    uVar6 = uVar7 & 0x3f;
    iVar1 = *(int *)(param_1 + 0x98);
    uVar7 = uVar7 + 1;
    piVar9 = (int *)(*(int *)((uVar5 & 0xffffffc) + *(int *)(param_1 + 200)) + uVar6 * 0xc);
    iVar2 = *(int *)(piVar9[1] * 4 + *(int *)(param_1 + 0xb0)) * 4;
    iVar4 = *(int *)(*piVar9 * 4 + *(int *)(param_1 + 0xb0)) * 4;
    uVar3 = *(undefined4 *)(iVar4 + iVar1);
    *(undefined4 *)(iVar4 + iVar1) = *(undefined4 *)(iVar2 + iVar1);
    *(undefined4 *)(iVar2 + iVar1) = uVar3;
    iVar1 = piVar9[1];
    iVar2 = *(int *)(param_1 + 0xb0);
    uVar3 = *(undefined4 *)(*piVar9 * 4 + iVar2);
    *(undefined4 *)(*piVar9 * 4 + iVar2) = *(undefined4 *)(iVar1 * 4 + iVar2);
    *(undefined4 *)(iVar1 * 4 + iVar2) = uVar3;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

