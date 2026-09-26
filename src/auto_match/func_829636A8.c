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


undefined8 fn_829636A8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 & 0xfff00000;
  if (uVar1 < 0x73800001) {
    if (uVar1 == 0x73800000) {
      return 1;
    }
    if (uVar1 < 0x20900001) {
      if (uVar1 == 0x20900000) {
        return 1;
      }
      if (uVar1 < 0x11400001) {
        if (uVar1 == 0x11400000) {
          return 1;
        }
        if (uVar1 == 0x10f00000) {
          return 1;
        }
        if (uVar1 == 0x11100000) {
          return 1;
        }
        if (uVar1 == 0x11200000) {
          return 1;
        }
        uVar2 = 0x11300000;
      }
      else {
        if (uVar1 == 0x11500000) {
          return 1;
        }
        if (uVar1 == 0x20700000) {
          return 1;
        }
        uVar2 = 0x20800000;
      }
    }
    else if (uVar1 < 0x73400001) {
      if (uVar1 == 0x73400000) {
        return 1;
      }
      if (uVar1 == 0x73000000) {
        return 1;
      }
      if (uVar1 == 0x73100000) {
        return 1;
      }
      if (uVar1 == 0x73200000) {
        return 1;
      }
      uVar2 = 0x73300000;
    }
    else {
      if (uVar1 == 0x73500000) {
        return 1;
      }
      if (uVar1 == 0x73600000) {
        return 1;
      }
      uVar2 = 0x73700000;
    }
  }
  else if (uVar1 < 0x74100001) {
    if (uVar1 == 0x74100000) {
      return 1;
    }
    if (uVar1 < 0x73d00001) {
      if (uVar1 == 0x73d00000) {
        return 1;
      }
      if (uVar1 == 0x73900000) {
        return 1;
      }
      if (uVar1 == 0x73a00000) {
        return 1;
      }
      if (uVar1 == 0x73b00000) {
        return 1;
      }
      uVar2 = 0x73c00000;
    }
    else {
      if (uVar1 == 0x73e00000) {
        return 1;
      }
      if (uVar1 == 0x73f00000) {
        return 1;
      }
      uVar2 = 0x74000000;
    }
  }
  else if (uVar1 < 0x74600001) {
    if (uVar1 == 0x74600000) {
      return 1;
    }
    if (uVar1 == 0x74200000) {
      return 1;
    }
    if (uVar1 == 0x74300000) {
      return 1;
    }
    if (uVar1 == 0x74400000) {
      return 1;
    }
    uVar2 = 0x74500000;
  }
  else {
    if (uVar1 == 0x74700000) {
      return 1;
    }
    if (uVar1 == 0x74a00000) {
      return 1;
    }
    uVar2 = 0x74b00000;
  }
  if (uVar1 == uVar2) {
    return 1;
  }
  return 0;
}

