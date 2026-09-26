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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_d0;
extern int fn_826824B0();
extern int fn_826828D8();
extern int fn_826944C8();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696B20();
extern int fn_82696BC8();
extern int fn_826A7A58();
extern int fn_826AD310();
extern int fn_826ADE60();
extern int fn_826AE288();
extern int fn_826AE338();
extern int fn_826B14D8();
extern int fn_826C3378();
extern int fn_826C3768();
extern unsigned int iStack_104;
extern unsigned int iStack_108;
extern unsigned int iStack_114;
extern unsigned int iStack_118;
extern unsigned int iStack_12c;
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_a8;
extern unsigned int iStack_f4;
extern unsigned int iStack_f8;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;


int fn_826B2CF0(int param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar5;
  int iVar6;
  char cVar8;
  undefined8 uVar4;
  int *piVar7;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  int *piStack_130;
  int iStack_12c;
  byte bStack_128;
  undefined4 *puStack_124;
  undefined4 *apuStack_120 [2];
  int iStack_118;
  int iStack_114;
  byte bStack_110;
  int iStack_108;
  int iStack_104;
  byte bStack_100;
  int iStack_f8;
  int iStack_f4;
  byte bStack_f0;
  char acStack_e0 [16];
  undefined1 auStack_d0 [16];
  char acStack_c0 [16];
  undefined **ppuStack_b0;
  undefined1 *puStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  auStack_80[0] = 0;
  puStack_124 = (undefined4 *)0x0;
  bVar3 = false;
  if (param_4 < 0) {
    param_4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 4) +
              *(int *)(param_1 + 0x1c) * 0x20 + -0x20;
  }
  if (param_3 == 1) {
    bVar3 = true;
    puVar5 = (uint *)fn_826AE288(&iStack_118,param_1,1);
    bVar10 = true;
    if (*param_2 != *puVar5) goto LAB_826b2d74;
  }
  else {
LAB_826b2d74:
    bVar10 = false;
  }
  if (bVar3) {
    if (((bStack_110 & 2) == 0) && (iStack_118 != 0)) {
      fn_826824B0();
    }
    iStack_118 = 0;
    if (((bStack_110 & 1) == 0) && (iStack_114 != 0)) {
      fn_826824B0();
    }
    iStack_114 = 0;
  }
  bVar3 = false;
  if (bVar10) {
    acStack_e0[0] = '\0';
    cVar8 = **(char **)(param_1 + 8);
    if ((cVar8 == '\x03') || (bVar10 = false, cVar8 == '\x04')) {
      bVar10 = true;
    }
    if (((bVar10) || (cVar8 == '\x02')) || (cVar8 == '\x05')) {
      uVar4 = fn_826AE338(auStack_60,param_1,0);
      fn_82695FA0(acStack_e0,uVar4);
      fn_82696330(auStack_60);
    }
    else if ((cVar8 == '\x06') || (cVar8 == '\a')) {
      fn_82695FA0(acStack_e0);
    }
    if ((acStack_e0[0] == '\0') || (bVar10 = false, acStack_e0[0] == '\n')) {
      bVar10 = true;
    }
    if (!bVar10) {
      iVar6 = fn_82696958(acStack_e0,param_1);
      if (iVar6 != 0) {
        *(uint *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1U & 0x8fffffff;
      }
      fn_82696330(acStack_e0);
      goto LAB_826b2e9c;
    }
    fn_82696330(acStack_e0);
  }
  puVar5 = (uint *)(param_1 + 0x78);
  auStack_d0[0] = 0;
  cVar8 = (**(code **)(*(int *)(*param_2 + 0x10) + 0x2c))
                    ((int *)(*param_2 + 0x10),puVar5,(ulonglong)*(uint *)(param_1 + 0x78) + 0x130,
                     auStack_d0);
  if (cVar8 == '\0') {
    uVar4 = fn_826B14D8(*puVar5,1);
    fn_82696BC8(auStack_d0,uVar4);
  }
  iVar6 = fn_82696958(auStack_d0,param_1);
  piStack_130 = (int *)*param_2;
  bStack_128 = 0;
  piVar7 = (int *)0x0;
  if (piStack_130 != (int *)0x0) {
    iVar1 = piStack_130[2];
    piStack_130[2] = iVar1 + 1U;
    piStack_130[2] = iVar1 + 1U & 0x8fffffff;
    piVar7 = piStack_130;
  }
  iStack_12c = 0;
  if (param_2[1] != 0) {
    fn_826C3378(&piStack_130,param_2[1],*(byte *)(param_2 + 2) & 1);
    piVar7 = piStack_130;
  }
  acStack_c0[0] = '\0';
  if ((iVar6 != 0) &&
     (cVar8 = (**(code **)(*(int *)(iVar6 + 0x10) + 0x2c))
                        (iVar6 + 0x10,puVar5,(ulonglong)*puVar5 + 0x138,acStack_c0),
     piVar7 = piStack_130, cVar8 != '\0')) {
    if ((acStack_c0[0] == '\b') || (bVar10 = false, acStack_c0[0] == '\v')) {
      bVar10 = true;
    }
    if (bVar10) {
      bVar3 = true;
      piVar7 = (int *)fn_82696B20(&iStack_108,acStack_c0,param_1);
      bVar10 = true;
      if (*piVar7 == 0) goto LAB_826b2fe8;
    }
    else {
LAB_826b2fe8:
      bVar10 = false;
    }
    if (bVar3) {
      if (((bStack_100 & 2) == 0) && (iStack_108 != 0)) {
        fn_826824B0();
      }
      iStack_108 = 0;
      if (((bStack_100 & 1) == 0) && (iStack_104 != 0)) {
        fn_826824B0();
      }
      iStack_104 = 0;
    }
    piVar7 = piStack_130;
    if (bVar10) {
      uVar4 = fn_82696B20(&iStack_f8,acStack_c0,param_1);
      fn_826C3768(&piStack_130,uVar4);
      if (((bStack_f0 & 2) == 0) && (iStack_f8 != 0)) {
        fn_826824B0();
      }
      iStack_f8 = 0;
      if (((bStack_f0 & 1) == 0) && (iStack_f4 != 0)) {
        fn_826824B0();
      }
      iStack_f4 = 0;
      piVar7 = piStack_130;
    }
  }
  iVar6 = (**(code **)(*piVar7 + 0x3c))(piVar7,param_1);
  if (iVar6 == 0) {
    lVar9 = (ulonglong)*param_2 + 0x10;
    if ((ulonglong)*param_2 == 0) {
      lVar9 = 0;
    }
    fn_826AD310(&puStack_124,*puVar5,param_1,lVar9);
    piVar7 = piStack_130 + 4;
    if (piStack_130 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    fn_826AD310(apuStack_120,*puVar5,param_1,piVar7);
    fn_826ADE60(param_1,0xffffffff82007a20,*apuStack_120[0],*puStack_124);
    uVar2 = apuStack_120[0][2];
    apuStack_120[0][2] = (int)((ulonglong)uVar2 - 1);
    if ((ulonglong)uVar2 - 1 == 0) {
      fn_826944C8(apuStack_120[0]);
    }
    uVar2 = puStack_124[2];
    puStack_124[2] = (int)((ulonglong)uVar2 - 1);
    if ((ulonglong)uVar2 - 1 == 0) {
      fn_826944C8(puStack_124);
    }
    fn_82696330(acStack_c0);
    if (((bStack_128 & 2) == 0) && (piStack_130 != (int *)0x0)) {
      fn_826824B0();
    }
    piStack_130 = (int *)0x0;
    if (((bStack_128 & 1) == 0) && (iStack_12c != 0)) {
      fn_826824B0();
    }
    iStack_12c = 0;
    fn_82696330(auStack_d0);
    fn_82696330(auStack_80);
    return 0;
  }
  iVar1 = *(int *)(iVar6 + 0x10);
  iVar11 = iVar6 + 0x10;
  uVar4 = fn_82696958(auStack_d0,param_1);
  (**(code **)(iVar1 + 0x34))(iVar11,puVar5,uVar4);
  fn_826A7A58(iVar11,puVar5,param_2);
  puStack_ac = auStack_70;
  auStack_70[0] = 0;
  ppuStack_b0 = &lbl_8200579C;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  iStack_a8 = iVar11;
  iStack_98 = param_1;
  iStack_94 = param_3;
  iStack_90 = param_4;
  (**(code **)(*(int *)*param_2 + 0x28))((int *)*param_2,&ppuStack_b0,param_2[1],0);
  fn_826828D8(&ppuStack_b0);
  *(uint *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1U & 0x8fffffff;
  fn_82696330(auStack_70);
  fn_82696330(acStack_c0);
  if (((bStack_128 & 2) == 0) && (piStack_130 != (int *)0x0)) {
    fn_826824B0();
  }
  piStack_130 = (int *)0x0;
  if (((bStack_128 & 1) == 0) && (iStack_12c != 0)) {
    fn_826824B0();
  }
  iStack_12c = 0;
  fn_82696330(auStack_d0);
  fn_826824B0(iVar6);
LAB_826b2e9c:
  fn_82696330(auStack_80);
  return iVar6;
}

