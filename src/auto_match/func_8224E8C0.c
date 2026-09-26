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
extern int fn_8224F2B8();
extern int fn_828A9550();


void fn_8224E8C0(int param_1)

{
  ulonglong uVar1;
  
  fn_828A9550();
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x10);
  fn_8224F2B8(param_1 + 0x2e8,param_1,uVar1 + 0x2fc);
  fn_8224F2B8(param_1 + 0x33c,param_1,uVar1 + 0x354);
  fn_8224F2B8(param_1 + 0x390,param_1,uVar1 + 0x3ac);
  return;
}

