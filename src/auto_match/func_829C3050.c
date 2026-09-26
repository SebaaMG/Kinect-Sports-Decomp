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
extern unsigned int *auStack_190;


void fn_829C3050(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  longlong lVar19;
  undefined1 auStack_190 [32];
  int aiStack_170 [16];
  int aiStack_130 [7];
  undefined1 auStack_114 [4];
  int aiStack_110 [8];
  int aiStack_f0 [8];
  int aiStack_d0 [8];
  int aiStack_b0 [8];
  int aiStack_90 [36];
  
  param_3 = param_3 + -2;
  iVar3 = *(int *)(param_1 + 0x148) + 0x80;
  iVar4 = *(int *)(param_2 + 0x50) + 0x6e;
  puVar5 = auStack_114;
  lVar19 = 8;
  do {
    if ((((((*(short *)(param_3 + 0x12) == 0 && *(short *)(param_3 + 0x22) == 0) &&
           *(short *)(param_3 + 0x32) == 0) && *(short *)(param_3 + 0x42) == 0) &&
         *(short *)(param_3 + 0x52) == 0) && *(short *)(param_3 + 0x62) == 0) &&
        *(short *)(param_3 + 0x72) == 0) {
      iVar2 = (int)*(short *)(iVar4 + -0x6e) * (int)*(short *)(param_3 + 2);
      *(int *)(puVar5 + -0x5c) = iVar2;
      *(int *)(puVar5 + -0x3c) = iVar2;
      *(int *)(puVar5 + -0x1c) = iVar2;
      *(int *)(puVar5 + 4) = iVar2;
      *(int *)(puVar5 + 0x24) = iVar2;
      *(int *)(puVar5 + 0x44) = iVar2;
      *(int *)(puVar5 + 100) = iVar2;
      *(int *)(puVar5 + 0x84) = iVar2;
    }
    else {
      sVar9 = *(short *)(iVar4 + -0x4e) * *(short *)(param_3 + 0x22);
      sVar15 = *(short *)(iVar4 + -0xe) * *(short *)(param_3 + 0x62);
      sVar18 = sVar9 + sVar15;
      sVar14 = *(short *)(iVar4 + -0x5e) * *(short *)(param_3 + 0x12);
      sVar10 = *(short *)(iVar4 + -0x3e) * *(short *)(param_3 + 0x32);
      sVar13 = *(short *)(iVar4 + -0x6e) * *(short *)(param_3 + 2);
      sVar8 = *(short *)(iVar4 + -0x2e) * *(short *)(param_3 + 0x42);
      sVar11 = *(short *)(iVar4 + 2) * *(short *)(param_3 + 0x72);
      sVar17 = *(short *)(iVar4 + -0x1e) * *(short *)(param_3 + 0x52);
      sVar12 = sVar13 + sVar8;
      sVar13 = sVar13 - sVar8;
      sVar7 = sVar10 + sVar17;
      sVar17 = sVar17 - sVar10;
      sVar10 = sVar14 + sVar11;
      sVar14 = sVar14 - sVar11;
      sVar8 = (short)((uint)(((int)sVar9 - (int)sVar15) * 0x16a) >> 8) - sVar18;
      sVar15 = sVar12 + sVar18;
      sVar12 = sVar12 - sVar18;
      sVar18 = sVar13 + sVar8;
      sVar13 = sVar13 - sVar8;
      sVar9 = sVar7 + sVar10;
      sVar11 = (short)((uint)(((int)sVar17 + (int)sVar14) * 0x1d9) >> 8);
      sVar8 = ((short)((uint)(sVar17 * -0x29d) >> 8) - sVar9) + sVar11;
      sVar17 = (short)((uint)(((int)sVar10 - (int)sVar7) * 0x16a) >> 8) - sVar8;
      sVar14 = ((short)((uint)(sVar14 * 0x115) >> 8) - sVar11) + sVar17;
      *(int *)(puVar5 + -0x5c) = (int)sVar9 + (int)sVar15;
      *(int *)(puVar5 + 0x84) = (int)sVar15 - (int)sVar9;
      *(int *)(puVar5 + -0x3c) = (int)sVar8 + (int)sVar18;
      *(int *)(puVar5 + 100) = (int)sVar18 - (int)sVar8;
      *(int *)(puVar5 + -0x1c) = (int)sVar17 + (int)sVar13;
      *(int *)(puVar5 + 0x44) = (int)sVar13 - (int)sVar17;
      *(int *)(puVar5 + 0x24) = (int)sVar14 + (int)sVar12;
      *(int *)(puVar5 + 4) = (int)sVar12 - (int)sVar14;
    }
    puVar5 = puVar5 + 4;
    iVar4 = iVar4 + 2;
    param_3 = param_3 + 2;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  puVar5 = auStack_190;
  lVar19 = 8;
  do {
    puVar6 = (undefined1 *)(*param_4 + param_5);
    if ((((((*(int *)(puVar5 + 0x24) == 0 && *(int *)(puVar5 + 0x28) == 0) &&
           *(int *)(puVar5 + 0x2c) == 0) && *(int *)(puVar5 + 0x30) == 0) &&
         *(int *)(puVar5 + 0x34) == 0) && *(int *)(puVar5 + 0x38) == 0) &&
        *(int *)(puVar5 + 0x3c) == 0) {
      uVar1 = *(undefined1 *)((*(int *)(puVar5 + 0x20) >> 5 & 0x3ffU) + iVar3);
      *puVar6 = uVar1;
      puVar6[1] = uVar1;
      puVar6[2] = uVar1;
      puVar6[3] = uVar1;
      puVar6[4] = uVar1;
      puVar6[5] = uVar1;
      puVar6[6] = uVar1;
      puVar6[7] = uVar1;
    }
    else {
      sVar18 = (short)*(int *)(puVar5 + 0x28);
      sVar15 = (short)*(int *)(puVar5 + 0x38);
      sVar12 = sVar18 + sVar15;
      sVar13 = (short)*(int *)(puVar5 + 0x2c);
      sVar8 = (short)*(int *)(puVar5 + 0x34);
      sVar11 = sVar13 + sVar8;
      sVar14 = (short)*(int *)(puVar5 + 0x30);
      sVar17 = (short)*(undefined4 *)(puVar5 + 0x20) + sVar14;
      sVar8 = sVar8 - sVar13;
      sVar9 = (short)*(int *)(puVar5 + 0x3c);
      sVar13 = (short)*(int *)(puVar5 + 0x24);
      sVar7 = sVar13 - sVar9;
      sVar13 = sVar13 + sVar9;
      sVar10 = sVar11 + sVar13;
      sVar9 = sVar17 + sVar12;
      sVar14 = (short)*(undefined4 *)(puVar5 + 0x20) - sVar14;
      sVar16 = (short)((uint)(((int)sVar18 - (int)sVar15) * 0x16a) >> 8) - sVar12;
      sVar18 = (short)((uint)(((int)sVar8 + (int)sVar7) * 0x1d9) >> 8);
      sVar8 = ((short)((uint)(sVar8 * -0x29d) >> 8) - sVar10) + sVar18;
      sVar15 = sVar14 + sVar16;
      *puVar6 = *(undefined1 *)(((int)sVar10 + (int)sVar9 >> 5 & 0x3ffU) + iVar3);
      sVar13 = (short)((uint)(((int)sVar13 - (int)sVar11) * 0x16a) >> 8) - sVar8;
      sVar17 = sVar17 - sVar12;
      sVar14 = sVar14 - sVar16;
      sVar18 = ((short)((uint)(sVar7 * 0x115) >> 8) - sVar18) + sVar13;
      puVar6[7] = *(undefined1 *)(((int)sVar9 - (int)sVar10 >> 5 & 0x3ffU) + iVar3);
      puVar6[1] = *(undefined1 *)(((int)sVar8 + (int)sVar15 >> 5 & 0x3ffU) + iVar3);
      puVar6[6] = *(undefined1 *)(((int)sVar15 - (int)sVar8 >> 5 & 0x3ffU) + iVar3);
      puVar6[2] = *(undefined1 *)(((int)sVar13 + (int)sVar14 >> 5 & 0x3ffU) + iVar3);
      puVar6[5] = *(undefined1 *)(((int)sVar14 - (int)sVar13 >> 5 & 0x3ffU) + iVar3);
      puVar6[4] = *(undefined1 *)(((int)sVar18 + (int)sVar17 >> 5 & 0x3ffU) + iVar3);
      puVar6[3] = *(undefined1 *)(((int)sVar17 - (int)sVar18 >> 5 & 0x3ffU) + iVar3);
    }
    puVar5 = puVar5 + 0x20;
    param_4 = param_4 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  return;
}

