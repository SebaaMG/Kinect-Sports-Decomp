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


longlong fn_829B7788(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  trapWord(6,param_2,0);
  uVar1 = (param_1 + param_2) - 1;
  trapWord(5,param_2 & ~(((uVar1 & 0x7fffffff) << 1 | (uVar1 & 0xffffffff) >> 0x1f) - 1),0xffff);
  return (longlong)((int)uVar1 / (int)param_2) * (longlong)(int)param_2;
}

