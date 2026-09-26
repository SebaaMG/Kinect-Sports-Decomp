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
extern int fn_82F68CC0();


void fn_82CA4078(undefined8 param_1,longlong param_2,int param_3,int param_4,longlong param_5,
                  int param_6,int param_7,longlong param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int in_stack_00000054;
  uint in_stack_0000005c;
  int in_stack_00000064;
  
  fn_82F68CC0(param_2,param_5,0x10);
  uVar9 = (ulonglong)in_stack_0000005c;
  fn_82F68CC0(param_2 + uVar9,param_5 + param_8,0x10);
  lVar4 = param_5 + param_8 + param_8;
  lVar3 = param_2 + uVar9 + uVar9;
  puVar2 = (undefined1 *)(param_6 + -1);
  puVar1 = (undefined1 *)(param_3 + -1);
  lVar10 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  puVar2 = (undefined1 *)(param_7 + -1);
  puVar1 = (undefined1 *)(param_4 + -1);
  lVar10 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  fn_82F68CC0(lVar3,lVar4,0x10);
  lVar4 = lVar4 + param_8;
  lVar3 = lVar3 + uVar9;
  fn_82F68CC0(lVar3,lVar4,0x10);
  lVar4 = lVar4 + param_8;
  lVar3 = lVar3 + uVar9;
  puVar2 = (undefined1 *)(param_6 + in_stack_00000054 + -1);
  puVar1 = (undefined1 *)(param_3 + in_stack_00000064 + -1);
  lVar10 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar6 = param_6 + in_stack_00000054 + in_stack_00000054;
  iVar5 = param_3 + in_stack_00000064 + in_stack_00000064;
  puVar2 = (undefined1 *)(param_7 + in_stack_00000054 + -1);
  puVar1 = (undefined1 *)(param_4 + in_stack_00000064 + -1);
  lVar10 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar8 = param_7 + in_stack_00000054 + in_stack_00000054;
  iVar7 = param_4 + in_stack_00000064 + in_stack_00000064;
  fn_82F68CC0(lVar3,lVar4,0x10);
  lVar4 = lVar4 + param_8;
  lVar3 = lVar3 + uVar9;
  fn_82F68CC0(lVar3,lVar4,0x10);
  lVar4 = lVar4 + param_8;
  lVar3 = lVar3 + uVar9;
  puVar2 = (undefined1 *)(iVar6 + -1);
  puVar1 = (undefined1 *)(iVar5 + -1);
  lVar10 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar6 = iVar6 + in_stack_00000054;
  iVar5 = iVar5 + in_stack_00000064;
  puVar2 = (undefined1 *)(iVar8 + -1);
  puVar1 = (undefined1 *)(iVar7 + -1);
  lVar10 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar8 = iVar8 + in_stack_00000054;
  iVar7 = iVar7 + in_stack_00000064;
  fn_82F68CC0(lVar3,lVar4,0x10);
  lVar4 = lVar4 + param_8;
  lVar3 = lVar3 + uVar9;
  fn_82F68CC0(lVar3,lVar4,0x10);
  lVar4 = lVar4 + param_8;
  lVar3 = lVar3 + uVar9;
  puVar2 = (undefined1 *)(iVar6 + -1);
  puVar1 = (undefined1 *)(iVar5 + -1);
  lVar10 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar6 = iVar6 + in_stack_00000054;
  iVar5 = iVar5 + in_stack_00000064;
  puVar2 = (undefined1 *)(iVar8 + -1);
  puVar1 = (undefined1 *)(iVar7 + -1);
  lVar10 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar8 = iVar8 + in_stack_00000054;
  iVar7 = iVar7 + in_stack_00000064;
  fn_82F68CC0(lVar3,lVar4,0x10);
  lVar4 = lVar4 + param_8;
  lVar3 = lVar3 + uVar9;
  fn_82F68CC0(lVar3,lVar4,0x10);
  lVar4 = lVar4 + param_8;
  lVar3 = lVar3 + uVar9;
  puVar2 = (undefined1 *)(iVar6 + -1);
  puVar1 = (undefined1 *)(iVar5 + -1);
  lVar10 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar6 = iVar6 + in_stack_00000054;
  iVar5 = iVar5 + in_stack_00000064;
  puVar2 = (undefined1 *)(iVar8 + -1);
  puVar1 = (undefined1 *)(iVar7 + -1);
  lVar10 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar8 = iVar8 + in_stack_00000054;
  iVar7 = iVar7 + in_stack_00000064;
  fn_82F68CC0(lVar3,lVar4,0x10);
  lVar4 = lVar4 + param_8;
  lVar3 = lVar3 + uVar9;
  fn_82F68CC0(lVar3,lVar4,0x10);
  lVar4 = lVar4 + param_8;
  lVar3 = lVar3 + uVar9;
  puVar2 = (undefined1 *)(iVar6 + -1);
  puVar1 = (undefined1 *)(iVar5 + -1);
  lVar10 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar6 = iVar6 + in_stack_00000054;
  iVar5 = iVar5 + in_stack_00000064;
  puVar2 = (undefined1 *)(iVar8 + -1);
  puVar1 = (undefined1 *)(iVar7 + -1);
  lVar10 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar8 = iVar8 + in_stack_00000054;
  iVar7 = iVar7 + in_stack_00000064;
  fn_82F68CC0(lVar3,lVar4,0x10);
  lVar4 = lVar4 + param_8;
  lVar3 = lVar3 + uVar9;
  fn_82F68CC0(lVar3,lVar4,0x10);
  lVar4 = lVar4 + param_8;
  lVar3 = lVar3 + uVar9;
  puVar2 = (undefined1 *)(iVar6 + -1);
  puVar1 = (undefined1 *)(iVar5 + -1);
  lVar10 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  puVar2 = (undefined1 *)(iVar8 + -1);
  puVar1 = (undefined1 *)(iVar7 + -1);
  lVar10 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  fn_82F68CC0(lVar3,lVar4,0x10);
  fn_82F68CC0(lVar3 + uVar9,lVar4 + param_8,0x10);
  puVar2 = (undefined1 *)(iVar6 + in_stack_00000054 + -1);
  puVar1 = (undefined1 *)(iVar5 + in_stack_00000064 + -1);
  lVar3 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar2 = (undefined1 *)(iVar8 + in_stack_00000054 + -1);
  puVar1 = (undefined1 *)(iVar7 + in_stack_00000064 + -1);
  lVar3 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

