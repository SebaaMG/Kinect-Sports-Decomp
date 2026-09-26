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
extern unsigned int *auStack_f0;
extern int fn_82DE0C30();
extern int fn_82DE0D10();
extern int fn_82DE0D40();


void fn_82DCDEA8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f0 [208];
  
  fn_82DE0D10(auStack_f0);
  fn_82DE0C30(auStack_f0,param_1,param_2,param_3);
  fn_82DE0D40(auStack_f0);
  return;
}

