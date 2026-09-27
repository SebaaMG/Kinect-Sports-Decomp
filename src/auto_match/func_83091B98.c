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
extern unsigned int *auStack_284;
extern unsigned int *auStack_494;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int lbl_821878B0;
extern unsigned int uStack_288;
extern unsigned int uStack_28c;
extern unsigned int uStack_498;
extern unsigned int uStack_49c;


void fn_83091B98(int param_1,int param_2,int *param_3,char param_4)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 **ppuVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  int *piVar13;
  ushort *puVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  undefined1 *puStack_4a0;
  uint uStack_49c;
  uint uStack_498;
  undefined1 auStack_494 [516];
  undefined1 *puStack_290;
  uint uStack_28c;
  uint uStack_288;
  undefined1 auStack_284 [500];
  
  iVar8 = *(int *)(param_1 + 0xb0);
  puVar2 = *(ushort **)(param_1 + 0xac);
  uStack_288 = 0x80000100;
  uStack_498 = 0x80000100;
  uStack_28c = 0;
  puStack_290 = auStack_284;
  uStack_49c = 0;
  puStack_4a0 = auStack_494;
  puVar4 = puVar2;
  do {
    while( true ) {
      puVar14 = puVar4 + 2;
      if (puVar2 + iVar8 * 2 + -2 <= puVar14) {
        iVar8 = fn_82CE5410();
        uStack_49c = 0;
        if ((uStack_498 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0x10) + 0x10))
                    (*(int **)(iVar8 + 0x10),puStack_4a0,uStack_498 & 0x3fffffff,2);
        }
        puStack_4a0 = (undefined1 *)0x0;
        uStack_498 = 0x80000000;
        iVar8 = fn_82CE5410();
        uStack_28c = 0;
        if ((uStack_288 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar8 + 0x10) + 0x10))
                    (*(int **)(iVar8 + 0x10),puStack_290,uStack_288 & 0x3fffffff,2);
        }
        return;
      }
      uVar1 = puVar4[3];
      uVar16 = *(uint *)(((int)(uint)uVar1 >> 5) * 4 + param_2) &
               *(uint *)(&lbl_821878B0 + (uVar1 & 0x1f) * 4);
      puVar4 = puVar14;
      if ((*puVar14 & 1) != 0) break;
      iVar7 = 0;
      piVar17 = (int *)((uint)uVar1 * 0x10 + *(int *)(param_1 + 0xa0));
      if (0 < (int)uStack_28c) {
        iVar18 = 0;
        do {
          iVar5 = *(int *)(param_1 + 0xa0);
          piVar19 = (int *)((uint)*(ushort *)(puStack_290 + iVar18) * 0x10 + iVar5);
          if (((piVar19[1] - *piVar17 |
               piVar17[1] - *(int *)((uint)*(ushort *)(puStack_290 + iVar18) * 0x10 + iVar5)) &
              0x80008000U) == 0) {
            piVar15 = piVar17;
            piVar13 = piVar19;
            if (((piVar17[3] & 1U) == 0) &&
               (piVar15 = piVar19, piVar13 = piVar17, (piVar19[3] & 1U) == 0)) {
              iVar5 = fn_82CE5410();
              if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),param_3,8);
              }
              iVar5 = *param_3;
              iVar6 = param_3[1] * 8;
              param_3[1] = param_3[1] + 1;
              *(int *)(iVar6 + iVar5) = piVar19[3];
              *(int *)(iVar6 + iVar5 + 4) = piVar17[3];
            }
            else {
              uVar3 = (int)piVar13 - iVar5 >> 4;
              iVar5 = (piVar15[3] & 0xfffffffeU) + *(int *)(param_1 + 0xd8);
              if (param_4 == '\0') {
                iVar6 = 0;
                if (0 < *(int *)(iVar5 + 8)) {
                  puVar14 = *(ushort **)(iVar5 + 4);
                  do {
                    if ((uint)*puVar14 == (uVar3 & 0xffff)) goto LAB_83091e4c;
                    iVar6 = iVar6 + 1;
                    puVar14 = puVar14 + 1;
                  } while (iVar6 < *(int *)(iVar5 + 8));
                }
                iVar6 = -1;
LAB_83091e4c:
                iVar12 = *(int *)(iVar5 + 8) + -1;
                *(int *)(iVar5 + 8) = iVar12;
                if (iVar12 != iVar6) {
                  *(undefined2 *)(iVar6 * 2 + *(int *)(iVar5 + 4)) =
                       *(undefined2 *)(iVar12 * 2 + *(int *)(iVar5 + 4));
                }
              }
              else {
                iVar6 = fn_82CE5410();
                if (*(uint *)(iVar5 + 8) == (*(uint *)(iVar5 + 0xc) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),(int *)(iVar5 + 4),2);
                }
                *(short *)(*(int *)(iVar5 + 8) * 2 + *(int *)(iVar5 + 4)) = (short)uVar3;
                *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
              }
            }
          }
          iVar7 = iVar7 + 1;
          iVar18 = iVar18 + 2;
        } while (iVar7 < (int)uStack_28c);
      }
      if (uVar16 == 0) {
        iVar7 = fn_82CE5410();
        if (uStack_49c == (uStack_498 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),&puStack_4a0,2);
        }
        *(ushort *)(puStack_4a0 + uStack_49c * 2) = uVar1;
        uStack_49c = uStack_49c + 1;
      }
      else {
        iVar7 = 0;
        if (0 < (int)uStack_49c) {
          iVar18 = 0;
          do {
            iVar5 = *(int *)(param_1 + 0xa0);
            piVar19 = (int *)((uint)*(ushort *)(puStack_4a0 + iVar18) * 0x10 + iVar5);
            if (((piVar19[1] - *piVar17 |
                 piVar17[1] - *(int *)((uint)*(ushort *)(puStack_4a0 + iVar18) * 0x10 + iVar5)) &
                0x80008000U) == 0) {
              piVar15 = piVar19;
              piVar13 = piVar17;
              if (((piVar17[3] & 1U) == 0) &&
                 (piVar15 = piVar17, piVar13 = piVar19, (piVar19[3] & 1U) == 0)) {
                iVar5 = fn_82CE5410();
                if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),param_3,8);
                }
                iVar5 = param_3[1];
                param_3[1] = iVar5 + 1;
                piVar15 = (int *)(iVar5 * 8 + *param_3);
                *piVar15 = piVar19[3];
                piVar15[1] = piVar17[3];
              }
              else {
                uVar16 = (int)piVar15 - iVar5 >> 4;
                iVar5 = (piVar13[3] & 0xfffffffeU) + *(int *)(param_1 + 0xd8);
                if (param_4 == '\0') {
                  iVar6 = 0;
                  if (0 < *(int *)(iVar5 + 8)) {
                    puVar14 = *(ushort **)(iVar5 + 4);
                    do {
                      if ((uint)*puVar14 == (uVar16 & 0xffff)) goto LAB_83092018;
                      iVar6 = iVar6 + 1;
                      puVar14 = puVar14 + 1;
                    } while (iVar6 < *(int *)(iVar5 + 8));
                  }
                  iVar6 = -1;
LAB_83092018:
                  iVar12 = *(int *)(iVar5 + 8) + -1;
                  *(int *)(iVar5 + 8) = iVar12;
                  if (iVar12 != iVar6) {
                    *(undefined2 *)(iVar6 * 2 + *(int *)(iVar5 + 4)) =
                         *(undefined2 *)(iVar12 * 2 + *(int *)(iVar5 + 4));
                  }
                }
                else {
                  iVar6 = fn_82CE5410();
                  if (*(uint *)(iVar5 + 8) == (*(uint *)(iVar5 + 0xc) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                    fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),(int *)(iVar5 + 4),2);
                  }
                  *(short *)(*(int *)(iVar5 + 8) * 2 + *(int *)(iVar5 + 4)) = (short)uVar16;
                  *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
                }
              }
            }
            iVar7 = iVar7 + 1;
            iVar18 = iVar18 + 2;
          } while (iVar7 < (int)uStack_49c);
        }
        iVar7 = fn_82CE5410();
        if (uStack_28c == (uStack_288 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),&puStack_290,2);
        }
        *(ushort *)(puStack_290 + uStack_28c * 2) = uVar1;
        uStack_28c = uStack_28c + 1;
      }
    }
    ppuVar9 = &puStack_290;
    if (uVar16 == 0) {
      ppuVar9 = &puStack_4a0;
    }
    puVar11 = ppuVar9[1];
    puVar10 = (undefined1 *)0x0;
    if (0 < (int)puVar11) {
      puVar14 = (ushort *)*ppuVar9;
      do {
        if ((uint)*puVar14 == (uint)uVar1) goto LAB_83091c88;
        puVar10 = puVar10 + 1;
        puVar14 = puVar14 + 1;
      } while ((int)puVar10 < (int)puVar11);
    }
    puVar10 = (undefined1 *)0xffffffff;
LAB_83091c88:
    puVar11 = puVar11 + -1;
    ppuVar9[1] = puVar11;
    if (puVar11 != puVar10) {
      *(undefined2 *)(*ppuVar9 + (int)puVar10 * 2) = *(undefined2 *)(*ppuVar9 + (int)puVar11 * 2);
    }
  } while( true );
}

