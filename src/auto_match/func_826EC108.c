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
extern int fn_826EBD80();
extern unsigned int stack0x0000001e;
extern unsigned int stack0x00000026;
extern unsigned int stack0x0000002e;
extern unsigned int uStack0000001e;
extern unsigned int uStack00000026;
extern unsigned int uStack0000002e;


void fn_826EC108(longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uStack0000001e;
  undefined2 uStack00000026;
  undefined2 uStack0000002e;
  
  param_1 = param_1 + 0x14;
  uStack0000001e = param_2;
  uStack00000026 = param_3;
  uStack0000002e = param_4;
  fn_826EBD80(param_1,&stack0x0000001e);
  fn_826EBD80(param_1,&stack0x00000026);
  fn_826EBD80(param_1,&stack0x0000002e);
  return;
}

