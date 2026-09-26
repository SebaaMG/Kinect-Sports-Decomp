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
extern unsigned int *auStack_890;
extern unsigned int *auStack_8c4;
extern unsigned int *auStack_8e0;
extern unsigned int *auStack_900;
extern int fn_82CE5410();
extern int fn_8309D4B0();
extern int fn_830B4D90();
extern unsigned int iStack_8a8;
extern unsigned int iStack_8f0;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack_868;
extern unsigned int uStack_87c;
extern unsigned int uStack_8ac;
extern unsigned int uStack_8ce;
extern unsigned int uStack_8d2;
extern unsigned int uStack_8e4;


void fn_8309E3F0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,ulonglong param_7)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined4 uStack00000034;
  undefined4 uStack0000003c;
  uint auStack_900 [4];
  int iStack_8f0;
  undefined4 uStack_8e4;
  undefined1 auStack_8e0 [14];
  ushort uStack_8d2;
  ushort uStack_8ce;
  undefined4 auStack_8c4 [6];
  undefined4 uStack_8ac;
  int iStack_8a8;
  int aiStack_8a4 [5];
  undefined2 auStack_890 [10];
  undefined2 uStack_87c;
  uint uStack_868;
  int aiStack_864 [537];
  
  if (param_1 != 0) {
    uStack00000034 = param_5;
    uStack0000003c = param_6;
    piVar5 = (int *)fn_82CE5410();
    iVar1 = *piVar5;
    uVar2 = (uint)param_7;
    uStack_868 = uVar2 | 0x80000000;
    *piVar5 = ((int)((param_7 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + iVar1;
    if (0 < (int)uVar2) {
      puVar10 = (undefined4 *)(iVar1 + -4);
      uVar16 = param_7;
      uVar3 = param_7 & 0xffffffff;
      while (uVar3 != 0) {
        puVar10 = puVar10 + 1;
        *puVar10 = 0x3f800000;
        uVar16 = uVar16 - 1;
        uVar3 = uVar16;
      }
    }
    fn_830B4D90();
    auStack_900[0] = 0;
    auStack_900[1] = 0;
    fn_830B4D90();
    piVar5 = (int *)fn_82CE5410();
    iVar6 = *piVar5;
    auStack_900[2] = 0;
    lVar14 = 1;
    *piVar5 = iVar6 + 0x180;
    if (iVar6 != 0) {
      *(undefined2 *)(iVar6 + 0x10) = 0;
    }
    puVar9 = (undefined4 *)(iVar6 + -4);
    puVar10 = (undefined4 *)(*(int *)(param_1 + 0x10) + -4);
    lVar17 = 5;
    do {
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
      *puVar9 = *puVar10;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    *(uint *)(iVar6 + 0x1c) = uVar2;
    iVar11 = 0;
    *(undefined4 *)(iVar6 + 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x18) = 0;
    if (0 < (int)uVar2) {
      piVar5 = aiStack_864;
      do {
        piVar5 = piVar5 + 1;
        *piVar5 = iVar11;
        iVar11 = iVar11 + 1;
        param_7 = param_7 - 1;
        auStack_900[0] = uVar2;
      } while (param_7 != 0);
    }
    iVar11 = iVar6;
    iVar13 = 0x20;
    do {
      uVar4 = auStack_900[1];
      uVar2 = auStack_900[0];
      puVar9 = auStack_8c4;
      puVar10 = (undefined4 *)(iVar11 + -4);
      lVar17 = 8;
      do {
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
        *puVar9 = *puVar10;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      puVar9 = &uStack_8e4;
      lVar17 = 5;
      puVar10 = auStack_8c4;
      do {
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
        *puVar9 = *puVar10;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      auStack_890[0] = 0;
      uStack_87c = 0;
      auStack_900[iStack_8a8] = auStack_900[iStack_8a8] - aiStack_8a4[0];
      fn_8309D4B0(param_1,auStack_8e0,uStack_8ac,param_2,uStack00000034,uStack0000003c,param_3
                        ,param_4);
      auStack_900[0] = auStack_900[3] + uVar2;
      auStack_900[1] = iStack_8f0 + uVar4;
      lVar17 = lVar14 + -1;
      iVar15 = iVar11 + -0x20;
      iVar12 = iVar13 + -0x20;
      if (auStack_900[3] != 0) {
        lVar17 = lVar14 - (lVar14 + -1);
        iVar12 = iVar6 + iVar13 + -0x20;
        iVar15 = iVar12;
        if (0 < lVar17) {
          do {
            if (iVar15 != 0) {
              *(undefined2 *)(iVar15 + 0x10) = 0;
            }
            lVar17 = lVar17 + -1;
            iVar15 = iVar15 + 0x20;
          } while (lVar17 != 0);
        }
        piVar5 = aiStack_8a4;
        piVar7 = (int *)(iVar12 + -4);
        lVar17 = 5;
        do {
          piVar5 = piVar5 + 1;
          piVar7 = piVar7 + 1;
          *piVar7 = *piVar5;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        iVar15 = *(int *)(param_1 + 0x1c);
        *(uint *)(iVar12 + 0x1c) = auStack_900[3];
        *(undefined4 *)(iVar12 + 0x18) = 0;
        *(uint *)(iVar12 + 0x14) = (uint)uStack_8d2 * 0x14 + iVar15;
        lVar17 = lVar14;
        iVar15 = iVar11;
        iVar12 = iVar13;
      }
      lVar14 = lVar17;
      iVar11 = iVar15;
      if (iStack_8f0 != 0) {
        lVar14 = lVar17 + 1;
        iVar8 = iVar6 + iVar12;
        lVar17 = lVar14 - lVar17;
        iVar12 = iVar12 + 0x20;
        iVar11 = iVar15 + 0x20;
        iVar13 = iVar8;
        if (0 < lVar17) {
          do {
            if (iVar13 != 0) {
              *(undefined2 *)(iVar13 + 0x10) = 0;
            }
            lVar17 = lVar17 + -1;
            iVar13 = iVar13 + 0x20;
          } while (lVar17 != 0);
        }
        puVar10 = (undefined4 *)auStack_890;
        puVar9 = (undefined4 *)(iVar8 + -4);
        lVar17 = 5;
        do {
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
          *puVar9 = *puVar10;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        if (uStack_8ce == 0x7fff) {
          iVar13 = 0;
        }
        else {
          iVar13 = (uint)uStack_8ce * 0x14 + *(int *)(param_1 + 0x1c);
        }
        *(int *)(iVar8 + 0x14) = iVar13;
        *(int *)(iVar8 + 0x1c) = iStack_8f0;
        *(undefined4 *)(iVar8 + 0x18) = 1;
      }
      iVar15 = (int)lVar14;
      if ((int)auStack_900[2] <= iVar15) {
        auStack_900[2] = iVar15;
      }
      iVar13 = iVar12;
    } while (iVar15 != 0);
    piVar5 = (int *)fn_82CE5410();
    *piVar5 = iVar6;
    fn_82CE5410();
    piVar5 = (int *)fn_82CE5410();
    *piVar5 = iVar1;
    iVar6 = fn_82CE5410();
    if ((uStack_868 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                (*(int **)(iVar6 + 0x10),iVar1,uStack_868 & 0x3fffffff,4);
    }
  }
  return;
}

