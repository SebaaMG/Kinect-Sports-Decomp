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


uint fn_82C800C8(int param_1,ulonglong param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)param_2;
  if (param_4 == 0) {
    if ((param_1 == 0) || (param_1 == 3)) {
      return 0;
    }
    if ((param_1 != 0x32595559) && ((param_1 != 0x59565955 && (param_1 != 0x32323450)))) {
      if (((param_1 == 0x56555949) || (param_1 == 0x30323449)) || (param_1 == 0x32315659)) {
        if (((param_2 & 1) == 0) && ((param_3 & 1) == 0)) {
          return 0;
        }
      }
      else {
        if (param_1 != 0x31313450) {
          return 0;
        }
        if (param_2 ==
            ((longlong)((int)uVar1 >> 2) + (ulonglong)((int)uVar1 < 0 && (param_2 & 3) != 0) &
            0x3fffffff) << 2) {
          return 0;
        }
      }
      return 1;
    }
    return uVar1 & 1;
  }
  if ((param_1 == 0) || (param_1 == 3)) {
    return param_3 & 1;
  }
  if ((param_1 == 0x32595559) || (param_1 == 0x59565955)) {
    if (((param_2 & 1) == 0) && ((param_3 & 1) == 0)) {
      return 0;
    }
  }
  else {
    if (((param_1 == 0x56555949) || (param_1 == 0x30323449)) || (param_1 == 0x32315659)) {
      if (((param_2 & 1) == 0) && ((param_3 & 3) == 0)) {
        return 0;
      }
      return 1;
    }
    if (param_1 != 0x31313450) {
      return 0;
    }
    if ((param_2 & 3) == 0) {
      if ((param_3 & 1) != 0) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}

