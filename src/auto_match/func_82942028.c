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
extern int fn_8295EEB8();


void fn_82942028(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [112];
  
  if (param_1[param_1[0x1c4] + 0x1a3] == 0) {
    param_1[0x182] = param_1[0x182] + -1;
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff82034894);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    uVar2 = 0xffffffff82034880;
  }
  else {
    if (param_1[param_1[0x1c4] + 0x1a3] != 1) goto LAB_82942280;
    param_1[0x182] = param_1[0x182] + -1;
    iVar1 = fn_82941178();
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff82034894);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff820347b4);
    if (iVar1 < 0) {
      return;
    }
    fn_828F6FA8(auStack_70,0x40,0xffffffff82034888,0xffffffff82034414,0xffffffff82034428);
    iVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,auStack_70);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff820347a8);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff8203485c);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0x1cc))(param_1,0xffffffff820347fc,0xffffffff82034404);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff820347a8);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0x1e8))(param_1,0xffffffff82034404,0xffffffff820347fc);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_82941178(param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = fn_829410A8(param_1,0xffffffff82034878);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0x1ec))(param_1);
    if (iVar1 < 0) {
      return;
    }
    uVar2 = 0xffffffff82034874;
  }
  iVar1 = fn_829410A8(param_1,uVar2);
  if (iVar1 < 0) {
    return;
  }
  iVar1 = fn_82941178(param_1);
  if (iVar1 < 0) {
    return;
  }
  iVar1 = fn_829410A8(param_1,0xffffffff82034870);
  if (iVar1 < 0) {
    return;
  }
  param_1[0x182] = param_1[0x182] + 1;
LAB_82942280:
  fn_8295EEB8(param_1);
  return;
}

