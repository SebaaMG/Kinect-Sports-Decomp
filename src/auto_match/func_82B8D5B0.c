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
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82AD2020();
extern int fn_82AD6090();
extern int fn_82B28C98();
extern int fn_82B41D68();
extern int fn_82B8BD80();
extern int fn_82B8E0B8();


void fn_82B8D5B0(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint uVar18;
  
  puVar9 = (uint *)fn_82ABE250(param_1,8,0x26);
  puVar6 = puVar9 + 1;
  puVar9[1] = (uint)puVar9 | 1;
  *puVar9 = (uint)puVar6 | 1;
  piVar1 = *(int **)(param_2 + 0xc);
  piVar1[2] = piVar1[2] | 0x4000000;
  do {
    if ((piVar1[2] & 0x3f80U) == 0x3800) {
      if (param_3 == '\0') goto LAB_82b8d858;
      if (*piVar1 == 0) {
LAB_82b8d874:
        bVar7 = false;
LAB_82b8d878:
        if (bVar7) {
          iVar12 = piVar1[7];
          iVar14 = *(int *)(iVar12 + 8);
          iVar13 = iVar14;
LAB_82b8d88c:
          if (iVar13 != 0) {
            uVar16 = (ulonglong)*(uint *)(iVar12 + 0x30) & 0x7ffff;
            if ((*(uint *)(((int)(uVar16 >> 5) + 1) * 4 + *(int *)(*(int *)(iVar13 + 4) + 0x28)) &
                1 << ((uint)uVar16 & 0x1f)) == 0) break;
            if ((*(uint *)(param_1 + 0x28) & 8) == 0) {
              fn_82B28C98(param_1,iVar12,0x10);
            }
            for (uVar18 = *(uint *)(param_1 + 4); ((uVar18 & 1) == 0 && (uVar18 != 0));
                uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 4)) {
              if ((*(uint *)(uVar18 + 0x30) >> 0x1e & 1) != 0) {
                for (piVar3 = *(int **)(uVar18 + 0xc); piVar3 != (int *)0x0;
                    piVar3 = (int *)piVar3[2]) {
                  if (((*(uint *)(*piVar3 + 0x30) >> 0x1e & 1) == 0) &&
                     ((*(uint *)(*piVar3 + 0x30) >> 0x13 & 1) == 0)) {
                    iVar12 = fn_82AD2020(param_1,uVar18);
                    if ((iVar12 != 0) && ((*(uint *)(iVar12 + 8) >> 0x1a & 1) == 0)) {
                      uVar5 = *(uint *)(iVar12 + 8) >> 7 & 0x7f;
                      if (((((uVar5 == 0x56) || (uVar5 == 0x57)) || (uVar5 == 0x59)) ||
                          ((uVar5 == 0x5a || (uVar5 == 0x54)))) || (bVar7 = false, uVar5 == 0x55)) {
                        bVar7 = true;
                      }
                      if (bVar7) {
                        fn_82B8E0B8(param_1,iVar12,puVar9);
                      }
                    }
                    break;
                  }
                }
              }
            }
            if ((*(uint *)(param_1 + 0x28) & 8) == 0) {
              for (uVar18 = *(uint *)(param_1 + 4); ((uVar18 & 1) == 0 && (uVar18 != 0));
                  uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 4)) {
                if ((*(uint *)(uVar18 + 0x30) >> 0x1e & 1) != 0) {
                  *(uint *)(uVar18 + 0x30) = *(uint *)(uVar18 + 0x30) & 0xbfffffff;
                }
              }
            }
            goto LAB_82b8da0c;
          }
          if ((*(uint *)(iVar12 + 0x30) >> 0x13 & 1) == 0) {
            for (; iVar14 != 0; iVar14 = *(int *)(iVar14 + 0xc)) {
              iVar12 = fn_82B41D68(param_1,piVar1,*(undefined4 *)(iVar14 + 4),0,1);
              if (iVar12 != 0) {
                fn_82B8BD80(param_1,*(undefined4 *)(iVar12 + 0xc),
                              *(undefined4 *)(piVar1[7] + 0x34),puVar9);
              }
            }
          }
          else {
            for (; iVar14 != 0; iVar14 = *(int *)(iVar14 + 0xc)) {
              iVar12 = fn_82AD2020(param_1,*(undefined4 *)(iVar14 + 4));
              if ((*(uint *)(iVar12 + 8) >> 0x1a & 1) == 0) {
                *(uint *)(iVar12 + 8) = *(uint *)(iVar12 + 8) | 0x4000000;
                if ((*puVar6 & 1) == 0) {
                  uVar18 = *puVar9 & 0xfffffffe;
                  iVar13 = uVar18 - 4;
                  if ((iVar13 == 0) || (*(uint *)(uVar18 + 8) < *(int *)(uVar18 + 4) + 1U))
                  goto LAB_82b8db20;
                }
                else {
LAB_82b8db20:
                  iVar13 = fn_82AD6090(puVar9,1);
                }
                iVar10 = *(int *)(iVar13 + 8);
                *(int *)(iVar13 + 8) = iVar10 + 1;
                *(int *)((iVar10 + 4) * 4 + iVar13) = iVar12;
              }
            }
          }
        }
        goto LAB_82b8da0c;
      }
      iVar12 = piVar1[7];
      if ((*(uint *)(iVar12 + 0x30) >> 0x15 & 1) == 0) {
LAB_82b8d858:
        if ((*piVar1 == 0) || (bVar7 = true, *(int *)(*piVar1 + 4) == 0)) goto LAB_82b8d874;
        goto LAB_82b8d878;
      }
      iVar13 = *(int *)(*(int *)(*piVar1 + 0xc) + 0x1c);
      uVar16 = (ulonglong)*(uint *)(iVar13 + 0x30);
      uVar18 = *(uint *)(iVar13 + 0x30) >> 0x13 & 1;
      if (uVar18 == 0) {
        do {
          if ((1 << ((uint)uVar16 & 0x1f) &
              *(uint *)((((uint)(uVar16 >> 5) & 0x3fff) + 1) * 4 + *(int *)(iVar12 + 0x28))) != 0)
          break;
          iVar13 = *(int *)(iVar13 + 0x34);
          uVar16 = (ulonglong)*(uint *)(iVar13 + 0x30);
          uVar18 = *(uint *)(iVar13 + 0x30) >> 0x13 & 1;
        } while (uVar18 == 0);
      }
      if ((uVar18 == 0) ||
         ((*(uint *)((((uint)(uVar16 >> 5) & 0x3fff) + 1) * 4 + *(int *)(iVar12 + 0x28)) &
          1 << ((uint)uVar16 & 0x1f)) != 0)) goto LAB_82b8d858;
      for (iVar12 = *(int *)(iVar12 + 8); iVar12 != 0; iVar12 = *(int *)(iVar12 + 0xc)) {
        iVar14 = *(int *)(iVar12 + 4);
        for (piVar1 = *(int **)(iVar14 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
          if (iVar13 == *piVar1) {
            bVar7 = true;
            goto LAB_82b8d6e4;
          }
        }
        bVar7 = false;
LAB_82b8d6e4:
        if (bVar7) {
          iVar10 = fn_82AD2020(param_1,iVar14);
          uVar18 = *(uint *)(iVar10 + 8);
          uVar5 = uVar18 >> 7 & 0x7f;
          if ((uVar5 == 0x56) || (bVar7 = false, uVar5 == 0x57)) {
            bVar7 = true;
          }
          if (!bVar7) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          if ((uVar18 >> 0x1a & 1) == 0) {
            *(uint *)(iVar10 + 8) = uVar18 | 0x4000000;
            if ((*puVar6 & 1) == 0) {
              uVar18 = *puVar9 & 0xfffffffe;
              iVar11 = uVar18 - 4;
              if ((iVar11 == 0) || (*(uint *)(uVar18 + 8) < *(int *)(uVar18 + 4) + 1U))
              goto LAB_82b8d764;
            }
            else {
LAB_82b8d764:
              iVar11 = fn_82AD6090(puVar9,1);
            }
            iVar2 = *(int *)(iVar11 + 8);
            *(int *)(iVar11 + 8) = iVar2 + 1;
            *(int *)((iVar2 + 4) * 4 + iVar11) = iVar10;
          }
          for (uVar18 = *(uint *)(iVar13 + 0x14); ((uVar18 & 1) == 0 && (uVar18 != 0));
              uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 0x28)) {
            if ((*(uint *)(uVar18 + 8) & 0x3f80) == 0x3800) {
              iVar10 = fn_82B41D68(param_1,uVar18,iVar14,0,1);
              iVar10 = *(int *)(iVar10 + 0xc);
              if ((*(uint *)(iVar10 + 8) >> 0x1a & 1) == 0) {
                *(uint *)(iVar10 + 8) = *(uint *)(iVar10 + 8) | 0x4000000;
                if ((*puVar6 & 1) == 0) {
                  uVar5 = *puVar9 & 0xfffffffe;
                  iVar11 = uVar5 - 4;
                  if ((iVar11 == 0) || (*(uint *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U))
                  goto LAB_82b8d810;
                }
                else {
LAB_82b8d810:
                  iVar11 = fn_82AD6090(puVar9,1);
                }
                iVar2 = *(int *)(iVar11 + 8);
                *(int *)(iVar11 + 8) = iVar2 + 1;
                *(int *)((iVar2 + 4) * 4 + iVar11) = iVar10;
              }
            }
          }
        }
      }
    }
    else {
LAB_82b8da0c:
      for (puVar4 = (uint *)*piVar1; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[1]) {
        uVar18 = *puVar4;
        if (((uVar18 & 0x40000000) != 0) || (bVar7 = false, (uVar18 & 0xe000000) != 0)) {
          bVar7 = true;
        }
        if (bVar7) {
          if (((uVar18 & 0xe000000) != 0) && ((uVar18 & 0x10) != 0)) {
            iVar12 = piVar1[7];
            do {
              do {
                iVar12 = *(int *)(iVar12 + 0x34);
                iVar13 = fn_82AD2020(param_1,iVar12);
              } while (iVar13 == 0);
              uVar18 = *(uint *)(iVar13 + 8);
            } while ((uVar18 & 0x3f80) != 0x2a00);
            if ((uVar18 >> 0x1a & 1) == 0) {
              iVar12 = fn_82ABDD90(param_1,0x54,uVar18 >> 0x13 & 7,uVar18 >> 0xe & 7);
              uVar5 = *(uint *)(*(uint *)(iVar12 + iVar13 + -0x10) & 0xfffffffe);
              if ((uVar5 & 1) == 0) {
                lVar15 = ((ulonglong)uVar5 & 0xfffffffe) - 4;
              }
              else {
                lVar15 = 0;
              }
              iVar12 = fn_82AD2020(param_1,lVar15);
              *(uint *)(iVar13 + 8) = uVar18 | 0x4000000;
              if ((*puVar6 & 1) == 0) {
                uVar18 = *puVar9 & 0xfffffffe;
                iVar14 = uVar18 - 4;
                if ((iVar14 == 0) || (*(uint *)(uVar18 + 8) < *(int *)(uVar18 + 4) + 1U))
                goto LAB_82b8dbe0;
              }
              else {
LAB_82b8dbe0:
                iVar14 = fn_82AD6090(puVar9,1);
              }
              iVar10 = *(int *)(iVar14 + 8);
              *(int *)(iVar14 + 8) = iVar10 + 1;
              *(int *)((iVar10 + 4) * 4 + iVar14) = iVar13;
              *(uint *)(iVar12 + 8) = *(uint *)(iVar12 + 8) | 0x4000000;
              if ((*puVar6 & 1) == 0) {
                uVar18 = *puVar9 & 0xfffffffe;
                iVar13 = uVar18 - 4;
                if ((iVar13 == 0) || (*(uint *)(uVar18 + 8) < *(int *)(uVar18 + 4) + 1U))
                goto LAB_82b8dc40;
              }
              else {
LAB_82b8dc40:
                iVar13 = fn_82AD6090(puVar9,1);
              }
              iVar14 = *(int *)(iVar13 + 8);
              *(int *)(iVar13 + 8) = iVar14 + 1;
              *(int *)((iVar14 + 4) * 4 + iVar13) = iVar12;
            }
          }
          uVar18 = puVar4[3];
          if ((*(uint *)(uVar18 + 8) >> 0x1a & 1) == 0) {
            *(uint *)(uVar18 + 8) = *(uint *)(uVar18 + 8) | 0x4000000;
            if ((*puVar6 & 1) == 0) {
              uVar5 = *puVar9 & 0xfffffffe;
              iVar12 = uVar5 - 4;
              if ((iVar12 == 0) || (*(uint *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U))
              goto LAB_82b8dcac;
            }
            else {
LAB_82b8dcac:
              iVar12 = fn_82AD6090(puVar9,1);
            }
            iVar13 = *(int *)(iVar12 + 8);
            *(int *)(iVar12 + 8) = iVar13 + 1;
            *(uint *)((iVar13 + 4) * 4 + iVar12) = uVar18;
          }
        }
      }
      uVar18 = (uint)piVar1[2] >> 7 & 0x7f;
      if ((uVar18 < 0x15) || (bVar7 = true, 0x18 < uVar18)) {
        bVar7 = false;
      }
      if (bVar7) {
        for (puVar4 = (uint *)piVar1[1]; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[2]) {
          uVar18 = puVar4[4];
          if (uVar18 != 0) {
            if ((*puVar4 & 0xe000000) == 0) {
              if ((*puVar4 >> 0x1e & 1) != 0) {
                uVar5 = *(uint *)(uVar18 + 8);
                uVar8 = uVar5 >> 7 & 0x7f;
                if ((((uVar8 == 0x56) || (uVar8 == 0x57)) || (uVar8 == 0x59)) ||
                   (((uVar8 == 0x5a || (uVar8 == 0x54)) || (bVar7 = false, uVar8 == 0x55)))) {
                  bVar7 = true;
                }
                if ((bVar7) && ((uVar5 >> 0x1a & 1) == 0)) {
                  *(uint *)(uVar18 + 8) = uVar5 | 0x4000000;
                  goto LAB_82b8ddec;
                }
              }
            }
            else {
              puVar17 = (uint *)(uVar18 + 8);
              uVar5 = *puVar17 >> 7 & 0x7f;
              if ((uVar5 < 0x15) || (bVar7 = true, 0x18 < uVar5)) {
                bVar7 = false;
              }
              if (!bVar7) {
                uVar5 = *puVar17;
                while ((uVar5 & 0x3f80) == 0x3800) {
                  uVar18 = *(uint *)(*(int *)(uVar18 + 4) + 0x10);
                  puVar17 = (uint *)(uVar18 + 8);
                  uVar5 = *(uint *)(uVar18 + 8);
                }
                if ((*puVar17 >> 0x1a & 1) == 0) {
                  *puVar17 = *puVar17 | 0x4000000;
LAB_82b8ddec:
                  if ((*puVar6 & 1) == 0) {
                    uVar5 = *puVar9 & 0xfffffffe;
                    iVar12 = uVar5 - 4;
                    if ((iVar12 == 0) || (*(uint *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U))
                    goto LAB_82b8de1c;
                  }
                  else {
LAB_82b8de1c:
                    iVar12 = fn_82AD6090(puVar9,1);
                  }
                  iVar13 = *(int *)(iVar12 + 8);
                  *(int *)(iVar12 + 8) = iVar13 + 1;
                  *(uint *)((iVar13 + 4) * 4 + iVar12) = uVar18;
                }
              }
            }
          }
        }
      }
    }
    if (((*puVar6 & 1) != 0) || (*puVar6 == 0)) {
      *puVar9 = *(uint *)(param_1 + 0x3d0);
      *(uint **)(param_1 + 0x3d0) = puVar9;
      return;
    }
    puVar4 = (uint *)(*puVar9 & 0xfffffffe);
    puVar17 = puVar4 + -1;
    uVar18 = puVar4[1] - 1;
    piVar1 = (int *)puVar17[puVar4[1] + 3];
    puVar4[1] = uVar18;
    if (uVar18 == 0) {
      *(uint *)(*puVar4 & 0xfffffffe) = *puVar17;
      *(uint *)(*puVar17 & 0xfffffffe) = *puVar4;
      fn_82AA6648(puVar9,puVar17,((ulonglong)puVar4[2] + 4 & 0x3fffffff) << 2);
    }
  } while( true );
  iVar13 = *(int *)(iVar13 + 0xc);
  goto LAB_82b8d88c;
}

