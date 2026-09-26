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


bool fn_82AE5600(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = ((param_3 & 0xffffffff) >> 3 & 0x1ffffff8) + param_1;
  uVar4 = ((param_2 & 0xffffffff) >> 3 & 0x1ffffff8) + param_1;
  uVar3 = -1L << (param_2 & 0x3f);
  uVar2 = (2L << (param_3 & 0x3f)) - 1;
  if ((param_2 & 0xffffffff) >> 6 == (param_3 & 0xffffffff) >> 6) {
    return (*(ulonglong *)uVar4 & uVar2 & uVar3) != 0;
  }
  uVar3 = *(ulonglong *)uVar4 & uVar3;
  while( true ) {
    if (uVar3 != 0) {
      return true;
    }
    uVar4 = uVar4 + 8;
    if ((uVar1 & 0xffffffff) <= (uVar4 & 0xffffffff)) break;
    uVar3 = *(ulonglong *)uVar4;
  }
  if ((*(ulonglong *)uVar1 & uVar2) != 0) {
    return true;
  }
  return false;
}

