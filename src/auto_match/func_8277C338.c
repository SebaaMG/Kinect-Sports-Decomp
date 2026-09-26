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
extern unsigned int *auStack_20;
extern unsigned int lbl_821AAD20;


undefined8 fn_8277C338(int param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  float *pfVar8;
  ulonglong uVar9;
  float *pfVar10;
  undefined4 uVar11;
  uint uVar12;
  float *pfVar13;
  undefined4 auStack_20 [6];
  
  fVar6 = lbl_821AAD20;
  iVar3 = *(int *)(param_1 + 0x110);
  uVar9 = (param_2 & 0xffffffff) >> 0x1e & 1;
  pfVar8 = (float *)(*(int *)((((uint)param_2 & 0xbfffffff) >> 8 & 0xfffffc) + iVar3) +
                    ((uint)param_2 & 0x3ff) * 8);
  if (uVar9 == 0) {
    uVar12 = *(uint *)(param_1 + 0x1a4);
    if (uVar12 < 2) {
      return 1;
    }
    uVar7 = *(uint *)(*(int *)((uVar12 - 2 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                     ((uVar12 - 2) * 4 & 0x3fc));
    uVar12 = *(uint *)(*(int *)((uVar12 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                      ((uVar12 - 1) * 4 & 0x3fc));
    iVar5 = (uVar12 & 0x3ff) * 8;
    iVar4 = *(int *)((uVar12 >> 8 & 0xfffffc) + iVar3);
    pfVar10 = (float *)(*(int *)((uVar7 >> 8 & 0xfffffc) + iVar3) + (uVar7 & 0x3ff) * 8);
    fVar2 = *(float *)(iVar4 + iVar5);
    fVar1 = *(float *)(iVar4 + iVar5 + 4);
    fVar1 = (fVar1 - pfVar10[1]) * (*pfVar8 - fVar2) - (fVar2 - *pfVar10) * (pfVar8[1] - fVar1);
    if (fVar1 == lbl_821AAD20) {
      return 1;
    }
    iVar4 = *(int *)(param_1 + 0x1d0);
    if (iVar4 == 0) {
      uVar11 = 3;
      if (lbl_821AAD20 <= fVar1) {
        uVar11 = 4;
      }
      *(undefined4 *)(param_1 + 0x1d0) = uVar11;
      goto LAB_8277c508;
    }
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x194);
    if (uVar12 < 2) {
      return 1;
    }
    uVar7 = *(uint *)(*(int *)((uVar12 - 2 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                     ((uVar12 - 2) * 4 & 0x3fc));
    uVar12 = *(uint *)(*(int *)((uVar12 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                      ((uVar12 - 1) * 4 & 0x3fc));
    iVar5 = (uVar12 & 0x3ff) * 8;
    iVar4 = *(int *)((uVar12 >> 8 & 0xfffffc) + iVar3);
    pfVar10 = (float *)(*(int *)((uVar7 >> 8 & 0xfffffc) + iVar3) + (uVar7 & 0x3ff) * 8);
    fVar2 = *(float *)(iVar4 + iVar5);
    fVar1 = *(float *)(iVar4 + iVar5 + 4);
    fVar1 = (fVar1 - pfVar10[1]) * (*pfVar8 - fVar2) - (pfVar8[1] - fVar1) * (fVar2 - *pfVar10);
    if (fVar1 == lbl_821AAD20) {
      return 1;
    }
    iVar4 = *(int *)(param_1 + 0x1cc);
    if (iVar4 == 0) {
      uVar11 = 3;
      if (lbl_821AAD20 <= fVar1) {
        uVar11 = 4;
      }
      *(undefined4 *)(param_1 + 0x1cc) = uVar11;
      goto LAB_8277c508;
    }
  }
  if ((uint)LZCOUNT(iVar4 + -3) >> 5 != (uint)(fVar1 < lbl_821AAD20)) {
    return 0;
  }
LAB_8277c508:
  if (((*(int *)(param_1 + 0x1c8) == 0) && (*(int *)(param_1 + 0x1cc) != 0)) &&
     (*(int *)(param_1 + 0x1d0) != 0)) {
    auStack_20[0] = 3;
    auStack_20[2] = 2;
    auStack_20[1] = 1;
    auStack_20[3] = 4;
    *(undefined4 *)(param_1 + 0x1c8) =
         *(undefined4 *)
          ((int)auStack_20 +
          (int)(((ulonglong)LZCOUNT(*(int *)(param_1 + 0x1cc) + -4) >> 4 & 2 |
                (ulonglong)(*(int *)(param_1 + 0x1d0) == 4)) << 2));
  }
  iVar4 = *(int *)(param_1 + 0x1c8);
  if (iVar4 == 2) {
    if (uVar9 == 0) {
      uVar12 = *(int *)(param_1 + 0x194) - 2;
      uVar7 = *(int *)(param_1 + 0x194) - 1;
      uVar12 = *(uint *)(*(int *)((uVar12 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                        (uVar12 * 4 & 0x3fc));
      uVar7 = *(uint *)(*(int *)((uVar7 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                       (uVar7 * 4 & 0x3fc));
      iVar5 = (uVar7 & 0x3ff) * 8;
      iVar4 = *(int *)((uVar7 >> 8 & 0xfffffc) + iVar3);
      pfVar10 = (float *)(*(int *)((uVar12 >> 8 & 0xfffffc) + iVar3) + (uVar12 & 0x3ff) * 8);
      fVar2 = *(float *)(iVar4 + iVar5);
      fVar1 = *(float *)(iVar4 + iVar5 + 4);
      if (fVar6 <= (fVar1 - pfVar10[1]) * (*pfVar8 - fVar2) -
                   (pfVar8[1] - fVar1) * (fVar2 - *pfVar10)) {
        return 1;
      }
      return 0;
    }
    uVar12 = *(int *)(param_1 + 0x1a4) - 2;
    uVar7 = *(int *)(param_1 + 0x1a4) - 1;
    uVar12 = *(uint *)(*(int *)((uVar12 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                      (uVar12 * 4 & 0x3fc));
    uVar7 = *(uint *)(*(int *)((uVar7 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                     (uVar7 * 4 & 0x3fc));
    iVar5 = (uVar7 & 0x3ff) * 8;
    iVar4 = *(int *)((uVar7 >> 8 & 0xfffffc) + iVar3);
    pfVar10 = (float *)(*(int *)((uVar12 >> 8 & 0xfffffc) + iVar3) + (uVar12 & 0x3ff) * 8);
    fVar2 = *(float *)(iVar4 + iVar5);
    fVar1 = *(float *)(iVar4 + iVar5 + 4);
    fVar1 = (fVar1 - pfVar10[1]) * (*pfVar8 - fVar2) - (fVar2 - *pfVar10) * (pfVar8[1] - fVar1);
  }
  else {
    if (iVar4 != 3) {
      if (iVar4 != 4) {
        return 1;
      }
      uVar12 = *(int *)(param_1 + 0x194) - 2;
      uVar7 = *(int *)(param_1 + 0x194) - 1;
      uVar12 = *(uint *)(*(int *)((uVar12 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                        (uVar12 * 4 & 0x3fc));
      uVar7 = *(uint *)(*(int *)((uVar7 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                       (uVar7 * 4 & 0x3fc));
      pfVar10 = (float *)(*(int *)((uVar12 >> 8 & 0xfffffc) + iVar3) + (uVar12 & 0x3ff) * 8);
      pfVar13 = (float *)(*(int *)((uVar7 >> 8 & 0xfffffc) + iVar3) + (uVar7 & 0x3ff) * 8);
      if (uVar9 == 0) {
        fVar1 = pfVar13[1];
        fVar2 = *pfVar13;
        if ((fVar1 - pfVar10[1]) * (*pfVar8 - fVar2) - (pfVar8[1] - fVar1) * (fVar2 - *pfVar10) <
            fVar6) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    uVar12 = *(int *)(param_1 + 0x1a4) - 2;
    uVar7 = *(int *)(param_1 + 0x1a4) - 1;
    uVar12 = *(uint *)(*(int *)((uVar12 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                      (uVar12 * 4 & 0x3fc));
    uVar7 = *(uint *)(*(int *)((uVar7 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                     (uVar7 * 4 & 0x3fc));
    pfVar10 = (float *)(*(int *)((uVar12 >> 8 & 0xfffffc) + iVar3) + (uVar12 & 0x3ff) * 8);
    pfVar13 = (float *)(*(int *)((uVar7 >> 8 & 0xfffffc) + iVar3) + (uVar7 & 0x3ff) * 8);
    if (uVar9 == 0) {
      return 1;
    }
    fVar1 = pfVar13[1];
    fVar2 = *pfVar13;
    fVar1 = (fVar1 - pfVar10[1]) * (*pfVar8 - fVar2) - (fVar2 - *pfVar10) * (pfVar8[1] - fVar1);
  }
  if (fVar1 <= fVar6) {
    return 1;
  }
  return 0;
}

