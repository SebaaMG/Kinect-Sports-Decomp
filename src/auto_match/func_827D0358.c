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
extern unsigned int *auStack_104;


void fn_827D0358(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 uVar8;
  short *psVar9;
  undefined1 *puVar10;
  int *piVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_104 [20];
  int aiStack_f0 [16];
  int aiStack_b0 [8];
  int aiStack_90 [36];
  
  piVar11 = *(int **)(param_2 + 0x50);
  piVar7 = aiStack_f0 + 8;
  iVar13 = *(int *)(param_1 + 0x120) + 0x80;
  iVar14 = 8;
  lVar15 = 8;
  psVar9 = (short *)(param_3 + 0x60);
  do {
    if (iVar14 != 4) {
      if ((((psVar9[-0x28] == 0) && (psVar9[-0x20] == 0)) && (psVar9[-0x18] == 0)) &&
         (((psVar9[-8] == 0 && (*psVar9 == 0)) && (psVar9[8] == 0)))) {
        iVar5 = (int)psVar9[-0x30] * *piVar11 * 4;
        piVar7[-8] = iVar5;
        piVar7[8] = iVar5;
        piVar7[0x10] = iVar5;
      }
      else {
        iVar4 = piVar11[8] * (int)psVar9[-0x28];
        iVar5 = (int)psVar9[-0x20] * piVar11[0x10] * 0x3b21 + (int)*psVar9 * piVar11[0x30] * -0x187e
        ;
        iVar3 = (int)psVar9[-0x30] * *piVar11 * 0x4000;
        iVar2 = iVar4 * 0x5203 + (int)psVar9[-0x18] * piVar11[0x18] * 0x1ccd +
                (int)psVar9[-8] * piVar11[0x28] * -0x133e + (int)psVar9[8] * piVar11[0x38] * -0x1050
        ;
        iVar1 = iVar5 + iVar3;
        iVar3 = iVar3 - iVar5;
        iVar4 = (int)psVar9[-8] * piVar11[0x28] * 0x2e75 +
                (int)psVar9[-0x18] * piVar11[0x18] * -0x4587 + iVar4 * 0x21f9 +
                (int)psVar9[8] * piVar11[0x38] * -0x6c2;
        piVar7[-8] = iVar1 + iVar2 + 0x800 >> 0xc;
        iVar5 = iVar3 + iVar4 + 0x800 >> 0xc;
        piVar7[0x10] = (iVar1 - iVar2) + 0x800 >> 0xc;
        piVar7[8] = (iVar3 - iVar4) + 0x800 >> 0xc;
      }
      *piVar7 = iVar5;
    }
    psVar9 = psVar9 + 1;
    piVar11 = piVar11 + 1;
    piVar7 = piVar7 + 1;
    iVar14 = iVar14 + -1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  puVar12 = auStack_104;
  lVar15 = 4;
  do {
    iVar14 = *(int *)(puVar12 + 0x18);
    puVar10 = (undefined1 *)(*param_4 + param_5);
    if (((iVar14 == 0) && (*(int *)(puVar12 + 0x1c) == 0)) &&
       ((*(int *)(puVar12 + 0x20) == 0 &&
        (((*(int *)(puVar12 + 0x28) == 0 && (*(int *)(puVar12 + 0x2c) == 0)) &&
         (*(int *)(puVar12 + 0x30) == 0)))))) {
      uVar8 = *(undefined1 *)((*(int *)(puVar12 + 0x14) + 0x10 >> 5 & 0x3ffU) + iVar13);
      *puVar10 = uVar8;
      puVar10[1] = uVar8;
      puVar10[3] = uVar8;
    }
    else {
      iVar5 = *(int *)(puVar12 + 0x30);
      iVar1 = *(int *)(puVar12 + 0x28);
      iVar2 = *(int *)(puVar12 + 0x20);
      iVar4 = *(int *)(puVar12 + 0x1c) * 0x3b21 + *(int *)(puVar12 + 0x2c) * -0x187e;
      iVar6 = iVar4 + *(int *)(puVar12 + 0x14) * 0x4000;
      iVar3 = iVar14 * 0x5203 + iVar2 * 0x1ccd + iVar1 * -0x133e + iVar5 * -0x1050;
      iVar4 = *(int *)(puVar12 + 0x14) * 0x4000 - iVar4;
      *puVar10 = *(undefined1 *)((iVar6 + iVar3 + 0x40000 >> 0x13 & 0x3ffU) + iVar13);
      iVar14 = iVar1 * 0x2e75 + iVar2 * -0x4587 + iVar14 * 0x21f9 + iVar5 * -0x6c2;
      puVar10[3] = *(undefined1 *)(((iVar6 - iVar3) + 0x40000 >> 0x13 & 0x3ffU) + iVar13);
      puVar10[1] = *(undefined1 *)((iVar4 + iVar14 + 0x40000 >> 0x13 & 0x3ffU) + iVar13);
      uVar8 = *(undefined1 *)(((iVar4 - iVar14) + 0x40000 >> 0x13 & 0x3ffU) + iVar13);
    }
    puVar12 = puVar12 + 0x20;
    puVar10[2] = uVar8;
    param_4 = param_4 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  return;
}

