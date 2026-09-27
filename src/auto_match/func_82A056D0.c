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
extern unsigned int lbl_8201546C;
extern float lbl_8207F494;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8315CD38;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_82A056D0(double param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar7;
  ulonglong uVar6;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  
  pfVar7 = (float *)&lbl_8315CD38;
  uVar8 = 0;
  do {
    if (param_1 < (double)*pfVar7) {
      uVar6 = uVar8;
      if ((uVar8 & 0xffffffff) == 0) goto code_r0x82a05734;
      break;
    }
    uVar8 = uVar8 + 1;
    pfVar7 = pfVar7 + 1;
    uVar6 = 6;
  } while ((uVar8 & 0xffffffff) < 7);
  uVar8 = uVar6;
  if (param_1 < (double)(*(float *)((int)((uVar8 & 0xffffffff) << 2) + -0x7cea32cc) + lbl_8201546C))
  {
    uVar8 = uVar8 - 1;
  }
code_r0x82a05734:
  iVar5 = (int)param_2;
  fVar1 = lbl_821AAD20;
  if ((uVar8 & 0xffffffff) != 0) {
    iVar3 = (int)(((uVar8 - 1) + (uVar8 - 1 & 0x7fffffff) * 2 & 0xffffffff) << 2) + iVar5;
    fVar1 = *(float *)(iVar3 + 0x98);
    iVar4 = (int)((uVar8 + 0xb + (uVar8 + 0xb & 0x7fffffff) * 2 & 0x3fffffff) << 2);
    if (*(int *)(iVar3 + 0x94) == 0) {
      fVar1 = *(float *)(iVar4 + iVar5);
    }
    else {
      fVar2 = *(float *)(iVar4 + iVar5) * lbl_8207F494;
      if (fVar1 < fVar2) {
        fVar1 = fVar2;
      }
    }
  }
  iVar3 = (int)((uVar8 + (uVar8 & 0x7fffffff) * 2 & 0xffffffff) << 2) + iVar5;
  dVar11 = (double)*(float *)(iVar3 + 0x98);
  iVar4 = (int)((uVar8 + 0xc + (uVar8 + 0xc & 0x7fffffff) * 2 & 0x3fffffff) << 2);
  if (*(int *)(iVar3 + 0x94) == 0) {
    dVar11 = (double)*(float *)(iVar4 + iVar5);
  }
  else {
    dVar12 = (double)(*(float *)(iVar4 + iVar5) * lbl_8207F494);
    if (dVar11 < dVar12) {
      dVar11 = dVar12;
    }
  }
  uVar6 = uVar8 + 1;
  if ((uVar6 & 0xffffffff) < 7) {
    if (3 < 7 - (int)uVar6) {
      lVar9 = ((3 - uVar6 & 0xffffffff) >> 2) + 1;
      lVar10 = (uVar8 + 0xd + (uVar8 + 0xd & 0x7fffffff) * 2 & 0x3fffffff) * 4 + param_2;
      uVar6 = (lVar9 * 4 & 0xfffffffcU) + uVar6;
      do {
        pfVar7 = (float *)lVar10;
        if (pfVar7[1] == 0.0) {
          dVar12 = (double)*pfVar7;
        }
        else {
          dVar12 = (double)pfVar7[2];
          if ((double)pfVar7[2] < (double)(*pfVar7 * lbl_8207F494)) {
            dVar12 = (double)(*pfVar7 * lbl_8207F494);
          }
        }
        if (dVar11 <= dVar12) {
          dVar11 = dVar12;
        }
        if (pfVar7[4] == 0.0) {
          dVar12 = (double)pfVar7[3];
        }
        else {
          dVar12 = (double)pfVar7[5];
          if ((double)pfVar7[5] < (double)(pfVar7[3] * lbl_8207F494)) {
            dVar12 = (double)(pfVar7[3] * lbl_8207F494);
          }
        }
        if (dVar11 <= dVar12) {
          dVar11 = dVar12;
        }
        if (pfVar7[7] == 0.0) {
          dVar12 = (double)pfVar7[6];
        }
        else {
          dVar12 = (double)pfVar7[8];
          if ((double)pfVar7[8] < (double)(pfVar7[6] * lbl_8207F494)) {
            dVar12 = (double)(pfVar7[6] * lbl_8207F494);
          }
        }
        if (dVar11 <= dVar12) {
          dVar11 = dVar12;
        }
        if (pfVar7[10] == 0.0) {
          dVar12 = (double)pfVar7[9];
        }
        else {
          dVar12 = (double)pfVar7[0xb];
          if ((double)pfVar7[0xb] < (double)(pfVar7[9] * lbl_8207F494)) {
            dVar12 = (double)(pfVar7[9] * lbl_8207F494);
          }
        }
        if (dVar11 <= dVar12) {
          dVar11 = dVar12;
        }
        lVar10 = lVar10 + 0x30;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if ((uVar6 & 0xffffffff) < 7) {
      lVar9 = 7 - uVar6;
      param_2 = (uVar6 + 0xc + (uVar6 + 0xc & 0x7fffffff) * 2 & 0x3fffffff) * 4 + param_2;
      do {
        pfVar7 = (float *)param_2;
        if (pfVar7[1] == 0.0) {
          dVar12 = (double)*pfVar7;
        }
        else {
          dVar12 = (double)pfVar7[2];
          if ((double)pfVar7[2] < (double)(*pfVar7 * lbl_8207F494)) {
            dVar12 = (double)(*pfVar7 * lbl_8207F494);
          }
        }
        if (dVar11 <= dVar12) {
          dVar11 = dVar12;
        }
        param_2 = param_2 + 0xc;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  if (dVar11 < (double)(fVar1 * lbl_8207F494)) {
    return (double)(fVar1 * lbl_8207F494);
  }
  return dVar11;
}

