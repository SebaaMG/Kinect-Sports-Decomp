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
extern int fn_82275530();
extern int fn_82275C58();
extern int fn_82275D00();
extern int fn_82275DB0();
extern int fn_8265CA20();
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_822757E0(ulonglong param_1,ulonglong param_2,int param_3,ulonglong param_4,
                  ulonglong param_5,int param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int aiStack_80 [32];
  undefined4 *puVar15;
  
  while( true ) {
    iVar9 = (int)param_4;
    iVar4 = (int)param_5;
    puVar2 = (undefined8 *)param_2;
    puVar3 = (undefined8 *)param_1;
    if (iVar9 + iVar4 == 2) {
      if (*(int *)((int)puVar3 + 4) <= *(int *)((int)puVar2 + 4)) {
        return;
      }
      uVar11 = *puVar3;
      *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
      *(undefined4 *)((int)puVar3 + 4) = *(undefined4 *)((int)puVar2 + 4);
      *puVar2 = uVar11;
      return;
    }
    if ((iVar9 <= iVar4) && (iVar5 = fn_82275530(param_6), iVar9 <= iVar5)) break;
    iVar5 = fn_82275530(param_6);
    if (iVar4 <= iVar5) {
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      (*(undefined4 **)(param_6 + 0x10))[1] = **(undefined4 **)(param_6 + 0x10);
      uStack_90 = *(undefined4 *)(param_6 + 0x10);
      fn_82275C58(aiStack_80,param_2,param_3,&uStack_a0);
      if (aiStack_80[0] != 0) {
        fn_8265CA20();
      }
      puVar1 = (undefined4 *)**(int **)(param_6 + 0x10);
      puVar12 = (undefined4 *)(*(int **)(param_6 + 0x10))[1];
      puVar14 = puVar12;
      iVar9 = param_3;
      if ((param_1 & 0xffffffff) != (param_2 & 0xffffffff)) {
        do {
          iVar4 = (int)param_2;
          if (puVar1 == puVar14) {
            if ((param_1 & 0xffffffff) == (param_2 & 0xffffffff)) {
              return;
            }
            do {
              uVar16 = param_2 - 8;
              puVar1 = (undefined4 *)uVar16;
              *(undefined4 *)((iVar9 - iVar4) + (int)puVar1) = *puVar1;
              *(undefined4 *)((int)puVar1 + (iVar9 - iVar4) + 4) =
                   *(undefined4 *)((int)param_2 + -4);
              param_2 = uVar16;
            } while ((uVar16 & 0xffffffff) != (param_1 & 0xffffffff));
            return;
          }
          puVar12 = puVar14 + -2;
          if ((int)puVar14[-1] < *(int *)(iVar4 + -4)) {
            *(undefined4 *)(iVar9 + -8) = *(undefined4 *)(param_2 - 8);
            uVar6 = *(undefined4 *)(iVar4 + -4);
            param_2 = param_2 - 8;
            puVar12 = puVar14;
          }
          else {
            *(undefined4 *)(iVar9 + -8) = *puVar12;
            uVar6 = puVar14[-1];
          }
          param_3 = iVar9 + -8;
          *(undefined4 *)(iVar9 + -4) = uVar6;
          puVar14 = puVar12;
          iVar9 = param_3;
        } while ((param_1 & 0xffffffff) != (param_2 & 0xffffffff));
      }
      if (puVar1 != puVar12) {
        puVar14 = puVar12;
        do {
          puVar15 = puVar14 + -2;
          *(undefined4 *)((param_3 - (int)puVar12) + (int)puVar15) = *puVar15;
          *(undefined4 *)((int)puVar15 + (param_3 - (int)puVar12) + 4) = puVar14[-1];
          puVar14 = puVar15;
        } while (puVar15 != puVar1);
      }
      return;
    }
    if (iVar4 < iVar9) {
      uVar17 = (longlong)(iVar9 >> 1) + (ulonglong)(iVar9 < 0 && (param_4 & 1) != 0);
      uVar13 = (ulonglong)(param_3 - (int)puVar2 >> 3);
      uVar16 = (uVar17 & 0x1fffffff) * 8 + param_1;
      uVar10 = param_2;
      if (0 < (longlong)uVar13) {
        do {
          uVar8 = (longlong)((int)uVar13 >> 1) + (ulonglong)((int)uVar13 < 0 && (uVar13 & 1) != 0);
          lVar7 = (uVar8 & 0x1fffffff) * 8 + uVar10;
          if (*(int *)((int)lVar7 + 4) < *(int *)((int)uVar16 + 4)) {
            uVar10 = lVar7 + 8;
            uVar8 = (uVar13 - uVar8) - 1;
          }
          uVar13 = uVar8;
        } while (0 < (int)uVar8);
      }
      uVar13 = (ulonglong)((int)uVar10 - (int)puVar2 >> 3);
    }
    else {
      uVar13 = (longlong)(iVar4 >> 1) + (ulonglong)(iVar4 < 0 && (param_5 & 1) != 0);
      uVar17 = (ulonglong)((int)puVar2 - (int)puVar3 >> 3);
      uVar10 = (uVar13 & 0x1fffffff) * 8 + param_2;
      uVar16 = param_1;
      if (0 < (longlong)uVar17) {
        do {
          uVar8 = (longlong)((int)uVar17 >> 1) + (ulonglong)((int)uVar17 < 0 && (uVar17 & 1) != 0);
          lVar7 = (uVar8 & 0x1fffffff) * 8 + uVar16;
          if (*(int *)((int)lVar7 + 4) <= *(int *)((int)uVar10 + 4)) {
            uVar16 = lVar7 + 8;
            uVar8 = (uVar17 - uVar8) - 1;
          }
          uVar17 = uVar8;
        } while (0 < (int)uVar8);
      }
      uVar17 = (ulonglong)((int)uVar16 - (int)puVar3 >> 3);
    }
    param_4 = param_4 - uVar17;
    uVar8 = fn_82275DB0(uVar16,param_2,uVar10,param_4,uVar13,param_6);
    fn_822757E0(param_1,uVar16,uVar8,uVar17,uVar13,param_6);
    param_5 = param_5 - uVar13;
    param_1 = uVar8;
    param_2 = uVar10;
  }
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  (*(undefined4 **)(param_6 + 0x10))[1] = **(undefined4 **)(param_6 + 0x10);
  uStack_90 = *(undefined4 *)(param_6 + 0x10);
  fn_82275C58(aiStack_80,param_1,param_2,&uStack_a0);
  if (aiStack_80[0] != 0) {
    fn_8265CA20();
  }
  fn_82275D00(**(undefined4 **)(param_6 + 0x10),(*(undefined4 **)(param_6 + 0x10))[1],param_2,
                  param_3,param_1);
  return;
}

