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
extern int fn_82AE5DE8();


void fn_82AE7088(int param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 + param_3;
  if ((param_2 & 0xffffffff) < (uVar2 & 0xffffffff)) {
    do {
      uVar1 = param_2 & 0x3f;
      uVar1 = 1 - ((*(ulonglong *)(((int)((param_2 & 0xffffffff) >> 6) + 1) * 8 + param_1) &
                    (2L << uVar1) - 1U & -1L << uVar1) >> uVar1 & 0xffffffff);
      if ((uVar1 & 0xffffffff) != 0) {
        fn_82AE5DE8(param_1,(param_2 & 0xfffffff) << 4 | uVar1 & 0xffffffff0000000f);
      }
      param_2 = param_2 + 1;
    } while ((param_2 & 0xffffffff) < (uVar2 & 0xffffffff));
  }
  return;
}

