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
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279768();
extern int fn_82279C58();
extern int fn_822847A8();
extern int fn_8229E7D0();
extern int fn_8229E8D8();
extern int fn_82520158();
extern int fn_82536590();
extern int fn_82628520();
extern int fn_8265C9E0();
extern int fn_82672C20();
extern int fn_82673BC0();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern int fn_82BA02A8();
extern int fn_82F64988();
extern unsigned int iStack_7c;
extern unsigned int iStack_84;
extern unsigned int iStack_8c;
extern unsigned int iStack_94;
extern unsigned int lbl_82195528;
extern unsigned int lbl_82195830;
extern unsigned int lbl_821958F0;
extern unsigned int lbl_821AB540;
extern unsigned int lbl_821AB548;
extern unsigned int lbl_8229E4B0;
extern unsigned int uStack_60;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


void fn_8229DCA8(undefined4 *param_1,int param_2,int param_3,ulonglong param_4,ulonglong param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int *piVar4;
  ulonglong uVar2;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar3;
  int in_stack_00000054;
  undefined4 *apuStack_f0 [4];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined4 *puStack_ac;
  undefined ***pppuStack_a0;
  undefined1 auStack_98 [4];
  int iStack_94;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined1 auStack_88 [4];
  int iStack_84;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  
  param_1[0x101] = param_6;
  param_1[0x102] = param_7;
  param_1[0x105] = param_8;
  *param_1 = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x106] = in_stack_00000054;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 0x81) = 0;
  if ((param_4 & 0xffffffff) != 0) {
    fn_82F64988(param_1 + 1,0x100,param_4);
    param_1[0x103] = param_1[0x103] | 0x1000;
  }
  if ((param_5 & 0xffffffff) != 0) {
    fn_82F64988(param_1 + 0x81,0x100,param_5);
    param_1[0x103] = param_1[0x103] | 0x2000;
  }
  param_1[0x108] = param_1;
  param_1[0x109] = &lbl_8229E4B0;
  param_1[0x10a] = fn_82BA02A8;
  param_1[0x10b] = fn_82BA02A8;
  piVar4 = (int *)fn_8265C9E0(0x18);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[1] = in_stack_00000054;
    piVar4[2] = param_2;
    piVar4[3] = param_3;
    piVar4[4] = (int)param_4;
    *piVar4 = (int)&lbl_821AB540;
    piVar4[5] = (int)param_5;
  }
  if ((uint)param_1[0x106] < 2) {
    fn_82520158(0xffffffff821ab4a4,apuStack_f0,0);
    uVar2 = fn_8265C9E0(0x130);
    if ((uVar2 & 0xffffffff) == 0) {
LAB_8229de80:
      uVar5 = 0;
    }
    else {
      pppuStack_a0 = &ppuStack_b0;
      ppuStack_b0 = &lbl_821AB548;
      puStack_ac = param_1;
      uVar5 = fn_82279768(uVar2,apuStack_f0,param_1 + 0x107,0,3,&ppuStack_b0,0,1);
    }
LAB_8229de84:
    *param_1 = uVar5;
  }
  else if ((uint)param_1[0x106] < 5) {
    fn_82520158(0xffffffff821ab4b0,apuStack_f0,0);
    uVar2 = fn_8265C9E0(0x130);
    if ((uVar2 & 0xffffffff) == 0) goto LAB_8229de80;
    uStack_60 = 0;
    uVar5 = fn_82279768(uVar2,apuStack_f0,param_1 + 0x107,0,3,auStack_70,0,1);
    goto LAB_8229de84;
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4,1);
  }
  puVar6 = (undefined4 *)fn_82279C58(auStack_90,*param_1);
  fn_82673BC0(*puVar6,0xffffffff8229e458,param_1);
  if (iStack_8c != 0) {
    fn_822315A0();
  }
  iVar1 = param_1[0x106];
  if (iVar1 == 2) {
    uStack_c0 = 0;
    uStack_bc = 0;
    fn_82273CD8(&uStack_c0,3);
    uStack_b8 = lbl_82195528;
    puVar6 = (undefined4 *)fn_82279C58(auStack_98,*param_1);
    fn_82672C20(*puVar6,0xffffffff821ab4c0,&uStack_c0,1);
    if (iStack_94 != 0) {
      fn_822315A0();
    }
    puVar6 = &uStack_c0;
  }
  else if (iVar1 == 3) {
    uStack_d0 = 0;
    uStack_cc = 0;
    fn_82273CD8(&uStack_d0,3);
    uStack_c8 = lbl_82195830;
    puVar6 = (undefined4 *)fn_82279C58(auStack_80,*param_1);
    fn_82672C20(*puVar6,0xffffffff821ab4c0,&uStack_d0,1);
    if (iStack_7c != 0) {
      fn_822315A0();
    }
    puVar6 = &uStack_d0;
  }
  else {
    if (iVar1 != 4) goto LAB_8229e014;
    uStack_e0 = 0;
    uStack_dc = 0;
    fn_82273CD8(&uStack_e0,3);
    uStack_d8 = lbl_821958F0;
    puVar6 = (undefined4 *)fn_82279C58(auStack_88,*param_1);
    fn_82672C20(*puVar6,0xffffffff821ab4c0,&uStack_e0,1);
    if (iStack_84 != 0) {
      fn_822315A0();
    }
    puVar6 = &uStack_e0;
  }
  fn_82273C88(puVar6);
LAB_8229e014:
  apuStack_f0[0] = param_1;
  uVar3 = fn_8229E7D0();
  fn_82628520(uVar3,apuStack_f0);
  fn_8229E8D8(uVar3);
  uStack_60 = 0;
  pppuStack_a0 = (undefined ***)0x0;
  uVar5 = fn_822847A8(0xffffffff820e975c,&ppuStack_b0,0xffffffff820e975c,auStack_70,1,1);
  param_1[0x10c] = uVar5;
  fn_82864988(auStack_70,0xffffffff821ab4d0);
  apuStack_f0[0] = (undefined4 *)fn_828647D8();
  fn_82864898(auStack_70);
  fn_82536590(apuStack_f0,0);
  return;
}

