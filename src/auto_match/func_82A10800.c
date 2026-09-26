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
extern int fn_8265C940();
extern int fn_82A93E40();
extern int fn_82A93F70();


undefined8
fn_82A10800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int in_stack_00000054;
  undefined4 *in_stack_0000005c;
  
  uVar1 = fn_82A93E40(param_2,param_3,param_4,param_5,param_6,param_7,0,1);
  uVar2 = fn_8265C940(uVar1,(~param_6 & 4) << 0x1a | 0xffffffffac9c0000);
  *(int *)(in_stack_00000054 + 0x34) = (int)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0xffffffff8007000e;
    *in_stack_0000005c = 0;
  }
  else {
    fn_82A93F70(in_stack_00000054,uVar2);
    uVar3 = 0;
    *in_stack_0000005c = (int)uVar1;
  }
  return uVar3;
}

