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


undefined8 fn_82A043C8(int param_1,int param_2)

{
  if (param_2 == 0) {
    switch(param_1) {
    case 0x15:
      return 0x16;
    case 0x16:
      return 0x15;
    case 0x19:
      return 0x1a;
    case 0x1a:
      return 0x19;
    case 0x1d:
      return 0x1e;
    case 0x1e:
      return 0x1d;
    }
  }
  else if (param_2 == 1) {
    if (param_1 == 0x1d) {
      return 0x1a;
    }
    if (param_1 == 0x1e) {
      return 0x19;
    }
  }
  return 0x1f;
}

