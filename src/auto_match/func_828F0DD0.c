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
extern int fn_828F0B58();
extern unsigned int lbl_82027A00;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


void fn_828F0DD0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  ppuStack_30 = &lbl_82027A00;
  uStack_2c = param_1;
  uStack_28 = param_2;
  uStack_24 = param_3;
  uStack_20 = param_4;
  fn_828F0B58(&ppuStack_30,param_5,param_6,param_7,param_8,in_stack_00000054,in_stack_0000005c,0);
  return;
}

