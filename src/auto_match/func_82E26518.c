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
extern unsigned int lbl_821533D8;
extern unsigned int lbl_821533E8;
extern unsigned int lbl_82153408;
extern unsigned int lbl_82153448;


longlong fn_82E26518(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)(param_1 + 0x2c);
  pbVar3 = &lbl_821533D8;
  pbVar4 = pbVar5;
  do {
    bVar1 = *pbVar4;
    bVar2 = *pbVar3;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (pbVar4 != (byte *)(param_1 + 0x3c));
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    pbVar3 = (byte *)&lbl_82153408;
    pbVar4 = pbVar5;
    do {
      bVar1 = *pbVar4;
      bVar2 = *pbVar3;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
    } while (pbVar4 != (byte *)(param_1 + 0x3c));
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      pbVar3 = (byte *)&lbl_821533E8;
      pbVar4 = pbVar5;
      do {
        bVar1 = *pbVar4;
        bVar2 = *pbVar3;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar4 = pbVar4 + 1;
        pbVar3 = pbVar3 + 1;
      } while (pbVar4 != (byte *)(param_1 + 0x3c));
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
        pbVar4 = &lbl_82153448;
        do {
          bVar1 = *pbVar5;
          bVar2 = *pbVar4;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar5 = pbVar5 + 1;
          pbVar4 = pbVar4 + 1;
        } while (pbVar5 != (byte *)(param_1 + 0x3c));
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          return 0;
        }
      }
      if (*(uint *)(param_1 + 0x40) < 0x70) {
        return 0;
      }
      return (ulonglong)*(uint *)(param_1 + 0x44) + 0x48;
    }
  }
  if (*(uint *)(param_1 + 0x40) < 0x58) {
    return 0;
  }
  return (ulonglong)*(uint *)(param_1 + 0x44) + 0x30;
}

