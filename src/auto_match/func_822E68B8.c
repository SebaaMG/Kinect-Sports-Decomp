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
extern unsigned int *auStack_98;
extern int fn_822315A0();
extern int fn_822C64E0();
extern int fn_822E7EB0();
extern int fn_822E7F80();
extern int fn_822EB430();
extern int fn_822EFC50();
extern int fn_822F0CA0();
extern int fn_822F23C0();
extern int fn_822F33D0();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AE5C8;
extern unsigned int lbl_821AE5E8;
extern unsigned int lbl_821AE608;


void fn_822E68B8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 *puVar7;
  ulonglong uVar6;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puStack_a0;
  undefined4 *puStack_9c;
  undefined1 auStack_98 [152];
  
  uVar1 = *(undefined4 *)(param_1 + 0x1a8);
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  uVar3 = *(undefined4 *)(param_1 + 0x1bc);
  uVar4 = fn_8265C9E0(0x30);
  if ((uVar4 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_822E7EB0(uVar4,uVar2,param_1,uVar3,0xffffffff831cd218,param_1 + 0x26c,uVar1);
  }
  puStack_9c = (undefined4 *)uVar4;
  puStack_a0 = (undefined4 *)((int)puStack_9c + 0xc);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(undefined4 *)(param_1 + 0x1a8);
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  uVar3 = *(undefined4 *)(param_1 + 0x1bc);
  puVar7 = (undefined4 *)fn_8265C9E0(0x54);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[1] = 1;
    puVar7[2] = 1;
    *puVar7 = &lbl_821AD588;
    if (puVar7 + 3 != (undefined4 *)0x0) {
      uVar5 = fn_82365BD8(auStack_98,param_1 + 0x26c);
      fn_822EB430(puVar7 + 3,uVar2,param_1,uVar3,0xffffffff831cd218,uVar5,uVar1);
    }
  }
  puStack_a0 = puVar7 + 3;
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puStack_9c = puVar7;
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(undefined4 *)(param_1 + 0x1a8);
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  uVar3 = *(undefined4 *)(param_1 + 0x1bc);
  uVar6 = fn_8265C9E0(0x30);
  if ((uVar6 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_822E7F80(uVar6,uVar2,param_1,uVar3,0xffffffff831cd218,param_1 + 0x26c,uVar1);
  }
  puStack_9c = (undefined4 *)uVar6;
  puStack_a0 = (undefined4 *)((int)puStack_9c + 0xc);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(undefined4 *)(param_1 + 0x1a8);
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  uVar3 = *(undefined4 *)(param_1 + 0x1bc);
  puVar8 = (undefined4 *)fn_8265C9E0(0x60);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8[1] = 1;
    puVar8[2] = 1;
    *puVar8 = &lbl_821A8D8C;
    if (puVar8 + 4 != (undefined4 *)0x0) {
      uVar5 = fn_82365BD8(auStack_98,param_1 + 0x26c);
      fn_822EFC50(puVar8 + 4,uVar2,param_1,uVar3,0xffffffff831cd218,uVar5,uVar1);
    }
  }
  puStack_a0 = puVar8 + 4;
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puStack_9c = puVar8;
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(undefined4 *)(param_1 + 0x1a8);
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  uVar3 = *(undefined4 *)(param_1 + 0x1bc);
  puVar9 = (undefined4 *)fn_8265C9E0(0x44);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9[1] = 1;
    puVar9[2] = 1;
    *puVar9 = &lbl_821AD588;
    if (puVar9 + 3 != (undefined4 *)0x0) {
      uVar5 = fn_82365BD8(auStack_98,param_1 + 0x26c);
      fn_822F0CA0(puVar9 + 3,uVar2,param_1,uVar3,0xffffffff831cd218,uVar5,uVar1);
    }
  }
  puStack_a0 = puVar9 + 3;
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puStack_9c = puVar9;
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(undefined4 *)(param_1 + 0x1a8);
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  uVar3 = *(undefined4 *)(param_1 + 0x1bc);
  puVar10 = (undefined4 *)fn_8265C9E0(0x34);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10[1] = 1;
    puVar12 = puVar10 + 3;
    puVar10[2] = 1;
    *puVar10 = &lbl_821AD588;
    if (puVar12 != (undefined4 *)0x0) {
      iVar11 = fn_82365BD8(auStack_98,param_1 + 0x26c);
      uVar5 = fn_82365BD8(&puStack_a0,iVar11);
      fn_822F23C0(puVar12,uVar2,6,param_1,uVar3,0xffffffff831cd218,uVar5,uVar1);
      *puVar12 = &lbl_821AE5C8;
      if (*(int *)(iVar11 + 4) != 0) {
        fn_822315A0();
      }
    }
  }
  puStack_a0 = puVar10 + 3;
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puStack_9c = puVar10;
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(undefined4 *)(param_1 + 0x1a8);
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  uVar3 = *(undefined4 *)(param_1 + 0x1bc);
  puVar12 = (undefined4 *)fn_8265C9E0(0x34);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = (undefined4 *)0x0;
  }
  else {
    puVar12[1] = 1;
    puVar13 = puVar12 + 3;
    puVar12[2] = 1;
    *puVar12 = &lbl_821AD588;
    if (puVar13 != (undefined4 *)0x0) {
      iVar11 = fn_82365BD8(auStack_98,param_1 + 0x26c);
      uVar5 = fn_82365BD8(&puStack_a0,iVar11);
      fn_822F23C0(puVar13,uVar2,7,param_1,uVar3,0xffffffff831cd218,uVar5,uVar1);
      *puVar13 = &lbl_821AE5E8;
      if (*(int *)(iVar11 + 4) != 0) {
        fn_822315A0();
      }
    }
  }
  puStack_a0 = puVar12 + 3;
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puStack_9c = puVar12;
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(undefined4 *)(param_1 + 0x1a8);
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  uVar3 = *(undefined4 *)(param_1 + 0x1bc);
  puVar13 = (undefined4 *)fn_8265C9E0(0x34);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    puVar13[1] = 1;
    puVar14 = puVar13 + 3;
    puVar13[2] = 1;
    *puVar13 = &lbl_821AD588;
    if (puVar14 != (undefined4 *)0x0) {
      iVar11 = fn_82365BD8(auStack_98,param_1 + 0x26c);
      uVar5 = fn_82365BD8(&puStack_a0,iVar11);
      fn_822F23C0(puVar14,uVar2,8,param_1,uVar3,0xffffffff831cd218,uVar5,uVar1);
      *puVar14 = &lbl_821AE608;
      if (*(int *)(iVar11 + 4) != 0) {
        fn_822315A0();
      }
    }
  }
  puStack_a0 = puVar13 + 3;
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puStack_9c = puVar13;
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  uVar1 = *(undefined4 *)(param_1 + 0x1a8);
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  uVar3 = *(undefined4 *)(param_1 + 0x1bc);
  puVar14 = (undefined4 *)fn_8265C9E0(0xe0);
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar14[1] = 1;
    puVar14[2] = 1;
    *puVar14 = &lbl_821A8D8C;
    if (puVar14 + 4 != (undefined4 *)0x0) {
      uVar5 = fn_82365BD8(auStack_98,param_1 + 0x26c);
      fn_822F33D0(puVar14 + 4,uVar2,param_1,uVar3,0xffffffff831cd218,uVar5,uVar1);
    }
  }
  puStack_a0 = puVar14 + 4;
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puStack_9c = puVar14;
  uVar5 = fn_82365BD8(auStack_98,&puStack_a0);
  fn_822C64E0(uVar1,uVar5);
  if (puVar14 != (undefined4 *)0x0) {
    fn_822315A0(puVar14);
  }
  if (puVar13 != (undefined4 *)0x0) {
    fn_822315A0(puVar13);
  }
  if (puVar12 != (undefined4 *)0x0) {
    fn_822315A0(puVar12);
  }
  if (puVar10 != (undefined4 *)0x0) {
    fn_822315A0(puVar10);
  }
  if (puVar9 != (undefined4 *)0x0) {
    fn_822315A0(puVar9);
  }
  if (puVar8 != (undefined4 *)0x0) {
    fn_822315A0(puVar8);
  }
  if ((uVar6 & 0xffffffff) != 0) {
    fn_822315A0(uVar6);
  }
  if (puVar7 != (undefined4 *)0x0) {
    fn_822315A0(puVar7);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    fn_822315A0(uVar4);
  }
  return;
}

