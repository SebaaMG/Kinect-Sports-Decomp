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
#define TBLr 0
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D36438();
extern int fn_82D93430();
extern unsigned int iStack_a4;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int iStack_c0;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82132D10;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalEstimateFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82DB1B80(int param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  undefined8 in_r0;
  int *piVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 in_register_00010040;
  undefined4 in_register_00010044;
  undefined4 in_register_00010048;
  undefined4 in_vr4;
  undefined4 in_register_00010070;
  undefined4 in_register_00010074;
  undefined4 in_register_00010078;
  undefined4 in_vr7;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int aiStack_d0 [4];
  int iStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  int iStack_b4;
  int iStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int iStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = param_2[1];
  uVar13 = (ulonglong)uVar2;
  iStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0x80000000;
  piVar9 = (int *)fn_82CE5410();
  iStack_b0 = *piVar9;
  *piVar9 = (uVar2 * 0x20 + 0x7f & 0xffffff80) + iStack_b0;
  uStack_a8 = uVar2 | 0x80000000;
  iStack_a4 = iStack_b0;
  iVar10 = fn_82CE5410();
  if ((int)(uStack_a8 & 0x3fffffff) < (int)uVar2) {
    uVar12 = ((ulonglong)uStack_a8 & 0x3fffffff) << 1;
    if ((int)uVar12 <= (int)uVar2) {
      uVar12 = uVar13;
    }
    fn_82CE6310(*(undefined4 *)(iVar10 + 0x10),&iStack_b0,uVar12);
  }
  iStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0x80000000;
  uStack_ac = uVar2;
  piVar9 = (int *)fn_82CE5410();
  iStack_c0 = *piVar9;
  *piVar9 = (uVar2 * 4 + 0x7f & 0xffffff80) + iStack_c0;
  uStack_b8 = uVar2 | 0x80000000;
  iStack_b4 = iStack_c0;
  iVar10 = fn_82CE5410();
  if ((int)(uStack_b8 & 0x3fffffff) < (int)uVar2) {
    uVar12 = ((ulonglong)uStack_b8 & 0x3fffffff) << 1;
    if ((int)uVar12 <= (int)uVar2) {
      uVar12 = uVar13;
    }
    fn_82CE6310(*(undefined4 *)(iVar10 + 0x10),&iStack_c0,uVar12);
  }
  uStack_bc = uVar2;
  iVar10 = KeTlsGetValue(lbl_8323B4A0);
  puVar3 = *(undefined4 **)(iVar10 + 4);
  if (puVar3 < *(undefined4 **)(iVar10 + 0xc)) {
    *puVar3 = "Ttprepare";
    uVar5 = TBLr;
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar10 + 4) = puVar3 + 3;
  }
  iVar10 = *(int *)(*(int *)(param_1 + 0x28) + 0x78);
  if (0 < (int)uVar2) {
    iVar14 = 0;
    iVar15 = 0;
    dVar16 = (double)lbl_821AAD20;
    uVar12 = uVar13;
    do {
      iVar4 = *(int *)(*param_2 + iVar14);
      if (*(uint *)(iVar4 + 0x30) < *(uint *)(iVar4 + 0x20)) {
        puVar3 = *(undefined4 **)(*param_2 + iVar14);
        piVar9 = (int *)*puVar3;
        (**(code **)(*piVar9 + 0x1c))(dVar16,piVar9,puVar3[2]);
      }
      else {
        fStack_a0 = (float)*(uint *)(iVar4 + 0x20);
        fStack_94 = (float)dVar16;
        fStack_98 = (float)*(uint *)(iVar4 + 0x28);
        fStack_9c = (float)*(uint *)(iVar4 + 0x24);
        fStack_84 = (float)dVar16;
        iVar11 = iVar15 + iStack_b0 + 0x10;
        iVar7 = (int)in_r0;
        pfVar6 = (float *)((int)&fStack_a0 + iVar7 & 0xfffffff0);
        fVar22 = *pfVar6;
        fVar23 = pfVar6[1];
        fVar24 = pfVar6[2];
        fVar25 = pfVar6[3];
        pfVar6 = (float *)(iVar15 + iStack_b0 & 0xfffffff0);
        *pfVar6 = fVar22;
        pfVar6[1] = fVar23;
        pfVar6[2] = fVar24;
        pfVar6[3] = fVar25;
        fStack_8c = (float)*(uint *)(iVar4 + 0x34);
        fStack_88 = (float)*(uint *)(iVar4 + 0x38);
        fStack_90 = (float)*(uint *)(iVar4 + 0x30);
        pfVar6 = (float *)((int)&fStack_90 + iVar7 & 0xfffffff0);
        fVar18 = *pfVar6;
        fVar19 = pfVar6[1];
        fVar20 = pfVar6[2];
        fVar21 = pfVar6[3];
        pfVar6 = (float *)(iVar7 + iVar11 & 0xfffffff0);
        *pfVar6 = fVar18;
        pfVar6[1] = fVar19;
        pfVar6[2] = fVar20;
        pfVar6[3] = fVar21;
        vectorRotateLeftImmediateMaskInsert128
                  (*(undefined1 (*) [16])(iVar10 + 0x40U & 0xfffffff0),
                   *(undefined1 (*) [16])((uint)(&lbl_82132D10 + iVar7) & 0xfffffff0),1,0);{ V16 _vt0 = vectorReciprocalEstimateFloatingPoint(in_vs45); memcpy(auVar17, &_vt0, 16); }{ V16 _vt1 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,in_vs45,in_vs43); memcpy(in_vs43, &_vt1, 16); }
        vectorMultiplyAddFloatingPoint(in_vs43,auVar17,auVar17);
        pfVar6 = (float *)(iVar15 + iStack_b0 & 0xfffffff0);
        *pfVar6 = fVar22 * fVar18;
        pfVar6[1] = fVar23 * fVar19;
        pfVar6[2] = fVar24 * fVar20;
        pfVar6[3] = fVar25 * fVar21;
        pfVar6 = (float *)(iVar7 + iVar11 & 0xfffffff0);
        fVar22 = pfVar6[1];
        fVar23 = pfVar6[2];
        fVar24 = pfVar6[3];
        pfVar8 = (float *)(iVar7 + iVar11 & 0xfffffff0);
        *pfVar8 = *pfVar6 * fVar18;
        pfVar8[1] = fVar22 * fVar19;
        pfVar8[2] = fVar23 * fVar20;
        pfVar8[3] = fVar24 * fVar21;
        vectorSubtractFloatingPoint(in_vs40,in_vs41);
        puVar3 = (undefined4 *)(iVar15 + iStack_b0 & 0xfffffff0);
        *puVar3 = in_register_00010070;
        puVar3[1] = in_register_00010074;
        puVar3[2] = in_register_00010078;
        puVar3[3] = in_vr7;
        vectorSubtractFloatingPoint(in_vs37,in_vs38);
        puVar3 = (undefined4 *)(iVar7 + iVar11 & 0xfffffff0);
        *puVar3 = in_register_00010040;
        puVar3[1] = in_register_00010044;
        puVar3[2] = in_register_00010048;
        puVar3[3] = in_vr4;
      }
      uVar12 = uVar12 - 1;
      iVar15 = iVar15 + 0x20;
      *(undefined4 *)(iVar14 + iStack_c0) = *(undefined4 *)(*param_2 + iVar14);
      iVar14 = iVar14 + 4;
    } while (uVar12 != 0);
  }
  iVar10 = KeTlsGetValue(lbl_8323B4A0);
  puVar3 = *(undefined4 **)(iVar10 + 4);
  if (puVar3 < *(undefined4 **)(iVar10 + 0xc)) {
    *puVar3 = &lbl_82132BC4;
    uVar5 = TBLr;
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar10 + 4) = puVar3 + 3;
  }
  aiStack_d0[0] = 0;
  aiStack_d0[1] = 0;
  aiStack_d0[2] = 0x80000000;
  iVar10 = KeTlsGetValue(lbl_8323B4A0);
  puVar3 = *(undefined4 **)(iVar10 + 4);
  if (puVar3 < *(undefined4 **)(iVar10 + 0xc)) {
    *puVar3 = "Ttbuild";
    uVar5 = TBLr;
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar10 + 4) = puVar3 + 3;
  }
  if (0 < (int)uVar2) {
    fn_82D36438(uVar1,iStack_b0,iStack_c0,uVar13,aiStack_d0);
  }
  iVar10 = KeTlsGetValue(lbl_8323B4A0);
  puVar3 = *(undefined4 **)(iVar10 + 4);
  if (puVar3 < *(undefined4 **)(iVar10 + 0xc)) {
    *puVar3 = &lbl_82132BC4;
    uVar5 = TBLr;
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar10 + 4) = puVar3 + 3;
  }
  if (0 < (int)uVar2) {
    iVar10 = 0;
    iVar14 = 0;
    do {
      fn_82D93430((int)*(char *)(*(int *)(*param_2 + iVar14) + 0x10) + *(int *)(*param_2 + iVar14),
                   *(undefined2 *)(iVar10 + aiStack_d0[0]));
      uVar13 = uVar13 - 1;
      iVar14 = iVar14 + 4;
      iVar10 = iVar10 + 2;
    } while (uVar13 != 0);
  }
  iVar10 = fn_82CE5410();
  aiStack_d0[1] = 0;
  if ((aiStack_d0[2] & 0x80000000U) == 0) {
    (**(code **)(**(int **)(iVar10 + 0x10) + 0x10))
              (*(int **)(iVar10 + 0x10),aiStack_d0[0],aiStack_d0[2] & 0x3fffffff);
  }
  iVar10 = iStack_b4;
  aiStack_d0[0] = 0;
  aiStack_d0[2] = 0x80000000;
  uStack_bc = -(uint)(iStack_c0 != iStack_b4) & uStack_bc;
  piVar9 = (int *)fn_82CE5410();
  *piVar9 = iVar10;
  iVar10 = fn_82CE5410();
  uStack_bc = 0;
  if ((uStack_b8 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar10 + 0x10) + 0x10))
              (*(int **)(iVar10 + 0x10),iStack_c0,uStack_b8 & 0x3fffffff);
  }
  iVar10 = iStack_a4;
  iStack_c0 = 0;
  uStack_b8 = 0x80000000;
  uStack_ac = -(uint)(iStack_b0 != iStack_a4) & uStack_ac;
  piVar9 = (int *)fn_82CE5410();
  *piVar9 = iVar10;
  iVar10 = fn_82CE5410();
  uStack_ac = 0;
  if ((uStack_a8 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar10 + 0x10) + 0x10))
              (*(int **)(iVar10 + 0x10),iStack_b0,uStack_a8 & 0x3fffffff,0x20);
  }
  return;
}

