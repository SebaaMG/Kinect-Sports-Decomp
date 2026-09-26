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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_822315A0();
extern int fn_8223C610();
extern int fn_823116D8();
extern int fn_823A9A98();
extern int fn_823F2E20();
extern int fn_82512E18();
extern unsigned int iStack_bc;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_60;
extern unsigned int uStack_80;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


void fn_823A8BD0(int param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [4];
  int iStack_bc;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  
  (**(code **)(*(int *)(param_1 + 0x28) + 0x14))(param_1 + 0x28);
  iVar7 = param_3 + 4;
  if (param_3 == 0) {
    iVar7 = 0;
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x14))(param_1 + 8,param_2,iVar7);
  iVar7 = param_3 + 0x10;
  if (param_3 == 0) {
    iVar7 = 0;
  }
  piVar11 = (int *)(param_1 + 0x40);
  (**(code **)(*(int *)(param_1 + 0x40) + 0x14))(piVar11,param_2,iVar7);
  iVar7 = param_3 + 0x24;
  if (param_3 == 0) {
    iVar7 = 0;
  }
  piVar13 = (int *)(param_1 + 0xa8);
  (**(code **)(*(int *)(param_1 + 0xa8) + 0x14))(piVar13,param_2,iVar7);
  iVar7 = fn_8223C610(param_2,2,0,0);
  iVar8 = fn_8223C610(param_2,2,0,0);
  iVar9 = fn_8223C610(param_2,2,0,0);
  iVar10 = param_3 + 0x34;
  if (param_3 == 0) {
    iVar10 = 0;
  }
  (**(code **)(*piVar13 + 0x14))(piVar13,param_2,iVar10);
  iVar10 = param_3 + 0x38;
  if (param_3 == 0) {
    iVar10 = 0;
  }
  (**(code **)(*piVar13 + 0x14))(piVar13,param_2,iVar10);
  lVar4 = fn_8223C610(param_2,1,0,0);
  lVar5 = fn_8223C610(param_2,1,0,0);
  if (param_3 != 0) {
    *(undefined4 *)(param_3 + 0x20) = 0;
    uVar14 = lbl_821CC160;
    uVar16 = lbl_821CA460;
    uVar15 = lbl_82192734;
    uVar1 = lbl_821CC160;
    if ((iVar7 != 0) && (uVar1 = lbl_821CA460, iVar7 == 1)) {
      uVar1 = lbl_82192734;
    }
    *(undefined4 *)(param_3 + 0x28) = uVar1;
    uVar1 = uVar14;
    if ((iVar8 != 0) && (uVar1 = uVar16, iVar8 == 1)) {
      uVar1 = uVar15;
    }
    *(undefined4 *)(param_3 + 0x2c) = uVar1;
    if ((iVar9 != 0) && (uVar14 = uVar16, iVar9 == 1)) {
      uVar14 = uVar15;
    }
    *(undefined4 *)(param_3 + 0x30) = uVar14;
    *(uint *)(param_3 + 0x3c) = (uint)(lVar4 != 0);
    *(uint *)(param_3 + 0x40) = (uint)(lVar5 != 0);
    uVar6 = fn_823A9A98(auStack_c0);
    fn_823F2E20(param_3 + 0x44,uVar6);
    if (iStack_bc != 0) {
      fn_822315A0();
    }
  }
  (**(code **)(*(int *)(param_1 + 0x60) + 0x14))(param_1 + 0x60,param_2,&uStack_dc);
  uVar12 = 0;
  if (uStack_dc != 0) {
    piVar13 = (int *)(param_1 + 0x98);
    do {
      (**(code **)(*(int *)(param_1 + 0x78) + 0x14))((int *)(param_1 + 0x78),param_2,&uStack_d8);
      (**(code **)(*piVar13 + 0x14))(piVar13,param_2,&uStack_e0);
      if ((param_3 != 0) && (*(int *)(param_3 + 0x44) != 0)) {
        uStack_cc = uStack_e0;
        uStack_c8 = 0;
        uStack_d0 = uStack_d8;
        fn_82512E18(*(undefined4 *)(*(int *)(param_3 + 0x44) + 8),&uStack_d0);
      }
      (**(code **)(*piVar11 + 0x14))(piVar11,param_2,auStack_a0);
      (**(code **)(*piVar13 + 0x14))(piVar13,param_2,&uStack_d4);
      if ((param_3 != 0) && (*(undefined4 **)(param_3 + 0x44) != (undefined4 *)0x0)) {
        uVar1 = **(undefined4 **)(param_3 + 0x44);
        puVar2 = (undefined4 *)((uint)(auStack_a0 + (int)in_r0) & 0xfffffff0);
        uVar14 = puVar2[1];
        uVar15 = puVar2[2];
        uVar16 = puVar2[3];
        puVar3 = (undefined4 *)((uint)(auStack_90 + (int)in_r0) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar14;
        puVar3[2] = uVar15;
        puVar3[3] = uVar16;
        uStack_80 = uStack_d4;
        fn_823116D8(uVar1,auStack_90);
      }
      (**(code **)(*piVar11 + 0x14))(piVar11,param_2,auStack_b0);
      if ((param_3 != 0) && (*(undefined4 **)(param_3 + 0x44) != (undefined4 *)0x0)) {
        uVar1 = **(undefined4 **)(param_3 + 0x44);
        puVar2 = (undefined4 *)((uint)(auStack_b0 + (int)in_r0) & 0xfffffff0);
        uVar14 = puVar2[1];
        uVar15 = puVar2[2];
        uVar16 = puVar2[3];
        puVar3 = (undefined4 *)((uint)(auStack_70 + (int)in_r0) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar14;
        puVar3[2] = uVar15;
        puVar3[3] = uVar16;
        uStack_60 = uStack_e0;
        fn_823116D8(uVar1,auStack_70);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uStack_dc);
  }
  return;
}

