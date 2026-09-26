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
extern int fn_82810360();
extern int fn_8281D340();


void fn_8306B918(ulonglong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
    lVar1 = 6;
    uVar2 = param_1;
    do {
      fn_82810360(uVar2,(param_2 - param_1) + uVar2);
      lVar1 = lVar1 + -1;
      uVar2 = uVar2 + 0xc;
    } while (lVar1 != 0);
    lVar3 = param_1 + 0x48;
    lVar1 = 6;
    do {
      fn_8281D340(lVar3,lVar3 + (param_2 - param_1));
      lVar1 = lVar1 + -1;
      lVar3 = lVar3 + 0x10;
    } while (lVar1 != 0);
  }
  return;
}

