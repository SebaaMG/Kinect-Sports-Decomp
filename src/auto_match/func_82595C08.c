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
extern int fn_8251DD18();
extern int fn_8251DEE8();
extern int fn_8251DFA0();
extern int fn_8251E0B8();
extern int fn_825269D0();
extern int fn_8253D030();
extern int fn_8253D108();
extern int fn_8253D6D0();
extern int fn_82552E78();
extern int fn_825662E0();
extern int fn_8257C978();
extern int fn_8257CC40();
extern int fn_8257CD70();
extern int fn_8257CED8();
extern int fn_8257DFF0();
extern int fn_82599958();
extern int fn_825F81B8();
extern int fn_825F8F80();
extern int fn_82D80A30();
extern unsigned int lbl_821CC160;
extern int (*lbl_83265A0C)();
extern int (*lbl_83265A10)();
extern unsigned int *lbl_8327F870;
extern float lbl_8327F894;
extern unsigned int lbl_8329615C;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83296190;


void fn_82595C08(ulonglong param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_r0;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_80 [1];
  
  iVar4 = (int)param_1;
  lVar13 = param_1 + 0x78;
  lVar14 = param_1 + 0x30c;
  dVar18 = (double)lbl_821CC160;
  dVar17 = dVar18;
  if ((*(int *)(iVar4 + 0x10) == 1) && ((double)*(float *)(iVar4 + 0x838) <= dVar18)) {
    dVar17 = (double)(*(float *)(iVar4 + 0x820) * lbl_8327F894);
  }
  lVar12 = param_1 + 0x1f0;
  if (*(int *)(iVar4 + 0x234) != 0) {
    fn_8253D108(lVar12,param_1);
  }
  if ((*(int *)(iVar4 + 0x10) == 1) && (lbl_83265A0C != (code *)0x0)) {
    (*lbl_83265A0C)(param_1);
  }
  if (*(int *)(iVar4 + 0x10) == 1) {
    fn_8253D6D0(lVar12,param_1);
    if ((*(int *)(iVar4 + 0x1e4) != 0) &&
       (iVar10 = *(int *)(*(int *)(iVar4 + 0x1b0) + 0x1f8), iVar10 != 0)) {
      puVar5 = (undefined4 *)(iVar4 + 0x1d0U & 0xfffffff0);
      uVar19 = puVar5[1];
      uVar20 = puVar5[2];
      uVar21 = puVar5[3];
      puVar6 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar19;
      puVar6[2] = uVar20;
      puVar6[3] = uVar21;
      fn_82D80A30(iVar10,auStack_80);
      *(undefined4 *)(iVar4 + 0x1e4) = 0;
    }
    piVar2 = *(int **)(iVar4 + 0x3e4);
    iVar10 = *(int *)lVar14;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x18))(piVar2,iVar10);
    }
    fn_8251DFA0(*(undefined4 *)(iVar4 + 0x3e0),iVar10);
    fn_8257C978(lVar13);
    fn_8257DFF0(*(undefined4 *)(iVar4 + 0xb8));
    if (lbl_83265A10 != (code *)0x0) {
      (*lbl_83265A10)(param_1);
    }
  }
  fn_8257CD70(lVar13,param_1);
  fn_8251DD18(lVar14);
  fn_8257CED8(lVar13);
  fn_8251DEE8(lVar14);
  iVar10 = *(int *)(iVar4 + 0xac);
  dVar16 = dVar18;
  if ((double)*(float *)(iVar10 + 0x838) <= dVar18) {
    dVar16 = (double)(*(float *)(iVar10 + 0x820) * lbl_8327F894);
  }
  while (piVar2 = *(int **)(iVar4 + 0x94), piVar2 != (int *)0x0) {
    if (*piVar2 != 0) {
      *(int *)(*piVar2 + 4) = piVar2[1];
    }
    if ((int *)piVar2[1] != (int *)0x0) {
      *(int *)piVar2[1] = *piVar2;
    }
    *piVar2 = 0;
    piVar2[1] = 0;
    (**(code **)(piVar2[-0x10] + 0x14))(dVar16,piVar2 + -0x10,iVar10);
  }
  piVar2 = *(int **)(iVar4 + 0x3a0);
  if (piVar2 != *(int **)(iVar4 + 0x39c)) {
    iVar10 = *(int *)lVar14;
    for (piVar15 = *(int **)(iVar4 + 0x39c); piVar15 < piVar2; piVar15 = piVar15 + 1) {
      piVar3 = (int *)*piVar15;
      if (piVar3[0xe] == 0) {
        dVar16 = dVar18;
        if ((double)*(float *)(iVar10 + 0x838) <= dVar18) {
          dVar16 = (double)(*(float *)(iVar10 + 0x820) * lbl_8327F894);
        }
        piVar3[0x2cf] = (int)(float)((double)(float)piVar3[0x2d0] * dVar16);
        (**(code **)(*piVar3 + 0x14))(piVar3,iVar10);
      }
    }
    *(undefined2 *)(iVar4 + 0x3ac) = 0;
    *(undefined4 *)(iVar4 + 0x3a0) = *(undefined4 *)(iVar4 + 0x39c);
  }
  if (*(int *)(iVar4 + 0x10) == 1) {
    fn_82599958(param_1 + 0x7fc);
  }
  fn_8257CC40(lVar13,param_1);
  fn_8251E0B8(lVar14,0);
  if (lbl_8329618C == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulonglong)*(uint *)(lbl_8329618C + 4);
  }
  if ((uVar8 != 0) && (uVar8 != 0xfffffffffffff7b4)) {
    (**(code **)*lbl_8327F870)();
    (**(code **)(*lbl_8327F870 + 8))();
  }
  fn_8253D030(dVar17,lVar12,param_1);
  if ((*(int *)(iVar4 + 0x10) == 1) || (*(int *)(iVar4 + 0x10) == 5)) {
    fn_825269D0(0x17,param_1);
  }
  for (iVar10 = *(int *)(iVar4 + 0x854); iVar10 != 0; iVar10 = *(int *)(iVar10 + 4)) {
    fn_82552E78(iVar10);
  }
  fn_825F81B8(param_1);
  iVar10 = *(int *)(iVar4 + 0x1a8);
  iVar9 = *(int *)(iVar10 + 0x3f0) * 0x1f0 + iVar10;
  if ((double)*(float *)(iVar9 + 0x1d0) <= dVar18) goto LAB_82595ffc;
  if (*(int *)(iVar9 + 0x1dc) == 0) {
    uVar7 = (uint)(*(int *)(iVar10 + 0x404) != 0);
LAB_82595fe0:
    *(uint *)(iVar9 + 0x1dc) = uVar7;
  }
  else if (((*(int *)(iVar9 + 0x1dc) == 1) && (*(int *)(iVar10 + 0x404) == 0)) &&
          (dVar18 < (double)*(float *)(iVar9 + 0x1d8))) {
    *(float *)(iVar9 + 0x1d0) = *(float *)(iVar9 + 0x1d8);
    uVar7 = 2;
    *(float *)(iVar9 + 0x1d4) = (float)dVar18;
    goto LAB_82595fe0;
  }
  if (*(int *)(iVar9 + 0x1dc) != 0) {
    *(float *)(iVar9 + 0x1d4) = (float)((double)*(float *)(iVar9 + 0x1d4) + dVar17);
  }
LAB_82595ffc:
  if (*(int *)(iVar4 + 0x10) == 1) {
    dVar17 = dVar18;
    if ((double)*(float *)(iVar4 + 0x838) <= dVar18) {
      dVar17 = (double)(*(float *)(iVar4 + 0x820) * lbl_8327F894);
    }
    iVar10 = *(int *)(iVar4 + 0x834) + 1;
    *(float *)(iVar4 + 0x824) = (float)((double)*(float *)(iVar4 + 0x824) + dVar17);
    *(float *)(iVar4 + 0x828) = (float)((double)*(float *)(iVar4 + 0x828) + dVar17);
    *(float *)(iVar4 + 0x82c) = (float)((double)*(float *)(iVar4 + 0x82c) + dVar17);
    *(int *)(iVar4 + 0x834) = iVar10;
    *(int *)(iVar4 + 0x830) = iVar10;
  }
  puVar11 = &lbl_8329615C;
  while ((((ulonglong)*puVar11 == 0 || (lbl_83296190 != puVar11 + -1)) ||
         ((ulonglong)*puVar11 != (param_1 & 0xffffffff)))) {
    puVar11 = puVar11 + -0xc;
    if ((int)puVar11 < -0x7cd69f34) {
      return;
    }
  }
  lVar13 = param_1 + 0x450;
  fn_825F8F80((double)*(float *)(iVar4 + 0x82c),param_1 + 0x458);
  fn_825F8F80(lVar13 + 0x28);
  dVar17 = (double)fn_825F8F80(lVar13 + 0x48);
  if (dVar18 < (double)*(float *)(iVar4 + 0x4b8)) {
    fVar1 = (float)((double)*(float *)(iVar4 + 0x4b8) - dVar17);
    puVar5 = (undefined4 *)lVar13;
    puVar5[0x1a] = fVar1;
    if ((double)fVar1 <= dVar18) {
      puVar5[0x1a] = (float)dVar18;
      *puVar5 = 0;
    }
  }
  fn_825662E0(param_1,param_1 + 0x4c0);
  return;
}

