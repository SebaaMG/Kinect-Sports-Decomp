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
extern unsigned int *auStack_8c;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_e8;
extern unsigned int *auStack_f0;
extern unsigned int *auStack_f8;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_822EFBF0();
extern int fn_82365BD8();
extern int fn_823990F0();
extern int fn_8239B5B8();
extern int fn_8239D6D8();
extern int fn_8239D8B0();
extern int fn_823A7088();
extern int fn_823B0CE8();
extern int fn_824C97F0();
extern int fn_824CCFC8();
extern int fn_82522588();
extern int fn_82570840();
extern int fn_8288B760();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int iStack_88;
extern unsigned int iStack_e4;
extern unsigned int iStack_ec;
extern unsigned int iStack_f4;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_100;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_b0;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_822F4258(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,undefined8 param_8,longlong param_9)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 uVar4;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double extraout_f1;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  int in_stack_0000006c;
  undefined8 uStack_100;
  undefined1 auStack_f8 [4];
  int iStack_f4;
  undefined1 auStack_f0 [4];
  int iStack_ec;
  undefined1 auStack_e8 [4];
  int iStack_e4;
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [4];
  int iStack_88;
  
  iVar5 = fn_82F6A540();
  iVar13 = *(int *)(*(int *)(iVar5 + 0xc) + 0x24);
  iVar12 = (int)param_9;
  *(undefined4 *)(iVar12 + 0xb8) = 1;
  *(undefined4 *)(iVar12 + 0x150) = 1;
  if (*(int *)(*(int *)(iVar5 + 0x10) + 0x178) == 2) {
    *(float *)(iVar12 + 0x13c) = *(float *)(iVar12 + 0x13c) - lbl_82193AF0;
  }
  uStack_100 = (longlong)extraout_f1;
  uVar11 = (((U64)(uStack_100) >> 32) & 0xFFFFFFFF);
  fn_823B0CE8(param_2,param_3,param_4,param_5,param_6,param_7,auStack_e0,param_9,(((U64)(uStack_100) >> 32) & 0xFFFFFFFF))
  ;
  puVar8 = (undefined4 *)((uint)(auStack_e0 + in_r0) & 0xfffffff0);
  uVar16 = puVar8[1];
  uVar17 = puVar8[2];
  uVar18 = puVar8[3];
  puVar3 = (undefined4 *)(*(int *)(iVar5 + 0xc) + 0x230U & 0xfffffff0);
  *puVar3 = *puVar8;
  puVar3[1] = uVar16;
  puVar3[2] = uVar17;
  puVar3[3] = uVar18;
  iVar6 = lbl_832975B0;
  bVar1 = lbl_832975B0 == 0;
  *(float *)(*(int *)(iVar5 + 0xc) + 0x224) = (float)param_4;
  *(float *)(*(int *)(iVar5 + 0xc) + 0x220) = (float)param_2;
  *(float *)(*(int *)(iVar5 + 0xc) + 0x228) = (float)param_3;
  if (bVar1) {
    iVar6 = fn_82250A18();
  }
  if (*(char *)(iVar6 + 4) != '\0') {
    iVar6 = *(int *)(*(int *)(iVar5 + 0x10) + 0x84);
    if (*(int *)(*(int *)(iVar5 + 0xc) + 0x168) == 0) {
      uVar7 = *(uint *)(*(int *)(iVar5 + 0xc) + 0x16c);
    }
    else {
      uVar7 = fn_8288B760();
      uVar7 = uVar7 & 0xff;
    }
    if ((uVar7 != 0) && (iVar6 != 0)) {
      uStack_d0 = *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x28);
      puVar8 = (undefined4 *)(iVar12 + 0x10U & 0xfffffff0);
      uVar16 = puVar8[1];
      uVar17 = puVar8[2];
      uVar18 = puVar8[3];
      uStack_cc = *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x2c);
      puVar3 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
      *puVar3 = *puVar8;
      puVar3[1] = uVar16;
      puVar3[2] = uVar17;
      puVar3[3] = uVar18;
      fStack_ac = (float)param_2;
      fStack_a8 = (float)param_3;
      uStack_c8 = 2;
      fStack_a4 = (float)param_4;
      uStack_b0 = uVar11;
      fStack_a0 = (float)param_5;
      uStack_94 = in_stack_0000005c;
      fStack_9c = (float)param_6;
      uStack_90 = in_stack_00000064;
      fStack_98 = (float)param_7;
      fn_82365BD8(auStack_8c,param_9 + 0x2b4);
      puVar8 = (undefined4 *)fn_822EFBF0(&uStack_100,iVar6);
      fn_823A7088(*puVar8,&uStack_d0);
      if ((((U64)(uStack_100) >> 32) & 0xFFFFFFFF) != 0) {
        fn_822315A0();
      }
      if (iStack_88 != 0) {
        fn_822315A0();
      }
    }
  }
  iVar6 = *(int *)(iVar5 + 0x10);
  for (uVar15 = (ulonglong)*(uint *)(iVar6 + 0x30);
      (uVar15 & 0xffffffff) != (ulonglong)*(uint *)(iVar6 + 0x34); uVar15 = uVar15 + 8) {
    piVar9 = (int *)fn_82522588(auStack_f8,uVar15);
    *(undefined4 *)(*piVar9 + 0x294) = 0;
    if (iStack_f4 != 0) {
      fn_822315A0();
    }
  }
  if (*(int *)(*(int *)(iVar5 + 0x10) + 0x178) == 0) {
    uVar4 = (**(code **)(**(int **)(*(int *)(iVar5 + 0x10) + 0x2e0) + 0x3c))();
    fn_8239D8B0(*(undefined4 *)(iVar5 + 0x10),uVar4);
  }
  if (*(int *)(iVar12 + 0x184) != 0) {
    iVar6 = *(int *)(iVar5 + 0x10);
    iVar2 = *(int *)(iVar5 + 0xc);
    for (piVar9 = *(int **)(iVar6 + 0x30); piVar9 != *(int **)(iVar6 + 0x34); piVar9 = piVar9 + 2) {
      if (*(int *)(iVar2 + 0x24) != *(int *)(*piVar9 + 0x10)) {
        piVar10 = (int *)fn_82522588(auStack_f0,piVar9);
        *(undefined4 *)(*piVar10 + 0x294) = 1;
        if (iStack_ec != 0) {
          fn_822315A0();
        }
      }
    }
    fn_8239B5B8((ulonglong)*(uint *)(iVar5 + 0x10),(ulonglong)*(uint *)(iVar5 + 0x10) + 0x404)
    ;
  }
  if (*(int *)(iVar12 + 0x188) != 0) {
    iVar12 = *(int *)(iVar5 + 0x10);
    iVar6 = *(int *)(iVar5 + 0xc);
    for (piVar9 = *(int **)(iVar12 + 0x30); piVar9 != *(int **)(iVar12 + 0x34); piVar9 = piVar9 + 2)
    {
      if (*(int *)(iVar6 + 0x24) == *(int *)(*piVar9 + 0x10)) {
        piVar10 = (int *)fn_82522588(auStack_e8,piVar9);
        iVar2 = *piVar10;
        if (*(int *)(iVar2 + 0x2a4) != 0) {
          uVar11 = fn_82570840(*(undefined4 *)(iVar2 + 0x29c),iVar2 + 0x2a4,0,iVar2 + 0x20);
          *(undefined4 *)(iVar2 + 700) = uVar11;
        }
        if (iStack_e4 != 0) {
          fn_822315A0();
        }
      }
    }
    fn_8239B5B8((ulonglong)*(uint *)(iVar5 + 0x10),(ulonglong)*(uint *)(iVar5 + 0x10) + 0x66c)
    ;
    puVar8 = *(undefined4 **)(*(int *)(iVar5 + 0x10) + 0xa8);
    *(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x868) = lbl_821CC160;
    piVar9 = (int *)puVar8[1];
    for (piVar10 = (int *)*puVar8; piVar10 != piVar9; piVar10 = piVar10 + 2) {
      fn_824C97F0(*(undefined4 *)(*piVar10 + 0x28),0xffffffff821b45a8);
    }
  }
  uVar15 = 0;
  piVar9 = *(int **)(((uint)LZCOUNT(*(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x2c)) >> 3 & 4) +
                    **(int **)(*(int *)(iVar5 + 0x10) + 8));
  uVar14 = ZEXT48(piVar9);
  if (*(int *)(*(int *)(piVar9[4] * 4 + *piVar9) + 8) != 0) {
    do {
      iVar12 = fn_822ABA88();
      uVar15 = uVar15 + 1;
      puVar8 = (undefined4 *)(iVar12 + 0x80U & 0xfffffff0);
      uVar11 = puVar8[1];
      uVar16 = puVar8[2];
      uVar17 = puVar8[3];
      puVar3 = (undefined4 *)(iVar12 + 0x250U & 0xfffffff0);
      *puVar3 = *puVar8;
      puVar3[1] = uVar11;
      puVar3[2] = uVar16;
      puVar3[3] = uVar17;
    } while ((uVar15 & 0xffffffff) <
             (ulonglong)*(uint *)(*(int *)(((int *)uVar14)[4] * 4 + *(int *)uVar14) + 8));
  }
  fn_823990F0(param_9,*(undefined4 *)(iVar5 + 0xc));
  if (iVar13 != 0) {
    if (in_stack_0000006c == 0) {
      iVar12 = *(int *)(iVar13 + 0x104);
    }
    else {
      iVar12 = *(int *)(iVar13 + 0x100);
    }
    if ((iVar12 == 0) || (iVar6 = fn_824CCFC8(iVar13), iVar6 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(iVar12 + 0x40);
    }
    *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x244) = uVar11;
    if (in_stack_0000006c == 0) {
      iVar12 = *(int *)(iVar13 + 0x104);
    }
    else {
      iVar12 = *(int *)(iVar13 + 0x100);
    }
    if ((iVar12 == 0) || (iVar13 = fn_824CCFC8(iVar13), iVar13 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(iVar12 + 0x44);
    }
    *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x248) = uVar11;
  }
  fn_8239D6D8(*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x2c),
                    *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x28),param_9);
  fn_82F6A58C();
  return;
}

