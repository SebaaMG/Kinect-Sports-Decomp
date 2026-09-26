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
extern unsigned int *auStack_a0;
extern unsigned int fStack_98;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822315A0();
extern int fn_8228E658();
extern int fn_822ABA88();
extern int fn_822CEE40();
extern int fn_822CEEC8();
extern int fn_822CEFA0();
extern int fn_822CFA98();
extern int fn_822D1320();
extern int fn_822D13D0();
extern int fn_822DFB90();
extern int fn_822DFCE8();
extern int fn_822E0EB0();
extern int fn_82365BD8();
extern int fn_82370D40();
extern int fn_823737B8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CD634;
extern unsigned int lbl_831DCD58;


void fn_822DF348(double param_1,double param_2,int param_3,int *param_4,undefined8 param_5,
                  ulonglong param_6,undefined8 param_7,undefined8 param_8,int param_9,
                  undefined8 param_10)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  bool bVar7;
  int in_r0;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar8;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 in_stack_00000054;
  int in_stack_0000005c;
  undefined4 in_stack_00000064;
  undefined1 auStack_a0 [8];
  float fStack_98;
  
  iVar12 = (int)param_6;
  if (iVar12 < 0x18) {
    iVar10 = *(int *)(&lbl_831DCD58 + (int)((param_6 & 0xffffffff) << 2));
  }
  else {
    iVar10 = 6;
  }
  iVar1 = *(int *)(param_3 + 0x14);
  iVar9 = fn_822CEE40(iVar1);
  if ((iVar9 == 0) || (bVar6 = true, *(int *)(iVar9 + 0x268) == 0)) {
    bVar6 = false;
  }
  if (iVar10 == 1) {
    if (param_2 <= (double)lbl_831CD634) {
      if (bVar6) {
        param_6 = 5;
      }
    }
    else {
LAB_822df4f0:
      param_6 = 0xc;
    }
  }
  else if (iVar10 == 2) {
    if (*(int *)(*param_4 + 0x2148) < 0x18) {
      iVar10 = *(int *)(&lbl_831DCD58 + *(int *)(*param_4 + 0x2148) * 4);
    }
    else {
      iVar10 = 6;
    }
    if ((double)lbl_831CD634 < param_2) goto LAB_822df4f0;
    if ((iVar9 == 0) ||
       (((iVar11 = fn_822CEFA0(iVar9), iVar11 == 0 && (*(int *)(iVar9 + 0x254) != 0xe)) &&
        ((*(int *)(iVar9 + 0x24) == 0 ||
         ((*(int *)(*(int *)(param_3 + 0x10) + 0x1fc) != 0 || (iVar10 == 2)))))))) {
      if (((iVar12 == 6) && (iVar9 != 0)) && (*(int *)(iVar9 + 0x254) == 4)) {
        param_6 = 7;
      }
    }
    else {
      param_6 = ((ulonglong)(iVar12 == 5) ^ 1) + 3;
    }
  }
  else if (((iVar10 == 3) &&
           (iVar10 = fn_823737B8(*(undefined4 *)(param_3 + 0x10),*(int *)(iVar1 + 0x2c) == 0),
           iVar10 != 0)) && (((double)lbl_8218E8E8 <= param_2 && (*(int *)(iVar10 + 0x24) != 0)))) {
    param_6 = 0xd;
  }
  bVar7 = false;
  if (bVar6) {
LAB_822df6fc:
    if ((int)param_6 < 0x18) goto LAB_822df62c;
    iVar12 = 6;
  }
  else {
    iVar11 = (int)param_6;
    iVar10 = -((*(uint *)(*(int *)(param_3 + 0x10) + 0x1fc) < 2) - 1);
    if (iVar11 < 0x18) {
      iVar16 = *(int *)(&lbl_831DCD58 + (int)((param_6 & 0xffffffff) << 2));
    }
    else {
      iVar16 = 6;
    }
    dVar18 = (double)lbl_821CC160;
    if ((iVar11 != 9) || (bVar6 = true, param_2 <= dVar18)) {
      bVar6 = false;
    }
    if ((((iVar10 == 0) || ((uint)LZCOUNT(iVar16 + -3) >> 5 != 0)) && (iVar11 != 0xc)) && (!bVar6))
    goto LAB_822df6fc;
    bVar7 = true;
    puVar4 = (undefined4 *)(param_3 + 0xe0U & 0xfffffff0);
    uVar13 = puVar4[1];
    uVar20 = puVar4[2];
    uVar21 = puVar4[3];
    puVar5 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar13;
    puVar5[2] = uVar20;
    puVar5[3] = uVar21;
    iVar11 = fn_822CEEC8(iVar1);
    dVar19 = (double)fStack_98;
    if (((iVar11 == 0) || (dVar19 <= (double)lbl_821954E8)) &&
       ((iVar11 = fn_822CEEC8(iVar1), iVar11 != 0 || ((double)lbl_821916FC <= dVar19)))) {
      param_6 = 0xc;
      goto LAB_822df6fc;
    }
    if (iVar10 == 0) {
LAB_822df6a4:
      uVar15 = 5;
      uVar14 = 0xffffffff821ad29c;
      param_6 = 5;
    }
    else if (dVar18 < param_2) {
      if (iVar12 == 5) goto LAB_822df6a4;
      iVar12 = fn_822CFA98(iVar1,8);
      if (iVar12 != 0) {
        param_6 = 10;
        uVar14 = 0xffffffff821ad2b0;
        goto LAB_822df624;
      }
      uVar15 = 5;
      uVar14 = 0xffffffff821ad2a8;
      param_6 = 9;
    }
    else {
      param_6 = 9;
      iVar12 = fn_822E0EB0(param_3);
      if (iVar12 == 0) {
        uVar15 = 5;
        uVar14 = 0xffffffff821ad2a8;
      }
      else {
        uVar14 = 0xffffffff821ad5b8;
LAB_822df624:
        uVar15 = 10;
      }
    }
    fn_82230360(param_5,uVar14,uVar15);
LAB_822df62c:
    iVar12 = *(int *)(&lbl_831DCD58 + (int)((param_6 & 0xffffffff) << 2));
  }
  if (bVar7) {
LAB_822df668:
    bVar6 = true;
  }
  else {
    uVar14 = fn_82365BD8(auStack_a0,param_4);
    iVar10 = fn_822DFCE8(param_2,param_3,uVar14,param_6);
    bVar6 = false;
    if (iVar10 != 0) goto LAB_822df668;
  }
  *(undefined4 *)(param_3 + 0x3c) = 0;
  iVar10 = (int)param_6;
  if ((bVar6) || (iVar9 == 0)) {
    iVar1 = *(int *)(param_3 + 0x10);
    uVar8 = fn_823737B8(iVar1,*(int *)(*(int *)(param_3 + 0x14) + 0x2c) == 0);
    if (uVar8 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = fn_822CEE40(uVar8);
    }
    iVar11 = iVar10 * 0x148 + *param_4;
    iVar16 = iVar11 + 0x1dc;
    if ((double)lbl_8218E8E8 <= param_2) {
      iVar16 = iVar11 + 0x280;
    }
    if (((uVar8 & 0xffffffff) == 0) || ((iVar12 != 2 && (iVar10 != 0xf)))) {
      if ((iVar9 == 0) || (*(int *)(iVar16 + 0x24) != 0)) {
        if ((iVar10 != 0x10) || (*(int *)(iVar16 + 0x24) != 0)) {
          if (param_9 == 0) {
            *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(param_3 + 0xd4);
          }
          else {
            uVar13 = fn_822D13D0(param_1,param_3);
            *(undefined4 *)(param_3 + 0x3c) = uVar13;
          }
          goto LAB_822df804;
        }
        piVar3 = *(int **)(*(int *)(iVar1 + 0x1f0) * 4 + **(int **)(iVar1 + 8));
        fn_822ABA88(*(undefined4 *)(piVar3[4] * 4 + *piVar3),*(undefined4 *)(iVar1 + 500));
        iVar9 = fn_822CEE40();
      }
      *(int *)(param_3 + 0x3c) = iVar9;
    }
    else {
      *(int *)(param_3 + 0x3c) = (int)uVar8;
    }
  }
  else {
    *(int *)(param_3 + 0x3c) = iVar9;
  }
LAB_822df804:
  if ((iVar12 != 1) || (bVar6)) {
    uVar13 = fn_822D1320(param_1,param_3,*(undefined4 *)(param_3 + 0x3c));
    *(undefined4 *)(param_3 + 0x40) = uVar13;
  }
  else {
    if (*(int *)(*(int *)(param_3 + 0x14) + 0x2a4) == 0) {
      uVar17 = (uint)(iVar10 == 4);
    }
    else {
      uVar17 = (uint)LZCOUNT((uint)(iVar10 == 4)) >> 5;
    }
    *(uint *)(param_3 + 0x40) = uVar17;
  }
  *(float *)(param_3 + 0x34) = (float)param_1;
  *(int *)(param_3 + 0x30) = iVar10;
  *(float *)(param_3 + 0x38) = (float)param_2;
  fn_8228E658(param_3 + 0x44,param_4);
  *(int *)(param_3 + 0x4c) = (int)param_10;
  *(undefined4 *)(param_3 + 0x74) = in_stack_00000064;
  *(undefined4 *)(param_3 + 0x50) = in_stack_00000054;
  fn_82230218(param_3 + 0x58,param_5,0,0xffffffffffffffff);
  *(undefined4 *)(param_3 + 0x54) = 0;
  iVar12 = *(int *)(param_3 + 0x14);
  if ((*(int *)(iVar12 + 0x340) == 0) && (*(int *)(*param_4 + 0xb4) == 0)) {
    uVar13 = *(undefined4 *)(param_3 + 0x10);
    dVar19 = (double)*(float *)(param_3 + 0x34);
    uVar20 = *(undefined4 *)(param_3 + 0x40);
    dVar18 = (double)*(float *)(param_3 + 0x38);
    uVar21 = *(undefined4 *)(param_3 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x3c);
    uVar14 = fn_82365BD8(auStack_a0,param_4);
    fn_82370D40(dVar18,dVar19,uVar13,uVar14,iVar12,uVar2,uVar21,uVar20);
  }
  if ((in_stack_0000005c == 0) || (iVar12 = 1, (int)param_10 == 0)) {
    iVar12 = 0;
  }
  *(int *)(param_3 + 0x90) = iVar12;
  *(int *)(param_3 + 0x94) = iVar12;
  if (iVar12 != 0) {
    uVar14 = fn_82365BD8(auStack_a0,param_4);
    fn_822DFB90(param_3,uVar14,param_10,in_stack_00000054);
  }
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  fn_82230300(param_5,1,0);
  return;
}

