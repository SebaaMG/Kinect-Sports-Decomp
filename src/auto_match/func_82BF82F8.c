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
extern int fn_82BE8CE0();
extern int fn_82BEC810();
extern unsigned int lbl_820EBDA8;


undefined4 *
fn_82BF82F8(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  char *in_stack_00000054;
  char *in_stack_0000005c;
  
  fn_82BE8CE0();
  param_1[2] = param_2;
  *(undefined8 *)(param_1 + 4) = param_3;
  param_1[6] = param_4;
  param_1[7] = param_5;
  *param_1 = &lbl_820EBDA8;
  param_1[8] = param_6;
  param_1[9] = param_7;
  param_1[10] = param_8;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if ((in_stack_00000054 != (char *)0x0) && (*in_stack_00000054 != '\0')) {
    uVar1 = fn_82BEC810();
    param_1[0xb] = uVar1;
  }
  if ((in_stack_0000005c != (char *)0x0) && (*in_stack_0000005c != '\0')) {
    uVar1 = fn_82BEC810();
    param_1[0xc] = uVar1;
  }
  return param_1;
}

