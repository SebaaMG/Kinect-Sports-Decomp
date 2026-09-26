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
extern int fn_82BF1CA0();
extern int fn_82F6D460();
extern unsigned int lbl_831751CC;


bool fn_82BE5B80(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  bool bVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  uVar3 = fn_82F6D460(0xffffffff831751f0,0x21);
  pbVar4 = (byte *)fn_82BF1CA0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24),
                                   0xffffffff831751f0,uVar3);
  bVar5 = false;
  if (pbVar4 != (byte *)0x0) {
    pbVar7 = *(byte **)(param_1 + 0x30);
    pbVar6 = pbVar7 + 0x14;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar4;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar7 != pbVar6);
    bVar5 = (int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0;
    (*(code *)lbl_831751CC)();
  }
  return bVar5;
}

