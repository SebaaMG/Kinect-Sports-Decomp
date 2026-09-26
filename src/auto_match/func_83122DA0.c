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
extern int fn_822B7998();
extern int fn_824CD148();
extern int fn_82F63EC8();
extern unsigned int lbl_83294D9C;
extern unsigned int lbl_83294DA0;


void fn_83122DA0(void)

{
  undefined8 uVar1;
  
  uVar1 = fn_824CD148();
  lbl_83294D9C = (undefined4)uVar1;
  lbl_83294DA0 = "HumanControlFootball";
  fn_822B7998(uVar1,0xffffffff821c0d60,0xffffffff824d4a70,0x4c);
  fn_82F63EC8(0xffffffff8313eda0);
  return;
}

