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
extern unsigned int *auStack_60;
extern int fn_8268ACE8();
extern int fn_8268BA10();
extern int fn_826FDED0();
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
extern float lbl_82005718;
extern unsigned int uStack_36;
extern unsigned int uStack_3a;
extern unsigned int uStack_40;


undefined8 fn_8278D688(undefined8 param_1,int param_2,int param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar5;
  undefined8 uVar4;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  uint uStack_40;
  short sStack_3c;
  ushort uStack_3a;
  byte bStack_38;
  ushort uStack_36;
  
  fn_826FDED0(auStack_60,*(undefined4 *)(param_3 + 0xc));
  if ((((*(ushort *)(param_2 + 0x2a) >> 4 & 1) != 0) &&
      ((*(ushort *)(param_3 + 0x2a) >> 4 & 1) != 0)) &&
     ((*(byte *)(param_2 + 0x28) & 1) == (*(byte *)(param_3 + 0x28) & 1))) {
    fn_8278D2E0(auStack_60);
  }
  if ((((*(ushort *)(param_2 + 0x2a) >> 5 & 1) != 0) &&
      ((*(ushort *)(param_3 + 0x2a) >> 5 & 1) != 0)) &&
     (uVar2 = (ulonglong)*(byte *)(param_3 + 0x28) & 2,
     ((ulonglong)*(byte *)(param_2 + 0x28) & 2) == uVar2)) {
    fn_8278D368(auStack_60,uVar2 >> 1);
  }
  uVar1 = *(ushort *)(param_2 + 0x2a);
  if ((((uVar1 >> 6 & 1) != 0) && ((*(ushort *)(param_3 + 0x2a) >> 6 & 1) != 0)) &&
     (((*(byte *)(param_2 + 0x28) ^ *(byte *)(param_3 + 0x28)) & 4) == 0)) {
    bVar7 = bStack_38 | 4;
    if ((*(byte *)(param_3 + 0x28) & 4) == 0) {
      bVar7 = bStack_38 & 0xfb;
    }
    uStack_36 = uStack_36 | 0x40;
    bStack_38 = bVar7;
  }
  if ((((uVar1 >> 7 & 1) != 0) && ((*(ushort *)(param_3 + 0x2a) >> 7 & 1) != 0)) &&
     (((*(byte *)(param_2 + 0x28) ^ *(byte *)(param_3 + 0x28)) & 8) == 0)) {
    bVar7 = bStack_38 | 8;
    if ((*(byte *)(param_3 + 0x28) & 8) == 0) {
      bVar7 = bStack_38 & 0xf7;
    }
    uStack_36 = uStack_36 | 0x80;
    bStack_38 = bVar7;
  }
  if ((((uVar1 & 1) != 0) && ((*(ushort *)(param_3 + 0x2a) & 1) != 0)) &&
     (*(uint *)(param_2 + 0x20) == *(uint *)(param_3 + 0x20))) {
    uStack_36 = uStack_36 | 1;
    uStack_40 = *(uint *)(param_3 + 0x20);
  }
  if ((((uVar1 >> 10 & 1) != 0) && ((*(ushort *)(param_3 + 0x2a) >> 10 & 1) != 0)) &&
     (*(byte *)(param_2 + 0x20) == *(byte *)(param_3 + 0x20))) {
    uStack_40 = (uint)*(byte *)(param_3 + 0x20) << 0x18 | uStack_40 & 0xffffff;
    uStack_36 = uStack_36 | 0x400;
  }
  if ((((uVar1 >> 1 & 1) != 0) && ((*(ushort *)(param_3 + 0x2a) >> 1 & 1) != 0)) &&
     ((float)(longlong)*(short *)(param_2 + 0x24) * lbl_82005718 ==
      (float)(longlong)*(short *)(param_3 + 0x24) * lbl_82005718)) {
    uStack_36 = uStack_36 | 2;
    sStack_3c = *(short *)(param_3 + 0x24);
  }
  if (((uVar1 >> 3 & 1) != 0) && ((*(ushort *)(param_3 + 0x2a) >> 3 & 1) != 0)) {
    uVar8 = *(ushort *)(param_3 + 0x26);
    if ((ulonglong)*(ushort *)(param_2 + 0x26) == (ulonglong)uVar8) {
      if (0x10000 < (ulonglong)uVar8) {
        uVar8 = 0xffff;
      }
      uStack_36 = uStack_36 | 8;
      uStack_3a = uVar8;
    }
  }
  if ((((uVar1 >> 2 & 1) != 0) && ((*(ushort *)(param_3 + 0x2a) >> 2 & 1) != 0)) &&
     (iVar5 = thunk_FUN_82f65ac0(((ulonglong)*(uint *)(param_2 + 8) & 0xfffffffc) + 8,
                                 ((ulonglong)*(uint *)(param_3 + 8) & 0xfffffffc) + 8), iVar5 == 0))
  {
    uVar4 = fn_8278C028(param_3);
    fn_8278CF70(auStack_60,uVar4);
  }
  if (((*(ushort *)(param_2 + 0x2a) >> 0xb & 1) != 0) &&
     ((*(ushort *)(param_3 + 0x2a) >> 0xb & 1) != 0)) {
    iVar5 = fn_8278CE30(param_3);
    iVar6 = fn_8278CE30(param_2);
    if (iVar6 == iVar5) {
      uVar4 = fn_8278CE30(param_3);
      fn_8278D270(auStack_60,uVar4);
    }
  }
  if ((*(ushort *)(param_2 + 0x2a) & 0x100) == 0) {
LAB_8278d9e0:
    bVar3 = false;
  }
  else {
    iVar5 = fn_8268ACE8(param_2 + 0x10);
    bVar3 = true;
    if (iVar5 == 0) goto LAB_8278d9e0;
  }
  if (!bVar3) goto LAB_8278da58;
  if ((*(ushort *)(param_3 + 0x2a) & 0x100) == 0) {
LAB_8278da0c:
    bVar3 = false;
  }
  else {
    iVar5 = fn_8268ACE8(param_3 + 0x10);
    bVar3 = true;
    if (iVar5 == 0) goto LAB_8278da0c;
  }
  if (bVar3) {
    iVar5 = thunk_FUN_82f65ac0(((ulonglong)*(uint *)(param_2 + 0x10) & 0xfffffffc) + 8,
                               ((ulonglong)*(uint *)(param_3 + 0x10) & 0xfffffffc) + 8);
    if (iVar5 == 0) {
      fn_8268BA10(auStack_50,param_3 + 0x10);
      uStack_36 = uStack_36 | 0x100;
    }
  }
LAB_8278da58:
  if (((*(ushort *)(param_2 + 0x2a) >> 9 & 1) != 0) && ((*(ushort *)(param_3 + 0x2a) >> 9 & 1) != 0)
     ) {
    iVar5 = fn_8278B458(param_3);
    iVar6 = fn_8278B458(param_2);
    if (iVar6 == iVar5) {
      uVar4 = fn_8278B458(param_3);
      fn_8278B3F0(auStack_60,uVar4);
    }
  }
  fn_8278CD58(param_1,auStack_60,0);
  fn_826FDF58(auStack_60);
  return param_1;
}

