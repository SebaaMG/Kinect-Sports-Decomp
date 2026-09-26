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


undefined8 fn_82BBD158(undefined4 param_1)

{
  switch(param_1) {
  case 2:
  case 8:
  case 9:
    return 1;
  case 3:
  case 4:
  case 5:
  case 10:
  case 0xf:
  case 0x18:
  case 0x1e:
    return 2;
  case 6:
  case 7:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x19:
  case 0x1f:
  case 0x24:
    return 4;
  default:
    return 0;
  case 0x1a:
  case 0x20:
  case 0x25:
    return 8;
  case 0x26:
    return 0x10;
  }
}

