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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define NAN(x) ((x) != (x))
extern int fn_822ABA88();
extern int fn_82539560();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CD218;
extern unsigned int lbl_831CD2C4;
extern unsigned int lbl_831CD2C8;
extern unsigned int lbl_83260000;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_30;


double fn_822F16F0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_r0;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uStack_30;
  
  iVar9 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar9 + 0x178) == 1) {
    dVar15 = (double)lbl_821CC160;
  }
  else if (*(int *)(iVar9 + 0x178) == 2) {
    dVar16 = (double)lbl_821CC160;
    if (*(int *)(*(int *)(iVar9 + 0x2e0) + 0x68) == 0) {
      *(float *)(param_1 + 0x2c) = lbl_821CC160;
    }
    puVar11 = &lbl_83260000;
    iVar12 = 0x19660d;
    iVar13 = 0x3c6ef35f;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar9 = *(int *)(param_1 + 0xc);
    puVar14 = &lbl_831CD218;
    dVar17 = (double)lbl_821CA460;
    uStack_30 = CONCAT44(lbl_83265A28,(((U64)(uStack_30) >> 32) & 0xFFFFFFFF)) & 0x7fffffffffffff | 0x3f80000000000000;
    iVar8 = *(int *)(*(int *)(iVar9 + 0x1bc) + 0x2d8);
    fVar1 = *(float *)(iVar8 + 0x174);
    uVar10 = lbl_83265A28;
    dVar15 = (double)fn_82539560((double)(*(float *)(*(int *)(*(int *)(iVar9 + 0x1bc) + 0x2e0) +
                                                     0x94) + *(float *)(iVar8 + 0x170)),
                                  (double)(fVar1 * lbl_831CD2C4),(double)(fVar1 * lbl_831CD2C8));
    iVar8 = *(int *)(*(int *)(iVar9 + 0x1bc) + 0x2d8);
    fVar1 = *(float *)(iVar8 + 0x174);
    dVar18 = (double)(float)(dVar15 * (double)(float)((double)*(float *)(puVar14 + 0xa8) -
                                                     (double)*(float *)(puVar14 + 0xa4)) +
                            (double)*(float *)(puVar14 + 0xa4));
    dVar15 = (double)fn_82539560((double)(*(float *)(*(int *)(*(int *)(iVar9 + 0x1bc) + 0x2e0) +
                                                     0x94) + *(float *)(iVar8 + 0x170)),
                                  (double)(fVar1 * *(float *)(puVar14 + 0x9c)),
                                  (double)(fVar1 * *(float *)(puVar14 + 0xa0)));
    dVar20 = (double)(((U64)(uStack_30) >> 0) & 0xFFFFFFFF);
    iVar9 = uVar10 * iVar12 + iVar13;
    dVar21 = (double)(float)(dVar15 * (double)(float)((double)*(float *)(puVar14 + 0x98) -
                                                     (double)*(float *)(puVar14 + 0x94)) +
                            (double)*(float *)(puVar14 + 0x94));
    *(int *)(puVar11 + 0x5a28) = iVar9;
    uStack_30 = CONCAT44(iVar9,(((U64)(uStack_30) >> 32) & 0xFFFFFFFF)) & 0x7fffffffffffff | 0x3f80000000000000;
    dVar20 = (double)(float)((double)(float)(dVar20 - dVar17) * (double)lbl_821916FC - dVar17);
    dVar19 = (double)lbl_82192734;
    dVar15 = dVar17;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar20 < dVar16) << 2) | (uint)(NAN(dVar20) || NAN(dVar16)) << 2))
        < 0.0) {
      dVar15 = dVar19;
    }
    dVar15 = (double)(float)((double)(float)((double)(float)(dVar18 - dVar21) *
                                             (double)(float)((double)(((U64)(uStack_30) >> 0) & 0xFFFFFFFF) - dVar17) +
                                            dVar21) * dVar15);
    dVar20 = dVar17;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar15 < dVar16) << 2) | (uint)(NAN(dVar15) || NAN(dVar16)) << 2))
        < 0.0) {
      dVar20 = dVar19;
    }
    dVar18 = dVar17;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)*(float *)(param_1 + 0x2c) < dVar16) << 2) |
                  (uint)(NAN((double)*(float *)(param_1 + 0x2c)) || NAN(dVar16)) << 2)) < 0.0) {
      dVar18 = dVar19;
    }
    if (dVar20 == dVar18) {
      iVar8 = *(int *)(*(int *)(param_1 + 0xc) + 0x1bc);
      iVar3 = *(int *)(iVar8 + 0x2d8);
      fVar1 = *(float *)(iVar3 + 0x174);
      dVar16 = (double)fn_82539560((double)(*(float *)(*(int *)(iVar8 + 0x2e0) + 0x94) +
                                            *(float *)(iVar3 + 0x170)),
                                    (double)(fVar1 * *(float *)(puVar14 + 0xbc)),
                                    (double)(fVar1 * *(float *)(puVar14 + 0xc0)));
      fVar1 = *(float *)(puVar14 + 0xb4);
      fVar2 = *(float *)(puVar14 + 0xb8);
      uVar10 = iVar9 * iVar12 + iVar13;
      *(uint *)(puVar11 + 0x5a28) = uVar10;
      if ((float)((double)(float)(uVar10 & 0x7fffff | 0x3f800000) - dVar17) <=
          (float)((double)(float)((double)fVar2 - (double)fVar1) * dVar16 + (double)fVar1)) {
        dVar15 = (double)(float)(dVar15 * dVar19);
      }
    }
    *(float *)(param_1 + 0x2c) = (float)dVar15;
  }
  else {
    piVar4 = *(int **)(((uint)((ulonglong)LZCOUNT(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2c))
                              >> 3) & 4) + **(int **)(iVar9 + 8));
    uVar7 = (**(code **)(**(int **)(iVar9 + 0x2e0) + 0x1c))();
    iVar8 = fn_822ABA88(*(undefined4 *)(piVar4[4] * 4 + *piVar4),uVar7);
    iVar9 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
    puVar5 = (undefined4 *)(iVar8 + 0x80U & 0xfffffff0);
    uVar22 = puVar5[1];
    uVar23 = puVar5[2];
    uVar24 = puVar5[3];
    puVar6 = (undefined4 *)((int)&uStack_30 + in_r0 & 0xfffffff0);
    *puVar6 = *puVar5;
    puVar6[1] = uVar22;
    puVar6[2] = uVar23;
    puVar6[3] = uVar24;
    uVar10 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = lbl_821CA460;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((((U64)(uStack_30) >> 0) & 0xFFFFFFFF) < lbl_821CC160) << 2) |
                  (uint)(NAN((((U64)(uStack_30) >> 0) & 0xFFFFFFFF)) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar1 = lbl_82192734;
    }
    fVar1 = -fVar1;
    if ((int)(((float)(uVar10 & 0x7fffff | 0x3f800000) - lbl_821CA460) * (float)(longlong)iVar9) ==
        0) {
      fVar1 = fVar1 * lbl_82192734;
    }
    iVar9 = *(int *)(*(int *)(param_1 + 0x10) + 0x844);
    iVar8 = *(int *)(*(int *)(param_1 + 0x10) + 0x83c);
    lbl_83265A28 = uVar10 * 0x19660d + 0x3c6ef35f;
    fVar2 = *(float *)((iVar9 + 0x2d) * 4 + iVar8);
    dVar15 = (double)(((*(float *)((iVar9 + 0x32) * 4 + iVar8) - fVar2) *
                       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar2) *
                     fVar1);
  }
  return dVar15;
}

