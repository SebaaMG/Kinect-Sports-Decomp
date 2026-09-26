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
extern int fn_82AE5A50();


void fn_82ADEDB8(int param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_2 + param_3;
  if ((param_2 & 0xffffffff) < (uVar2 & 0xffffffff)) {
    uVar3 = (param_2 & 0x3fffffff) << 2;
    do {
      uVar1 = 0xf - (((2L << (uVar3 + 3 & 0x3f)) - 1U &
                      *(ulonglong *)(((int)((uVar3 & 0xffffffff) >> 6) + 1) * 8 + param_1) &
                     -1L << (uVar3 & 0x3f)) >> (uVar3 & 0x3f) & 0xffffffff);
      if ((uVar1 & 0xffffffff) != 0) {
        fn_82AE5A50(param_1,(param_2 & 0xfffffff) << 4 | uVar1 & 0xffffffff0000000f);
      }
      param_2 = param_2 + 1;
      uVar3 = uVar3 + 4;
    } while ((param_2 & 0xffffffff) < (uVar2 & 0xffffffff));
  }
  return;
}

