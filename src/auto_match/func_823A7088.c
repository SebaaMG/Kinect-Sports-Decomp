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
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_28;
extern unsigned int iStack_7c;
extern unsigned int uStack_2c;
extern unsigned int uStack_68;
extern unsigned int uStack_80;


void fn_823A7088(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  struct { undefined4 first; int second; } stack_pair_80;

  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined4 uStack_2c;
  int iStack_28;
  
  iVar1 = *param_1;
  iVar3 = fn_8265C9E0(0x28);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_822D7FE0();
  }
  stack_pair_80.first = 0;
  stack_pair_80.second = 0;
  fn_822D79D8(&stack_pair_80.first,uVar2);
  (**(code **)(**(int **)(iVar1 + 0x90) + 0x10))(*(int **)(iVar1 + 0x90),stack_pair_80.first,param_2);
  if (*(int *)(iVar1 + 0x70) != 0) {
    fn_828E9D90(stack_pair_80.first);
    fn_828E9D40(stack_pair_80.first);
    uStack_2c = 0;
    iStack_28 = 0;
    uStack_68 = 2;
    (**(code **)(**(int **)(iVar1 + 0x90) + 0x14))(*(int **)(iVar1 + 0x90),stack_pair_80.first,auStack_70);
    if (*(int *)(iVar1 + 0x70) != 0) {
      (**(code **)(**(int **)(iVar1 + 0x70) + 4))(*(int **)(iVar1 + 0x70),auStack_70);
    }
    if (iStack_28 != 0) {
      fn_822315A0();
    }
  }
  fn_828E2B28(iVar1 + 0x28,&stack_pair_80.first);
  if (stack_pair_80.second != 0) {
    fn_822315A0();
  }
  return;
}

