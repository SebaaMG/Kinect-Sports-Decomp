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
extern unsigned int *auStack_8a8;
extern unsigned int *auStack_8d0;
extern unsigned int *auStack_8d8;
extern unsigned int *auStack_900;
extern unsigned int *auStack_910;
extern unsigned int *auStack_930;
extern unsigned int *auStack_940;
extern unsigned int *auStack_960;
extern int fn_82CE5410();
extern int fn_8309CC08();
extern unsigned int iStack_868;
extern unsigned int iStack_86c;
extern unsigned int iStack_950;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack_870;
extern unsigned int uStack_8aa;
extern unsigned int uStack_8ae;
extern unsigned int uStack_8ea;
extern unsigned int uStack_8ec;
extern unsigned int uStack_8f0;
extern unsigned int uStack_91a;
extern unsigned int uStack_91c;
extern unsigned int uStack_920;


void fn_8309DFD0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,ulonglong param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 in_r0;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uStack00000034;
  undefined4 uStack0000003c;
  uint auStack_960 [4];
  int iStack_950;
  undefined1 auStack_940 [16];
  undefined1 auStack_930 [16];
  undefined4 uStack_920;
  undefined2 uStack_91c;
  undefined2 uStack_91a;
  undefined1 auStack_910 [16];
  undefined1 auStack_900 [16];
  undefined4 uStack_8f0;
  undefined2 uStack_8ec;
  undefined2 uStack_8ea;
  uint auStack_8d8 [2];
  undefined1 auStack_8d0 [34];
  ushort uStack_8ae;
  ushort uStack_8aa;
  undefined8 auStack_8a8 [7];
  undefined4 uStack_870;
  int iStack_86c;
  int iStack_868;
  int aiStack_864 [537];
  
  if (param_1 != 0) {
    uStack00000034 = param_5;
    uStack0000003c = param_6;
    piVar7 = (int *)fn_82CE5410();
    iVar1 = *piVar7;
    uVar4 = (uint)param_7;
    auStack_8d8[0] = uVar4 | 0x80000000;
    *piVar7 = ((int)((param_7 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + iVar1;
    if (0 < (int)uVar4) {
      puVar12 = (undefined4 *)(iVar1 + -4);
      uVar18 = param_7;
      uVar5 = param_7 & 0xffffffff;
      while (uVar5 != 0) {
        puVar12 = puVar12 + 1;
        *puVar12 = 0x3f800000;
        uVar18 = uVar18 - 1;
        uVar5 = uVar18;
      }
    }
    thunk_FUN_82ce5410();
    auStack_960[0] = 0;
    auStack_960[1] = 0;
    thunk_FUN_82ce5410();
    piVar7 = (int *)fn_82CE5410();
    iVar8 = *piVar7;
    auStack_960[2] = 0;
    lVar16 = 1;
    *piVar7 = iVar8 + 0x280;
    if (iVar8 != 0) {
      *(undefined2 *)(iVar8 + 0x24) = 0;
    }
    iVar15 = *(int *)(param_1 + 0x10);
    iVar9 = 0;
    puVar12 = (undefined4 *)((int)in_r0 + iVar15 & 0xfffffff0);
    uVar21 = puVar12[1];
    uVar22 = puVar12[2];
    uVar23 = puVar12[3];
    puVar2 = (undefined4 *)((int)in_r0 + iVar8 & 0xfffffff0);
    *puVar2 = *puVar12;
    puVar2[1] = uVar21;
    puVar2[2] = uVar22;
    puVar2[3] = uVar23;
    puVar12 = (undefined4 *)(iVar15 + 0x10U & 0xfffffff0);
    uVar21 = puVar12[1];
    uVar22 = puVar12[2];
    uVar23 = puVar12[3];
    puVar2 = (undefined4 *)(iVar8 + 0x10U & 0xfffffff0);
    *puVar2 = *puVar12;
    puVar2[1] = uVar21;
    puVar2[2] = uVar22;
    puVar2[3] = uVar23;
    *(undefined2 *)(iVar8 + 0x20) = *(undefined2 *)(iVar15 + 0x20);
    *(undefined2 *)(iVar8 + 0x22) = *(undefined2 *)(iVar15 + 0x22);
    *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar15 + 0x20);
    *(undefined2 *)(iVar8 + 0x24) = *(undefined2 *)(iVar15 + 0x24);
    *(undefined2 *)(iVar8 + 0x26) = *(undefined2 *)(iVar15 + 0x26);
    *(undefined4 *)(iVar8 + 0x30) = 0;
    *(undefined4 *)(iVar8 + 0x34) = 0;
    *(uint *)(iVar8 + 0x38) = uVar4;
    if (0 < (int)uVar4) {
      piVar7 = aiStack_864;
      do {
        piVar7 = piVar7 + 1;
        *piVar7 = iVar9;
        iVar9 = iVar9 + 1;
        param_7 = param_7 - 1;
        auStack_960[0] = uVar4;
      } while (param_7 != 0);
    }
    iVar9 = 0x40;
    iVar15 = iVar8;
    do {
      uVar6 = auStack_960[1];
      uVar4 = auStack_960[0];
      puVar10 = auStack_8a8;
      puVar13 = (undefined8 *)(iVar15 + -8);
      lVar19 = 8;
      do {
        puVar13 = puVar13 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar13;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      puVar11 = auStack_8d8;
      lVar19 = lVar16 + -1;
      iVar14 = iVar9 + -0x40;
      lVar20 = 6;
      iVar17 = iVar15 + -0x40;
      puVar13 = auStack_8a8;
      do {
        puVar13 = puVar13 + 1;
        puVar11 = puVar11 + 2;
        *(undefined8 *)puVar11 = *puVar13;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      uStack_91c = 0;
      uStack_8ec = 0;
      auStack_960[iStack_86c] = auStack_960[iStack_86c] - iStack_868;
      fn_8309CC08(param_1,auStack_8d0,uStack_870,param_2,uStack00000034,uStack0000003c,param_3
                        ,param_4);
      auStack_960[0] = iStack_950 + uVar4;
      auStack_960[1] = auStack_960[3] + uVar6;
      iVar3 = (int)in_r0;
      if (iStack_950 != 0) {
        lVar19 = lVar16 - lVar19;
        iVar14 = iVar14 + iVar8;
        iVar17 = iVar14;
        if (0 < lVar19) {
          do {
            if (iVar17 != 0) {
              *(undefined2 *)(iVar17 + 0x24) = 0;
            }
            lVar19 = lVar19 + -1;
            iVar17 = iVar17 + 0x40;
          } while (lVar19 != 0);
        }
        *(undefined4 *)(iVar14 + 0x20) = uStack_920;
        puVar12 = (undefined4 *)((uint)(auStack_940 + iVar3) & 0xfffffff0);
        uVar21 = puVar12[1];
        uVar22 = puVar12[2];
        uVar23 = puVar12[3];
        puVar2 = (undefined4 *)(iVar3 + iVar14 & 0xfffffff0);
        *puVar2 = *puVar12;
        puVar2[1] = uVar21;
        puVar2[2] = uVar22;
        puVar2[3] = uVar23;
        *(undefined2 *)(iVar14 + 0x24) = uStack_91c;
        puVar12 = (undefined4 *)((uint)(auStack_930 + iVar3) & 0xfffffff0);
        uVar21 = *puVar12;
        uVar22 = puVar12[1];
        uVar23 = puVar12[2];
        uVar24 = puVar12[3];
        *(undefined2 *)(iVar14 + 0x26) = uStack_91a;
        puVar12 = (undefined4 *)(iVar14 + 0x10U & 0xfffffff0);
        *puVar12 = uVar21;
        puVar12[1] = uVar22;
        puVar12[2] = uVar23;
        puVar12[3] = uVar24;
        iVar17 = *(int *)(param_1 + 0x1c);
        *(int *)(iVar14 + 0x38) = iStack_950;
        *(undefined4 *)(iVar14 + 0x34) = 0;
        *(uint *)(iVar14 + 0x30) = (uint)uStack_8ae * 0x30 + iVar17;
        lVar19 = lVar16;
        iVar17 = iVar15;
        iVar14 = iVar9;
      }
      lVar16 = lVar19;
      iVar15 = iVar17;
      iVar9 = iVar14;
      if (auStack_960[3] != 0) {
        lVar16 = lVar19 + 1;
        iVar9 = iVar14 + 0x40;
        lVar19 = lVar16 - lVar19;
        iVar14 = iVar14 + iVar8;
        iVar15 = iVar17 + 0x40;
        iVar17 = iVar14;
        if (0 < lVar19) {
          do {
            if (iVar17 != 0) {
              *(undefined2 *)(iVar17 + 0x24) = 0;
            }
            lVar19 = lVar19 + -1;
            iVar17 = iVar17 + 0x40;
          } while (lVar19 != 0);
        }
        *(undefined4 *)(iVar14 + 0x20) = uStack_8f0;
        puVar12 = (undefined4 *)((uint)(auStack_900 + iVar3) & 0xfffffff0);
        uVar21 = *puVar12;
        uVar22 = puVar12[1];
        uVar23 = puVar12[2];
        uVar24 = puVar12[3];
        puVar12 = (undefined4 *)((uint)(auStack_910 + iVar3) & 0xfffffff0);
        uVar25 = *puVar12;
        uVar26 = puVar12[1];
        uVar27 = puVar12[2];
        uVar28 = puVar12[3];
        *(undefined2 *)(iVar14 + 0x24) = uStack_8ec;
        puVar12 = (undefined4 *)(iVar14 + 0x10U & 0xfffffff0);
        *puVar12 = uVar21;
        puVar12[1] = uVar22;
        puVar12[2] = uVar23;
        puVar12[3] = uVar24;
        *(undefined2 *)(iVar14 + 0x26) = uStack_8ea;
        puVar12 = (undefined4 *)(iVar3 + iVar14 & 0xfffffff0);
        *puVar12 = uVar25;
        puVar12[1] = uVar26;
        puVar12[2] = uVar27;
        puVar12[3] = uVar28;
        if (uStack_8aa == 0x7fff) {
          iVar17 = 0;
        }
        else {
          iVar17 = (uint)uStack_8aa * 0x30 + *(int *)(param_1 + 0x1c);
        }
        *(int *)(iVar14 + 0x30) = iVar17;
        *(uint *)(iVar14 + 0x38) = auStack_960[3];
        *(undefined4 *)(iVar14 + 0x34) = 1;
      }
      iVar17 = (int)lVar16;
      if ((int)auStack_960[2] <= iVar17) {
        auStack_960[2] = iVar17;
      }
    } while (iVar17 != 0);
    piVar7 = (int *)fn_82CE5410();
    *piVar7 = iVar8;
    fn_82CE5410();
    piVar7 = (int *)fn_82CE5410();
    *piVar7 = iVar1;
    iVar8 = fn_82CE5410();
    if ((auStack_8d8[0] & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar8 + 0x10) + 0x10))
                (*(int **)(iVar8 + 0x10),iVar1,auStack_8d8[0] & 0x3fffffff,4);
    }
  }
  return;
}

