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


undefined8 fn_82A687F0(longlong param_1)

{
  if ((int)param_1 == 0) {
    return 0xffffffff82a67e20;
  }
  if (param_1 == 1) {
    return 0xffffffff82a67ca8;
  }
  if (param_1 == 2) {
    return 0xffffffff82a67fb8;
  }
  if (param_1 != 3) {
    if (param_1 == 4) {
      return 0xffffffff82a681a0;
    }
    if (param_1 != 5) {
      if (param_1 != 6) {
        return 0xffffffff82a67b88;
      }
      return 0xffffffff82a68680;
    }
    return 0xffffffff82a684f8;
  }
  return 0xffffffff82a68370;
}

