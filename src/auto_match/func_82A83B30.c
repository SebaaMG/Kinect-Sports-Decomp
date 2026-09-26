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
extern unsigned int lbl_8202E618;


longlong fn_82A83B30(int *param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  lVar3 = 0;
  uVar5 = 0x160;
  do {
    pbVar7 = (byte *)(uVar5 + *param_1);
    pbVar4 = pbVar7 + 0x10;
    pbVar6 = (byte *)&lbl_8202E618;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != pbVar4);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      return lVar3;
    }
    uVar5 = uVar5 + 0x20;
    lVar3 = lVar3 + 1;
    if (0x2ff < uVar5) {
      return 0xd;
    }
  } while( true );
}

