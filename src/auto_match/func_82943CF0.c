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
extern int fn_829410A8();


undefined8
fn_82943CF0(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,uint param_5
             ,ulonglong param_6)

{
  undefined8 uVar1;
  
  if ((((param_3 & 0xffffffff) == (param_4 & 0xffffffff)) &&
      ((param_3 & 0xffffffff) == (ulonglong)param_5)) &&
     ((param_3 & 0xffffffff) == (param_6 & 0xffffffff))) {
    if ((param_3 & 0xffffffff) == 0) {
      uVar1 = 0xffffffff82034928;
    }
    else if ((param_3 & 0xffffffff) == 1) {
      uVar1 = 0xffffffff82034938;
    }
    else if ((param_3 & 0xffffffff) < 3) {
      uVar1 = 0xffffffff82034948;
    }
    else {
      if ((param_3 & 0xffffffff) != 3) {
        return 0xffffffff80004005;
      }
      uVar1 = 0xffffffff82034958;
    }
    uVar1 = fn_829410A8(param_1,uVar1,param_2);
  }
  else {
    uVar1 = fn_829410A8(param_1,0xffffffff82034914,param_2,
                          (((((((param_3 | param_4 | (ulonglong)param_5 | param_6) & 0xfffffffc |
                               param_3 & 0xffffffff) & 0x3fffffff) << 2 | param_4 & 0xffffffff) &
                            0x3fffffff) << 2 | (ulonglong)param_5) & 0x3fffffff) << 2 | param_6);
  }
  return uVar1;
}

