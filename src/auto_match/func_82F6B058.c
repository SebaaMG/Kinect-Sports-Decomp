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


longlong fn_82F6B058(int param_1,int param_2,ulonglong param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((param_3 & 0xffffffff) != 0) {
    pbVar2 = (byte *)(param_1 + -1);
    pbVar3 = (byte *)(param_2 + -1);
    do {
      pbVar2 = pbVar2 + 1;
      bVar1 = *pbVar2;
      uVar4 = (ulonglong)bVar1;
      if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
        uVar4 = uVar4 + 0x20;
      }
      pbVar3 = pbVar3 + 1;
      bVar1 = *pbVar3;
      uVar5 = (ulonglong)bVar1;
      if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
        uVar5 = uVar5 + 0x20;
      }
      param_3 = param_3 - 1;
    } while (((param_3 != 0) && ((int)uVar4 != 0)) && ((int)uVar4 == (int)uVar5));
    return uVar4 - uVar5;
  }
  return 0;
}

