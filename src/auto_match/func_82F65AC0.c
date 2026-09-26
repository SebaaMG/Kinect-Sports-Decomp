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


void fn_82F65AC0(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)(param_1 + -1);
  pbVar1 = (byte *)(param_2 + -1);
  do {
    do {
      pbVar1 = pbVar1 + 1;
      bVar3 = *pbVar1;
      pbVar4 = pbVar4 + 1;
      bVar2 = *pbVar4;
      if (bVar3 == 0) {
        return;
      }
    } while (bVar2 == bVar3);
    if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
      bVar3 = bVar3 | 0x20;
    }
    if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
      bVar2 = bVar2 | 0x20;
    }
  } while (bVar2 == bVar3);
  return;
}

