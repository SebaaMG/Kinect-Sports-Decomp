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
extern int fn_82237A48();
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
extern int fn_828B5A20();
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
extern unsigned int uStack_100;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_e0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


undefined8 fn_828C7A28(undefined8 param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar12;
  int iVar13;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  double dVar18;
  undefined **appuStack_1a0 [5];
  undefined4 *puStack_18c;
  undefined4 *puStack_188;
  undefined4 *puStack_17c;
  undefined4 *puStack_178;
  undefined4 *puStack_16c;
  undefined4 *puStack_168;
  uint *puStack_164;
  undefined4 uStack_160;
  uint uStack_15c;
  undefined **ppuStack_150;
  uint uStack_100;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint uStack_e0;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint uStack_c0;
  undefined4 uStack_b0;
  uint uStack_ac;
  
  uVar7 = ZEXT48(&stack0x00000000);
  piVar12 = (int *)fn_8288F1E8(*(undefined4 *)(param_2 + 0x6c),param_2 + 0x80);
  if (piVar12 == (int *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = (**(code **)(*piVar12 + 8))();
    iVar13 = *(int *)(iVar13 + 0x10);
  }
  ppuStack_150 = &lbl_82020F40;
  appuStack_1a0[0] = (undefined **)&lbl_821AA8E0;
  fn_8223CD08(uVar7 - 0x150,uVar7 - 0x19c,0);
  *(undefined ***)((int)appuStack_1a0 + (int)appuStack_1a0[0][1]) = &lbl_82021284;
  fn_8223CF38(uVar7 - 0x19c,2);
  uVar14 = 0xffffffff82196f18;
  uVar15 = uVar14;
  if (*(char *)(param_2 + 0xa5) == '\0') {
    uVar15 = 0xffffffff82196f10;
  }
  if (*(char *)(param_2 + 0xa4) == '\0') {
    uVar14 = 0xffffffff82196f10;
  }
  bVar1 = piVar12 == (int *)0x0;
  if (bVar1) {
    uVar8 = fn_82230110(uVar7 - 0x100,0xffffffff82025294);
  }
  else {
    uVar8 = (**(code **)(*piVar12 + 0x10))(uVar7 - 0xe0,piVar12,param_3);
  }
  iVar2 = *(int *)(param_2 + 0x94);
  iVar3 = *(int *)(param_2 + 0x90);
  dVar18 = (double)*(float *)(param_2 + 0xa0);
  uVar4 = *(undefined4 *)(param_2 + 0x8c);
  uVar5 = *(undefined4 *)(param_2 + 0x88);
  uVar9 = fn_828B5A20(uVar7 - 0xc0,param_2 + 0x80,param_3,*(undefined4 *)(param_2 + 0x6c));
  uVar10 = fn_82240158(uVar7 - 0x1a0,0xffffffff82026340);
  uVar10 = fn_82240158(uVar10,0xffffffff82026200);
  uVar9 = fn_8223B728(uVar10,uVar9);
  uVar9 = fn_82240158(uVar9,0xffffffff820261ec);
  uVar8 = fn_8223B728(uVar9,uVar8);
  uVar8 = fn_82240158(uVar8,0xffffffff8202632c);
  uVar8 = fn_82520AC8(uVar8,uVar5);
  uVar8 = fn_82240158(uVar8,0xffffffff82026314);
  uVar8 = fn_8223FBB0(uVar8,uVar4);
  fn_82240158(uVar8,0xffffffff820262fc);
  uVar8 = fn_82237A48(dVar18);
  uVar8 = fn_82240158(uVar8,0xffffffff820262ec);
  uVar14 = fn_82240158(uVar8,uVar14);
  uVar14 = fn_82240158(uVar14,0xffffffff820262d8);
  uVar15 = fn_82240158(uVar14,uVar15);
  uVar15 = fn_82240158(uVar15,0xffffffff820262b8);
  uVar15 = fn_82520AC8(uVar15,iVar2 - iVar3 >> 2);
  fn_82240158(uVar15,0xffffffff8202616c);
  if (0xf < uStack_ac) {
    fn_8265CA20(uStack_c0);
  }
  uStack_b0 = 0;
  uStack_c0 = uStack_c0 & 0xffffff;
  uStack_ac = 0xf;
  if (bVar1) {
    if (0xf < uStack_ec) {
      fn_8265CA20(uStack_100);
    }
    uStack_ec = 0xf;
    uStack_f0 = 0;
    uStack_100 = uStack_100 & 0xffffff;
  }
  if (!bVar1) {
    if (0xf < uStack_cc) {
      fn_8265CA20(uStack_e0);
    }
    uStack_cc = 0xf;
    uStack_d0 = 0;
    uStack_e0 = uStack_e0 & 0xffffff;
  }
  piVar12 = *(int **)(param_2 + 0x90);
  lVar16 = 0;
  if (piVar12 != *(int **)(param_2 + 0x94)) {
    uVar15 = 0xffffffff821c24f0;
    do {
      fn_82240158(uVar7 - 0x1a0,0xffffffff82015a34);
      uVar14 = uVar15;
      if (*piVar12 == 0) {
        if (iVar13 == 0) {
          lVar11 = uVar7 - 0x1a0;
          uVar14 = 0xffffffff82026140;
        }
        else {
          fn_8288B2D8(iVar13,lVar16);
          uVar8 = fn_82897BE8();
          uVar9 = fn_82240158(uVar7 - 0x1a0,0xffffffff82026130);
          lVar11 = fn_8223B728(uVar9,uVar8);
        }
      }
      else {
        uVar4 = *(undefined4 *)(*piVar12 + 0x10);
        if (iVar13 == 0) {
          uVar8 = fn_82240158(uVar7 - 0x1a0,0xffffffff82026154);
          lVar11 = fn_8223FBB0(uVar8,uVar4);
        }
        else {
          fn_8288B2D8(iVar13,lVar16);
          uVar8 = fn_82897BE8();
          uVar9 = fn_82240158(uVar7 - 0x1a0,0xffffffff82026154);
          uVar9 = fn_8223FBB0(uVar9,uVar4);
          uVar9 = fn_82240158(uVar9,0xffffffff8202614c);
          lVar11 = fn_8223B728(uVar9,uVar8);
        }
      }
      fn_82240158(lVar11,uVar14);
      fn_82240158(uVar7 - 0x1a0,0xffffffff821cc86c);
      piVar12 = piVar12 + 1;
      lVar16 = lVar16 + 1;
    } while (piVar12 != *(int **)(param_2 + 0x94));
  }
  fn_82240158(uVar7 - 0x1a0,0xffffffff82196fb0);
  fn_822403C8(param_1,uVar7 - 0x19c);
  *(undefined ***)((int)appuStack_1a0 + (int)appuStack_1a0[0][1]) = &lbl_82021284;
  appuStack_1a0[1] = &lbl_820211D4;
  if ((uStack_15c & 1) != 0) {
    fn_8265CA20(*puStack_18c);
  }
  *puStack_18c = 0;
  *puStack_17c = 0;
  *puStack_16c = 0;
  *puStack_188 = 0;
  *puStack_178 = 0;
  *puStack_168 = 0;
  uStack_15c = uStack_15c & 0xfffffffe;
  uStack_160 = 0;
  appuStack_1a0[1] = &lbl_8202115C;
  if (puStack_164 != (uint *)0x0) {
    uVar6 = *puStack_164;
    if (uVar6 != 0) {
      fn_82F62680(uVar7 - 0x1b0,0);
      iVar13 = *(int *)(uVar6 + 4);
      if ((iVar13 != 0) && (iVar13 != -1)) {
        *(int *)(uVar6 + 4) = iVar13 + -1;
      }
      puVar17 = (undefined4 *)(-(uint)(*(int *)(uVar6 + 4) == 0) & uVar6);
      fn_82F626D0(uVar7 - 0x1b0);
      if (puVar17 != (undefined4 *)0x0) {
        (**(code **)*puVar17)(puVar17,1);
      }
    }
    fn_8265CA20(puStack_164);
  }
  fn_82F62528(uVar7 - 0x198);
  *(undefined ***)((int)appuStack_1a0 + (int)appuStack_1a0[0][1]) = &lbl_82020F40;
  ppuStack_150 = &lbl_82020F30;
  fn_82F62F60(uVar7 - 0x150);
  return param_1;
}

