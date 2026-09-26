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
extern int fn_82230218();
extern int fn_828BDDA0();
extern unsigned int lbl_82024190;
extern unsigned int lbl_82024198;


undefined4 *
fn_828D15E0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 in_stack_00000057;
  undefined1 in_stack_0000005f;
  undefined4 in_stack_00000064;
  undefined1 in_stack_0000006f;
  
  fn_828BDDA0();
  param_1[0x21] = param_2;
  param_1[0x22] = param_3;
  param_1[0x23] = param_4;
  param_1[0x24] = param_5;
  *param_1 = &lbl_82024198;
  param_1[0x14] = &lbl_82024190;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined8 *)(param_1 + 0x26) = param_6;
  param_1[0x28] = param_7;
  param_1[0x29] = param_8;
  param_1[0x2f] = 0xf;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  fn_82230218(param_1 + 0x2a,in_stack_00000064,0,0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0x31) = in_stack_00000057;
  *(undefined1 *)((int)param_1 + 0xc5) = in_stack_0000005f;
  *(undefined1 *)((int)param_1 + 0xc6) = in_stack_0000006f;
  return param_1;
}

