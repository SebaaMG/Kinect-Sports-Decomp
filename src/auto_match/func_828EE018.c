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
extern int fn_828EC900();


void fn_828EE018(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined1 in_stack_00000057;
  undefined1 in_stack_0000005f;
  undefined4 in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined1 in_stack_00000077;
  undefined1 in_stack_0000007f;
  
  *(undefined4 *)(param_1 + 0x1e4) = param_2;
  *(undefined1 *)(param_1 + 0x148) = param_3;
  *(undefined1 *)(param_1 + 0x1e1) = 1;
  *(undefined1 *)(param_1 + 0x1e2) = 0;
  *(undefined4 *)(param_1 + 0x224) = 1;
  *(undefined1 *)(param_1 + 0x149) = param_4;
  *(undefined1 *)(param_1 + 0x14a) = param_5;
  *(undefined1 *)(param_1 + 0x14c) = param_6;
  *(undefined1 *)(param_1 + 0x14b) = param_7;
  *(undefined1 *)(param_1 + 0x14d) = param_8;
  *(undefined1 *)(param_1 + 0x14e) = in_stack_00000057;
  *(undefined1 *)(param_1 + 0x14f) = in_stack_0000005f;
  *(undefined4 *)(param_1 + 0x150) = in_stack_00000064;
  *(undefined4 *)(param_1 + 0x154) = in_stack_0000006c;
  *(undefined1 *)(param_1 + 0x228) = in_stack_00000077;
  *(undefined1 *)(param_1 + 0x229) = in_stack_0000007f;
  fn_828EC900();
  return;
}

