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


void fn_82FBC770(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (0x3ff < (param_4 & 0xffffffff)) {
    param_4 = 0x400;
  }
  uVar2 = param_3 - param_2;
  if ((param_4 & 0xffffffff) <= (param_3 - param_2 & 0xffffffffU)) {
    uVar2 = param_4;
  }
  lVar3 = 0;
  if ((uVar2 & 0xffffffff) != 0) {
    lVar1 = ((uVar2 - 1 & 0xffffffff) >> 7) + 1;
    do {
      dataCacheBlockTouch(lVar3 + param_2);
      lVar3 = lVar3 + 0x80;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if ((param_4 & 0xffffffff) <= (uVar2 & 0xffffffff)) {
    return;
  }
  uVar4 = param_3 - param_1;
  if ((param_4 - uVar2 & 0xffffffff) <= (param_3 - param_1 & 0xffffffffU)) {
    uVar4 = param_4 - uVar2;
  }
  lVar3 = 0;
  if ((uVar4 & 0xffffffff) == 0) {
    return;
  }
  lVar1 = ((uVar4 - 1 & 0xffffffff) >> 7) + 1;
  do {
    dataCacheBlockTouch(lVar3 + param_2);
    lVar3 = lVar3 + 0x80;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

