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
extern int fn_82AA65B0();
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABE250();
extern int fn_82ABE9F0();
extern int fn_82AC6808();
extern int fn_82AE60E8();
extern int fn_82B45B10();
extern int fn_82B45B98();
extern int fn_82B463F8();
extern int fn_82B503A8();
extern int fn_82B50498();
extern int fn_82B50558();
extern int fn_82B541B8();
extern int fn_82B5E170();
extern int fn_82F65FE0();
extern unsigned int uStack_78;
extern unsigned int uStack_80;


int * fn_82B61D78(int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  char *pcVar19;
  char *pcVar20;
  int iVar21;
  uint uVar22;
  undefined4 *puVar23;
  int *piVar24;
  int iVar25;
  uint uVar26;
  int *piVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uStack_80;
  undefined4 *puStack_7c;
  uint uStack_78;
  undefined4 *puStack_74;
  
  piVar24 = (int *)0x0;
  if ((param_2 == 0) || (*(int *)(param_2 + 4) != 4)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  *(int *)(param_1 + 8) = param_2;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar30 = (ulonglong)*(uint *)(param_2 + 0x1c);
    if (uVar30 == 0) {
      iVar25 = *(int *)(param_2 + 0x28);
      if ((iVar25 != 0) && (*(int *)(iVar25 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      if (iVar25 == 0) goto LAB_82b61eb0;
      do {
        iVar21 = *(int *)(iVar25 + 8);
        if (*(int *)(iVar21 + 4) == 6) {
          if (iVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          if (*(int *)(iVar21 + 0x10) == 2) {
            uVar18 = (ulonglong)*(uint *)(*(int *)(iVar21 + 0x18) + 0x10);
            if ((uVar30 & 0xffffffff) < uVar18) {
              uVar30 = *(uint *)(*(int *)(iVar21 + 0x18) + 0x14) + uVar18;
            }
          }
        }
        iVar25 = *(int *)(iVar25 + 0xc);
        if ((iVar25 != 0) && (*(int *)(iVar25 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
      } while (iVar25 != 0);
    }
    if (0x7fff < (uVar30 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0xdbf);
    }
    if ((uVar30 & 0xffffffff) != 0) {
      *(int *)(param_1 + 0x14) = (int)(uVar30 + 1);
      uVar5 = fn_82AE60E8(param_1,(uVar30 + 1) * 0x28,0);
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      *(int *)(param_1 + 0x10) = (int)uVar30;
    }
  }
LAB_82b61eb0:
  iVar25 = *(int *)(param_2 + 0x28);
  if ((iVar25 != 0) && (*(int *)(iVar25 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  while (iVar25 != 0) {
    iVar21 = *(int *)(iVar25 + 8);
    if (*(int *)(iVar21 + 4) == 6) {
      if (iVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      if ((*(int *)(iVar21 + 0x10) == 2) && (param_3 == *(int *)(iVar21 + 0x18))) {
        iVar21 = *(int *)(*(int *)(iVar21 + 0x18) + 0x44);
        do {
          if (iVar21 == 0) goto LAB_82b6201c;
          if (*(int *)(iVar21 + 4) == 0x13) {
            iVar10 = iVar21;
            iVar21 = 0;
          }
          else {
            if (*(int *)(iVar21 + 4) != 1) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c1);
            }
            iVar10 = *(int *)(iVar21 + 8);
            if ((iVar10 == 0) || (*(int *)(iVar10 + 4) != 0x13)) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c1);
            }
            iVar21 = *(int *)(iVar21 + 0xc);
          }
          iVar12 = fn_82B463F8(param_1,iVar10);
        } while (iVar12 != 0xf);
        fn_82B45B98(param_1,*(undefined4 *)(iVar10 + 0x14),param_1 + 800,&uStack_80);
        uVar26 = *(uint *)(param_1 + 800);
        if ((uStack_80 < uVar26) || (0x1f < uStack_80)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xe06,0x1f);
        }
        iVar21 = *(int *)(param_1 + 0x38);
        iVar10 = (uStack_80 - uVar26) + 1;
        *(int *)(param_1 + 0x324) = iVar10;
        if ((iVar21 != 0) &&
           ((iVar12 = *(int *)(iVar21 + 0x24), iVar12 != 0 || (*(int *)(iVar21 + 0x2c) != 0)))) {
          if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
            if (uVar26 == *(uint *)(iVar21 + 0x20)) {
LAB_82b6200c:
              if (iVar10 == iVar12) goto LAB_82b6201c;
            }
          }
          else if (uVar26 == *(uint *)(iVar21 + 0x28)) {
            iVar12 = *(int *)(iVar21 + 0x2c);
            goto LAB_82b6200c;
          }
          fn_82AA65B0(param_1,0xdfe);
        }
      }
    }
LAB_82b6201c:
    iVar25 = *(int *)(iVar25 + 0xc);
    if ((iVar25 != 0) && (*(int *)(iVar25 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
  }
  puVar6 = (uint *)fn_82ABE250(param_1,8,3);
  *(uint **)(param_1 + 0x240) = puVar6;
  puVar6[1] = (uint)puVar6 | 1;
  *puVar6 = (uint)(puVar6 + 1) | 1;
  puVar6 = (uint *)fn_82ABE250(param_1,8,4);
  *(uint **)(param_1 + 0x244) = puVar6;
  puVar6[1] = (uint)puVar6 | 1;
  *puVar6 = (uint)(puVar6 + 1) | 1;
  piVar27 = (int *)0x0;
  bVar4 = false;
  puVar7 = (uint *)fn_82ABE250(param_1,8,0);
  puVar6 = puVar7 + 1;
  puVar7[1] = (uint)puVar7 | 1;
  *puVar7 = (uint)puVar6 | 1;
  iVar25 = *(int *)(param_2 + 0x28);
  if ((iVar25 != 0) && (*(int *)(iVar25 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
joined_r0x82b6212c:
  if (iVar25 != 0) {
LAB_82b62130:
    iVar21 = *(int *)(*(int *)(iVar25 + 8) + 4);
    while (iVar21 == 6) {
      iVar21 = *(int *)(iVar25 + 8);
      if ((iVar21 == 0) || (*(int *)(iVar21 + 4) != 6)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      iVar10 = *(int *)(iVar21 + 0x10);
      if (iVar10 == 0) goto LAB_82b62548;
      if (iVar10 == 1) {
        fn_82B541B8(param_1,iVar21);
        goto LAB_82b62548;
      }
      if (iVar10 == 2) {
        iVar10 = *(int *)(iVar21 + 0x18);
        if ((iVar10 == 0) || (*(int *)(iVar10 + 4) != 10)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        piVar8 = *(int **)(param_1 + 0x238);
        if (piVar8 == (int *)0x0) goto LAB_82b62470;
        goto LAB_82b62454;
      }
      if (iVar10 < 3) {
LAB_82b62888:
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      if (iVar10 < 6) goto LAB_82b62548;
      if ((iVar10 < 7) || (8 < iVar10)) goto LAB_82b62888;
      iVar10 = *(int *)(iVar21 + 0x20);
      if ((iVar10 == 0) || (*(int *)(iVar10 + 4) != 0x15)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      iVar12 = *(int *)(iVar10 + 0x14);
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      if (*(int *)(iVar12 + 4) != 3) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      for (piVar8 = piVar27; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[1]) {
        iVar9 = *piVar8;
        pcVar20 = *(char **)(iVar9 + 0x18);
        pcVar19 = *(char **)(iVar12 + 0x18);
        do {
          cVar1 = *pcVar20;
          cVar2 = *pcVar19;
          if (cVar1 == '\0') break;
          pcVar20 = pcVar20 + 1;
          pcVar19 = pcVar19 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xe1a,*(char **)(iVar12 + 0x18),*(undefined4 *)(iVar9 + 0x20),
                            *(undefined4 *)(iVar9 + 0x24));
        }
      }
      piVar8 = (int *)fn_82ABE250(param_1,8,7);
      piVar8[1] = (int)piVar27;
      *piVar8 = iVar12;
      uVar30 = 0;
      if (*(int *)(iVar21 + 0x10) == 7) {
        fn_82B50498(&uStack_80,*(undefined4 *)(iVar10 + 0x24),param_1);
        iVar12 = fn_82B50558(&uStack_80);
        if (iVar12 != 0) {
          do {
            if ((iVar12 == 0) || (*(int *)(iVar12 + 4) != 0x13)) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c1);
            }
            iVar9 = fn_82B463F8(param_1,iVar12);
            if (iVar9 == 0x12) {
              if ((uVar30 & 0xffffffff) != 0) {
                fn_82AA65B0(param_1,0xdf9);
              }
              uVar30 = fn_82B45B10(param_1,*(undefined4 *)(iVar12 + 0x14));
              if (((uVar30 & 0xffffffff) == 0) || (0xffff < (uVar30 & 0xffffffff))) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0xe1b,uVar30);
              }
            }
            else {
              iVar12 = *(int *)(iVar12 + 0x10);
              if ((iVar12 == 0) || (*(int *)(iVar12 + 4) != 3)) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c1);
              }
              if (*(int *)(iVar12 + 0x10) != 9) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c1);
              }
              fn_82AA65B0(param_1,0xe16,*(undefined4 *)(iVar12 + 0x18));
            }
            iVar12 = fn_82B50558(&uStack_80);
          } while (iVar12 != 0);
          puVar11 = puStack_7c;
          uVar26 = uStack_80;
          iVar12 = (int)uVar30;
          if ((uVar30 & 0xffffffff) != 0) goto LAB_82b6238c;
        }
        puVar11 = puStack_7c;
        uVar26 = uStack_80;
        iVar12 = iVar10;
      }
      else {
        fn_82B50498(&uStack_78,*(undefined4 *)(iVar10 + 0x24),param_1);
        while (iVar10 = fn_82B50558(&uStack_78), puVar11 = puStack_74, uVar26 = uStack_78,
              iVar12 = iVar21, iVar10 != 0) {
          if ((iVar10 == 0) || (*(int *)(iVar10 + 4) != 0x13)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          iVar10 = *(int *)(iVar10 + 0x10);
          if ((iVar10 == 0) || (*(int *)(iVar10 + 4) != 3)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          if (*(int *)(iVar10 + 0x10) != 9) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          fn_82AA65B0(param_1,0xe16,*(undefined4 *)(iVar10 + 0x18));
        }
      }
LAB_82b6238c:
      *puVar11 = *(undefined4 *)(uVar26 + 0x3d0);
      *(undefined4 **)(uVar26 + 0x3d0) = puVar11;
      piVar27 = piVar8;
      if (*(int *)(iVar21 + 0x18) == 0) goto LAB_82b62548;
      puVar11 = (undefined4 *)fn_82B503A8(puVar7);
      *puVar11 = *(undefined4 *)(iVar25 + 0xc);
      puVar11[1] = *(undefined4 *)(param_1 + 0x254);
      puVar11[2] = *(undefined4 *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x254) = iVar12;
      if (*(int *)(iVar21 + 0x10) == 8) {
        bVar4 = true;
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x800;
      }
      iVar25 = *(int *)(iVar21 + 0x18);
      if ((iVar25 == 0) || (*(int *)(iVar25 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      iVar21 = *(int *)(*(int *)(iVar25 + 8) + 4);
    }
    if (iVar21 != 0xc) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x40;
    goto LAB_82b62548;
  }
  fn_82B5E170(param_1,piVar24);
  if (!bVar4) {
    return piVar24;
  }
  uVar26 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    return piVar24;
  }
  iVar25 = 0;
  do {
    iVar21 = iVar25 + *(int *)(param_1 + 0xc);
    if ((*(uint *)(iVar21 + 4) & 0x80000000) != 0) {
      uVar22 = 0;
      if (uVar26 != 0) {
        iVar10 = 0;
        do {
          if (*(int *)(iVar10 + *(int *)(param_1 + 0xc) + 0x24) == *(int *)(iVar21 + 0x24)) break;
          uVar22 = uVar22 + 1;
          iVar10 = iVar10 + 0x28;
        } while (uVar22 < uVar26);
        if (uVar22 < uVar26) goto LAB_82b62988;
      }
      uVar22 = uVar26 + 1;
      uVar29 = 1;
      uVar28 = **(uint **)(iVar21 + 0x1c) >> 4 & 0x3fff;
      iVar10 = iVar25;
      if (uVar22 < *(uint *)(param_1 + 0x10)) {
        do {
          puVar6 = (uint *)(*(int *)(param_1 + 0xc) + iVar10 + 0x28);
          if (puVar6[9] == *(uint *)(iVar21 + 0x24)) {
            uVar17 = *puVar6;
            uVar31 = uVar17 >> 3 & 0x3fff;
            iVar12 = fn_82ABE9F0(param_1,uVar31,0);
            if ((uVar17 >> 3 & 0x3fff) != 0) {
              iVar9 = 0;
              piVar27 = (int *)(iVar12 + -4);
              uVar17 = uVar31;
              do {
                iVar16 = iVar9 + puVar6[7];
                iVar9 = iVar9 + 8;
                piVar27 = piVar27 + 1;
                *piVar27 = iVar16;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            fn_82F65FE0(iVar12,uVar31,4,0xffffffff82b464e8);
            uVar17 = 0;
            if ((*puVar6 & 0x1fff8) != 0) {
              do {
                puVar11 = (undefined4 *)(uVar17 * 4 + iVar12);
                puVar7 = *(uint **)(uVar17 * 4 + iVar12);
                uVar15 = uVar17;
                if (uVar17 < uVar31) {
                  puVar23 = puVar11;
                  do {
                    if ((*(uint *)*puVar23 >> 4 & 0x3fff) != (*puVar7 >> 4 & 0x3fff)) break;
                    uVar15 = uVar15 + 1;
                    puVar23 = puVar23 + 1;
                  } while (uVar15 < uVar31);
                }
                uVar14 = uVar15 - uVar17;
                if ((puVar7[1] & 1) == 0) {
                  if (0x10 < uVar29 << (uVar14 & 0x3f)) goto LAB_82b628e8;
                }
                else if (uVar29 != 1) {
LAB_82b628e8:
                  uVar29 = 1;
                  uVar28 = uVar28 + 1;
                }
                if (uVar17 < uVar15) {
                  puVar11 = puVar11 + -1;
                  uVar15 = uVar14;
                  do {
                    *(uint *)puVar11[1] = *(uint *)puVar11[1] & 0xfffc000f | (uVar28 & 0x3fff) << 4;
                    puVar11 = puVar11 + 1;
                    uVar3 = uVar29 & 0xf;
                    uVar29 = uVar29 << 1;
                    *(uint *)*puVar11 = uVar3 | *(uint *)*puVar11 & 0xfffffff0;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                if (0xf < uVar29) {
                  uVar28 = uVar28 + 1;
                  uVar29 = 1;
                }
                uVar17 = uVar14 + uVar17;
              } while (uVar17 < (*puVar6 >> 3 & 0x3fff));
            }
            fn_82AC6808(param_1,iVar12,uVar31,0);
            *puVar6 = *puVar6 | 0x40000000;
          }
          uVar22 = uVar22 + 1;
          iVar10 = iVar10 + 0x28;
        } while (uVar22 < *(uint *)(param_1 + 0x10));
      }
    }
LAB_82b62988:
    uVar26 = uVar26 + 1;
    iVar25 = iVar25 + 0x28;
    if (*(uint *)(param_1 + 0x10) <= uVar26) {
      return piVar24;
    }
  } while( true );
  while (piVar8 = (int *)piVar8[2], piVar8 != (int *)0x0) {
LAB_82b62454:
    if (*(int *)(*piVar8 + 0x28) == *(int *)(iVar21 + 0x28)) goto LAB_82b62474;
  }
LAB_82b62470:
  piVar8 = (int *)0x0;
LAB_82b62474:
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)fn_82AE60E8(param_1,0x1c,0);
    piVar8[2] = *(int *)(param_1 + 0x238);
    *(int **)(param_1 + 0x238) = piVar8;
  }
  if ((piVar8[1] == 0) || (*(int *)(piVar8[1] + 0x30) == 0)) {
    *piVar8 = iVar21;
    piVar8[1] = iVar10;
  }
  if (param_3 == iVar10) {
    piVar24 = piVar8;
  }
  iVar21 = *(int *)(iVar10 + 0x44);
  while (iVar21 != 0) {
    if (*(int *)(iVar21 + 4) == 0x13) {
      iVar10 = iVar21;
      iVar21 = 0;
    }
    else {
      if (*(int *)(iVar21 + 4) != 1) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      iVar10 = *(int *)(iVar21 + 8);
      if ((iVar10 == 0) || (*(int *)(iVar10 + 4) != 0x13)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      iVar21 = *(int *)(iVar21 + 0xc);
    }
    iVar10 = fn_82B463F8(param_1,iVar10);
    if (iVar10 == 0xb) {
      piVar8[6] = piVar8[6] | 0x40000000;
    }
  }
LAB_82b62548:
  iVar25 = *(int *)(iVar25 + 0xc);
  if ((iVar25 != 0) && (*(int *)(iVar25 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  while (iVar25 == 0) {
    if (((*puVar6 & 1) != 0) || (*puVar6 == 0)) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffff7ff;
      goto joined_r0x82b6212c;
    }
    iVar21 = *(int *)((*puVar7 & 0xfffffffe) + 4) * 0xc + ((*puVar7 & 0xfffffffe) - 4);
    *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(iVar21 + 8);
    iVar25 = *(int *)(iVar21 + 4);
    if ((iVar25 != 0) && (*(int *)(iVar25 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    if ((*(uint *)(iVar21 + 0xc) & 0x800) == 0) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffff7ff;
    }
    if ((*puVar6 & 1) == 0) {
      puVar13 = (uint *)((*puVar7 & 0xfffffffe) - 4);
    }
    else {
      puVar13 = (uint *)0x0;
    }
    uVar26 = puVar13[2];
    puVar13[2] = (uint)((ulonglong)uVar26 - 1);
    if ((ulonglong)uVar26 - 1 == 0) {
      *(uint *)(puVar13[1] & 0xfffffffe) = *puVar13;
      *(uint *)(*puVar13 & 0xfffffffe) = puVar13[1];
      fn_82AA6648(puVar7,puVar13,(ulonglong)puVar13[3] * 0xc + 0x10);
    }
  }
  goto LAB_82b62130;
}

