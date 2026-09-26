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


void fn_82811520(int param_1,byte *param_2,uint param_3,int param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  if (param_4 != 0) {
    return;
  }
  uVar2 = param_3 & 7;
  uVar3 = 8 - uVar2;
  pbVar4 = (byte *)((param_3 >> 3) + param_1);
  for (uVar5 = (ulonglong)(param_5 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar4 = *param_2 >> uVar2 | *pbVar4;
    pbVar4 = pbVar4 + 1;
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    *pbVar4 = bVar1 << (uVar3 & 0x3f) | *pbVar4;
  }
  *pbVar4 = *param_2 >> uVar2 | *pbVar4;
  if ((param_5 & 7) < uVar3) {
    return;
  }
  pbVar4[1] = *param_2 << (uVar3 & 0x3f) | pbVar4[1];
  return;
}

