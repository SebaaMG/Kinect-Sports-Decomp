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


bool fn_828EDC38(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  byte abStack_10 [8];
  byte abStack_8 [8];
  
  pbVar3 = abStack_10;
  abStack_10[0] = 0;
  lVar4 = 7;
  do {
    pbVar3 = pbVar3 + 1;
    *pbVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  pbVar3 = abStack_10;
  do {
    bVar1 = *pbVar3;
    bVar2 = *param_1;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar3 = pbVar3 + 1;
    param_1 = param_1 + 1;
  } while (pbVar3 != abStack_8);
  return (int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0;
}

