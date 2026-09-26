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
extern int fn_82358FD8();


void fn_822A4D38(uint *param_1,undefined8 param_2)

{
  fn_82358FD8(param_2,(ulonglong)*param_1 + 0xc0,0x20,0xffffffff821ac35c);
  fn_82358FD8(param_2,(ulonglong)*param_1 + 0x100,0x20,0xffffffff821ac36c);
  fn_82358FD8(param_2,(ulonglong)*param_1 + 0x140,0x20,0xffffffff821ac37c);
  fn_82358FD8(param_2,(ulonglong)*param_1 + 0x180,0x20,0xffffffff821ac38c);
  fn_82358FD8(param_2,(ulonglong)*param_1 + 0x1c0,0x20,0xffffffff821ac39c);
  fn_82358FD8(param_2,(ulonglong)*param_1 + 0x200,0x20,0xffffffff821ac3ac);
  fn_82358FD8(param_2,(ulonglong)*param_1 + 0x240,0x20,0xffffffff821ac3bc);
  fn_82358FD8(param_2,(ulonglong)*param_1 + 0x280,0x20,0xffffffff821ac3cc);
  return;
}

