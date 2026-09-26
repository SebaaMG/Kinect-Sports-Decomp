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
extern int fn_82E6D500();


void fn_82E6D710(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000084;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000094;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000dc;
  undefined4 in_stack_000000e4;
  undefined4 in_stack_000000ec;
  
  fn_82E6D500(in_stack_000000dc,in_stack_000000ec,param_6,param_7,in_stack_0000007c,
                in_stack_00000084,in_stack_000000e4,param_2);
  fn_82E6D500(in_stack_000000dc,in_stack_000000ec,param_8,in_stack_00000054,in_stack_0000008c,
                in_stack_00000094,in_stack_000000e4,param_3);
  fn_82E6D500(in_stack_000000dc,in_stack_000000ec,in_stack_0000005c,in_stack_00000064,
                in_stack_0000009c,in_stack_000000a4,in_stack_000000e4,param_4);
  if (*(int *)(param_1 + 0x7630) == 0) {
    fn_82E6D500(in_stack_000000dc,in_stack_000000ec,in_stack_0000006c,in_stack_00000074,
                  in_stack_000000ac,in_stack_000000b4,in_stack_000000e4,param_5);
  }
  return;
}

