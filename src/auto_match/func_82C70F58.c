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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200533C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005730;
extern unsigned int lbl_821AAD20;


undefined8 fn_82C70F58(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  int iVar7;
  longlong lVar6;
  int iVar8;
  int iVar10;
  longlong lVar9;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar16 = lbl_82005730;
  if ((param_3 <= (double)lbl_821AAD20) || (param_4 <= (double)lbl_821AAD20)) {
    iVar13 = 0;
    if (0 < *(int *)(param_5 + 4)) {
      iVar10 = 0;
      dVar17 = param_1 + lbl_82005730;
      dVar15 = (double)(float)(param_1 + (double)lbl_82002AE0) + lbl_82005730;
      dVar16 = (double)(float)(param_1 - (double)lbl_82002AE0) + lbl_82005730;
      do {
        iVar13 = iVar13 + 1;
        *(int *)(*(int *)(param_5 + 0x14) + iVar10) = (int)dVar15;
        *(int *)(*(int *)(param_5 + 0x18) + iVar10) = (int)dVar17;
        *(int *)(iVar10 + *(int *)(param_5 + 0x1c)) = (int)dVar16;
        *(int *)(*(int *)(param_5 + 0x20) + iVar10) = (int)dVar17;
        iVar10 = iVar10 + 4;
      } while (iVar13 < *(int *)(param_5 + 4));
    }
  }
  else {
    uVar3 = *(uint *)(param_5 + 4);
    dVar17 = (double)((float)(longlong)(int)uVar3 * lbl_82002C5C);
    dVar18 = (double)(float)((double)(float)(param_3 * (double)lbl_8200533C) + param_1);
    dVar19 = (double)(float)(param_2 - dVar17);
    dVar15 = (double)(float)(param_2 - (double)(float)(dVar17 - param_4));
    fVar1 = (float)(param_2 - -dVar17);
    fVar2 = (float)(param_2 - -(double)(float)(dVar17 - param_4));
    if (dVar15 <= param_2) {
      param_2 = dVar15;
    }
    uVar4 = (int)param_2;
    if ((int)uVar3 < (int)param_2) {
      uVar4 = uVar3;
    }
    uVar11 = 0;
    dVar15 = (double)((float)(param_1 - dVar18) / (float)(dVar15 - dVar19));
    if (3 < (int)uVar4) {
      iVar10 = 2;
      iVar13 = 0;
      do {
        iVar7 = iVar10 + -1;
        iVar14 = iVar10 + 1;
        lVar6 = (longlong)iVar10;
        iVar12 = (int)uVar11;
        iVar8 = iVar13 + 0xc;
        uVar11 = uVar11 + 4;
        iVar10 = iVar10 + 4;
        *(int *)(*(int *)(param_5 + 0x14) + iVar13) =
             (int)((double)(float)((double)(float)((double)(longlong)iVar12 - dVar19) * dVar15 +
                                  dVar18) + dVar16);
        iVar12 = *(int *)(param_5 + 0x14) + iVar13;
        iVar13 = iVar13 + 0x10;
        *(int *)(iVar12 + 4) =
             (int)((double)(float)((double)(float)((double)(longlong)iVar7 - dVar19) * dVar15 +
                                  dVar18) + dVar16);
        *(int *)(*(int *)(param_5 + 0x14) + iVar8 + -4) =
             (int)((double)(float)((double)(float)((double)lVar6 - dVar19) * dVar15 + dVar18) +
                  dVar16);
        *(int *)(*(int *)(param_5 + 0x14) + iVar8) =
             (int)((double)(float)((double)(float)((double)(longlong)iVar14 - dVar19) * dVar15 +
                                  dVar18) + dVar16);
      } while ((int)uVar11 < (int)(uVar4 - 3));
    }
    if ((int)uVar11 < (int)uVar4) {
      lVar6 = uVar4 - uVar11;
      lVar9 = (uVar11 & 0x3fffffff) << 2;
      do {
        iVar13 = (int)uVar11;
        uVar11 = uVar11 + 1;
        *(int *)(*(int *)(param_5 + 0x14) + (int)lVar9) =
             (int)((double)(float)((double)(float)((double)(longlong)iVar13 - dVar19) * dVar15 +
                                  dVar18) + dVar16);
        lVar9 = lVar9 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    fVar5 = (float)(longlong)*(int *)(param_5 + 4);
    if (fVar2 <= (float)(longlong)*(int *)(param_5 + 4)) {
      fVar5 = fVar2;
    }
    uVar3 = (uint)fVar5;
    if ((int)uVar11 < (int)uVar3) {
      dVar15 = (double)lbl_82002AE0;
      if (3 < (int)(uVar3 - (int)uVar11)) {
        lVar6 = (uVar11 & 0x3fffffff) << 2;
        iVar13 = (int)((double)(float)(param_1 + dVar15) + dVar16);
        do {
          iVar10 = (int)lVar6;
          uVar11 = uVar11 + 4;
          *(int *)(*(int *)(param_5 + 0x14) + iVar10) = iVar13;
          lVar6 = lVar6 + 0x10;
          *(int *)(*(int *)(param_5 + 0x14) + iVar10 + 4) = iVar13;
          *(int *)(*(int *)(param_5 + 0x14) + iVar10 + 0xc + -4) = iVar13;
          *(int *)(*(int *)(param_5 + 0x14) + iVar10 + 0xc) = iVar13;
        } while ((int)uVar11 < (int)(uVar3 - 3));
      }
      if ((int)uVar11 < (int)uVar3) {
        lVar6 = uVar3 - uVar11;
        lVar9 = (uVar11 & 0x3fffffff) << 2;
        uVar11 = lVar6 + uVar11;
        do {
          *(int *)(*(int *)(param_5 + 0x14) + (int)lVar9) =
               (int)((double)(float)(param_1 + dVar15) + dVar16);
          lVar9 = lVar9 + 4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    fVar5 = (float)(longlong)*(int *)(param_5 + 4);
    if (fVar1 <= (float)(longlong)*(int *)(param_5 + 4)) {
      fVar5 = fVar1;
    }
    uVar3 = (uint)fVar5;
    dVar15 = (double)((float)(dVar18 - param_1) / (fVar1 - fVar2));
    if ((int)uVar11 < (int)uVar3) {
      if (3 < (int)(uVar3 - (int)uVar11)) {
        lVar9 = uVar11 + 2;
        lVar6 = (uVar11 & 0x3fffffff) << 2;
        do {
          iVar13 = (int)lVar9;
          iVar12 = (int)uVar11;
          iVar10 = (int)lVar6;
          uVar11 = uVar11 + 4;
          lVar9 = lVar9 + 4;
          *(int *)(*(int *)(param_5 + 0x14) + iVar10) =
               (int)((double)(float)((double)((float)(longlong)iVar12 - fVar2) * dVar15 + param_1) +
                    dVar16);
          lVar6 = lVar6 + 0x10;
          *(int *)(*(int *)(param_5 + 0x14) + iVar10 + 4) =
               (int)((double)(float)((double)((float)(longlong)(iVar13 + -1) - fVar2) * dVar15 +
                                    param_1) + dVar16);
          *(int *)(*(int *)(param_5 + 0x14) + iVar10 + 0xc + -4) =
               (int)((double)(float)((double)((float)(longlong)iVar13 - fVar2) * dVar15 + param_1) +
                    dVar16);
          *(int *)(*(int *)(param_5 + 0x14) + iVar10 + 0xc) =
               (int)((double)(float)((double)((float)(longlong)(iVar13 + 1) - fVar2) * dVar15 +
                                    param_1) + dVar16);
        } while ((int)uVar11 < (int)(uVar3 - 3));
      }
      if ((int)uVar11 < (int)uVar3) {
        lVar6 = uVar3 - uVar11;
        lVar9 = (uVar11 & 0x3fffffff) << 2;
        do {
          iVar13 = (int)uVar11;
          uVar11 = uVar11 + 1;
          *(int *)(*(int *)(param_5 + 0x14) + (int)lVar9) =
               (int)((double)(float)((double)((float)(longlong)iVar13 - fVar2) * dVar15 + param_1) +
                    dVar16);
          lVar9 = lVar9 + 4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    iVar13 = *(int *)(param_5 + 4);
    iVar10 = 0;
    if (0 < iVar13) {
      iVar12 = 0;
      do {
        iVar10 = iVar10 + 1;
        *(int *)(*(int *)(param_5 + 0x18) + iVar12) = (int)(param_1 + dVar16);
        iVar12 = iVar12 + 4;
        iVar13 = *(int *)(param_5 + 4);
      } while (iVar10 < iVar13);
    }
    iVar10 = 0;
    if (0 < iVar13) {
      iVar13 = 0;
      dVar15 = (double)lbl_82005344;
      do {
        iVar10 = iVar10 + 1;
        *(int *)(iVar13 + *(int *)(param_5 + 0x1c)) =
             (int)((double)((float)(param_1 * dVar15) -
                           (float)(longlong)*(int *)(*(int *)(param_5 + 0x14) + iVar13)) + dVar16);
        *(int *)(*(int *)(param_5 + 0x20) + iVar13) =
             (int)((double)((float)(param_1 * dVar15) -
                           (float)(longlong)*(int *)(*(int *)(param_5 + 0x18) + iVar13)) + dVar16);
        iVar13 = iVar13 + 4;
      } while (iVar10 < *(int *)(param_5 + 4));
    }
  }
  return 0;
}

