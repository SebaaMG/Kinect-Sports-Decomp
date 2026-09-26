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
extern int fn_82660720();
extern int fn_82660760();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack_10;
extern unsigned int uStack_c;


uint fn_826607D0(undefined4 param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uStack00000014;
  uint uStack0000001c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack_c = fn_82660720(param_1);
  lVar1 = fn_82660760(uStack00000014);
  if ((lVar1 - (ulonglong)uStack_c / 2 & 0xffffffff) < (ulonglong)uStack_c) {
    uStack_c = 0;
  }
  else {
    uStack_c = uStack_c + uStack_c / 2;
  }
  uStack_10 = uStack_c;
  if (uStack_c < uStack0000001c) {
    uStack_10 = uStack0000001c;
  }
  return uStack_10;
}

