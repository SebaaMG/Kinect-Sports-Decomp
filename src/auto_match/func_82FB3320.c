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
extern int fn_82FA6E98();
extern int fn_82FB2C50();
extern int fn_82FB3100();


undefined8 fn_82FB3320(undefined8 param_1,undefined8 param_2)

{
  char cVar2;
  undefined8 uVar1;
  
  cVar2 = fn_82FB2C50();
  if (cVar2 == '\0') {
    uVar1 = 1;
  }
  else {
    fn_82FA6E98();
    uVar1 = fn_82FB3100(param_1,param_2);
  }
  return uVar1;
}

