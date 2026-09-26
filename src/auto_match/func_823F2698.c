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
extern int fn_82252678();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_3c;
extern unsigned int stack0x00000020;
extern unsigned int stack0x0000003c;
extern unsigned int stack0x0000005c;
extern unsigned int uStack0000003c;
extern unsigned int uStack0000005c;
extern unsigned int uStack_40;


void fn_823F2698(int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 uStack0000003c;
  undefined4 uStack0000005c;
  undefined4 uStack_40;
  int iStack_3c;
  
  uStack0000003c = param_3;
  uStack0000005c = param_7;
  iVar2 = fn_8265C9E0(0x28);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_822D7FE0();
  }
  uStack_40 = 0;
  iStack_3c = 0;
  fn_822D79D8(&uStack_40,uVar1);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x10))
            (*(int **)(param_1 + 0x68),uStack_40,&stack0x00000020);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x10))(*(int **)(param_1 + 0x70),uStack_40,param_2);
  (**(code **)(**(int **)(param_1 + 0x78) + 0x10))
            (*(int **)(param_1 + 0x78),uStack_40,&stack0x0000003c);
  (**(code **)(**(int **)(param_1 + 0x80) + 0x10))(*(int **)(param_1 + 0x80),uStack_40,param_4);
  (**(code **)(**(int **)(param_1 + 0x88) + 0x10))(*(int **)(param_1 + 0x88),uStack_40,param_5);
  (**(code **)(**(int **)(param_1 + 0x90) + 0x10))(*(int **)(param_1 + 0x90),uStack_40,param_6);
  (**(code **)(**(int **)(param_1 + 0x98) + 0x10))
            (*(int **)(param_1 + 0x98),uStack_40,&stack0x0000005c);
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_828E9D90(uStack_40);
    fn_828E9D40(uStack_40);
    fn_82252678(param_1,uStack_40,param_1 + 0x38);
  }
  fn_828E2B28(param_1,&uStack_40);
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

