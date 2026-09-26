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
extern unsigned int lbl_82137484;


void fn_82D4B240(int param_1,uint param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int in_r0;
  int iVar12;
  undefined2 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  piVar5 = *(int **)(param_1 + 0x24);
  iVar6 = piVar5[1];
  iVar7 = *piVar5;
  uVar2 = *(ushort *)(piVar5[5] * param_2 + piVar5[3]);
  iVar12 = piVar5[5] * param_2 + piVar5[3];
  uVar3 = *(ushort *)(((piVar5[6] & param_2) + 1) * 2 + iVar12);
  uVar4 = *(ushort *)(((piVar5[6] & param_2 ^ 1) + 1) * 2 + iVar12);
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined2 *)((piVar5[0xd] + param_2) * 2 + *(int *)(param_1 + 0x30));
  }
  if (param_3 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x3c);
    param_3[4] = *(undefined4 *)(param_1 + 0x40);
    param_3[2] = 0;
    *param_3 = &lbl_82137484;
    *(undefined2 *)((int)param_3 + 6) = 1;
    param_3[3] = 3;
    *(undefined2 *)(param_3 + 5) = uVar13;
    *(undefined1 *)((int)param_3 + 0x16) = uVar1;
    puVar8 = (undefined4 *)((int)param_3 + in_r0 + 0x50 & 0xfffffff0);
    *puVar8 = in_register_000100d0;
    puVar8[1] = in_register_000100d4;
    puVar8[2] = in_register_000100d8;
    puVar8[3] = in_vr13;
    *(undefined1 *)((int)param_3 + 0x17) = 0;
  }
  param_1 = param_1 + 0x10;
  pfVar9 = (float *)(in_r0 + (uint)uVar2 * iVar6 + iVar7 & 0xfffffff0);
  fVar14 = pfVar9[1];
  fVar15 = pfVar9[2];
  fVar16 = pfVar9[3];
  pfVar10 = (float *)(in_r0 + param_1 & 0xfffffff0);
  fVar17 = pfVar10[1];
  fVar18 = pfVar10[2];
  fVar19 = pfVar10[3];
  pfVar11 = (float *)((uint)(param_3 + 8) & 0xfffffff0);
  *pfVar11 = *pfVar9 * *pfVar10;
  pfVar11[1] = fVar14 * fVar17;
  pfVar11[2] = fVar15 * fVar18;
  pfVar11[3] = fVar16 * fVar19;
  pfVar9 = (float *)(in_r0 + param_1 & 0xfffffff0);
  fVar17 = pfVar9[1];
  fVar18 = pfVar9[2];
  fVar19 = pfVar9[3];
  pfVar10 = (float *)(in_r0 + (uint)uVar3 * iVar6 + iVar7 & 0xfffffff0);
  fVar14 = pfVar10[1];
  fVar15 = pfVar10[2];
  fVar16 = pfVar10[3];
  pfVar11 = (float *)((uint)(param_3 + 0xc) & 0xfffffff0);
  *pfVar11 = *pfVar10 * *pfVar9;
  pfVar11[1] = fVar14 * fVar17;
  pfVar11[2] = fVar15 * fVar18;
  pfVar11[3] = fVar16 * fVar19;
  pfVar9 = (float *)(in_r0 + param_1 & 0xfffffff0);
  fVar17 = pfVar9[1];
  fVar18 = pfVar9[2];
  fVar19 = pfVar9[3];
  pfVar10 = (float *)(in_r0 + (uint)uVar4 * iVar6 + iVar7 & 0xfffffff0);
  fVar14 = pfVar10[1];
  fVar15 = pfVar10[2];
  fVar16 = pfVar10[3];
  pfVar11 = (float *)((uint)(param_3 + 0x10) & 0xfffffff0);
  *pfVar11 = *pfVar10 * *pfVar9;
  pfVar11[1] = fVar14 * fVar17;
  pfVar11[2] = fVar15 * fVar18;
  pfVar11[3] = fVar16 * fVar19;
  return;
}

