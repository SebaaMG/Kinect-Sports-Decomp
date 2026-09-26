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
extern unsigned int lbl_82005344;
extern unsigned int lbl_82014894;
extern unsigned int lbl_82014898;
extern unsigned int lbl_821AAD20;


void fn_82771CC0(int param_1,float *param_2)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float *pfVar20;
  
  fVar3 = lbl_82014898;
  fVar5 = lbl_82014894;
  *param_2 = lbl_82014898;
  param_2[1] = fVar3;
  param_2[2] = fVar5;
  param_2[3] = fVar5;
  fVar13 = lbl_821AAD20;
  fVar12 = lbl_82005344;
  fVar11 = lbl_82002AE0;
  uVar18 = (ulonglong)*(uint *)(param_1 + 200);
  if (uVar18 != 0) {
    iVar15 = 0;
    fVar8 = fVar5;
    fVar10 = fVar3;
    do {
      iVar16 = *(int *)(param_1 + 0xc4) + iVar15;
      fVar1 = *(float *)(iVar16 + 0xc);
      fVar2 = *(float *)(iVar16 + 0x10);
      fVar7 = fVar1;
      if (fVar10 < fVar1) {
        fVar7 = fVar10;
      }
      fVar10 = fVar7;
      *param_2 = fVar10;
      fVar7 = fVar2;
      if (fVar3 < fVar2) {
        fVar7 = fVar3;
      }
      param_2[1] = fVar7;
      fVar6 = fVar1;
      if (fVar1 < fVar8) {
        fVar6 = fVar8;
      }
      param_2[2] = fVar6;
      fVar3 = fVar2;
      if (fVar2 < fVar5) {
        fVar3 = fVar5;
      }
      fVar5 = fVar3;
      param_2[3] = fVar5;
      uVar19 = (ulonglong)*(uint *)(iVar16 + 0x18);
      fVar8 = fVar6;
      fVar3 = fVar7;
      if (uVar19 != 0) {
        iVar17 = 0;
        do {
          pfVar20 = (float *)(*(int *)(iVar16 + 0x14) + iVar17);
          fVar3 = *pfVar20;
          fVar9 = (fVar3 * fVar12 - fVar1) - pfVar20[2];
          fVar8 = fVar5;
          fVar4 = fVar10;
          if (((fVar9 != fVar13) && (fVar9 = (fVar3 - fVar1) / fVar9, fVar13 < fVar9)) &&
             (fVar9 < fVar11)) {
            fVar4 = pfVar20[1];
            fVar14 = (fVar3 - fVar1) * fVar9 + fVar1;
            fVar8 = (fVar4 - fVar2) * fVar9 + fVar2;
            fVar14 = (((pfVar20[2] - fVar3) * fVar9 + fVar3) - fVar14) * fVar9 + fVar14;
            fVar8 = (((pfVar20[3] - fVar4) * fVar9 + fVar4) - fVar8) * fVar9 + fVar8;
            fVar4 = fVar14;
            if (fVar10 < fVar14) {
              fVar4 = fVar10;
            }
            *param_2 = fVar4;
            fVar3 = fVar8;
            if (fVar7 < fVar8) {
              fVar3 = fVar7;
            }
            fVar7 = fVar3;
            param_2[1] = fVar7;
            if (fVar14 < fVar6) {
              fVar14 = fVar6;
            }
            fVar6 = fVar14;
            param_2[2] = fVar6;
            if (fVar8 < fVar5) {
              fVar8 = fVar5;
            }
            param_2[3] = fVar8;
          }
          fVar5 = pfVar20[1];
          fVar10 = (fVar5 * fVar12 - fVar2) - pfVar20[3];
          fVar3 = fVar7;
          fVar9 = fVar6;
          if (((fVar10 != fVar13) && (fVar10 = (fVar5 - fVar2) / fVar10, fVar13 < fVar10)) &&
             (fVar10 < fVar11)) {
            fVar3 = *pfVar20;
            fVar1 = (fVar3 - fVar1) * fVar10 + fVar1;
            fVar2 = (fVar5 - fVar2) * fVar10 + fVar2;
            fVar9 = (((pfVar20[2] - fVar3) * fVar10 + fVar3) - fVar1) * fVar10 + fVar1;
            fVar2 = (((pfVar20[3] - fVar5) * fVar10 + fVar5) - fVar2) * fVar10 + fVar2;
            fVar5 = fVar9;
            if (fVar4 < fVar9) {
              fVar5 = fVar4;
            }
            fVar4 = fVar5;
            *param_2 = fVar4;
            fVar3 = fVar2;
            if (fVar7 < fVar2) {
              fVar3 = fVar7;
            }
            param_2[1] = fVar3;
            if (fVar9 < fVar6) {
              fVar9 = fVar6;
            }
            param_2[2] = fVar9;
            if (fVar2 < fVar8) {
              fVar2 = fVar8;
            }
            fVar8 = fVar2;
            param_2[3] = fVar8;
          }
          fVar6 = pfVar20[2];
          fVar5 = pfVar20[3];
          fVar10 = fVar6;
          if (fVar4 < fVar6) {
            fVar10 = fVar4;
          }
          *param_2 = fVar10;
          fVar7 = fVar5;
          if (fVar3 < fVar5) {
            fVar7 = fVar3;
          }
          param_2[1] = fVar7;
          if (fVar6 < fVar9) {
            fVar6 = fVar9;
          }
          param_2[2] = fVar6;
          if (fVar5 < fVar8) {
            fVar5 = fVar8;
          }
          param_2[3] = fVar5;
          fVar1 = pfVar20[2];
          iVar17 = iVar17 + 0x10;
          fVar2 = pfVar20[3];
          uVar19 = uVar19 - 1;
          fVar8 = fVar6;
          fVar3 = fVar7;
        } while (uVar19 != 0);
      }
      uVar18 = uVar18 - 1;
      iVar15 = iVar15 + 0x24;
    } while (uVar18 != 0);
  }
  return;
}

