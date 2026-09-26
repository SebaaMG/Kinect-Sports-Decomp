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
#define ZEXT48(x) ((U64)((U32)(x)))
#define BADSPACEBASE char
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82924628();
extern int fn_82B8FDD0();
extern int fn_82F691F0();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


void fn_82B98F88(int param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  
  lVar8 = ZEXT48(&stack0x00000000) - 0xc0;
  iVar4 = (int)lVar8;
  *(BADSPACEBASE **)iVar4 = register0x0000000c;
  param_3 = *(int *)(param_1 + 0x4c) + param_3;
  uVar18 = param_2 + (ulonglong)*(uint *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0xf8) == 0) {
    uVar18 = (longlong)*(int *)(param_1 + 0xe0) * (longlong)*(int *)(param_1 + 0xe4);
    lVar8 = (uVar18 & 0x1fffffff) << 3;
    if (0x1fffffff < (uVar18 & 0xffffffff)) {
      lVar8 = -1;
    }
    uVar18 = fn_8265C9E0(lVar8);
    *(int *)(param_1 + 0xf8) = (int)uVar18;
    if ((uVar18 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar18,0,((longlong)*(int *)(param_1 + 0xe0) * (longlong)*(int *)(param_1 + 0xe4)
                            & 0x1fffffffU) << 3);
    }
  }
  else {
    lVar17 = ((longlong)(param_3 - *(int *)(param_1 + 0xd4)) * (longlong)*(int *)(param_1 + 0xe0) +
              ((uVar18 - *(uint *)(param_1 + 200) & 0xffffffff) >> 2) & 0x1fffffff) * 8 +
             (ulonglong)*(uint *)(param_1 + 0xf8);
    puVar1 = (uint *)lVar17;
    if (puVar1[1] == 0) {
      lVar9 = ((ulonglong)*(uint *)(param_1 + 0xdc) & 0xffffff) << 8;
      if (0xfffffff < ((ulonglong)*(uint *)(param_1 + 0xdc) & 0xfffffff) << 4) {
        lVar9 = -1;
      }
      uVar10 = fn_8265C9E0(lVar9);
      puVar1[1] = uVar10;
      if (uVar10 == 0) {
        return;
      }
      *puVar1 = 0;
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
    }
    uVar10 = (uint)uVar18;
    if (*puVar1 == 0) {
      uVar15 = uVar18 & 0xfffffffc;
      if (((uVar15 < *(uint *)(param_1 + 0x40)) &&
          (*(uint *)(param_1 + 0x98) < *(uint *)(param_1 + 0x40))) ||
         (((ulonglong)*(uint *)(param_1 + 0x48) < (uVar15 + 4 & 0xffffffff) &&
          (*(uint *)(param_1 + 0x48) < *(uint *)(param_1 + 0xa0))))) {
        uVar20 = *(uint *)(param_1 + 0xc4);
        uVar19 = (ulonglong)puVar1[1];
        lVar9 = (longlong)(int)(uVar10 >> 2) * (longlong)*(int *)(param_1 + 0x60) +
                (longlong)(int)(uVar20 >> 2) * (longlong)*(int *)(param_1 + 0x88) +
                (longlong)*(int *)(param_1 + 100) * (longlong)param_3 +
                (ulonglong)*(uint *)(param_1 + 0x20);
        if (uVar20 < *(uint *)(param_1 + 0xcc)) {
          do {
            (**(code **)(param_1 + 0x8c))(uVar19,lVar9);
            uVar20 = uVar20 + 4;
            uVar19 = uVar19 + 0x100;
            lVar9 = (ulonglong)*(uint *)(param_1 + 0x88) + lVar9;
          } while (uVar20 < *(uint *)(param_1 + 0xcc));
        }
      }
      else {
        if ((*(uint *)(param_1 + 0xc4) < *(uint *)(param_1 + 0x3c)) &&
           (*(uint *)(param_1 + 0x94) < *(uint *)(param_1 + 0x3c))) {
          (**(code **)(param_1 + 0x8c))
                    (puVar1[1],
                     (longlong)(int)(*(uint *)(param_1 + 0xc4) >> 2) *
                     (longlong)*(int *)(param_1 + 0x88) +
                     (longlong)(int)((uVar18 & 0xffffffff) >> 2) *
                     (longlong)*(int *)(param_1 + 0x60) +
                     (longlong)*(int *)(param_1 + 100) * (longlong)param_3 +
                     (ulonglong)*(uint *)(param_1 + 0x20));
        }
        if ((*(uint *)(param_1 + 0x44) < *(uint *)(param_1 + 0xcc)) &&
           (*(uint *)(param_1 + 0x44) < *(uint *)(param_1 + 0x9c))) {
          (**(code **)(param_1 + 0x8c))
                    (puVar1[1],
                     (longlong)(int)(*(uint *)(param_1 + 0xcc) - 4 >> 2) *
                     (longlong)*(int *)(param_1 + 0x88) +
                     (longlong)(int)(uVar10 >> 2) * (longlong)*(int *)(param_1 + 0x60) +
                     (longlong)*(int *)(param_1 + 100) * (longlong)param_3 +
                     (ulonglong)*(uint *)(param_1 + 0x20));
        }
      }
      lVar9 = 0;
      lVar21 = 4;
      do {
        if (((lVar9 + uVar15 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x40)) ||
           ((ulonglong)*(uint *)(param_1 + 0x48) <= (lVar9 + uVar15 & 0xffffffff))) {
          *puVar1 = 1 << ((uint)lVar9 & 0x3f) | *puVar1;
        }
        lVar9 = lVar9 + 1;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      param_4 = (undefined4 *)fn_82924628(param_1,param_4);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      param_4 = (undefined4 *)fn_82B8FDD0(param_1,param_4);
    }
    uVar20 = *(uint *)(param_1 + 200);
    uVar15 = (ulonglong)*(uint *)(param_1 + 0x3c) - (ulonglong)*(uint *)(param_1 + 0xc4);
    uVar19 = *(uint *)(param_1 + 0x68) + uVar15;
    if ((uVar15 & 0xffffffff) < (uVar19 & 0xffffffff)) {
      lVar9 = uVar19 - uVar15;
      do {
        lVar9 = lVar9 + -1;
        iVar5 = ((uint)((uVar15 & 0x3fffffc | uVar18 - uVar20 & 3) << 2) | (uint)uVar15 & 3) * 0x10;
        iVar2 = iVar5 + puVar1[1];
        *(undefined4 *)(iVar5 + puVar1[1]) = *param_4;
        *(undefined4 *)(iVar2 + 4) = param_4[1];
        *(undefined4 *)(iVar2 + 8) = param_4[2];
        puVar3 = param_4 + 3;
        param_4 = param_4 + 4;
        *(undefined4 *)(iVar2 + 0xc) = *puVar3;
        uVar15 = uVar15 + 1;
      } while (lVar9 != 0);
    }
    uVar20 = 1 << (uVar10 & 3) | *puVar1;
    *puVar1 = uVar20;
    if (uVar20 == 0xf) {
      uVar15 = (ulonglong)*(uint *)(param_1 + 0xc4);
      uVar20 = puVar1[1];
      lVar9 = (longlong)(int)(uVar10 >> 2) * (longlong)*(int *)(param_1 + 0x60) +
              (longlong)(int)(*(uint *)(param_1 + 0xc4) >> 2) * (longlong)*(int *)(param_1 + 0x88) +
              (longlong)*(int *)(param_1 + 100) * (longlong)param_3 +
              (ulonglong)*(uint *)(param_1 + 0x20);
      if (uVar15 < *(uint *)(param_1 + 0xcc)) {
        *(undefined4 *)(iVar4 + 0x50) = 0;
        *(undefined4 *)(iVar4 + 0x54) = 0;
        *(undefined4 *)(iVar4 + 0x58) = 0;
        *(undefined4 *)(iVar4 + 0x5c) = 1;
        do {
          uVar13 = *(uint *)(param_1 + 0x9c) - uVar15;
          uVar19 = (ulonglong)*(uint *)(param_1 + 0xa0) - (uVar18 & 0xfffffffc);
          if (((uVar13 & 0xffffffff) < 4) && (uVar11 = 0, (uVar19 & 0xffffffff) != 0)) {
            do {
              if (3 < (uVar11 & 0xffffffff)) break;
              lVar21 = (uVar13 & 0x3fffffff) * 4 + lVar8 + 0x4c;
              lVar16 = 4 - uVar13;
              uVar14 = uVar13;
              do {
                lVar21 = lVar21 + 4;
                lVar16 = lVar16 + -1;
                uVar10 = (uint)((uVar11 & 0x3fffffff) << 2);
                iVar6 = (uVar10 | (uint)uVar14) * 0x10;
                iVar5 = (uVar10 | *(uint *)lVar21) * 0x10;
                iVar2 = iVar6 + uVar20;
                iVar4 = iVar5 + uVar20;
                uVar14 = uVar14 + 1;
                *(undefined4 *)(iVar6 + uVar20) = *(undefined4 *)(iVar5 + uVar20);
                *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar4 + 4);
                *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar4 + 8);
                *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
              } while (lVar16 != 0);
              uVar11 = uVar11 + 1;
            } while ((uVar11 & 0xffffffff) < (uVar19 & 0xffffffff));
          }
          if ((uVar19 & 0xffffffff) < 4) {
            lVar21 = (uVar19 & 0x3fffffff) * 4 + (ZEXT48(&stack0x00000000) - 0x70);
            do {
              iVar4 = *(int *)lVar21;
              uVar10 = 0;
              lVar16 = 4;
              do {
                iVar6 = (uVar10 | iVar4 << 2) * 0x10;
                iVar7 = ((uint)((uVar19 & 0x3fffffff) << 2) | uVar10) * 0x10;
                iVar2 = iVar6 + uVar20;
                iVar5 = iVar7 + uVar20;
                lVar16 = lVar16 + -1;
                uVar10 = uVar10 + 1;
                *(undefined4 *)(iVar7 + uVar20) = *(undefined4 *)(iVar6 + uVar20);
                *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar2 + 4);
                *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar2 + 8);
                *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
              } while (lVar16 != 0);
              uVar19 = uVar19 + 1;
              lVar21 = lVar21 + 4;
            } while ((uVar19 & 0xffffffff) < 4);
          }
          if ((*(int *)(param_1 + 0xfc) != 0) || (uVar12 = 0, *(int *)(param_1 + 0x5c) != 0)) {
            uVar12 = 1;
          }
          (**(code **)(param_1 + 0x90))(lVar9,uVar20,uVar12);
          uVar15 = uVar15 + 4;
          uVar20 = uVar20 + 0x100;
          lVar9 = (ulonglong)*(uint *)(param_1 + 0x88) + lVar9;
        } while ((uVar15 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xcc));
      }
      uVar18 = lVar17 + 8;
      if ((((uVar18 & 0xffffffff) <
            (((longlong)*(int *)(param_1 + 0xe4) * (longlong)*(int *)(param_1 + 0xe0) & 0x1fffffffU)
             * 8 + (ulonglong)*(uint *)(param_1 + 0xf8) & 0xffffffff)) && (*(int *)uVar18 == 0)) &&
         (puVar1[3] == 0)) {
        uVar10 = puVar1[1];
        puVar1[1] = 0;
        puVar1[3] = uVar10;
      }
      else {
        fn_8265CA20(puVar1[1]);
        *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + -1;
      }
      puVar1[1] = 0;
    }
  }
  return;
}

