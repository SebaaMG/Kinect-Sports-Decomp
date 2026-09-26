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


undefined8 fn_82A97578(uint param_1,ulonglong param_2)

{
  undefined8 in_r0;
  
  if (0x33 < param_1) {
    if (param_1 == 0x34) {
code_r0x82a97698:
      if ((param_2 & 2) != 0) {
        return 0xffffffff82a963c8;
      }
      return 0xffffffff82a96418;
    }
    if (param_1 == 0x35) {
code_r0x82a97678:
      if ((param_2 & 2) != 0) {
        return 0xffffffff82a97418;
      }
      return 0xffffffff82a97470;
    }
    if (param_1 == 0x3a) {
      return 0xffffffff82a96460;
    }
    if (param_1 == 0x3b) {
      return 0xffffffff82a974c0;
    }
    if (param_1 == 0x3c) {
      return 0xffffffff82a964b0;
    }
    if (param_1 == 0x3d) {
      return 0xffffffff82a964a8;
    }
code_r0x82a9763c:
    trapWord(0x1f,in_r0,0x16);
    return 0;
  }
  if (param_1 != 0x33) {
    if (param_1 == 0xb) {
      if ((param_2 & 8) != 0) {
        return 0xffffffff82a964c8;
      }
      return 0xffffffff82a964d8;
    }
    if (param_1 == 0xc) {
      if ((param_2 & 8) != 0) {
        return 0xffffffff82a964b8;
      }
      return 0xffffffff82a96550;
    }
    if (param_1 != 0x12) {
      if (param_1 == 0x13) goto code_r0x82a97698;
      if (param_1 == 0x14) goto code_r0x82a97678;
      if (param_1 == 0x31) {
        return 0xffffffff82a97510;
      }
      goto code_r0x82a9763c;
    }
  }
  return 0xffffffff82a963c0;
}

