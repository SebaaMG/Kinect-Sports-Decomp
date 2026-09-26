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
extern int fn_82F68CC0();


undefined8 fn_82AB72A0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d683c,0xffffffff820d6be8,0x397);
  }
  if (0xf < (param_2 & 0xffffffff)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6d9c,0xffffffff820d6be8,0x398);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6dbc,0xffffffff820d6be8,0x399);
  }
  fn_82F68CC0(param_3,param_2 * 0x94 + param_1 + 0x3c,0x94);
  return 0;
}

