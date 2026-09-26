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
extern unsigned int *auStack_50;
extern int fn_826824B0();
extern int fn_82695598();
extern int fn_82696330();
extern int fn_82696B20();
extern int fn_826B1688();
extern int fn_826C35B8();
extern int fn_826C3768();
extern int fn_82720700();
extern int fn_827215B0();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_82010454;
extern unsigned int lbl_820105A8;
extern unsigned int lbl_82010600;
extern unsigned int lbl_82010644;


undefined4 * fn_82721AE0(undefined4 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iStack_60;
  int iStack_5c;
  byte bStack_58;
  undefined1 auStack_50 [80];
  
  fn_826C35B8(param_1,param_2,0xffffffff827521e8);
  param_1[0xd] = &lbl_82010454;
  param_1[0xd] = &lbl_82010644;
  *param_1 = &lbl_82010600;
  param_1[4] = &lbl_820105A8;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 **)(param_3 + 0x9dc) = param_1 + 0xd;
  fn_82720700(param_2,param_1 + 4);
  fn_827215B0(param_1,param_2,0);
  fn_826B1688(param_1 + 4,param_2,0xffffffff8201043c,7);
  uVar1 = fn_82695598(auStack_50,param_2,0xffffffff827210c8);
  uVar1 = fn_82696B20(&iStack_60,uVar1,0);
  fn_826C3768(param_1 + 0x12,uVar1);
  if (((bStack_58 & 2) == 0) && (iStack_60 != 0)) {
    fn_826824B0();
  }
  iStack_60 = 0;
  if (((bStack_58 & 1) == 0) && (iStack_5c != 0)) {
    fn_826824B0();
  }
  iStack_5c = 0;
  fn_82696330(auStack_50);
  param_1[0x11] = 0;
  return param_1;
}

