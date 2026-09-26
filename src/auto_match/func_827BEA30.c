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
extern int fn_827BE978();


void fn_827BEA30(longlong param_1)

{
  fn_827BE978(param_1,param_1 + 0x58,0xffffffff82017ac4,0xffffffff82017a00);
  fn_827BE978(param_1,param_1 + 0x68,0xffffffff82017a0c,0xffffffff82017a20);
  fn_827BE978(param_1,param_1 + 0x5c,0xffffffff820179ec,0xffffffff82017a00);
  fn_827BE978(param_1,param_1 + 0x6c,0xffffffff82017930,0xffffffff82017948);
  return;
}

