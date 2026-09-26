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


longlong fn_82A9FC88(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (longlong)((int)param_2 >> 5) + (ulonglong)((int)param_2 < 0 && (param_2 & 0x1f) != 0);
  if (-1 < (longlong)uVar2) {
    param_1 = (uVar2 & 0x3fffffff) * 4 + param_1;
    do {
      if (*(uint *)param_1 != 0xffffffff) {
        lVar1 = 0x1f;
        do {
          if ((1 << ((uint)lVar1 & 0x3f) & *(uint *)param_1) == 0) {
            return (uVar2 & 0x7ffffff) * 0x20 + lVar1;
          }
          lVar1 = lVar1 + -1;
        } while (-1 < lVar1);
      }
      uVar2 = uVar2 - 1;
      param_1 = param_1 + -4;
    } while (-1 < (longlong)uVar2);
  }
  return -1;
}

