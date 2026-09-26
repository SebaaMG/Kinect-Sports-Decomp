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


void fn_82CA4458(int param_1,longlong param_2,int param_3,int param_4,longlong param_5,int param_6
                  ,int param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int in_stack_00000054;
  
  fn_82F68CC0(param_2,param_5,0x10);
  param_2 = (ulonglong)*(uint *)(param_1 + 0x5690) + param_2;
  fn_82F68CC0(param_2,param_5 + param_8,0x10);
  lVar5 = param_5 + param_8 + param_8;
  puVar4 = (undefined1 *)(param_6 + -1);
  puVar3 = (undefined1 *)(param_3 + -1);
  lVar8 = 8;
  param_2 = (ulonglong)*(uint *)(param_1 + 0x5690) + param_2;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  puVar3 = (undefined1 *)(param_4 + -1);
  param_3 = *(int *)(param_1 + 0x5694) + param_3;
  puVar4 = (undefined1 *)(param_7 + -1);
  lVar8 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  param_4 = *(int *)(param_1 + 0x5698) + param_4;
  fn_82F68CC0(param_2,lVar5,0x10);
  lVar5 = lVar5 + param_8;
  param_2 = (ulonglong)*(uint *)(param_1 + 0x5690) + param_2;
  fn_82F68CC0(param_2,lVar5,0x10);
  lVar5 = lVar5 + param_8;
  puVar4 = (undefined1 *)(param_6 + in_stack_00000054 + -1);
  puVar3 = (undefined1 *)(param_3 + -1);
  lVar8 = 8;
  param_2 = (ulonglong)*(uint *)(param_1 + 0x5690) + param_2;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar6 = param_6 + in_stack_00000054 + in_stack_00000054;
  param_3 = *(int *)(param_1 + 0x5694) + param_3;
  puVar4 = (undefined1 *)(param_7 + in_stack_00000054 + -1);
  puVar3 = (undefined1 *)(param_4 + -1);
  lVar8 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar7 = param_7 + in_stack_00000054 + in_stack_00000054;
  param_4 = *(int *)(param_1 + 0x5698) + param_4;
  fn_82F68CC0(param_2,lVar5,0x10);
  lVar5 = lVar5 + param_8;
  param_2 = (ulonglong)*(uint *)(param_1 + 0x5690) + param_2;
  fn_82F68CC0(param_2,lVar5,0x10);
  lVar5 = lVar5 + param_8;
  puVar4 = (undefined1 *)(iVar6 + -1);
  puVar3 = (undefined1 *)(param_3 + -1);
  lVar8 = 8;
  param_2 = (ulonglong)*(uint *)(param_1 + 0x5690) + param_2;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar6 = iVar6 + in_stack_00000054;
  param_3 = *(int *)(param_1 + 0x5694) + param_3;
  puVar4 = (undefined1 *)(iVar7 + -1);
  puVar3 = (undefined1 *)(param_4 + -1);
  lVar8 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar7 = iVar7 + in_stack_00000054;
  param_4 = *(int *)(param_1 + 0x5698) + param_4;
  fn_82F68CC0(param_2,lVar5,0x10);
  lVar5 = lVar5 + param_8;
  param_2 = (ulonglong)*(uint *)(param_1 + 0x5690) + param_2;
  fn_82F68CC0(param_2,lVar5,0x10);
  lVar5 = lVar5 + param_8;
  puVar4 = (undefined1 *)(iVar6 + -1);
  puVar3 = (undefined1 *)(param_3 + -1);
  lVar8 = 8;
  param_2 = (ulonglong)*(uint *)(param_1 + 0x5690) + param_2;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar6 = iVar6 + in_stack_00000054;
  param_3 = *(int *)(param_1 + 0x5694) + param_3;
  puVar4 = (undefined1 *)(iVar7 + -1);
  puVar3 = (undefined1 *)(param_4 + -1);
  lVar8 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar7 = iVar7 + in_stack_00000054;
  param_4 = *(int *)(param_1 + 0x5698) + param_4;
  fn_82F68CC0(param_2,lVar5,0x10);
  lVar5 = lVar5 + param_8;
  param_2 = (ulonglong)*(uint *)(param_1 + 0x5690) + param_2;
  fn_82F68CC0(param_2,lVar5,0x10);
  lVar5 = lVar5 + param_8;
  puVar4 = (undefined1 *)(iVar6 + -1);
  puVar3 = (undefined1 *)(param_3 + -1);
  lVar8 = 8;
  param_2 = (ulonglong)*(uint *)(param_1 + 0x5690) + param_2;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar6 = iVar6 + in_stack_00000054;
  param_3 = *(int *)(param_1 + 0x5694) + param_3;
  puVar4 = (undefined1 *)(iVar7 + -1);
  puVar3 = (undefined1 *)(param_4 + -1);
  lVar8 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar7 = iVar7 + in_stack_00000054;
  param_4 = *(int *)(param_1 + 0x5698) + param_4;
  fn_82F68CC0(param_2,lVar5,0x10);
  lVar5 = lVar5 + param_8;
  param_2 = (ulonglong)*(uint *)(param_1 + 0x5690) + param_2;
  fn_82F68CC0(param_2,lVar5,0x10);
  lVar5 = lVar5 + param_8;
  puVar4 = (undefined1 *)(iVar6 + -1);
  puVar3 = (undefined1 *)(param_3 + -1);
  lVar8 = 8;
  param_2 = (ulonglong)*(uint *)(param_1 + 0x5690) + param_2;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar6 = iVar6 + in_stack_00000054;
  param_3 = *(int *)(param_1 + 0x5694) + param_3;
  puVar4 = (undefined1 *)(iVar7 + -1);
  puVar3 = (undefined1 *)(param_4 + -1);
  lVar8 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar7 = iVar7 + in_stack_00000054;
  param_4 = *(int *)(param_1 + 0x5698) + param_4;
  fn_82F68CC0(param_2,lVar5,0x10);
  lVar5 = lVar5 + param_8;
  param_2 = (ulonglong)*(uint *)(param_1 + 0x5690) + param_2;
  fn_82F68CC0(param_2,lVar5,0x10);
  lVar5 = lVar5 + param_8;
  puVar4 = (undefined1 *)(iVar6 + -1);
  puVar3 = (undefined1 *)(param_3 + -1);
  lVar8 = 8;
  param_2 = (ulonglong)*(uint *)(param_1 + 0x5690) + param_2;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar1 = *(int *)(param_1 + 0x5694);
  puVar4 = (undefined1 *)(iVar7 + -1);
  puVar3 = (undefined1 *)(param_4 + -1);
  lVar8 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar2 = *(int *)(param_1 + 0x5698);
  fn_82F68CC0(param_2,lVar5,0x10);
  fn_82F68CC0((ulonglong)*(uint *)(param_1 + 0x5690) + param_2,lVar5 + param_8,0x10);
  puVar4 = (undefined1 *)(iVar6 + in_stack_00000054 + -1);
  puVar3 = (undefined1 *)(iVar1 + param_3 + -1);
  lVar5 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar4 = (undefined1 *)(iVar7 + in_stack_00000054 + -1);
  puVar3 = (undefined1 *)(iVar2 + param_4 + -1);
  lVar5 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

