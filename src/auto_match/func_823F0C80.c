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
extern int fn_822315A0();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_24;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_823F0C80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  struct { undefined4 first; int second; } stack_pair_28;

  
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  iVar4 = fn_8265C9E0(0x28);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_822D7FE0();
  }
  stack_pair_28.first = 0;
  stack_pair_28.second = 0;
  fn_822D79D8(&stack_pair_28.first,uVar3);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x10))
            (*(int **)(param_1 + 0x68),stack_pair_28.first,&stack0x0000001c);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x10))
            (*(int **)(param_1 + 0x70),stack_pair_28.first,&stack0x00000024);
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_828E9D90(stack_pair_28.first);
    fn_828E9D40(stack_pair_28.first);
    uVar2 = stack_pair_28.first;
    (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),stack_pair_28.first,&uStack_2c)
    ;
    (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),uVar2,&uStack_30);
    piVar1 = *(int **)(param_1 + 0x48);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1,uStack_2c,uStack_30);
    }
  }
  fn_828E2B28(param_1,&stack_pair_28.first);
  if (stack_pair_28.second != 0) {
    fn_822315A0();
  }
  return;
}

