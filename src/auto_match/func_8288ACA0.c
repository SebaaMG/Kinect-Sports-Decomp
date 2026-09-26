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


undefined8 fn_8288ACA0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 0:
    uVar1 = 0xffffffff82023530;
    break;
  case 1:
    uVar1 = 0xffffffff82023510;
    break;
  case 2:
    uVar1 = 0xffffffff820234d8;
    break;
  case 3:
    uVar1 = 0xffffffff82023488;
    break;
  case 4:
    uVar1 = 0xffffffff82023440;
    break;
  case 5:
    uVar1 = 0xffffffff82023400;
    break;
  case 6:
    uVar1 = 0xffffffff820233e8;
    break;
  case 7:
    uVar1 = 0xffffffff820233bc;
    break;
  case 8:
    uVar1 = 0xffffffff82023390;
    break;
  case 9:
    uVar1 = 0xffffffff82023338;
    break;
  case 10:
    uVar1 = 0xffffffff82023314;
    break;
  case 0xb:
    uVar1 = 0xffffffff820232f0;
    break;
  case 0xc:
    uVar1 = 0xffffffff820232b0;
    break;
  case 0xd:
    uVar1 = 0xffffffff82023258;
    break;
  case 0xe:
    uVar1 = 0xffffffff82023220;
    break;
  case 0xf:
    uVar1 = 0xffffffff820231f0;
    break;
  case 0x10:
    uVar1 = 0xffffffff820231dc;
    break;
  case 0x11:
    uVar1 = 0xffffffff820231b0;
    break;
  case 0x12:
    uVar1 = 0xffffffff82023194;
    break;
  case 0x13:
    uVar1 = 0xffffffff82023174;
    break;
  case 0x14:
    uVar1 = 0xffffffff82023144;
    break;
  case 0x15:
    uVar1 = 0xffffffff820230f0;
    break;
  case 0x16:
    uVar1 = 0xffffffff820230d8;
    break;
  default:
    uVar1 = 0xffffffff82196582;
  }
  fn_82230110(param_1,uVar1);
  return param_1;
}

