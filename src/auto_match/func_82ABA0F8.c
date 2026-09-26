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
extern int fn_82AA0750();
extern int fn_82AB15D0();
extern int fn_82AB7010();
extern int fn_82AB7C30();
extern int fn_82AB81E8();
extern int fn_82B6D410();
extern int fn_82B7BA30();
extern int fn_82B7F3D8();
extern int fn_82B7F430();


undefined8
fn_82ABA0F8(int param_1,undefined8 param_2,undefined8 param_3,char param_4,undefined4 *param_5,
             undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  lVar1 = fn_82B6D410(*(undefined4 *)(param_1 + 0xc),0);
  if (lVar1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d76cc,0xffffffff820d7628,0x1e9);
    uVar2 = 0x10;
  }
  else {
    fn_82AA0750(param_2,param_4 != '\0',param_3);
    fn_82AB81E8(*(undefined4 *)(param_1 + 0x28));
    fn_82AB81E8(*(undefined4 *)(param_1 + 0x2c));
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    uVar2 = fn_82B7F430(lVar1);
    fn_82AB7010(uVar2,uVar3);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    uVar2 = fn_82B7F3D8(lVar1);
    fn_82AB7010(uVar2,uVar3);
    fn_82B7BA30(*(undefined4 *)(param_1 + 0x18),param_2,lVar1,param_6);
    if (param_4 == '\0') {
      uVar3 = fn_82B7F430();
    }
    else {
      uVar3 = fn_82B7F3D8(lVar1);
    }
    *param_5 = uVar3;
    uVar2 = fn_82AB7C30(uVar3);
  }
  return uVar2;
}

