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
extern int fn_82F1C150();
extern int fn_82F1C568();


void fn_82F1C5D0(int param_1,int param_2,int param_3,ulonglong param_4,undefined8 param_5,
                  longlong param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_stack_00000054;
  uint in_stack_0000005c;
  undefined4 in_stack_00000064;
  
  uVar1 = *(uint *)(param_3 + 0x60);
  uVar2 = *(uint *)(param_1 + 0x6d24);
  if (*(int *)(param_1 + 0xa0c) == 0) {
    uVar4 = (ulonglong)in_stack_0000005c + 0x80;
  }
  else {
    uVar4 = (ulonglong)in_stack_0000005c;
  }
  uVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x6f88) != *(int *)(param_1 + 0x6f8c)) {
      fn_82F1C568(uVar4,((longlong)*(int *)(param_1 + 0x564) * (longlong)(int)(uVar5 & 2) +
                             ((ulonglong)uVar5 & 1) * 2 & 0x3fffffff) * 4 + param_6);
    }
    fn_82F1C150(param_1);
    if (((*(int *)(param_1 + 0x6f88) != 0) && (*(int *)(param_1 + 0x6f8c) != 0)) &&
       (*(int *)(param_1 + 0xa0c) == 0)) {
      fn_82F1C568(uVar4);
    }
    uVar5 = uVar5 + 1;
    uVar4 = uVar4 + 0x100;
  } while ((int)uVar5 < 4);
  iVar6 = 4;
  do {
    if (*(int *)(param_1 + 0x6f88) != *(int *)(param_1 + 0x6f8c)) {
      fn_82F1C568(uVar4);
    }
    if (param_2 == 0) {
      puVar3 = (uint *)(param_1 + 0x938);
      if (iVar6 != 4) {
        puVar3 = (uint *)(param_1 + 0x940);
      }
    }
    else {
      puVar3 = (uint *)(param_1 + 0x958);
      if (iVar6 != 4) {
        puVar3 = (uint *)(param_1 + 0x964);
      }
    }
    fn_82F1C150(param_1,param_7,*(undefined4 *)(param_1 + 0x568),in_stack_00000054,
                      in_stack_00000064,uVar4,(ulonglong)uVar1 * 0x34 + (ulonglong)uVar2,
                      (param_4 & 0xfffffff) * 0x10 + (ulonglong)*puVar3);
    if (((*(int *)(param_1 + 0x6f88) != 0) && (*(int *)(param_1 + 0x6f8c) != 0)) &&
       (*(int *)(param_1 + 0xa0c) == 0)) {
      fn_82F1C568(uVar4);
    }
    iVar6 = iVar6 + 1;
    uVar4 = uVar4 + 0x100;
    param_7 = param_8;
  } while (iVar6 < 6);
  return;
}

