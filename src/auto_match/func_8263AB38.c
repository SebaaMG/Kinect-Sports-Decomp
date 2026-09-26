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


void fn_8263AB38(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_1 < 0x2d) {
    if (param_1 == 0x2c) {
LAB_8263ab88:
      uVar1 = 4;
      goto LAB_8263ab78;
    }
    if (10 < param_1) {
      if (param_1 < 0xd) {
LAB_8263ab74:
        uVar1 = 2;
LAB_8263ab78:
        *param_2 = uVar1;
        *param_3 = 1;
        return;
      }
      if (0x11 < param_1) {
        if (param_1 < 0x15) goto LAB_8263abc0;
        if (param_1 == 0x27) goto LAB_8263ab88;
        if (param_1 == 0x28) goto LAB_8263ab74;
      }
    }
  }
  else if ((param_1 == 0x31) ||
          ((0x32 < param_1 && ((param_1 < 0x36 || ((0x39 < param_1 && (param_1 < 0x3e)))))))) {
LAB_8263abc0:
    uVar1 = 4;
    goto LAB_8263abc4;
  }
  uVar1 = 1;
LAB_8263abc4:
  *param_2 = uVar1;
  *param_3 = uVar1;
  return;
}

