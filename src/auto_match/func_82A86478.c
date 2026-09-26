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
extern unsigned int *auStack_50;
extern int fn_82A93C18();
extern int fn_82A94048();


void fn_82A86478(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined1 auStack_50 [64];
  
  if ((param_4 & 0xffffffff) < 2) {
    param_4 = 1;
  }
  fn_82A93C18(param_2,param_3,0,0,param_1,0,0,0);
  fn_82A94048(auStack_50,0,param_4);
  return;
}

