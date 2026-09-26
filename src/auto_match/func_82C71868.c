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


undefined8 fn_82C71868(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar9 = lbl_82005730;
  if ((param_3 <= (double)lbl_821AAD20) || (param_4 <= (double)lbl_821AAD20)) {
    iVar8 = 0;
    if (0 < *(int *)(param_5 + 4)) {
      iVar4 = 0;
      dVar11 = param_1 + lbl_82005730;
      dVar10 = (double)(float)(param_1 + (double)lbl_82002AE0) + lbl_82005730;
      dVar9 = (double)(float)(param_1 - (double)lbl_82002AE0) + lbl_82005730;
      do {
        iVar8 = iVar8 + 1;
        *(int *)(*(int *)(param_5 + 0x14) + iVar4) = (int)dVar10;
        *(int *)(iVar4 + *(int *)(param_5 + 0x18)) = (int)dVar11;
        *(int *)(iVar4 + *(int *)(param_5 + 0x1c)) = (int)dVar9;
        *(int *)(iVar4 + *(int *)(param_5 + 0x20)) = (int)dVar11;
        iVar4 = iVar4 + 4;
      } while (iVar8 < *(int *)(param_5 + 4));
    }
  }
  else {
    dVar14 = (double)(float)(param_2 - (double)(float)(param_4 * (double)lbl_82002C5C));
    dVar12 = (double)(float)((double)(float)(param_3 * (double)lbl_8200533C) + param_1);
    dVar11 = (double)(float)(param_2 - -(double)(float)(param_4 * (double)lbl_82002C5C));
    dVar10 = (double)(longlong)*(int *)(param_5 + 4);
    if (dVar14 <= (double)(longlong)*(int *)(param_5 + 4)) {
      dVar10 = dVar14;
    }
    uVar1 = (uint)dVar10;
    uVar6 = 0;
    dVar10 = (double)lbl_82002AE0;
    if (3 < (int)uVar1) {
      iVar4 = 0;
      iVar8 = (int)((double)(float)(param_1 + dVar10) + lbl_82005730);
      do {
        iVar2 = iVar4 + 0xc;
        uVar6 = uVar6 + 4;
        *(int *)(iVar4 + *(int *)(param_5 + 0x14)) = iVar8;
        iVar7 = iVar4 + *(int *)(param_5 + 0x14);
        iVar4 = iVar4 + 0x10;
        *(int *)(iVar7 + 4) = iVar8;
        *(int *)(iVar2 + *(int *)(param_5 + 0x14) + -4) = iVar8;
        *(int *)(iVar2 + *(int *)(param_5 + 0x14)) = iVar8;
      } while ((int)uVar6 < (int)(uVar1 - 3));
    }
    if ((int)uVar6 < (int)uVar1) {
      lVar3 = uVar1 - uVar6;
      lVar5 = (uVar6 & 0x3fffffff) << 2;
      uVar6 = lVar3 + uVar6;
      do {
        *(int *)((int)lVar5 + *(int *)(param_5 + 0x14)) =
             (int)((double)(float)(param_1 + dVar10) + dVar9);
        lVar5 = lVar5 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    dVar13 = (double)(longlong)*(int *)(param_5 + 4);
    if (param_2 <= (double)(longlong)*(int *)(param_5 + 4)) {
      dVar13 = param_2;
    }
    uVar1 = (uint)dVar13;
    dVar13 = (double)((float)(dVar12 - param_1) / (float)(param_2 - dVar14));
    if ((int)uVar6 < (int)uVar1) {
      if (3 < (int)(uVar1 - (int)uVar6)) {
        lVar5 = uVar6 + 2;
        lVar3 = (uVar6 & 0x3fffffff) << 2;
        do {
          iVar8 = (int)lVar5;
          iVar7 = (int)uVar6;
          iVar4 = (int)lVar3;
          uVar6 = uVar6 + 4;
          lVar5 = lVar5 + 4;
          *(int *)(*(int *)(param_5 + 0x14) + iVar4) =
               (int)((double)(float)((double)(float)((double)(longlong)iVar7 - dVar14) * dVar13 +
                                    param_1) + dVar9);
          lVar3 = lVar3 + 0x10;
          *(int *)(*(int *)(param_5 + 0x14) + iVar4 + 4) =
               (int)((double)(float)((double)(float)((double)(longlong)(iVar8 + -1) - dVar14) *
                                     dVar13 + param_1) + dVar9);
          *(int *)(*(int *)(param_5 + 0x14) + iVar4 + 0xc + -4) =
               (int)((double)(float)((double)(float)((double)(longlong)iVar8 - dVar14) * dVar13 +
                                    param_1) + dVar9);
          *(int *)(*(int *)(param_5 + 0x14) + iVar4 + 0xc) =
               (int)((double)(float)((double)(float)((double)(longlong)(iVar8 + 1) - dVar14) *
                                     dVar13 + param_1) + dVar9);
        } while ((int)uVar6 < (int)(uVar1 - 3));
      }
      if ((int)uVar6 < (int)uVar1) {
        lVar3 = uVar1 - uVar6;
        lVar5 = (uVar6 & 0x3fffffff) << 2;
        do {
          iVar8 = (int)uVar6;
          uVar6 = uVar6 + 1;
          *(int *)(*(int *)(param_5 + 0x14) + (int)lVar5) =
               (int)((double)(float)((double)(float)((double)(longlong)iVar8 - dVar14) * dVar13 +
                                    param_1) + dVar9);
          lVar5 = lVar5 + 4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
    }
    dVar14 = (double)(longlong)*(int *)(param_5 + 4);
    if (dVar11 <= (double)(longlong)*(int *)(param_5 + 4)) {
      dVar14 = dVar11;
    }
    uVar1 = (uint)dVar14;
    dVar11 = (double)((float)(param_1 - dVar12) / (float)(dVar11 - param_2));
    if ((int)uVar6 < (int)uVar1) {
      if (3 < (int)(uVar1 - (int)uVar6)) {
        lVar5 = uVar6 + 2;
        lVar3 = (uVar6 & 0x3fffffff) << 2;
        do {
          iVar7 = (int)uVar6;
          iVar8 = (int)lVar5;
          uVar6 = uVar6 + 4;
          iVar4 = (int)lVar3;
          lVar5 = lVar5 + 4;
          *(int *)(*(int *)(param_5 + 0x14) + iVar4) =
               (int)((double)(float)((double)(float)((double)(longlong)iVar7 - param_2) * dVar11 +
                                    dVar12) + dVar9);
          lVar3 = lVar3 + 0x10;
          *(int *)(*(int *)(param_5 + 0x14) + iVar4 + 4) =
               (int)((double)(float)((double)(float)((double)(longlong)(iVar8 + -1) - param_2) *
                                     dVar11 + dVar12) + dVar9);
          *(int *)(*(int *)(param_5 + 0x14) + iVar4 + 0xc + -4) =
               (int)((double)(float)((double)(float)((double)(longlong)iVar8 - param_2) * dVar11 +
                                    dVar12) + dVar9);
          *(int *)(*(int *)(param_5 + 0x14) + iVar4 + 0xc) =
               (int)((double)(float)((double)(float)((double)(longlong)(iVar8 + 1) - param_2) *
                                     dVar11 + dVar12) + dVar9);
        } while ((int)uVar6 < (int)(uVar1 - 3));
      }
      if ((int)uVar6 < (int)uVar1) {
        lVar3 = uVar1 - uVar6;
        lVar5 = (uVar6 & 0x3fffffff) << 2;
        do {
          iVar8 = (int)uVar6;
          uVar6 = uVar6 + 1;
          *(int *)(*(int *)(param_5 + 0x14) + (int)lVar5) =
               (int)((double)(float)((double)(float)((double)(longlong)iVar8 - param_2) * dVar11 +
                                    dVar12) + dVar9);
          lVar5 = lVar5 + 4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
    }
    iVar8 = *(int *)(param_5 + 4);
    if ((int)uVar6 < iVar8) {
      lVar3 = (uVar6 & 0x3fffffff) << 2;
      do {
        uVar6 = uVar6 + 1;
        *(int *)(*(int *)(param_5 + 0x14) + (int)lVar3) =
             (int)((double)(float)(param_1 + dVar10) + dVar9);
        lVar3 = lVar3 + 4;
        iVar8 = *(int *)(param_5 + 4);
      } while ((int)uVar6 < iVar8);
    }
    iVar4 = 0;
    if (0 < iVar8) {
      iVar7 = 0;
      do {
        iVar4 = iVar4 + 1;
        *(int *)(iVar7 + *(int *)(param_5 + 0x18)) = (int)(param_1 + dVar9);
        iVar7 = iVar7 + 4;
        iVar8 = *(int *)(param_5 + 4);
      } while (iVar4 < iVar8);
    }
    iVar4 = 0;
    if (0 < iVar8) {
      iVar8 = 0;
      dVar10 = (double)lbl_82005344;
      do {
        iVar4 = iVar4 + 1;
        *(int *)(iVar8 + *(int *)(param_5 + 0x1c)) =
             (int)((double)((float)(param_1 * dVar10) -
                           (float)(longlong)*(int *)(*(int *)(param_5 + 0x14) + iVar8)) + dVar9);
        *(int *)(iVar8 + *(int *)(param_5 + 0x20)) =
             (int)((double)((float)(param_1 * dVar10) -
                           (float)(longlong)*(int *)(iVar8 + *(int *)(param_5 + 0x18))) + dVar9);
        iVar8 = iVar8 + 4;
      } while (iVar4 < *(int *)(param_5 + 4));
    }
  }
  return 0;
}

