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
extern int fn_82A32330();
extern int fn_82A32654();
extern int fn_82F68CC0();


longlong fn_82A1DBD8(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = -param_1 & 0x7f;
  if ((param_3 & 0xffffffff) < 0x100) {
    param_1 = fn_82F68CC0();
  }
  else {
    lVar2 = param_1;
    if (uVar1 != 0) {
      fn_82F68CC0(param_1,param_2,uVar1);
      lVar2 = uVar1 + param_1;
      param_2 = uVar1 + param_2;
      param_3 = param_3 - uVar1;
    }
    uVar1 = param_3 & 0xffffff80;
    if ((param_2 & 0xf) == 0) {
      fn_82A32330(lVar2,param_2,uVar1);
    }
    else {
      fn_82A32654();
    }
    if ((param_3 & 0x7f) != 0) {
      fn_82F68CC0(uVar1 + lVar2,uVar1 + param_2,param_3 & 0x7f);
    }
  }
  return param_1;
}

