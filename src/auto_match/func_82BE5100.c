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


bool fn_82BE5100(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte abStack_30 [48];
  
  pbVar4 = (byte *)(param_1 + 0x18);
  pbVar3 = abStack_30;
  abStack_30[0] = 0;
  abStack_30[1] = 0;
  abStack_30[2] = 0;
  abStack_30[3] = 0;
  abStack_30[4] = 0;
  abStack_30[5] = 0;
  abStack_30[6] = 0;
  abStack_30[7] = 0;
  abStack_30[8] = 0;
  abStack_30[9] = 0;
  abStack_30[10] = 0;
  abStack_30[0xb] = 0;
  abStack_30[0xc] = 0;
  abStack_30[0xd] = 0;
  abStack_30[0xe] = 0;
  abStack_30[0xf] = 0;
  abStack_30[0x10] = 0;
  abStack_30[0x11] = 0;
  abStack_30[0x12] = 0;
  abStack_30[0x13] = 0;
  abStack_30[0x14] = 0;
  abStack_30[0x15] = 0;
  abStack_30[0x16] = 0;
  abStack_30[0x17] = 0;
  abStack_30[0x18] = 0;
  abStack_30[0x19] = 0;
  abStack_30[0x1a] = 0;
  abStack_30[0x1b] = 0;
  abStack_30[0x1c] = 0;
  abStack_30[0x1d] = 0;
  abStack_30[0x1e] = 0;
  abStack_30[0x1f] = 0;
  abStack_30[0x20] = 0;
  abStack_30[0x21] = 0;
  abStack_30[0x22] = 0;
  abStack_30[0x23] = 0;
  do {
    bVar1 = *pbVar4;
    bVar2 = *pbVar3;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (pbVar4 != (byte *)(param_1 + 0x3c));
  return (int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0;
}

