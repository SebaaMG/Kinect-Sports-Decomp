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


/* WARNING: Removing unreachable block (ram,0x82ae535c) */

longlong fn_82AE5340(longlong param_1,uint param_2,uint *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)(param_2 >> 5);
  uVar1 = (ulonglong)(uint)(2 << (param_2 & 0x1f)) - 1;
  param_1 = uVar2 * 4 + param_1;
  do {
    uVar1 = uVar1 & ~(ulonglong)*(uint *)param_1;
    if (uVar1 != 0) {
      lVar3 = 0x1f - LZCOUNT((int)uVar1);
      *param_3 = *(uint *)param_1 >> ((uint)lVar3 & 0x3c) & 0xf;
      return (uVar2 & 0x7ffffff) * 0x20 + lVar3;
    }
    uVar2 = uVar2 - 1;
    uVar1 = 0xffffffffffffffff;
    param_1 = param_1 + -4;
  } while (-1 < (longlong)uVar2);
  return -1;
}

