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
extern int fn_8265CA20();
extern int fn_8267BE38();
extern int fn_8267CF68();


longlong fn_8267D450(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_1 + -0xc;
  if ((param_2 & 2) == 0) {
    fn_8267CF68(lVar1);
    param_1 = lVar1;
    if ((param_2 & 1) != 0) {
      fn_8267BE38(lVar1);
    }
  }
  else {
    uVar2 = (ulonglong)*(uint *)((int)param_1 + -0x10);
    param_1 = param_1 + -0x10;
    lVar1 = uVar2 * 0x34 + lVar1;
    while (uVar2 = uVar2 - 1, -1 < (longlong)uVar2) {
      lVar1 = lVar1 + -0x34;
      fn_8267CF68(lVar1);
    }
    if ((param_2 & 1) != 0) {
      fn_8265CA20(param_1);
    }
  }
  return param_1;
}

