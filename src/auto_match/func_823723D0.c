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
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_82374E58();
extern int fn_82374FA0();
extern int fn_82375058();
extern int fn_823751C0();
extern int fn_823753E8();
extern unsigned int lbl_831DCD58;


void fn_823723D0(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  int param_6)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [64];
  
  if (param_6 < 0x18) {
    uVar2 = *(uint *)(&lbl_831DCD58 + param_6 * 4);
  }
  else {
    uVar2 = 6;
  }
  if (uVar2 == 0) {
    uVar1 = fn_82365BD8(auStack_40,param_3);
    fn_82374E58(param_2,uVar1,param_4,param_6);
  }
  else if (uVar2 == 1) {
    uVar1 = fn_82365BD8(auStack_48,param_3);
    fn_82374FA0(param_2,uVar1,param_4,param_5,param_6);
  }
  else if (uVar2 < 3) {
    uVar1 = fn_82365BD8(auStack_50,param_3);
    fn_82375058(param_2,uVar1,param_4,param_5,param_6);
  }
  else if (uVar2 == 3) {
    uVar1 = fn_82365BD8(auStack_58,param_3);
    fn_823751C0(param_1,param_2,uVar1,param_4,param_6);
  }
  else if (uVar2 < 5) {
    uVar1 = fn_82365BD8(auStack_60,param_3);
    fn_823753E8(param_2,uVar1,param_4,param_5,param_6);
  }
  if (*(int *)(param_2 + 0x204) == 0) {
    iVar3 = (*(int *)(param_4 + 0x2c) * 2 + *(int *)(param_4 + 0x28)) * 0x88 + param_2 + 0xa14;
    *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
  }
  if (*(int *)(param_3 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

