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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();


undefined8
fn_82942568(int *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  uVar1 = 0x73a00000;
  if (param_2 == 0) {
    uVar1 = 0x73900000;
  }
  fn_82936290(auStack_80,0x20,0xffffffff820347dc);
  uVar1 = (**(code **)(*param_1 + 0x1e4))(param_1,uVar1,auStack_80,param_4,param_5);
  if ((((-1 < (int)uVar1) && (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
      (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1)) &&
     ((uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,3,3,3,3), -1 < (int)uVar1
      && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)))) {
    uVar2 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_60,0x20,param_3,uVar2,uVar2);
        fn_828F6FA8(auStack_80,0x20,0xffffffff820347dc,uVar2);
        uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_60);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = (**(code **)(*param_1 + 400))(param_1,auStack_80,0xffffffff820348a0,auStack_80);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    uVar1 = 0;
  }
  return uVar1;
}

