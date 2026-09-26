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


longlong fn_82B17070(uint *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = -1 << (param_2 & 0x1f);
  if (param_2 >> 5 != 0) {
    return -1;
  }
  uVar2 = 0;
  do {
    uVar1 = *param_1 & uVar1;
    if (uVar1 != 0) {
      return ((uVar2 & 0x7ffffff) * 0x20 - LZCOUNT(uVar1 & ~(uVar1 - 1))) + 0x1f;
    }
    uVar2 = uVar2 + 1;
    uVar1 = 0xffffffff;
    param_1 = param_1 + 1;
  } while ((uVar2 & 0xffffffff) == 0);
  return -1;
}

