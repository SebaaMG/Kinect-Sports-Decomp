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
extern unsigned int *auStack_50;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82683270();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696B20();
extern int fn_826A7A58();
extern int fn_826ABE30();
extern int fn_826C2AC8();
extern int fn_826C2D98();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;


void fn_826B05C0(uint *param_1)

{
  uint uVar1;
  char cVar3;
  int iVar2;
  ulonglong uVar4;
  undefined8 uVar5;
  int *piVar6;
  int iStack_80;
  int iStack_7c;
  byte bStack_78;
  int iStack_70;
  int iStack_6c;
  byte bStack_68;
  char acStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  fn_82695DA0(auStack_40,*(undefined4 *)(*param_1 + 8));
  uVar1 = *param_1;
  uVar4 = (ulonglong)*(uint *)(uVar1 + 8) - 0x10;
  if ((ulonglong)*(uint *)(uVar1 + 8) <= (ulonglong)*(uint *)(uVar1 + 0xc)) {
    uVar4 = (ulonglong)*(uint *)(uVar1 + 0x14);
  }
  fn_82695DA0(auStack_50,uVar4);
  fn_82696B20(&iStack_70,auStack_40,*param_1);
  fn_82696B20(&iStack_80,auStack_50,*param_1);
  if ((iStack_70 == 0) || (iStack_80 == 0)) {
    if ((*(byte *)((int)param_1 + 0x36) & 0x80) != 0) {
      if (iStack_70 == 0) {
        uVar5 = 0xffffffff82007914;
      }
      else {
        uVar5 = 0xffffffff820078ec;
      }
      fn_826ABE30(param_1 + 9,uVar5);
    }
  }
  else {
    acStack_60[0] = '\0';
    cVar3 = (**(code **)(*(int *)(iStack_70 + 0x10) + 0x2c))
                      (iStack_70 + 0x10,*param_1 + 0x78,
                       (ulonglong)*(uint *)(*param_1 + 0x78) + 0x130,acStack_60);
    if ((cVar3 == '\0') || (acStack_60[0] != '\x06')) {
      if ((*(byte *)((int)param_1 + 0x36) & 0x80) != 0) {
        fn_826ABE30(param_1 + 9,0xffffffff82007944);
      }
    }
    else {
      iVar2 = fn_82696958(acStack_60,*param_1);
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1U & 0x8fffffff;
      }
      uVar4 = fn_8267B890(*(undefined4 *)(*(int *)(*param_1 + 0x78) + 0x288),0x50,0);
      if ((uVar4 & 0xffffffff) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = fn_826C2AC8(uVar4,(ulonglong)*param_1 + 0x78,iVar2);
      }
      fn_826C2D98(iStack_80,(ulonglong)*param_1 + 0x78,uVar4);
      fn_826A7A58(uVar4 + 0x10,(ulonglong)*param_1 + 0x78,&iStack_70);
      if ((uVar4 & 0xffffffff) != 0) {
        fn_826824B0(uVar4);
      }
      if (iVar2 != 0) {
        fn_826824B0(iVar2);
      }
    }
    fn_82696330(acStack_60);
  }
  uVar1 = *param_1;
  piVar6 = (int *)(uVar1 + 8);
  if (*(int *)(uVar1 + 8) - 0x20U < *(uint *)(uVar1 + 0xc)) {
    fn_82683270(piVar6,2);
  }
  else {
    fn_82696330();
    *piVar6 = *piVar6 + -0x10;
    fn_82696330();
    *piVar6 = *piVar6 + -0x10;
  }
  if (((bStack_78 & 2) == 0) && (iStack_80 != 0)) {
    fn_826824B0();
  }
  iStack_80 = 0;
  if (((bStack_78 & 1) == 0) && (iStack_7c != 0)) {
    fn_826824B0();
  }
  iStack_7c = 0;
  if (((bStack_68 & 2) == 0) && (iStack_70 != 0)) {
    fn_826824B0();
  }
  iStack_70 = 0;
  if (((bStack_68 & 1) == 0) && (iStack_6c != 0)) {
    fn_826824B0();
  }
  iStack_6c = 0;
  fn_82696330(auStack_50);
  fn_82696330(auStack_40);
  return;
}

