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


void fn_8264D6C0(uint param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((0x7f0fffff < param_1) && (param_1 < 0x87000000)) {
    return;
  }
  uVar2 = (ulonglong)param_1 & 0xffffff80;
  uVar1 = (int)((param_2 + 0x7fU & 0xffffff80) - (int)uVar2) >> 7;
  uVar4 = (longlong)(int)uVar1 & 7;
  for (uVar3 = (ulonglong)(uVar1 >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    dataCacheBlockFlush(uVar2);
    dataCacheBlockFlush(uVar2 + 0x80);
    dataCacheBlockFlush(uVar2 + 0x100);
    dataCacheBlockFlush(uVar2 + 0x180);
    dataCacheBlockFlush(uVar2 + 0x200);
    dataCacheBlockFlush(uVar2 + 0x280);
    dataCacheBlockFlush(uVar2 + 0x300);
    dataCacheBlockFlush(uVar2 + 0x380);
    uVar2 = uVar2 + 0x400;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    dataCacheBlockFlush(uVar2);
    uVar2 = uVar2 + 0x80;
  }
  sync(0);
  return;
}

