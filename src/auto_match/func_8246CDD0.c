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
extern int fn_822315A0();
extern int fn_8226D6A0();
extern int fn_8226D810();
extern int fn_8226FDB8();
extern int fn_8226FF40();
extern int fn_82270B70();
extern int fn_82356F98();
extern int fn_823F2E20();
extern int fn_82469C10();
extern int fn_82469CD8();
extern int fn_8246D108();
extern int fn_8246F9F0();
extern int fn_8246FD00();
extern int fn_824BD700();
extern int fn_824BDE68();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_8266F6B8();
extern int fn_82F68CC0();
extern unsigned int iStack_4c;
extern unsigned int lbl_82196E94;
extern unsigned int lbl_821BC730;
extern unsigned int lbl_831D0FD4;
extern unsigned int lbl_832766D4;
extern unsigned int *lbl_8327F848;


void fn_8246CDD0(undefined4 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  undefined1 auStack_50 [4];
  int iStack_4c;
  
  *param_1 = &lbl_821BC730;
  lbl_832766D4 = 0;
  fn_8246FD00();
  iVar4 = param_1[0xc4];
  if (iVar4 != 0) {
    uVar2 = fn_8266F6B8();
    fn_82469C10(iVar4,uVar2);
    uVar2 = fn_8266F6B8();
    fn_82469CD8(iVar4,uVar2);
  }
  if (param_1[0x1a1] != 0) {
    (**(code **)(*lbl_8327F848 + 0x54))();
    piVar1 = (int *)param_1[0x1a1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1,1);
    }
    param_1[0x1a1] = 0;
  }
  fn_8246F9F0(param_1,param_1 + 0x5e);
  fn_8246F9F0(param_1,param_1 + 0x57);
  fn_8246F9F0(param_1,param_1 + 0x59);
  fn_8246F9F0(param_1,param_1 + 0x2f);
  fn_8246F9F0(param_1,param_1 + 0x5c);
  if (param_1[0x10e] != 0) {
    fn_824BDE68(param_1[0x10e],0);
    fn_824BD700(param_1[0x10e]);
  }
  fn_82356F98(auStack_50);
  fn_823F2E20(param_1 + 0xc0,auStack_50);
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  fn_82356F98(auStack_50);
  fn_823F2E20(param_1 + 0xc4,auStack_50);
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  puVar3 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[3] = 0;
    puVar3[1] = 1;
    *puVar3 = &lbl_82196E94;
    puVar3[2] = 1;
  }
  iVar4 = param_1[0x107];
  param_1[0x107] = puVar3;
  param_1[0x106] = 0;
  if (iVar4 != 0) {
    fn_822315A0();
  }
  fn_82356F98(auStack_50);
  fn_823F2E20(param_1 + 0x10a,auStack_50);
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  fn_82356F98(auStack_50);
  fn_8226FF40();
  iVar4 = fn_8226FDB8(param_1[0xc2],1);
  if (iVar4 != 0) {
    if (param_1[0xc3] == 0) {
      fn_8226D6A0(param_1[0xc2]);
    }
    else {
      fn_8226D810();
    }
  }
  iVar4 = param_1[0x111];
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 8) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar4);
  }
  puVar3 = (undefined4 *)param_1[0x23];
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (param_1[0x24] != 0) {
    fn_8246D108();
  }
  iVar4 = param_1[0xff];
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 8) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar4);
  }
  if (param_1[0x25] != 0) {
    fn_8265CA20();
  }
  iVar4 = param_1[0x26];
  if (iVar4 != 0) {
    dVar6 = (double)lbl_831D0FD4;
    iVar5 = fn_82270B70();
    *(float *)(iVar5 + 0x124) = (float)dVar6;
    fn_82F68CC0(iVar5 + 0x144,0xffffffff832764a8,0x1c);
    fn_82F68CC0(iVar5 + 0x1c8,0xffffffff832764c8,0x68);
    fn_8265CA20(iVar4);
  }
  if (param_1[0x10b] != 0) {
    fn_822315A0();
  }
  if (param_1[0x107] != 0) {
    fn_822315A0();
  }
  if (param_1[0xc5] != 0) {
    fn_822315A0();
  }
  if (param_1[0xc1] != 0) {
    fn_822315A0();
  }
  return;
}

