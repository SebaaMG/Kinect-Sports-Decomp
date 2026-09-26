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
extern unsigned int fStack_6c;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern int fn_8254AA50();
extern int fn_8254E1C8();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_8254E448(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  undefined8 in_r0;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  
  piVar15 = (int *)(param_1 + 8);
  iVar8 = *(int *)(param_1 + 0xcc);
  iVar14 = (int)in_r0;
  pfVar6 = (float *)(iVar14 + *(int *)(param_1 + 8) & 0xfffffff0);
  fVar20 = *pfVar6;
  fVar21 = pfVar6[1];
  fVar22 = pfVar6[2];
  fVar23 = pfVar6[3];
  uVar1 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x60;
  pfVar6 = (float *)((int)&uStack_70 + iVar14 & 0xfffffff0);
  *pfVar6 = fVar20;
  pfVar6[1] = fVar21;
  pfVar6[2] = fVar22;
  pfVar6[3] = fVar23;
  pfVar6 = (float *)((int)&fStack_80 + iVar14 & 0xfffffff0);
  *pfVar6 = fVar20;
  pfVar6[1] = fVar21;
  pfVar6[2] = fVar22;
  pfVar6[3] = fVar23;
  fVar27 = fVar23;
  fVar26 = fVar22;
  fVar25 = fVar21;
  fVar24 = fVar20;
  if (iVar8 != 0) {
    fn_8265CAA0();
  }
  lVar9 = ((ulonglong)uVar1 & 0x3fffffff) << 2;
  if (0x3fffffff < uVar1) {
    lVar9 = -1;
  }
  puVar10 = (undefined4 *)fn_8265CA60(lVar9);
  iVar8 = (int)in_r0;
  *(undefined4 **)(param_1 + 0xcc) = puVar10;
  *puVar10 = 0;
  uVar13 = 1;
  *(undefined4 *)(param_1 + 0xd8) = lbl_821CC160;
  if (1 < (uint)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 3)) {
    iVar14 = 8;
    do {
      iVar11 = (**(code **)(**(int **)(iVar14 + *(int *)(param_1 + 0x18)) + 0x1c))();
      iVar8 = (int)in_r0;
      fVar16 = *(float *)(*(int *)(*(int *)(iVar11 + 0x10) + 4) + 0x10);
      if (*(float *)(param_1 + 0xd8) < fVar16) {
        *(float *)(param_1 + 0xd8) = fVar16;
      }
      uVar13 = uVar13 + 1;
      iVar14 = iVar14 + 8;
    } while (uVar13 < (uint)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 3));
  }
  uVar13 = 1;
  if (1 < (uint)((*(int *)(param_1 + 0xc) - *piVar15) / 0x60)) {
    iVar14 = 4;
    iVar11 = 0x60;
    do {
      iVar7 = iVar11 + *piVar15;
      iVar11 = iVar11 + 0x60;
      pfVar6 = (float *)(iVar8 + iVar7 & 0xfffffff0);
      fVar16 = *pfVar6;
      fVar17 = pfVar6[1];
      fVar18 = pfVar6[2];
      fVar19 = pfVar6[3];
      *(uint *)(iVar14 + *(int *)(param_1 + 0xcc)) = uVar13;
      uVar13 = uVar13 + 1;
      fVar2 = fVar16;
      if (fVar24 < fVar16) {
        fVar2 = fVar24;
      }
      fVar3 = fVar17;
      if (fVar25 < fVar17) {
        fVar3 = fVar25;
      }
      fVar4 = fVar18;
      if (fVar26 < fVar18) {
        fVar4 = fVar26;
      }
      fVar5 = fVar19;
      if (fVar27 < fVar19) {
        fVar5 = fVar27;
      }
      if (fVar16 < fVar20) {
        fVar16 = fVar20;
      }
      if (fVar17 < fVar21) {
        fVar17 = fVar21;
      }
      if (fVar18 < fVar22) {
        fVar18 = fVar22;
      }
      if (fVar19 < fVar23) {
        fVar19 = fVar23;
      }
      iVar14 = iVar14 + 4;
      fVar23 = fVar19;
      fVar22 = fVar18;
      fVar21 = fVar17;
      fVar20 = fVar16;
      fVar27 = fVar5;
      fVar26 = fVar4;
      fVar25 = fVar3;
      fVar24 = fVar2;
    } while (uVar13 < (uint)((*(int *)(param_1 + 0xc) - *piVar15) / 0x60));
    pfVar6 = (float *)((int)&fStack_80 + iVar8 & 0xfffffff0);
    *pfVar6 = fVar16;
    pfVar6[1] = fVar17;
    pfVar6[2] = fVar18;
    pfVar6[3] = fVar19;
    pfVar6 = (float *)((int)&uStack_70 + iVar8 & 0xfffffff0);
    *pfVar6 = fVar2;
    pfVar6[1] = fVar3;
    pfVar6[2] = fVar4;
    pfVar6[3] = fVar5;
  }
  if (*(int *)(param_1 + 200) != 0) {
    fn_8254AA50();
  }
  fStack_88 = fStack_80 + lbl_8218E8E8;
  fStack_84 = fStack_78 + lbl_8218E8E8;
  uStack_90 = uStack_70;
  *(float *)(param_1 + 0xd0) = fStack_6c - *(float *)(param_1 + 0xd8);
  *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xd8) + fStack_7c;
  uStack_8c = uStack_68;
  uVar12 = fn_8254E1C8(param_1,&uStack_90,&fStack_88,*(undefined4 *)(param_1 + 0xcc),0,uVar1,0
                             ,0);
  *(undefined4 *)(param_1 + 200) = uVar12;
  return;
}

