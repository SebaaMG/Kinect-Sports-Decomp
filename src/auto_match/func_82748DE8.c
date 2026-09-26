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
extern int fn_82681B80();


void fn_82748DE8(longlong param_1,longlong param_2,longlong param_3)

{
  param_1 = param_1 + 0x78;
  param_2 = param_2 + 0x10;
  fn_82681B80(param_2,param_1,0xffffffff82012bc4,param_3);
  fn_82681B80(param_2,param_1,0xffffffff82012bb4,param_3 + 0x10);
  fn_82681B80(param_2,param_1,0xffffffff82012ba4,param_3 + 0x20);
  fn_82681B80(param_2,param_1,0xffffffff82012b94,param_3 + 0x30);
  fn_82681B80(param_2,param_1,0xffffffff82012b88,param_3 + 0x40);
  fn_82681B80(param_2,param_1,0xffffffff82012b7c,param_3 + 0x50);
  fn_82681B80(param_2,param_1,0xffffffff82012b70,param_3 + 0x60);
  fn_82681B80(param_2,param_1,0xffffffff82012b64,param_3 + 0x70);
  return;
}

