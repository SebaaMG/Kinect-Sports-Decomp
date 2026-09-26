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
extern int fn_82F69148();
extern unsigned int lbl_82002AE0;


void fn_82A646D0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  undefined4 *puVar19;
  uint uVar20;
  float *pfVar23;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  
  uVar20 = 0;
  fVar6 = (float)param_1[3];
  uVar7 = param_1[2];
  uVar16 = (ulonglong)(uint)param_1[6];
  lVar18 = (ulonglong)uVar7 + 0x10;
  puVar8 = (undefined4 *)*param_1;
  uVar1 = (uint)(float)param_1[4];
  pfVar23 = (float *)param_1[1];
  uVar9 = param_1[7];
  uVar25 = param_1[9];
  uVar24 = (ulonglong)uVar25;
  lVar15 = ((ulonglong)uVar1 & 0x7fffffff) * 2;
  fVar13 = (float)param_1[4] - (float)(longlong)(int)uVar1;
  puVar19 = (undefined4 *)lVar18;
  pfVar11 = pfVar23;
  fVar3 = lbl_82002AE0;
  if (uVar16 != 0) {
    uVar2 = puVar8[1];
    *puVar19 = *puVar8;
    *(undefined4 *)(uVar7 + 0x14) = uVar2;
    fVar3 = lbl_82002AE0;
  }
  while (fVar14 = lbl_82002AE0, lbl_82002AE0 = fVar3, (int)uVar25 < 2) {
    if (uVar9 <= uVar20) goto LAB_82a64850;
    uVar26 = uVar24 - 2;
    pfVar10 = (float *)(puVar19 + (int)uVar24);
    uVar20 = uVar20 + 2;
    uVar24 = lVar15 + uVar24;
    fVar3 = pfVar10[-1];
    fVar5 = *(float *)((int)((uVar26 & 0xffffffff) << 2) + (int)puVar19);
    fVar4 = pfVar10[1];
    *pfVar11 = (*pfVar10 - fVar5) * fVar6 + fVar5;
    pfVar11[1] = (fVar4 - fVar3) * fVar6 + fVar3;
    for (fVar6 = fVar13 + fVar6; fVar14 <= fVar6; fVar6 = fVar6 - fVar14) {
      uVar24 = uVar24 + 2;
    }
    pfVar11 = pfVar11 + 2;
    fVar3 = lbl_82002AE0;
    lbl_82002AE0 = fVar14;
    uVar25 = (uint)uVar24;
  }
  if (uVar20 < uVar9) {
    pfVar23 = pfVar23 + uVar20;
    do {
      uVar26 = uVar24 - 2;
      pfVar11 = (float *)(puVar8 + (int)uVar24);
      uVar20 = uVar20 + 2;
      uVar24 = lVar15 + uVar24;
      fVar3 = pfVar11[-1];
      fVar5 = *(float *)((int)((uVar26 & 0xffffffff) << 2) + (int)puVar8);
      fVar4 = pfVar11[1];
      *pfVar23 = (*pfVar11 - fVar5) * fVar6 + fVar5;
      pfVar23[1] = (fVar4 - fVar3) * fVar6 + fVar3;
      pfVar23 = pfVar23 + 2;
      for (fVar6 = fVar13 + fVar6; fVar14 <= fVar6; fVar6 = fVar6 - fVar14) {
        uVar24 = uVar24 + 2;
      }
    } while (uVar20 < uVar9);
  }
LAB_82a64850:
  if ((int)uVar24 < (int)(uVar16 - 2)) {
    uVar24 = uVar16 - 2;
  }
  uVar26 = (uVar24 - uVar16) - 2;
  param_1[3] = fVar6;
  param_1[9] = (int)(uVar24 - uVar16);
  iVar17 = (int)-uVar16;
  if ((int)uVar26 < iVar17) {
    if (3 < iVar17 - (int)uVar26) {
      lVar21 = (uVar26 & 0x3fffffff) * 4 + lVar18 + -4;
      lVar15 = ((uVar26 + uVar16) - 3 & 0x3fffffff) * 4 + lVar18;
      do {
        uVar27 = uVar16 + 2 + uVar26;
        iVar12 = (int)lVar21;
        *(undefined4 *)(iVar12 + 4) = *(undefined4 *)((int)lVar15 + 0xc);
        uVar24 = uVar16 + 3 + uVar26;
        lVar15 = lVar15 + 0x10;
        *(undefined4 *)(iVar12 + 8) = *(undefined4 *)lVar15;
        uVar26 = uVar26 + 4;
        *(undefined4 *)(iVar12 + 0xc) =
             *(undefined4 *)((int)((uVar27 & 0xffffffff) << 2) + (int)puVar19);
        lVar21 = lVar21 + 0x10;
        *(undefined4 *)lVar21 = *(undefined4 *)((int)((uVar24 & 0xffffffff) << 2) + (int)puVar19);
      } while ((int)uVar26 < iVar17 + -3);
    }
    if ((int)uVar26 < iVar17) {
      lVar22 = -uVar16 - uVar26;
      lVar21 = (uVar26 & 0x3fffffff) * 4 + lVar18 + -4;
      lVar15 = (uVar26 + uVar16 & 0x3fffffff) * 4 + lVar18 + -4;
      uVar26 = lVar22 + uVar26;
      do {
        lVar15 = lVar15 + 4;
        lVar21 = lVar21 + 4;
        *(undefined4 *)lVar21 = *(undefined4 *)lVar15;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
  }
  if (3 < -(int)uVar26) {
    lVar22 = ((-uVar26 - 4 & 0xffffffff) >> 2) + 1;
    lVar21 = (uVar26 & 0x3fffffff) * 4 + lVar18 + -4;
    lVar15 = ((uVar26 + uVar16) - 3 & 0x3fffffff) * 4 + ZEXT48(puVar8);
    do {
      uVar27 = uVar16 + 2 + uVar26;
      iVar17 = (int)lVar15;
      uVar24 = uVar16 + 3 + uVar26;
      lVar15 = lVar15 + 0x10;
      uVar2 = *(undefined4 *)lVar15;
      iVar12 = (int)lVar21;
      *(undefined4 *)(iVar12 + 4) = *(undefined4 *)(iVar17 + 0xc);
      *(undefined4 *)(iVar12 + 8) = uVar2;
      uVar26 = uVar26 + 4;
      uVar2 = *(undefined4 *)((int)((uVar24 & 0xffffffff) << 2) + (int)puVar8);
      *(undefined4 *)(iVar12 + 0xc) =
           *(undefined4 *)((int)((uVar27 & 0xffffffff) << 2) + (int)puVar8);
      lVar21 = lVar21 + 0x10;
      *(undefined4 *)lVar21 = uVar2;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  if ((int)uVar26 < 0) {
    fn_82F69148((uVar26 & 0x3fffffff) * 4 + lVar18,
                 (uVar26 + uVar16 & 0x3fffffff) * 4 + ZEXT48(puVar8),(-uVar26 & 0x3fffffff) << 2);
  }
  return;
}

