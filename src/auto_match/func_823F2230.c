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
extern unsigned int fStack00000054;
extern int fn_822315A0();
extern int fn_82252510();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_2c;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000040;
extern unsigned int stack0x00000054;
extern unsigned int stack0x0000005c;
extern unsigned int stack0x0000006c;
extern unsigned int uStack0000005c;
extern unsigned int uStack0000006c;
extern unsigned int uStack_30;


void fn_823F2230(double param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar2;
  undefined8 uVar1;
  float fStack00000054;
  undefined4 uStack0000005c;
  undefined4 uStack0000006c;
  undefined4 uStack_30;
  int iStack_2c;
  
  fStack00000054 = (float)param_1;
  uStack0000005c = param_5;
  uStack0000006c = param_7;
  iVar2 = fn_8265C9E0(0x28);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_822D7FE0();
  }
  uStack_30 = 0;
  iStack_2c = 0;
  fn_822D79D8(&uStack_30,uVar1);
  (**(code **)(**(int **)(param_2 + 0x68) + 0x10))
            (*(int **)(param_2 + 0x68),uStack_30,&stack0x00000020);
  (**(code **)(**(int **)(param_2 + 0x70) + 0x10))(*(int **)(param_2 + 0x70),uStack_30,param_3);
  (**(code **)(**(int **)(param_2 + 0x78) + 0x10))
            (*(int **)(param_2 + 0x78),uStack_30,&stack0x00000040);
  (**(code **)(**(int **)(param_2 + 0x80) + 0x10))
            (*(int **)(param_2 + 0x80),uStack_30,&stack0x00000054);
  (**(code **)(**(int **)(param_2 + 0x88) + 0x10))
            (*(int **)(param_2 + 0x88),uStack_30,&stack0x0000005c);
  (**(code **)(**(int **)(param_2 + 0x90) + 0x10))(*(int **)(param_2 + 0x90),uStack_30,param_6);
  (**(code **)(**(int **)(param_2 + 0x98) + 0x10))
            (*(int **)(param_2 + 0x98),uStack_30,&stack0x0000006c);
  if (*(int *)(param_2 + 0x48) != 0) {
    fn_828E9D90(uStack_30);
    fn_828E9D40(uStack_30);
    fn_82252510(param_2,uStack_30,param_2 + 0x38);
  }
  fn_828E2B28(param_2,&uStack_30);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return;
}

