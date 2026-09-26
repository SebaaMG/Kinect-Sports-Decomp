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
extern int fn_82941178();


undefined8 fn_82941D10(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x210))
                    (param_1,0xffffffff82034404,0xffffffff82034414,0xffffffff82034428);
  if (-1 < (int)uVar1) {
    if ((param_1[param_1[0x1c4] + 0x1a3] == 2) || (param_1[param_1[0x1c4] + 0x1a3] == 3)) {
      uVar1 = (**(code **)(*param_1 + 0x234))(param_1,0xffffffff8203484c);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = 0xffffffff821bab90;
    }
    else {
      uVar1 = fn_82941178(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_829410A8(param_1,0xffffffff8203485c);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = (**(code **)(*param_1 + 0x1cc))(param_1,0xffffffff82034404,0xffffffff8203484c);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = 0xffffffff82034818;
    }
    uVar1 = fn_829410A8(param_1,uVar1);
    if (-1 < (int)uVar1) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

