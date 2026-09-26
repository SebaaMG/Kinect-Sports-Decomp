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


byte fn_82A336E8(uint param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lStack_20;
  
  if (param_1 == 0xffffffff) {
    lStack_20 = -0x8000000000000000;
  }
  else {
    lStack_20 = (ulonglong)param_1 * -10000;
  }
  do {
    lVar1 = KeDelayExecutionThread(1,param_2,&lStack_20);
    if ((param_2 & 0xff) == 0) break;
  } while ((int)lVar1 == 0x101);
  return -(lVar1 == 0xc0) & 0xc0;
}

