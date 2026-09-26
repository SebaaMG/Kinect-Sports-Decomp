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
extern int fn_82D698D0();
extern int fn_82D69910();
extern int fn_82D69958();
extern int fn_82D699A8();
extern int fn_82D69A20();
extern int fn_82D69A68();
extern int fn_82D69B10();
extern int fn_82D69C40();


void fn_82D69FD0(undefined4 *param_1)

{
  *param_1 = fn_82D69A68;
  param_1[0xb] = fn_82D69C40;
  param_1[10] = fn_82D69B10;
  param_1[2] = fn_82D699A8;
  param_1[3] = fn_82D698D0;
  param_1[4] = fn_82D69910;
  param_1[5] = fn_82D69958;
  param_1[1] = fn_82D69A20;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}

