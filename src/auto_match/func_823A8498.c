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
extern unsigned int fStack0000002c;
extern int fn_822315A0();
extern int fn_822419F8();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_1c;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int stack0x00000034;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack00000034;
extern unsigned int uStack_20;


void fn_823A8498(double param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  float fStack0000002c;
  undefined4 uStack00000034;
  undefined4 uStack_20;
  int iStack_1c;
  
  fStack0000002c = (float)param_1;
  uStack0000001c = param_3;
  uStack00000024 = param_4;
  uStack00000034 = param_6;
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
  (**(code **)(**(int **)(param_2 + 0x68) + 0x10))
            (*(int **)(param_2 + 0x68),uStack_20,&stack0x0000001c);
  (**(code **)(**(int **)(param_2 + 0x70) + 0x10))
            (*(int **)(param_2 + 0x70),uStack_20,&stack0x00000024);
  (**(code **)(**(int **)(param_2 + 0x78) + 0x10))
            (*(int **)(param_2 + 0x78),uStack_20,&stack0x0000002c);
  (**(code **)(**(int **)(param_2 + 0x80) + 0x10))
            (*(int **)(param_2 + 0x80),uStack_20,&stack0x00000034);
  if (*(int *)(param_2 + 0x48) != 0) {
    fn_828E9D90(uStack_20);
    fn_828E9D40(uStack_20);
    fn_822419F8(param_2,uStack_20,param_2 + 0x38);
  }
  fn_828E2B28(param_2,&uStack_20);
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  return;
}

