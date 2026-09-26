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
extern int fn_82DF1810();


void fn_82DF1C88(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *in_r8;
  int *in_r9;
  undefined8 in_r10;
  undefined4 in_stack_00000054;
  
  uVar1 = (**(code **)(*in_r8 + 0x10))(in_r8,in_r10);
  uVar2 = (**(code **)(*in_r9 + 0x10))(in_r9,in_stack_00000054);
  fn_82DF1810(param_1,param_2 + -0xc,uVar1,uVar2);
  return;
}

