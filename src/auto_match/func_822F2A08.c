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
#define NAN(x) ((x) != (x))
extern unsigned int fStack_48;
extern int fn_822ABA88();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CCF70;
extern unsigned int lbl_831CCF74;


double fn_822F2A08(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  int in_r0;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float afStack_50 [2];
  float fStack_48;
  float afStack_40 [4];
  float afStack_30 [4];
  float afStack_20 [8];
  
  iVar7 = 0x80;
  iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x80U & 0xfffffff0);
  uVar19 = *puVar1;
  uVar20 = puVar1[1];
  uVar21 = puVar1[2];
  uVar22 = puVar1[3];
  puVar1 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *puVar1 = uVar19;
  puVar1[1] = uVar20;
  puVar1[2] = uVar21;
  puVar1[3] = uVar22;
  dVar8 = (double)lbl_82192734;
  if (iVar6 == 0) {
    afStack_50[0] = (float)((double)afStack_50[0] * dVar8);
    fStack_48 = (float)((double)fStack_48 * dVar8);
    puVar1 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
    uVar19 = *puVar1;
    uVar20 = puVar1[1];
    uVar21 = puVar1[2];
    uVar22 = puVar1[3];
  }
  iVar6 = *(int *)(param_1 + 0xc);
  piVar5 = *(int **)(iVar6 + 0x1c);
  puVar1 = (undefined4 *)((int)afStack_20 + in_r0 & 0xfffffff0);
  *puVar1 = uVar19;
  puVar1[1] = uVar20;
  puVar1[2] = uVar21;
  puVar1[3] = uVar22;
  iVar4 = fn_822ABA88(*(undefined4 *)(piVar5[4] * 4 + *piVar5),*(uint *)(iVar6 + 0x28) ^ 1);
  puVar1 = (undefined4 *)(iVar4 + 0x290U & 0xfffffff0);
  uVar12 = *puVar1;
  uVar13 = puVar1[1];
  uVar14 = puVar1[2];
  uVar15 = puVar1[3];
  iVar4 = fn_822ABA88(*(undefined4 *)(piVar5[4] * 4 + *piVar5),*(uint *)(iVar6 + 0x28) ^ 1);
  iVar6 = *(int *)(iVar6 + 0x2c);
  puVar1 = (undefined4 *)(iVar4 + iVar7 & 0xfffffff0);
  uVar16 = puVar1[1];
  uVar17 = puVar1[2];
  uVar18 = puVar1[3];
  puVar2 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar16;
  puVar2[2] = uVar17;
  puVar2[3] = uVar18;
  if (iVar6 == 0) {
    afStack_50[0] = (float)((double)afStack_50[0] * dVar8);
  }
  puVar1 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
  uVar16 = puVar1[1];
  uVar17 = puVar1[2];
  uVar18 = puVar1[3];
  puVar2 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar16;
  puVar2[2] = uVar17;
  puVar2[3] = uVar18;
  puVar1 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1[2] = uVar14;
  puVar1[3] = uVar15;
  if (iVar6 == 0) {
    afStack_50[0] = (float)((double)afStack_50[0] * dVar8);
  }
  puVar1 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  puVar2 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar12;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  fVar3 = lbl_821CC160;
  puVar1 = (undefined4 *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *puVar1 = uVar19;
  puVar1[1] = uVar20;
  puVar1[2] = uVar21;
  puVar1[3] = uVar22;
  dVar11 = (double)lbl_821CA460;
  dVar10 = dVar11;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((afStack_50[0] < fVar3) << 2) |
                (uint)(NAN(afStack_50[0]) || NAN(fVar3)) << 2)) < 0.0) {
    dVar10 = dVar8;
  }
  dVar9 = dVar11;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((afStack_30[0] < fVar3) << 2) |
                (uint)(NAN(afStack_30[0]) || NAN(fVar3)) << 2)) < 0.0) {
    dVar9 = dVar8;
  }
  if ((dVar10 != dVar9) || (ABS(afStack_30[0]) <= lbl_831CCF74)) {
    fVar3 = lbl_831CCF70;
    if (afStack_40[0] < afStack_20[0]) {
      return (double)lbl_831CCF70;
    }
  }
  else {
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((afStack_40[0] < fVar3) << 2) |
                  (uint)(NAN(afStack_40[0]) || NAN(fVar3)) << 2)) < 0.0) {
      dVar11 = dVar8;
    }
    fVar3 = (float)(dVar11 * (double)lbl_831CCF70);
  }
  return -(double)fVar3;
}

