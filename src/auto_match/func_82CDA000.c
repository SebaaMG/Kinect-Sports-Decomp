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


void fn_82CDA000(int param_1,int param_2,int param_3)

{
  short *psVar1;
  ulonglong uVar2;
  byte *pbVar3;
  longlong lVar4;
  
  pbVar3 = (byte *)(param_2 + 2);
  psVar1 = (short *)(param_1 + 4);
  lVar4 = 8;
  do {
    uVar2 = (ulonglong)(short)((ushort)pbVar3[-2] + psVar1[-2]);
    if (0xff < (ushort)((ushort)pbVar3[-2] + psVar1[-2])) {
      uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    pbVar3[-2] = (byte)uVar2;
    uVar2 = (ulonglong)(short)((ushort)pbVar3[-1] + psVar1[-1]);
    if (0xff < (ushort)((ushort)pbVar3[-1] + psVar1[-1])) {
      uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    pbVar3[-1] = (byte)uVar2;
    uVar2 = (ulonglong)(short)((ushort)*pbVar3 + *psVar1);
    if (0xff < (ushort)((ushort)*pbVar3 + *psVar1)) {
      uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    *pbVar3 = (byte)uVar2;
    uVar2 = (ulonglong)(short)((ushort)pbVar3[1] + psVar1[1]);
    if (0xff < (ushort)((ushort)pbVar3[1] + psVar1[1])) {
      uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    pbVar3[1] = (byte)uVar2;
    psVar1 = psVar1 + 4;
    pbVar3 = pbVar3 + param_3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

