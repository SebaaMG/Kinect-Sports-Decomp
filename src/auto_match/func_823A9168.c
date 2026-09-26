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
extern unsigned int *auStack_9c;
extern int fn_8223C478();
extern int fn_823B3BA8();
extern int fn_8253FEF8();
extern int fn_828E9DB8();
extern int fn_82F622E0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_a0;


void fn_823A9168(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 in_r0;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined8 uVar10;
  int *piVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uStack_a0;
  undefined4 auStack_9c [3];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  iVar7 = fn_82F6A548();
  (**(code **)(*(int *)(iVar7 + 0x28) + 0x10))(iVar7 + 0x28);
  (**(code **)(*(int *)(iVar7 + 8) + 0x10))(iVar7 + 8,param_2,param_3 + 4);
  piVar9 = (int *)(iVar7 + 0x40);
  (**(code **)(*(int *)(iVar7 + 0x40) + 0x10))(piVar9,param_2,param_3 + 0x10);
  piVar11 = (int *)(iVar7 + 0xa8);
  (**(code **)(*(int *)(iVar7 + 0xa8) + 0x10))(piVar11,param_2,param_3 + 0x24);
  dVar18 = (double)lbl_821CC160;
  iVar4 = (int)param_3;
  if (*(int *)(iVar4 + 0x28) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    if (dVar18 <= (double)*(float *)(iVar4 + 0x28)) {
      uVar10 = 2;
    }
  }
  fn_8223C478(param_2,2,0);
  fn_828E9DB8(param_2,uVar10,2);
  if (*(int *)(iVar4 + 0x2c) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    if (dVar18 <= (double)*(float *)(iVar4 + 0x2c)) {
      uVar10 = 2;
    }
  }
  fn_8223C478(param_2,2,0);
  fn_828E9DB8(param_2,uVar10,2);
  if (*(int *)(iVar4 + 0x30) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
    if (dVar18 <= (double)*(float *)(iVar4 + 0x30)) {
      uVar10 = 2;
    }
  }
  fn_8223C478(param_2,2,0);
  fn_828E9DB8(param_2,uVar10,2);
  (**(code **)(*piVar11 + 0x10))(piVar11,param_2,param_3 + 0x34);
  (**(code **)(*piVar11 + 0x10))(piVar11,param_2,param_3 + 0x38);
  iVar8 = *(int *)(iVar4 + 0x3c);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,iVar8 != 0,1);
  iVar8 = *(int *)(iVar4 + 0x40);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,iVar8 != 0,1);
  piVar11 = *(int **)(*(int *)(iVar4 + 0x44) + 8);
  uStack_a0 = (piVar11[1] - *piVar11) / 0xc;
  (**(code **)(*(int *)(iVar7 + 0x60) + 0x10))(iVar7 + 0x60,param_2,&uStack_a0);
  uVar12 = 0;
  if (uStack_a0 != 0) {
    dVar17 = (double)lbl_8218E8E8;
    dVar16 = (double)lbl_821CA460;
    do {
      piVar11 = *(int **)(*(int *)(iVar4 + 0x44) + 8);
      iVar8 = *piVar11;
      if ((uint)((piVar11[1] - iVar8) / 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      auStack_9c[0] = *(undefined4 *)(uVar12 * 0xc + iVar8);
      iVar8 = uVar12 * 0xc + iVar8;
      (**(code **)(*(int *)(iVar7 + 0x78) + 0x10))(iVar7 + 0x78,param_2,auStack_9c);
      auStack_9c[0] = *(undefined4 *)(iVar8 + 4);
      piVar11 = (int *)(iVar7 + 0x98);
      (**(code **)(*(int *)(iVar7 + 0x98) + 0x10))(piVar11,param_2,auStack_9c);
      dVar14 = dVar18;
      if (uVar12 != 0) {
        piVar1 = *(int **)(*(int *)(iVar4 + 0x44) + 8);
        iVar2 = *piVar1;
        if ((uint)((piVar1[1] - iVar2) / 0xc) <= uVar12 - 1) {
                    /* WARNING: Subroutine does not return */
          fn_82F622E0(0xffffffff821ae698);
        }
        dVar14 = (double)*(float *)((uVar12 - 1) * 0xc + iVar2 + 4);
      }
      dVar15 = (double)*(float *)(iVar8 + 4);
      dVar13 = (double)fn_8253FEF8(dVar17,dVar18,dVar16);
      iVar8 = fn_823B3BA8((double)(float)((double)(float)(dVar15 - dVar14) * dVar13 + dVar14),
                           *(undefined4 *)(iVar4 + 0x44));
      puVar5 = (undefined4 *)((int)in_r0 + iVar8 & 0xfffffff0);
      uVar19 = puVar5[1];
      uVar20 = puVar5[2];
      uVar21 = puVar5[3];
      pcVar3 = *(code **)(*piVar9 + 0x10);
      puVar6 = (undefined4 *)((uint)(auStack_90 + (int)in_r0) & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar19;
      puVar6[2] = uVar20;
      puVar6[3] = uVar21;
      (*pcVar3)(piVar9,param_2,auStack_90);
      auStack_9c[0] = *(undefined4 *)(iVar8 + 0x10);
      (**(code **)(*piVar11 + 0x10))(piVar11,param_2,auStack_9c);
      iVar8 = fn_823B3BA8(dVar15,*(undefined4 *)(iVar4 + 0x44));
      puVar5 = (undefined4 *)((int)in_r0 + iVar8 & 0xfffffff0);
      uVar19 = puVar5[1];
      uVar20 = puVar5[2];
      uVar21 = puVar5[3];
      pcVar3 = *(code **)(*piVar9 + 0x10);
      puVar6 = (undefined4 *)((uint)(auStack_80 + (int)in_r0) & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar19;
      puVar6[2] = uVar20;
      puVar6[3] = uVar21;
      (*pcVar3)(piVar9,param_2,auStack_80);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uStack_a0);
  }
  fn_82F6A594();
  return;
}

