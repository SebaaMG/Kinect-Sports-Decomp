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
extern unsigned int lbl_83155A28;


undefined4 fn_826A74A0(uint *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)*param_1;
  if (uVar1 < 0x40001) {
    if (uVar1 < 0x8000) {
      if (uVar1 < 0x80) {
        if (uVar1 < 8) {
          if (uVar1 < 2) {
            uVar1 = -((ulonglong)(uVar1 == 0) - 1);
          }
          else {
            uVar1 = 3 - (ulonglong)(uVar1 < 4);
          }
        }
        else if (uVar1 < 0x20) {
          uVar1 = 5 - (ulonglong)(uVar1 < 0x10);
        }
        else {
          uVar1 = 7 - (ulonglong)(uVar1 < 0x40);
        }
      }
      else if (uVar1 < 0x800) {
        if (uVar1 < 0x200) {
          uVar1 = 9 - (ulonglong)(uVar1 < 0x100);
        }
        else {
          uVar1 = 0xb - (ulonglong)(uVar1 < 0x400);
        }
      }
      else if (uVar1 < 0x2000) {
        uVar1 = 0xd - (ulonglong)(uVar1 < 0x1000);
      }
      else {
        uVar1 = 0xf - (ulonglong)(uVar1 < 0x4000);
      }
    }
    else if (uVar1 < 0x800000) {
      if (uVar1 < 0x80000) {
        if (uVar1 < 0x20000) {
          uVar1 = 0x11 - (ulonglong)(uVar1 < 0x10000);
        }
        else {
          uVar1 = 0x13 - (ulonglong)(uVar1 < 0x40000);
        }
      }
      else if (uVar1 < 0x200000) {
        uVar1 = 0x15 - (ulonglong)(uVar1 < 0x100000);
      }
      else {
        uVar1 = 0x17 - (ulonglong)(uVar1 < 0x400000);
      }
    }
    else if (uVar1 < 0x8000000) {
      if (uVar1 < 0x2000000) {
        uVar1 = 0x19 - (ulonglong)(uVar1 < 0x1000000);
      }
      else {
        uVar1 = 0x1b - (ulonglong)(uVar1 < 0x4000000);
      }
    }
    else if (uVar1 < 0x20000000) {
      uVar1 = 0x1d - (ulonglong)(uVar1 < 0x10000000);
    }
    else if (uVar1 < 0x40000000) {
      uVar1 = 0x1e;
    }
    else {
      uVar1 = 0x20 - (ulonglong)(uVar1 < 0xffffffff80000000);
    }
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = uVar1 - 0x7ffec;
  }
  if (((uVar1 & 0xffffffff) != 0) && ((uVar1 & 0xffffffff) < 0x1e)) {
    return *(undefined4 *)(&lbl_83155A28 + (int)((uVar1 & 0xffffffff) << 2));
  }
  return 0x2c;
}

