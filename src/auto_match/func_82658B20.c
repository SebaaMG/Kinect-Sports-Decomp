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
extern int fn_82658A88();


bool fn_82658B20(uint *param_1)

{
  uint uVar1;
  
  if ((param_1[2] & 0x1f000000) == 0x2000000) {
    if ((*param_1 & 0x8000) == 0) {
      if ((*param_1 & 0xf0000) == 0) {
        return true;
      }
    }
    else {
      uVar1 = fn_82658A88();
      if ((uVar1 & 1) == 0) {
        if ((uVar1 & 2) != 0) {
          return true;
        }
        return uVar1 == 0;
      }
    }
  }
  return false;
}

