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
extern unsigned int *auStack_20;
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_40;
extern unsigned int iStack_10;
extern unsigned int lbl_820A6C50;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82142CBC;
extern unsigned int lbl_82142CC0;
extern unsigned int lbl_82142CC4;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


longlong fn_82DD8FF8(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  undefined1 in_vs32 [16];
  undefined1 auVar17 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar18 [16];
  undefined1 in_vs45 [16];
  float fStack_40;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 auStack_20 [4];
  int iStack_10;
  
  fVar6 = lbl_821AAD20;
  uVar7 = ZEXT48(&stack0x00000000);
  lVar8 = 0;
  lVar9 = uVar7 - 0x30;
  lVar16 = 4;
  uVar14 = 0;
  uVar10 = 0;
  iStack_10 = 0;
  uVar11 = 0;
  fVar3 = lbl_821AAD20;
  fVar4 = lbl_82134508;
  do {{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs32,in_vs45); memcpy(auVar18, &_vt0, 16); }
    uVar2 = storeVectorElementWordIndexed(in_vs43,0,uVar7 - 0x40);
    *(undefined4 *)(uVar7 - 0x40) = uVar2;
    *(float *)lVar9 = fStack_40;
    if (fVar3 < fStack_40) {
      uVar14 = uVar11;
      fVar3 = fStack_40;
    }
    if (fStack_40 < fVar4) {
      uVar10 = uVar11;
      fVar4 = fStack_40;
    }
    uVar11 = uVar11 + 1;
    lVar9 = lVar9 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  fVar1 = *(float *)(param_1 + 0xdc);
  fVar3 = fVar3 * lbl_820A6C50;
  lVar16 = 5;
  fVar5 = fVar1 - *(float *)((int)((uVar10 + (uVar10 & 0x7fffffff) * 2 & 0xffffffff) << 4) + param_1
                            + 0x1c);
  iVar15 = 4;
  *(undefined4 *)((int)auStack_20 + (int)((uVar14 & 0xffffffff) << 2)) = 1;
  iVar12 = 0;
  lVar9 = uVar7 - 0x20;
  do {
    if (*(int *)lVar9 == 0) {{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(auVar18, &_vt1, 16); }
      uVar2 = storeVectorElementWordIndexed(in_vs43,0,uVar7 - 0x40);
      *(undefined4 *)(uVar7 - 0x40) = uVar2;
      if (fVar3 < fStack_40) {
        fVar3 = fStack_40;
        iVar15 = iVar12;
      }
    }
    iVar12 = iVar12 + 1;
    lVar9 = lVar9 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar16 = 5;
  iVar12 = 0;
  iVar13 = 0;
  lVar9 = uVar7 - 0x20;
  auStack_20[iVar15] = 1;{ V16 _vt2 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(auVar17, &_vt2, 16); }
  fVar3 = fVar6;
  do {
    if (*(int *)lVar9 == 0) {
      vectorSubtractFloatingPoint(auVar18,in_vs45);
      vectorSubtractFloatingPoint(in_vs37,in_vs38);
      uVar2 = storeVectorElementWordIndexed(in_vs35,0,uVar7 - 0x40);
      *(undefined4 *)(uVar7 - 0x40) = uVar2;
      if (fVar3 < fStack_40) {
        fVar3 = fStack_40;
        iVar12 = iVar13;
      }
    }
    iVar13 = iVar13 + 1;
    lVar9 = lVar9 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  iVar15 = 0;
  lVar16 = 5;
  iVar13 = 0;
  auStack_20[iVar12] = 1;
  lVar9 = uVar7 - 0x20;
  fVar3 = fVar6;
  do {
    if (*(int *)lVar9 == 0) {
      vectorSubtractFloatingPoint(in_vs45,auVar17);
      uVar2 = storeVectorElementWordIndexed(in_vs43,0,uVar7 - 0x40);
      *(undefined4 *)(uVar7 - 0x40) = uVar2;
      if (fVar3 < fStack_40) {
        fVar3 = fStack_40;
        iVar15 = iVar13;
      }
    }
    iVar13 = iVar13 + 1;
    lVar9 = lVar9 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  auStack_20[iVar15] = 1;
  if (((iStack_10 == 0) && (fVar5 < fVar6)) && (fVar4 < fVar5 * fVar5 * lbl_82142CC4)) {
    fVar3 = *(float *)(param_1 + 0x1c) - fVar1;
    lVar8 = 4;
    fVar3 = fVar3 * fVar3 + lbl_82142CBC;
    fVar4 = lbl_82142CC0;
    if (fStack_30 * lbl_82142CC0 < fVar3) {
      lVar8 = 0;
      fVar4 = fVar3 / (fStack_30 + lbl_82142CBC);
    }
    fVar3 = *(float *)(param_1 + 0x4c) - fVar1;
    fVar3 = fVar3 * fVar3 + lbl_82142CBC;
    if (fStack_2c * fVar4 < fVar3) {
      lVar8 = 1;
      fVar4 = fVar3 / (fStack_2c + lbl_82142CBC);
    }
    fVar3 = *(float *)(param_1 + 0x7c) - fVar1;
    fVar3 = fVar3 * fVar3 + lbl_82142CBC;
    if (fStack_28 * fVar4 < fVar3) {
      lVar8 = 2;
      fVar4 = fVar3 / (fStack_28 + lbl_82142CBC);
    }
    fVar1 = *(float *)(param_1 + 0xac) - fVar1;
    if (fStack_24 * fVar4 < fVar1 * fVar1 + lbl_82142CBC) {
      lVar8 = 3;
    }
    return lVar8;
  }
  lVar9 = uVar7 - 0x20;
  do {
    if (*(int *)lVar9 == 0) {
      return lVar8;
    }
    lVar8 = lVar8 + 1;
    lVar9 = lVar9 + 4;
  } while ((int)lVar8 < 5);
  return 0;
}

