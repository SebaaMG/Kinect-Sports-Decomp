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
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_828F6FA8();
extern int fn_82936290();
extern int fn_829410A8();
extern int fn_82941178();
extern int fn_82F65390();


undefined8
fn_829439C0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  iVar1 = fn_82F65390(param_3,0xffffffff820348f8,7);
  if ((iVar1 == 0) || (iVar1 = fn_82F65390(param_4,0xffffffff820348f8,7), iVar1 == 0)) {
    iVar1 = fn_82F65390(param_3,0xffffffff820348b4,7);
    if ((iVar1 == 0) || (iVar1 = fn_82F65390(param_4,0xffffffff820348b4,7), iVar1 == 0)) {
      uVar2 = 0xffffffff820347dc;
    }
    else {
      uVar2 = 0xffffffff820347e8;
    }
  }
  else {
    uVar2 = 0xffffffff820348bc;
  }
  fn_82936290(auStack_110,0x20,uVar2);
  uVar4 = 0;
  uVar3 = 0;
  if (param_1[0x1c6] != 0) {
    do {
      uVar2 = fn_82941178(param_1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      fn_828F6FA8(auStack_d0,0x20,param_4,uVar4,uVar4);
      fn_828F6FA8(auStack_b0,0x20,param_5,uVar4,uVar4);
      fn_828F6FA8(auStack_f0,0x20,auStack_110,uVar4);
      uVar2 = fn_829410A8(param_1,0xffffffff820347f4,auStack_f0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = (**(code **)(*param_1 + 0x200))(param_1,auStack_b0,auStack_d0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar3 = param_1[0x1c6];
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      uVar2 = fn_82941178(param_1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      fn_828F6FA8(auStack_70,0x20,param_3,uVar4,uVar4);
      fn_828F6FA8(auStack_d0,0x20,param_4,uVar4,uVar4);
      fn_828F6FA8(auStack_90,0x20,param_2,uVar4,uVar4);
      fn_828F6FA8(auStack_f0,0x20,auStack_110,uVar4);
      uVar2 = fn_829410A8(param_1,0xffffffff820347f4,auStack_90);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = (**(code **)(*param_1 + 0x208))(param_1,auStack_f0,auStack_70,auStack_d0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_829410A8(param_1,0xffffffff820347a8);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
  }
  return 0;
}

