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
extern unsigned int *auStack_30;
extern unsigned int fStack0000001c;
extern unsigned int fStack_2c;
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
extern unsigned int uStack00000024;
extern unsigned int uStack_28;


void fn_8233E8A0(double param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  float fStack0000001c;
  undefined4 uStack00000024;
  undefined1 auStack_30 [4];
  float fStack_2c;
  struct { undefined4 first; int second; } stack_pair_28;

  
  fStack0000001c = (float)param_1;
  uStack00000024 = param_4;
  iVar3 = fn_8265C9E0(0x28);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_822D7FE0();
  }
  stack_pair_28.first = 0;
  stack_pair_28.second = 0;
  fn_822D79D8(&stack_pair_28.first,uVar2);
  (**(code **)(**(int **)(param_2 + 0x68) + 0x10))
            (*(int **)(param_2 + 0x68),stack_pair_28.first,&stack0x0000001c);
  (**(code **)(**(int **)(param_2 + 0x70) + 0x10))
            (*(int **)(param_2 + 0x70),stack_pair_28.first,&stack0x00000024);
  if (*(int *)(param_2 + 0x48) != 0) {
    fn_828E9D90(stack_pair_28.first);
    fn_828E9D40(stack_pair_28.first);
    uVar1 = stack_pair_28.first;
    (**(code **)(**(int **)(param_2 + 0x68) + 0x14))(*(int **)(param_2 + 0x68),stack_pair_28.first,&fStack_2c)
    ;
    (**(code **)(**(int **)(param_2 + 0x70) + 0x14))(*(int **)(param_2 + 0x70),uVar1,auStack_30);
    if (*(int **)(param_2 + 0x48) != (int *)0x0) {
      (**(code **)(**(int **)(param_2 + 0x48) + 4))((double)fStack_2c);
    }
  }
  fn_828E2B28(param_2,&stack_pair_28.first);
  if (stack_pair_28.second != 0) {
    fn_822315A0();
  }
  return;
}

