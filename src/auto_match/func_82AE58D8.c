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
extern unsigned int *auStack_30;
extern int fn_82AE52C8();
extern int fn_82AE5340();


ulonglong fn_82AE58D8(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint auStack_30 [12];
  
  while( true ) {
    if ((int)param_4 < 1) {
      uVar1 = fn_82AE5340(param_1 + 4,param_2,auStack_30);
    }
    else {
      uVar1 = fn_82AE52C8();
    }
    if ((int)uVar1 == -1) {
      return 0xffffffffffffffff;
    }
    if ((param_3 & 0xffffffff) == 1) {
      return (uVar1 & 0xfffffff) << 4 | 1;
    }
    uVar2 = (ulonglong)auStack_30[0];
    if ((param_3 & 0xffffffff) <=
        (((0x4a2932934dcU >> (uVar2 & 0x7f)) >> (uVar2 & 0x7f)) >> (uVar2 & 0x7f) & 7)) break;
    param_2 = uVar1 + param_4;
    if (0x20 < (param_2 + param_3 & 0xffffffff)) {
      return 0xffffffffffffffff;
    }
  }
  return ~uVar2 & 1 | (uVar1 & 0xfffffff) << 4;
}

