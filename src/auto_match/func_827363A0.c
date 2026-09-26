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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82695DA0();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_826A2B48();
extern int fn_826A2CB0();
extern int fn_826A79D8();
extern int fn_8278B238();
extern int fn_8278BD68();
extern unsigned int stack0x00000000;


/* WARNING: Removing unreachable block (ram,0x82736834) */
/* WARNING: Removing unreachable block (ram,0x82736838) */

void fn_827363A0(longlong param_1,uint *param_2,int param_3)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar4;
  ulonglong uVar3;
  undefined8 uVar5;
  ushort uVar7;
  longlong lVar6;
  
  uVar2 = ZEXT48(&stack0x00000000);
  fn_8278BD68(param_1 + 0x5c,param_3);
  if ((*(ushort *)(param_3 + 0x16) & 1) == 0) {
    fn_826A79D8(param_1 + 0x10,param_2,0xffffffff8200feb0,uVar2 - 0xd0);
  }
  else {
    uVar7 = *(ushort *)(param_3 + 0x16) >> 9 & 3;
    uVar5 = 0xffffffff821adae0;
    if (uVar7 == 1) {
      uVar5 = 0xffffffff821adae8;
    }
    else if (uVar7 == 2) {
      uVar5 = 0xffffffff820117a0;
    }
    else if (uVar7 == 3) {
      uVar5 = 0xffffffff820116c4;
    }
    iVar4 = fn_82694700((ulonglong)*param_2 + 0x254,uVar5);
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    fn_826A79D8(param_1 + 0x10,param_2,0xffffffff8200feb0,uVar2 - 0x60);
    fn_82696330(uVar2 - 0x60);
    lVar6 = (ulonglong)*(uint *)(iVar4 + 8) - 1;
    *(int *)(iVar4 + 8) = (int)lVar6;
    if (lVar6 == 0) {
      fn_826944C8(iVar4);
    }
  }
  param_1 = param_1 + 0x10;
  bVar1 = (*(ushort *)(param_3 + 0x16) >> 7 & 1) == 0;
  if (bVar1) {
    lVar6 = fn_82695DA0(uVar2 - 0xe0,uVar2 - 0xd0);
  }
  else {
    lVar6 = uVar2 - 0xa0;
  }
  fn_826A79D8(param_1,param_2,0xffffffff82011784,lVar6);
  if (bVar1) {
    fn_82696330(uVar2 - 0xe0);
  }
  else {
    fn_82696330(uVar2 - 0xa0);
  }
  bVar1 = (*(ushort *)(param_3 + 0x16) >> 1 & 1) == 0;
  if (bVar1) {
    lVar6 = fn_82695DA0(uVar2 - 0xe0,uVar2 - 0xd0);
  }
  else {
    lVar6 = uVar2 - 0xc0;
  }
  fn_826A79D8(param_1,param_2,0xffffffff82011794,lVar6);
  if (bVar1) {
    fn_82696330(uVar2 - 0xe0);
  }
  else {
    fn_82696330(uVar2 - 0xc0);
  }
  bVar1 = (*(ushort *)(param_3 + 0x16) >> 2 & 1) == 0;
  if (bVar1) {
    lVar6 = fn_82695DA0(uVar2 - 0xe0,uVar2 - 0xd0);
  }
  else {
    lVar6 = uVar2 - 0x80;
  }
  fn_826A79D8(param_1,param_2,0xffffffff8201177c,lVar6);
  if (bVar1) {
    fn_82696330(uVar2 - 0xe0);
  }
  else {
    fn_82696330(uVar2 - 0x80);
  }
  bVar1 = (*(ushort *)(param_3 + 0x16) >> 3 & 1) == 0;
  if (bVar1) {
    lVar6 = fn_82695DA0(uVar2 - 0xe0,uVar2 - 0xd0);
  }
  else {
    lVar6 = uVar2 - 0xb0;
  }
  fn_826A79D8(param_1,param_2,0xffffffff820110e8,lVar6);
  if (bVar1) {
    fn_82696330(uVar2 - 0xe0);
  }
  else {
    fn_82696330(uVar2 - 0xb0);
  }
  bVar1 = (*(ushort *)(param_3 + 0x16) >> 4 & 1) == 0;
  if (bVar1) {
    lVar6 = fn_82695DA0(uVar2 - 0xe0,uVar2 - 0xd0);
  }
  else {
    lVar6 = uVar2 - 0x90;
  }
  fn_826A79D8(param_1,param_2,0xffffffff82011768,lVar6);
  if (bVar1) {
    fn_82696330(uVar2 - 0xe0);
  }
  else {
    fn_82696330(uVar2 - 0x90);
  }
  bVar1 = (*(ushort *)(param_3 + 0x16) >> 5 & 1) == 0;
  if (bVar1) {
    lVar6 = fn_82695DA0(uVar2 - 0xe0,uVar2 - 0xd0);
  }
  else {
    lVar6 = uVar2 - 0x70;
  }
  fn_826A79D8(param_1,param_2,0xffffffff8201175c,lVar6);
  if (bVar1) {
    fn_82696330(uVar2 - 0xe0);
  }
  else {
    fn_82696330(uVar2 - 0x70);
  }
  if ((*(ushort *)(param_3 + 0x16) >> 6 & 1) == 0) {
    fn_826A79D8(param_1,param_2,0xffffffff82011748,uVar2 - 0xd0);
  }
  else {
    fn_8278B238(param_3,uVar2 - 0xf0);
    uVar3 = fn_8267B890(*(undefined4 *)(*param_2 + 0x288),0x48,0);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_826A2B48(uVar3,param_2);
    }
    fn_826A2CB0(uVar3,0);
    uVar5 = fn_826961B0(uVar2 - 0xe0,uVar3);
    fn_826A79D8(param_1,param_2,0xffffffff82011748,uVar5);
    fn_82696330(uVar2 - 0xe0);
    if ((uVar3 & 0xffffffff) != 0) {
      fn_826824B0(uVar3);
    }
  }
  fn_82696330(uVar2 - 0xd0);
  return;
}

