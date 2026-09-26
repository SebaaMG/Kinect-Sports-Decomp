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


void fn_829C3988(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  undefined1 *puVar8;
  short *psVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_104 [20];
  int aiStack_f0 [16];
  int aiStack_b0 [8];
  int aiStack_90 [36];
  
  iVar13 = 8;
  iVar12 = *(int *)(param_1 + 0x148) + 0x80;
  piVar6 = aiStack_f0 + 8;
  psVar7 = (short *)(param_3 + 0x60);
  psVar9 = (short *)(*(int *)(param_2 + 0x50) + 0x60);
  lVar14 = 8;
  do {
    if (iVar13 != 4) {
      if ((((psVar7[-0x28] == 0) && (psVar7[-0x20] == 0)) && (psVar7[-0x18] == 0)) &&
         (((psVar7[-8] == 0 && (*psVar7 == 0)) && (psVar7[8] == 0)))) {
        iVar4 = (int)psVar9[-0x30] * (int)psVar7[-0x30] * 4;
        piVar6[-8] = iVar4;
        *piVar6 = iVar4;
        piVar6[8] = iVar4;
      }
      else {
        iVar11 = (int)psVar9[-0x28] * (int)psVar7[-0x28];
        iVar2 = (int)psVar9[-0x20] * (int)psVar7[-0x20] * 0x3b21 +
                (int)*psVar9 * (int)*psVar7 * -0x187e;
        iVar3 = (int)psVar9[-0x30] * (int)psVar7[-0x30] * 0x4000;
        iVar5 = iVar11 * 0x5203 + (int)psVar9[-0x18] * (int)psVar7[-0x18] * 0x1ccd +
                (int)psVar9[-8] * (int)psVar7[-8] * -0x133e +
                (int)psVar9[8] * (int)psVar7[8] * -0x1050;
        iVar4 = iVar2 + iVar3;
        iVar3 = iVar3 - iVar2;
        iVar2 = (int)psVar9[-8] * (int)psVar7[-8] * 0x2e75 +
                (int)psVar9[-0x18] * (int)psVar7[-0x18] * -0x4587 + iVar11 * 0x21f9 +
                (int)psVar9[8] * (int)psVar7[8] * -0x6c2;
        piVar6[-8] = iVar4 + iVar5 + 0x800 >> 0xc;
        iVar4 = (iVar4 - iVar5) + 0x800 >> 0xc;
        *piVar6 = iVar3 + iVar2 + 0x800 >> 0xc;
        piVar6[8] = (iVar3 - iVar2) + 0x800 >> 0xc;
      }
      piVar6[0x10] = iVar4;
    }
    psVar7 = psVar7 + 1;
    psVar9 = psVar9 + 1;
    piVar6 = piVar6 + 1;
    iVar13 = iVar13 + -1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar10 = auStack_104;
  lVar14 = 4;
  do {
    iVar13 = *(int *)(puVar10 + 0x18);
    puVar8 = (undefined1 *)(*param_4 + param_5);
    if (((iVar13 == 0) && (*(int *)(puVar10 + 0x1c) == 0)) &&
       ((*(int *)(puVar10 + 0x20) == 0 &&
        (((*(int *)(puVar10 + 0x28) == 0 && (*(int *)(puVar10 + 0x2c) == 0)) &&
         (*(int *)(puVar10 + 0x30) == 0)))))) {
      uVar1 = *(undefined1 *)((*(int *)(puVar10 + 0x14) + 0x10 >> 5 & 0x3ffU) + iVar12);
      *puVar8 = uVar1;
      puVar8[1] = uVar1;
      puVar8[2] = uVar1;
      puVar8[3] = uVar1;
    }
    else {
      iVar5 = *(int *)(puVar10 + 0x1c) * 0x3b21 + *(int *)(puVar10 + 0x2c) * -0x187e;
      iVar2 = iVar5 + *(int *)(puVar10 + 0x14) * 0x4000;
      iVar4 = iVar13 * 0x5203 + *(int *)(puVar10 + 0x20) * 0x1ccd +
              *(int *)(puVar10 + 0x28) * -0x133e + *(int *)(puVar10 + 0x30) * -0x1050;
      iVar5 = *(int *)(puVar10 + 0x14) * 0x4000 - iVar5;
      iVar13 = *(int *)(puVar10 + 0x28) * 0x2e75 + *(int *)(puVar10 + 0x20) * -0x4587 +
               iVar13 * 0x21f9 + *(int *)(puVar10 + 0x30) * -0x6c2;
      *puVar8 = *(undefined1 *)((iVar2 + iVar4 + 0x40000 >> 0x13 & 0x3ffU) + iVar12);
      puVar8[3] = *(undefined1 *)(((iVar2 - iVar4) + 0x40000 >> 0x13 & 0x3ffU) + iVar12);
      puVar8[1] = *(undefined1 *)((iVar5 + iVar13 + 0x40000 >> 0x13 & 0x3ffU) + iVar12);
      puVar8[2] = *(undefined1 *)(((iVar5 - iVar13) + 0x40000 >> 0x13 & 0x3ffU) + iVar12);
    }
    puVar10 = puVar10 + 0x20;
    param_4 = param_4 + 1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  return;
}

