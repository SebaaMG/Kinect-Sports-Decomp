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
extern int fn_82522838();
extern int fn_82522CF8();
extern int fn_82522D98();
extern int fn_82536690();
extern int fn_8256E270();
extern int fn_8259A230();
extern int fn_8259C458();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8326B7D0;
extern unsigned int *lbl_832767CC;
extern unsigned int lbl_83280CF4;


int fn_8256E680(undefined8 param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  short sVar4;
  short sVar5;
  int in_r0;
  int *piVar7;
  longlong lVar6;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int *apiStack_a0 [40];
  
  piVar7 = (int *)fn_82522D98(0xd0);
  piVar14 = lbl_832767CC;
  uVar13 = (param_4 & 0xfffffff) * 0x10;
  bVar1 = lbl_832767CC == (int *)0x0;
  *piVar7 = lbl_83280CF4;
  lbl_83280CF4 = lbl_83280CF4 + 1;
  piVar7[0x1a] = (int)param_4;
  piVar7[0x1b] = 0x10;
  piVar7[0x1c] = (int)uVar13;
  apiStack_a0[0] = piVar7;
  if (bVar1) {
    fn_82522838();
    piVar14 = lbl_832767CC;
    if (lbl_832767CC == (int *)0x0) {
      fn_82522838();
      piVar14 = lbl_832767CC;
    }
  }
  if (*piVar14 == 0) {
    fn_82522838();
  }
  lVar6 = fn_82A1BB18();
  fn_8259C5D8(piVar14 + 2,1,lVar6 + 1);
  fn_82A1BB18();
  iVar8 = fn_8259A230();
  iVar8 = fn_8259C458((&lbl_8326B7D0)[iVar8]);
  uVar10 = *(uint *)(iVar8 + 0x28);
  *(undefined4 *)(iVar8 + 0x28) = 0x10;
  uVar9 = fn_82522CF8(iVar8,(uVar13 + 8) * 0x10 & 0xfffffff0);
  if (0x10 < uVar10) {
    uVar10 = 0x10;
  }
  *(uint *)(iVar8 + 0x28) = uVar10;
  fn_82A1BB18();
  fn_8259C738(piVar14 + 2);
  piVar7[0x16] = uVar9;
  piVar7[0x14] = (uVar9 - (uVar9 & 0x7f)) + 0x80;
  uVar10 = piVar7[0x1c];
  if (lbl_832767CC == (int *)0x0) {
    fn_82522838();
    if (lbl_832767CC == (int *)0x0) {
      fn_82522838();
    }
  }
  piVar14 = lbl_832767CC;
  if (*lbl_832767CC == 0) {
    fn_82522838();
  }
  lVar6 = fn_82A1BB18();
  fn_8259C5D8(piVar14 + 2,1,lVar6 + 1);
  fn_82A1BB18();
  iVar8 = fn_8259A230();
  iVar8 = fn_8259C458((&lbl_8326B7D0)[iVar8]);
  uVar9 = *(uint *)(iVar8 + 0x28);
  *(undefined4 *)(iVar8 + 0x28) = 0x10;
  uVar10 = fn_82522CF8(iVar8,((ulonglong)uVar10 + 8 & 0xfffffff) << 4);
  if (0x10 < uVar9) {
    uVar9 = 0x10;
  }
  *(uint *)(iVar8 + 0x28) = uVar9;
  fn_82A1BB18();
  fn_8259C738(piVar14 + 2);
  piVar7[0x17] = uVar10;
  piVar7[0x15] = (uVar10 - (uVar10 & 0x7f)) + 0x80;
  iVar8 = fn_82522D98((param_4 - 1) * 0x78);
  piVar7[0x18] = iVar8;
  iVar8 = fn_82522D98((uVar13 & 0x1fffffff) << 3);
  piVar7[0x19] = iVar8;
  puVar2 = (undefined4 *)(in_r0 + (int)param_5 & 0xfffffff0);
  uVar16 = puVar2[1];
  uVar17 = puVar2[2];
  uVar18 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(piVar7 + 4) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar16;
  puVar3[2] = uVar17;
  puVar3[3] = uVar18;
  puVar2 = (undefined4 *)(in_r0 + (int)param_6 & 0xfffffff0);
  uVar16 = puVar2[1];
  uVar17 = puVar2[2];
  uVar18 = puVar2[3];
  puVar3 = (undefined4 *)(in_r0 + (int)param_7 & 0xfffffff0);
  uVar20 = *puVar3;
  uVar21 = puVar3[1];
  uVar22 = puVar3[2];
  uVar23 = puVar3[3];
  puVar3 = (undefined4 *)((uint)(piVar7 + 8) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar16;
  puVar3[2] = uVar17;
  puVar3[3] = uVar18;
  puVar2 = (undefined4 *)(in_r0 + (int)param_8 & 0xfffffff0);
  uVar16 = *puVar2;
  uVar17 = puVar2[1];
  uVar18 = puVar2[2];
  uVar19 = puVar2[3];
  iVar11 = (int)param_4 + -1;
  puVar2 = (undefined4 *)((uint)(piVar7 + 0xc) & 0xfffffff0);
  *puVar2 = uVar20;
  puVar2[1] = uVar21;
  puVar2[2] = uVar22;
  puVar2[3] = uVar23;
  iVar8 = lbl_821CA460;
  lVar6 = 0;
  puVar2 = (undefined4 *)((uint)(piVar7 + 0x10) & 0xfffffff0);
  *puVar2 = uVar16;
  puVar2[1] = uVar17;
  puVar2[2] = uVar18;
  puVar2[3] = uVar19;
  lVar15 = 0xf;
  piVar7[0x1d] = iVar8;
  piVar7[0x1e] = iVar8;
  *(undefined1 *)(piVar7 + 0x2c) = 1;
  psVar12 = (short *)(piVar7[0x18] + -2);
  do {
    iVar8 = 0;
    if (0 < iVar11) {
      do {
        sVar5 = (short)lVar6 + (short)iVar8;
        iVar8 = iVar8 + 1;
        sVar4 = sVar5 + (short)param_4;
        psVar12[1] = sVar5;
        psVar12[2] = sVar5 + 1;
        psVar12[3] = sVar4 + 1;
        psVar12 = psVar12 + 4;
        *psVar12 = sVar4;
      } while (iVar8 < iVar11);
    }
    lVar6 = lVar6 + param_4;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  fn_8256E270(param_1,(double)lbl_821922D0,param_2,param_3,piVar7,param_5,param_6,param_7,
                    param_8);
  fn_82536690(*param_3,apiStack_a0);
  return *apiStack_a0[0];
}

