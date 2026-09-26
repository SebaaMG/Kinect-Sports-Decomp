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
extern int fn_82CE1258();
extern int fn_82F68CC0();


void fn_828EC6D8(int param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  char param_6,char param_7,char param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  char in_stack_00000057;
  char in_stack_0000005f;
  char in_stack_00000067;
  char in_stack_0000006f;
  char in_stack_00000077;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000084;
  undefined1 in_stack_0000008f;
  undefined1 in_stack_00000097;
  
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined1 *)(param_1 + 0x1e1) = 0;
    puVar4 = (undefined1 *)(param_3 + -1);
    *(undefined1 *)(param_1 + 0x1e2) = 0;
    puVar3 = (undefined1 *)(param_1 + 0x13);
    *(undefined1 *)(param_1 + 0x1e0) = 0;
    lVar6 = 8;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    fn_82F68CC0(param_1 + 0x40,param_4,0x10);
    fn_82F68CC0(param_1 + 0x1c,param_5,0x24);
    *(undefined4 *)(param_1 + 300) = 0;
    puVar5 = (undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x130) = 0;
    lVar6 = 7;
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    iVar1 = fn_82CE1258(-(ulonglong)(in_stack_00000077 != '\0') & 0x400 |
                              -(ulonglong)(in_stack_0000006f != '\0') & 0x200 |
                              -(ulonglong)(in_stack_00000067 != '\0') & 0x100 |
                              -(ulonglong)(param_6 != '\0') & 2 | -(ulonglong)(param_7 != '\0') & 4
                              | 0x100 - ((ulonglong)(param_8 != '\0') + 0x100) & 8 |
                              -(ulonglong)(in_stack_00000057 != '\0') & 0x10 |
                              -(ulonglong)(in_stack_0000005f != '\0') & 0x20,param_2,
                              in_stack_0000007c,in_stack_00000084,param_1 + 0x50,param_1 + 0x14,0,
                              param_1 + 0x58);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0xc) = (int)param_2;
      *(undefined4 *)(param_1 + 8) = 4;
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(char *)(param_1 + 0x148) = param_6;
      *(char *)(param_1 + 0x149) = param_7;
      *(char *)(param_1 + 0x14a) = param_8;
      *(char *)(param_1 + 0x14b) = in_stack_0000005f;
      *(char *)(param_1 + 0x14c) = in_stack_00000057;
      *(char *)(param_1 + 0x14d) = in_stack_00000067;
      *(char *)(param_1 + 0x14e) = in_stack_0000006f;
      *(char *)(param_1 + 0x14f) = in_stack_00000077;
      *(undefined4 *)(param_1 + 0x150) = in_stack_0000007c;
      *(undefined4 *)(param_1 + 0x154) = in_stack_00000084;
      *(char *)(param_1 + 0x136) = param_6;
      *(char *)(param_1 + 0x137) = param_7;
      *(char *)(param_1 + 0x138) = param_8;
      *(char *)(param_1 + 0x139) = in_stack_0000005f;
      *(char *)(param_1 + 0x13a) = in_stack_00000057;
      *(char *)(param_1 + 0x13b) = in_stack_00000067;
      *(char *)(param_1 + 0x13c) = in_stack_0000006f;
      *(char *)(param_1 + 0x13d) = in_stack_00000077;
      *(undefined4 *)(param_1 + 0x140) = in_stack_0000007c;
      *(undefined4 *)(param_1 + 0x144) = in_stack_00000084;
      *(undefined1 *)(param_1 + 0x228) = in_stack_0000008f;
      *(undefined1 *)(param_1 + 0x229) = in_stack_00000097;
    }
    else {
      *(int *)(param_1 + 300) = iVar1;
      uVar2 = thunk_FUN_82a2b798();
      *(undefined4 *)(param_1 + 0x130) = uVar2;
    }
  }
  return;
}

