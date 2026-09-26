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
extern unsigned int fStack_44;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82005718;
extern unsigned int lbl_8207F3EC;
extern unsigned int lbl_8207F4E0;
extern unsigned int lbl_82186E68;
extern unsigned int lbl_82186E74;
extern unsigned int lbl_821AAD20;


void fn_82A02760(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  uint uVar17;
  longlong lVar18;
  float fStack_44;
  float afStack_40 [12];
  
  fVar8 = lbl_821AAD20;
  pfVar14 = &fStack_44;
  uVar11 = 0;
  pfVar16 = (float *)&lbl_8207F3EC;
  pfVar12 = (float *)(param_2 + 0x10);
  iVar15 = 2;
  do {
    if ((pfVar12[-4] != fVar8) && (iVar15 != 0xb)) {
      uVar11 = uVar11 + 1;
      pfVar14[1] = pfVar12[-4] / pfVar16[-1];
      pfVar14 = pfVar14 + 1;
    }
    if ((pfVar12[-2] != fVar8) && (iVar15 != 10)) {
      uVar11 = uVar11 + 1;
      pfVar14[1] = pfVar12[-2] / *pfVar16;
      pfVar14 = pfVar14 + 1;
    }
    if ((*pfVar12 != fVar8) && (iVar15 != 9)) {
      uVar11 = uVar11 + 1;
      pfVar14[1] = *pfVar12 / pfVar16[1];
      pfVar14 = pfVar14 + 1;
    }
    if ((pfVar12[2] != fVar8) && (iVar15 != 8)) {
      uVar11 = uVar11 + 1;
      pfVar14[1] = pfVar12[2] / pfVar16[2];
      pfVar14 = pfVar14 + 1;
    }
    if ((pfVar12[4] != fVar8) && (iVar15 != 7)) {
      uVar11 = uVar11 + 1;
      pfVar14 = pfVar14 + 1;
      *pfVar14 = pfVar12[4] / pfVar16[3];
    }
    pfVar12 = pfVar12 + 10;
    iVar10 = iVar15 + 3;
    pfVar16 = pfVar16 + 5;
    iVar15 = iVar15 + 5;
  } while (iVar10 < 10);
  if (2 < (int)uVar11) {
    if (0 < (int)uVar11) {
      iVar15 = 1;
      pfVar14 = afStack_40;
      uVar9 = uVar11;
      uVar17 = uVar11;
      do {
        uVar17 = uVar17 - 1;
        if (iVar15 < (int)uVar11) {
          iVar10 = iVar15;
          if (3 < (int)uVar17) {
            pfVar12 = pfVar14 + 2;
            do {
              fVar1 = pfVar12[-1];
              if (*pfVar14 < fVar1) {
                pfVar12[-1] = *pfVar14;
                *pfVar14 = fVar1;
              }
              fVar1 = *pfVar12;
              if (*pfVar14 < fVar1) {
                *pfVar12 = *pfVar14;
                *pfVar14 = fVar1;
              }
              fVar1 = pfVar12[1];
              if (*pfVar14 < fVar1) {
                pfVar12[1] = *pfVar14;
                *pfVar14 = fVar1;
              }
              fVar1 = pfVar12[2];
              if (*pfVar14 < fVar1) {
                pfVar12[2] = *pfVar14;
                *pfVar14 = fVar1;
              }
              iVar10 = iVar10 + 4;
              pfVar12 = pfVar12 + 4;
            } while (iVar10 < (int)(uVar11 - 3));
          }
          if (iVar10 < (int)uVar11) {
            iVar13 = uVar11 - iVar10;
            pfVar12 = afStack_40 + iVar10;
            do {
              fVar1 = *pfVar12;
              if (*pfVar14 < fVar1) {
                *pfVar12 = *pfVar14;
                *pfVar14 = fVar1;
              }
              pfVar12 = pfVar12 + 1;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        uVar9 = uVar9 - 1;
        iVar15 = iVar15 + 1;
        pfVar14 = pfVar14 + 1;
      } while (uVar9 != 0);
    }
    fVar7 = lbl_8207F4E0;
    fVar6 = lbl_82005718;
    fVar5 = lbl_82002C28;
    fVar1 = afStack_40[((int)uVar11 >> 1) + (uint)((int)uVar11 < 0 && (uVar11 & 1) != 0)];
    if ((lbl_82186E74 <= fVar1) && (fVar1 <= lbl_82186E68)) {
      pfVar12 = (float *)(param_2 + 8);
      pfVar14 = (float *)&lbl_8207F3EC;
      lVar18 = 2;
      pfVar16 = (float *)(param_1 + 0x40ac);
      do {
        fVar3 = pfVar14[-1] * fVar1;
        fVar2 = pfVar12[-2];
        if (ABS(fVar2 - fVar3) / fVar3 <= fVar7) {
          if (pfVar12[-1] != fVar8) {
            fVar4 = fVar6 / pfVar12[-1];
            fVar3 = pfVar16[-2];
            pfVar16[-2] = (fVar3 * fVar4) / (fVar3 + fVar4);
            pfVar16[-3] = (fVar2 * fVar3 + pfVar16[-3] * fVar4) / (fVar3 + fVar4);
          }
        }
        else {
          fVar2 = pfVar16[-2];
          pfVar16[-2] = (fVar2 * fVar5) / (fVar2 + fVar5);
          pfVar16[-3] = (fVar2 * fVar3 + pfVar16[-3] * fVar5) / (fVar2 + fVar5);
        }
        fVar2 = *pfVar14 * fVar1;
        if (ABS(*pfVar12 - fVar2) / fVar2 <= fVar7) {
          if (pfVar12[1] != fVar8) {
            fVar2 = fVar6 / pfVar12[1];
            pfVar16[-1] = (pfVar16[-1] * fVar2 + *pfVar12 * *pfVar16) / (*pfVar16 + fVar2);
            *pfVar16 = (*pfVar16 * fVar2) / (*pfVar16 + fVar2);
          }
        }
        else {
          pfVar16[-1] = (*pfVar16 * fVar2 + pfVar16[-1] * fVar5) / (*pfVar16 + fVar5);
          *pfVar16 = (*pfVar16 * fVar5) / (*pfVar16 + fVar5);
        }
        fVar2 = pfVar14[1] * fVar1;
        if (ABS(pfVar12[2] - fVar2) / fVar2 <= fVar7) {
          if (pfVar12[3] != fVar8) {
            fVar2 = fVar6 / pfVar12[3];
            pfVar16[1] = (pfVar12[2] * pfVar16[2] + fVar2 * pfVar16[1]) / (pfVar16[2] + fVar2);
            pfVar16[2] = (pfVar16[2] * fVar2) / (pfVar16[2] + fVar2);
          }
        }
        else {
          pfVar16[1] = (pfVar16[2] * fVar2 + pfVar16[1] * fVar5) / (pfVar16[2] + fVar5);
          pfVar16[2] = (pfVar16[2] * fVar5) / (pfVar16[2] + fVar5);
        }
        fVar2 = pfVar14[2] * fVar1;
        if (ABS(pfVar12[4] - fVar2) / fVar2 <= fVar7) {
          if (pfVar12[5] != fVar8) {
            fVar2 = fVar6 / pfVar12[5];
            pfVar16[3] = (pfVar12[4] * pfVar16[4] + pfVar16[3] * fVar2) / (pfVar16[4] + fVar2);
            pfVar16[4] = (pfVar16[4] * fVar2) / (pfVar16[4] + fVar2);
          }
        }
        else {
          pfVar16[3] = (pfVar16[4] * fVar2 + pfVar16[3] * fVar5) / (pfVar16[4] + fVar5);
          pfVar16[4] = (pfVar16[4] * fVar5) / (pfVar16[4] + fVar5);
        }
        fVar2 = pfVar14[3] * fVar1;
        if (ABS(pfVar12[6] - fVar2) / fVar2 <= fVar7) {
          if (pfVar12[7] != fVar8) {
            fVar2 = fVar6 / pfVar12[7];
            pfVar16[5] = (pfVar12[6] * pfVar16[6] + pfVar16[5] * fVar2) / (pfVar16[6] + fVar2);
            pfVar16[6] = (pfVar16[6] * fVar2) / (pfVar16[6] + fVar2);
          }
        }
        else {
          pfVar16[5] = (pfVar16[6] * fVar2 + pfVar16[5] * fVar5) / (pfVar16[6] + fVar5);
          pfVar16[6] = (pfVar16[6] * fVar5) / (pfVar16[6] + fVar5);
        }
        pfVar14 = pfVar14 + 5;
        pfVar16 = pfVar16 + 10;
        pfVar12 = pfVar12 + 10;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
  }
  return;
}

