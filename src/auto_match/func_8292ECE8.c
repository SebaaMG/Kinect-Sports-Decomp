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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82924628();
extern int fn_829252C0();
extern int fn_82F691F0();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


void fn_8292ECE8(int param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 *puVar9;
  ulonglong uVar8;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xc0;
  iVar2 = (int)lVar1;
  *(BADSPACEBASE **)iVar2 = register0x0000000c;
  param_3 = *(int *)(param_1 + 0x4c) + param_3;
  uVar14 = param_2 + (ulonglong)*(uint *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0xf8) == 0) {
    uVar14 = fn_8265C940(((longlong)*(int *)(param_1 + 0xe0) *
                                (longlong)*(int *)(param_1 + 0xe4) & 0x1fffffffU) << 3,0x24810000);
    *(int *)(param_1 + 0xf8) = (int)uVar14;
    if ((uVar14 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar14,0,((longlong)*(int *)(param_1 + 0xe0) * (longlong)*(int *)(param_1 + 0xe4)
                            & 0x1fffffffU) << 3);
    }
  }
  else {
    lVar13 = ((longlong)(param_3 - *(int *)(param_1 + 0xd4)) * (longlong)*(int *)(param_1 + 0xe0) +
              ((uVar14 - *(uint *)(param_1 + 200) & 0xffffffff) >> 2) & 0x1fffffff) * 8 +
             (ulonglong)*(uint *)(param_1 + 0xf8);
    puVar3 = (uint *)lVar13;
    if (puVar3[1] == 0) {
      uVar4 = fn_8265C940(*(int *)(param_1 + 0xdc) << 8,0x24810000);
      puVar3[1] = uVar4;
      if (uVar4 == 0) {
        return;
      }
      *puVar3 = 0;
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
    }
    uVar4 = (uint)uVar14;
    if (*puVar3 == 0) {
      uVar11 = uVar14 & 0xfffffffc;
      if (((uVar11 < *(uint *)(param_1 + 0x40)) &&
          (*(uint *)(param_1 + 0x98) < *(uint *)(param_1 + 0x40))) ||
         (((ulonglong)*(uint *)(param_1 + 0x48) < (uVar11 + 4 & 0xffffffff) &&
          (*(uint *)(param_1 + 0x48) < *(uint *)(param_1 + 0xa0))))) {
        uVar17 = *(uint *)(param_1 + 0xc4);
        uVar16 = (ulonglong)puVar3[1];
        lVar15 = (longlong)(int)(uVar4 >> 2) * (longlong)*(int *)(param_1 + 0x60) +
                 (longlong)(int)(uVar17 >> 2) * (longlong)*(int *)(param_1 + 0x88) +
                 (longlong)*(int *)(param_1 + 100) * (longlong)param_3 +
                 (ulonglong)*(uint *)(param_1 + 0x20);
        if (uVar17 < *(uint *)(param_1 + 0xcc)) {
          do {
            (**(code **)(param_1 + 0x8c))(uVar16,lVar15);
            uVar17 = uVar17 + 4;
            uVar16 = uVar16 + 0x100;
            lVar15 = (ulonglong)*(uint *)(param_1 + 0x88) + lVar15;
          } while (uVar17 < *(uint *)(param_1 + 0xcc));
        }
      }
      else {
        if ((*(uint *)(param_1 + 0xc4) < *(uint *)(param_1 + 0x3c)) &&
           (*(uint *)(param_1 + 0x94) < *(uint *)(param_1 + 0x3c))) {
          (**(code **)(param_1 + 0x8c))
                    (puVar3[1],
                     (longlong)(int)(*(uint *)(param_1 + 0xc4) >> 2) *
                     (longlong)*(int *)(param_1 + 0x88) +
                     (longlong)(int)((uVar14 & 0xffffffff) >> 2) *
                     (longlong)*(int *)(param_1 + 0x60) +
                     (longlong)*(int *)(param_1 + 100) * (longlong)param_3 +
                     (ulonglong)*(uint *)(param_1 + 0x20));
        }
        if ((*(uint *)(param_1 + 0x44) < *(uint *)(param_1 + 0xcc)) &&
           (*(uint *)(param_1 + 0x44) < *(uint *)(param_1 + 0x9c))) {
          (**(code **)(param_1 + 0x8c))
                    (puVar3[1],
                     (longlong)(int)(*(uint *)(param_1 + 0xcc) - 4 >> 2) *
                     (longlong)*(int *)(param_1 + 0x88) +
                     (longlong)(int)(uVar4 >> 2) * (longlong)*(int *)(param_1 + 0x60) +
                     (longlong)*(int *)(param_1 + 100) * (longlong)param_3 +
                     (ulonglong)*(uint *)(param_1 + 0x20));
        }
      }
      lVar15 = 0;
      lVar18 = 4;
      do {
        if (((lVar15 + uVar11 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x40)) ||
           ((ulonglong)*(uint *)(param_1 + 0x48) <= (lVar15 + uVar11 & 0xffffffff))) {
          *puVar3 = 1 << ((uint)lVar15 & 0x3f) | *puVar3;
        }
        lVar15 = lVar15 + 1;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      param_4 = fn_82924628(param_1,param_4);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      param_4 = fn_829252C0(param_1,param_4);
    }
    uVar17 = *(uint *)(param_1 + 200);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x3c) - (ulonglong)*(uint *)(param_1 + 0xc4);
    uVar16 = *(uint *)(param_1 + 0x68) + uVar11;
    if ((uVar11 & 0xffffffff) < (uVar16 & 0xffffffff)) {
      lVar15 = uVar16 - uVar11;
      puVar10 = (undefined4 *)(param_4 + -4);
      do {
        puVar9 = (undefined4 *)
                 (((uint)((uVar11 & 0x3ffffffc | uVar14 - uVar17 & 3) << 2) | (uint)uVar11 & 3) *
                  0x10 + puVar3[1]);
        *puVar9 = puVar10[1];
        puVar9[1] = puVar10[2];
        puVar9[2] = puVar10[3];
        puVar10 = puVar10 + 4;
        puVar9[3] = *puVar10;
        lVar15 = lVar15 + -1;
        uVar11 = uVar11 + 1;
      } while (lVar15 != 0);
    }
    uVar17 = 1 << (uVar4 & 3) | *puVar3;
    *puVar3 = uVar17;
    if (uVar17 == 0xf) {
      uVar11 = (ulonglong)*(uint *)(param_1 + 0xc4);
      uVar17 = puVar3[1];
      lVar15 = (longlong)(int)(uVar4 >> 2) * (longlong)*(int *)(param_1 + 0x60) +
               (longlong)(int)(*(uint *)(param_1 + 0xc4) >> 2) * (longlong)*(int *)(param_1 + 0x88)
               + (longlong)*(int *)(param_1 + 100) * (longlong)param_3 +
               (ulonglong)*(uint *)(param_1 + 0x20);
      if (uVar11 < *(uint *)(param_1 + 0xcc)) {
        *(undefined4 *)(iVar2 + 0x50) = 0;
        *(undefined4 *)(iVar2 + 0x54) = 0;
        *(undefined4 *)(iVar2 + 0x58) = 0;
        *(undefined4 *)(iVar2 + 0x5c) = 1;
        do {
          uVar7 = *(uint *)(param_1 + 0x9c) - uVar11;
          uVar16 = (ulonglong)*(uint *)(param_1 + 0xa0) - (uVar14 & 0xfffffffc);
          if (((uVar7 & 0xffffffff) < 4) && (uVar5 = 0, (uVar16 & 0xffffffff) != 0)) {
            do {
              if (3 < (uVar5 & 0xffffffff)) break;
              lVar12 = 4 - uVar7;
              lVar18 = (uVar7 & 0x3fffffff) * 4 + lVar1 + 0x4c;
              uVar8 = uVar7;
              do {
                lVar18 = lVar18 + 4;
                uVar4 = (uint)((uVar5 & 0x3fffffff) << 2);
                puVar9 = (undefined4 *)((uVar4 | (uint)uVar8) * 0x10 + uVar17);
                puVar10 = (undefined4 *)((uVar4 | *(uint *)lVar18) * 0x10 + uVar17);
                *puVar9 = *puVar10;
                puVar9[1] = puVar10[1];
                puVar9[2] = puVar10[2];
                puVar9[3] = puVar10[3];
                lVar12 = lVar12 + -1;
                uVar8 = uVar8 + 1;
              } while (lVar12 != 0);
              uVar5 = uVar5 + 1;
            } while ((uVar5 & 0xffffffff) < (uVar16 & 0xffffffff));
          }
          if ((uVar16 & 0xffffffff) < 4) {
            lVar18 = (uVar16 & 0x3fffffff) * 4 + (ZEXT48(&stack0x00000000) - 0x70);
            do {
              iVar2 = *(int *)lVar18;
              uVar4 = 0;
              lVar12 = 4;
              do {
                puVar9 = (undefined4 *)((iVar2 << 2 | uVar4) * 0x10 + uVar17);
                puVar10 = (undefined4 *)
                          ((uVar4 | (uint)((uVar16 & 0x3fffffff) << 2)) * 0x10 + uVar17);
                uVar4 = uVar4 + 1;
                *puVar10 = *puVar9;
                puVar10[1] = puVar9[1];
                puVar10[2] = puVar9[2];
                puVar10[3] = puVar9[3];
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
              uVar16 = uVar16 + 1;
              lVar18 = lVar18 + 4;
            } while ((uVar16 & 0xffffffff) < 4);
          }
          if ((*(int *)(param_1 + 0xfc) != 0) || (uVar6 = 0, *(int *)(param_1 + 0x5c) != 0)) {
            uVar6 = 1;
          }
          (**(code **)(param_1 + 0x90))(lVar15,uVar17,uVar6);
          uVar11 = uVar11 + 4;
          uVar17 = uVar17 + 0x100;
          lVar15 = (ulonglong)*(uint *)(param_1 + 0x88) + lVar15;
        } while ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xcc));
      }
      uVar14 = lVar13 + 8;
      if ((((uVar14 & 0xffffffff) <
            (((longlong)*(int *)(param_1 + 0xe4) * (longlong)*(int *)(param_1 + 0xe0) & 0x1fffffffU)
             * 8 + (ulonglong)*(uint *)(param_1 + 0xf8) & 0xffffffff)) && (*(int *)uVar14 == 0)) &&
         (puVar3[3] == 0)) {
        uVar4 = puVar3[1];
        puVar3[1] = 0;
        puVar3[3] = uVar4;
      }
      else {
        fn_8265C990(puVar3[1],0x24810000);
        *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + -1;
      }
      puVar3[1] = 0;
    }
  }
  return;
}

