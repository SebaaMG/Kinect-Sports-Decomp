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
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8234C188();
extern int fn_8234C258();
extern int fn_8234D330();
extern int fn_8234D690();
extern int fn_82560010();
extern int fn_82564518();
extern int fn_827EFC90();
extern int fn_82F691F0();
extern unsigned int lbl_8218E1AC;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821922D4;
extern unsigned int lbl_82192510;
extern unsigned int lbl_8219275C;
extern unsigned int lbl_82196750;
extern unsigned int lbl_821B1D00;
extern unsigned int lbl_821B1D08;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined4 * fn_8234B5A8(undefined4 *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_r0;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 in_register_00010470;
  undefined4 in_register_00010474;
  undefined4 in_register_00010478;
  undefined4 in_vr71;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  puVar12 = param_1 + 4;
  *param_1 = &lbl_821B1D00;
  param_1[1] = &lbl_821B1D08;
  fn_82F691F0(puVar12,0,0x80);
  puVar11 = param_1 + 0x24;
  fn_82F691F0(puVar11,0,0x80);
  param_1[0x45] = param_4;
  param_1[0x44] = param_2;
  puVar10 = param_1 + 0x44;
  puVar8 = param_1 + 0x3b;
  lVar13 = 2;
  do {
    puVar8 = puVar8 + 0xb;
    *puVar8 = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10 = puVar10 + 0xb;
    *puVar10 = 0;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  if ((*(int *)(param_2 + 0x8c0) == 0) ||
     (piVar1 = *(int **)(*(int *)(param_2 + 0x8c0) + 0x1b4), piVar1 == (int *)0x0)) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar6 = (**(code **)(*piVar1 + 0x14))(piVar1,0xd);
  }
  if ((*(int *)(param_2 + 0x8c0) == 0) ||
     (piVar1 = *(int **)(*(int *)(param_2 + 0x8c0) + 0x1b4), piVar1 == (int *)0x0)) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    uVar7 = (**(code **)(*piVar1 + 0x14))(piVar1,0xc);
  }
  uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x8c0) + 0x1b4);
  puVar8 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  *puVar8 = in_register_00010470;
  puVar8[1] = in_register_00010474;
  puVar8[2] = in_register_00010478;
  puVar8[3] = in_vr71;
  param_1[0x14] = (int)uVar6;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = param_2;
  *(undefined1 *)((int)param_1 + 0x85) = 0;
  uVar5 = lbl_821CC160;
  uVar4 = lbl_821CA460;
  uVar3 = lbl_8219275C;
  uVar18 = lbl_821922D0;
  uVar16 = lbl_8218E1AC;
  param_1[0x19] = lbl_82192510;
  param_1[0x1e] = uVar16;
  param_1[0x1f] = uVar18;
  param_1[0x15] = uVar4;
  param_1[0x16] = uVar5;
  param_1[0x17] = uVar5;
  param_1[0x18] = uVar5;
  param_1[0x1a] = uVar3;
  param_1[0x1b] = uVar5;
  param_1[0x1c] = uVar5;
  param_1[0x1d] = uVar5;
  param_1[0x20] = uVar4;
  puVar8 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar14 = *puVar8;
  uVar15 = puVar8[1];
  uVar17 = puVar8[2];
  uVar19 = puVar8[3];
  param_1[0x34] = (int)uVar7;
  puVar8 = (undefined4 *)(in_r0 + (int)puVar12 & 0xfffffff0);
  *puVar8 = uVar14;
  puVar8[1] = uVar15;
  puVar8[2] = uVar17;
  puVar8[3] = uVar19;
  *(undefined1 *)(param_1 + 0x41) = 0;
  uVar14 = lbl_821922D4;
  param_1[0x42] = param_2;
  param_1[0x35] = uVar4;
  *(undefined1 *)((int)param_1 + 0x105) = 0;
  param_1[0x36] = uVar5;
  param_1[0x37] = uVar5;
  param_1[0x38] = uVar5;
  param_1[0x3a] = uVar3;
  param_1[0x39] = uVar14;
  param_1[0x3b] = uVar5;
  param_1[0x3c] = uVar5;
  param_1[0x3d] = uVar5;
  param_1[0x3e] = uVar16;
  param_1[0x3f] = uVar18;
  param_1[0x40] = uVar4;
  puVar8 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  *puVar8 = in_register_000104d0;
  puVar8[1] = in_register_000104d4;
  puVar8[2] = in_register_000104d8;
  puVar8[3] = in_vr77;
  puVar8 = (undefined4 *)((uint)(param_1 + 0x28) & 0xfffffff0);
  *puVar8 = in_register_00010470;
  puVar8[1] = in_register_00010474;
  puVar8[2] = in_register_00010478;
  puVar8[3] = in_vr71;
  puVar8 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar16 = puVar8[1];
  uVar18 = puVar8[2];
  uVar14 = puVar8[3];
  puVar10 = (undefined4 *)(in_r0 + (int)puVar11 & 0xfffffff0);
  *puVar10 = *puVar8;
  puVar10[1] = uVar16;
  puVar10[2] = uVar18;
  puVar10[3] = uVar14;
  puVar8 = (undefined4 *)((uint)(param_1 + 0x30) & 0xfffffff0);
  *puVar8 = in_register_000104d0;
  puVar8[1] = in_register_000104d4;
  puVar8[2] = in_register_000104d8;
  puVar8[3] = in_vr77;
  fn_827EFC90(param_3,uVar6 & 0xffff,param_1,puVar12);
  fn_827EFC90(param_3,6,param_1 + 1,puVar12);
  fn_827EFC90(param_3,uVar7 & 0xffff,param_1,puVar11);
  fn_827EFC90(param_3,0x22,param_1 + 1,puVar11);
  fn_82564518(param_1 + 0x4d,uVar2,uVar6);
  fn_8234D330(param_1 + 0x4d,0xffffffff8219627c);
  fn_82564518(param_1 + 0x58,uVar2,uVar7);
  fn_8234D330(param_1 + 0x58,0xffffffff8219627c);
  fn_82230110(auStack_a0,0xffffffff821ac494);
  puVar8 = (undefined4 *)fn_8234D690(auStack_80,0xffffffff821b1ce8,auStack_a0);
  if (0xf < (uint)puVar8[5]) {
    puVar8 = (undefined4 *)*puVar8;
  }
  iVar9 = fn_82560010(*(undefined4 *)param_1[0x45],puVar8);
  fn_82230300(auStack_80,1,0);
  if (iVar9 != 0) {
    fn_8234C188(param_1,param_3);
    fn_8234C258(param_1,0,auStack_a0);
    fn_8234C258(param_1,1,auStack_a0);
  }
  fn_82230300(auStack_a0,1,0);
  return param_1;
}

