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
extern int fn_824651F0();
extern int fn_82468FC0();
extern int fn_82469038();
extern int fn_82469F80();
extern int fn_8246C028();
extern int fn_8246EB78();
extern int fn_8246EC90();
extern int fn_8246F9F0();
extern int fn_8246FC10();
extern int fn_82672C20();
extern unsigned int lbl_82191418;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C6C14;


void fn_82470E58(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (param_2 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x14) = param_2;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x464) == 0) {
      fn_8246EC90(param_1,param_1 + 0x32c,1,1,0xffffffff821bc4a0,0xffffffff821bc4b0);
    }
    *(undefined4 *)(param_1 + 0x18) = lbl_831C6C14;
    return;
  }
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x78) = lbl_821CC160;
    fn_824651F0(*(undefined4 *)(param_1 + 0x440),param_1 + 0xd8);
    fn_8246F9F0(param_1,param_1 + 0xa8);
    iVar4 = *(int *)(param_1 + 0x8c);
    *(undefined4 *)(iVar4 + 0x54) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x4c) = 0;
    fn_8246C028(iVar4,1);
    *(undefined4 *)(param_1 + 0x74) = 0;
    return;
  }
  if (4 < param_2) {
    return;
  }
  uVar6 = 0;
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x78) = lbl_821CC160;
  if (uVar1 == 0) {
    iVar4 = *(int *)(param_1 + 0x8c);
    *(undefined4 *)(iVar4 + 0x54) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x4c) = 1;
    fn_8246C028(iVar4,1);
  }
  iVar4 = *(int *)(param_1 + 0x444);
  if (*(int *)(iVar4 + 0xc) != 1) {
    *(undefined4 *)(iVar4 + 0xc) = 1;
    *(undefined4 *)(iVar4 + 0x10) = 1;
    fn_82469F80((double)lbl_82191418);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 0xffffffff821bc624;
    uVar3 = 0xffffffff82196582;
  }
  else {
    if (*(int *)(param_1 + 0xc) != 3) goto LAB_82470f58;
    if (*(int *)(param_1 + 0x14) == 3) {
      uVar5 = 0xffffffff821bc634;
      uVar3 = 0xffffffff821bc644;
    }
    else {
      if (*(int *)(param_1 + 0x14) != 4) goto LAB_82470f58;
      uVar5 = 0xffffffff821bc634;
      uVar3 = 0xffffffff821bc65c;
    }
  }
  fn_8246FC10(param_1,uVar3,uVar5);
LAB_82470f58:
  if (*(int *)(param_1 + 0x14) == 3) {
    if (uVar1 != 4) {
      iVar4 = param_1 + 0xe0;
      if (*(int *)(param_1 + 0x464) == 0) {
        iVar4 = param_1 + 0xdc;
      }
      fn_824651F0(*(undefined4 *)(param_1 + 0x440),iVar4);
    }
    piVar2 = *(int **)(param_1 + 0x444);
    if (*piVar2 != 3) {
      *piVar2 = 3;
      fn_82672C20(piVar2[1],0xffffffff821bc39c,0,0);
    }
    fn_82469038(*(undefined4 *)(param_1 + 0x418),1);
    uVar7 = 0xffffffff821bc6dc;
    uVar6 = 0xffffffff821bc6ec;
  }
  else if (*(int *)(param_1 + 0x14) == 4) {
    piVar2 = *(int **)(param_1 + 0x444);
    if (*piVar2 != 4) {
      *piVar2 = 4;
      fn_82672C20(piVar2[1],0xffffffff821bc3ac,0,0);
    }
    fn_82469038(*(undefined4 *)(param_1 + 0x418),2);
    uVar7 = 0xffffffff821bc704;
    uVar6 = 0xffffffff821bc718;
  }
  else {
    iVar4 = param_1 + 0xe0;
    if (*(int *)(param_1 + 0x464) == 0) {
      iVar4 = param_1 + 0xdc;
    }
    fn_824651F0(*(undefined4 *)(param_1 + 0x440),iVar4);
    piVar2 = *(int **)(param_1 + 0x444);
    if (*piVar2 != 5) {
      *piVar2 = 5;
      fn_82672C20(piVar2[1],0xffffffff821bc3bc,0,0);
    }
    fn_82468FC0(*(undefined4 *)(param_1 + 0x418));
  }
  iVar4 = param_1 + 0x35c;
  if (*(int *)(param_1 + 0x14) != 3) {
    iVar4 = param_1 + 0x360;
  }
  fn_8246EB78(param_1,iVar4,uVar7,uVar6);
  return;
}

