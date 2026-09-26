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
extern int fn_8268ACE8();
extern int fn_8268BA10();
extern int fn_8268BEA8();
extern int fn_826FDF58();
extern int fn_8278B3F0();
extern int fn_8278B458();
extern int fn_8278C028();
extern int fn_8278CD58();
extern int fn_8278CE30();
extern int fn_8278CF70();
extern int fn_8278D270();
extern int fn_8278D2E0();
extern int fn_8278D368();
extern unsigned int uStack_26;
extern unsigned int uStack_2a;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_8278D3F0(undefined8 param_1,undefined8 param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  uint uStack_30;
  undefined2 uStack_2c;
  ushort uStack_2a;
  byte bStack_28;
  ushort uStack_26;
  
  fn_8278CD58(auStack_50,param_2,0);
  if ((*(ushort *)(param_3 + 0x2a) >> 4 & 1) != 0) {
    fn_8278D2E0(auStack_50,*(byte *)(param_3 + 0x28) & 1);
  }
  if ((*(ushort *)(param_3 + 0x2a) >> 5 & 1) != 0) {
    fn_8278D368(auStack_50,*(byte *)(param_3 + 0x28) >> 1 & 1);
  }
  uVar1 = *(ushort *)(param_3 + 0x2a);
  if ((uVar1 >> 6 & 1) != 0) {
    if ((*(byte *)(param_3 + 0x28) & 4) == 0) {
      bStack_28 = bStack_28 & 0xfb;
    }
    else {
      bStack_28 = bStack_28 | 4;
    }
    uStack_26 = uStack_26 | 0x40;
  }
  if ((uVar1 >> 7 & 1) != 0) {
    if ((*(byte *)(param_3 + 0x28) & 8) == 0) {
      bStack_28 = bStack_28 & 0xf7;
    }
    else {
      bStack_28 = bStack_28 | 8;
    }
    uStack_26 = uStack_26 | 0x80;
  }
  if ((uVar1 & 1) != 0) {
    uStack_30 = *(uint *)(param_3 + 0x20);
    uStack_26 = uStack_26 | 1;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    uStack_30 = (uint)*(byte *)(param_3 + 0x20) << 0x18 | uStack_30 & 0xffffff;
    uStack_26 = uStack_26 | 0x400;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uStack_2c = *(undefined2 *)(param_3 + 0x24);
    uStack_26 = uStack_26 | 2;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    uStack_2a = *(ushort *)(param_3 + 0x26);
    if (0x10000 < (ulonglong)uStack_2a) {
      uStack_2a = 0xffff;
    }
    uStack_26 = uStack_26 | 8;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    uVar3 = fn_8278C028(param_3);
    fn_8278CF70(auStack_50,uVar3);
  }
  if ((*(ushort *)(param_3 + 0x2a) >> 0xb & 1) != 0) {
    uVar3 = fn_8278CE30(param_3);
    fn_8278D270(auStack_50,uVar3);
  }
  if ((*(ushort *)(param_3 + 0x2a) & 0x100) == 0) {
LAB_8278d5cc:
    bVar2 = false;
  }
  else {
    iVar4 = fn_8268ACE8(param_3 + 0x10);
    bVar2 = true;
    if (iVar4 != 0) goto LAB_8278d5cc;
  }
  if (bVar2) {
    fn_8268BEA8(auStack_40);
    uStack_26 = uStack_26 & 0xfeff;
    goto LAB_8278d630;
  }
  if ((*(ushort *)(param_3 + 0x2a) & 0x100) == 0) {
LAB_8278d60c:
    bVar2 = false;
  }
  else {
    iVar4 = fn_8268ACE8(param_3 + 0x10);
    bVar2 = true;
    if (iVar4 == 0) goto LAB_8278d60c;
  }
  if (bVar2) {
    fn_8268BA10(auStack_40,param_3 + 0x10);
    uStack_26 = uStack_26 | 0x100;
  }
LAB_8278d630:
  if ((*(ushort *)(param_3 + 0x2a) >> 9 & 1) != 0) {
    uVar3 = fn_8278B458(param_3);
    fn_8278B3F0(auStack_50,uVar3);
  }
  fn_8278CD58(param_1,auStack_50,0);
  fn_826FDF58(auStack_50);
  return param_1;
}

