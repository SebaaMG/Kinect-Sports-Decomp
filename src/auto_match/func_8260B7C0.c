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
#define NAN(x) ((x) != (x))
extern unsigned int fStack_58;
extern unsigned int fStack_84;
extern int fn_8260BA88();
extern unsigned int lbl_8218EFD4;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B4BC;
extern unsigned int lbl_8326B4C8;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_8260B7C0(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  ulonglong uVar17;
  longlong lVar18;
  float fStack_84;
  float afStack_80 [4];
  float afStack_70 [4];
  uint uStack_60;
  uint uStack_5c;
  float fStack_58;
  uint uStack_54;
  float afStack_50 [20];
  
  fVar10 = lbl_821CC160;
  iVar14 = 0;
  pfVar13 = &fStack_58;
  lVar18 = 2;
  do {
    pfVar13[3] = fVar10;
    pfVar13 = pfVar13 + 2;
    *pfVar13 = fVar10;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  afStack_50[5] = 0.0;
  afStack_80[1] = 0.0;
  pfVar13 = afStack_80 + 2;
  uStack_54 = 0;
  lVar18 = 2;
  uVar3 = param_1[*param_1 * 10 + 4];
  do {
    pfVar13[3] = fVar10;
    pfVar13 = pfVar13 + 2;
    *pfVar13 = fVar10;
    uVar11 = lbl_8326B4BC;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  uVar17 = 1;
  iVar12 = 0;
  do {
    if (((*(uint *)(&lbl_8218EFD4 + iVar12) & uVar11) != 0) && ((param_2 == 0 || (uVar17 == 0)))) {
      pfVar16 = afStack_80 + 3;
      lVar18 = 2;
      iVar15 = *(int *)(*(int *)((int)&lbl_8326B4C8 + iVar12) + 0x34) * 0x28 +
               *(int *)((int)&lbl_8326B4C8 + iVar12);
      pfVar13 = (float *)(iVar15 + 0x44);
      uStack_54 = *(uint *)(iVar15 + 0x44) | uStack_54;
      do {
        pfVar4 = pfVar13 + 1;
        pfVar5 = pfVar16 + 2;
        pfVar13 = pfVar13 + 2;
        fVar1 = *pfVar13;
        pfVar16[1] = pfVar16[1] + *pfVar4;
        pfVar16 = pfVar16 + 2;
        *pfVar16 = *pfVar5 + fVar1;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      pfVar13 = (float *)(iVar15 + 0x54);
      pfVar16 = &fStack_84;
      lVar18 = 2;
      do {
        pfVar4 = pfVar16 + 1;
        pfVar13 = pfVar13 + 1;
        pfVar16 = pfVar16 + 1;
        *pfVar16 = *pfVar13 + *pfVar4;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    fVar9 = lbl_821CA460;
    fVar1 = lbl_82192734;
    iVar12 = iVar12 + 4;
    uVar17 = (uVar17 & 0x7fffffff) << 1;
  } while (iVar12 < 0x10);
  uStack_60 = uStack_54 & ~uVar3;
  uStack_5c = uVar3 & ~uStack_54;
  fStack_58 = (float)(uStack_54 & uVar3);
  lVar18 = 2;
  iVar12 = 0;
  do {
    fVar2 = *(float *)((int)afStack_80 + iVar12) - fVar1;
    fVar6 = *(float *)((int)afStack_80 + iVar12);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar2 < fVar10) << 2) | (uint)(NAN(fVar2) || NAN(fVar10)) << 2)) <
        0.0) {
      fVar6 = fVar1;
    }
    fVar2 = fVar9;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar6 - fVar9 < fVar10) << 2) |
                  (uint)(NAN(fVar6 - fVar9) || NAN(fVar10)) << 2)) < 0.0) {
      fVar2 = fVar6;
    }
    *(float *)((int)afStack_50 + iVar12 + 0x10) = fVar2;
    iVar12 = iVar12 + 4;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  lVar18 = 2;
  do {
    fVar2 = *(float *)((int)afStack_70 + iVar14 + 4);
    fVar6 = fVar2 - fVar1;
    fVar7 = *(float *)((int)afStack_70 + iVar14) - fVar1;
    fVar8 = *(float *)((int)afStack_70 + iVar14);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar7 < fVar10) << 2) | (uint)(NAN(fVar7) || NAN(fVar10)) << 2)) <
        0.0) {
      fVar8 = fVar1;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar6 < fVar10) << 2) | (uint)(NAN(fVar6) || NAN(fVar10)) << 2)) <
        0.0) {
      fVar2 = fVar1;
    }
    fVar6 = fVar9;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar8 - fVar9 < fVar10) << 2) |
                  (uint)(NAN(fVar8 - fVar9) || NAN(fVar10)) << 2)) < 0.0) {
      fVar6 = fVar8;
    }
    fVar7 = fVar9;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar2 - fVar9 < fVar10) << 2) |
                  (uint)(NAN(fVar2 - fVar9) || NAN(fVar10)) << 2)) < 0.0) {
      fVar7 = fVar2;
    }
    *(float *)((int)afStack_50 + iVar14) = fVar6;
    *(float *)((int)afStack_50 + iVar14 + 4) = fVar7;
    iVar14 = iVar14 + 8;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  fn_8260BA88(param_1,&uStack_60);
  return;
}

