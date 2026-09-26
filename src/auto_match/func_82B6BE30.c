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


undefined4 *
fn_82B6BE30(undefined8 param_1,code *param_2,int param_3,int param_4,int param_5,
             undefined4 param_6)

{
  undefined4 *puVar1;
  
  if (param_2 == (code *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69d8,0xffffffff820d9998,0x9a);
  }
  if (param_3 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69cc,0xffffffff820d9998,0x9b);
  }
  if (param_4 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bdc,0xffffffff820d9998,0x9c);
  }
  puVar1 = (undefined4 *)(*param_2)(param_1,0x4a8);
  if (puVar1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9990,0xffffffff820d9998,0xa2);
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (int)param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    puVar1[5] = param_6;
    if (param_5 == 0) {
      puVar1[0x126] = 0xffffffff;
    }
    else {
      if (param_5 != 1) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9974,0xffffffff820d9998,0xba);
      }
      puVar1[0x126] = 0x20;
    }
    puVar1[0x127] = 0xffffffff;
    puVar1[0x128] = 0;
    puVar1[0x129] = 0;
  }
  return puVar1;
}

