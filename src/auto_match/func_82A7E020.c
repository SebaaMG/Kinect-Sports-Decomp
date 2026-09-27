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
extern int fn_82F643F8();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern float lbl_82005344;
extern unsigned int lbl_82005758;
extern float lbl_820A80C0;
extern unsigned int lbl_820A80C8;
extern unsigned int lbl_820A8108;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A7E020(undefined8 param_1,longlong param_2,uint param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  undefined4 *puVar33;
  ulonglong uVar34;
  
  fVar18 = lbl_821AAD20;
  fVar5 = lbl_82005344;
  fVar17 = lbl_82002AE0;
  uVar7 = 1 << (param_3 & 0x3f);
  if (0xf < (int)param_3) {
                    /* WARNING: Subroutine does not return */
    fn_82F643F8((lbl_82005758 / (double)(longlong)(int)uVar7) * lbl_820A80C0);
  }
  fVar8 = *(float *)(&lbl_820A8108 + param_3 * 4) * lbl_82005344;
  if (param_4 == 1) {
    fVar8 = fVar8 * lbl_8200133C;
  }
  uVar19 = ((ulonglong)uVar7 & 0x7fffffff) * 2;
  iVar23 = (int)uVar19;
  fVar9 = fVar8 * lbl_82002C5C;
  fVar1 = *(float *)(&lbl_820A80C8 + param_3 * 4);
  uVar34 = uVar19;
  iVar20 = iVar23;
  while (uVar16 = uVar34, 4 < iVar20) {
    fVar10 = -(fVar9 * fVar8 - fVar17);
    iVar20 = (int)uVar16 >> 1;
    uVar34 = (ulonglong)iVar20;
    fVar9 = fVar8 * fVar1;
    lVar27 = 0;
    fVar8 = fVar9 * fVar5;
    if (0 < iVar23) {
      lVar24 = (uVar16 & 0x3fffffff) * 4;
      lVar31 = param_2 + 8;
      lVar29 = (uVar34 + 3 & 0x3fffffff) * 4 + param_2;
      do {
        pfVar13 = (float *)lVar31;
        fVar1 = pfVar13[-2];
        lVar27 = lVar27 + uVar16;
        pfVar14 = (float *)lVar29;
        fVar2 = pfVar14[-3];
        pfVar13[-2] = fVar1 + fVar2;
        pfVar14[-3] = fVar1 - fVar2;
        fVar1 = pfVar13[-1];
        fVar2 = pfVar14[-2];
        pfVar13[-1] = fVar1 + fVar2;
        pfVar14[-2] = fVar1 - fVar2;
        fVar1 = *pfVar13;
        fVar2 = pfVar14[-1];
        *pfVar13 = fVar1 + fVar2;
        fVar1 = fVar1 - fVar2;
        fVar2 = pfVar13[1] - *pfVar14;
        pfVar13[1] = pfVar13[1] + *pfVar14;
        lVar31 = lVar31 + lVar24;
        pfVar14[-1] = fVar1 * fVar10 - fVar2 * fVar9;
        *pfVar14 = fVar1 * fVar9 + fVar2 * fVar10;
        lVar29 = lVar24 + lVar29;
      } while ((int)lVar27 < iVar23);
    }
    lVar27 = 4;
    fVar1 = fVar10;
    if (4 < iVar20) {
      lVar29 = param_2 + 0x18;
      lVar24 = (uVar34 + 7 & 0x3fffffff) * 4 + param_2;
      fVar2 = fVar9;
      fVar11 = fVar17;
      fVar12 = fVar18;
      do {
        fVar11 = -(fVar2 * fVar8 - fVar11);
        fVar12 = fVar10 * fVar8 + fVar12;
        fVar2 = fVar11 * fVar8 + fVar2;
        fVar10 = -(fVar12 * fVar8 - fVar10);
        if ((int)lVar27 <= iVar23) {
          lVar25 = (uVar16 & 0x3fffffff) * 4;
          lVar31 = lVar27;
          lVar30 = lVar24;
          lVar32 = lVar29;
          do {
            pfVar13 = (float *)lVar32;
            fVar3 = pfVar13[-2];
            lVar31 = lVar31 + uVar16;
            pfVar14 = (float *)lVar30;
            fVar4 = pfVar14[-3];
            pfVar13[-2] = fVar3 + fVar4;
            fVar3 = fVar3 - fVar4;
            fVar4 = pfVar13[-1] - pfVar14[-2];
            pfVar13[-1] = pfVar13[-1] + pfVar14[-2];
            pfVar14[-3] = fVar3 * fVar11 - fVar4 * fVar12;
            pfVar14[-2] = fVar3 * fVar12 + fVar4 * fVar11;
            fVar3 = pfVar14[-1];
            fVar4 = *pfVar13;
            *pfVar13 = fVar3 + fVar4;
            fVar4 = fVar4 - fVar3;
            fVar3 = pfVar13[1] - *pfVar14;
            pfVar13[1] = pfVar13[1] + *pfVar14;
            lVar32 = lVar32 + lVar25;
            pfVar14[-1] = fVar4 * fVar10 - fVar3 * fVar2;
            *pfVar14 = fVar4 * fVar2 + fVar3 * fVar10;
            lVar30 = lVar30 + lVar25;
          } while ((int)lVar31 <= iVar23);
        }
        lVar27 = lVar27 + 4;
        lVar29 = lVar29 + 0x10;
        lVar24 = lVar24 + 0x10;
      } while ((int)lVar27 < iVar20);
    }
  }
  if ((2 < iVar20) && (0 < iVar23)) {
    lVar27 = param_2 + -4;
    lVar24 = ((uVar19 - 1 & 0xffffffff) >> 2) + 1;
    do {
      iVar20 = (int)lVar27;
      fVar5 = *(float *)(iVar20 + 4);
      *(float *)(iVar20 + 4) = fVar5 + *(float *)(iVar20 + 0xc);
      *(float *)(iVar20 + 0xc) = fVar5 - *(float *)(iVar20 + 0xc);
      fVar5 = *(float *)(iVar20 + 8);
      *(float *)(iVar20 + 8) = fVar5 + *(float *)(iVar20 + 0x10);
      lVar27 = lVar27 + 0x10;
      *(float *)lVar27 = fVar5 - *(float *)(iVar20 + 0x10);
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  if (4 < iVar23) {
    iVar20 = uVar7 + 1;
    uVar21 = ((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0);
    iVar28 = 0;
    iVar22 = 0;
    if (0 < (int)uVar7) {
      lVar27 = param_2 + 4;
      do {
        puVar15 = (undefined4 *)lVar27;
        if (iVar22 < iVar28) {
          uVar6 = puVar15[-1];
          puVar33 = (undefined4 *)(iVar28 * 4 + (int)param_2);
          puVar15[-1] = *puVar33;
          *puVar33 = uVar6;
          puVar33 = puVar33 + 1;
          uVar6 = *puVar15;
          *puVar15 = *puVar33;
          *puVar33 = uVar6;
          puVar33 = puVar33 + iVar20;
          uVar6 = puVar15[iVar20];
          puVar15[iVar20] = *puVar33;
          *puVar33 = uVar6;
          uVar6 = puVar15[uVar7 + 2];
          puVar15[uVar7 + 2] = puVar33[1];
          puVar33[1] = uVar6;
        }
        uVar6 = puVar15[1];
        puVar33 = (undefined4 *)((iVar28 + uVar7) * 4 + (int)param_2);
        puVar15[1] = *puVar33;
        *puVar33 = uVar6;
        uVar6 = puVar15[2];
        puVar15[2] = puVar33[1];
        puVar33[1] = uVar6;
        uVar26 = uVar21;
        if ((int)uVar21 <= iVar28) {
          do {
            iVar28 = iVar28 - uVar26;
            uVar26 = ((int)uVar26 >> 1) + (uint)((int)uVar26 < 0 && (uVar26 & 1) != 0);
          } while ((int)uVar26 <= iVar28);
        }
        iVar22 = iVar22 + 4;
        iVar28 = iVar28 + uVar26;
        lVar27 = lVar27 + 0x10;
      } while (iVar22 < (int)uVar7);
    }
  }
  if (param_4 == 1) {
    uVar34 = 0;
    if (3 < iVar23) {
      lVar27 = param_2 + -4;
      fVar5 = fVar17 / (float)(longlong)(int)uVar7;
      do {
        iVar20 = (int)lVar27;
        uVar34 = uVar34 + 4;
        *(float *)(iVar20 + 4) = fVar5 * *(float *)(iVar20 + 4);
        *(float *)(iVar20 + 8) = fVar5 * *(float *)(iVar20 + 8);
        *(float *)(iVar20 + 0xc) = fVar5 * *(float *)(iVar20 + 0xc);
        lVar27 = lVar27 + 0x10;
        *(float *)lVar27 = fVar5 * *(float *)(iVar20 + 0x10);
      } while ((int)uVar34 < iVar23 + -3);
    }
    if ((int)uVar34 < iVar23) {
      lVar24 = uVar19 - uVar34;
      lVar27 = (uVar34 & 0x3fffffff) * 4 + param_2 + -4;
      do {
        iVar20 = (int)lVar27;
        lVar27 = lVar27 + 4;
        *(float *)lVar27 = (fVar17 / (float)(longlong)(int)uVar7) * *(float *)(iVar20 + 4);
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
  }
  return;
}

