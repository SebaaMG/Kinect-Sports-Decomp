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


longlong fn_82A37838(uint *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((int)param_2 < (int)param_1[0xc]) {
    uVar1 = param_1[0xb];
    trapWord(6,(ulonglong)uVar1,0);
    uVar2 = (int)(param_1[1] - *param_1) / 0x60 + param_2;
    return (uVar2 - (longlong)(int)((uVar2 & 0xffffffff) / (ulonglong)uVar1) * (longlong)(int)uVar1)
           * 0x60 + (ulonglong)*param_1;
  }
  return 0;
}

