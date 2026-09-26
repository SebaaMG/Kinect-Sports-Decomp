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
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_822AF138();
extern int fn_822C1CA8();
extern int fn_822C64E0();
extern int fn_82339488();
extern int fn_82339548();
extern int fn_82341008();
extern int fn_82342EC0();
extern int fn_82344C28();
extern int fn_82349DE8();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int lbl_82195A3C;
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B0CA0;
extern unsigned int lbl_821B1880;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;


void fn_82337020(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 *puStack_b8;
  undefined4 *puStack_b4;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined4 *puStack_a8;
  undefined4 *puStack_a4;
  undefined4 *puStack_a0;
  undefined4 *puStack_9c;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined1 auStack_78 [4];
  int iStack_74;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  iVar5 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x118);
  uStack_c4 = 0;
  uStack_c8 = 0;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x8c0);
  if (*(int *)(*(int *)(param_1 + 0x1a0) + 0x30) != 0) {
    uVar3 = fn_8251F720(*(int *)(param_1 + 0x1a0) + 0x30,0);
    uStack_88 = uStack_68;
    uStack_84 = uStack_64;
    iStack_8c = uVar1;
    uStack_6c = uVar1;
    uVar4 = fn_822C1CA8(auStack_80,&iStack_90,uVar2,uVar3);
    fn_823F2E20(&uStack_c8,uVar4);
    if (iStack_7c != 0) {
      fn_822315A0();
    }
    if ((uVar3 & 0xffffffff) != 0) {
      fn_8251FA58(uVar3);
    }
  }
  uStack_bc = 0;
  uStack_c0 = 0;
  if (*(int *)(*(int *)(param_1 + 0x1a0) + 0x34) != 0) {
    uVar3 = fn_8251F720(*(int *)(param_1 + 0x1a0) + 0x34,0);
    uStack_88 = uStack_68;
    uStack_84 = uStack_64;
    iStack_8c = uVar1;
    uStack_6c = uVar1;
    uVar4 = fn_822C1CA8(auStack_78,&iStack_90,uVar2,uVar3);
    fn_823F2E20(&uStack_c0,uVar4);
    if (iStack_74 != 0) {
      fn_822315A0();
    }
    if ((uVar3 & 0xffffffff) != 0) {
      fn_8251FA58(uVar3);
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x114);
  puStack_b4 = (undefined4 *)fn_8265C9E0(0x1c);
  if (puStack_b4 == (undefined4 *)0x0) {
    puStack_b4 = (undefined4 *)0x0;
  }
  else {
    puStack_b4[1] = 1;
    puVar6 = puStack_b4 + 3;
    puStack_b4[2] = 1;
    *puStack_b4 = &lbl_821AD588;
    if (puVar6 != (undefined4 *)0x0) {
      fn_82341008(puVar6,uVar1,param_1,1);
      *puVar6 = &lbl_821B0CA0;
    }
  }
  puStack_b8 = puStack_b4 + 3;
  uVar1 = *(undefined4 *)(param_1 + 0x114);
  iStack_d0 = 7;
  uVar3 = fn_8265C9E0(0x20);
  if ((uVar3 & 0xffffffff) == 0) {
    iStack_cc = 0;
  }
  else {
    iStack_cc = fn_82339488(uVar3,uVar1,param_1,&uStack_c8,&iStack_d0);
  }
  iStack_d0 = iStack_cc + 0xc;
  uVar1 = *(undefined4 *)(param_1 + 0x114);
  puStack_ac = (undefined4 *)fn_8265C9E0(0x2c);
  if (puStack_ac == (undefined4 *)0x0) {
    puStack_ac = (undefined4 *)0x0;
  }
  else {
    puStack_ac[1] = 1;
    puStack_ac[2] = 1;
    *puStack_ac = &lbl_821AD588;
    if (puStack_ac + 3 != (undefined4 *)0x0) {
      uVar4 = fn_82365BD8(&iStack_90,&uStack_c8);
      fn_82344C28(puStack_ac + 3,uVar1,param_1,uVar4);
    }
  }
  puStack_b0 = puStack_ac + 3;
  uVar1 = *(undefined4 *)(param_1 + 0x114);
  puStack_a4 = (undefined4 *)fn_8265C9E0(0x24);
  if (puStack_a4 == (undefined4 *)0x0) {
    puStack_a4 = (undefined4 *)0x0;
  }
  else {
    puStack_a4[1] = 1;
    puVar6 = puStack_a4 + 3;
    puStack_a4[2] = 1;
    *puStack_a4 = &lbl_821AD588;
    if (puVar6 != (undefined4 *)0x0) {
      fn_82349DE8(puVar6,uVar1,param_1,3);
      *puVar6 = &lbl_821B1880;
      puStack_a4[8] = lbl_82195A3C;
    }
  }
  puStack_a8 = puStack_a4 + 3;
  uVar1 = *(undefined4 *)(param_1 + 0x114);
  puStack_9c = (undefined4 *)fn_8265C9E0(0x24);
  if (puStack_9c == (undefined4 *)0x0) {
    puStack_9c = (undefined4 *)0x0;
  }
  else {
    puStack_9c[1] = 1;
    puStack_9c[2] = 1;
    *puStack_9c = &lbl_821AD588;
    if (puStack_9c + 3 != (undefined4 *)0x0) {
      uVar4 = fn_82365BD8(&iStack_90,&uStack_c8);
      fn_82342EC0(puStack_9c + 3,uVar1,param_1,uVar4);
    }
  }
  puStack_a0 = puStack_9c + 3;
  uVar1 = *(undefined4 *)(param_1 + 0x114);
  uVar3 = fn_8265C9E0(0x20);
  if ((uVar3 & 0xffffffff) != 0) {
    iVar5 = fn_82339548(uVar3,uVar1,param_1,&uStack_c8,&uStack_c0);
  }
  iStack_90 = iVar5 + 0xc;
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  iStack_8c = iVar5;
  uVar4 = fn_82365BD8(auStack_70,&puStack_b8);
  fn_822C64E0(uVar1,uVar4);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  uVar4 = fn_82365BD8(auStack_70,&iStack_d0);
  fn_822C64E0(uVar1,uVar4);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  uVar4 = fn_82365BD8(auStack_70,&puStack_b0);
  fn_822C64E0(uVar1,uVar4);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  uVar4 = fn_82365BD8(auStack_70,&puStack_a8);
  fn_822C64E0(uVar1,uVar4);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  uVar4 = fn_82365BD8(auStack_70,&puStack_a0);
  fn_822C64E0(uVar1,uVar4);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  uVar4 = fn_82365BD8(auStack_70,&iStack_90);
  fn_822C64E0(uVar1,uVar4);
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(undefined4 *)(param_1 + 0x110),1);
}

