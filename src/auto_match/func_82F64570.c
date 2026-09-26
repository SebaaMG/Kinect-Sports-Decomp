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


bool fn_82F64570(int param_1,int param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)(param_1 + 9);
  pbVar3 = (byte *)(param_2 + 9);
  do {
    lVar1 = (ulonglong)*pbVar3 - (ulonglong)*pbVar2;
    if (*pbVar3 == 0) break;
    pbVar3 = pbVar3 + 1;
    pbVar2 = pbVar2 + 1;
  } while ((int)lVar1 == 0);
  return lVar1 != 0;
}

