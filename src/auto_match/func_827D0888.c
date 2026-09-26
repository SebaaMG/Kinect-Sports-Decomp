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
extern unsigned int *auStack_114;
extern unsigned int *auStack_1a4;


void fn_827D0888(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auStack_1a4 [20];
  int aiStack_190 [16];
  int aiStack_150 [8];
  int aiStack_130 [7];
  undefined1 auStack_114 [4];
  int aiStack_110 [8];
  int aiStack_f0 [8];
  int aiStack_d0 [8];
  int aiStack_b0 [44];
  
  param_3 = param_3 + 0x2e;
  iVar6 = *(int *)(param_1 + 0x120) + 0x80;
  iVar7 = *(int *)(param_2 + 0x50) + 0x1c;
  puVar8 = auStack_114;
  lVar20 = 8;
  do {
    if ((((*(short *)(param_3 + -0x1e) == 0) && (*(short *)(param_3 + -0xe) == 0)) &&
        (*(short *)(param_3 + 2) == 0)) &&
       (((*(short *)(param_3 + 0x12) == 0 && (*(short *)(param_3 + 0x22) == 0)) &&
        ((*(short *)(param_3 + 0x32) == 0 && (*(short *)(param_3 + 0x42) == 0)))))) {
      iVar14 = (int)*(short *)(param_3 + -0x2e) * *(int *)(iVar7 + -0x1c) * 4;
      *(int *)(puVar8 + -0x7c) = iVar14;
      *(int *)(puVar8 + -0x5c) = iVar14;
      *(int *)(puVar8 + -0x3c) = iVar14;
      *(int *)(puVar8 + -0x1c) = iVar14;
      *(int *)(puVar8 + 4) = iVar14;
      *(int *)(puVar8 + 0x24) = iVar14;
      *(int *)(puVar8 + 0x44) = iVar14;
      *(int *)(puVar8 + 100) = iVar14;
    }
    else {
      iVar14 = (int)*(short *)(param_3 + -0xe) * *(int *)(iVar7 + 0x24);
      iVar13 = (int)*(short *)(param_3 + 0x32) * *(int *)(iVar7 + 0xa4);
      iVar19 = (int)*(short *)(param_3 + -0x2e) * *(int *)(iVar7 + -0x1c);
      iVar11 = (int)*(short *)(param_3 + 0x12) * *(int *)(iVar7 + 100);
      iVar3 = (int)*(short *)(param_3 + 0x42) * *(int *)(iVar7 + 0xc4);
      iVar16 = (int)*(short *)(param_3 + 2) * *(int *)(iVar7 + 0x44);
      iVar1 = (int)*(short *)(param_3 + -0x1e) * *(int *)(iVar7 + 4);
      iVar18 = (int)*(short *)(param_3 + 0x22) * *(int *)(iVar7 + 0x84);
      iVar4 = (iVar18 + iVar1 + iVar3 + iVar16) * 0x25a1;
      iVar15 = (iVar13 + iVar14) * 0x1151;
      iVar10 = iVar4 + (iVar18 + iVar1) * -0xc7c;
      iVar2 = iVar14 * 0x187e + iVar15;
      iVar17 = (iVar11 + iVar19) * 0x2000;
      iVar12 = (iVar3 + iVar1) * -0x1ccd;
      iVar14 = iVar17 + iVar2;
      iVar17 = iVar17 - iVar2;
      iVar4 = iVar4 + (iVar3 + iVar16) * -0x3ec5;
      iVar1 = iVar1 * 0x300b + iVar10 + iVar12;
      iVar15 = iVar15 + iVar13 * -0x3b21;
      iVar19 = (iVar19 - iVar11) * 0x2000;
      iVar11 = (iVar18 + iVar16) * -0x5203;
      iVar2 = iVar19 + iVar15;
      iVar16 = iVar16 * 0x6254 + iVar4 + iVar11;
      *(int *)(puVar8 + -0x7c) = iVar14 + iVar1 + 0x400 >> 0xb;
      *(int *)(puVar8 + 100) = (iVar14 - iVar1) + 0x400 >> 0xb;
      *(int *)(puVar8 + -0x5c) = iVar2 + iVar16 + 0x400 >> 0xb;
      iVar19 = iVar19 - iVar15;
      iVar11 = iVar18 * 0x41b3 + iVar10 + iVar11;
      iVar4 = iVar3 * 0x98e + iVar12 + iVar4;
      *(int *)(puVar8 + 0x44) = (iVar2 - iVar16) + 0x400 >> 0xb;
      *(int *)(puVar8 + -0x3c) = iVar19 + iVar11 + 0x400 >> 0xb;
      *(int *)(puVar8 + 0x24) = (iVar19 - iVar11) + 0x400 >> 0xb;
      *(int *)(puVar8 + -0x1c) = iVar17 + iVar4 + 0x400 >> 0xb;
      *(int *)(puVar8 + 4) = (iVar17 - iVar4) + 0x400 >> 0xb;
    }
    puVar8 = puVar8 + 4;
    iVar7 = iVar7 + 4;
    param_3 = param_3 + 2;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  puVar8 = auStack_1a4;
  lVar20 = 8;
  do {
    iVar7 = *(int *)(puVar8 + 0x18);
    puVar9 = (undefined1 *)(*param_4 + param_5);
    if ((((iVar7 == 0) && (*(int *)(puVar8 + 0x1c) == 0)) &&
        ((*(int *)(puVar8 + 0x20) == 0 &&
         (((*(int *)(puVar8 + 0x24) == 0 && (*(int *)(puVar8 + 0x28) == 0)) &&
          (*(int *)(puVar8 + 0x2c) == 0)))))) && (*(int *)(puVar8 + 0x30) == 0)) {
      uVar5 = *(undefined1 *)((*(int *)(puVar8 + 0x14) + 0x10 >> 5 & 0x3ffU) + iVar6);
      *puVar9 = uVar5;
      puVar9[1] = uVar5;
      puVar9[2] = uVar5;
      puVar9[3] = uVar5;
      puVar9[5] = uVar5;
      puVar9[6] = uVar5;
      puVar9[7] = uVar5;
    }
    else {
      iVar14 = *(int *)(puVar8 + 0x30);
      iVar1 = *(int *)(puVar8 + 0x28);
      iVar2 = *(int *)(puVar8 + 0x2c);
      iVar3 = *(int *)(puVar8 + 0x24);
      iVar11 = *(int *)(puVar8 + 0x14);
      iVar16 = *(int *)(puVar8 + 0x20);
      iVar19 = (iVar1 + iVar7 + iVar14 + iVar16) * 0x25a1;
      iVar18 = (iVar2 + *(int *)(puVar8 + 0x1c)) * 0x1151;
      iVar15 = iVar19 + (iVar1 + iVar7) * -0xc7c;
      iVar17 = *(int *)(puVar8 + 0x1c) * 0x187e + iVar18;
      iVar12 = (iVar11 + iVar3) * 0x2000;
      iVar13 = (iVar14 + iVar7) * -0x1ccd;
      iVar4 = iVar12 + iVar17;
      iVar12 = iVar12 - iVar17;
      iVar17 = iVar7 * 0x300b + iVar15 + iVar13;
      iVar19 = iVar19 + (iVar14 + iVar16) * -0x3ec5;
      *puVar9 = *(undefined1 *)((iVar4 + iVar17 + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
      iVar10 = (iVar1 + iVar16) * -0x5203;
      iVar3 = (iVar11 - iVar3) * 0x2000;
      iVar18 = iVar18 + iVar2 * -0x3b21;
      iVar2 = iVar16 * 0x6254 + iVar19 + iVar10;
      iVar7 = iVar3 + iVar18;
      iVar3 = iVar3 - iVar18;
      puVar9[7] = *(undefined1 *)(((iVar4 - iVar17) + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
      iVar10 = iVar1 * 0x41b3 + iVar15 + iVar10;
      puVar9[1] = *(undefined1 *)((iVar7 + iVar2 + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
      puVar9[6] = *(undefined1 *)(((iVar7 - iVar2) + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
      iVar19 = iVar14 * 0x98e + iVar13 + iVar19;
      puVar9[2] = *(undefined1 *)((iVar3 + iVar10 + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
      puVar9[5] = *(undefined1 *)(((iVar3 - iVar10) + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
      puVar9[3] = *(undefined1 *)((iVar12 + iVar19 + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
      uVar5 = *(undefined1 *)(((iVar12 - iVar19) + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
    }
    puVar8 = puVar8 + 0x20;
    puVar9[4] = uVar5;
    param_4 = param_4 + 1;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  return;
}

