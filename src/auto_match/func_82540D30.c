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
extern int fn_82A1DD38();


void fn_82540D30(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,ulonglong param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  undefined4 *in_stack_00000084;
  undefined4 *in_stack_0000008c;
  int in_stack_00000094;
  
  *(undefined4 *)(param_1 + 0xaaa4) = param_2;
  if (param_4 != 0) {
    puVar1 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 0xaac0U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  if (param_3 != 0) {
    puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 0xaab0U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  if (param_7 != 0) {
    puVar1 = (undefined4 *)(in_r0 + param_7 & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 0xaaf0U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  if (param_6 != 0) {
    puVar1 = (undefined4 *)(in_r0 + param_6 & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 0xaae0U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  if (param_5 != 0) {
    puVar1 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 0xaad0U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  if ((param_8 & 0xffffffff) != 0) {
    fn_82A1DD38(param_1 + 0xab00,param_8,0x20);
  }
  if (in_stack_00000054 != 0) {
    fn_82A1DD38(param_1 + 0xab20,in_stack_00000054,0x20);
  }
  if (in_stack_0000005c != 0) {
    fn_82A1DD38(param_1 + 0xab40,in_stack_0000005c,0x20);
  }
  if (in_stack_00000064 != 0) {
    fn_82A1DD38(param_1 + 0xab60,in_stack_00000064,0x10);
  }
  if (in_stack_0000006c != 0) {
    *(int *)(param_1 + 0xac30) = in_stack_0000006c;
  }
  if (in_stack_00000074 != 0) {
    puVar1 = (undefined4 *)(in_r0 + in_stack_00000074 & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 0xabf0U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  if (in_stack_0000007c != 0) {
    puVar1 = (undefined4 *)(in_r0 + in_stack_0000007c & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 0xac00U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  if (in_stack_00000084 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xac10) = *in_stack_00000084;
  }
  if (in_stack_0000008c != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xac14) = *in_stack_0000008c;
  }
  if (in_stack_00000094 != 0) {
    puVar1 = (undefined4 *)(in_r0 + in_stack_00000094 & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 0xac20U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  return;
}

