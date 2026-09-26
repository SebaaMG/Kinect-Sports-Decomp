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
extern int fn_8300CA08();
extern int fn_8302EFD8();
extern int fn_83030A78();
extern int fn_83031598();
extern int fn_83031790();
extern int fn_83033EA0();


void fn_83030DF0(longlong param_1)

{
  fn_8300CA08(param_1 + 0xa8);
  fn_83030A78(param_1);
  fn_8302EFD8(param_1);
  fn_83031598(param_1 + 0x104);
  fn_83031790(param_1 + 0xe4);
  fn_83031790(param_1 + 0xc4);
  fn_83033EA0(param_1);
  return;
}

