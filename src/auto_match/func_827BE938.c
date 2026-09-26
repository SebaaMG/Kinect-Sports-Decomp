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
extern int fn_827BE778();


void fn_827BE938(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((int)param_2 < 1) {
    param_2 = 1;
  }
  if (100 < (int)param_2) {
    param_2 = 100;
  }
  if ((int)param_2 < 0x32) {
    trapWord(6,param_2,0);
    lVar1 = (longlong)(5000 / (int)param_2);
  }
  else {
    lVar1 = (100U - param_2 & 0x7fffffff) << 1;
  }
  fn_827BE778(param_1,0,0xffffffff82017830,lVar1,param_3);
  fn_827BE778(param_1,1,0xffffffff82017730,lVar1,param_3);
  return;
}

