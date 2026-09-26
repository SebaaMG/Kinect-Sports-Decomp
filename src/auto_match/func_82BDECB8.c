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


void fn_82BDECB8(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  int aiStack_70 [28];
  
  if (*(int *)(param_1 + 0x144) == 0) {
    sVar1 = **(short **)(param_1 + 0x148);
    *(short **)(param_1 + 0x148) = *(short **)(param_1 + 0x148) + 1;
    *(undefined4 *)(param_1 + 0x144) = 0x10;
    *(int *)(param_1 + 0x140) = (int)sVar1;
  }
  lVar6 = (ulonglong)*(uint *)(param_1 + 0x144) - 1;
  uVar7 = (uint)lVar6;
  uVar2 = *(int *)(param_1 + 0x140) >> (uVar7 & 0x3f);
  *(uint *)(param_1 + 0x144) = uVar7;
  *(uint *)(param_1 + 0x13c) = uVar2 & 1;
  if (lVar6 == 0) {
    sVar1 = **(short **)(param_1 + 0x148);
    *(short **)(param_1 + 0x148) = *(short **)(param_1 + 0x148) + 1;
    *(undefined4 *)(param_1 + 0x144) = 0x10;
    *(int *)(param_1 + 0x140) = (int)sVar1;
  }
  lVar6 = (ulonglong)*(uint *)(param_1 + 0x144) - 1;
  uVar7 = (uint)lVar6;
  *(uint *)(param_1 + 0x144) = uVar7;
  uVar7 = *(int *)(param_1 + 0x140) >> (uVar7 & 0x3f) & 1;
  *(uint *)(param_1 + 0x13c) = uVar7;
  if (lVar6 == 0) {
    sVar1 = **(short **)(param_1 + 0x148);
    *(short **)(param_1 + 0x148) = *(short **)(param_1 + 0x148) + 1;
    *(undefined4 *)(param_1 + 0x144) = 0x10;
    *(int *)(param_1 + 0x140) = (int)sVar1;
  }
  lVar6 = (ulonglong)*(uint *)(param_1 + 0x144) - 1;
  uVar8 = (uint)lVar6;
  *(uint *)(param_1 + 0x144) = uVar8;
  uVar8 = *(int *)(param_1 + 0x140) >> (uVar8 & 0x3f) & 1;
  *(uint *)(param_1 + 0x13c) = uVar8;
  if (lVar6 == 0) {
    sVar1 = **(short **)(param_1 + 0x148);
    *(short **)(param_1 + 0x148) = *(short **)(param_1 + 0x148) + 1;
    *(undefined4 *)(param_1 + 0x144) = 0x10;
    *(int *)(param_1 + 0x140) = (int)sVar1;
  }
  lVar6 = (ulonglong)*(uint *)(param_1 + 0x144) - 1;
  uVar9 = (uint)lVar6;
  *(uint *)(param_1 + 0x144) = uVar9;
  uVar9 = *(int *)(param_1 + 0x140) >> (uVar9 & 0x3f) & 1;
  *(uint *)(param_1 + 0x13c) = uVar9;
  if (lVar6 == 0) {
    sVar1 = **(short **)(param_1 + 0x148);
    *(short **)(param_1 + 0x148) = *(short **)(param_1 + 0x148) + 1;
    *(undefined4 *)(param_1 + 0x144) = 0x10;
    *(int *)(param_1 + 0x140) = (int)sVar1;
  }
  iVar4 = 1;
  uVar10 = *(int *)(param_1 + 0x144) - 1;
  *(uint *)(param_1 + 0x144) = uVar10;
  uVar10 = *(int *)(param_1 + 0x140) >> (uVar10 & 0x3f) & 1;
  *(uint *)(param_1 + 0x13c) = uVar10;
  aiStack_70[0] = (((((uVar2 & 1) * 2 + uVar7) * 2 + uVar8) * 2 + uVar9) * 2 + uVar10) - param_5;
  iVar11 = *(int *)(param_1 + 0x138) + -5;
  *(int *)(param_1 + 0x138) = iVar11;
  if (1 < param_2) {
    uVar2 = *(uint *)(param_1 + 0x144);
    iVar15 = *(int *)(param_1 + 0x140);
    piVar5 = aiStack_70;
    do {
      uVar7 = 0;
      iVar3 = iVar4 + -1;
      if (0xd < iVar4) {
        iVar3 = 0xc;
      }
      do {
        if (uVar2 == 0) {
          uVar2 = 0x10;
          sVar1 = **(short **)(param_1 + 0x148);
          *(short **)(param_1 + 0x148) = *(short **)(param_1 + 0x148) + 1;
          iVar15 = (int)sVar1;
          *(undefined4 *)(param_1 + 0x144) = 0x10;
          *(int *)(param_1 + 0x140) = iVar15;
        }
        uVar2 = uVar2 - 1;
        *(uint *)(param_1 + 0x144) = uVar2;
        uVar8 = iVar15 >> (uVar2 & 0x3f) & 1;
        *(uint *)(param_1 + 0x13c) = uVar8;
        iVar12 = (uVar7 & 1) * 0x10;
        if (uVar8 != 0) {
          iVar12 = iVar12 + 8;
        }
        iVar11 = iVar11 + -1;
        uVar7 = (*(int *)((((int)uVar7 >> 1) + iVar3 * 0xc) * 4 + -0x7ce8c2f0) >> iVar12 & 0xffU) -
                0x20;
        *(int *)(param_1 + 0x138) = iVar11;
      } while (0 < (int)uVar7);
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
      *piVar5 = -uVar7;
    } while (iVar4 < param_2);
  }
  *param_4 = aiStack_70[0];
  param_4[1] = aiStack_70[1] + aiStack_70[0] + -0xc;
  if (2 < param_2) {
    piVar5 = aiStack_70;
    lVar6 = (ulonglong)(param_2 - 3U >> 1) + 1;
    piVar13 = param_4 + 3;
    do {
      piVar5 = piVar5 + 2;
      iVar11 = *(int *)(((int)aiStack_70 - (int)param_4) + (int)piVar13);
      iVar4 = piVar13[-2] + *piVar5 + -0xc;
      piVar13[-1] = iVar4;
      *piVar13 = iVar11 + iVar4 + -0xc;
      piVar13 = piVar13 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (0 < param_2) {
    piVar5 = param_4 + -1;
    puVar14 = (undefined4 *)(param_3 + 4);
    lVar6 = (ulonglong)(param_2 - 1) / 7 + 1;
    do {
      puVar14[-1] = *(undefined4 *)(piVar5[1] * 4 + -0x7cd611e0);
      *puVar14 = *(undefined4 *)
                  (*(int *)(((int)param_4 - param_3) + (int)puVar14) * 4 + -0x7cd611e0);
      puVar14[1] = *(undefined4 *)(piVar5[3] * 4 + -0x7cd611e0);
      puVar14[2] = *(undefined4 *)(piVar5[4] * 4 + -0x7cd611e0);
      puVar14[3] = *(undefined4 *)(piVar5[5] * 4 + -0x7cd611e0);
      puVar14[4] = *(undefined4 *)(piVar5[6] * 4 + -0x7cd611e0);
      piVar5 = piVar5 + 7;
      puVar14[5] = *(undefined4 *)(*piVar5 * 4 + -0x7cd611e0);
      puVar14 = puVar14 + 7;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

