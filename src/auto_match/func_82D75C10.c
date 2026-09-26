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


void fn_82D75C10(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int in_r0;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (*(float *)(param_1 + 0x2c) <= *(float *)(param_2 + 0x1c)))
  {
    return;
  }
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  iVar3 = *(int *)(param_2 + 0x20);
  for (iVar4 = *(int *)(*(int *)(param_2 + 0x20) + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc))
  {
    iVar3 = iVar4;
  }
  *(int *)(param_1 + 0x30) = iVar3;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(*(int *)(param_2 + 0x20) + 4);
  iVar3 = *(int *)(param_2 + 0x24);
  for (iVar4 = *(int *)(*(int *)(param_2 + 0x24) + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc))
  {
    iVar3 = iVar4;
  }
  *(int *)(param_1 + 0x38) = iVar3;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(*(int *)(param_2 + 0x24) + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x1c);
  return;
}

