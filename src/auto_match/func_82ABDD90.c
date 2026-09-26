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


longlong fn_82ABDD90(undefined8 param_1,undefined4 param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  
  lVar1 = (param_3 + 0xbU & 0x3fffffff) * 4;
  switch(param_2) {
  case 0x54:
    return lVar1 + 0x20;
  case 0x55:
  case 0x60:
    return lVar1 + 0x14;
  case 0x56:
  case 0x57:
  case 0x59:
  case 0x5a:
  case 0x75:
    return lVar1 + 0x10;
  case 0x58:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x62:
  case 0x65:
  case 0x66:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x76:
  case 0x79:
  case 0x7a:
  case 0x7b:
    goto switchD_82abddc8_caseD_58;
  case 0x5e:
  case 0x77:
    return lVar1 + 0xc;
  case 0x61:
  case 99:
  case 100:
    return lVar1 + 0x18;
  case 0x67:
  case 0x74:
  case 0x78:
    lVar1 = lVar1 + 4;
switchD_82abddc8_caseD_58:
    return lVar1;
  case 0x68:
  case 0x70:
  case 0x7c:
    return lVar1 + 8;
  case 0x7d:
    return (param_4 & 0x3fffffff) * 4 + lVar1;
  default:
    return lVar1;
  }
}

