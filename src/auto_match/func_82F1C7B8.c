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
extern unsigned int lbl_8200E1A8;


void fn_82F1C7B8(int param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  
  fVar4 = lbl_8200E1A8;
  fVar3 = lbl_82002AE0;
  iVar11 = 2;
  iVar7 = 0xc;
  iVar9 = 0x53;
  lVar15 = 0x1f;
  iVar10 = 0x23;
  piVar12 = (int *)(param_1 + 0x6080);
  iVar5 = -2;
  iVar13 = 0x6f;
  iVar14 = 0x2f;
  do {
    uVar1 = iVar11 >> 1;
    if ((int)uVar1 < 5) {
      if ((*(int *)(param_1 + 0x624) == 0) || (2 < (int)uVar1)) {
        *piVar12 = 8;
      }
      else {
        *piVar12 = uVar1 << 1;
      }
    }
    else {
      *piVar12 = (iVar11 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0) + 6;
    }
    iVar8 = iVar11 + 1;
    piVar12[-10] = iVar11;
    piVar12[-2] = iVar14;
    piVar12[-1] = iVar13;
    uVar1 = iVar8 >> 1;
    piVar12[-9] = 0;
    piVar12[-4] = iVar10 + -0xc;
    piVar12[-3] = iVar9 + -0x1c;
    piVar12[-6] = iVar11 << 4;
    piVar12[-5] = iVar7 + -4;
    piVar12[-8] = iVar11;
    piVar12[-7] = iVar5;
    piVar12[2] = (int)(fVar3 / (float)(longlong)*piVar12);
    piVar12[1] = (int)(fVar4 / (float)(longlong)(iVar11 << 4));
    if ((int)uVar1 < 5) {
      if ((*(int *)(param_1 + 0x624) != 0) && ((int)uVar1 < 3)) {
        iVar6 = uVar1 << 1;
        goto LAB_82f1c904;
      }
      piVar12[0xd] = 8;
    }
    else {
      iVar6 = (iVar8 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0) + 6;
LAB_82f1c904:
      piVar12[0xd] = iVar6;
    }
    iVar11 = iVar11 + 2;
    iVar5 = iVar5 + -2;
    iVar14 = iVar14 + 0x30;
    iVar13 = iVar13 + 0x70;
    piVar12[0xf] = (int)(fVar3 / (float)(longlong)piVar12[0xd]);
    piVar12[3] = iVar8;
    piVar12[4] = 0;
    piVar12[9] = iVar10;
    iVar10 = iVar10 + 0x18;
    piVar12[10] = iVar9;
    iVar9 = iVar9 + 0x38;
    piVar12[0xb] = piVar12[9] * 2 + 1;
    piVar12[0xc] = piVar12[10] * 2 + 1;
    piVar12[7] = piVar12[3] << 4;
    piVar12[0xe] = (int)(fVar4 / (float)(longlong)(piVar12[3] << 4));
    piVar12[8] = iVar7;
    iVar7 = iVar7 + 8;
    piVar12[5] = piVar12[3];
    piVar12[6] = -piVar12[3];
    piVar12 = piVar12 + 0x1a;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  iVar10 = 2;
  iVar5 = 0xc;
  iVar7 = 0x6b;
  iVar9 = 0x3b;
  piVar12 = (int *)(param_1 + 0x5380);
  lVar15 = 0x1f;
  iVar11 = 0x8f;
  iVar13 = 0x4f;
  do {
    uVar1 = iVar10 >> 1;
    if ((int)uVar1 < 5) {
      if ((*(int *)(param_1 + 0x624) == 0) || (2 < (int)uVar1)) {
        *piVar12 = 8;
      }
      else {
        *piVar12 = uVar1 << 1;
      }
    }
    else {
      *piVar12 = (iVar10 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0) + 6;
    }
    piVar12[-9] = uVar1;
    piVar12[-10] = iVar10;
    piVar12[-8] = uVar1 + iVar10;
    iVar14 = iVar10 + 1;
    uVar2 = iVar14 >> 1;
    piVar12[-2] = iVar13;
    piVar12[-1] = iVar11;
    piVar12[-4] = iVar9 + -0x14;
    piVar12[-3] = iVar7 + -0x24;
    piVar12[-6] = iVar10 << 4;
    piVar12[-5] = iVar5 + -4;
    piVar12[-7] = -(uVar1 + iVar10);
    piVar12[2] = (int)(fVar3 / (float)(longlong)*piVar12);
    piVar12[1] = (int)(fVar4 / (float)(longlong)(iVar10 << 4));
    if ((int)uVar2 < 5) {
      if ((*(int *)(param_1 + 0x624) != 0) && ((int)uVar2 < 3)) {
        iVar8 = uVar2 << 1;
        goto LAB_82f1cae4;
      }
      piVar12[0xd] = 8;
    }
    else {
      iVar8 = (iVar14 >> 2) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0) + 6;
LAB_82f1cae4:
      piVar12[0xd] = iVar8;
    }
    iVar10 = iVar10 + 2;
    iVar13 = iVar13 + 0x50;
    iVar11 = iVar11 + 0x90;
    piVar12[0xf] = (int)(fVar3 / (float)(longlong)piVar12[0xd]);
    piVar12[3] = iVar14;
    piVar12[4] = uVar2;
    piVar12[5] = uVar2 + iVar14;
    piVar12[9] = iVar9;
    iVar9 = iVar9 + 0x28;
    piVar12[10] = iVar7;
    iVar7 = iVar7 + 0x48;
    piVar12[0xb] = piVar12[9] * 2 + 1;
    piVar12[0xc] = piVar12[10] * 2 + 1;
    piVar12[7] = piVar12[3] << 4;
    piVar12[0xe] = (int)(fVar4 / (float)(longlong)(piVar12[3] << 4));
    piVar12[8] = iVar5;
    iVar5 = iVar5 + 8;
    piVar12[6] = -piVar12[5];
    piVar12 = piVar12 + 0x1a;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) {
      return;
    }
  } while( true );
}

