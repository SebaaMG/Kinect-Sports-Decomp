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
extern int fn_82AB80B8();
extern int fn_82AB9D20();
extern int fn_82AB9E30();
extern int fn_82ABA1F0();
extern int fn_82B69A00();
extern int fn_82B77DA0();
extern int fn_82B7CC20();


undefined4 *
fn_82ABA458(ulonglong param_1,code *param_2,ulonglong param_3,int param_4,ulonglong param_5,
             int param_6,ulonglong param_7,ulonglong param_8)

{
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ulonglong uVar1;
  undefined8 uVar5;
  undefined8 uVar6;
  int in_stack_00000054;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d77bc,0xffffffff820d7628,0x8b);
  }
  if (param_2 == (code *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69d8,0xffffffff820d7628,0x8c);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69cc,0xffffffff820d7628,0x8d);
  }
  if (param_4 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d77ac,0xffffffff820d7628,0x8e);
  }
  if ((param_5 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74d0,0xffffffff820d7628,0x8f);
  }
  if (param_6 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d779c,0xffffffff820d7628,0x90);
  }
  if ((param_8 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bdc,0xffffffff820d7628,0x91);
  }
  if ((param_7 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7790,0xffffffff820d7628,0x92);
  }
  iVar2 = fn_82B69A00(param_8,1);
  puVar3 = (undefined4 *)(*param_2)(param_1,0x30);
  if (puVar3 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7614,0xffffffff820d7628,0x9c);
    return (undefined4 *)0x0;
  }
  *puVar3 = (int)param_1;
  puVar3[1] = param_2;
  puVar3[2] = (int)param_3;
  puVar3[5] = param_6;
  puVar3[4] = (int)param_5;
  puVar3[3] = param_4;
  puVar3[7] = (int)param_8;
  uVar4 = fn_82AB80B8(param_1,param_2,param_3,param_8);
  puVar3[10] = uVar4;
  uVar4 = fn_82AB80B8(param_1,param_2,param_3,param_8);
  puVar3[0xb] = uVar4;
  if (in_stack_00000054 == 0) {
    puVar3[9] = fn_82AB9E30;
    if (iVar2 != 0) {
      iVar2 = fn_82B77DA0(param_1,param_2,param_3,param_5,param_7,param_8);
      puVar3[6] = iVar2;
      if (iVar2 != 0) {
        return puVar3;
      }
      uVar6 = 0xdc;
      uVar5 = 0xffffffff820d7758;
      goto LAB_82aba6bc;
    }
    uVar1 = (*param_2)(param_1,0xac0);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_82B7CC20(uVar1,param_1,param_2,param_3,param_5,param_8);
    }
    puVar3[8] = iVar2;
    if (iVar2 != 0) {
      return puVar3;
    }
    uVar6 = 0xc9;
  }
  else {
    puVar3[9] = fn_82ABA1F0;
    uVar1 = (*param_2)(param_1,0xac0);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_82B7CC20(uVar1,param_1,param_2,param_3,param_5,param_8);
    }
    puVar3[8] = iVar2;
    if (iVar2 != 0) {
      return puVar3;
    }
    uVar6 = 0xf2;
  }
  uVar5 = 0xffffffff820d7770;
LAB_82aba6bc:
  fn_82AB15D0(0,0xffffffff820d2ea4,uVar5,0xffffffff820d7628,uVar6);
  fn_82AB9D20(puVar3);
  return (undefined4 *)0x0;
}

