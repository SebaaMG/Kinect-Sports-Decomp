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


void fn_8309E7B0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_r0;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 < *(int *)(param_2 + 0x10)) {
    iVar6 = *(int *)(param_2 + 0xc);
    *(int *)(param_2 + 0x14) = iVar1 + 1;
    *(int *)(param_2 + 0xc) = iVar6 + 0x30;
  }
  else {
    iVar6 = *(int *)(param_2 + 8);
    if (1 < iVar1) {
      lVar5 = (ulonglong)*(uint *)(param_2 + 0x14) - 1;
      iVar1 = iVar6;
      do {
        if (*(float *)(iVar6 + 0x1c) < *(float *)(iVar1 + 0x4c)) {
          iVar6 = iVar1 + 0x30;
        }
        lVar5 = lVar5 + -1;
        iVar1 = iVar1 + 0x30;
      } while (lVar5 != 0);
    }
    if (*(float *)(iVar6 + 0x1c) <= *(float *)(param_1 + 0x1c)) {
      return;
    }
  }
  puVar2 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (undefined4 *)(in_r0 + iVar6 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  puVar2 = (undefined4 *)(param_1 + 0x10U & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (undefined4 *)(iVar6 + 0x10U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  iVar1 = *(int *)(param_1 + 0x20);
  for (iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc))
  {
    iVar1 = iVar4;
  }
  *(int *)(iVar6 + 0x20) = iVar1;
  iVar1 = *(int *)(param_1 + 0x24);
  for (iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc))
  {
    iVar1 = iVar4;
  }
  *(int *)(iVar6 + 0x28) = iVar1;
  *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 4);
  *(undefined4 *)(iVar6 + 0x2c) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 4);
  if (*(float *)(param_2 + 4) <= *(float *)(param_1 + 0x1c)) {
    return;
  }
  *(float *)(param_2 + 4) = *(float *)(param_1 + 0x1c);
  return;
}

