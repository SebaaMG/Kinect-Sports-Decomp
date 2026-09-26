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
extern int fn_82BF1C20();


bool fn_82BF8CA8(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x24)) {
    pbVar3 = (byte *)fn_82BF1C20(*(undefined4 *)(param_1 + 0x1c));
    if (pbVar3 != (byte *)0x0) {
      pbVar5 = *(byte **)(param_1 + 0x30);
      pbVar4 = pbVar5 + 0x14;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar3;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar3 = pbVar3 + 1;
      } while (pbVar5 != pbVar4);
      return (int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0;
    }
  }
  return false;
}

