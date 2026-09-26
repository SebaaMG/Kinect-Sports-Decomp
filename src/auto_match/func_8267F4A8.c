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
extern int fn_8267EF68();


longlong fn_8267F4A8(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if ((param_2 & 2) == 0) {
    fn_8267EF68(param_1);
    lVar2 = param_1;
    if ((param_2 & 1) != 0) {
      fn_8267BE38(param_1);
    }
  }
  else {
    uVar1 = (ulonglong)*(uint *)((int)param_1 + -4);
    lVar2 = param_1 + -4;
    param_1 = uVar1 * 0x2c + param_1;
    while (uVar1 = uVar1 - 1, -1 < (longlong)uVar1) {
      param_1 = param_1 + -0x2c;
      fn_8267EF68(param_1);
    }
    if ((param_2 & 1) != 0) {
      fn_8265CA20(lVar2);
    }
  }
  return lVar2;
}

