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


void fn_82A9D590(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined1 auStack_70 [112];
  
  uVar2 = 0xffffffff82196f18;
  uVar1 = uVar2;
  if ((param_2 & 1) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2be0,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 2) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2bdc,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x100000) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2bcc,uVar1);
  uVar1 = uVar2;
  if ((param_2 & 0x20000) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2bbc,uVar1);
  uVar1 = uVar2;
  if ((param_3 & 0x10) == 0) {
    uVar1 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2bb4,uVar1);
  if ((param_3 & 4) == 0) {
    uVar2 = 0xffffffff82196f10;
  }
  fn_82A9D530(param_1,0xffffffff820d2bac,uVar2);
  fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_4);
  fn_82A9D530(param_1,0xffffffff820d2b9c,auStack_70);
  fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_5);
  fn_82A9D530(param_1,0xffffffff820d2b90,auStack_70);
  fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_6);
  fn_82A9D530(param_1,0xffffffff820d2b84,auStack_70);
  fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_7);
  fn_82A9D530(param_1,0xffffffff820d2b78,auStack_70);
  fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,param_8);
  fn_82A9D530(param_1,0xffffffff820d2b6c,auStack_70);
  fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,in_stack_00000054);
  fn_82A9D530(param_1,0xffffffff820d2b60,auStack_70);
  fn_828F6FA8(auStack_70,0x10,0xffffffff821aa66c,in_stack_0000005c);
  fn_82A9D530(param_1,0xffffffff820d2b54,auStack_70);
  return;
}

