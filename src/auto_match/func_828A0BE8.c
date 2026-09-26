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


bool fn_828A0BE8(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = param_1 + 0x24;
  do {
    bVar1 = *param_1;
    bVar2 = *param_2;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (param_1 != pbVar3);
  return (int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0;
}

