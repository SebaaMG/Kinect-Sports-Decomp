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
extern int fn_8255D288();
extern int fn_825A1660();
extern unsigned int lbl_821CA460;


undefined4 * fn_8252AB50(int param_1,int param_2,undefined8 param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  int in_r0;
  undefined4 *puVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int *piVar10;
  longlong lVar11;
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
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  
  puVar5 = (undefined4 *)fn_825A1660(param_3);
  iVar8 = puVar5[1];
  *puVar5 = *(undefined4 *)(param_1 + 0x8c0);
  puVar2 = (undefined4 *)(in_r0 + param_1 + 0xf0 & 0xfffffff0);
  uVar12 = puVar2[1];
  uVar13 = puVar2[2];
  uVar14 = puVar2[3];
  puVar3 = (undefined4 *)(param_1 + 0x100U & 0xfffffff0);
  uVar23 = *puVar3;
  uVar24 = puVar3[1];
  uVar25 = puVar3[2];
  uVar26 = puVar3[3];
  puVar3 = (undefined4 *)(param_1 + 0x110U & 0xfffffff0);
  uVar19 = *puVar3;
  uVar20 = puVar3[1];
  uVar21 = puVar3[2];
  uVar22 = puVar3[3];
  puVar3 = (undefined4 *)(param_1 + 0x120U & 0xfffffff0);
  uVar15 = *puVar3;
  uVar16 = puVar3[1];
  uVar17 = puVar3[2];
  uVar18 = puVar3[3];
  puVar3 = (undefined4 *)(in_r0 + iVar8 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar12;
  puVar3[2] = uVar13;
  puVar3[3] = uVar14;
  puVar2 = (undefined4 *)(iVar8 + 0x10U & 0xfffffff0);
  *puVar2 = uVar23;
  puVar2[1] = uVar24;
  puVar2[2] = uVar25;
  puVar2[3] = uVar26;
  puVar2 = (undefined4 *)(iVar8 + 0x20U & 0xfffffff0);
  *puVar2 = uVar19;
  puVar2[1] = uVar20;
  puVar2[2] = uVar21;
  puVar2[3] = uVar22;
  puVar2 = (undefined4 *)(iVar8 + 0x30U & 0xfffffff0);
  *puVar2 = uVar15;
  puVar2[1] = uVar16;
  puVar2[2] = uVar17;
  puVar2[3] = uVar18;
  fn_8255D288(param_1,puVar5 + 4,puVar5 + 8);
  piVar10 = (int *)(param_1 + 0x1d0);
  lVar11 = 2;
  iVar8 = 0x48;
  pfVar9 = (float *)(puVar5 + 0xe);
  puVar5[0x20] = *(undefined4 *)(param_1 + 0x220);
  puVar5[0x21] = *(undefined4 *)(param_1 + 0x224);
  fVar4 = lbl_821CA460;
  do {
    uVar6 = *(uint *)(param_1 + 0x198 + iVar8);
    if ((*piVar10 != 0) || (*(int *)(iVar8 + (int)piVar10) == 0)) {
      uVar6 = uVar6 | 0x400;
    }
    if (param_1 == *(int *)(param_2 + -0x48 + iVar8)) {
      uVar6 = uVar6 | 0x8000;
    }
    if ((*(int *)(param_1 + 0x1d4) != 0) &&
       (*(int *)(iVar8 + -0x7cd7f4b0) == *(int *)(param_1 + 0x1d4))) {
      uVar6 = uVar6 | 0x100000;
    }
    pfVar7 = (float *)((-0x18 - (int)puVar5) + (int)pfVar9 + (int)piVar10);
    fVar1 = *(float *)((int)piVar10 + iVar8 + -8);
    pfVar9[-2] = (*pfVar7 - fVar4) * fVar1 + fVar4;
    pfVar9[-1] = (pfVar7[1] - fVar4) * fVar1 + fVar4;
    *pfVar9 = (pfVar7[2] - fVar4) * fVar1 + fVar4;
    pfVar9[1] = (pfVar7[3] - fVar4) * fVar1 + fVar4;
    *(uint *)((int)puVar5 + iVar8 + 0x30) = uVar6;
    pfVar9 = pfVar9 + 4;
    iVar8 = iVar8 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  return puVar5;
}

