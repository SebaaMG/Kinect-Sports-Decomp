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
extern unsigned int *auStack_2b0;
extern unsigned int *auStack_2f0;
extern unsigned int *auStack_370;
extern unsigned int lbl_821954C8;
extern unsigned int lbl_82195520;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_374;


void fn_82654798(int param_1,int param_2,ulonglong param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  int *piVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 *puVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  double dVar23;
  undefined4 uStack_374;
  uint auStack_370 [10];
  longlong lStack_348;
  longlong lStack_340;
  longlong lStack_338;
  longlong lStack_330;
  longlong lStack_328;
  longlong lStack_320;
  int aiStack_310 [8];
  undefined4 auStack_2f0 [4];
  float afStack_2e0 [12];
  undefined4 auStack_2b0 [172];
  
  fVar8 = lbl_821CC160;
  dVar7 = lbl_82195520;
  fVar6 = lbl_821954C8;
  iVar9 = (int)param_3;
  iVar13 = 0;
  if (iVar9 << 4 != 0) {
    puVar19 = auStack_2b0;
    do {
      iVar13 = iVar13 + 1;
      *puVar19 = *(undefined4 *)((param_1 - (int)auStack_2b0) + (int)puVar19);
      puVar19 = puVar19 + 1;
    } while (iVar13 < iVar9 << 4);
  }
  if ((0 < iVar9) && (puVar19 = &uStack_374, uVar22 = param_3, iVar9 != 0)) {
    do {
      puVar19 = puVar19 + 1;
      *puVar19 = 0xffffffff;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  uVar14 = iVar9 - 1;
  auStack_370[(iVar9 >> 1) + (uint)(iVar9 < 0 && (param_3 & 1) != 0)] = 0;
  auStack_370[((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0)] = 0;
  if (iVar9 != 2) {
    uVar17 = iVar9 + 2;
    uVar14 = iVar9 - 3;
    auStack_370[((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0)] = 1;
    auStack_370[((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0)] = 1;
  }
  if (0 < iVar9) {
    puVar18 = auStack_370;
    uVar22 = param_3;
    do {
      if (*puVar18 == 0xffffffff) {
        *puVar18 = 2;
      }
      puVar18 = puVar18 + 1;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  lVar21 = 0x10;
  iVar13 = param_2;
  do {
    lVar10 = 0x200;
    if (iVar9 < 1) {
LAB_82654980:
      do {
        iVar11 = 0;
        iVar12 = 0;
        if (0 < iVar9) {
          iVar20 = 0;
          uVar22 = param_3;
          fVar2 = fVar6;
          do {
            fVar3 = fVar6;
            if (fVar8 < ABS(*(float *)((int)afStack_2e0 + iVar20))) {
              lStack_328 = (longlong)*(int *)((int)aiStack_310 + iVar20);
              lStack_330 = (longlong)(1 << (*(int *)((int)auStack_370 + iVar20) + 7U & 0x3f));
              fVar3 = (float)lStack_330 * *(float *)((int)afStack_2e0 + iVar20);
              fVar3 = ABS(((float)(longlong)*(int *)((int)aiStack_310 + iVar20) - fVar3) / fVar3);
            }
            if (((*(int *)((int)aiStack_310 + iVar20) < 0xff) &&
                (4 >> (*(uint *)((int)auStack_370 + iVar20) & 0x3f) <= (int)lVar10)) &&
               (fVar3 < fVar2)) {
              fVar2 = fVar3;
              iVar11 = iVar12;
            }
            iVar12 = iVar12 + 1;
            iVar20 = iVar20 + 4;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        lVar10 = lVar10 - (4 >> (auStack_370[iVar11] & 0x3f));
        aiStack_310[iVar11] = aiStack_310[iVar11] + 1;
      } while (0 < lVar10);
      iVar11 = (int)lVar10;
    }
    else {
      puVar15 = auStack_2f0 + 3;
      puVar19 = (undefined4 *)((int)auStack_2f0 + (iVar13 - param_2));
      uVar22 = param_3;
      do {
        puVar19 = puVar19 + 0x10;
        puVar15 = puVar15 + 1;
        *puVar15 = *puVar19;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
      iVar11 = 0;
      uVar22 = param_3;
      do {
        fVar2 = *(float *)((int)afStack_2e0 + iVar11);
        lStack_338 = (longlong)(1 << (*(int *)((int)auStack_370 + iVar11) + 7U & 0x3f));
        if (fVar2 <= fVar8) {
          dVar23 = (double)((float)lStack_338 * fVar2) - dVar7;
        }
        else {
          lStack_320 = lStack_338;
          dVar23 = (double)((float)lStack_338 * fVar2) + dVar7;
        }
        *(int *)((int)aiStack_310 + iVar11) = (int)dVar23;
        lVar10 = lVar10 - (ulonglong)
                          (uint)((int)dVar23 << (2U - *(int *)((int)auStack_370 + iVar11) & 0x3f));
        iVar11 = iVar11 + 4;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
      iVar11 = (int)lVar10;
      if (0 < iVar11) goto LAB_82654980;
    }
    if (iVar11 < 0) {
      do {
        iVar11 = 0;
        iVar12 = 0;
        if (0 < iVar9) {
          iVar20 = 0;
          uVar22 = param_3;
          fVar2 = fVar6;
          do {
            fVar3 = fVar6;
            if (fVar8 < ABS(*(float *)((int)afStack_2e0 + iVar20))) {
              lStack_340 = (longlong)(*(int *)((int)aiStack_310 + iVar20) + -1);
              lStack_348 = (longlong)(1 << (*(int *)((int)auStack_370 + iVar20) + 7U & 0x3f));
              fVar3 = (float)lStack_348 * *(float *)((int)afStack_2e0 + iVar20);
              fVar3 = ABS(((float)lStack_340 - fVar3) / fVar3);
            }
            uVar14 = *(uint *)((int)auStack_370 + iVar20);
            if ((int)lVar10 <= -(4 >> (uVar14 & 0x3f))) {
              bVar1 = 0 < (int)uVar14;
              if (uVar14 == 0) {
                if (*(int *)((int)aiStack_310 + iVar20) < 1) {
                  bVar1 = false;
                  goto LAB_82654b34;
                }
              }
              else {
LAB_82654b34:
                if ((!bVar1) || (*(int *)((int)aiStack_310 + iVar20) < -0xff)) goto LAB_82654b58;
              }
              if (fVar3 < fVar2) {
                fVar2 = fVar3;
                iVar11 = iVar12;
              }
            }
LAB_82654b58:
            iVar12 = iVar12 + 1;
            iVar20 = iVar20 + 4;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        lVar10 = (4 >> (auStack_370[iVar11] & 0x3f)) + lVar10;
        aiStack_310[iVar11] = aiStack_310[iVar11] + -1;
      } while (lVar10 < 0);
    }
    if (0 < iVar9) {
      piVar16 = (int *)(iVar13 + -0x40);
      iVar11 = 0;
      uVar22 = param_3;
      do {
        piVar4 = (int *)((int)auStack_370 + iVar11);
        piVar5 = (int *)((int)aiStack_310 + iVar11);
        iVar11 = iVar11 + 4;
        piVar16 = piVar16 + 0x10;
        *piVar16 = *piVar5 << (2U - *piVar4 & 0x3f);
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    lVar21 = lVar21 + -1;
    iVar13 = iVar13 + 4;
    if (lVar21 == 0) {
      return;
    }
  } while( true );
}

