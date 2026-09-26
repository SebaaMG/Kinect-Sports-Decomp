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


void fn_82CBB438(int param_1,undefined8 param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  short *psVar6;
  longlong lVar7;
  
  puVar5 = (undefined1 *)(param_1 + 2);
  psVar6 = (short *)(param_3 + 4);
  lVar7 = 8;
  do {
    uVar4 = (longlong)psVar6[-2] + 0x80;
    uVar1 = (longlong)psVar6[-1] + 0x80;
    uVar2 = (longlong)*psVar6 + 0x80;
    uVar3 = (longlong)psVar6[1] + 0x80;
    if (0xff < (uVar4 & 0xffffffff)) {
      uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar1 & 0xffffffff)) {
      uVar1 = ((uVar1 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar2 & 0xffffffff)) {
      uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar3 & 0xffffffff)) {
      uVar3 = ((uVar3 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    puVar5[-2] = (char)uVar4;
    *puVar5 = (char)uVar2;
    puVar5[1] = (char)uVar3;
    puVar5[-1] = (char)uVar1;
    uVar4 = (longlong)psVar6[2] + 0x80;
    uVar1 = (longlong)psVar6[3] + 0x80;
    uVar2 = (longlong)psVar6[4] + 0x80;
    uVar3 = (longlong)psVar6[5] + 0x80;
    if (0xff < (uVar4 & 0xffffffff)) {
      uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar1 & 0xffffffff)) {
      uVar1 = ((uVar1 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar2 & 0xffffffff)) {
      uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar3 & 0xffffffff)) {
      uVar3 = ((uVar3 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    puVar5[2] = (char)uVar4;
    psVar6 = psVar6 + 8;
    puVar5[3] = (char)uVar1;
    puVar5[4] = (char)uVar2;
    puVar5[5] = (char)uVar3;
    puVar5 = puVar5 + param_4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

