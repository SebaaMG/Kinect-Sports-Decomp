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
extern int fn_82ABDF50();
extern int fn_82ABE250();
extern int fn_82ABE5F8();
extern int fn_82AD6090();
extern int fn_82AE60E8();
extern int fn_82B46518();
extern int fn_82B51878();
extern int fn_82B5DFD0();
extern int fn_82F68CC0();


void fn_82B5E170(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar5;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int *piVar16;
  int iVar17;
  
  puVar6 = (uint *)fn_82ABE250(param_1,8,0xf);
  puVar10 = puVar6 + 1;
  puVar6[1] = (uint)puVar6 | 1;
  *puVar6 = (uint)puVar10 | 1;
  if ((*(uint *)(param_1 + 0x28) & 0x40) != 0) {
    iVar17 = *(int *)(*(int *)(param_1 + 8) + 0x28);
    if ((iVar17 == 0) || (*(int *)(iVar17 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    do {
      iVar9 = *(int *)(iVar17 + 8);
      if (*(int *)(iVar9 + 4) == 0xc) {
        if ((*puVar10 & 1) == 0) {
          uVar2 = *puVar6 & 0xfffffffe;
          iVar7 = uVar2 - 4;
          if ((iVar7 == 0) || (*(uint *)(uVar2 + 8) < *(int *)(uVar2 + 4) + 1U)) goto LAB_82b5e214;
        }
        else {
LAB_82b5e214:
          iVar7 = fn_82AD6090(puVar6,1);
        }
        iVar12 = *(int *)(iVar7 + 8);
        *(int *)(iVar7 + 8) = iVar12 + 1;
        *(int *)((iVar12 + 4) * 4 + iVar7) = iVar9;
      }
      iVar17 = *(int *)(iVar17 + 0xc);
      if ((iVar17 != 0) && (*(int *)(iVar17 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
    } while (iVar17 != 0);
  }
  for (iVar17 = *(int *)(param_1 + 0x238); iVar17 != 0; iVar17 = *(int *)(iVar17 + 8)) {
    iVar9 = *(int *)(iVar17 + 4);
    iVar7 = *(int *)(iVar9 + 0x2c);
    if ((iVar7 != 0) && (*(int *)(iVar7 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    while (iVar7 != 0) {
      iVar12 = *(int *)(iVar7 + 8);
      if (*(int *)(iVar12 + 4) == 6) {
        if (*(int *)(iVar12 + 0x10) != 1) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        iVar12 = *(int *)(iVar12 + 0x18);
        if ((iVar12 == 0) || (*(int *)(iVar12 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        if ((param_2 != iVar17) ||
           (((*(uint *)(param_1 + 0x28) & 0x800) != 0 && ((*(uint *)(iVar12 + 0x2c) & 0x40) != 0))))
        {
          iVar12 = *(int *)(iVar12 + 0x10) * 0x28 + *(int *)(param_1 + 0xc);
          *(uint *)(iVar12 + 4) = *(uint *)(iVar12 + 4) | 4;
        }
      }
      else {
        if ((*puVar10 & 1) == 0) {
          uVar2 = *puVar6 & 0xfffffffe;
          iVar8 = uVar2 - 4;
          if ((iVar8 == 0) || (*(uint *)(uVar2 + 8) < *(int *)(uVar2 + 4) + 1U)) goto LAB_82b5e34c;
        }
        else {
LAB_82b5e34c:
          iVar8 = fn_82AD6090(puVar6,1);
        }
        iVar1 = *(int *)(iVar8 + 8);
        *(int *)(iVar8 + 8) = iVar1 + 1;
        *(int *)((iVar1 + 4) * 4 + iVar8) = iVar12;
      }
      iVar7 = *(int *)(iVar7 + 0xc);
      if ((iVar7 != 0) && (*(int *)(iVar7 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
    }
    iVar9 = *(int *)(iVar9 + 0x30);
    if (iVar9 != 0) {
      if ((*puVar10 & 1) == 0) {
        uVar2 = *puVar6 & 0xfffffffe;
        iVar7 = uVar2 - 4;
        if ((iVar7 == 0) || (*(uint *)(uVar2 + 8) < *(int *)(uVar2 + 4) + 1U)) goto LAB_82b5e3d0;
      }
      else {
LAB_82b5e3d0:
        iVar7 = fn_82AD6090(puVar6,1);
      }
      iVar12 = *(int *)(iVar7 + 8);
      *(int *)(iVar7 + 8) = iVar12 + 1;
      *(int *)((iVar12 + 4) * 4 + iVar7) = iVar9;
    }
  }
  uVar14 = 0;
  bVar4 = false;
  do {
    do {
      while( true ) {
        if (((*puVar10 & 1) != 0) || (*puVar10 == 0)) {
          *puVar6 = *(uint *)(param_1 + 0x3d0);
          *(uint **)(param_1 + 0x3d0) = puVar6;
          if ((uVar14 & 0xffffffff) != 0) {
            uVar5 = fn_82AE60E8(param_1,((ulonglong)*(uint *)(param_1 + 0x14) + uVar14 + 1) *
                                              0x28,0);
            fn_82F68CC0(uVar5,*(undefined4 *)(param_1 + 0xc),
                         (ulonglong)*(uint *)(param_1 + 0x14) * 0x28);
            fn_82ABE5F8(param_1,*(undefined4 *)(param_1 + 0xc),
                         (ulonglong)*(uint *)(param_1 + 0x14) * 0x28,0);
            *(int *)(param_1 + 0xc) = (int)uVar5;
            *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (int)(uVar14 + 1);
          }
          if (bVar4) {
            *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x2000000;
            if ((*(uint **)(param_1 + 0x38) == (uint *)0x0) ||
               (bVar4 = true, (**(uint **)(param_1 + 0x38) & 0x800) == 0)) {
              bVar4 = false;
            }
            if (bVar4) {
              uVar5 = fn_82AE60E8(param_1,((ulonglong)*(uint *)(param_1 + 0x14) + 2) * 0x28,0)
              ;
              fn_82F68CC0(uVar5,*(undefined4 *)(param_1 + 0xc),
                           (ulonglong)*(uint *)(param_1 + 0x14) * 0x28);
              fn_82ABE5F8(param_1,*(undefined4 *)(param_1 + 0xc),
                           (ulonglong)*(uint *)(param_1 + 0x14) * 0x28,0);
              *(int *)(param_1 + 0xc) = (int)uVar5;
              *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 2;
              fn_82B46518(param_1,*(undefined4 *)(param_1 + 0x264),param_2,1,0,
                              0xffffffff82038d28);
              iVar17 = *(int *)(param_1 + 0xc);
              iVar9 = *(int *)(param_1 + 0x264) * 0x28;
              iVar7 = iVar9 + iVar17;
              *(uint *)(iVar9 + iVar17) = *(uint *)(iVar9 + iVar17) & 0xfffffff8 | 2;
              *(uint *)(iVar7 + 4) = *(uint *)(iVar7 + 4) & 0xffffff8f | 0x20;
              puVar10 = *(uint **)(param_1 + 0x3bc);
              if ((*(int *)(param_1 + 0x3b8) - (int)puVar10) + 0x1000U < 8) {
                puVar10 = *(uint **)(param_1 + 0x330);
                if (puVar10 == (uint *)0x0) {
                  puVar10 = (uint *)fn_82ABDF50(param_1 + 0x32c,8);
                }
                else {
                  *(uint *)(param_1 + 0x330) = *puVar10;
                  *puVar10 = 0;
                  puVar10[1] = 0;
                }
              }
              else {
                *(uint **)(param_1 + 0x3bc) = puVar10 + 2;
              }
              *(uint **)(iVar7 + 0x1c) = puVar10;
              *puVar10 = *puVar10 & 0xfffffff0 | 1;
              **(uint **)(iVar7 + 0x1c) = **(uint **)(iVar7 + 0x1c) | 0xc0000;
              **(uint **)(iVar7 + 0x1c) = **(uint **)(iVar7 + 0x1c) & 0xfc0fffff | 0x600000;
            }
          }
          return;
        }
        puVar3 = (uint *)(*puVar6 & 0xfffffffe);
        puVar11 = puVar3 + -1;
        uVar13 = puVar3[1] - 1;
        uVar2 = puVar11[puVar3[1] + 3];
        puVar3[1] = uVar13;
        if (uVar13 == 0) {
          *(uint *)(*puVar3 & 0xfffffffe) = *puVar11;
          *(uint *)(*puVar11 & 0xfffffffe) = *puVar3;
          fn_82AA6648(puVar6,puVar11,((ulonglong)puVar3[2] + 4 & 0x3fffffff) << 2);
        }
        iVar17 = *(int *)(uVar2 + 4);
        if (iVar17 == 1) break;
        if (iVar17 == 0xc) {
          iVar17 = *(int *)(uVar2 + 0x14);
          if (iVar17 != 0) {
            if ((*puVar10 & 1) == 0) {
              uVar13 = *puVar6 & 0xfffffffe;
              iVar9 = uVar13 - 4;
              if ((iVar9 == 0) || (*(uint *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
              goto LAB_82b5e630;
            }
            else {
LAB_82b5e630:
              iVar9 = fn_82AD6090(puVar6,1);
            }
            iVar7 = *(int *)(iVar9 + 8);
            *(int *)(iVar9 + 8) = iVar7 + 1;
            *(int *)((iVar7 + 4) * 4 + iVar9) = iVar17;
          }
          iVar17 = *(int *)(uVar2 + 0x18);
          if (iVar17 != 0) {
            if ((*puVar10 & 1) == 0) {
              uVar13 = *puVar6 & 0xfffffffe;
              iVar9 = uVar13 - 4;
              if ((iVar9 == 0) || (*(uint *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
              goto LAB_82b5e690;
            }
            else {
LAB_82b5e690:
              iVar9 = fn_82AD6090(puVar6,1);
            }
            iVar7 = *(int *)(iVar9 + 8);
            *(int *)(iVar9 + 8) = iVar7 + 1;
            *(int *)((iVar7 + 4) * 4 + iVar9) = iVar17;
          }
          iVar17 = *(int *)(uVar2 + 0x1c);
          if (iVar17 != 0) {
            if ((*puVar10 & 1) == 0) {
              uVar13 = *puVar6 & 0xfffffffe;
              iVar9 = uVar13 - 4;
              if ((iVar9 == 0) || (*(uint *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
              goto LAB_82b5e6f0;
            }
            else {
LAB_82b5e6f0:
              iVar9 = fn_82AD6090(puVar6,1);
            }
            iVar7 = *(int *)(iVar9 + 8);
            *(int *)(iVar9 + 8) = iVar7 + 1;
            *(int *)((iVar7 + 4) * 4 + iVar9) = iVar17;
          }
          iVar17 = *(int *)(uVar2 + 0x20);
          if (iVar17 != 0) {
            if ((*puVar10 & 1) == 0) {
              uVar13 = *puVar6 & 0xfffffffe;
              iVar9 = uVar13 - 4;
              if ((iVar9 == 0) || (*(uint *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
              goto LAB_82b5e750;
            }
            else {
LAB_82b5e750:
              iVar9 = fn_82AD6090(puVar6,1);
            }
            iVar7 = *(int *)(iVar9 + 8);
            *(int *)(iVar9 + 8) = iVar7 + 1;
            *(int *)((iVar7 + 4) * 4 + iVar9) = iVar17;
          }
          if (*(int *)(uVar2 + 0x10) == 0xc) {
            uVar14 = uVar14 + 1;
          }
        }
        else {
          if (iVar17 == 0xe) {
            iVar17 = *(int *)(uVar2 + 0x1c);
            if (iVar17 < 2) {
LAB_82b5e578:
              iVar17 = *(int *)(uVar2 + 0x20);
              if (iVar17 != 0) {
                if ((*puVar10 & 1) == 0) {
                  uVar13 = *puVar6 & 0xfffffffe;
                  iVar9 = uVar13 - 4;
                  if ((iVar9 == 0) || (*(uint *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
                  goto LAB_82b5e5b4;
                }
                else {
LAB_82b5e5b4:
                  iVar9 = fn_82AD6090(puVar6,1);
                }
                iVar7 = *(int *)(iVar9 + 8);
                *(int *)(iVar9 + 8) = iVar7 + 1;
                *(int *)((iVar7 + 4) * 4 + iVar9) = iVar17;
              }
            }
            else {
              if (3 < iVar17) {
                if (0x19 < iVar17) {
                  if (iVar17 < 0x1c) goto LAB_82b5e5e0;
                  if ((iVar17 == 0x20) &&
                     ((iVar17 = *(int *)(*(int *)(*(int *)(uVar2 + 0x20) + 8) + 0x18), iVar17 == 0xe
                      || (iVar17 == 0xf)))) {
                    bVar4 = true;
                  }
                }
                goto LAB_82b5e578;
              }
LAB_82b5e5e0:
              fn_82B51878(param_1,*(undefined4 *)(uVar2 + 0x20),puVar6);
            }
            iVar17 = *(int *)(uVar2 + 0x24);
            goto LAB_82b5e7ec;
          }
          if (iVar17 == 0x1b) {
            if (*(int *)(uVar2 + 0x30) != 7) {
              piVar16 = (int *)(uVar2 + 0x54);
              lVar15 = 2;
              do {
                if (*piVar16 != 0) {
                  fn_82B51878(param_1,*piVar16,puVar6);
                }
                lVar15 = lVar15 + -1;
                piVar16 = piVar16 + 1;
              } while (lVar15 != 0);
            }
            goto LAB_82b5e7e8;
          }
          if (iVar17 == 0x1d) {
            if ((*(uint *)(param_1 + 0x28) & 0x40000) == 0) {
              fn_82B5DFD0(param_1);
            }
            iVar17 = *(int *)(uVar2 + 0x10);
            goto LAB_82b5e7f4;
          }
        }
      }
      iVar17 = *(int *)(uVar2 + 8);
      if (iVar17 != 0) {
        if ((*puVar10 & 1) == 0) {
          uVar13 = *puVar6 & 0xfffffffe;
          iVar9 = uVar13 - 4;
          if ((iVar9 == 0) || (*(uint *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
          goto LAB_82b5e7c4;
        }
        else {
LAB_82b5e7c4:
          iVar9 = fn_82AD6090(puVar6,1);
        }
        iVar7 = *(int *)(iVar9 + 8);
        *(int *)(iVar9 + 8) = iVar7 + 1;
        *(int *)((iVar7 + 4) * 4 + iVar9) = iVar17;
      }
LAB_82b5e7e8:
      iVar17 = *(int *)(uVar2 + 0xc);
LAB_82b5e7ec:;} while (iVar17 == 0);
LAB_82b5e7f4:
    if ((*puVar10 & 1) == 0) {
      uVar2 = *puVar6 & 0xfffffffe;
      iVar9 = uVar2 - 4;
      if ((iVar9 == 0) || (*(uint *)(uVar2 + 8) < *(int *)(uVar2 + 4) + 1U)) goto LAB_82b5e824;
    }
    else {
LAB_82b5e824:
      iVar9 = fn_82AD6090(puVar6,1);
    }
    iVar7 = *(int *)(iVar9 + 8);
    *(int *)(iVar9 + 8) = iVar7 + 1;
    *(int *)((iVar7 + 4) * 4 + iVar9) = iVar17;
  } while( true );
}

