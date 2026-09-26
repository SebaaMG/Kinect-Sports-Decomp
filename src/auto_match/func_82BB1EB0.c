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
extern int fn_82B7BD28();
extern int fn_82B7BEB0();
extern int fn_82BA03B8();
extern int fn_82BA0FD8();
extern int fn_82BABD38();
extern int fn_82BB1C88();
extern int fn_82BB1CE0();
extern int fn_82BC2FA8();
extern int fn_82BD0730();
extern int fn_82BD0F28();
extern unsigned int lbl_820E7F9C;


void fn_82BB1EB0(int param_1,undefined8 param_2,int param_3,undefined8 param_4,ulonglong param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar12;
  bool bVar13;
  uint *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  int *piVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  
  lVar19 = 0;
  if (0 < param_3) {
    do {
      lVar18 = 0;
      if (0 < (int)lVar19) {
        do {
          fn_82BD0F28(param_2,lVar19,lVar18);
          lVar18 = lVar18 + 1;
        } while ((int)lVar18 < (int)lVar19);
      }
      lVar19 = lVar19 + 1;
    } while ((int)lVar19 < param_3);
  }
  puVar6 = (uint *)fn_82BA0FD8(param_4,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
  uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar7 = (undefined4 *)fn_82B7BD28(uVar8,0x18);
  puVar15 = puVar7 + 1;
  *puVar7 = uVar8;
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = (undefined4 *)0x0;
  }
  else {
    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
    fn_82BA03B8(puVar15,uVar8);
    uVar8 = fn_82BA0FD8(param_4,uVar8);
    puVar7[5] = uVar8;
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if (*(int *)(iVar1 + 8) != 0) {
    do {
      uVar12 = 0;
      uVar9 = 0;
      if (*puVar6 != 0) {
        puVar14 = puVar6 + 1;
        do {
          uVar12 = uVar12 + 1;
          puVar14 = puVar14 + 1;
          *puVar14 = 0;
          uVar9 = *puVar6;
        } while (uVar12 < uVar9);
      }
      if ((param_5 & 0xff) == 0) {
        iVar10 = *(int *)(iVar1 + 0x68);
        uVar12 = 0;
        if (uVar9 != 0) {
          puVar14 = puVar6 + 2;
          do {
            uVar12 = uVar12 + 1;
            *puVar14 = *(uint *)((iVar10 - (int)puVar6) + (int)puVar14);
            puVar14 = puVar14 + 1;
          } while (uVar12 < *puVar6);
        }
      }
      else {
        uVar20 = 0;
        if (0 < (int)param_4) {
          do {
            if ((*(uint *)(((int)((uVar20 & 0xffffffff) >> 5) + 2) * 4 + *(int *)(iVar1 + 0x68)) >>
                 ((uint)uVar20 & 0x1f) & 1) != 0) {
              uVar9 = fn_82BD0730(param_2,uVar20,param_5);
              iVar10 = (uVar9 >> 5) + 2;
              puVar6[iVar10] = 1 << (uVar9 & 0x1f) | puVar6[iVar10];
            }
            uVar20 = uVar20 + 1;
          } while ((int)uVar20 < (int)param_4);
        }
      }
      for (piVar2 = *(int **)(iVar1 + 0x24); piVar2[1] != 0; piVar2 = (int *)piVar2[1]) {
        if ((piVar2 == *(int **)(iVar1 + 0x1c)) || ((*(uint *)(piVar2[1] + 0xe4) >> 2 & 1) == 0)) {
          uVar20 = 0;
          piVar17 = piVar2;
          do {
            if (uVar20 != 0) break;
            if (((piVar17[0x39] & 1U) != 0) &&
               (iVar10 = (**(code **)(*piVar17 + 0x2c))(piVar17), iVar10 == 0)) {
              if ((piVar17[4] == 0) ||
                 ((((uint)piVar17[0x39] >> 1 & 1) != 0 ||
                  (bVar13 = true, (&lbl_820E7F9C)[piVar17[0x14] * 0xc] == '\0')))) {
                bVar13 = false;
              }
              if (bVar13) {
                iVar10 = -1;
                uVar20 = fn_82BD0730(param_2,piVar17[0xe],param_5);
                cVar11 = fn_82BABD38(piVar17);
                if (cVar11 != '\0') {
                  iVar3 = piVar17[0x3b];
                  if (((*(int *)(iVar3 + 0x10) == 0) || ((*(uint *)(iVar3 + 0xe4) >> 1 & 1) != 0))
                     || (bVar13 = true, (&lbl_820E7F9C)[*(int *)(iVar3 + 0x50) * 0xc] == '\0')) {
                    bVar13 = false;
                  }
                  if (bVar13) {
                    iVar10 = fn_82BD0730(param_2,*(undefined4 *)(iVar3 + 0x38),param_5);
                  }
                }
                if ((puVar6[(int)((uVar20 & 0xffffffff) >> 5) + 2] >> ((uint)uVar20 & 0x1f) & 1) ==
                    0) {
                  fn_82BB1C88(puVar15,uVar20);
                }
                else {
                  uVar21 = 0;
                  if (puVar6[1] != 0) {
                    do {
                      if (((puVar6[(int)((uVar21 & 0xffffffff) >> 5) + 2] >> ((uint)uVar21 & 0x1f) &
                           1) != 0) &&
                         (uVar4 = fn_82BD0730(param_2,uVar21,param_5), (int)uVar4 != iVar10))
                      {
                        fn_82BD0F28(param_2,uVar20,uVar4);
                      }
                      uVar21 = uVar21 + 1;
                    } while ((uVar21 & 0xffffffff) < (ulonglong)puVar6[1]);
                  }
                  if (piVar17[6] == 0x32) {
                    iVar10 = piVar17[0x3b];
                    if (((*(int *)(iVar10 + 0x10) == 0) ||
                        ((*(uint *)(iVar10 + 0xe4) >> 1 & 1) != 0)) ||
                       (bVar13 = true, (&lbl_820E7F9C)[*(int *)(iVar10 + 0x50) * 0xc] == '\0')) {
                      bVar13 = false;
                    }
                    if (bVar13) {
                      uVar4 = fn_82BD0730(param_2,*(undefined4 *)(iVar10 + 0x38),param_5);
                      fn_82BD0F28(param_2,uVar20,uVar4);
                    }
                  }
                }
              }
            }
            puVar14 = (uint *)(piVar17 + 0x39);
            piVar17 = (int *)piVar17[2];
            uVar20 = (~(ulonglong)*puVar14 & 0xffffffff) >> 2 & 1;
          } while (piVar17 != (int *)0x0);
          uVar20 = 0;
          piVar17 = piVar2;
          do {
            if (uVar20 != 0) break;
            if (((piVar17[0x39] & 1U) != 0) &&
               (iVar10 = (**(code **)(*piVar17 + 0x2c))(piVar17), iVar10 == 0)) {
              if ((piVar17[4] == 0) ||
                 ((((uint)piVar17[0x39] >> 1 & 1) != 0 ||
                  (bVar13 = true, (&lbl_820E7F9C)[piVar17[0x14] * 0xc] == '\0')))) {
                bVar13 = false;
              }
              if (bVar13) {
                uVar9 = fn_82BD0730(param_2,piVar17[0xe],param_5);
                iVar10 = (uVar9 >> 5) + 2;
                puVar6[iVar10] = puVar6[iVar10] & ~(1 << (uVar9 & 0x1f));
              }
            }
            puVar14 = (uint *)(piVar17 + 0x39);
            piVar17 = (int *)piVar17[2];
            uVar20 = (~(ulonglong)*puVar14 & 0xffffffff) >> 2 & 1;
          } while (piVar17 != (int *)0x0);
          while (puVar15[1] != 0) {
            uVar4 = fn_82BB1CE0(puVar15);
            uVar20 = 0;
            if (puVar6[1] != 0) {
              do {
                if ((puVar6[(int)((uVar20 & 0xffffffff) >> 5) + 2] >> ((uint)uVar20 & 0x1f) & 1) !=
                    0) {
                  uVar5 = fn_82BD0730(param_2,uVar20,param_5);
                  fn_82BD0F28(param_2,uVar4,uVar5);
                }
                uVar20 = uVar20 + 1;
              } while ((uVar20 & 0xffffffff) < (ulonglong)puVar6[1]);
            }
          }
          uVar20 = 0;
          piVar17 = piVar2;
          do {
            if (uVar20 != 0) break;
            if ((((piVar17[0x39] & 1U) != 0) &&
                (iVar10 = (**(code **)(*piVar17 + 0x2c))(piVar17), iVar10 == 0)) &&
               (lVar19 = 1, 0 < piVar17[5])) {
              piVar16 = piVar17 + 0x3b;
              do {
                iVar10 = *piVar16;
                if (((*(int *)(iVar10 + 0x10) == 0) || ((*(uint *)(iVar10 + 0xe4) >> 1 & 1) != 0))
                   || (bVar13 = true, (&lbl_820E7F9C)[*(int *)(iVar10 + 0x50) * 0xc] == '\0')) {
                  bVar13 = false;
                }
                if ((bVar13) && (cVar11 = fn_82BC2FA8(piVar17,lVar19,piVar2), cVar11 == '\0'))
                {
                  uVar9 = fn_82BD0730(param_2,*(undefined4 *)(iVar10 + 0x38),param_5);
                  iVar10 = (uVar9 >> 5) + 2;
                  puVar6[iVar10] = 1 << (uVar9 & 0x1f) | puVar6[iVar10];
                }
                lVar19 = lVar19 + 1;
                piVar16 = piVar16 + 1;
              } while ((int)lVar19 <= piVar17[5]);
            }
            puVar14 = (uint *)(piVar17 + 0x39);
            piVar17 = (int *)piVar17[2];
            uVar20 = (~(ulonglong)*puVar14 & 0xffffffff) >> 2 & 1;
          } while (piVar17 != (int *)0x0);
        }
      }
      iVar1 = *(int *)(iVar1 + 8);
    } while (*(int *)(iVar1 + 8) != 0);
  }
  if (puVar6 != (uint *)0x0) {
    fn_82B7BEB0(puVar6[-1],puVar6 + -1);
  }
  return;
}

