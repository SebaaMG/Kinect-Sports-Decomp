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
extern unsigned int iStack00000018;
extern unsigned int iStack0000001c;
extern unsigned int lbl_831BB920;
extern unsigned int uStack_10;


ulonglong fn_82F6A7A0(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iStack00000018;
  int iStack0000001c;
  ulonglong uStack_10;
  
  if ((param_1 >> 0x30 & 0x7ff0) != 0x7ff0) {
    if ((param_2 >> 0x30 & 0x7ff0) != 0x7ff0) {
      if ((param_1 & 0x7fffffffffffffff) < (param_2 & 0x7fffffffffffffff)) {
        return param_1;
      }
      uVar2 = param_2 >> 0x34 & 0x7ff;
      uStack_10 = param_1 & 0x8000000000000000;
      uVar6 = param_1 >> 0x34 & 0x7ff;
      uVar4 = (param_2 & 0xfffffffffffff) << 0xb;
      if (uVar2 == 0) {
        if ((param_2 & 0xfffffffffffff) == 0) {
          return lbl_831BB920;
        }
        uVar1 = uVar4 << (longlong)(int)LZCOUNT(uVar4);
        uVar2 = 1 - (longlong)(int)LZCOUNT(uVar4);
      }
      else {
        uVar1 = uVar4 | 0x8000000000000000;
      }
      uVar4 = (param_1 & 0xfffffffffffff) << 0xb;
      if (uVar6 == 0) {
        if ((param_1 & 0xfffffffffffff) == 0) {
          return param_1;
        }
        uVar5 = uVar4 << (longlong)(int)LZCOUNT(uVar4);
        uVar6 = 1 - (longlong)(int)LZCOUNT(uVar4);
      }
      else {
        uVar5 = uVar4 | 0x8000000000000000;
      }
      for (; (longlong)uVar2 < (longlong)uVar6; uVar6 = uVar6 - lVar3) {
        uVar4 = uVar1;
        if (uVar5 < uVar1) {
          uVar4 = uVar1 >> 1;
        }
        lVar3 = (longlong)(int)LZCOUNT(uVar5 - uVar4);
        uVar5 = uVar5 - uVar4 << lVar3;
      }
      if ((uVar6 == uVar2) && (uVar1 <= uVar5)) {
        lVar3 = (longlong)(int)LZCOUNT(uVar5 - uVar1);
        uVar5 = uVar5 - uVar1 << lVar3;
        uVar6 = uVar6 - lVar3;
      }
      if (uVar5 != 0) {
        if ((longlong)uVar6 < 1) {
          uVar4 = 1 - uVar6;
          uVar6 = 0;
          uVar5 = uVar5 >> (uVar4 & 0x7f);
        }
        uStack_10 = (uVar5 >> 0xb & 0xfffffffffffff) + (uVar6 << 0x34) + uStack_10;
      }
      return uStack_10;
    }
    iStack00000018 = (int)(param_2 >> 0x20);
    iStack0000001c = (int)param_2;
    if ((iStack00000018 == 0x7ff00000) && (iStack0000001c == 0)) {
      return param_1;
    }
    if ((iStack00000018 == -0x100000) && (iStack0000001c == 0)) {
      return param_1;
    }
  }
  return lbl_831BB920;
}

