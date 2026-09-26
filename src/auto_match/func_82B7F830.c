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
extern int fn_82AB78A0();


void fn_82B7F830(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820dbba0,0x443);
  }
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x34);
  }
  else {
    if (param_2 != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6c64,0xffffffff820dbba0,0x44d);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x30);
  }
  fn_82AB78A0(uVar1,param_3,param_4,param_5,param_6);
  return;
}

