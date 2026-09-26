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
extern int fn_82CFF8D0();
extern int fn_82CFF928();


void fn_82D83008(int param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  param_2[2] = *(int *)(param_1 + 0x78);
  if ((*(uint *)(param_1 + 0x30) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x28),*(uint *)(param_1 + 0x30) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82141338,*(undefined4 *)(param_1 + 0x28),
               *(int *)(param_1 + 0x2c) << 2,uVar3);
  }
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x2c) - 1;
  if (-1 < (longlong)uVar6) {
    lVar4 = (uVar6 & 0x3fffffff) << 2;
    do {
      (**(code **)(*param_2 + 0xc))
                (param_2,0xffffffff82141330,*(undefined4 *)(*(int *)(param_1 + 0x28) + (int)lVar4),0
                );
      uVar6 = uVar6 - 1;
      lVar4 = lVar4 + -4;
    } while (-1 < (longlong)uVar6);
  }
  if ((*(uint *)(param_1 + 0x3c) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x34),*(uint *)(param_1 + 0x3c) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82141320,*(undefined4 *)(param_1 + 0x34),
               *(int *)(param_1 + 0x38) << 2,uVar3);
  }
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x38) - 1;
  if (-1 < (longlong)uVar6) {
    lVar4 = (uVar6 & 0x3fffffff) << 2;
    do {
      (**(code **)(*param_2 + 0xc))
                (param_2,0xffffffff82141314,*(undefined4 *)(*(int *)(param_1 + 0x34) + (int)lVar4),0
                );
      uVar6 = uVar6 - 1;
      lVar4 = lVar4 + -4;
    } while (-1 < (longlong)uVar6);
  }
  (**(code **)(*param_2 + 0xc))(param_2,0xffffffff8214130c,*(undefined4 *)(param_1 + 0x20),0);
  if ((*(uint *)(param_1 + 0x11c) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x114),*(uint *)(param_1 + 0x11c) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82141300,*(undefined4 *)(param_1 + 0x114),
               *(int *)(param_1 + 0x118) << 2,uVar3);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x118)) {
    iVar7 = 0;
    do {
      (**(code **)(*param_2 + 0xc))
                (param_2,0xffffffff821412f4,*(undefined4 *)(iVar7 + *(int *)(param_1 + 0x114)),0);
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x118));
  }
  fn_82CFF928(param_2,0xffffffff8213d524,*(undefined4 *)(param_1 + 0xb8),0x1c,0);
  fn_82CFF928(param_2,0xffffffff8213d4f8,*(undefined4 *)(param_1 + 0xc0),0x1c,0);
  fn_82CFF928(param_2,0xffffffff8213d4e4,*(undefined4 *)(param_1 + 0xc4),0x1c,0);
  fn_82CFF928(param_2,0xffffffff8213d6d4,*(undefined4 *)(param_1 + 0x74),0x100,0);
  for (iVar5 = *(int *)(param_1 + 0xa0); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
    fn_82CFF928(param_2,0xffffffff8213d5ac,*(undefined4 *)(param_1 + 0xa0),0x10,0);
    puVar1 = (undefined4 *)**(int **)(param_1 + 0xa0);
    if ((puVar1 != (undefined4 *)0x0) && (uVar2 = puVar1[2], (uVar2 & 0x80000000) == 0)) {
      uVar3 = fn_82CFF8D0(*puVar1,(((ulonglong)uVar2 & 0x3fffffff) +
                                         ((ulonglong)uVar2 & 0x3fffffff) * 4 & 0x3fffffff) << 2);
      (**(code **)(*param_2 + 0x14))
                (param_2,3,0xffffffff821412d8,*puVar1,
                 ((ulonglong)(uint)puVar1[1] + ((ulonglong)(uint)puVar1[1] & 0x3fffffff) * 4 &
                 0x3fffffff) << 2,uVar3);
    }
  }
  (**(code **)(*param_2 + 0x18))(param_2,0xffffffff82011028);
  (**(code **)(*param_2 + 0xc))(param_2,0xffffffff821412cc,*(undefined4 *)(param_1 + 8),0);
  if ((*(uint *)(param_1 + 0x48) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x40),*(uint *)(param_1 + 0x48) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff821412c0,*(undefined4 *)(param_1 + 0x40),
               *(int *)(param_1 + 0x44) << 2,uVar3);
  }
  (**(code **)(*param_2 + 0xc))(param_2,0xffffffff821412b4,*(undefined4 *)(param_1 + 0x4c),0);
  fn_82CFF928(param_2,0xffffffff821412ac,*(undefined4 *)(param_1 + 0x88),0x28,0);
  (**(code **)(*param_2 + 0x18))(param_2,0xffffffff821412ac);
  iVar5 = *(int *)(param_1 + 0x88);
  uVar2 = *(uint *)(iVar5 + 0x18);
  if ((uVar2 & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(iVar5 + 0x10),
                              (((ulonglong)uVar2 & 0x3fffffff) + ((ulonglong)uVar2 & 0x3fffffff) * 4
                              & 0x3fffffff) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff8214129c,*(undefined4 *)(iVar5 + 0x10),
               ((ulonglong)*(uint *)(iVar5 + 0x14) +
                ((ulonglong)*(uint *)(iVar5 + 0x14) & 0x3fffffff) * 4 & 0x3fffffff) << 2,uVar3);
  }
  iVar5 = *(int *)(param_1 + 0x88);
  if ((*(uint *)(iVar5 + 0x24) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(iVar5 + 0x1c),*(uint *)(iVar5 + 0x24) << 4);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff8214128c,*(undefined4 *)(iVar5 + 0x1c),
               *(int *)(iVar5 + 0x20) << 4,uVar3);
  }
  (**(code **)(*param_2 + 0x1c))(param_2);
  (**(code **)(*param_2 + 0xc))(param_2,0xffffffff8213d130,*(undefined4 *)(param_1 + 0x1bc),0);
  (**(code **)(*param_2 + 0x18))(param_2,0xffffffff8213322c);
  (**(code **)(*param_2 + 0xc))(param_2,0xffffffff821333bc,*(undefined4 *)(param_1 + 0x58),0);
  fn_82CFF928(param_2,0xffffffff82141280,*(undefined4 *)(param_1 + 100),0x10c,0);
  fn_82CFF928(param_2,0xffffffff82141280,*(undefined4 *)(param_1 + 0x6c),0x10,0);
  fn_82CFF928(param_2,0xffffffff82141280,*(undefined4 *)(param_1 + 0x68),0xc,0);
  fn_82CFF928(param_2,0xffffffff82141280,*(undefined4 *)(param_1 + 0x70),0xc,0);
  fn_82CFF928(param_2,0xffffffff82141274,*(undefined4 *)(param_1 + 0x78),0x80,0);
  if (*(int *)(param_1 + 0x78) != 0) {
    fn_82CFF928(param_2,0xffffffff8214125c,*(undefined4 *)(*(int *)(param_1 + 0x78) + 0x70),
                      0x10,0);
  }
  (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82141254,*(undefined4 *)(param_1 + 0x7c),0);
  (**(code **)(*param_2 + 0xc))(param_2,0xffffffff8213d68c,*(undefined4 *)(param_1 + 0x84),0);
  (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82141248,*(undefined4 *)(param_1 + 0x80),0);
  (**(code **)(*param_2 + 0x1c))(param_2);
  (**(code **)(*param_2 + 0x1c))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,0xffffffff8214123c);
  if ((*(uint *)(param_1 + 0x134) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(param_1 + 300),*(uint *)(param_1 + 0x134) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82141230,*(undefined4 *)(param_1 + 300),
               *(int *)(param_1 + 0x130) << 2,uVar3);
  }
  if ((*(uint *)(param_1 + 0x140) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x138),*(uint *)(param_1 + 0x140) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82141224,*(undefined4 *)(param_1 + 0x138),
               *(int *)(param_1 + 0x13c) << 2,uVar3);
  }
  if ((*(uint *)(param_1 + 0x14c) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x144),*(uint *)(param_1 + 0x14c) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82141214,*(undefined4 *)(param_1 + 0x144),
               *(int *)(param_1 + 0x148) << 2,uVar3);
  }
  if ((*(uint *)(param_1 + 0x158) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x150),*(uint *)(param_1 + 0x158) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82141204,*(undefined4 *)(param_1 + 0x150),
               *(int *)(param_1 + 0x154) << 2,uVar3);
  }
  if ((*(uint *)(param_1 + 0x164) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x15c),*(uint *)(param_1 + 0x164) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff821411f4,*(undefined4 *)(param_1 + 0x15c),
               *(int *)(param_1 + 0x160) << 2,uVar3);
  }
  if ((*(uint *)(param_1 + 0x170) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x168),*(uint *)(param_1 + 0x170) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff821411e4,*(undefined4 *)(param_1 + 0x168),
               *(int *)(param_1 + 0x16c) << 2,uVar3);
  }
  if ((*(uint *)(param_1 + 0x17c) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x174),*(uint *)(param_1 + 0x17c) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff821411d4,*(undefined4 *)(param_1 + 0x174),
               *(int *)(param_1 + 0x178) << 2,uVar3);
  }
  if ((*(uint *)(param_1 + 0x188) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x180),*(uint *)(param_1 + 0x188) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff821411c4,*(undefined4 *)(param_1 + 0x180),
               *(int *)(param_1 + 0x184) << 2,uVar3);
  }
  if ((*(uint *)(param_1 + 0x194) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x18c),*(uint *)(param_1 + 0x194) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff821411d4,*(undefined4 *)(param_1 + 0x18c),
               *(int *)(param_1 + 400) << 2,uVar3);
  }
  if ((*(uint *)(param_1 + 0x1ac) & 0x80000000) == 0) {
    uVar3 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x1a4),*(uint *)(param_1 + 0x1ac) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff821411b8,*(undefined4 *)(param_1 + 0x1a4),
               *(int *)(param_1 + 0x1a8) << 2,uVar3);
  }
  (**(code **)(*param_2 + 0x1c))(param_2);
  param_2[2] = 0;
  return;
}

