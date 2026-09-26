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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern unsigned int *auStack_170;
extern unsigned int *auStack_180;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern int fn_8262C328();
extern int fn_8262C4F8();
extern int fn_82CE5040();
extern int fn_82D41968();
extern int fn_82D80A40();
extern int fn_82D93168();
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;


void fn_8262C598(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int in_r0;
  int iVar12;
  ulonglong uVar10;
  undefined1 uVar14;
  int iVar13;
  longlong lVar11;
  undefined4 uVar15;
  longlong lVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [176];
  
  piVar1 = *(int **)(param_2 + 0x24);
  iVar13 = *(int *)(*piVar1 + 0xc);
  piVar8 = (int *)piVar1[3];
  while (piVar2 = piVar8, piVar2 != (int *)0x0) {
    piVar1 = piVar2;
    piVar8 = (int *)piVar2[3];
  }
  if (*(char *)(piVar1 + 6) == '\x01') {
    iVar17 = (int)*(char *)(piVar1 + 4) + (int)piVar1;
  }
  else {
    iVar17 = 0;
  }
  iVar9 = *(int *)(*(int *)(param_2 + 0x24) + 0xc);
  iVar12 = *(int *)(param_2 + 0x24);
  while (iVar3 = iVar9, iVar3 != 0) {
    iVar12 = iVar3;
    iVar9 = *(int *)(iVar3 + 0xc);
  }
  if (*(char *)(iVar12 + 0x18) == '\x01') {
    iVar12 = *(char *)(iVar12 + 0x10) + iVar12;
  }
  else {
    iVar12 = 0;
  }
  uVar15 = 0;
  if (iVar12 != 0) {
    uVar15 = *(undefined4 *)(iVar12 + 0xc);
  }
  if (iVar17 == 0) {
    return;
  }
  iVar12 = fn_8262C328(*(undefined4 *)(param_1 + 0x30),uVar15,iVar17);
  if (iVar12 == 0) {
    return;
  }
  if (*(float *)(param_1 + 4) < *(float *)(param_2 + 0x1c)) {
    return;
  }
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x30);
  puVar6 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar22 = puVar6[1];
  uVar23 = puVar6[2];
  uVar24 = puVar6[3];
  lVar16 = uVar10 + 0xa0;
  puVar7 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar18 = *puVar7;
  uVar19 = puVar7[1];
  uVar20 = puVar7[2];
  uVar21 = puVar7[3];
  if (iVar13 < 1) goto LAB_8262c718;
  if (iVar13 < 3) {
LAB_8262c6c8:
    uStack_190 = 5;
    puVar7 = (undefined4 *)((uint)(auStack_180 + in_r0) & 0xfffffff0);
    *puVar7 = *puVar6;
    puVar7[1] = uVar22;
    puVar7[2] = uVar23;
    puVar7[3] = uVar24;
    puVar6 = (undefined4 *)((uint)(auStack_170 + in_r0) & 0xfffffff0);
    *puVar6 = uVar18;
    puVar6[1] = uVar19;
    puVar6[2] = uVar20;
    puVar6[3] = uVar21;
    uVar18 = 4;
    uVar14 = 0;
  }
  else {
    if (iVar13 != 3) {
      if ((iVar13 < 4) || ((6 < iVar13 && ((iVar13 < 0xb || (0xc < iVar13)))))) goto LAB_8262c718;
      goto LAB_8262c6c8;
    }
    piVar1 = (int *)**(int **)(*(int *)(param_2 + 0x24) + 0xc);
    iVar13 = piVar1[3];
    if (iVar13 == 10) {
      uVar10 = (**(code **)(*piVar1 + 0x10))();
      lVar11 = uVar10 - 0x10;
      if ((uVar10 & 0xffffffff) == 0) {
        lVar11 = 0;
      }
      iVar13 = fn_82D41968(lVar11,*(undefined4 *)(*(int *)(param_2 + 0x24) + 4));
      uVar4 = *(uint *)(iVar13 + 8);
      if ((((*(uint *)(param_1 + 0x10) & uVar4) == 0) ||
          ((uVar5 = *(uint *)(param_1 + 0x14), (uVar5 & 0xfef1bfff) != 0 && ((uVar4 & uVar5) != 0)))
          ) || (((uVar4 & 0x10e4000) != 0 && ((uVar4 & ~uVar5 & 0x10e4000) == 0))))
      goto LAB_8262c718;
      uVar10 = (ulonglong)**(uint **)(param_2 + 0x24);
      fn_82D80A40(*(undefined4 *)(iVar17 + 8));
      fn_82D93168(iVar17 + 0xe0);
      fn_82CE5040(auStack_100,auStack_b0,uVar10 + 0x20);
      fn_82CE5040(auStack_150,auStack_b0,uVar10 + 0x30);
      fn_82CE5040(auStack_140,auStack_b0,uVar10 + 0x40);
      puVar6 = (undefined4 *)((uint)(auStack_100 + in_r0) & 0xfffffff0);
      uVar18 = puVar6[1];
      uVar19 = puVar6[2];
      uVar20 = puVar6[3];
      puVar7 = (undefined4 *)((uint)(auStack_150 + in_r0) & 0xfffffff0);
      uVar22 = *puVar7;
      uVar23 = puVar7[1];
      uVar24 = puVar7[2];
      uVar25 = puVar7[3];
      puVar7 = (undefined4 *)((uint)(auStack_180 + in_r0) & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar18;
      puVar7[2] = uVar19;
      puVar7[3] = uVar20;
      puVar6 = (undefined4 *)((uint)(auStack_140 + in_r0) & 0xfffffff0);
      uVar18 = *puVar6;
      uVar19 = puVar6[1];
      uVar20 = puVar6[2];
      uVar21 = puVar6[3];
      puVar6 = (undefined4 *)((uint)(auStack_170 + in_r0) & 0xfffffff0);
      *puVar6 = uVar22;
      puVar6[1] = uVar23;
      puVar6[2] = uVar24;
      puVar6[3] = uVar25;
    }
    else {
      if (iVar13 != 0xe) goto LAB_8262c718;
      iVar13 = fn_82D41968(**(undefined4 **)(*(int *)(param_2 + 0x24) + 0xc),
                            *(undefined4 *)(*(int *)(param_2 + 0x24) + 4));
      uVar4 = *(uint *)(iVar13 + 8);
      if ((((*(uint *)(param_1 + 0x10) & uVar4) == 0) ||
          ((uVar5 = *(uint *)(param_1 + 0x14), (uVar5 & 0xfef1bfff) != 0 && ((uVar5 & uVar4) != 0)))
          ) || (((uVar4 & 0x10e4000) != 0 && ((uVar4 & ~uVar5 & 0x10e4000) == 0))))
      goto LAB_8262c718;
      uVar10 = (ulonglong)**(uint **)(param_2 + 0x24);
      fn_82D80A40(*(undefined4 *)(iVar17 + 8));
      fn_82D93168(iVar17 + 0xe0);
      fn_82CE5040(auStack_110,auStack_f0,uVar10 + 0x20);
      fn_82CE5040(auStack_120,auStack_f0,uVar10 + 0x30);
      fn_82CE5040(auStack_130,auStack_f0,uVar10 + 0x40);
      puVar6 = (undefined4 *)((uint)(auStack_110 + in_r0) & 0xfffffff0);
      uVar18 = puVar6[1];
      uVar19 = puVar6[2];
      uVar20 = puVar6[3];
      puVar7 = (undefined4 *)((uint)(auStack_120 + in_r0) & 0xfffffff0);
      uVar22 = *puVar7;
      uVar23 = puVar7[1];
      uVar24 = puVar7[2];
      uVar25 = puVar7[3];
      puVar7 = (undefined4 *)((uint)(auStack_180 + in_r0) & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar18;
      puVar7[2] = uVar19;
      puVar7[3] = uVar20;
      puVar6 = (undefined4 *)((uint)(auStack_130 + in_r0) & 0xfffffff0);
      uVar18 = *puVar6;
      uVar19 = puVar6[1];
      uVar20 = puVar6[2];
      uVar21 = puVar6[3];
      puVar6 = (undefined4 *)((uint)(auStack_170 + in_r0) & 0xfffffff0);
      *puVar6 = uVar22;
      puVar6[1] = uVar23;
      puVar6[2] = uVar24;
      puVar6[3] = uVar25;
    }
    uStack_190 = 0;
    puVar6 = (undefined4 *)((uint)(auStack_160 + in_r0) & 0xfffffff0);
    *puVar6 = uVar18;
    puVar6[1] = uVar19;
    puVar6[2] = uVar20;
    puVar6[3] = uVar21;
    uVar10 = (ulonglong)*(uint *)(param_1 + 0x30);
    uVar18 = *(undefined4 *)(iVar13 + 8);
    uVar14 = *(undefined1 *)(iVar13 + 4);
  }
  uStack_188 = 1;
  uStack_18c = 0x40;
  uVar14 = fn_8262C4F8(uVar10,lVar16,uVar15,iVar17,uVar14,uVar18,&uStack_190);
  *(undefined1 *)(param_1 + 0x24) = uVar14;
LAB_8262c718:
  if (*(char *)(param_1 + 0x24) != '\0') {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x1c);
  }
  return;
}

