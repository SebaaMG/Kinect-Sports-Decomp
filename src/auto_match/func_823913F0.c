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
extern unsigned int fStack00000074;
extern unsigned int fStack0000007c;
extern int fn_822315A0();
extern int fn_82236678();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_1c;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int stack0x00000040;
extern unsigned int stack0x00000054;
extern unsigned int stack0x0000005c;
extern unsigned int stack0x00000064;
extern unsigned int stack0x0000006c;
extern unsigned int stack0x00000074;
extern unsigned int stack0x0000007c;
extern unsigned int uStack0000005c;
extern unsigned int uStack00000064;
extern unsigned int uStack0000006c;
extern unsigned int uStack_20;


void fn_823913F0(double param_1,double param_2,double param_3,int param_4,undefined8 param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar2;
  undefined8 uVar1;
  float fStack00000054;
  undefined4 uStack0000005c;
  undefined4 uStack00000064;
  undefined4 uStack0000006c;
  float fStack00000074;
  float fStack0000007c;
  undefined4 uStack_20;
  int iStack_1c;
  
  fStack00000054 = (float)param_1;
  fStack00000074 = (float)param_2;
  fStack0000007c = (float)param_3;
  uStack0000005c = param_6;
  uStack00000064 = param_7;
  uStack0000006c = param_8;
  iVar2 = fn_8265C9E0(0x28);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_822D7FE0();
  }
  uStack_20 = 0;
  iStack_1c = 0;
  fn_822D79D8(&uStack_20,uVar1);
  (**(code **)(**(int **)(param_4 + 0x68) + 0x10))
            (*(int **)(param_4 + 0x68),uStack_20,&stack0x00000020);
  (**(code **)(**(int **)(param_4 + 0x70) + 0x10))
            (*(int **)(param_4 + 0x70),uStack_20,&stack0x00000030);
  (**(code **)(**(int **)(param_4 + 0x78) + 0x10))
            (*(int **)(param_4 + 0x78),uStack_20,&stack0x00000040);
  (**(code **)(**(int **)(param_4 + 0x80) + 0x10))
            (*(int **)(param_4 + 0x80),uStack_20,&stack0x00000054);
  (**(code **)(**(int **)(param_4 + 0x88) + 0x10))
            (*(int **)(param_4 + 0x88),uStack_20,&stack0x0000005c);
  (**(code **)(**(int **)(param_4 + 0x90) + 0x10))
            (*(int **)(param_4 + 0x90),uStack_20,&stack0x00000064);
  (**(code **)(**(int **)(param_4 + 0x98) + 0x10))
            (*(int **)(param_4 + 0x98),uStack_20,&stack0x0000006c);
  (**(code **)(**(int **)(param_4 + 0xa0) + 0x10))
            (*(int **)(param_4 + 0xa0),uStack_20,&stack0x00000074);
  (**(code **)(**(int **)(param_4 + 0xa8) + 0x10))
            (*(int **)(param_4 + 0xa8),uStack_20,&stack0x0000007c);
  if (*(int *)(param_4 + 0x48) != 0) {
    fn_828E9D90(uStack_20);
    fn_828E9D40(uStack_20);
    fn_82236678(param_4,uStack_20,param_4 + 0x38);
  }
  fn_828E2B28(param_4,&uStack_20);
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  return;
}

