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
extern int fn_82A1E300();
extern int fn_82F610B8();
extern int fn_82F61358();


undefined8 fn_82F613F8(undefined8 param_1)

{
  char cVar1;
  
  while( true ) {
    cVar1 = fn_82F610B8(param_1,0xffffffffffffffff);
    if (cVar1 == '\0') break;
    while( true ) {
      cVar1 = fn_82F61358(param_1);
      if (cVar1 == '\0') break;
      fn_82A1E300();
    }
  }
  return 0;
}

