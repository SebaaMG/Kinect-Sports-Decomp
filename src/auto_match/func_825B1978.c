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


undefined8 fn_825B1978(undefined8 param_1)

{
  switch((uint)((ulonglong)param_1 >> 0x18) & 0xf) {
  default:
    return 4;
  case 3:
    return 8;
  case 4:
    return 0x10;
  case 5:
    return 0x20;
  case 6:
    return 0x40;
  case 7:
    return 0x80;
  case 8:
    return 0x100;
  case 9:
    return 0x200;
  case 10:
    return 0x400;
  case 0xb:
    return 0x800;
  case 0xc:
    return 0x1000;
  case 0xd:
    return 0x2000;
  case 0xe:
    return 0x4000;
  case 0xf:
    return 0x8000;
  }
}

