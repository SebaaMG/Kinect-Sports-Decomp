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
extern int fn_82F1BEF0();


void fn_82F1C3A0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  uVar1 = fn_82F1BEF0(param_1,in_stack_0000005c,param_2,param_3,param_8,in_stack_00000054,
                            param_7,*(undefined4 *)(param_1 + 0x2030));
  (**(code **)(param_1 + 0x1f98))(param_6,param_7,8,uVar1);
  if (in_stack_0000006c != 0) {
    puVar3 = (undefined2 *)(param_6 + -2);
    puVar2 = (undefined2 *)(in_stack_0000006c + -2);
    lVar4 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (undefined2 *)(param_6 + 0xe);
    lVar4 = 8;
    puVar2 = (undefined2 *)(in_stack_00000074 * 2 + in_stack_0000006c + -2);
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (undefined2 *)(param_6 + 0x1e);
    puVar2 = (undefined2 *)(in_stack_00000074 * 4 + in_stack_0000006c + -2);
    lVar4 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (undefined2 *)(param_6 + 0x2e);
    lVar4 = 8;
    puVar2 = (undefined2 *)(in_stack_00000074 * 6 + in_stack_0000006c + -2);
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (undefined2 *)(param_6 + 0x3e);
    puVar2 = (undefined2 *)(in_stack_00000074 * 8 + in_stack_0000006c + -2);
    lVar4 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (undefined2 *)(param_6 + 0x4e);
    lVar4 = 8;
    puVar2 = (undefined2 *)(in_stack_00000074 * 10 + in_stack_0000006c + -2);
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (undefined2 *)(param_6 + 0x5e);
    lVar4 = 8;
    puVar2 = (undefined2 *)(in_stack_00000074 * 0xc + in_stack_0000006c + -2);
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (undefined2 *)(param_6 + 0x6e);
    puVar2 = (undefined2 *)(in_stack_00000074 * 0xe + in_stack_0000006c + -2);
    lVar4 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  (**(code **)(param_1 + 0x1fb4))(param_1,param_4,param_6,param_5,8);
  return;
}

