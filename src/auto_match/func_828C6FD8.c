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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82230110();
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_8265CA20();
extern int fn_8288B2D8();
extern int fn_8288F1E8();
extern int fn_82897BE8();
extern int fn_828A8E18();
extern int fn_828B5A20();
extern int fn_828BB1F0();
extern int fn_82F62528();
extern int fn_82F62680();
extern int fn_82F626D0();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_8202115C;
extern unsigned int lbl_820211D4;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_f0;


undefined8 fn_828C6FD8(undefined8 param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar14;
  int iVar15;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar16;
  undefined4 *puVar17;
  undefined **appuStack_190 [5];
  undefined4 *puStack_17c;
  undefined4 *puStack_178;
  undefined4 *puStack_16c;
  undefined4 *puStack_168;
  undefined4 *puStack_15c;
  undefined4 *puStack_158;
  uint *puStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined **ppuStack_140;
  uint uStack_f0;
  undefined4 uStack_e0;
  uint uStack_dc;
  uint uStack_d0;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint uStack_b0;
  undefined4 uStack_a0;
  uint uStack_9c;
  
  uVar8 = ZEXT48(&stack0x00000000);
  piVar14 = (int *)fn_8288F1E8(*(undefined4 *)(param_2 + 0x6c),param_2 + 0x80);
  if (piVar14 == (int *)0x0) {
    iVar15 = 0;
  }
  else {
    iVar15 = (**(code **)(*piVar14 + 8))();
    iVar15 = *(int *)(iVar15 + 0x10);
  }
  ppuStack_140 = &lbl_82020F40;
  appuStack_190[0] = (undefined **)&lbl_821AA8E0;
  fn_8223CD08(uVar8 - 0x140,uVar8 - 0x18c,0);
  *(undefined ***)((int)appuStack_190 + (int)appuStack_190[0][1]) = &lbl_82021284;
  fn_8223CF38(uVar8 - 0x18c,2);
  bVar1 = piVar14 == (int *)0x0;
  if (bVar1) {
    uVar9 = fn_82230110(uVar8 - 0xf0,0xffffffff82025294);
  }
  else {
    uVar9 = (**(code **)(*piVar14 + 0x10))(uVar8 - 0xd0,piVar14,param_3);
  }
  iVar4 = *(int *)(param_2 + 0x8c);
  iVar5 = *(int *)(param_2 + 0x88);
  uVar2 = *(undefined1 *)(param_2 + 0xa0);
  uVar3 = *(undefined1 *)(param_2 + 0x98);
  uVar10 = fn_828B5A20(uVar8 - 0xb0,param_2 + 0x80,param_3,*(undefined4 *)(param_2 + 0x6c));
  uVar11 = fn_82240158(uVar8 - 400,0xffffffff82026210);
  uVar11 = fn_82240158(uVar11,0xffffffff82026200);
  uVar10 = fn_8223B728(uVar11,uVar10);
  uVar10 = fn_82240158(uVar10,0xffffffff820261ec);
  uVar9 = fn_8223B728(uVar10,uVar9);
  uVar9 = fn_82240158(uVar9,0xffffffff820261d4);
  uVar9 = fn_828A8E18(uVar9,uVar3);
  uVar9 = fn_82240158(uVar9,0xffffffff820261c0);
  uVar9 = fn_828BB1F0(uVar9,uVar2);
  uVar6 = *(undefined4 *)(param_2 + 0x9c);
  uVar9 = fn_82240158(uVar9,0xffffffff8202619c);
  uVar9 = fn_82520AC8(uVar9,uVar6);
  uVar9 = fn_82240158(uVar9,0xffffffff8202617c);
  uVar9 = fn_82520AC8(uVar9,iVar4 - iVar5 >> 2);
  fn_82240158(uVar9,0xffffffff8202616c);
  if (0xf < uStack_9c) {
    fn_8265CA20(uStack_b0);
  }
  uStack_a0 = 0;
  uStack_b0 = uStack_b0 & 0xffffff;
  uStack_9c = 0xf;
  if (bVar1) {
    if (0xf < uStack_dc) {
      fn_8265CA20(uStack_f0);
    }
    uStack_dc = 0xf;
    uStack_e0 = 0;
    uStack_f0 = uStack_f0 & 0xffffff;
  }
  if (!bVar1) {
    if (0xf < uStack_bc) {
      fn_8265CA20(uStack_d0);
    }
    uStack_bc = 0xf;
    uStack_c0 = 0;
    uStack_d0 = uStack_d0 & 0xffffff;
  }
  piVar14 = *(int **)(param_2 + 0x88);
  lVar16 = 0;
  if (piVar14 != *(int **)(param_2 + 0x8c)) {
    uVar9 = 0xffffffff821c24f0;
    do {
      fn_82240158(uVar8 - 400,0xffffffff82015a34);
      uVar10 = uVar9;
      if (*piVar14 == 0) {
        if (iVar15 == 0) {
          lVar13 = uVar8 - 400;
          uVar10 = 0xffffffff82026140;
        }
        else {
          fn_8288B2D8(iVar15,lVar16);
          uVar11 = fn_82897BE8();
          uVar12 = fn_82240158(uVar8 - 400,0xffffffff82026130);
          lVar13 = fn_8223B728(uVar12,uVar11);
        }
      }
      else {
        uVar6 = *(undefined4 *)(*piVar14 + 0x10);
        if (iVar15 == 0) {
          uVar11 = fn_82240158(uVar8 - 400,0xffffffff82026154);
          lVar13 = fn_8223FBB0(uVar11,uVar6);
        }
        else {
          fn_8288B2D8(iVar15,lVar16);
          uVar11 = fn_82897BE8();
          uVar12 = fn_82240158(uVar8 - 400,0xffffffff82026154);
          uVar12 = fn_8223FBB0(uVar12,uVar6);
          uVar12 = fn_82240158(uVar12,0xffffffff8202614c);
          lVar13 = fn_8223B728(uVar12,uVar11);
        }
      }
      fn_82240158(lVar13,uVar10);
      fn_82240158(uVar8 - 400,0xffffffff821cc86c);
      piVar14 = piVar14 + 1;
      lVar16 = lVar16 + 1;
    } while (piVar14 != *(int **)(param_2 + 0x8c));
  }
  fn_82240158(uVar8 - 400,0xffffffff82196fb0);
  fn_822403C8(param_1,uVar8 - 0x18c);
  *(undefined ***)((int)appuStack_190 + (int)appuStack_190[0][1]) = &lbl_82021284;
  appuStack_190[1] = &lbl_820211D4;
  if ((uStack_14c & 1) != 0) {
    fn_8265CA20(*puStack_17c);
  }
  *puStack_17c = 0;
  *puStack_16c = 0;
  *puStack_15c = 0;
  *puStack_178 = 0;
  *puStack_168 = 0;
  *puStack_158 = 0;
  uStack_14c = uStack_14c & 0xfffffffe;
  uStack_150 = 0;
  appuStack_190[1] = &lbl_8202115C;
  if (puStack_154 != (uint *)0x0) {
    uVar7 = *puStack_154;
    if (uVar7 != 0) {
      fn_82F62680(uVar8 - 0x1a0,0);
      iVar15 = *(int *)(uVar7 + 4);
      if ((iVar15 != 0) && (iVar15 != -1)) {
        *(int *)(uVar7 + 4) = iVar15 + -1;
      }
      puVar17 = (undefined4 *)(-(uint)(*(int *)(uVar7 + 4) == 0) & uVar7);
      fn_82F626D0(uVar8 - 0x1a0);
      if (puVar17 != (undefined4 *)0x0) {
        (**(code **)*puVar17)(puVar17,1);
      }
    }
    fn_8265CA20(puStack_154);
  }
  fn_82F62528(uVar8 - 0x188);
  *(undefined ***)((int)appuStack_190 + (int)appuStack_190[0][1]) = &lbl_82020F40;
  ppuStack_140 = &lbl_82020F30;
  fn_82F62F60(uVar8 - 0x140);
  return param_1;
}

