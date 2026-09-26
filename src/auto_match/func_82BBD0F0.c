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


undefined8 fn_82BBD0F0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
  case 6:
  case 7:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1c:
  case 0x1f:
  case 0x21:
  case 0x24:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2c:
  case 0x2d:
  case 0x30:
  case 0x32:
  case 0x36:
  case 0x37:
  case 0x38:
    return 4;
  case 2:
  case 8:
  case 9:
  case 0x2b:
    return 1;
  case 3:
  case 4:
  case 5:
  case 10:
  case 0xf:
  case 0x18:
  case 0x1b:
  case 0x1e:
  case 0x29:
  case 0x2e:
  case 0x2f:
    return 2;
  default:
    return 0;
  case 0x12:
  case 0x1a:
  case 0x1d:
  case 0x20:
  case 0x22:
  case 0x25:
  case 0x33:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
    return 8;
  case 0x13:
  case 0x14:
  case 0x23:
  case 0x26:
  case 0x31:
  case 0x34:
  case 0x35:
    return 0x10;
  case 0x39:
    return 0xc;
  }
}

