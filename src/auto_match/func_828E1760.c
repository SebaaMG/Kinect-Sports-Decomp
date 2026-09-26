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
extern int fn_828AC950();
extern int fn_828E07B0();
extern int fn_828E08A0();


void fn_828E1760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  undefined1 in_stack_00000057;
  undefined4 in_stack_0000005c;
  undefined1 in_stack_00000067;
  undefined1 in_stack_0000006f;
  
  fn_828E07B0(param_1,0,param_2,0x24);
  fn_828E07B0(param_1,1,param_3,8);
  fn_828E07B0(param_1,2,param_4,0x10);
  fn_828E08A0(param_1,1,3,0);
  fn_828E08A0(param_1,0,4,0);
  fn_828E08A0(param_1,param_5,5,0);
  fn_828E08A0(param_1,param_6,6,0);
  uVar1 = fn_828AC950(param_7);
  fn_828E08A0(param_1,uVar1,7,0);
  fn_828E08A0(param_1,param_8,8,0);
  fn_828E08A0(param_1,in_stack_00000057,9,0);
  fn_828E08A0(param_1,in_stack_0000005c,10,0);
  fn_828E08A0(param_1,in_stack_00000067,0xb,0);
  fn_828E08A0(param_1,in_stack_0000006f,0xc,0);
  return;
}

