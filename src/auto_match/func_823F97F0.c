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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int memcpy();
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_823F97F0(int param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  struct { undefined4 first; undefined4 second; } stack_pair_80;

  struct { undefined4 first; undefined4 second; } stack_pair_78;

  struct { undefined4 first; undefined4 second; } stack_pair_70;

  undefined4 uStack_68;
  uint uStack_64;
  undefined4 auStack_60 [8];
  undefined4 auStack_40 [4];

  stack_pair_70.second = 0xffffffff;
  stack_pair_80.first = 0xffffffff;
  lVar3 = 7;
  puVar1 = auStack_60;
  stack_pair_78.first = 0xffffffff;
  uStack_68 = 2;
  uStack_64 = (uint)(((U64)(uStack_64) >> 8) & 0xFFFFFF);
  stack_pair_80.second = 1;
  stack_pair_78.second = 1;
  auStack_60[0] = 0;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0xffffffff;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar1 = auStack_40;
  auStack_40[0] = 0;
  lVar3 = 7;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0xffffffff;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))(*(int **)(param_1 + 0x1c),param_2,&stack_pair_70.first);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x14))(*(int **)(param_1 + 0x24),param_2,&stack_pair_80.first);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(*(int **)(param_1 + 0x2c),param_2,&stack_pair_78.first);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x14))(*(int **)(param_1 + 0x34),param_2,auStack_60);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x14))(*(int **)(param_1 + 0x3c),param_2,auStack_40);
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 8) + param_3;
    *(undefined4 *)(*(int *)(param_1 + 8) + param_3) = stack_pair_70.first;
    *(undefined4 *)(iVar2 + 4) = stack_pair_70.second;
    *(undefined4 *)(iVar2 + 8) = uStack_68;
    *(uint *)(iVar2 + 0xc) = uStack_64;
    *(ulonglong *)(*(int *)(param_1 + 0xc) + param_3) = CONCAT44(stack_pair_80.first,stack_pair_80.second);
    *(ulonglong *)(*(int *)(param_1 + 0x10) + param_3) = CONCAT44(stack_pair_78.first,stack_pair_78.second);
    memcpy(*(int *)(param_1 + 0x14) + param_3,auStack_60,0x20);
    memcpy(*(int *)(param_1 + 0x18) + param_3,auStack_40,0x20);
  }
  return;
}
