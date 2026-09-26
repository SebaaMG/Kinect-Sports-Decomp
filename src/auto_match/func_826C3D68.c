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
extern unsigned int *auStack_d0;
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_826828D8();
extern int fn_82683270();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82695DA0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696AD0();
extern int fn_826BD868();
extern unsigned int iStack_70;
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;


void fn_826C3D68(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  int *piVar16;
  undefined1 auStack_d0 [16];
  undefined **ppuStack_c0;
  undefined1 *puStack_bc;
  int *piStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined **ppuStack_90;
  undefined1 *puStack_8c;
  int *piStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  piVar10 = (int *)0x0;
  iVar7 = 0;
  piVar5 = (int *)0x0;
  uVar12 = 0;
  fn_826959C8(puVar1);
  *puVar1 = 0;
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    piVar5 = (int *)fn_82696AD0(uVar4,uVar2);
    if (piVar5 != (int *)0x0) {
      iVar6 = (**(code **)(*piVar5 + 8))(piVar5);
      if ((iVar6 < 2) || (bVar3 = true, 5 < iVar6)) {
        bVar3 = false;
      }
      if (bVar3) {
        iVar7 = fn_826BD868(piVar5);
        if (iVar7 != 0) {
          *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
        }
      }
      else {
        piVar10 = piVar5 + -4;
        if (piVar10 != (int *)0x0) {
          piVar5[-2] = piVar5[-2] + 1U & 0x8fffffff;
        }
      }
    }
  }
  if (1 < *(int *)(param_1 + 0x1c)) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,1);
    iVar6 = fn_82696958(uVar4,uVar2);
    if ((iVar6 != 0) &&
       (iVar8 = (**(code **)(*(int *)(iVar6 + 0x10) + 8))(iVar6 + 0x10), iVar8 == 7)) {
      uVar12 = (ulonglong)*(uint *)(iVar6 + 0x38);
      *(uint *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1U & 0x8fffffff;
      iVar11 = iVar6;
      if ((0 < (int)*(uint *)(iVar6 + 0x38)) && (uVar13 = uVar12 - 1, -1 < (longlong)uVar13)) {
        lVar14 = (uVar13 & 0x3fffffff) << 2;
        do {
          iVar8 = *(int *)(param_1 + 0x18);
          puVar15 = (uint *)(iVar8 + 8);
          uVar2 = *(undefined4 *)((int)lVar14 + *(int *)(iVar6 + 0x34));
          uVar9 = *(int *)(iVar8 + 8) + 0x10;
          *puVar15 = uVar9;
          if (*(uint *)(iVar8 + 0x10) <= uVar9) {
            fn_826826A8(puVar15);
          }
          if (*puVar15 != 0) {
            fn_82695DA0(*puVar15,uVar2);
          }
          uVar13 = uVar13 - 1;
          lVar14 = lVar14 + -4;
        } while (-1 < (longlong)uVar13);
      }
    }
  }
  auStack_d0[0] = 0;
  iVar6 = (int)uVar12;
  if (*(int *)(param_1 + 0xc) == 0) {
    piVar16 = (int *)(*(int *)(param_1 + 8) + -0x10);
    if (*(int *)(param_1 + 8) == 0) {
      piVar16 = (int *)0x0;
    }
    if (piVar16 != (int *)0x0) {
      piVar16[2] = piVar16[2] + 1U & 0x8fffffff;
    }
    iStack_78 = *(int *)(param_1 + 0x18);
    puStack_8c = auStack_d0;
    ppuStack_90 = &lbl_8200579C;
    uStack_7c = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    iStack_70 = (*(int *)(iStack_78 + 8) - *(int *)(iStack_78 + 0xc) >> 4) +
                *(int *)(iStack_78 + 0x1c) * 0x20 + -0x20;
    piStack_88 = piVar5;
    iStack_74 = iVar6;
    (**(code **)(*piVar16 + 0x28))(piVar16,&ppuStack_90,0,0);
    fn_826828D8(&ppuStack_90);
    fn_826824B0(piVar16);
  }
  else {
    iStack_a8 = *(int *)(param_1 + 0x18);
    puStack_bc = auStack_d0;
    ppuStack_c0 = &lbl_8200579C;
    uStack_ac = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    iStack_a0 = (*(int *)(iStack_a8 + 8) - *(int *)(iStack_a8 + 0xc) >> 4) +
                *(int *)(iStack_a8 + 0x1c) * 0x20 + -0x20;
    piStack_b8 = piVar5;
    iStack_a4 = iVar6;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x28))
              (*(int **)(param_1 + 0xc),&ppuStack_c0,*(undefined4 *)(param_1 + 0x10),0);
    fn_826828D8(&ppuStack_c0);
  }
  if (0 < iVar6) {
    fn_82683270((ulonglong)*(uint *)(param_1 + 0x18) + 8,uVar12);
  }
  fn_82695FA0(*(undefined4 *)(param_1 + 4),auStack_d0);
  fn_82696330(auStack_d0);
  if (iVar11 != 0) {
    fn_826824B0(iVar11);
  }
  if (iVar7 != 0) {
    fn_8267C498(iVar7);
  }
  if (piVar10 != (int *)0x0) {
    fn_826824B0(piVar10);
  }
  return;
}

