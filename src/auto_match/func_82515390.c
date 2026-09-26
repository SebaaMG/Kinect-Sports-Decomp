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
extern int fn_8288ACA0();


undefined8 fn_82515390(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0x17) {
    fn_8288ACA0();
  }
  else {
    switch(param_3) {
    case 0x17:
      uVar1 = 0xffffffff821c2600;
      break;
    case 0x18:
      uVar1 = 0xffffffff821c2614;
      break;
    case 0x19:
      uVar1 = 0xffffffff821c2624;
      break;
    case 0x1a:
      uVar1 = 0xffffffff821c2634;
      break;
    case 0x1b:
      uVar1 = 0xffffffff821c2648;
      break;
    case 0x1c:
      uVar1 = 0xffffffff821c2670;
      break;
    case 0x1d:
      uVar1 = 0xffffffff821c26d0;
      break;
    case 0x1e:
      uVar1 = 0xffffffff821c2690;
      break;
    case 0x1f:
      uVar1 = 0xffffffff821c26a4;
      break;
    case 0x20:
      uVar1 = 0xffffffff821c26f4;
      break;
    default:
      uVar1 = 0xffffffff82196582;
    }
    fn_82230110(param_1,uVar1);
  }
  return param_1;
}

