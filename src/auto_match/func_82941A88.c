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
extern unsigned int *auStack_70;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


uint fn_82941A88(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 auStack_70 [112];
  
  uVar1 = fn_82941178();
  if (-1 < (int)uVar1) {
    fn_828F6FA8(auStack_70,0x40,0xffffffff82034810,param_3,param_4);
    uVar1 = (**(code **)(*param_1 + 0x1b8))(param_1,auStack_70,param_2);
    if (((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1))
       && (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) {
      uVar1 = fn_829410A8(param_1,0xffffffff82034804,param_4);
      uVar1 = (int)uVar1 >> 0x1f & uVar1;
    }
  }
  return uVar1;
}

