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
extern int fn_82515390();


undefined8 fn_82231C18(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0x21) {
    fn_82515390();
  }
  else {
    if (param_3 == 0x21) {
      uVar1 = 0xffffffff8219642c;
    }
    else if (param_3 == 0x22) {
      uVar1 = 0xffffffff82196458;
    }
    else if (param_3 == 0x23) {
      uVar1 = 0xffffffff82196498;
    }
    else if (param_3 == 0x24) {
      uVar1 = 0xffffffff821964f8;
    }
    else if (param_3 == 0x25) {
      uVar1 = 0xffffffff82196554;
    }
    else {
      uVar1 = 0xffffffff82196582;
    }
    fn_82230110(param_1,uVar1);
  }
  return param_1;
}

