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


undefined8 fn_82773748(ulonglong param_1,ushort param_2)

{
  undefined8 uVar1;
  
  if (((param_1 & 4) != 0) &&
     ((((0x10ff < param_2 && (param_2 < 0x1200)) || ((0x312f < param_2 && (param_2 < 0x3190)))) ||
      ((0xabff < param_2 && (param_2 < 0xd7a4)))))) {
    return 0;
  }
  if (((param_2 < 0x1100) || (0x11ff < param_2)) &&
     ((((param_2 < 0x3000 || (0xd7af < param_2)) && ((param_2 < 0xf900 || (0xfaff < param_2)))) &&
      ((param_2 < 0xff00 || (0xffdc < param_2)))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

