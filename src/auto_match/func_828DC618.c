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
extern int fn_828B6158();
extern int fn_828BDDA0();
extern unsigned int lbl_82025D50;
extern unsigned int lbl_82025D58;


undefined4 *
fn_828DC618(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  
  fn_828BDDA0();
  param_1[0x20] = param_5;
  param_1[0x21] = param_6;
  param_1[0x22] = param_7;
  param_1[0x23] = param_8;
  param_1[0x14] = &lbl_82025D50;
  *param_1 = &lbl_82025D58;
  param_1[0x24] = in_stack_00000054;
  param_1[0x25] = param_3;
  *(undefined8 *)(param_1 + 0x26) = param_2;
  param_1[0x28] = param_4;
  param_1[0x2e] = 0xf;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  fn_82230218(param_1 + 0x29,in_stack_0000005c,0,0xffffffffffffffff);
  fn_828B6158(param_1 + 0x30,param_8 & 0xffff,in_stack_00000064);
  return param_1;
}

