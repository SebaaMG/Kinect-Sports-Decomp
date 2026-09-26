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
extern int fn_82A64E30();
extern int fn_82F69148();
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_70;


void fn_82A651C8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  float *pfVar12;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uStack_70;
  
  uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)param_1[3])) & ((U64)0xFFFFFFFF)) << 0));
  uVar18 = 0;
  uVar14 = (ulonglong)(uint)param_1[6];
  puVar2 = (undefined4 *)*param_1;
  uVar13 = ZEXT48(puVar2);
  lVar16 = (ulonglong)(uint)param_1[2] + 8;
  dVar20 = (double)(((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
  uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)(float)param_1[4])) & ((U64)0xFFFFFFFF)) << 32));
  uVar15 = (ulonglong)(((U64)(uStack_70) >> 32) & 0xFFFFFFFF);
  iVar8 = param_1[1];
  uVar3 = param_1[7];
  uVar4 = param_1[9];
  uVar19 = (ulonglong)uVar4;
  dVar22 = (double)((float)param_1[4] - (float)(longlong)(int)(((U64)(uStack_70) >> 32) & 0xFFFFFFFF));
  puVar17 = (undefined4 *)lVar16;
  if (uVar14 != 0) {
    *puVar17 = *puVar2;
  }
  dVar23 = (double)lbl_82002AE0;
  if ((int)uVar4 < 1) {
    pfVar12 = (float *)(iVar8 + -4);
    do {
      if (uVar3 <= uVar18) break;
      uVar18 = uVar18 + 1;
      pfVar5 = (float *)((int)((uVar19 & 0xffffffff) << 2) + (int)puVar17);
      uVar19 = uVar15 + uVar19;
      dVar21 = (double)pfVar5[-1];
      pfVar12 = pfVar12 + 1;
      *pfVar12 = (float)((double)(float)((double)*pfVar5 - dVar21) * dVar20 + dVar21);
      for (dVar20 = dVar22 + dVar20; dVar20 = (double)(float)dVar20, dVar23 <= dVar20;
          dVar20 = dVar20 - dVar23) {
        uVar19 = uVar19 + 1;
      }
    } while ((int)uVar19 < 1);
    uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)dVar20)) & ((U64)0xFFFFFFFF)) << 0));
  }
  pfVar12 = (float *)(uVar18 * 4 + iVar8);
  if (((uint)pfVar12 & 0xc) != 0) {
    if (uVar3 - uVar18 < 0x10) goto LAB_82a65368;
    do {
      uVar18 = uVar18 + 1;
      pfVar5 = (float *)((int)((uVar19 & 0xffffffff) << 2) + (int)puVar2);
      uVar19 = uVar15 + uVar19;
      dVar21 = (double)pfVar5[-1];
      *pfVar12 = (float)((double)(float)((double)*pfVar5 - dVar21) * dVar20 + dVar21);
      dVar20 = dVar22 + dVar20;
      pfVar12 = pfVar12 + 1;
      while( true ) {
        uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)dVar20)) & ((U64)0xFFFFFFFF)) << 0));
        dVar20 = (double)(((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
        if (dVar20 < dVar23) break;
        dVar20 = dVar20 - dVar23;
        uVar19 = uVar19 + 1;
      }
    } while (((uint)pfVar12 & 0xc) != 0);
  }
  if (0xf < uVar3 - uVar18) {
    uVar4 = uVar3 - uVar18 & 0xfffffff0;
    lVar6 = fn_82A64E30((uVar19 & 0x3fffffff) * 4 + uVar13 + -4,uVar18 * 4 + iVar8,uVar4,
                              &uStack_70);
    dVar20 = (double)(((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
    uVar18 = uVar4 + uVar18;
    uVar19 = lVar6 + uVar19;
  }
LAB_82a65368:
  if (uVar18 < uVar3) {
    iVar9 = uVar3 - uVar18;
    pfVar12 = (float *)(uVar18 * 4 + iVar8 + -4);
    do {
      uVar7 = uVar19 & 0xffffffff;
      uVar19 = uVar15 + uVar19;
      pfVar5 = (float *)((int)(uVar7 << 2) + (int)puVar2);
      dVar21 = (double)pfVar5[-1];
      pfVar12 = pfVar12 + 1;
      *pfVar12 = (float)((double)(float)((double)*pfVar5 - dVar21) * dVar20 + dVar21);
      for (dVar20 = dVar22 + dVar20; dVar20 = (double)(float)dVar20, dVar23 <= dVar20;
          dVar20 = dVar20 - dVar23) {
        uVar19 = uVar19 + 1;
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((int)uVar19 < (int)(uVar14 - 1)) {
    uVar19 = uVar14 - 1;
  }
  uStack_70 = (ulonglong)(uint)(float)dVar20 << 0x20;
  uVar15 = (uVar19 - uVar14) - 1;
  param_1[3] = (float)dVar20;
  param_1[9] = (int)(uVar19 - uVar14);
  iVar8 = (int)-uVar14;
  if ((int)uVar15 < iVar8) {
    if (3 < iVar8 - (int)uVar15) {
      lVar10 = (uVar15 & 0x3fffffff) * 4 + lVar16 + -4;
      lVar6 = ((uVar15 + uVar14) - 3 & 0x3fffffff) * 4 + lVar16;
      do {
        uVar7 = uVar14 + 2 + uVar15;
        iVar9 = (int)lVar10;
        *(undefined4 *)(iVar9 + 4) = *(undefined4 *)((int)lVar6 + 0xc);
        uVar19 = uVar14 + 3 + uVar15;
        lVar6 = lVar6 + 0x10;
        *(undefined4 *)(iVar9 + 8) = *(undefined4 *)lVar6;
        uVar15 = uVar15 + 4;
        *(undefined4 *)(iVar9 + 0xc) =
             *(undefined4 *)((int)((uVar7 & 0xffffffff) << 2) + (int)puVar17);
        lVar10 = lVar10 + 0x10;
        *(undefined4 *)lVar10 = *(undefined4 *)((int)((uVar19 & 0xffffffff) << 2) + (int)puVar17);
      } while ((int)uVar15 < iVar8 + -3);
    }
    if ((int)uVar15 < iVar8) {
      lVar11 = -uVar14 - uVar15;
      lVar10 = (uVar15 & 0x3fffffff) * 4 + lVar16 + -4;
      lVar6 = (uVar15 + uVar14 & 0x3fffffff) * 4 + lVar16 + -4;
      uVar15 = lVar11 + uVar15;
      do {
        lVar6 = lVar6 + 4;
        lVar10 = lVar10 + 4;
        *(undefined4 *)lVar10 = *(undefined4 *)lVar6;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  if (3 < -(int)uVar15) {
    lVar11 = ((-uVar15 - 4 & 0xffffffff) >> 2) + 1;
    lVar10 = (uVar15 & 0x3fffffff) * 4 + lVar16 + -4;
    lVar6 = ((uVar15 + uVar14) - 3 & 0x3fffffff) * 4 + uVar13;
    do {
      uVar7 = uVar14 + 2 + uVar15;
      iVar8 = (int)lVar6;
      uVar19 = uVar14 + 3 + uVar15;
      lVar6 = lVar6 + 0x10;
      uVar1 = *(undefined4 *)lVar6;
      iVar9 = (int)lVar10;
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar8 + 0xc);
      *(undefined4 *)(iVar9 + 8) = uVar1;
      uVar15 = uVar15 + 4;
      uVar1 = *(undefined4 *)((int)((uVar19 & 0xffffffff) << 2) + (int)puVar2);
      *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)((int)((uVar7 & 0xffffffff) << 2) + (int)puVar2)
      ;
      lVar10 = lVar10 + 0x10;
      *(undefined4 *)lVar10 = uVar1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if ((int)uVar15 < 0) {
    fn_82F69148((uVar15 & 0x3fffffff) * 4 + lVar16,(uVar15 + uVar14 & 0x3fffffff) * 4 + uVar13,
                 (-uVar15 & 0x3fffffff) << 2);
  }
  return;
}

