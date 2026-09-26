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


void fn_82A60738(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar14;
  ulonglong uVar13;
  float afStack_70 [4];
  float fStack_60;
  float fStack_5c;
  float afStack_50 [4];
  float fStack_40;
  float fStack_3c;
  
  iVar2 = *param_1;
  iVar3 = param_1[1];
  uVar4 = param_1[5];
  uVar10 = (ulonglong)(uint)param_1[6];
  iVar5 = param_1[8];
  if (param_1[9] != 0) {
    uVar10 = 1;
  }
  if (5 < (uVar10 - 1 & 0xffffffff)) goto LAB_82a60900;
  bVar1 = (int)(uVar10 - 1) != 0;
  if (uVar10 == 2 && bVar1) {
    pfVar14 = (float *)param_1[3];
    afStack_70[0] = *(float *)param_1[2];
    afStack_70[1] = ((float *)param_1[2])[3];
    if (pfVar14 == (float *)0x0) goto LAB_82a60900;
    afStack_50[1] = pfVar14[3];
LAB_82a608f4:;}
  else {
    if (uVar10 == 3 && bVar1) {
      pfVar11 = (float *)param_1[2];
      pfVar14 = (float *)param_1[3];
      afStack_70[0] = *pfVar11;
      afStack_70[1] = pfVar11[4];
      afStack_70[2] = pfVar11[8];
      if (pfVar14 == (float *)0x0) goto LAB_82a60900;
      afStack_50[1] = pfVar14[4];
      afStack_50[2] = pfVar14[8];
LAB_82a608f0:
      goto LAB_82a608f4;
    }
    if (uVar10 == 4 && bVar1) {
      pfVar11 = (float *)param_1[2];
      pfVar14 = (float *)param_1[3];
      afStack_70[0] = *pfVar11;
      afStack_70[1] = pfVar11[5];
      afStack_70[2] = pfVar11[10];
      afStack_70[3] = pfVar11[0xf];
      if (pfVar14 == (float *)0x0) goto LAB_82a60900;
      afStack_50[1] = pfVar14[5];
      afStack_50[2] = pfVar14[10];
      afStack_50[3] = pfVar14[0xf];
LAB_82a608ec:
      goto LAB_82a608f0;
    }
    if (uVar10 == 5 && bVar1) {
      pfVar11 = (float *)param_1[2];
      pfVar14 = (float *)param_1[3];
      afStack_70[0] = *pfVar11;
      afStack_70[1] = pfVar11[6];
      afStack_70[2] = pfVar11[0xc];
      afStack_70[3] = pfVar11[0x12];
      fStack_60 = pfVar11[0x18];
      if (pfVar14 == (float *)0x0) goto LAB_82a60900;
      afStack_50[1] = pfVar14[6];
      afStack_50[2] = pfVar14[0xc];
      afStack_50[3] = pfVar14[0x12];
      fStack_40 = pfVar14[0x18];
LAB_82a608e8:
      goto LAB_82a608ec;
    }
    if (bVar1) {
      pfVar11 = (float *)param_1[2];
      pfVar14 = (float *)param_1[3];
      afStack_70[0] = *pfVar11;
      afStack_70[1] = pfVar11[7];
      afStack_70[2] = pfVar11[0xe];
      afStack_70[3] = pfVar11[0x15];
      fStack_60 = pfVar11[0x1c];
      fStack_5c = pfVar11[0x23];
      if (pfVar14 == (float *)0x0) goto LAB_82a60900;
      afStack_50[1] = pfVar14[7];
      afStack_50[2] = pfVar14[0xe];
      afStack_50[3] = pfVar14[0x15];
      fStack_40 = pfVar14[0x1c];
      fStack_3c = pfVar14[0x23];
      goto LAB_82a608e8;
    }
    pfVar14 = (float *)param_1[3];
    afStack_70[0] = *(float *)param_1[2];
    if (pfVar14 == (float *)0x0) goto LAB_82a60900;
  }
  afStack_50[0] = *pfVar14;
LAB_82a60900:
  uVar13 = 0;
  uVar9 = 0;
  if (param_1[3] == 0) {
    if (3 < (int)uVar4) {
      pfVar14 = (float *)(iVar2 + 0xc);
      pfVar11 = (float *)(iVar3 + 4);
      lVar6 = 0;
      do {
        fVar7 = *(float *)((int)afStack_70 + (int)lVar6) * pfVar14[-3];
        if (iVar5 == 0) {
          pfVar11[-1] = fVar7;
        }
        else {
          pfVar11[-1] = pfVar11[-1] + fVar7;
        }
        uVar13 = -(ulonglong)(uVar13 + 1 < uVar10) & uVar13 + 1;
        fVar7 = *(float *)((int)afStack_70 + (int)((uVar13 & 0xffffffff) << 2)) *
                *(float *)((iVar2 - iVar3) + (int)pfVar11);
        if (iVar5 == 0) {
          *pfVar11 = fVar7;
        }
        else {
          *pfVar11 = *pfVar11 + fVar7;
        }
        uVar13 = uVar13 + 1;
        uVar13 = -(ulonglong)(uVar13 < uVar10) & uVar13;
        fVar7 = *(float *)((int)afStack_70 + (int)((uVar13 & 0xffffffff) << 2)) * pfVar14[-1];
        if (iVar5 == 0) {
          pfVar11[1] = fVar7;
        }
        else {
          pfVar11[1] = pfVar11[1] + fVar7;
        }
        uVar13 = uVar13 + 1;
        uVar13 = -(ulonglong)(uVar13 < uVar10) & uVar13;
        fVar7 = *(float *)((int)afStack_70 + (int)((uVar13 & 0xffffffff) << 2)) * *pfVar14;
        if (iVar5 == 0) {
          pfVar11[2] = fVar7;
        }
        else {
          pfVar11[2] = pfVar11[2] + fVar7;
        }
        uVar13 = uVar13 + 1;
        uVar9 = uVar9 + 4;
        pfVar11 = pfVar11 + 4;
        pfVar14 = pfVar14 + 4;
        uVar13 = -(ulonglong)(uVar13 < uVar10) & uVar13;
        lVar6 = (uVar13 & 0xffffffff) << 2;
      } while (uVar9 < uVar4 - 3);
    }
    if (uVar9 < uVar4) {
      iVar12 = uVar4 - uVar9;
      pfVar14 = (float *)(uVar9 * 4 + iVar3);
      do {
        fVar7 = *(float *)((int)afStack_70 + (int)((uVar13 & 0xffffffff) << 2)) *
                *(float *)((int)pfVar14 + (iVar2 - iVar3));
        if (iVar5 == 0) {
          *pfVar14 = fVar7;
        }
        else {
          *pfVar14 = *pfVar14 + fVar7;
        }
        pfVar14 = pfVar14 + 1;
        uVar13 = -(ulonglong)(uVar13 + 1 < uVar10) & uVar13 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
  else {
    if (3 < (int)uVar4) {
      pfVar11 = (float *)(iVar2 + 0xc);
      pfVar14 = (float *)(iVar3 + 4);
      do {
        iVar12 = (int)((uVar13 & 0x3fffffff) << 2);
        fVar7 = pfVar11[-3] * *(float *)((int)afStack_70 + iVar12);
        *(float *)((int)afStack_70 + iVar12) =
             *(float *)((int)afStack_50 + iVar12) + *(float *)((int)afStack_70 + iVar12);
        if (iVar5 == 0) {
          pfVar14[-1] = fVar7;
        }
        else {
          pfVar14[-1] = pfVar14[-1] + fVar7;
        }
        uVar13 = -(ulonglong)(uVar13 + 1 < uVar10) & uVar13 + 1;
        iVar12 = (int)((uVar13 & 0x3fffffff) << 2);
        fVar7 = *(float *)((int)pfVar14 + (iVar2 - iVar3)) * *(float *)((int)afStack_70 + iVar12);
        *(float *)((int)afStack_70 + iVar12) =
             *(float *)((int)afStack_50 + iVar12) + *(float *)((int)afStack_70 + iVar12);
        if (iVar5 == 0) {
          *pfVar14 = fVar7;
        }
        else {
          *pfVar14 = *pfVar14 + fVar7;
        }
        uVar13 = uVar13 + 1;
        uVar13 = -(ulonglong)(uVar13 < uVar10) & uVar13;
        iVar12 = (int)((uVar13 & 0x3fffffff) << 2);
        fVar7 = pfVar11[-1] * *(float *)((int)afStack_70 + iVar12);
        *(float *)((int)afStack_70 + iVar12) =
             *(float *)((int)afStack_50 + iVar12) + *(float *)((int)afStack_70 + iVar12);
        if (iVar5 == 0) {
          pfVar14[1] = fVar7;
        }
        else {
          pfVar14[1] = pfVar14[1] + fVar7;
        }
        uVar13 = uVar13 + 1;
        uVar13 = -(ulonglong)(uVar13 < uVar10) & uVar13;
        iVar12 = (int)((uVar13 & 0x3fffffff) << 2);
        fVar7 = *pfVar11 * *(float *)((int)afStack_70 + iVar12);
        *(float *)((int)afStack_70 + iVar12) =
             *(float *)((int)afStack_50 + iVar12) + *(float *)((int)afStack_70 + iVar12);
        if (iVar5 == 0) {
          pfVar14[2] = fVar7;
        }
        else {
          pfVar14[2] = pfVar14[2] + fVar7;
        }
        uVar13 = uVar13 + 1;
        uVar9 = uVar9 + 4;
        pfVar14 = pfVar14 + 4;
        pfVar11 = pfVar11 + 4;
        uVar13 = -(ulonglong)(uVar13 < uVar10) & uVar13;
      } while (uVar9 < uVar4 - 3);
    }
    if (uVar9 < uVar4) {
      iVar12 = uVar4 - uVar9;
      pfVar14 = (float *)(uVar9 * 4 + iVar3);
      do {
        iVar8 = (int)((uVar13 & 0x3fffffff) << 2);
        fVar7 = *(float *)((int)pfVar14 + (iVar2 - iVar3)) * *(float *)((int)afStack_70 + iVar8);
        *(float *)((int)afStack_70 + iVar8) =
             *(float *)((int)afStack_50 + iVar8) + *(float *)((int)afStack_70 + iVar8);
        if (iVar5 == 0) {
          *pfVar14 = fVar7;
        }
        else {
          *pfVar14 = *pfVar14 + fVar7;
        }
        pfVar14 = pfVar14 + 1;
        uVar13 = -(ulonglong)(uVar13 + 1 < uVar10) & uVar13 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
  return;
}

