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
extern unsigned int *auStack_174;


void fn_827D0CE8(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_174 [4];
  int aiStack_170 [16];
  int aiStack_130 [7];
  undefined1 auStack_114 [4];
  int aiStack_110 [8];
  int aiStack_f0 [8];
  int aiStack_d0 [8];
  int aiStack_b0 [8];
  int aiStack_90 [36];
  
  param_3 = param_3 + 0x6e;
  iVar7 = *(int *)(param_1 + 0x120) + 0x80;
  iVar9 = *(int *)(param_2 + 0x50) + 0xdc;
  puVar11 = auStack_114;
  lVar18 = 8;
  do {
    if ((((*(short *)(param_3 + -0x5e) == 0) && (*(short *)(param_3 + -0x4e) == 0)) &&
        (*(short *)(param_3 + -0x3e) == 0)) &&
       (((*(short *)(param_3 + -0x2e) == 0 && (*(short *)(param_3 + -0x1e) == 0)) &&
        ((*(short *)(param_3 + -0xe) == 0 && (*(short *)(param_3 + 2) == 0)))))) {
      iVar5 = (int)*(short *)(param_3 + -0x6e) * *(int *)(iVar9 + -0xdc);
      *(int *)(puVar11 + -0x5c) = iVar5;
      *(int *)(puVar11 + -0x3c) = iVar5;
      *(int *)(puVar11 + -0x1c) = iVar5;
      *(int *)(puVar11 + 4) = iVar5;
      *(int *)(puVar11 + 0x24) = iVar5;
      *(int *)(puVar11 + 0x44) = iVar5;
      *(int *)(puVar11 + 100) = iVar5;
      *(int *)(puVar11 + 0x84) = iVar5;
    }
    else {
      iVar12 = (int)*(short *)(param_3 + -0x6e) * *(int *)(iVar9 + -0xdc);
      iVar15 = (int)*(short *)(param_3 + -0x4e) * *(int *)(iVar9 + -0x9c);
      iVar14 = (int)*(short *)(param_3 + -0xe) * *(int *)(iVar9 + -0x1c);
      iVar4 = (int)*(short *)(param_3 + -0x5e) * *(int *)(iVar9 + -0xbc);
      iVar3 = (int)*(short *)(param_3 + 2) * *(int *)(iVar9 + 4);
      iVar17 = (int)*(short *)(param_3 + -0x1e) * *(int *)(iVar9 + -0x3c);
      iVar5 = (int)*(short *)(param_3 + -0x3e) * *(int *)(iVar9 + -0x7c);
      iVar1 = iVar17 - iVar5;
      iVar2 = iVar4 - iVar3;
      iVar17 = iVar17 + iVar5;
      iVar3 = iVar3 + iVar4;
      iVar6 = iVar3 + iVar17;
      iVar5 = (iVar2 + iVar1) * 0x1d9 >> 8;
      iVar4 = iVar14 + iVar15;
      iVar16 = (int)*(short *)(param_3 + -0x2e) * *(int *)(iVar9 + -0x5c);
      iVar13 = iVar16 + iVar12;
      iVar14 = ((iVar15 - iVar14) * 0x16a >> 8) - iVar4;
      iVar12 = iVar12 - iVar16;
      iVar1 = ((iVar1 * -0x29d >> 8) - iVar6) + iVar5;
      iVar15 = iVar4 + iVar13;
      iVar13 = iVar13 - iVar4;
      iVar4 = iVar14 + iVar12;
      iVar12 = iVar12 - iVar14;
      iVar17 = ((iVar3 - iVar17) * 0x16a >> 8) - iVar1;
      *(int *)(puVar11 + -0x5c) = iVar6 + iVar15;
      *(int *)(puVar11 + 0x84) = iVar15 - iVar6;
      iVar5 = ((iVar2 * 0x115 >> 8) - iVar5) + iVar17;
      *(int *)(puVar11 + -0x3c) = iVar1 + iVar4;
      *(int *)(puVar11 + 100) = iVar4 - iVar1;
      *(int *)(puVar11 + -0x1c) = iVar17 + iVar12;
      *(int *)(puVar11 + 0x44) = iVar12 - iVar17;
      *(int *)(puVar11 + 0x24) = iVar5 + iVar13;
      *(int *)(puVar11 + 4) = iVar13 - iVar5;
    }
    puVar11 = puVar11 + 4;
    iVar9 = iVar9 + 4;
    param_3 = param_3 + 2;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  puVar11 = auStack_174;
  lVar18 = 8;
  do {
    iVar9 = *(int *)(puVar11 + 8);
    puVar10 = (undefined1 *)(*param_4 + param_5);
    if ((((iVar9 == 0) && (*(int *)(puVar11 + 0xc) == 0)) &&
        ((*(int *)(puVar11 + 0x10) == 0 &&
         (((*(int *)(puVar11 + 0x14) == 0 && (*(int *)(puVar11 + 0x18) == 0)) &&
          (*(int *)(puVar11 + 0x1c) == 0)))))) && (*(int *)(puVar11 + 0x20) == 0)) {
      uVar8 = *(undefined1 *)((*(int *)(puVar11 + 4) >> 5 & 0x3ffU) + iVar7);
      *puVar10 = uVar8;
      puVar10[1] = uVar8;
      puVar10[2] = uVar8;
      puVar10[4] = uVar8;
      puVar10[5] = uVar8;
      puVar10[6] = uVar8;
      puVar10[7] = uVar8;
    }
    else {
      iVar17 = *(int *)(puVar11 + 4) + *(int *)(puVar11 + 0x14);
      iVar1 = *(int *)(puVar11 + 4) - *(int *)(puVar11 + 0x14);
      iVar4 = *(int *)(puVar11 + 0x18) - *(int *)(puVar11 + 0x10);
      iVar12 = *(int *)(puVar11 + 0x1c) + *(int *)(puVar11 + 0xc);
      iVar13 = iVar9 - *(int *)(puVar11 + 0x20);
      iVar3 = *(int *)(puVar11 + 0x18) + *(int *)(puVar11 + 0x10);
      iVar9 = *(int *)(puVar11 + 0x20) + iVar9;
      iVar6 = iVar9 + iVar3;
      iVar2 = iVar12 + iVar17;
      iVar5 = (iVar13 + iVar4) * 0x1d9 >> 8;
      iVar14 = ((*(int *)(puVar11 + 0xc) - *(int *)(puVar11 + 0x1c)) * 0x16a >> 8) - iVar12;
      iVar4 = ((iVar4 * -0x29d >> 8) - iVar6) + iVar5;
      iVar15 = iVar14 + iVar1;
      iVar1 = iVar1 - iVar14;
      iVar9 = ((iVar9 - iVar3) * 0x16a >> 8) - iVar4;
      iVar17 = iVar17 - iVar12;
      *puVar10 = *(undefined1 *)((iVar6 + iVar2 >> 5 & 0x3ffU) + iVar7);
      iVar5 = ((iVar13 * 0x115 >> 8) - iVar5) + iVar9;
      puVar10[7] = *(undefined1 *)((iVar2 - iVar6 >> 5 & 0x3ffU) + iVar7);
      puVar10[1] = *(undefined1 *)((iVar4 + iVar15 >> 5 & 0x3ffU) + iVar7);
      puVar10[6] = *(undefined1 *)((iVar15 - iVar4 >> 5 & 0x3ffU) + iVar7);
      puVar10[2] = *(undefined1 *)((iVar9 + iVar1 >> 5 & 0x3ffU) + iVar7);
      puVar10[5] = *(undefined1 *)((iVar1 - iVar9 >> 5 & 0x3ffU) + iVar7);
      puVar10[4] = *(undefined1 *)((iVar5 + iVar17 >> 5 & 0x3ffU) + iVar7);
      uVar8 = *(undefined1 *)((iVar17 - iVar5 >> 5 & 0x3ffU) + iVar7);
    }
    puVar11 = puVar11 + 0x20;
    puVar10[3] = uVar8;
    param_4 = param_4 + 1;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  return;
}

