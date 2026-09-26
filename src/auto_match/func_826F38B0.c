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
extern unsigned int *auStack_90;
extern unsigned int *auStack_94;
extern unsigned int *auStack_b0;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82683F88();
extern int fn_826841C0();
extern int fn_826861C8();
extern int fn_82686CA8();
extern int fn_82687270();
extern int fn_826874B8();
extern int fn_82687570();
extern int fn_82687AB8();
extern int fn_8268B330();
extern int fn_8268B610();
extern int fn_8268B8E8();
extern int fn_8268BC50();
extern int fn_8268C750();
extern int fn_826D7220();
extern int fn_826F3698();
extern int fn_826F3700();
extern int fn_8278AF50();
extern unsigned int iStack_70;
extern unsigned int iStack_78;
extern unsigned int iStack_a8;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a4;
extern U64 storeWordConditionalIndexed();


undefined8 fn_826F38B0(undefined8 param_1,int param_2,int *param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar7;
  int iVar8;
  undefined8 uVar6;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  char in_RESERVE;
  byte bVar14;
  uint auStack_b0 [2];
  int iStack_a8;
  undefined4 uStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  uVar5 = fn_8267B890(lbl_831E7E64,0x20,0);
  uVar12 = 0;
  if ((uVar5 & 0xffffffff) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = fn_826F3698(uVar5,param_2);
  }
  if ((*(int *)(iVar7 + 8) == 1) && (*(undefined4 **)(iVar7 + 0xc) != (undefined4 *)0x0)) {
    *(undefined4 *)(iVar7 + 8) = **(undefined4 **)(iVar7 + 0xc);
  }
  uStack_98 = 2;
  fn_8268C750(auStack_94,param_2 + 0x10);
  fn_8268C750(auStack_90,param_4 + 0x40);
  iVar11 = iVar7 + 0x10;
  piVar2 = *(int **)(*(int *)(param_4 + 8) + 0xc);
  if (piVar2 == (int *)0x0) {
    fn_826841C0(iVar11,&uStack_98);
  }
  else {
    (**(code **)(*piVar2 + 4))(piVar2,iVar11,&uStack_98);
  }
  uVar3 = *(undefined4 *)(*(int *)(param_4 + 0x38) + 0x2c);
  fn_8278AF50(&piStack_a0,iVar7,*(undefined4 *)(*(int *)(param_4 + 8) + 8),
                  *(undefined4 *)(*(int *)(param_4 + 8) + 0x10),uVar3);
  fn_8268B330(auStack_b0);
  iStack_a8 = 0;
  uStack_a4 = 0;
  uVar5 = 0;
  iVar8 = fn_82687AB8(*(undefined4 *)(param_4 + 0x38),&iStack_a8,&piStack_a0);
  if (iVar8 == 3) {
    uStack_7c = *(undefined4 *)(param_2 + 0x18);
    uStack_68 = *(undefined4 *)(param_4 + 0x20);
    uStack_64 = *(undefined4 *)(param_4 + 0xc);
    uStack_60 = *(undefined4 *)(param_4 + 0x24);
    uStack_5c = *(undefined4 *)(param_4 + 0x2c);
    bVar1 = *(char *)(param_4 + 0x44) == '\0';
    bVar14 = bVar1 << 1;
    uStack_74 = 1;
    uStack_80 = 2;
    uStack_6c = *(undefined4 *)(*(int *)(param_4 + 8) + 8);
    if ((!bVar1) || (uStack_54 = 0, *(int *)(param_4 + 0x18) != 0)) {
      uStack_54 = 1;
    }
    uVar13 = 0;
    iStack_78 = (*(uint *)(param_2 + 0x1c) & 0xfffffffc) + 8;
    piVar2 = *(int **)(*(int *)(param_4 + 8) + 0x10);
    iStack_70 = iVar7;
    uStack_58 = uVar3;
    if (piVar2 == (int *)0x0) {
LAB_826f3adc:
      fn_8268B8E8(auStack_b0,0xffffffff8200db58);
      fn_8268BC50(auStack_b0,iVar11);
      fn_8268B610(auStack_b0,0xffffffff820060d0,0xffffffffffffffff);
      fn_82687570(uStack_a4,((ulonglong)auStack_b0[0] & 0xfffffffc) + 8);
    }
    else {
      uVar13 = (**(code **)(*piVar2 + 4))(piVar2,&uStack_80);
      bVar14 = (uVar13 == 0) << 1;
      if (uVar13 == 0) goto LAB_826f3adc;
      uVar5 = fn_8267B890(uStack_58,0x1c,0);
      bVar1 = (uVar5 & 0xffffffff) == 0;
      bVar14 = bVar1 << 1;
      if (bVar1) {
        uVar5 = 0;
      }
      else {
        uVar5 = fn_826F3700(uVar5,uVar13,&piStack_a0,uStack_7c);
      }
      if ((uVar5 & 0xffffffff) == 0) goto LAB_826f3adc;
      fn_826874B8(uStack_a4);
    }
    if ((uVar13 & 0xffffffff) != 0) {
      fn_8267C498(uVar13);
    }
LAB_826f3b70:
    if ((uVar5 & 0xffffffff) == 0) {
      fn_82683F88((ulonglong)*(uint *)(param_4 + 0xc) + 0xc,0xffffffff8200db4c,
                        ((ulonglong)auStack_b0[0] & 0xfffffffc) + 8);
      if (iStack_a8 == 1) {
        fn_82687270(uStack_a4);
      }
      else if (1 < iStack_a8) {
        fn_8267C4F0(uStack_a4);
      }
      lVar9 = ((ulonglong)auStack_b0[0] & 0xfffffffc) + 4;
      do {
        puVar10 = (uint *)lVar9;
        uVar5 = (ulonglong)*puVar10;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(uVar5 - 1,0,lVar9);
          *puVar10 = uVar4;
          bVar14 = 2;
        }
      } while (!(bool)(bVar14 >> 1 & 1));
      if (uVar5 == 1) {
        fn_8267BE38();
      }
      if (piStack_a0 != (int *)0x0) {
        (**(code **)(*piStack_a0 + 8))(piStack_a0,uStack_9c);
      }
      goto LAB_826f3c1c;
    }
  }
  else {
    uVar5 = fn_82686CA8(&iStack_a8);
    bVar14 = (uVar5 == 0) << 1;
    if (uVar5 == 0) {
      if (iStack_a8 < 2) {
        uVar6 = 0xffffffff82196582;
      }
      else {
        uVar6 = fn_826861C8(uStack_a4);
      }
      fn_8268B8E8(auStack_b0,uVar6);
      goto LAB_826f3b70;
    }
  }
  fn_8267C4C8(uVar5);
  if (*param_3 != 0) {
    fn_82687270();
  }
  *param_3 = (int)uVar5;
  if ((uVar5 & 0xffffffff) != 0) {
    fn_82687270(uVar5);
  }
  if (iStack_a8 == 1) {
    fn_82687270(uStack_a4);
  }
  else if (1 < iStack_a8) {
    fn_8267C4F0(uStack_a4);
  }
  lVar9 = ((ulonglong)auStack_b0[0] & 0xfffffffc) + 4;
  do {
    puVar10 = (uint *)lVar9;
    uVar5 = (ulonglong)*puVar10;
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(uVar5 - 1,0,lVar9);
      *puVar10 = uVar4;
      bVar14 = 2;
    }
  } while (!(bool)(bVar14 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  if (piStack_a0 != (int *)0x0) {
    (**(code **)(*piStack_a0 + 8))(piStack_a0,uStack_9c);
  }
  uVar12 = 1;
LAB_826f3c1c:
  fn_826D7220(&uStack_98);
  fn_8267C498(iVar7);
  return uVar12;
}

