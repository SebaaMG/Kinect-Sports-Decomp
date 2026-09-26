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
extern unsigned int fStack_18;
extern unsigned int fStack_28;
extern unsigned int fStack_8;
extern unsigned int lbl_82195530;
extern unsigned int lbl_821CC160;


double fn_82334BD0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  float *pfVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
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
  float afStack_40 [4];
  float afStack_30 [2];
  float fStack_28;
  float afStack_20 [2];
  float fStack_18;
  float afStack_10 [2];
  float fStack_8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  puVar2 = (undefined4 *)(iVar1 + 0x50U & 0xfffffff0);
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  puVar2 = (undefined4 *)(param_2 + 0x1f0U & 0xfffffff0);
  uVar17 = *puVar2;
  uVar18 = puVar2[1];
  uVar19 = puVar2[2];
  uVar20 = puVar2[3];
  puVar2 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *puVar2 = uVar17;
  puVar2[1] = uVar18;
  puVar2[2] = uVar19;
  puVar2[3] = uVar20;
  puVar2 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  if (afStack_40[0] < afStack_30[0]) {
    puVar2 = (undefined4 *)(param_2 + 0x200U & 0xfffffff0);
    uVar21 = *puVar2;
    uVar22 = puVar2[1];
    uVar23 = puVar2[2];
    uVar24 = puVar2[3];
    puVar2 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
    *puVar2 = uVar9;
    puVar2[1] = uVar10;
    puVar2[2] = uVar11;
    puVar2[3] = uVar12;
    puVar2 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
    *puVar2 = uVar21;
    puVar2[1] = uVar22;
    puVar2[2] = uVar23;
    puVar2[3] = uVar24;
    if (afStack_40[0] < afStack_30[0]) {
      puVar2 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      puVar2[2] = uVar11;
      puVar2[3] = uVar12;
      puVar2 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
      *puVar2 = uVar17;
      puVar2[1] = uVar18;
      puVar2[2] = uVar19;
      puVar2[3] = uVar20;
      if (afStack_40[2] < fStack_28) {
        puVar2 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        puVar2 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
        *puVar2 = uVar21;
        puVar2[1] = uVar22;
        puVar2[2] = uVar23;
        puVar2[3] = uVar24;
        if (fStack_28 < afStack_40[2]) {
          puVar2 = (undefined4 *)(iVar1 + 0xd0U & 0xfffffff0);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          uVar11 = puVar2[2];
          uVar12 = puVar2[3];
          puVar2 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          afStack_40[3] = lbl_82195530;
          dVar8 = (double)lbl_821CC160;
          dVar7 = (double)lbl_82195530;
          if ((double)afStack_30[0] == dVar8) {
            afStack_40[0] = lbl_82195530;
          }
          else {
            puVar2 = (undefined4 *)(iVar1 + 0xd0U & 0xfffffff0);
            uVar13 = puVar2[1];
            uVar14 = puVar2[2];
            uVar15 = puVar2[3];
            puVar3 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
            *puVar3 = *puVar2;
            puVar3[1] = uVar13;
            puVar3[2] = uVar14;
            puVar3[3] = uVar15;
            puVar2 = (undefined4 *)(iVar1 + 0x50U & 0xfffffff0);
            uVar13 = *puVar2;
            uVar14 = puVar2[1];
            uVar15 = puVar2[2];
            uVar16 = puVar2[3];
            puVar2 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
            *puVar2 = uVar17;
            puVar2[1] = uVar18;
            puVar2[2] = uVar19;
            puVar2[3] = uVar20;
            puVar2 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
            *puVar2 = uVar13;
            puVar2[1] = uVar14;
            puVar2[2] = uVar15;
            puVar2[3] = uVar16;
            afStack_40[0] = (afStack_40[0] - afStack_30[0]) / afStack_30[0];
          }
          puVar2 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          if ((double)afStack_30[0] == dVar8) {
            afStack_40[1] = afStack_40[3];
          }
          else {
            iVar1 = *(int *)(param_1 + 0x28);
            puVar2 = (undefined4 *)(iVar1 + 0x50U & 0xfffffff0);
            uVar13 = puVar2[1];
            uVar14 = puVar2[2];
            uVar15 = puVar2[3];
            puVar3 = (undefined4 *)((int)afStack_10 + in_r0 & 0xfffffff0);
            *puVar3 = *puVar2;
            puVar3[1] = uVar13;
            puVar3[2] = uVar14;
            puVar3[3] = uVar15;
            puVar2 = (undefined4 *)(iVar1 + 0xd0U & 0xfffffff0);
            uVar13 = puVar2[1];
            uVar14 = puVar2[2];
            uVar15 = puVar2[3];
            puVar3 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
            *puVar3 = *puVar2;
            puVar3[1] = uVar13;
            puVar3[2] = uVar14;
            puVar3[3] = uVar15;
            puVar2 = (undefined4 *)((int)afStack_20 + in_r0 & 0xfffffff0);
            *puVar2 = uVar21;
            puVar2[1] = uVar22;
            puVar2[2] = uVar23;
            puVar2[3] = uVar24;
            afStack_40[1] = (afStack_20[0] - afStack_10[0]) / afStack_30[0];
          }
          puVar2 = (undefined4 *)((int)afStack_10 + in_r0 & 0xfffffff0);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          if ((double)fStack_8 == dVar8) {
            afStack_40[2] = afStack_40[3];
          }
          else {
            iVar1 = *(int *)(param_1 + 0x28);
            puVar2 = (undefined4 *)(iVar1 + 0x50U & 0xfffffff0);
            uVar13 = *puVar2;
            uVar14 = puVar2[1];
            uVar15 = puVar2[2];
            uVar16 = puVar2[3];
            puVar2 = (undefined4 *)((int)afStack_10 + in_r0 & 0xfffffff0);
            *puVar2 = uVar17;
            puVar2[1] = uVar18;
            puVar2[2] = uVar19;
            puVar2[3] = uVar20;
            puVar2 = (undefined4 *)((int)afStack_20 + in_r0 & 0xfffffff0);
            *puVar2 = uVar13;
            puVar2[1] = uVar14;
            puVar2[2] = uVar15;
            puVar2[3] = uVar16;
            puVar2 = (undefined4 *)(iVar1 + 0xd0U & 0xfffffff0);
            uVar17 = puVar2[1];
            uVar18 = puVar2[2];
            uVar19 = puVar2[3];
            puVar3 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
            *puVar3 = *puVar2;
            puVar3[1] = uVar17;
            puVar3[2] = uVar18;
            puVar3[3] = uVar19;
            afStack_40[2] = (fStack_8 - fStack_18) / fStack_28;
          }
          puVar2 = (undefined4 *)((int)afStack_10 + in_r0 & 0xfffffff0);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          if ((double)fStack_8 == dVar8) {
          }
          else {
            iVar1 = *(int *)(param_1 + 0x28);
            puVar2 = (undefined4 *)(iVar1 + 0x50U & 0xfffffff0);
            uVar9 = puVar2[1];
            uVar10 = puVar2[2];
            uVar11 = puVar2[3];
            puVar3 = (undefined4 *)((int)afStack_20 + in_r0 & 0xfffffff0);
            *puVar3 = *puVar2;
            puVar3[1] = uVar9;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            puVar2 = (undefined4 *)((int)afStack_10 + in_r0 & 0xfffffff0);
            *puVar2 = uVar21;
            puVar2[1] = uVar22;
            puVar2[2] = uVar23;
            puVar2[3] = uVar24;
            puVar2 = (undefined4 *)(iVar1 + 0xd0U & 0xfffffff0);
            uVar9 = puVar2[1];
            uVar10 = puVar2[2];
            uVar11 = puVar2[3];
            puVar3 = (undefined4 *)((int)afStack_30 + in_r0 & 0xfffffff0);
            *puVar3 = *puVar2;
            puVar3[1] = uVar9;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            afStack_40[3] = (fStack_8 - fStack_18) / fStack_28;
          }
          pfVar4 = afStack_40;
          lVar5 = 4;
          do {
            dVar6 = (double)*pfVar4;
            if ((dVar8 < dVar6) && (dVar6 < dVar7)) {
              dVar7 = dVar6;
            }
            pfVar4 = pfVar4 + 1;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
          return dVar7;
        }
      }
    }
  }
  return (double)lbl_821CC160;
}

