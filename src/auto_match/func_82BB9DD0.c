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
extern unsigned int *auStack_5c;
extern unsigned int *auStack_74;
extern unsigned int *auStack_8c;
extern unsigned int *auStack_b0;
extern int fn_82AB15D0();
extern int fn_82BA1048();
extern int fn_82BB9AE8();
extern int fn_82BBFDF0();


void fn_82BB9DD0(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_b0 [36];
  undefined1 auStack_8c [24];
  undefined1 auStack_74 [24];
  undefined1 auStack_5c [76];
  
  fn_82BBFDF0(auStack_8c);
  fn_82BBFDF0(auStack_74);
  fn_82BBFDF0(auStack_5c);
  fn_82BB9AE8(auStack_b0,param_1);
  cVar1 = fn_82BA1048(param_1);
  if (cVar1 == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0800,0xffffffff820e0168,0x1eb);
  }
  return;
}

