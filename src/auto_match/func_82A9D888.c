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
extern int fn_82A9D530();


void fn_82A9D888(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [112];
  
  uVar2 = 0xffffffff82196f18;
  uVar1 = uVar2;
  if ((param_2 & 4) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2d1c,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 8) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2d14,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x10) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2d0c,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x20) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2d04,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x100) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2d00,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x200) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2cf8,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x400) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2cf0,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x40000) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2ce0,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x400000) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2cd8,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x2000000) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2cd0,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x1000000) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2cc8,uVar1);
  uVar1 = uVar2;
  if ((param_3 & 8) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2cb4,uVar1);
  if ((param_3 & 0x20) == 0) {
    uVar2 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2ca8,uVar2);
  if ((param_3 & 0x100) != 0) {
    fn_82A9D530(param_1,0xffffffff820d2c9c,0xffffffff82196f18);
  }
  if ((param_3 & 0x200) != 0) {
    fn_82A9D530(param_1,0xffffffff820d2c88,0xffffffff82196f18);
  }
  if ((param_3 & 0x400) != 0) {
    fn_82A9D530(param_1,0xffffffff820d2c74,0xffffffff82196f18);
    fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_4);
    fn_82A9D530(param_1,0xffffffff820d2c60,auStack_70);
  }
  if ((param_3 & 0x800) != 0) {
    fn_82A9D530(param_1,0xffffffff820d2c48,0xffffffff82196f18);
    fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_5);
    fn_82A9D530(param_1,0xffffffff820d2c34,auStack_70);
    fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_6);
    fn_82A9D530(param_1,0xffffffff820d2c20,auStack_70);
    fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_7);
    fn_82A9D530(param_1,0xffffffff820d2c0c,auStack_70);
  }
  if ((param_3 & 0xc00) != 0) {
    fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_8);
    fn_82A9D530(param_1,0xffffffff820d2bf8,auStack_70);
  }
  if ((param_3 & 0x1000) != 0) {
    fn_82A9D530(param_1,0xffffffff820d2be4,0xffffffff82196f18);
  }
  return;
}

