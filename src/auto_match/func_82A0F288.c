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
extern int fn_8262FEC8();
extern int fn_82637AF8();
extern int fn_82637B30();
extern int fn_826381E0();
extern int fn_82638220();
extern int fn_82638288();
extern int fn_82638300();
extern int fn_826384A0();
extern int fn_82638790();
extern int fn_82638D10();
extern int fn_826392A0();
extern int fn_826392D0();
extern int fn_82639300();
extern int fn_82639330();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263A7E0();
extern int fn_8263A820();
extern int fn_82A167F8();
extern int fn_82F6F870();
extern unsigned int lbl_831BB8F0;


void fn_82A0F288(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = lbl_831BB8F0;
  uVar2 = fn_8263A7E0(*param_1,0);
  uVar3 = fn_8263A820(*param_1);
  fn_82637B30(*param_1,0);
  fn_82A167F8(param_1[1],0,param_5,param_6,param_3,param_4,param_7,param_2);
  fn_8263A1B8(*param_1,0,uVar2);
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8262FEC8(uVar2);
  }
  fn_8263A508(*param_1,uVar3);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_8262FEC8(uVar3);
  }
  fn_826381E0(*param_1,0);
  fn_82638220(*param_1,1);
  fn_82638288(*param_1,0);
  fn_82638790(*param_1,0xf);
  fn_82637B30(*param_1,0);
  fn_82637AF8(*param_1,0);
  fn_82638288(*param_1,0);
  fn_82638300(*param_1,5);
  fn_826384A0(*param_1,0);
  fn_826392A0(*param_1,0);
  fn_826392D0(*param_1,0);
  fn_82639330(*param_1,0);
  fn_82639300(*param_1,0);
  fn_82638D10(*param_1,1);
  fn_82F6F870(uVar1);
  return;
}

