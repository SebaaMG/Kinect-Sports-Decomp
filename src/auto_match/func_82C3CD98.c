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


undefined8 fn_82C3CD98(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 6:
    return 0;
  case 1:
    return 0xffffffff80600005;
  case 2:
    return 0x600000;
  case 5:
    return 0xffffffff80600004;
  case 7:
    return 0xffffffff80600008;
  case 0xfffffff7:
    return 0xffffffff80600003;
  default:
    return 0xffffffff80004005;
  case 0xfffffffa:
    return 0xffffffff80600006;
  case 0xfffffffb:
    return 0xffffffff805000b7;
  case 0xfffffffd:
    return 0xffffffff80070057;
  case 0xffffffff:
    return 0xffffffff80600000;
  }
}

