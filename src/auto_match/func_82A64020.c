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


undefined8 fn_82A64020(uint param_1,uint param_2,int param_3,ulonglong param_4)

{
  if (param_1 != 0) {
    if (param_1 == 1) {
      if (param_2 == 1) {
        if (param_3 == 2) {
          return 0xffffffff82a61a70;
        }
        if (param_3 == 6) {
          if ((param_4 & 4) != 0) {
            return 0xffffffff82a63350;
          }
          return 0xffffffff82a61bb0;
        }
      }
      else if (param_2 == 2) {
        if (param_3 == 6) {
          return 0xffffffff82a61de0;
        }
      }
      else if (param_2 == 6) {
        if (param_3 == 2) {
          return 0xffffffff82a62180;
        }
      }
      else if ((param_2 == 4) && (param_3 == 6)) {
        return 0xffffffff82a62518;
      }
      if ((param_4 & 2) != 0) {
        if (((param_4 & 1) != 0) || (((param_2 < 5 && (param_2 != 3)) && ((param_4 & 4) != 0)))) {
          return 0xffffffff82a63768;
        }
        if (param_2 < 7) {
          return 0xffffffff82a62c50;
        }
      }
      return 0xffffffff82a61858;
    }
    if (6 < param_1) {
      if (param_1 != 7) {
        return 0;
      }
      if (param_2 == 1) {
        if (param_3 == 2) {
          return 0xffffffff82a5f968;
        }
        if (param_3 == 6) {
          if ((param_4 & 4) != 0) {
            return 0xffffffff82a60c98;
          }
          return 0xffffffff82a5fa70;
        }
      }
      else if (param_2 == 2) {
        if (param_3 == 6) {
          if ((param_4 & 4) != 0) {
            return 0xffffffff82a61080;
          }
          return 0xffffffff82a5fc48;
        }
      }
      else if (param_2 == 6) {
        if (param_3 == 2) {
          return 0xffffffff82a5ff30;
        }
      }
      else if ((param_2 == 4) && (param_3 == 6)) {
        return 0xffffffff82a60170;
      }
      if ((param_4 & 2) != 0) {
        if (((param_4 & 1) != 0) || (((param_2 < 5 && (param_2 != 3)) && ((param_4 & 4) != 0)))) {
          return 0xffffffff82a61478;
        }
        if (param_2 < 7) {
          return 0xffffffff82a60738;
        }
      }
      return 0xffffffff82a5f7b0;
    }
  }
  return 0xffffffff82a63bc8;
}

