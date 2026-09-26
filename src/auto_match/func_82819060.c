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
extern unsigned int *auStack_20;
extern int fn_82818CE0();
extern int fn_828223C8();


void fn_82819060(undefined8 param_1)

{
  ulonglong uVar1;
  uint auStack_20 [4];
  
  uVar1 = 0xffffffff8320a5dc;
  while( true ) {
    fn_828223C8(uVar1,auStack_20);
    if (auStack_20[0] == 0) break;
    fn_82818CE0(auStack_20[0],param_1);
    uVar1 = (ulonglong)auStack_20[0];
  }
  return;
}

