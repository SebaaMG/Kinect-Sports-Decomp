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
extern int fn_827E0580();
extern int fn_827E1118();


longlong fn_827E1280(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  
  fn_827E0580(&puStack_20,param_1,param_2);
  lVar1 = 0;
  for (; puStack_20 != puStack_1c; puStack_20 = (undefined4 *)*puStack_20) {
    lVar1 = lVar1 + 1;
  }
  fn_827E1118(&puStack_20,param_1);
  return lVar1;
}

