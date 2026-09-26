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
extern int fn_82691DB0();


void fn_82692948(int param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = fn_82691DB0();
  trapWord(6,uVar1,0);
  *(int *)(param_1 + 0x220) =
       (int)(((uVar1 + param_2) - 1 & 0xffffffff) / (uVar1 & 0xffffffff)) * (int)uVar1;
  return;
}

