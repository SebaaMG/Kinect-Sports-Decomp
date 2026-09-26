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
extern int fn_82BE5240();
extern int fn_82BF1C20();


undefined8 fn_82BF1098(int param_1,ulonglong param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar4;
  undefined8 uVar3;
  byte *pbVar5;
  byte *pbVar6;
  
  if (((param_2 & 0xffffffff) == 0) || ((int)param_3 == 0)) {
    uVar3 = 0x1f6;
  }
  else {
    pbVar4 = (byte *)fn_82BF1C20(param_2,param_3);
    pbVar6 = *(byte **)(param_1 + 0x6c);
    pbVar5 = pbVar4 + 0x14;
    do {
      bVar1 = *pbVar4;
      bVar2 = *pbVar6;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar4 != pbVar5);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82BE5240(param_1,0x1f6,0xffffffff82196582);
    }
  }
  return uVar3;
}

