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


undefined8 fn_8288ABF8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  undefined8 uVar2;
  
  if ((uint)param_3 < 6) {
    bVar1 = (uint)param_3 != 0;
    if (param_3 == 1 && bVar1) {
      uVar2 = 0xffffffff820230b0;
    }
    else if (param_3 == 2 && bVar1) {
      uVar2 = 0xffffffff8202309c;
    }
    else if (param_3 == 3 && bVar1) {
      uVar2 = 0xffffffff82023088;
    }
    else if (param_3 == 4 && bVar1) {
      uVar2 = 0xffffffff82023070;
    }
    else if (bVar1) {
      uVar2 = 0xffffffff82023044;
    }
    else {
      uVar2 = 0xffffffff820230d0;
    }
  }
  else {
    uVar2 = 0xffffffff82196582;
  }
  fn_82230110(param_1,uVar2);
  return param_1;
}

