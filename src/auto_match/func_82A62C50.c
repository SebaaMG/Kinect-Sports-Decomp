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
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int lbl_8201467C;


void fn_82A62C50(int *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  short *psVar15;
  float *pfVar17;
  ulonglong uVar16;
  float afStack_70 [4];
  float fStack_60;
  float fStack_5c;
  float afStack_50 [4];
  float fStack_40;
  float fStack_3c;
  
  iVar6 = *param_1;
  iVar7 = param_1[1];
  uVar8 = param_1[5];
  uVar12 = (ulonglong)(uint)param_1[6];
  iVar9 = param_1[8];
  if (param_1[9] != 0) {
    uVar12 = 1;
  }
  if (5 < (uVar12 - 1 & 0xffffffff)) goto LAB_82a62ee0;
  bVar1 = (int)(uVar12 - 1) != 0;
  if (uVar12 == 2 && bVar1) {
    pfVar17 = (float *)param_1[3];
    afStack_70[0] = *(float *)param_1[2] * lbl_8201467C;
    afStack_70[1] = ((float *)param_1[2])[3] * lbl_8201467C;
    if (pfVar17 == (float *)0x0) goto LAB_82a62ee0;
    afStack_50[1] = pfVar17[3] * lbl_8201467C;
  }
  else {
    if (uVar12 == 3 && bVar1) {
      pfVar10 = (float *)param_1[2];
      pfVar17 = (float *)param_1[3];
      afStack_70[0] = *pfVar10 * lbl_8201467C;
      afStack_70[1] = pfVar10[4] * lbl_8201467C;
      afStack_70[2] = pfVar10[8] * lbl_8201467C;
      if (pfVar17 == (float *)0x0) goto LAB_82a62ee0;
      fVar4 = pfVar17[4];
      afStack_50[2] = pfVar17[8] * lbl_8201467C;
    }
    else {
      if (uVar12 == 4 && bVar1) {
        pfVar10 = (float *)param_1[2];
        pfVar17 = (float *)param_1[3];
        afStack_70[0] = *pfVar10 * lbl_8201467C;
        afStack_70[1] = pfVar10[5] * lbl_8201467C;
        afStack_70[2] = pfVar10[10] * lbl_8201467C;
        afStack_70[3] = pfVar10[0xf] * lbl_8201467C;
        if (pfVar17 == (float *)0x0) goto LAB_82a62ee0;
        fVar4 = pfVar17[5];
        fVar2 = pfVar17[10];
        afStack_50[3] = pfVar17[0xf] * lbl_8201467C;
      }
      else {
        if (uVar12 == 5 && bVar1) {
          pfVar10 = (float *)param_1[2];
          pfVar17 = (float *)param_1[3];
          afStack_70[0] = *pfVar10 * lbl_8201467C;
          afStack_70[1] = pfVar10[6] * lbl_8201467C;
          afStack_70[2] = pfVar10[0xc] * lbl_8201467C;
          afStack_70[3] = pfVar10[0x12] * lbl_8201467C;
          fStack_60 = pfVar10[0x18] * lbl_8201467C;
          if (pfVar17 == (float *)0x0) goto LAB_82a62ee0;
          fVar4 = pfVar17[6];
          fVar2 = pfVar17[0xc];
          fVar3 = pfVar17[0x12];
          fStack_40 = pfVar17[0x18] * lbl_8201467C;
        }
        else {
          if (!bVar1) {
            afStack_70[0] = *(float *)param_1[2] * lbl_8201467C;
            if ((float *)param_1[3] != (float *)0x0) {
              afStack_50[0] = *(float *)param_1[3] * lbl_8201467C;
            }
            goto LAB_82a62ee0;
          }
          pfVar10 = (float *)param_1[2];
          pfVar17 = (float *)param_1[3];
          afStack_70[0] = *pfVar10 * lbl_8201467C;
          afStack_70[1] = pfVar10[7] * lbl_8201467C;
          afStack_70[2] = pfVar10[0xe] * lbl_8201467C;
          afStack_70[3] = pfVar10[0x15] * lbl_8201467C;
          fStack_60 = pfVar10[0x1c] * lbl_8201467C;
          fStack_5c = pfVar10[0x23] * lbl_8201467C;
          if (pfVar17 == (float *)0x0) goto LAB_82a62ee0;
          fVar4 = pfVar17[7];
          fVar2 = pfVar17[0xe];
          fVar3 = pfVar17[0x15];
          fStack_40 = pfVar17[0x1c] * lbl_8201467C;
          fStack_3c = pfVar17[0x23] * lbl_8201467C;
        }
        afStack_50[3] = fVar3 * lbl_8201467C;
      }
      afStack_50[2] = fVar2 * lbl_8201467C;
    }
    afStack_50[1] = fVar4 * lbl_8201467C;
  }
  afStack_50[0] = *pfVar17 * lbl_8201467C;
LAB_82a62ee0:
  uVar16 = 0;
  uVar13 = 0;
  if (param_1[3] == 0) {
    if (3 < (int)uVar8) {
      pfVar17 = (float *)(iVar7 + 8);
      psVar15 = (short *)(iVar6 + 4);
      lVar11 = 0;
      do {
        fVar4 = *(float *)((int)afStack_70 + (int)lVar11) * (float)(longlong)psVar15[-2];
        if (iVar9 == 0) {
          pfVar17[-2] = fVar4;
        }
        else {
          pfVar17[-2] = pfVar17[-2] + fVar4;
        }
        uVar16 = -(ulonglong)(uVar16 + 1 < uVar12) & uVar16 + 1;
        fVar4 = *(float *)((int)afStack_70 + (int)((uVar16 & 0xffffffff) << 2)) *
                (float)(longlong)psVar15[-1];
        if (iVar9 == 0) {
          pfVar17[-1] = fVar4;
        }
        else {
          pfVar17[-1] = pfVar17[-1] + fVar4;
        }
        uVar16 = uVar16 + 1;
        uVar16 = -(ulonglong)(uVar16 < uVar12) & uVar16;
        fVar4 = *(float *)((int)afStack_70 + (int)((uVar16 & 0xffffffff) << 2)) *
                (float)(longlong)*psVar15;
        if (iVar9 == 0) {
          *pfVar17 = fVar4;
        }
        else {
          *pfVar17 = *pfVar17 + fVar4;
        }
        uVar16 = uVar16 + 1;
        uVar16 = -(ulonglong)(uVar16 < uVar12) & uVar16;
        fVar4 = *(float *)((int)afStack_70 + (int)((uVar16 & 0xffffffff) << 2)) *
                (float)(longlong)psVar15[1];
        if (iVar9 == 0) {
          pfVar17[1] = fVar4;
        }
        else {
          pfVar17[1] = pfVar17[1] + fVar4;
        }
        uVar16 = uVar16 + 1;
        uVar13 = uVar13 + 4;
        psVar15 = psVar15 + 4;
        pfVar17 = pfVar17 + 4;
        uVar16 = -(ulonglong)(uVar16 < uVar12) & uVar16;
        lVar11 = (uVar16 & 0xffffffff) << 2;
      } while (uVar13 < uVar8 - 3);
    }
    if (uVar13 < uVar8) {
      iVar14 = uVar8 - uVar13;
      pfVar17 = (float *)(uVar13 * 4 + iVar7);
      psVar15 = (short *)(uVar13 * 2 + iVar6);
      do {
        fVar4 = *(float *)((int)afStack_70 + (int)((uVar16 & 0xffffffff) << 2)) *
                (float)(longlong)*psVar15;
        if (iVar9 == 0) {
          *pfVar17 = fVar4;
        }
        else {
          *pfVar17 = *pfVar17 + fVar4;
        }
        psVar15 = psVar15 + 1;
        pfVar17 = pfVar17 + 1;
        uVar16 = -(ulonglong)(uVar16 + 1 < uVar12) & uVar16 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
  }
  else {
    if (3 < (int)uVar8) {
      pfVar17 = (float *)(iVar7 + 8);
      psVar15 = (short *)(iVar6 + 4);
      do {
        sVar5 = psVar15[-2];
        iVar14 = (int)((uVar16 & 0x3fffffff) << 2);
        fVar4 = *(float *)((int)afStack_70 + iVar14);
        *(float *)((int)afStack_70 + iVar14) = *(float *)((int)afStack_50 + iVar14) + fVar4;
        fVar4 = (float)(longlong)sVar5 * fVar4;
        if (iVar9 == 0) {
          pfVar17[-2] = fVar4;
        }
        else {
          pfVar17[-2] = pfVar17[-2] + fVar4;
        }
        sVar5 = psVar15[-1];
        uVar16 = -(ulonglong)(uVar16 + 1 < uVar12) & uVar16 + 1;
        iVar14 = (int)((uVar16 & 0x3fffffff) << 2);
        fVar4 = *(float *)((int)afStack_70 + iVar14);
        *(float *)((int)afStack_70 + iVar14) = *(float *)((int)afStack_50 + iVar14) + fVar4;
        fVar4 = (float)(longlong)sVar5 * fVar4;
        if (iVar9 == 0) {
          pfVar17[-1] = fVar4;
        }
        else {
          pfVar17[-1] = pfVar17[-1] + fVar4;
        }
        sVar5 = *psVar15;
        uVar16 = uVar16 + 1;
        uVar16 = -(ulonglong)(uVar16 < uVar12) & uVar16;
        iVar14 = (int)((uVar16 & 0x3fffffff) << 2);
        fVar4 = *(float *)((int)afStack_70 + iVar14);
        *(float *)((int)afStack_70 + iVar14) = *(float *)((int)afStack_50 + iVar14) + fVar4;
        fVar4 = (float)(longlong)sVar5 * fVar4;
        if (iVar9 == 0) {
          *pfVar17 = fVar4;
        }
        else {
          *pfVar17 = *pfVar17 + fVar4;
        }
        sVar5 = psVar15[1];
        uVar16 = uVar16 + 1;
        uVar16 = -(ulonglong)(uVar16 < uVar12) & uVar16;
        iVar14 = (int)((uVar16 & 0x3fffffff) << 2);
        fVar4 = *(float *)((int)afStack_70 + iVar14);
        *(float *)((int)afStack_70 + iVar14) = *(float *)((int)afStack_50 + iVar14) + fVar4;
        fVar4 = (float)(longlong)sVar5 * fVar4;
        if (iVar9 == 0) {
          pfVar17[1] = fVar4;
        }
        else {
          pfVar17[1] = pfVar17[1] + fVar4;
        }
        uVar16 = uVar16 + 1;
        uVar13 = uVar13 + 4;
        psVar15 = psVar15 + 4;
        pfVar17 = pfVar17 + 4;
        uVar16 = -(ulonglong)(uVar16 < uVar12) & uVar16;
      } while (uVar13 < uVar8 - 3);
    }
    if (uVar13 < uVar8) {
      iVar14 = uVar8 - uVar13;
      pfVar17 = (float *)(uVar13 * 4 + iVar7);
      psVar15 = (short *)(uVar13 * 2 + iVar6);
      do {
        sVar5 = *psVar15;
        iVar6 = (int)((uVar16 & 0x3fffffff) << 2);
        fVar4 = *(float *)((int)afStack_70 + iVar6);
        *(float *)((int)afStack_70 + iVar6) = *(float *)((int)afStack_50 + iVar6) + fVar4;
        fVar4 = (float)(longlong)sVar5 * fVar4;
        if (iVar9 == 0) {
          *pfVar17 = fVar4;
        }
        else {
          *pfVar17 = *pfVar17 + fVar4;
        }
        psVar15 = psVar15 + 1;
        pfVar17 = pfVar17 + 1;
        uVar16 = -(ulonglong)(uVar16 + 1 < uVar12) & uVar16 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
  }
  return;
}

