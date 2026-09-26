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
extern int fn_82AB6EC0();
extern int fn_82AB6F58();
extern int fn_82AB7010();
extern int fn_82AB7C30();
extern int fn_82AB81E8();
extern int fn_82AB9738();
extern int fn_82B6D410();
extern int fn_82B7D980();
extern int fn_82B7E460();
extern int fn_82B7F3D8();
extern int fn_82BA02A8();


undefined8 fn_82ABA1F0(int param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = fn_82AB6EC0(param_2,1);
  lVar4 = fn_82AB9738(uVar2,uVar3);
  if (lVar4 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d76fc,0xffffffff820d7628,0x232);
    uVar3 = 0x13;
  }
  else {
    uVar5 = fn_82B6D410(*(undefined4 *)(param_1 + 0xc),2);
    *param_3 = (int)uVar5;
    if ((uVar5 & 0xffffffff) == 0) {
      fn_82AB15D0(uVar5,0xffffffff820d2ea4,0xffffffff820d76cc,0xffffffff820d7628,0x23d);
      uVar3 = 0x10;
    }
    else {
      uVar6 = fn_82B7F3D8();
      fn_82AB6F58(uVar6,uVar3);
      fn_82AB81E8(*(undefined4 *)(param_1 + 0x2c));
      fn_82AB7010(uVar6,*(undefined4 *)(param_1 + 0x2c));
      fn_82BA02A8(uVar1,0xffffffff820d76b0,uVar3);
      uVar3 = fn_82B7D980(uVar1,uVar6,lVar4,param_2);
      if (((int)uVar3 == 0) && (uVar3 = fn_82AB7C30(uVar6), (int)uVar3 == 0)) {
        fn_82B7E460(*param_3,param_2);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

