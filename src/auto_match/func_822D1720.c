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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern int fn_822315A0();
extern int fn_822C1CA8();
extern int fn_822C64E0();
extern int fn_822D01E8();
extern int fn_822D1CC8();
extern int fn_822D1DA8();
extern int fn_822E18A8();
extern int fn_82365BD8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern unsigned int iStack_7c;
extern unsigned int iStack_8c;
extern unsigned int iStack_9c;
extern unsigned int iStack_bc;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821ADCD0;
extern unsigned int lbl_821ADDD8;
extern unsigned int lbl_821ADE18;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;


void fn_822D1720(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined4 *puVar4;
  undefined8 uVar2;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  ulonglong uVar3;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_c0 [4];
  int iStack_bc;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  iVar6 = *(int *)(param_2 + 0x118);
  uVar1 = fn_8251F720(param_2 + 0x280,0);
  uStack_88 = uStack_78;
  uStack_84 = uStack_74;
  iStack_8c = iVar6;
  iStack_7c = iVar6;
  fn_822C1CA8(auStack_c0,auStack_90,*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x8c0),uVar1);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8251FA58(uVar1);
  }
  uVar1 = fn_8251F720(param_2 + 0x28c,0);
  uStack_98 = uStack_78;
  uStack_94 = uStack_74;
  iStack_9c = iVar6;
  iStack_7c = iVar6;
  fn_822C1CA8(auStack_90,auStack_a0,*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x8c0),uVar1);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8251FA58(uVar1);
  }
  uVar1 = fn_8251F720(param_2 + 0x290,0);
  uStack_a8 = uStack_78;
  uStack_a4 = uStack_74;
  puStack_ac = (undefined4 *)iVar6;
  iStack_7c = iVar6;
  fn_822C1CA8(auStack_a0,&puStack_b0,*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x8c0),uVar1);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8251FA58(uVar1);
  }
  puVar4 = (undefined4 *)fn_8265C9E0(0x88);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 1;
    puVar4[2] = 1;
    *puVar4 = &lbl_821AD588;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      uVar2 = fn_82365BD8(&puStack_b0,auStack_c0);
      fn_822E18A8(puVar4 + 3,param_2,param_3,uVar2,param_4);
    }
  }
  puStack_b0 = puVar4 + 3;
  puStack_ac = puVar4;
  uVar2 = fn_82365BD8(auStack_80,&puStack_b0);
  fn_822C64E0(param_1,uVar2);
  puVar5 = (undefined4 *)fn_8265C9E0(0x54);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 1;
    puVar7 = puVar5 + 3;
    puVar5[2] = 1;
    *puVar5 = &lbl_821AD588;
    if (puVar7 != (undefined4 *)0x0) {
      iVar6 = fn_82365BD8(auStack_80,auStack_c0);
      uVar2 = fn_82365BD8(&puStack_b0,iVar6);
      fn_822D01E8(puVar7,param_2,param_3,3,uVar2,param_4);
      *puVar7 = &lbl_821ADDD8;
      if (*(int *)(iVar6 + 4) != 0) {
        fn_822315A0();
      }
    }
  }
  puStack_b0 = puVar5 + 3;
  puStack_ac = puVar5;
  uVar2 = fn_82365BD8(auStack_80,&puStack_b0);
  fn_822C64E0(param_1,uVar2);
  uVar1 = fn_8265C9E0(0x110);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_822D1CC8(uVar1,param_2,param_3,auStack_90,param_4);
  }
  puStack_ac = (undefined4 *)uVar1;
  puStack_b0 = (undefined4 *)((int)puStack_ac + 0x10);
  uVar2 = fn_82365BD8(auStack_80,&puStack_b0);
  fn_822C64E0(param_1,uVar2);
  puVar7 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[1] = 1;
    puVar8 = puVar7 + 3;
    puVar7[2] = 1;
    *puVar7 = &lbl_821AD588;
    if (puVar8 != (undefined4 *)0x0) {
      iVar6 = fn_82365BD8(auStack_80,auStack_c0);
      uVar2 = fn_82365BD8(&puStack_b0,iVar6);
      fn_822D01E8(puVar8,param_2,param_3,4,uVar2,param_4);
      *puVar8 = &lbl_821ADE18;
      if (*(int *)(iVar6 + 4) != 0) {
        fn_822315A0();
      }
    }
  }
  puStack_b0 = puVar7 + 3;
  puStack_ac = puVar7;
  uVar2 = fn_82365BD8(auStack_80,&puStack_b0);
  fn_822C64E0(param_1,uVar2);
  uVar3 = fn_8265C9E0(100);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_822D1DA8(uVar3,param_2,param_3,auStack_a0,param_4);
  }
  puStack_ac = (undefined4 *)uVar3;
  puStack_b0 = (undefined4 *)((int)puStack_ac + 0xc);
  uVar2 = fn_82365BD8(auStack_80,&puStack_b0);
  fn_822C64E0(param_1,uVar2);
  puVar8 = (undefined4 *)fn_8265C9E0(0x38);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8[1] = 1;
    puVar9 = puVar8 + 3;
    puVar8[2] = 1;
    *puVar8 = &lbl_821AD588;
    if (puVar9 != (undefined4 *)0x0) {
      iVar6 = fn_82365BD8(auStack_80,auStack_c0);
      uVar2 = fn_82365BD8(&puStack_b0,iVar6);
      fn_822D01E8(puVar9,param_2,param_3,6,uVar2,param_4);
      *puVar9 = &lbl_821ADCD0;
      if (*(int *)(iVar6 + 4) != 0) {
        fn_822315A0();
      }
    }
  }
  puStack_b0 = puVar8 + 3;
  puStack_ac = puVar8;
  uVar2 = fn_82365BD8(auStack_80,&puStack_b0);
  fn_822C64E0(param_1,uVar2);
  if (puVar8 != (undefined4 *)0x0) {
    fn_822315A0(puVar8);
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_822315A0(uVar3);
  }
  if (puVar7 != (undefined4 *)0x0) {
    fn_822315A0(puVar7);
  }
  if ((uVar1 & 0xffffffff) != 0) {
    fn_822315A0(uVar1);
  }
  if (puVar5 != (undefined4 *)0x0) {
    fn_822315A0(puVar5);
  }
  if (puVar4 != (undefined4 *)0x0) {
    fn_822315A0(puVar4);
  }
  if (iStack_9c != 0) {
    fn_822315A0();
  }
  if (iStack_8c != 0) {
    fn_822315A0();
  }
  if (iStack_bc != 0) {
    fn_822315A0();
  }
  return;
}

