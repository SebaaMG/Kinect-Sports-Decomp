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
extern int fn_82AB15D0();
extern int fn_82AB7CB8();


undefined8
fn_82B7FAF0(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 in_stack_00000054;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820dbba0,0x5e5);
  }
  if (param_2 == 0) {
    fn_82AB7CB8(*(undefined4 *)(param_1 + 0x34),param_3,param_4,param_5,param_6,param_7,
                      param_8,in_stack_00000054);
  }
  else {
    if (param_2 != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6c64,0xffffffff820dbba0,0x5ef);
    }
    fn_82AB7CB8(*(undefined4 *)(param_1 + 0x30),param_3,param_4,param_5,param_6,param_7,
                      param_8,in_stack_00000054);
  }
  return 0;
}

