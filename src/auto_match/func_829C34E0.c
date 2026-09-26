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
extern unsigned int *auStack_194;


void fn_829C34E0(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
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
  undefined1 auStack_194 [20];
  int aiStack_180 [16];
  int aiStack_140 [8];
  int aiStack_120 [7];
  undefined1 auStack_104 [4];
  int aiStack_100 [8];
  int aiStack_e0 [8];
  int aiStack_c0 [8];
  int aiStack_a0 [40];
  
  param_3 = param_3 + 0x2e;
  iVar6 = *(int *)(param_1 + 0x148) + 0x80;
  iVar7 = *(int *)(param_2 + 0x50) + 0xe;
  puVar8 = auStack_104;
  lVar20 = 8;
  do {
    if ((((*(short *)(param_3 + -0x1e) == 0) && (*(short *)(param_3 + -0xe) == 0)) &&
        (*(short *)(param_3 + 2) == 0)) &&
       (((*(short *)(param_3 + 0x12) == 0 && (*(short *)(param_3 + 0x22) == 0)) &&
        ((*(short *)(param_3 + 0x32) == 0 && (*(short *)(param_3 + 0x42) == 0)))))) {
      iVar15 = (int)*(short *)(iVar7 + -0xe) * (int)*(short *)(param_3 + -0x2e) * 4;
      *(int *)(puVar8 + -0x7c) = iVar15;
      *(int *)(puVar8 + -0x5c) = iVar15;
      *(int *)(puVar8 + -0x3c) = iVar15;
      *(int *)(puVar8 + -0x1c) = iVar15;
      *(int *)(puVar8 + 4) = iVar15;
      *(int *)(puVar8 + 0x24) = iVar15;
      *(int *)(puVar8 + 0x44) = iVar15;
      *(int *)(puVar8 + 100) = iVar15;
    }
    else {
      iVar15 = (int)*(short *)(iVar7 + 0x12) * (int)*(short *)(param_3 + -0xe);
      iVar1 = (int)*(short *)(iVar7 + 2) * (int)*(short *)(param_3 + -0x1e);
      iVar19 = (int)*(short *)(iVar7 + 0x62) * (int)*(short *)(param_3 + 0x42);
      iVar18 = (int)*(short *)(iVar7 + 0x42) * (int)*(short *)(param_3 + 0x22);
      iVar4 = (int)*(short *)(iVar7 + 0x22) * (int)*(short *)(param_3 + 2);
      iVar13 = (int)*(short *)(iVar7 + 0x52) * (int)*(short *)(param_3 + 0x32);
      iVar14 = (int)*(short *)(iVar7 + -0xe) * (int)*(short *)(param_3 + -0x2e);
      iVar5 = (int)*(short *)(iVar7 + 0x32) * (int)*(short *)(param_3 + 0x12);
      iVar17 = (iVar18 + iVar1 + iVar19 + iVar4) * 0x25a1;
      iVar12 = (iVar13 + iVar15) * 0x1151;
      iVar11 = iVar17 + (iVar18 + iVar1) * -0xc7c;
      iVar2 = iVar15 * 0x187e + iVar12;
      iVar16 = (iVar5 + iVar14) * 0x2000;
      iVar10 = (iVar19 + iVar1) * -0x1ccd;
      iVar15 = iVar16 + iVar2;
      iVar16 = iVar16 - iVar2;
      iVar1 = iVar1 * 0x300b + iVar11 + iVar10;
      iVar17 = iVar17 + (iVar19 + iVar4) * -0x3ec5;
      iVar12 = iVar12 + iVar13 * -0x3b21;
      iVar14 = (iVar14 - iVar5) * 0x2000;
      iVar13 = (iVar18 + iVar4) * -0x5203;
      iVar5 = iVar14 + iVar12;
      iVar14 = iVar14 - iVar12;
      *(int *)(puVar8 + -0x7c) = iVar15 + iVar1 + 0x400 >> 0xb;
      iVar2 = iVar19 * 0x98e + iVar10 + iVar17;
      iVar19 = iVar18 * 0x41b3 + iVar11 + iVar13;
      iVar13 = iVar4 * 0x6254 + iVar17 + iVar13;
      *(int *)(puVar8 + 100) = (iVar15 - iVar1) + 0x400 >> 0xb;
      *(int *)(puVar8 + -0x5c) = iVar5 + iVar13 + 0x400 >> 0xb;
      *(int *)(puVar8 + 0x44) = (iVar5 - iVar13) + 0x400 >> 0xb;
      *(int *)(puVar8 + -0x3c) = iVar14 + iVar19 + 0x400 >> 0xb;
      *(int *)(puVar8 + 0x24) = (iVar14 - iVar19) + 0x400 >> 0xb;
      *(int *)(puVar8 + -0x1c) = iVar16 + iVar2 + 0x400 >> 0xb;
      *(int *)(puVar8 + 4) = (iVar16 - iVar2) + 0x400 >> 0xb;
    }
    puVar8 = puVar8 + 4;
    param_3 = param_3 + 2;
    iVar7 = iVar7 + 2;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  puVar8 = auStack_194;
  lVar20 = 8;
  do {
    iVar7 = *(int *)(puVar8 + 0x18);
    puVar9 = (undefined1 *)(*param_4 + param_5);
    if ((((iVar7 == 0) && (*(int *)(puVar8 + 0x1c) == 0)) &&
        ((*(int *)(puVar8 + 0x20) == 0 &&
         (((*(int *)(puVar8 + 0x24) == 0 && (*(int *)(puVar8 + 0x28) == 0)) &&
          (*(int *)(puVar8 + 0x2c) == 0)))))) && (*(int *)(puVar8 + 0x30) == 0)) {
      uVar3 = *(undefined1 *)((*(int *)(puVar8 + 0x14) + 0x10 >> 5 & 0x3ffU) + iVar6);
      *puVar9 = uVar3;
      puVar9[1] = uVar3;
      puVar9[2] = uVar3;
      puVar9[3] = uVar3;
      puVar9[5] = uVar3;
      puVar9[6] = uVar3;
      puVar9[7] = uVar3;
    }
    else {
      iVar15 = *(int *)(puVar8 + 0x30);
      iVar1 = *(int *)(puVar8 + 0x28);
      iVar2 = *(int *)(puVar8 + 0x2c);
      iVar19 = *(int *)(puVar8 + 0x24);
      iVar12 = *(int *)(puVar8 + 0x14);
      iVar4 = *(int *)(puVar8 + 0x20);
      iVar10 = (iVar1 + iVar7 + iVar15 + iVar4) * 0x25a1;
      iVar18 = (iVar2 + *(int *)(puVar8 + 0x1c)) * 0x1151;
      iVar13 = iVar10 + (iVar1 + iVar7) * -0xc7c;
      iVar17 = *(int *)(puVar8 + 0x1c) * 0x187e + iVar18;
      iVar5 = (iVar12 + iVar19) * 0x2000;
      iVar14 = (iVar15 + iVar7) * -0x1ccd;
      iVar11 = iVar5 - iVar17;
      iVar5 = iVar5 + iVar17;
      iVar17 = iVar7 * 0x300b + iVar13 + iVar14;
      iVar10 = iVar10 + (iVar15 + iVar4) * -0x3ec5;
      *puVar9 = *(undefined1 *)((iVar5 + iVar17 + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
      iVar16 = (iVar1 + iVar4) * -0x5203;
      iVar19 = (iVar12 - iVar19) * 0x2000;
      iVar18 = iVar18 + iVar2 * -0x3b21;
      iVar2 = iVar4 * 0x6254 + iVar10 + iVar16;
      iVar7 = iVar19 + iVar18;
      puVar9[7] = *(undefined1 *)(((iVar5 - iVar17) + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
      iVar19 = iVar19 - iVar18;
      iVar16 = iVar1 * 0x41b3 + iVar13 + iVar16;
      puVar9[1] = *(undefined1 *)((iVar7 + iVar2 + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
      puVar9[6] = *(undefined1 *)(((iVar7 - iVar2) + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
      iVar10 = iVar15 * 0x98e + iVar14 + iVar10;
      puVar9[2] = *(undefined1 *)((iVar19 + iVar16 + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
      puVar9[5] = *(undefined1 *)(((iVar19 - iVar16) + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
      puVar9[3] = *(undefined1 *)((iVar11 + iVar10 + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
      uVar3 = *(undefined1 *)(((iVar11 - iVar10) + 0x20000 >> 0x12 & 0x3ffU) + iVar6);
    }
    puVar8 = puVar8 + 0x20;
    puVar9[4] = uVar3;
    param_4 = param_4 + 1;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  return;
}

