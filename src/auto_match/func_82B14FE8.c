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
extern unsigned int *auStack_6c;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABE0E8();
extern int fn_82AC9F80();
extern int fn_82AD1978();
extern int fn_82AD1A40();
extern int fn_82AD20C0();
extern int fn_82AD2128();
extern int fn_82AD7C20();
extern int fn_82B102D8();
extern int fn_82B10858();
extern int fn_82B109E8();
extern int fn_82B13180();
extern int fn_82B18F40();
extern int fn_82B841E8();
extern int fn_82B894C8();
extern int fn_82B8AC10();
extern int fn_82B8D3D0();
extern unsigned int uStack_70;


/* WARNING: Type propagation algorithm not settling */

void fn_82B14FE8(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  int iVar8;
  uint uVar9;
  undefined8 uVar7;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  uint uStack_70;
  uint auStack_6c [27];
  
  if ((param_1[0xc] & 0xffff0000) != 0xffff0000) {
    for (uVar21 = param_1[1]; ((uVar21 & 1) == 0 && (uVar21 != 0));
        uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
      for (puVar1 = *(undefined4 **)(uVar21 + 0x24);
          (((uint)puVar1 & 1) == 0 && (puVar1 != (undefined4 *)0x0));
          puVar1 = *(undefined4 **)(((uint)puVar1 & 0xfffffffe) + 0x28)) {
        if ((puVar1[2] & 0x3f80) == 0x2980) {
          puVar18 = (uint *)*puVar1;
          puVar17 = puVar18;
LAB_82b15058:
          if (puVar17 != (uint *)0x0) {
            if (((*puVar17 & 0xe000000) == 0) || ((*(uint *)(puVar17[3] + 8) >> 5 & 1) == 0))
            goto LAB_82b1507c;
            uVar16 = 0;
            for (; puVar18 != (uint *)0x0; puVar18 = (uint *)puVar18[1]) {
              uVar14 = *puVar18;
              if ((((uVar14 & 0xe000000) != 0) && ((*(uint *)(puVar18[3] + 8) >> 5 & 1) != 0)) &&
                 ((uVar14 & 0x1fe0000) == 0x7c0000)) {
                uVar16 = uVar14 >> 0xd & 0xf | uVar16;
              }
            }
            if (uVar16 != 0xf) goto LAB_82b152e0;
            goto LAB_82b152f0;
          }
          if ((*(int *)(uVar21 + 8) != 0) && (*(int *)(*(int *)(uVar21 + 8) + 4) != 0)) {
            bVar13 = false;
            for (uVar16 = param_1[1]; ((uVar16 & 1) == 0 && (uVar16 != 0));
                uVar16 = *(uint *)((uVar16 & 0xfffffffe) + 4)) {
              if ((*(int **)(uVar16 + 0xc) != (int *)0x0) && (**(int **)(uVar16 + 0xc) != 0)) {
                uVar14 = *(uint *)(uVar16 + 0x1c);
                uVar9 = 0;
                if (((uVar14 & 1) == 0) && (uVar14 != 0)) {
                  do {
                    if ((*(uint *)(uVar14 + 8) >> 5 & 1) != 0) {
                      puVar18 = *(uint **)(uVar14 + 4);
                      while( true ) {
                        if (puVar18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                          fn_82AA66A8(param_1,0x12c0);
                        }
                        if ((puVar18[4] != 0) && (uVar2 = *puVar18, (uVar2 & 0xe000000) != 0))
                        break;
                        puVar18 = (uint *)puVar18[2];
                      }
                      if ((uVar2 & 0x1fe0000) == 0x7c0000) {
                        uVar9 = uVar2 >> 0xd & 0xf | uVar9;
                      }
                    }
                    uVar14 = *(uint *)((uVar14 & 0xfffffffe) + 0x28);
                  } while (((uVar14 & 1) == 0) && (uVar14 != 0));
                  if (uVar9 != 0) {
                    *(uint *)(uVar16 + 0x30) = *(uint *)(uVar16 + 0x30) | 0x40000000;
                    fn_82B18F40(param_1,1);
                    if (((*(uint *)(uVar21 + 0x30) >> 0x1e & 1) != 0) &&
                       (bVar13 = true, uVar9 != 0xf)) {
                      piVar22 = *(int **)(uVar16 + 0x24);
                      if ((((uint)piVar22 & 1) != 0) ||
                         (piVar10 = (int *)0x0, piVar22 == (int *)0x0)) {
LAB_82b153c0:
                    /* WARNING: Subroutine does not return */
                        fn_82AA66A8(param_1,0x12c0);
                      }
                      do {
                        piVar11 = piVar10;
                        if ((piVar22[2] & 0x3f80U) == 0x3a80) {
                          puVar18 = (uint *)*piVar22;
                          while ((piVar11 = piVar10, puVar18 != (uint *)0x0 &&
                                 (((*puVar18 & 0xe000000) == 0 ||
                                  (piVar11 = piVar22, (*(uint *)(puVar18[3] + 8) >> 5 & 1) == 0)))))
                          {
                            puVar18 = (uint *)puVar18[1];
                          }
                          if (piVar11 != (int *)0x0) goto LAB_82b15268;
                        }
                        piVar22 = *(int **)(((uint)piVar22 & 0xfffffffe) + 0x28);
                      } while ((((uint)piVar22 & 1) == 0) &&
                              (piVar10 = piVar11, piVar22 != (int *)0x0));
                      if (piVar11 == (int *)0x0) goto LAB_82b153c0;
LAB_82b15268:
                      fn_82B10858(param_1,uVar16,piVar11,uVar9);
                    }
                    for (uVar14 = param_1[1]; ((uVar14 & 1) == 0 && (uVar14 != 0));
                        uVar14 = *(uint *)((uVar14 & 0xfffffffe) + 4)) {
                      if ((*(uint *)(uVar14 + 0x30) >> 0x1e & 1) != 0) {
                        *(uint *)(uVar14 + 0x30) = *(uint *)(uVar14 + 0x30) & 0xbfffffff;
                      }
                    }
                  }
                }
              }
            }
            if (bVar13) goto LAB_82b152f0;
          }
          uVar16 = 0;
LAB_82b152e0:
          fn_82B10858(param_1,uVar21,puVar1,uVar16);
        }
LAB_82b152f0:;}
    }
  }
LAB_82b15328:
  for (uVar21 = param_1[1]; ((uVar21 & 1) == 0 && (uVar21 != 0));
      uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
    for (piVar22 = *(int **)(uVar21 + 0x24); (((uint)piVar22 & 1) == 0 && (piVar22 != (int *)0x0));
        piVar22 = *(int **)(((uint)piVar22 & 0xfffffffe) + 0x28)) {
      uVar16 = (uint)piVar22[2] >> 7 & 0x7f;
      if ((uVar16 == 0x53) || (uVar16 == 0x75)) {
        puVar18 = (uint *)*piVar22;
LAB_82b15374:
        if (puVar18 != (uint *)0x0) {
          if ((((*puVar18 & 0xe000000) == 0) || ((*(uint *)(puVar18[3] + 8) >> 5 & 1) == 0)) ||
             ((uVar16 = *puVar18 >> 0x11 & 0xff, 0x1f < uVar16 && (uVar16 < 0x26))))
          goto LAB_82b153ac;
          puVar18 = (uint *)(uVar21 + 0x30);
          uVar14 = *puVar18;
          uVar16 = uVar21;
          while ((uVar14 >> 0x17 & 1) != 0) {
            uVar16 = *(uint *)(uVar16 + 0x34);
            if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            puVar18 = (uint *)(uVar16 + 0x30);
            uVar14 = *(uint *)(uVar16 + 0x30);
          }
          *puVar18 = *puVar18 | 0x40000000;
          break;
        }
      }
    }
  }
  for (uVar21 = param_1[1]; ((uVar21 & 1) == 0 && (uVar21 != 0));
      uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
    uVar16 = uVar21;
    if (uVar21 != 0) {
      do {
        if ((*(uint *)(uVar16 + 0x30) >> 0x1e & 1) != 0) break;
        uVar16 = *(uint *)(uVar16 + 0x34);
      } while (uVar16 != 0);
      if (uVar16 != 0) {
        for (uVar14 = *(uint *)(uVar16 + 0x34); uVar14 != 0; uVar14 = *(uint *)(uVar14 + 0x34)) {
          if ((*(uint *)(uVar14 + 0x30) >> 0x1e & 1) != 0) {
            *(uint *)(uVar16 + 0x30) = *(uint *)(uVar16 + 0x30) & 0xbfffffff;
            uVar16 = uVar14;
          }
        }
      }
    }
  }
  uVar21 = param_1[1];
  if ((uVar21 & 1) != 0) goto LAB_82b157ac;
  uVar16 = *param_1;
LAB_82b154e0:
  puVar18 = (uint *)((uVar16 & 0xfffffffe) - 4);
LAB_82b154e8:
  if (puVar18 == (uint *)0x0) {
    if (((uVar21 & 1) != 0) || (uVar21 == 0)) goto LAB_82b15b88;
    goto LAB_82b1584c;
  }
  bVar13 = false;
  bVar12 = false;
  for (piVar22 = (int *)puVar18[9]; (((uint)piVar22 & 1) == 0 && (piVar22 != (int *)0x0));
      piVar22 = *(int **)(((uint)piVar22 & 0xfffffffe) + 0x28)) {
    if ((piVar22[2] & 0x3f80U) == 0x3a80) {
      for (puVar17 = (uint *)*piVar22; puVar17 != (uint *)0x0; puVar17 = (uint *)puVar17[1]) {
        if ((((*puVar17 & 0xe000000) != 0) && ((*(uint *)(puVar17[3] + 8) >> 5 & 1) != 0)) &&
           ((uVar16 = *puVar17 >> 0x11 & 0xff, uVar16 < 0x20 || (0x25 < uVar16)))) {
          uVar14 = *(uint *)(puVar17[3] + 8) >> 7 & 0x7f;
          if ((uVar14 == 0) || (bVar6 = true, 0x66 < uVar14)) {
            bVar6 = false;
          }
          if (bVar6) {
            if (uVar16 < 0x3d) {
              bVar12 = true;
            }
            else {
              bVar13 = true;
            }
          }
        }
      }
    }
  }
  if (((bVar13) || (bVar12)) && (puVar17 = puVar18, (puVar18[0xc] >> 0x1e & 1) == 0)) {
    do {
      puVar17 = (uint *)puVar17[0xd];
      if (puVar17 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
    } while ((puVar17[0xc] >> 0x1e & 1) == 0);
    if (puVar17 != puVar18) {
      bVar6 = false;
      uVar16 = param_1[0xc] & 0xffff0000;
      if (((uVar16 != 0xffff0000) && (bVar13)) && (bVar12)) {
        bVar6 = true;
      }
      do {
        puVar17 = *(uint **)(((uint)puVar17 & 0xfffffffe) + 4);
        if ((((uint)puVar17 & 1) != 0) || (puVar17 == (uint *)0x0)) break;
        uVar14 = puVar17[7];
        if (((uVar14 & 1) == 0) && (uVar14 != 0)) {
          while (uVar16 == 0xffff0000) {
LAB_82b15670:
            uVar9 = *(uint *)(uVar14 + 8) >> 7 & 0x7f;
            if ((uVar9 < 0x5b) || (bVar13 = true, 0x5e < uVar9)) {
              bVar13 = false;
            }
            if (bVar13) goto LAB_82b156b8;
            uVar14 = *(uint *)((uVar14 & 0xfffffffe) + 0x28);
            if (((uVar14 & 1) != 0) || (uVar14 == 0)) goto LAB_82b156bc;
          }
          uVar9 = *(uint *)(uVar14 + 8) >> 7 & 0x7f;
          if ((uVar9 < 0x60) || (bVar13 = true, 0x66 < uVar9)) {
            bVar13 = false;
          }
          if (!bVar13) goto LAB_82b15670;
LAB_82b156b8:
          bVar6 = true;
        }
LAB_82b156bc:
        if (((uVar16 != 0xffff0000) && (uVar14 = puVar17[9], (uVar14 & 1) == 0)) && (uVar14 != 0)) {
          while( true ) {
            uVar9 = *(uint *)(uVar14 + 8) >> 7 & 0x7f;
            if ((uVar9 < 0x53) || (bVar13 = true, 0x5f < uVar9)) {
              bVar13 = false;
            }
            if (((bVar13) && ((*(uint *)(uVar14 + 8) >> 0x11 & 1) != 0)) &&
               ((uVar9 != 0x5a ||
                (((((puVar17[0x13] >> 0x16 & 1) == 0 ||
                   (iVar8 = fn_82ABE0E8(uVar14,param_1), iVar8 == 4)) || (iVar8 == 1)) ||
                 ((iVar8 == 9 || (iVar8 == 8)))))))) break;
            uVar14 = *(uint *)((uVar14 & 0xfffffffe) + 0x28);
            if (((uVar14 & 1) != 0) || (uVar14 == 0)) goto LAB_82b15770;
          }
          bVar6 = true;
        }
LAB_82b15770:;} while (puVar17 != puVar18);
      if (bVar6) goto LAB_82b157b4;
    }
  }
  uVar16 = *puVar18;
  if ((uVar16 & 1) == 0) goto LAB_82b154e0;
LAB_82b157ac:
  puVar18 = (uint *)0x0;
  goto LAB_82b154e8;
LAB_82b1507c:
  puVar17 = (uint *)puVar17[1];
  goto LAB_82b15058;
LAB_82b153ac:
  puVar18 = (uint *)puVar18[1];
  goto LAB_82b15374;
LAB_82b157b4:
  if (((int *)puVar18[3] == (int *)0x0) || (*(int *)puVar18[3] == 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  fn_82AD7C20(param_1);
  for (uVar21 = param_1[1]; ((uVar21 & 1) == 0 && (uVar21 != 0));
      uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
    if ((*(uint *)(uVar21 + 0x30) >> 0x1e & 1) != 0) {
      *(uint *)(uVar21 + 0x30) = *(uint *)(uVar21 + 0x30) & 0xbfffffff;
    }
  }
  goto LAB_82b15328;
LAB_82b1584c:
  do {
    for (piVar22 = *(int **)(uVar21 + 0x24); (((uint)piVar22 & 1) == 0 && (piVar22 != (int *)0x0));
        piVar22 = *(int **)(((uint)piVar22 & 0xfffffffe) + 0x28)) {
      uVar16 = (uint)piVar22[2] >> 7 & 0x7f;
      if ((uVar16 == 0x53) || (uVar16 == 0x75)) {
        uVar16 = 0;
        puVar18 = (uint *)*piVar22;
        uVar14 = 0;
        uStack_70 = 0;
        uVar9 = 0;
        auStack_6c[0] = 0;
        bVar13 = false;
        for (; puVar18 != (uint *)0x0; puVar18 = (uint *)puVar18[1]) {
          if ((*puVar18 & 0xe000000) != 0) {
            uVar2 = puVar18[3];
            if (((*(uint *)(uVar2 + 8) >> 5 & 1) != 0) &&
               ((uVar5 = *puVar18 >> 0x11 & 0xff, uVar5 < 0x20 || (0x25 < uVar5)))) {
              uVar20 = *(uint *)(uVar2 + 8) >> 7 & 0x7f;
              if ((uVar20 == 0) || (bVar12 = true, 0x66 < uVar20)) {
                bVar12 = false;
              }
              if (bVar12) {
                if (uVar9 == 0) {
                  uVar9 = fn_82B109E8(param_1,uVar21,&uStack_70,auStack_6c);
                  uVar16 = uStack_70;
                  uVar14 = auStack_6c[0];
                }
                if (uVar9 == uVar21) {
                  if ((param_1[0xc] & 0xffff0000) != 0xffff0000) {
                    if (uVar5 < 0x10) {
                      fn_82B8D3D0(param_1,uVar14,uVar2,1,0);
                      uVar7 = fn_82AC9F80(param_1,uVar14,8);
                      fn_82AD1978(uVar2,uVar7);
                      bVar13 = true;
                      goto LAB_82b159f4;
                    }
                    fn_82B8D3D0(param_1,uVar2,uVar14,1,0);
                    fn_82AD1A40(uVar14,uVar2,param_1);
                  }
                  fn_82B8D3D0(param_1,uVar16,uVar2,1,0);
                  uVar7 = fn_82AC9F80(param_1,uVar16,8);
                  fn_82AD1978(uVar2,uVar7);
                  if ((*(uint *)(uVar16 + 8) & 0x3f80) == 0x2d80) {
                    uVar7 = fn_82AC9F80(param_1,uVar16,5);
                    fn_82AD1978(uVar2,uVar7);
                  }
                }
              }
            }
          }
LAB_82b159f4:;}
        if (((((param_1[0xc] & 0xffff0000) != 0xffff0000) && (uVar9 != 0)) && (uVar9 != uVar21)) &&
           (!bVar13)) {
          piVar11 = (int *)(uVar16 + 4);
          piVar10 = piVar11;
          while (iVar8 = *piVar10, iVar8 != 0) {
            if ((*(uint *)(iVar8 + 0x10) != 0) && (*(uint *)(iVar8 + 0x10) == uVar14)) {
              fn_82AD20C0(uVar14,iVar8,param_1);
            }
            if (*piVar10 == iVar8) {
              piVar10 = (int *)(iVar8 + 8);
            }
          }
          uVar9 = uVar16 & 0xfffffffe;
          uVar2 = uVar14 & 0xfffffffe;
          puVar18 = (uint *)(uVar9 + 0x24);
          *(uint *)((*(uint *)(uVar9 + 0x28) & 0xfffffffe) + 0x24) = *puVar18;
          *(undefined4 *)(*puVar18 & 0xfffffffe) = *(undefined4 *)(uVar9 + 0x28);
          *(undefined4 *)(uVar9 + 0x28) = *(undefined4 *)(uVar2 + 0x28);
          *(uint *)((*(uint *)(uVar2 + 0x28) & 0xfffffffe) + 0x24) = uVar9 + 0x28;
          *puVar18 = uVar2 + 0x28;
          *(uint *)(uVar2 + 0x28) = uVar9;
          fn_82AD1A40(uVar16,uVar14,param_1);
          piVar10 = (int *)(uVar14 + 4);
          while (iVar8 = *piVar10, iVar8 != 0) {
            if ((*(int *)(iVar8 + 0x10) != 0) &&
               ((*(uint *)(*(int *)(iVar8 + 0x10) + 8) & 0x3f80) == 0x3a80)) {
              piVar15 = (int *)(*(int *)(iVar8 + 0xc) + 4);
              for (iVar3 = *piVar15; iVar3 != iVar8; iVar3 = *(int *)(iVar3 + 8)) {
                piVar15 = (int *)(iVar3 + 8);
              }
              *piVar15 = *(int *)(iVar8 + 8);
              *(int *)(iVar8 + 8) = *piVar11;
              *piVar11 = iVar8;
              *(uint *)(iVar8 + 0xc) = uVar16;
            }
            if (*piVar10 == iVar8) {
              piVar10 = (int *)(iVar8 + 8);
            }
          }
        }
      }
    }
    uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4);
  } while (((uVar21 & 1) == 0) && (uVar21 != 0));
LAB_82b15b88:
  for (uVar21 = param_1[1]; ((uVar21 & 1) == 0 && (uVar21 != 0));
      uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
    if ((*(uint *)(uVar21 + 0x30) >> 0x1e & 1) != 0) {
      *(uint *)(uVar21 + 0x30) = *(uint *)(uVar21 + 0x30) & 0xbfffffff;
    }
  }
  if ((param_1[0xb] & 0x1000) != 0) {
    do {
      bVar13 = false;
      if ((param_1[1] & 1) == 0) {
        uVar21 = *param_1;
        do {
          uVar21 = uVar21 & 0xfffffffe;
          if ((uint *)(uVar21 - 4) == (uint *)0x0) break;
          if ((*(uint *)(uVar21 + 0x48) & 0x8000000) == 0) {
            for (piVar22 = *(int **)(uVar21 + 8); piVar22 != (int *)0x0; piVar22 = (int *)piVar22[2]
                ) {
              if ((*(uint *)(*piVar22 + 0x4c) & 0x8000000) != 0) {
                bVar13 = true;
                *(uint *)(uVar21 + 0x48) = *(uint *)(uVar21 + 0x48) | 0x8000000;
                break;
              }
            }
            uVar16 = *(uint *)(uVar21 + 0x18);
            if (((uVar16 & 1) == 0) && (uVar16 != 0)) {
              while ((*(uint *)(uVar16 + 8) & 0x3f80) != 0x3000) {
                uVar16 = *(uint *)((uVar16 & 0xfffffffe) + 0x28);
                if (((uVar16 & 1) != 0) || (uVar16 == 0)) goto LAB_82b15c78;
              }
              bVar13 = true;
              *(uint *)(uVar21 + 0x48) = *(uint *)(uVar21 + 0x48) | 0x8000000;
            }
          }
LAB_82b15c78:
          uVar21 = *(uint *)(uVar21 - 4);
        } while ((uVar21 & 1) == 0);
      }
    } while (bVar13);
    uVar21 = param_1[1];
    if ((*(uint *)((-(uint)((uVar21 & 1) == 0) & uVar21) + 0x4c) & 0x8000000) != 0) {
      for (; ((uVar21 & 1) == 0 && (uVar21 != 0)); uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
        if (((*(uint *)(uVar21 + 0x24) & 1) == 0) &&
           ((uVar16 = *(uint *)(uVar21 + 0x20) & 0xfffffffe, uVar16 != 0x28 &&
            ((*(uint *)(uVar16 - 0x20) & 0x3f80) == 0x2980)))) {
          uVar16 = uVar21;
          uVar14 = uVar21;
          if ((*(uint *)(uVar21 + 0x4c) & 0x8000000) == 0) {
            do {
              uVar9 = uVar16;
              uVar16 = *(uint *)(uVar9 + 0x34);
              uVar14 = uVar9;
              if (uVar16 == 0) goto LAB_82b15d54;
            } while ((*(uint *)(uVar16 + 0x4c) & 0x8000000) == 0);
            piVar22 = *(int **)(uVar16 + 0xc);
            while ((uVar14 = uVar16, piVar22 != (int *)0x0 &&
                   (uVar14 = uVar9, (*(uint *)(*piVar22 + 0x4c) & 0x8000000) == 0))) {
              piVar22 = (int *)piVar22[2];
            }
          }
LAB_82b15d54:
          iVar8 = fn_82B841E8(param_1,uVar14,uVar14 + 0x18,0x5f,0,0);
          if (*(int *)(uVar14 + 0x68) != 0) {
            fn_82AD2128(iVar8,3,*(int *)(uVar14 + 0x68),param_1);
          }
          *(int *)(uVar14 + 0x68) = iVar8;
          *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) | 0x2000000;
        }
      }
    }
  }
  uVar21 = param_1[1];
  param_1[10] = param_1[10] | 0x4000;
  for (; ((uVar21 & 1) == 0 && (uVar21 != 0)); uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
    fn_82B13180(param_1,uVar21);
  }
  if ((param_1[10] & 0x10) != 0) {
    for (uVar21 = param_1[1]; ((uVar21 & 1) == 0 && (uVar21 != 0));
        uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
      uVar16 = *(uint *)(uVar21 + 0x1c);
      uVar14 = 0;
joined_r0x82b15e30:
      uVar9 = uVar16;
      if ((uVar16 & 1) == 0) {
        do {
          if (uVar9 == 0) break;
          if ((*(uint *)(uVar9 + 8) & 0x3f80) == 0x3b00) {
            puVar18 = (uint *)(uVar9 + 4);
            uVar16 = *(uint *)(*(int *)(uVar9 + 0x30) + 0xc);
            uVar2 = *(uint *)(*(int *)(uVar9 + 0x2c) + 0xc);
            while (puVar17 = (uint *)*puVar18, puVar17 != (uint *)0x0) {
              piVar22 = (int *)puVar17[4];
              if (piVar22 != (int *)0x0) {
                puVar19 = (uint *)(puVar17[3] + 4);
                for (puVar4 = (uint *)*puVar19; puVar4 != puVar17; puVar4 = (uint *)puVar4[2]) {
                  puVar19 = puVar4 + 2;
                }
                *puVar19 = puVar17[2];
                puVar17[2] = *(uint *)(uVar2 + 4);
                *(uint **)(uVar2 + 4) = puVar17;
                puVar17[3] = uVar2;
                uVar5 = *puVar17;
                uVar20 = **(uint **)(uVar9 + 0x2c) >> 5 & 0xff;
                *puVar17 = ((((uVar20 >> (uVar5 >> 10 & 6) & 3) << 2 |
                             uVar20 >> (uVar5 >> 8 & 6) & 3) << 2 | uVar20 >> (uVar5 >> 6 & 6) & 3)
                            << 2 | uVar20 >> (uVar5 >> 4 & 6) & 3) << 5 | uVar5 & 0xffffe01f;
                uVar7 = fn_82AC9F80(param_1,uVar16,0);
                bVar13 = false;
                for (puVar4 = (uint *)*piVar22; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[1]) {
                  uVar5 = *puVar4;
                  uVar20 = uVar5 >> 0x19 & 7;
                  if ((uVar20 != 0) && ((uVar5 & 0x10) != 0)) {
LAB_82b15f78:
                    bVar13 = true;
                    break;
                  }
                  if (((uVar5 & 0x40000000) == 0) || (bVar12 = true, uVar20 != 0)) {
                    bVar12 = false;
                  }
                  if (((bVar12) && ((uVar5 & 0x1ffe000) == 0)) && (puVar4[3] != uVar16))
                  goto LAB_82b15f78;
                }
                if (((!bVar13) && (0x100000 < (piVar22[2] & 0x380000U))) &&
                   (puVar17 == (uint *)piVar22[0xd])) {
                  uVar5 = *(uint *)(*(int *)(piVar22[0xb] + 0xc) + 8) >> 7 & 0x7f;
                  if ((uVar5 == 0x7d) || (bVar12 = false, uVar5 == 0x7c)) {
                    bVar12 = true;
                  }
                  if (bVar12) {
                    uVar5 = *(uint *)(((uint *)piVar22[0xc])[3] + 8) >> 7 & 0x7f;
                    if ((uVar5 == 0x7d) || (bVar12 = false, uVar5 == 0x7c)) {
                      bVar12 = true;
                    }
                    if ((bVar12) && (((*puVar17 ^ *(uint *)piVar22[0xc]) & 0x18) != 0)) {
                      bVar13 = true;
                    }
                  }
                }
                if (bVar13) {
                  fn_82B894C8(param_1,uVar21,uVar9 & 0xfffffffc,puVar17);
                  piVar22 = (int *)puVar17[3];
                }
                fn_82AD1978(piVar22,uVar7);
              }
              if ((uint *)*puVar18 == puVar17) {
                puVar18 = puVar17 + 2;
              }
            }
            fn_82B8AC10(param_1,uVar9,0,1);
          }
          if (uVar14 == 0) {
            uVar16 = *(uint *)(uVar21 + 0x1c);
            if (uVar9 != (-(uint)((uVar16 & 1) == 0) & uVar16)) goto joined_r0x82b15e30;
LAB_82b1609c:
            uVar16 = *(uint *)((uVar9 & 0xfffffffe) + 0x28);
            uVar14 = uVar9;
          }
          else {
            uVar16 = *(uint *)((uVar14 & 0xfffffffe) + 0x28);
            if (uVar9 == (-(uint)((uVar16 & 1) == 0) & uVar16)) goto LAB_82b1609c;
          }
          uVar9 = uVar16;
          if ((uVar16 & 1) != 0) break;
        } while( true );
      }
    }
  }
  piVar22 = (int *)param_1[0x19];
  if (piVar22 != (int *)0x0) {
    iVar8 = fn_82ABDD90(param_1,0x70,0,1);
    do {
      if ((piVar22[2] & 0x3f80U) != 0x3980) {
        piVar22[4] = piVar22[4] & 0xfff8ffffU | 0x10000;
        *(short *)((int)piVar22 + 0x12) = (short)param_1[0x1d] + 1;
        param_1[0x1d] = (*(ushort *)(piVar22 + 4) & 7) + param_1[0x1d];
        for (iVar3 = *piVar22; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
          if ((*(uint *)(*(int *)(iVar3 + 0xc) + 8) >> 0x17 & 1) == 0) {
            fn_82B102D8(param_1);
          }
        }
        for (iVar3 = piVar22[1]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
          if (((*(int *)(iVar3 + 0x10) != 0) &&
              (uVar21 = *(uint *)(*(int *)(iVar3 + 0x10) + 8), (uVar21 & 0x3f80) == 0x3700)) &&
             ((uVar21 >> 0x17 & 1) == 0)) {
            fn_82B102D8(param_1);
          }
        }
      }
      piVar22 = *(int **)((int)piVar22 + iVar8 + -4);
    } while (piVar22 != (int *)0x0);
  }
  return;
}

