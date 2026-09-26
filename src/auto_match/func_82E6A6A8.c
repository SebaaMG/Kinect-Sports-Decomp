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
extern int fn_82F64A40();
extern int fn_82F655D8();
extern int fn_82F691F0();
extern int fn_82F6A510();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005720;
extern unsigned int lbl_82006848;
extern unsigned int lbl_8200D8C4;
extern unsigned int lbl_82011638;
extern unsigned int lbl_82015618;
extern unsigned int lbl_8201F5E0;
extern unsigned int lbl_8207F4EC;
extern unsigned int lbl_820885C4;
extern unsigned int lbl_8208DDAC;
extern unsigned int lbl_8208DE14;
extern unsigned int lbl_8208DE24;
extern unsigned int lbl_8208DE28;
extern unsigned int lbl_8209A9D0;
extern unsigned int lbl_8209A9D4;
extern unsigned int lbl_8209A9D8;
extern unsigned int lbl_8209A9DC;
extern unsigned int lbl_8209A9E0;
extern unsigned int lbl_8209A9E8;
extern unsigned int lbl_8209A9F0;
extern unsigned int lbl_8209A9F8;
extern unsigned int lbl_8209AA00;
extern unsigned int lbl_821551F0;
extern unsigned int lbl_821551F8;
extern unsigned int lbl_82155200;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1b0;


void fn_82E6A6A8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  double dVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  int *piVar19;
  short sVar21;
  int iVar20;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  float *pfVar25;
  ulonglong uVar26;
  int iVar27;
  undefined4 *puVar28;
  ulonglong uVar29;
  int iVar30;
  short sVar34;
  uint uVar31;
  float *pfVar32;
  int iVar33;
  ulonglong uVar35;
  ulonglong uVar36;
  uint uVar37;
  uint uVar38;
  uint *puVar39;
  longlong lVar40;
  int iVar41;
  int iVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined8 uVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  undefined8 uStack_1b0;
  float afStack_1a0 [104];
  
  lVar18 = fn_82F6A510();
  uVar17 = lbl_8209A9F8;
  fVar2 = lbl_8209A9F0;
  uVar16 = lbl_82015618;
  fVar4 = lbl_82006848;
  fVar3 = lbl_82002AE0;
  piVar19 = (int *)lVar18;
  iVar5 = *piVar19;
  iVar6 = piVar19[0x1e01];
  uVar7 = *(uint *)(iVar5 + 0x158);
  uVar36 = (ulonglong)uVar7;
  uVar8 = **(uint **)(iVar5 + 0x154);
  uVar35 = (ulonglong)uVar8;
  lVar40 = lVar18 + 0x795c;
  fVar1 = (float)(longlong)*(int *)(iVar5 + 0x50) / (float)(longlong)*(int *)(iVar5 + 0xfc);
  if (((piVar19[0x4255] == 2) || (lbl_8208DE24 < *(float *)(iVar5 + 0x30))) ||
     ((lbl_8208DE14 < *(float *)(iVar5 + 0x30) && (piVar19[5] != 0)))) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  uVar29 = uVar35 - 2;
  if (-1 < (int)uVar29) {
    lVar23 = (uVar29 & 0x3fffffff) * 4 + uVar36;
    uVar26 = uVar29;
    do {
      if (((float)(longlong)*(int *)lVar23 * fVar1 <= lbl_820885C4) &&
         (lbl_820885C4 <= (float)(longlong)((int *)lVar23)[1] * fVar1)) break;
      uVar26 = uVar26 - 1;
      lVar23 = lVar23 + -4;
    } while (-1 < (longlong)uVar26);
  }
  if (-1 < (int)uVar29) {
    lVar23 = (uVar29 & 0x3fffffff) * 4 + uVar36;
    do {
      if (((float)(longlong)*(int *)lVar23 * fVar1 <= lbl_8209AA00) &&
         (lbl_8209AA00 <= (float)(longlong)((int *)lVar23)[1] * fVar1)) break;
      uVar29 = uVar29 - 1;
      lVar23 = lVar23 + -4;
    } while (-1 < (longlong)uVar29);
  }
  dVar45 = (double)lbl_82002AE0;
  puVar39 = (uint *)(iVar5 + 0x100);
  dVar46 = (double)lbl_82005344;
  piVar19[0x1e00] = lbl_8200D8C4;
  if (piVar19[0x4255] == 0) {
    iVar42 = 0;
    if (0 < *(int *)(iVar5 + 0x100)) {
      pfVar25 = (float *)(iVar6 + -4);
      do {
        pfVar25 = pfVar25 + 1;
        *pfVar25 = fVar3;
        iVar42 = iVar42 + 1;
      } while (iVar42 < *(int *)(*piVar19 + 0x100));
    }
  }
  else {
    iVar42 = 0;
    if (0 < *(int *)(iVar5 + 0x100)) {
      dVar60 = (double)lbl_8207F4EC;
      dVar61 = (double)lbl_8209A9E0;
      dVar54 = (double)lbl_8209A9DC;
      dVar47 = (double)lbl_8209A9D8;
      dVar55 = (double)lbl_8209A9D4;
      dVar48 = (double)lbl_82011638;
      pfVar25 = (float *)(iVar6 + -4);
      dVar49 = (double)lbl_8209A9D0;
      dVar50 = (double)lbl_8201F5E0;
      dVar52 = (double)lbl_8208DE28;
      dVar53 = (double)lbl_8208DDAC;
      dVar51 = lbl_82005720;
      dVar56 = lbl_82155200;
      uVar57 = lbl_8209A9E8;
      dVar58 = lbl_821551F8;
      dVar59 = lbl_821551F0;
      do {
        dVar62 = (double)(((float)((double)(longlong)*(int *)(*piVar19 + 0x50) *
                                  (double)(longlong)iVar42) * fVar4) /
                         (float)((double)(longlong)*(int *)(*piVar19 + 0x100) * dVar46));
        if ((double)*(float *)(iVar5 + 0x30) <= dVar53) {
          if (dVar62 <= (double)(float)piVar19[0x1e00]) {
            dVar62 = (double)(float)piVar19[0x1e00];
          }
          dVar45 = (double)fVar2;
          if (dVar45 <= dVar62) {
            dVar62 = dVar45;
          }
          dVar45 = (double)fn_82F64A40((double)(float)((double)((float)(dVar62 - dVar61) *
                                                                (float)(dVar62 - dVar61)) * dVar60))
          ;
          dVar45 = dVar45 * dVar59;
          dVar44 = (double)fn_82F655D8(dVar62,uVar17);
          dVar44 = -(dVar44 * dVar58 - dVar45);
          dVar62 = (double)fn_82F655D8(dVar62,uVar57);
          dVar45 = (double)fVar3;
          dVar44 = (double)(float)-(dVar62 * dVar56 - dVar44);
        }
        else {
          dVar43 = dVar48;
          dVar14 = dVar49;
          if (dVar52 < (double)*(float *)(iVar5 + 0x30)) {
            dVar43 = (double)fVar2;
            dVar14 = dVar50;
          }
          dVar44 = dVar55;
          if ((dVar14 < dVar62) && (dVar44 = dVar47, dVar62 < dVar43)) {
            dVar44 = (double)((float)((double)(float)(dVar43 - dVar62) * dVar55 -
                                     (double)(float)((double)(float)(dVar62 - dVar14) * dVar54)) /
                             (float)(dVar43 - dVar14));
          }
        }
        dVar62 = (double)fn_82F655D8(uVar16,dVar44 * dVar51);
        pfVar25 = pfVar25 + 1;
        *pfVar25 = (float)dVar62;
        iVar42 = iVar42 + 1;
      } while (iVar42 < *(int *)(*piVar19 + 0x100));
    }
  }
  uVar22 = 1;
  if (1 < *(int *)(iVar5 + 0xf4)) {
    iVar42 = 4;
    do {
      uVar37 = *puVar39;
      uVar38 = 1 << (uVar22 & 0x3f);
      iVar20 = (int)uVar37 / (int)uVar38;
      trapWord(6,(ulonglong)uVar38,0);
      iVar33 = *(int *)(iVar42 + piVar19[0x1e02]);
      iVar30 = 0;
      trapWord(5,(ulonglong)uVar38 &
                 ~((((ulonglong)uVar37 & 0x7fffffff) << 1 | (ulonglong)(uVar37 >> 0x1f)) - 1),0xffff
              );
      if (3 < iVar20) {
        iVar27 = 2;
        puVar28 = (undefined4 *)(iVar33 + -4);
        do {
          iVar9 = iVar27 << (uVar22 & 0x3f);
          puVar28[1] = *(undefined4 *)((iVar30 << (uVar22 & 0x3f)) * 4 + iVar6);
          iVar41 = iVar27 + 1;
          iVar30 = iVar30 + 4;
          puVar28[2] = *(undefined4 *)((iVar27 + -1 << (uVar22 & 0x3f)) * 4 + iVar6);
          iVar27 = iVar27 + 4;
          puVar28[3] = *(undefined4 *)(iVar9 * 4 + iVar6);
          puVar28 = puVar28 + 4;
          *puVar28 = *(undefined4 *)((iVar41 << (uVar22 & 0x3f)) * 4 + iVar6);
        } while (iVar30 < iVar20 + -3);
      }
      if (iVar30 < iVar20) {
        iVar20 = iVar20 - iVar30;
        puVar28 = (undefined4 *)(iVar30 * 4 + iVar33 + -4);
        do {
          iVar33 = iVar30 << (uVar22 & 0x3f);
          iVar30 = iVar30 + 1;
          puVar28 = puVar28 + 1;
          *puVar28 = *(undefined4 *)(iVar33 * 4 + iVar6);
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
      }
      uVar22 = uVar22 + 1;
      iVar42 = iVar42 + 4;
    } while ((int)uVar22 < *(int *)(iVar5 + 0xf4));
  }
  fVar1 = lbl_821AAD20;
  uVar22 = *puVar39;
  sVar21 = ((short)uVar22 >> 1) + (ushort)((short)uVar22 < 0 && (uVar22 & 1) != 0);
  uVar37 = (uint)sVar21;
  if (*(int *)(iVar5 + 0xf0) <= (int)sVar21) {
    uVar38 = uVar37;
    do {
      uVar24 = 0;
      sVar21 = 0;
      uVar31 = uVar22;
      while (1 < uVar31) {
        uVar24 = uVar24 + 1;
        sVar21 = (short)uVar24;
        uVar31 = uVar22 >> (uVar24 & 0x3f);
      }
      uVar31 = 0;
      sVar34 = 0;
      uVar22 = uVar37;
      while (1 < uVar22) {
        uVar31 = uVar31 + 1;
        sVar34 = (short)uVar31;
        uVar22 = uVar37 >> (uVar31 & 0x3f);
      }
      sVar21 = sVar21 - sVar34;
      iVar33 = 0;
      piVar19[sVar21 + 0x3e56] = (int)lVar40;
      iVar42 = *(int *)(uVar36 + 4);
      uVar22 = *puVar39;
      iVar20 = (iVar42 >> ((int)sVar21 & 0x3fU)) << ((int)sVar21 & 0x3fU);
      if (0 < (int)uVar22) {
        uVar37 = (uint)sVar21;
        iVar30 = 1 << (uVar37 & 0x3f);
        lVar23 = uVar36 + 4;
        iVar27 = iVar6;
        do {
          iVar9 = (((iVar33 >> (uVar37 & 0x3f)) << (uVar37 & 0x3f)) - iVar33) + iVar30;
          while (iVar33 < iVar20) {
            iVar41 = 0;
            fVar3 = fVar1;
            fVar4 = fVar1;
            if (1 < iVar9) {
              pfVar25 = (float *)(iVar27 + -4);
              do {
                pfVar32 = pfVar25 + 1;
                iVar41 = iVar41 + 2;
                pfVar25 = pfVar25 + 2;
                fVar4 = *pfVar32 * *pfVar32 + fVar4;
                fVar3 = *pfVar25 * *pfVar25 + fVar3;
              } while (iVar41 < iVar9 + -1);
            }
            fVar2 = fVar1;
            if (iVar41 < iVar9) {
              fVar2 = *(float *)(iVar41 * 4 + iVar27);
              fVar2 = fVar2 * fVar2;
            }
            iVar27 = iVar9 * 4 + iVar27;
            *(float *)lVar40 = fVar3 + fVar4 + fVar2;
            lVar40 = lVar40 + 4;
            iVar33 = iVar9 + iVar33;
            iVar9 = iVar30;
          }
          iVar42 = iVar42 - iVar33;
          iVar20 = 0;
          fVar3 = fVar1;
          fVar4 = fVar1;
          if (1 < iVar42) {
            pfVar25 = (float *)(iVar27 + -4);
            do {
              pfVar32 = pfVar25 + 1;
              iVar20 = iVar20 + 2;
              pfVar25 = pfVar25 + 2;
              fVar4 = *pfVar32 * *pfVar32 + fVar4;
              fVar3 = *pfVar25 * *pfVar25 + fVar3;
            } while (iVar20 < iVar42 + -1);
          }
          fVar2 = fVar1;
          if (iVar20 < iVar42) {
            fVar2 = *(float *)(iVar20 * 4 + iVar27);
            fVar2 = fVar2 * fVar2;
          }
          iVar33 = iVar42 + iVar33;
          iVar27 = iVar42 * 4 + iVar27;
          *(float *)lVar40 = fVar3 + fVar4 + fVar2;
          uVar22 = *puVar39;
          lVar40 = lVar40 + 4;
          lVar23 = lVar23 + 4;
          iVar42 = *(int *)lVar23;
          iVar20 = (iVar42 >> (uVar37 & 0x3f)) << ((int)sVar21 & 0x3fU);
        } while (iVar33 < (int)uVar22);
      }
      uVar38 = (int)(short)uVar38 >> 1;
      uVar37 = (uint)(short)uVar38;
    } while (*(int *)(iVar5 + 0xf0) <= (int)(short)uVar38);
  }
  fVar3 = lbl_82002C5C;
  uVar29 = 0;
  if (3 < (int)uVar8) {
    lVar40 = lVar18 + 0x7808;
    lVar23 = uVar36 + 4;
    do {
      piVar10 = (int *)lVar23;
      *(float *)((int)lVar40 + 4) =
           (((float)(longlong)piVar10[-1] + (float)(longlong)*piVar10) *
            (float)(longlong)*(int *)(*piVar19 + 0x50) * fVar3) /
           (float)((double)(longlong)*(int *)(*piVar19 + 0x100) * dVar46);
      *(float *)((int)piVar19 + (0x780c - uVar7) + (int)piVar10) =
           (((float)(longlong)piVar10[1] + (float)(longlong)*piVar10) *
            (float)(longlong)*(int *)(*piVar19 + 0x50) * fVar3) /
           (float)((double)(longlong)*(int *)(*piVar19 + 0x100) * dVar46);
      uVar29 = uVar29 + 4;
      uStack_1b0 = (longlong)*(int *)(*piVar19 + 0x100);
      *(float *)((int)lVar40 + 0xc) =
           (((float)(longlong)piVar10[2] + (float)(longlong)piVar10[1]) *
            (float)(longlong)*(int *)(*piVar19 + 0x50) * fVar3) /
           (float)((double)uStack_1b0 * dVar46);
      lVar23 = lVar23 + 0x10;
      lVar40 = lVar40 + 0x10;
      *(float *)lVar40 =
           (((float)(longlong)piVar10[3] + (float)(longlong)piVar10[2]) *
            (float)(longlong)*(int *)(*piVar19 + 0x50) * fVar3) /
           (float)((double)(longlong)*(int *)(*piVar19 + 0x100) * dVar46);
    } while ((int)uVar29 < (int)(uVar8 - 3));
  }
  if ((int)uVar29 < (int)uVar8) {
    lVar40 = uVar35 - uVar29;
    lVar23 = (uVar29 & 0x3fffffff) * 4 + uVar36;
    do {
      piVar10 = (int *)lVar23;
      *(float *)((int)piVar10 + (int)piVar19 + (0x780c - uVar7)) =
           (((float)(longlong)*piVar10 + (float)(longlong)piVar10[1]) *
            (float)(longlong)*(int *)(*piVar19 + 0x50) * fVar3) /
           (float)((double)(longlong)*(int *)(*piVar19 + 0x100) * dVar46);
      lVar23 = lVar23 + 4;
      lVar40 = lVar40 + -1;
    } while (lVar40 != 0);
  }
  if (0 < (int)uVar8) {
    pfVar25 = afStack_1a0;
    uVar29 = uVar35;
    do {
      iVar42 = *(int *)((uVar7 - (int)afStack_1a0) + (int)pfVar25);
      *pfVar25 = fVar1;
      iVar5 = *(int *)((int)pfVar25 + (uVar7 - (int)afStack_1a0) + 4);
      if (iVar42 < iVar5) {
        iVar20 = iVar42;
        if (3 < iVar5 - iVar42) {
          pfVar32 = (float *)(iVar42 * 4 + iVar6 + -4);
          do {
            pfVar13 = pfVar32 + 1;
            iVar20 = iVar20 + 4;
            pfVar11 = pfVar32 + 2;
            pfVar12 = pfVar32 + 3;
            pfVar32 = pfVar32 + 4;
            *pfVar25 = *pfVar12 * *pfVar12 +
                       *pfVar11 * *pfVar11 + *pfVar13 * *pfVar13 + *pfVar32 * *pfVar32 + *pfVar25;
          } while (iVar20 < iVar5 + -3);
        }
        if (iVar20 < iVar5) {
          iVar33 = iVar5 - iVar20;
          pfVar32 = (float *)(iVar20 * 4 + iVar6 + -4);
          do {
            pfVar32 = pfVar32 + 1;
            *pfVar25 = *pfVar32 * *pfVar32 + *pfVar25;
            iVar33 = iVar33 + -1;
          } while (iVar33 != 0);
        }
      }
      uVar29 = uVar29 - 1;
      *pfVar25 = *pfVar25 / (float)(longlong)(iVar5 - iVar42);
      pfVar25 = pfVar25 + 1;
    } while (uVar29 != 0);
  }
  iVar5 = (int)(lVar18 + 0x787c);
  if (bVar15) {
    uVar36 = 0;
    if (3 < (int)uVar8) {
      pfVar25 = (float *)((int)&uStack_1b0 + 4);
      lVar40 = lVar18 + 0x7884;
      do {
        pfVar32 = pfVar25 + 3;
        uVar36 = uVar36 + 4;
        pfVar13 = (float *)lVar40;
        fVar3 = *(float *)(((int)afStack_1a0 - iVar5) + (int)pfVar13);
        fVar4 = *(float *)((int)afStack_1a0 + (4 - iVar5) + (int)pfVar13);
        pfVar25 = pfVar25 + 4;
        fVar1 = *pfVar25;
        pfVar13[-2] = (float)(dVar45 / (double)*pfVar32);
        pfVar13[-1] = (float)(dVar45 / (double)fVar1);
        *pfVar13 = (float)(dVar45 / (double)fVar3);
        pfVar13[1] = (float)(dVar45 / (double)fVar4);
        lVar40 = lVar40 + 0x10;
      } while ((int)uVar36 < (int)(uVar8 - 3));
    }
    if ((int)uVar36 < (int)uVar8) {
      lVar40 = uVar35 - uVar36;
      lVar23 = (uVar36 & 0x3fffffff) * 4 + lVar18 + 0x787c;
      do {
        *(float *)lVar23 =
             (float)(dVar45 / (double)*(float *)((int)(float *)lVar23 + ((int)afStack_1a0 - iVar5)))
        ;
        lVar23 = lVar23 + 4;
        lVar40 = lVar40 + -1;
      } while (lVar40 != 0);
    }
  }
  else if (0 < (int)uVar8) {
    do {
      piVar19 = (int *)uVar36;
      iVar42 = *piVar19;
      iVar20 = piVar19[1];
      fVar3 = fVar1;
      if (iVar42 < iVar20) {
        fVar4 = fVar1;
        fVar2 = fVar1;
        iVar33 = iVar42;
        if (1 < iVar20 - iVar42) {
          pfVar25 = (float *)(iVar42 * 4 + iVar6 + -4);
          do {
            pfVar32 = pfVar25 + 1;
            iVar33 = iVar33 + 2;
            pfVar25 = pfVar25 + 2;
            fVar2 = fVar2 + *pfVar32;
            fVar4 = fVar4 + *pfVar25;
          } while (iVar33 < iVar20 + -1);
        }
        if (iVar33 < iVar20) {
          fVar3 = *(float *)(iVar33 * 4 + iVar6);
        }
        fVar3 = fVar4 + fVar2 + fVar3;
      }
      fVar3 = fVar3 / (float)(longlong)(iVar20 - iVar42);
      fVar3 = fVar3 * fVar3;
      *(float *)((iVar5 - uVar7) + (int)piVar19) = (float)(dVar45 / (double)(fVar3 * fVar3));
      uVar36 = uVar36 + 4;
      uVar35 = uVar35 - 1;
    } while (uVar35 != 0);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(lVar18 + 0x78ec,0,0x70);
}

