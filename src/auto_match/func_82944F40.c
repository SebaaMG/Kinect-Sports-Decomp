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
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82944F40(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  uVar1 = fn_82941178();
  if ((((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff82034e58), -1 < (int)uVar1))
      && (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
     (((uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1 &&
       (uVar1 = (**(code **)(*param_1 + 0x198))(param_1,0xffffffff820348a0,1), -1 < (int)uVar1)) &&
      (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)))) {
    uVar4 = 0;
    uVar3 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_b0,0x20,param_3,uVar4,uVar4);
        fn_828F6FA8(auStack_f0,0x20,0xffffffff820347e8,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034e40,auStack_f0,auStack_b0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar3 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
    }
    uVar4 = 0;
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_b0,0x20,param_3,uVar4,uVar4);
        fn_828F6FA8(auStack_90,0x20,0xffffffff820348bc,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034e24,auStack_90,auStack_b0,0xffffffff820348a0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar2 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar2);
    }
    uVar4 = 0;
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_d0,0x20,0xffffffff820347dc,uVar4);
        fn_828F6FA8(auStack_f0,0x20,0xffffffff820347e8,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034e24,auStack_d0,auStack_f0,auStack_f0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar3 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
    }
    uVar4 = 0;
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_d0,0x20,0xffffffff820347dc,uVar4);
        fn_828F6FA8(auStack_f0,0x20,0xffffffff820347e8,uVar4);
        fn_828F6FA8(auStack_90,0x20,0xffffffff820348bc,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034dc0,auStack_d0,auStack_90,auStack_d0,
                              0xffffffff820348a0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar2 = param_1[0x1c6];
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)uVar2);
    }
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_70,0x20,param_2,uVar4,uVar4);
        fn_828F6FA8(auStack_d0,0x20,0xffffffff820347dc,uVar4);
        fn_828F6FA8(auStack_f0,0x20,0xffffffff820347e8,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff82034da0,auStack_70,auStack_f0,auStack_d0,auStack_f0
                             );
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    uVar1 = 0;
  }
  return uVar1;
}

