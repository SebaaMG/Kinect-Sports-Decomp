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
extern int fn_82A1CD20();
extern int fn_82A1CD98();


longlong fn_82A1CE88(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = fn_82A1CD20(0xffffffff820886e8,0,param_2,param_3,0xffffffff832192ec);
  if (-1 < lVar1) {
    if (param_1 != 0) {
      lVar1 = fn_82A1CD20(0xffffffff820886f4,0,param_2,0,0xffffffff832192f0);
      if (lVar1 < 0) goto LAB_82a1cf18;
      lVar1 = fn_82A1CD20(0xffffffff820886f4,1,param_2,1,0xffffffff832192f4);
    }
    if (-1 < (int)lVar1) {
      return lVar1;
    }
  }
LAB_82a1cf18:
  fn_82A1CD98();
  return lVar1;
}

