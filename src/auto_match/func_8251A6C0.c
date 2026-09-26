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
extern int fn_82230110();


undefined8 fn_8251A6C0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 1) {
    uVar1 = 0xffffffff821c29c0;
  }
  else if (param_2 == 2) {
    uVar1 = 0xffffffff821c2964;
  }
  else if (param_2 == 3) {
    uVar1 = 0xffffffff821c2998;
  }
  else if (param_2 == 4) {
    uVar1 = 0xffffffff821c2a00;
  }
  else if (param_2 == 5) {
    uVar1 = 0xffffffff821c2a58;
  }
  else if (param_2 == 6) {
    uVar1 = 0xffffffff821c2ab8;
  }
  else {
    uVar1 = 0xffffffff82196582;
  }
  fn_82230110(param_1,uVar1);
  return param_1;
}

