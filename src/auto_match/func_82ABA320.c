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
extern int fn_82AB15D0();
extern int fn_82AB7010();
extern int fn_82AB7C30();
extern int fn_82AB81E8();
extern int fn_82AB9738();
extern int fn_82B7D980();
extern int fn_82BA02A8();


undefined8 fn_82ABA320(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7614,0xffffffff820d7628,0x282);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d771c,0xffffffff820d7628,0x283);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  lVar2 = fn_82AB9738(*(undefined4 *)(param_1 + 0x10),param_2);
  if (lVar2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d774c,0xffffffff820d7628,0x290);
    uVar3 = 0x13;
  }
  else {
    fn_82AB81E8(*(undefined4 *)(param_1 + 0x2c));
    fn_82AB7010(param_4,*(undefined4 *)(param_1 + 0x2c));
    fn_82BA02A8(uVar1,0xffffffff820d7738,param_2);
    uVar3 = fn_82B7D980(uVar1,param_4,lVar2,param_3);
    uVar5 = 0;
    if ((int)uVar3 != 0) {
      uVar5 = uVar3;
    }
    uVar4 = fn_82AB7C30(param_4);
    uVar3 = uVar4;
    if (((int)uVar4 == 0) && (uVar3 = uVar5, (int)uVar5 != 0)) {
      fn_82AB15D0(uVar4,0xffffffff820d2ea4,0xffffffff820d7724,0xffffffff820d7628,0x2aa);
    }
  }
  return uVar3;
}

