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


void fn_8309C9D8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int in_r0;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 < *(int *)(param_3 + 0x10)) {
    uVar7 = (ulonglong)*(uint *)(param_3 + 0xc);
    *(int *)(param_3 + 0x14) = iVar1 + 1;
    *(uint *)(param_3 + 0xc) = *(uint *)(param_3 + 0xc) + 0x60;
  }
  else {
    uVar7 = (ulonglong)*(uint *)(param_3 + 8);
    if (1 < iVar1) {
      lVar9 = (ulonglong)*(uint *)(param_3 + 0x14) - 1;
      uVar8 = uVar7;
      do {
        uVar8 = uVar8 + 0x60;
        if (*(float *)((int)uVar7 + 0x10) < *(float *)((int)uVar8 + 0x10)) {
          uVar7 = uVar8;
        }
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (*(float *)((int)uVar7 + 0x10) <= *(float *)(param_2 + 0x10)) {
      return;
    }
  }
  iVar1 = (int)uVar7;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  puVar3 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar11 = puVar3[1];
  uVar12 = puVar3[2];
  uVar13 = puVar3[3];
  puVar4 = (undefined4 *)(in_r0 + iVar1 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar11;
  puVar4[2] = uVar12;
  puVar4[3] = uVar13;
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  if (*(int *)(param_3 + 0x18) == 0) {
    iVar6 = *(int *)(param_1 + 0xc);
    iVar2 = param_1;
    while (iVar5 = iVar6, iVar5 != 0) {
      iVar2 = iVar5;
      iVar6 = *(int *)(iVar5 + 0xc);
    }
    *(int *)(iVar1 + 0x50) = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x50) = *(int *)(param_3 + 0x18);
  }
  lVar9 = 0;
  for (iVar2 = *(int *)(param_1 + 0xc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
    lVar9 = lVar9 + 1;
  }
  *(undefined4 *)((int)((lVar9 + 8U & 0xffffffff) << 2) + iVar1) = 0xffffffff;
  if (lVar9 + -1 < 0) {
    return;
  }
  lVar10 = (lVar9 + 8U & 0x3fffffff) * 4 + uVar7;
  do {
    lVar10 = lVar10 + -4;
    *(undefined4 *)lVar10 = *(undefined4 *)(param_1 + 4);
    param_1 = *(int *)(param_1 + 0xc);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  return;
}

