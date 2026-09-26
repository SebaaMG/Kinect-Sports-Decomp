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
extern unsigned int *auStack_40;


short * fn_82D34928(int param_1,ushort param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  short *psVar6;
  uint uVar7;
  bool bVar8;
  short *psVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  short *psVar13;
  short *psVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  short sStack_42;
  ushort auStack_40 [32];
  
  iVar10 = *(int *)(param_1 + 0x1c);
  uVar15 = ((uint)param_2 + (uint)param_2 * 4) * 4 + iVar10;
  uVar1 = *(ushort *)(uVar15 + 0x10);
  uVar7 = uVar1 & 0x7fff;
  if (uVar7 == 0x7fff) {
    iVar16 = 0;
  }
  else {
    iVar16 = (uVar7 + (uVar1 & 0x7fff) * 4) * 4 + iVar10;
  }
  uVar2 = *(ushort *)(iVar16 + 0x10);
  uVar7 = uVar2 & 0x7fff;
  if (uVar7 == 0x7fff) {
    psVar9 = (short *)0x0;
  }
  else {
    psVar9 = (short *)((uVar7 + (uVar2 & 0x7fff) * 4) * 4 + iVar10);
  }
  uVar3 = *(ushort *)(iVar16 + 0xe);
  uVar4 = *(ushort *)(iVar16 + 0xc);
  *param_3 = uVar1 & 0x7fff;
  param_2 = uVar4 ^ uVar3 ^ param_2;
  uVar15 = (uint)uVar4 * 0x14 + iVar10 ^ (uint)uVar3 * 0x14 + iVar10 ^ uVar15;
  if (psVar9 == (short *)0x0) {
    *(uint *)(param_1 + 0x10) = uVar15;
    *(ushort *)(uVar15 + 0x10) = *(ushort *)(uVar15 + 0x10) | 0x7fff;
    *(ushort *)(param_1 + 0x14) = param_2;
    psVar14 = *(short **)(param_1 + 0x10);
  }
  else {
    bVar8 = iVar16 == (uint)(ushort)psVar9[7] * 0x14 + *(int *)(param_1 + 0x1c);
    psVar9[bVar8 + 6] = param_2;
    *(ushort *)(uVar15 + 0x10) = *(ushort *)(uVar15 + 0x10) & 0x8000 | uVar2 & 0x7fff;
    psVar6 = *(short **)(param_1 + 0x10);
    if (bVar8) {
      iVar10 = (uint)(ushort)psVar9[6] * 0x14 + *(int *)(param_1 + 0x1c);
      uVar1 = *(ushort *)(iVar10 + 0x10);
      *(ushort *)(iVar10 + 0x12) = param_2;
      while ((uVar1 & 0x8000) == 0) {
        iVar10 = (uint)*(ushort *)(iVar10 + 0xe) * 0x14 + *(int *)(param_1 + 0x1c);
        *(ushort *)(iVar10 + 0x12) = param_2;
        uVar1 = *(ushort *)(iVar10 + 0x10);
      }
    }
    do {
      puVar11 = (ushort *)((uint)(ushort)psVar9[7] * 0x14 + *(int *)(param_1 + 0x1c));
      puVar12 = (ushort *)((uint)(ushort)psVar9[6] * 0x14 + *(int *)(param_1 + 0x1c));
      auStack_40[3] = puVar11[3];
      if (puVar12[3] < puVar11[3]) {
        auStack_40[3] = puVar12[3];
      }
      auStack_40[0] = *puVar11;
      if (*puVar11 < *puVar12) {
        auStack_40[0] = *puVar12;
      }
      auStack_40[4] = puVar12[4];
      if (puVar11[4] <= puVar12[4]) {
        auStack_40[4] = puVar11[4];
      }
      auStack_40[1] = puVar12[1];
      if (puVar12[1] <= puVar11[1]) {
        auStack_40[1] = puVar11[1];
      }
      auStack_40[5] = puVar11[5];
      if (puVar12[5] < puVar11[5]) {
        auStack_40[5] = puVar12[5];
      }
      auStack_40[2] = puVar12[2];
      if (puVar12[2] <= puVar11[2]) {
        auStack_40[2] = puVar11[2];
      }
      iVar10 = 0;
      psVar13 = psVar9;
      while ((psVar13[3] == *(short *)((int)auStack_40 + -(int)psVar9 + 6 + (int)psVar13) &&
             (*psVar13 == *(short *)((int)auStack_40 + -(int)psVar9 + (int)psVar13)))) {
        iVar10 = iVar10 + 1;
        psVar13 = psVar13 + 1;
        psVar14 = psVar9;
        if (2 < iVar10) goto LAB_82d34c38;
      }
      psVar14 = &sStack_42;
      psVar13 = psVar9 + -1;
      lVar17 = 6;
      do {
        psVar14 = psVar14 + 1;
        psVar13 = psVar13 + 1;
        *psVar13 = *psVar14;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      uVar7 = (ushort)psVar9[8] & 0x7fff;
      psVar14 = psVar6;
    } while ((uVar7 != 0x7fff) &&
            (psVar9 = (short *)((uVar7 + ((ushort)psVar9[8] & 0x7fff) * 4) * 4 +
                               *(int *)(param_1 + 0x1c)), psVar9 != (short *)0x0));
  }
LAB_82d34c38:
  if ((uint)*(ushort *)(iVar16 + 0xc) * 0x14 + *(int *)(param_1 + 0x1c) == uVar15) {
    uVar5 = *(undefined2 *)(iVar16 + 0x12);
    uVar1 = *(ushort *)(uVar15 + 0x10);
    *(undefined2 *)(uVar15 + 0x12) = uVar5;
    while ((uVar1 & 0x8000) == 0) {
      uVar15 = (uint)*(ushort *)(uVar15 + 0xe) * 0x14 + *(int *)(param_1 + 0x1c);
      *(undefined2 *)(uVar15 + 0x12) = uVar5;
      uVar1 = *(ushort *)(uVar15 + 0x10);
    }
  }
  return psVar14;
}

