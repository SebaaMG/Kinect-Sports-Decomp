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
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern float lbl_82005718;
extern float lbl_8200571C;
extern unsigned int lbl_8200DC14;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_826F90D8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float *pfVar21;
  bool bVar22;
  
  iVar20 = fn_82F6A540();
  fVar17 = lbl_821AAD20;
  fVar16 = lbl_82005718;
  fVar18 = lbl_82002AE0;
  fVar1 = *(float *)(iVar20 + 200);
  fVar2 = *(float *)(iVar20 + 0xb8);
  pfVar21 = (float *)(iVar20 + 200);
  fVar3 = *(float *)(iVar20 + 0xcc);
  fVar4 = *(float *)(iVar20 + 0xd0);
  fVar5 = *(float *)(iVar20 + 0xd4);
  fVar6 = *(float *)(iVar20 + 0xbc);
  fVar7 = *(float *)(iVar20 + 0xb0);
  fVar8 = *(float *)(iVar20 + 0xb4);
  fVar9 = *(float *)(iVar20 + 0xac);
  if (*(int *)(iVar20 + 0x6c) == 0) {
    *(float *)(iVar20 + 0xbc) = lbl_821AAD20;
    *(float *)(iVar20 + 0xb8) = fVar17;
    *(float *)(iVar20 + 0xb4) = fVar18;
    *(float *)(iVar20 + 0xb0) = fVar18;
    *(float *)(iVar20 + 0xac) = fVar18;
    goto LAB_826f9644;
  }
  uVar10 = *(uint *)(iVar20 + 0xc0);
  iVar11 = *(int *)(*(int *)(*(int *)(*(int *)(iVar20 + 0x6c) + 0x1c) + 0xc) + 0x20);
  fVar12 = *(float *)(iVar11 + 0x38) - *(float *)(iVar11 + 0x30);
  fVar13 = *(float *)(iVar11 + 0x3c) - *(float *)(iVar11 + 0x34);
  fVar14 = (float)(longlong)(*(int *)(iVar20 + 0x88) + *(int *)(iVar20 + 0x80)) * lbl_8200571C -
           (float)(longlong)*(int *)(iVar20 + 0x80) * lbl_8200571C;
  fVar15 = (float)(longlong)(*(int *)(iVar20 + 0x8c) + *(int *)(iVar20 + 0x84)) * lbl_8200571C -
           (float)(longlong)*(int *)(iVar20 + 0x84) * lbl_8200571C;
  if (uVar10 == 0) {
    uVar10 = *(uint *)(iVar20 + 0xc4);
    fVar15 = *(float *)(iVar20 + 0xa0) * fVar15;
    fVar14 = *(float *)(iVar20 + 0xa0) * *(float *)(iVar20 + 0xa4) * fVar14;
    if (uVar10 < 9) {
      if (uVar10 == 1) {
        *(float *)(iVar20 + 0xcc) = lbl_821AAD20;
        fVar12 = fVar12 * lbl_82002C5C - fVar14 * lbl_82002C5C;
      }
      else {
        if (uVar10 != 2) {
          if (uVar10 == 3) {
            *pfVar21 = lbl_821AAD20;
            fVar12 = fVar13 * lbl_82002C5C - fVar15 * lbl_82002C5C;
LAB_826f9584:
            fVar13 = (float)(longlong)((int)(fVar12 * fVar16) * 0x14);
          }
          else {
            if (uVar10 == 4) {
              *pfVar21 = fVar12 - fVar14;
              fVar12 = fVar13 * lbl_82002C5C - fVar15 * lbl_82002C5C;
              goto LAB_826f9584;
            }
            if (uVar10 == 5) {
              *pfVar21 = lbl_821AAD20;
LAB_826f9464:
              *(float *)(iVar20 + 0xcc) = fVar17;
              goto LAB_826f9590;
            }
            if (uVar10 == 6) {
              *pfVar21 = fVar12 - fVar14;
              goto LAB_826f9464;
            }
            if (uVar10 == 7) {
              *pfVar21 = lbl_821AAD20;
              fVar13 = fVar13 - fVar15;
            }
            else if (uVar10 == 0) {
              fVar13 = (float)(longlong)
                              ((int)((fVar13 * lbl_82002C5C - fVar15 * lbl_82002C5C) * lbl_82005718)
                              * 0x14);
              *pfVar21 = (float)(longlong)
                                ((int)((fVar12 * lbl_82002C5C - fVar14 * lbl_82002C5C) *
                                      lbl_82005718) * 0x14);
            }
            else {
              *pfVar21 = fVar12 - fVar14;
              fVar13 = fVar13 - fVar15;
            }
          }
          *(float *)(iVar20 + 0xcc) = fVar13;
          goto LAB_826f9590;
        }
        *(float *)(iVar20 + 0xcc) = fVar13 - fVar15;
        fVar12 = fVar12 * lbl_82002C5C - fVar14 * lbl_82002C5C;
      }
      *pfVar21 = (float)(longlong)((int)(fVar12 * fVar16) * 0x14);
    }
LAB_826f9590:
    *(float *)(iVar20 + 0xd0) = fVar14 + *pfVar21;
    *(float *)(iVar20 + 0xd4) = *(float *)(iVar20 + 0xcc) + fVar15;
    fVar13 = *(float *)(iVar20 + 0xa0) * *(float *)(iVar20 + 0xa4);
    *(float *)(iVar20 + 0xbc) = *(float *)(iVar20 + 0xcc) * fVar16;
    *(float *)(iVar20 + 0xb4) = *(float *)(iVar20 + 0xa0);
    *(float *)(iVar20 + 0xb8) = *pfVar21 * fVar16;
LAB_826f95d0:
    *(float *)(iVar20 + 0xb0) = fVar13;
  }
  else if (uVar10 == 1) {
LAB_826f9208:
    fVar16 = *(float *)(iVar20 + 0xa4) * fVar14;
    if (((uVar10 == 1) && (fVar16 / fVar12 < fVar15 / fVar13)) ||
       ((uVar10 == 3 && (fVar15 / fVar13 < fVar16 / fVar12)))) {
      *pfVar21 = lbl_821AAD20;
      fVar19 = lbl_82005718;
      fVar15 = (fVar12 / fVar16) * fVar15;
      *(float *)(iVar20 + 0xcc) = fVar13 * lbl_82002C5C - fVar15 * lbl_82002C5C;
      *(float *)(iVar20 + 0xd0) = fVar12 + fVar17;
      *(float *)(iVar20 + 0xd4) = *(float *)(iVar20 + 0xcc) + fVar15;
      *(float *)(iVar20 + 0xb8) = fVar17;
      *(float *)(iVar20 + 0xbc) = *(float *)(iVar20 + 0xcc) * fVar19;
      fVar13 = fVar17;
      if (fVar14 != fVar17) {
        fVar13 = fVar12 / fVar14;
      }
      *(float *)(iVar20 + 0xb4) = fVar13 / *(float *)(iVar20 + 0xa4);
      goto LAB_826f95d0;
    }
    fVar14 = lbl_82002AE0 / fVar15;
    bVar22 = fVar15 != lbl_821AAD20;
    *(float *)(iVar20 + 0xcc) = lbl_821AAD20;
    fVar15 = lbl_82005718;
    fVar16 = fVar14 * fVar16 * fVar13;
    fVar12 = fVar12 * lbl_82002C5C - fVar16 * lbl_82002C5C;
    *pfVar21 = fVar12;
    *(float *)(iVar20 + 0xd0) = fVar16 + fVar12;
    *(float *)(iVar20 + 0xd4) = *(float *)(iVar20 + 0xcc) + fVar13;
    *(float *)(iVar20 + 0xbc) = fVar17;
    *(float *)(iVar20 + 0xb8) = *pfVar21 * fVar15;
    fVar16 = fVar17;
    if (bVar22) {
      fVar16 = fVar14 * fVar13;
    }
    *(float *)(iVar20 + 0xb4) = fVar16;
    *(float *)(iVar20 + 0xb0) = *(float *)(iVar20 + 0xa4) * fVar16;
  }
  else if (uVar10 < 3) {
    *(float *)(iVar20 + 0xcc) = lbl_821AAD20;
    *pfVar21 = fVar17;
    *(float *)(iVar20 + 0xd0) = fVar12 + fVar17;
    *(float *)(iVar20 + 0xd4) = *(float *)(iVar20 + 0xcc) + fVar13;
    *(float *)(iVar20 + 0xbc) = fVar17;
    *(float *)(iVar20 + 0xb8) = fVar17;
    fVar16 = fVar17;
    if (fVar14 != fVar17) {
      fVar16 = (*(float *)(iVar20 + 0xd0) - *pfVar21) / fVar14;
    }
    *(float *)(iVar20 + 0xb0) = fVar16;
    fVar16 = fVar17;
    if (fVar15 != fVar17) {
      fVar16 = (*(float *)(iVar20 + 0xd4) - *(float *)(iVar20 + 0xcc)) / fVar15;
    }
    *(float *)(iVar20 + 0xb4) = fVar16;
  }
  else if (uVar10 == 3) goto LAB_826f9208;
  fVar16 = lbl_8200DC14;
  if (*(float *)(iVar20 + 0xb4) != fVar17) {
    fVar16 = fVar18 / *(float *)(iVar20 + 0xb4);
  }
  fVar12 = lbl_8200DC14;
  if (*(float *)(iVar20 + 0xb0) != fVar17) {
    fVar12 = fVar18 / *(float *)(iVar20 + 0xb0);
  }
  if (fVar12 <= fVar16) {
    fVar12 = fVar16;
  }
  *(float *)(iVar20 + 0xac) = fVar12;
LAB_826f9644:
  *(float *)(iVar20 + 0xf0) = -*pfVar21;
  *(float *)(iVar20 + 0xfc) = -*(float *)(iVar20 + 0xcc);
  *(float *)(iVar20 + 0xec) = fVar17;
  *(float *)(iVar20 + 0xf8) = fVar18;
  *(float *)(iVar20 + 0xe8) = fVar18;
  *(float *)(iVar20 + 0xf4) = fVar17;
  fVar17 = (float)(longlong)*(int *)(iVar20 + 0x88) / (*(float *)(iVar20 + 0xd0) - *pfVar21);
  fVar16 = (float)(longlong)*(int *)(iVar20 + 0x8c) /
           (*(float *)(iVar20 + 0xd4) - *(float *)(iVar20 + 0xcc));
  *(float *)(iVar20 + 0xf4) = fVar16 * *(float *)(iVar20 + 0xf4);
  *(float *)(iVar20 + 0xf8) = fVar16 * fVar18;
  *(float *)(iVar20 + 0xe8) = fVar18 * fVar17;
  *(float *)(iVar20 + 0xec) = fVar17 * *(float *)(iVar20 + 0xec);
  *(float *)(iVar20 + 0xf0) = fVar17 * *(float *)(iVar20 + 0xf0);
  *(float *)(iVar20 + 0xfc) = fVar16 * *(float *)(iVar20 + 0xfc);
  *(float *)(iVar20 + 0xf0) = (float)(longlong)*(int *)(iVar20 + 0x80) + *(float *)(iVar20 + 0xf0);
  *(float *)(iVar20 + 0xfc) = (float)(longlong)*(int *)(iVar20 + 0x84) + *(float *)(iVar20 + 0xfc);
  if ((((fVar1 != *pfVar21) || (fVar4 != *(float *)(iVar20 + 0xd0))) ||
      (fVar3 != *(float *)(iVar20 + 0xcc))) || (bVar22 = false, fVar5 != *(float *)(iVar20 + 0xd4)))
  {
    bVar22 = true;
  }
  if (((bVar22) || (fVar2 != *(float *)(iVar20 + 0xb8))) ||
     (((fVar6 != *(float *)(iVar20 + 0xbc) ||
       ((fVar7 != *(float *)(iVar20 + 0xb0) || (fVar8 != *(float *)(iVar20 + 0xb4))))) ||
      (fVar9 != *(float *)(iVar20 + 0xac))))) {
    *(uint *)(iVar20 + 0xb00) = *(uint *)(iVar20 + 0xb00) | 0x400;
  }
  fn_82F6A58C();
  return;
}

