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


void fn_82AE5778(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar6;
  longlong lVar5;
  
  uVar2 = -1L << (param_2 & 0x3f);
  lVar4 = ((param_2 & 0xffffffff) >> 3 & 0x1ffffff8) + param_1;
  uVar3 = ((param_3 & 0xffffffff) >> 3 & 0x1ffffff8) + param_1;
  uVar1 = (2L << (param_3 & 0x3f)) - 1;
  puVar6 = (ulonglong *)lVar4;
  if ((param_2 & 0xffffffff) >> 6 == (param_3 & 0xffffffff) >> 6) {
    *puVar6 = uVar1 & uVar2 | *puVar6;
  }
  else {
    *puVar6 = *puVar6 | uVar2;
    if ((lVar4 + 8U & 0xffffffff) < (uVar3 & 0xffffffff)) {
      for (lVar5 = (((uVar3 - (lVar4 + 8U)) - 1 & 0xffffffff) >> 3) + 1; lVar5 != 0;
          lVar5 = lVar5 + -1) {
        lVar4 = lVar4 + 8;
        *(undefined8 *)lVar4 = 0xffffffffffffffff;
      }
    }
    *(ulonglong *)uVar3 = *(ulonglong *)uVar3 | uVar1;
  }
  return;
}

