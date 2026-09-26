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
extern unsigned int *auStack_110;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82F65390();


undefined8 fn_82942720(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [144];
  
  uVar1 = fn_82941178();
  if (((((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1))
       && (uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,3,0,0,0),
          -1 < (int)uVar1)) &&
      ((uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1 &&
       (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)))) &&
     ((uVar1 = fn_829410A8(param_1,0xffffffff820348d0), -1 < (int)uVar1 &&
      ((uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,0,1,0,0), -1 < (int)uVar1
       && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1)))))) {
    uVar4 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_110,0x20,param_4,uVar4,uVar4);
        fn_828F6FA8(auStack_f0,0x20,0xffffffff820348bc,uVar4);
        uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_f0);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = (**(code **)(*param_1 + 400))
                          (param_1,0xffffffff820348a0,auStack_110,0xffffffff820348c8);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
    uVar1 = fn_82941178(param_1);
    if ((((-1 < (int)uVar1) && (uVar1 = fn_829410A8(param_1,0xffffffff820348a8), -1 < (int)uVar1))
        && (uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,0,0,3,0),
           -1 < (int)uVar1)) &&
       (((uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1 &&
         (uVar1 = fn_82941178(param_1), -1 < (int)uVar1)) &&
        ((uVar1 = fn_829410A8(param_1,0xffffffff820348d0), -1 < (int)uVar1 &&
         ((uVar1 = (**(code **)(*param_1 + 0x184))(param_1,0xffffffff820347ac,0,1,0,0),
          -1 < (int)uVar1 && (uVar1 = fn_829410A8(param_1,0xffffffff820347a8), -1 < (int)uVar1))))
        )))) {
      iVar2 = fn_82F65390(param_3,0xffffffff820348b4,7);
      if (iVar2 == 0) {
        uVar1 = 0xffffffff820347dc;
      }
      else {
        uVar1 = 0xffffffff820347e8;
      }
      fn_82936290(auStack_b0,0x20,uVar1);
      uVar4 = 0;
      uVar3 = 0;
      if (param_1[0x1c6] != 0) {
        do {
          uVar1 = fn_82941178(param_1);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          fn_828F6FA8(auStack_110,0x20,param_4,uVar4,uVar4);
          fn_828F6FA8(auStack_d0,0x20,auStack_b0,uVar4);
          uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_d0);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar1 = (**(code **)(*param_1 + 400))
                            (param_1,0xffffffff820348a0,auStack_110,0xffffffff820348c8);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar3 = param_1[0x1c6];
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
      }
      uVar4 = 0;
      if (uVar3 != 0) {
        do {
          uVar1 = fn_82941178(param_1);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          fn_828F6FA8(auStack_90,0x20,param_2,uVar4,uVar4);
          fn_828F6FA8(auStack_110,0x20,param_3,uVar4,uVar4);
          fn_828F6FA8(auStack_d0,0x20,auStack_b0,uVar4);
          fn_828F6FA8(auStack_f0,0x20,0xffffffff820348bc,uVar4);
          uVar1 = fn_829410A8(param_1,0xffffffff820347f4,auStack_90);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar1 = (**(code **)(*param_1 + 0x208))(param_1,auStack_110,auStack_d0,auStack_f0);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

