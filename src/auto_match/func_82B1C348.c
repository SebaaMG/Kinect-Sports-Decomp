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
extern int fn_82AA66A8();
extern int fn_82ACA920();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82AD2128();
extern int fn_82AF7710();
extern int fn_82AF77E0();
extern int fn_82AF7980();
extern int fn_82B170D8();
extern int fn_82B175C8();
extern int fn_82B18128();
extern int fn_82B1A7E8();
extern int fn_82B1AAE8();
extern int fn_82B1ADB8();
extern int fn_82B1B020();
extern int fn_82B1B4A0();
extern int fn_82B1B620();
extern int fn_82B1B938();
extern int fn_82B1BA28();
extern int fn_82B1BDE8();
extern int fn_82B1BED8();
extern int fn_82B1BFC8();
extern int fn_82B471E8();
extern int fn_82B841E8();
extern int fn_82B8A3A0();
extern int fn_82B8AC10();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82B1C348(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  char cVar11;
  int iVar9;
  uint uVar10;
  uint *puVar12;
  uint *puVar13;
  bool bVar16;
  uint *puVar14;
  uint *puVar15;
  uint uVar18;
  ulonglong uVar17;
  uint *puVar19;
  int *piVar20;
  uint *puVar21;
  undefined4 *puVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  uint uVar27;
  int *piVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (((uVar1 & 1) == 0) && (uVar1 != 0)) {
    dVar30 = (double)lbl_82002AE0;
    dVar31 = (double)lbl_821AAD20;
    do {
      if ((*(uint *)(param_1 + 0x28) & 0x10000) != 0) {
        *(uint *)(uVar1 + 0x30) = *(uint *)(uVar1 + 0x30) | 0x20000000;
      }
      if ((*(uint *)(uVar1 + 0x30) & 0x20000000) != 0) {
        puVar21 = (uint *)(uVar1 + 0x18);
        piVar26 = (int *)0x0;
        if (((*(uint *)(uVar1 + 0x1c) & 1) == 0) &&
           (piVar28 = (int *)((*puVar21 & 0xfffffffe) - 0x28), piVar20 = (int *)0x0,
           piVar23 = (int *)0x0, piVar28 != (int *)0x0)) {
          do {
            if (((uint)piVar28[2] >> 0x11 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0xdd3);
            }
            uVar18 = (uint)piVar28[2] >> 7 & 0x7f;
            if ((uVar18 < 0x15) || (bVar16 = true, 0x18 < uVar18)) {
              bVar16 = false;
            }
            piVar25 = piVar20;
            piVar24 = piVar23;
            if (bVar16) {
              uVar2 = fn_82B8A3A0(dVar31,dVar31,dVar31,dVar31,param_1,1);
              uVar3 = fn_82B8A3A0(dVar30,dVar31,dVar31,dVar31,param_1,1);
              uVar4 = fn_82B471E8(param_1,piVar28[0xb],0);
              uVar3 = fn_82AD18C0(param_1,uVar3,0);
              uVar3 = fn_82AF7710(param_1,0,piVar28,uVar4,uVar3);
              uVar2 = fn_82AD18C0(param_1,uVar2,0);
              uVar2 = fn_82B1BDE8(param_1,0,piVar28,uVar4,uVar2,uVar3);
              uVar4 = fn_82B471E8(param_1,piVar28[0xc],0);
              uVar2 = fn_82AD17B0(param_1,uVar2);
              uVar18 = (uint)piVar28[2] >> 7 & 0x7f;
              if (uVar18 == 0x15) {
                uVar18 = fn_82B1BDE8(param_1,0,piVar28,uVar4,uVar2,uVar3);
              }
              else if (uVar18 == 0x16) {
                uVar18 = fn_82B1B938(param_1,0,piVar28,uVar4,uVar3,uVar2);
              }
              else if (uVar18 == 0x17) {
                uVar18 = fn_82B1BFC8(param_1,0,piVar28,uVar4,uVar2,uVar3);
              }
              else {
                if (uVar18 != 0x18) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                uVar18 = fn_82B1BED8(param_1,0,piVar28,uVar4,uVar2,uVar3);
              }
              puVar12 = (uint *)(piVar28 + 1);
              while (puVar19 = (uint *)*puVar12, puVar19 != (uint *)0x0) {
                if (puVar19[4] != 0) {
                  puVar14 = (uint *)(puVar19[3] + 4);
                  for (puVar5 = (uint *)*puVar14; puVar5 != puVar19; puVar5 = (uint *)puVar5[2]) {
                    puVar14 = puVar5 + 2;
                  }
                  *puVar14 = puVar19[2];
                  puVar19[2] = *(uint *)(uVar18 + 4);
                  *(uint **)(uVar18 + 4) = puVar19;
                  uVar6 = *puVar19;
                  puVar19[3] = uVar18;
                  *puVar19 = ((((0U >> (uVar6 >> 10 & 6) & 3) << 2 | 0U >> (uVar6 >> 8 & 6) & 3) <<
                               2 | 0U >> (uVar6 >> 6 & 6) & 3) << 2 | 0U >> (uVar6 >> 4 & 6) & 3) <<
                             5 | uVar6 & 0xffffe01f;
                }
                if ((uint *)*puVar12 == puVar19) {
                  puVar12 = puVar19 + 2;
                }
              }
LAB_82b1c620:
              fn_82B8AC10(param_1,piVar28,0,1);
            }
            else {
              if (uVar18 < 0x38) {
                if (uVar18 == 0x37) {
                  for (puVar12 = (uint *)piVar28[1]; puVar12 != (uint *)0x0;
                      puVar12 = (uint *)puVar12[2]) {
                    if (puVar12[4] != 0) {
                      if (((*puVar12 & 0x40000000) == 0) ||
                         (bVar16 = true, (*puVar12 & 0xe000000) != 0)) {
                        bVar16 = false;
                      }
                      if (!bVar16) goto LAB_82b1cc5c;
                    }
                  }
                }
                else if (0x18 < uVar18) {
                  if (uVar18 < 0x1d) {
LAB_82b1c870:
                    uVar18 = 0;
                    puVar12 = (uint *)(piVar28 + 1);
                    while (puVar19 = (uint *)*puVar12, puVar19 != (uint *)0x0) {
                      if ((puVar19[4] != 0) && ((*puVar19 & 0xe000000) != 0)) {
                        if (uVar18 == 0) {
                          uVar17 = (ulonglong)((uint)piVar28[2] >> 7) & 0x7f;
                          if (uVar17 == 0x47) {
                            uVar2 = fn_82B8A3A0(dVar30,dVar31,dVar31,dVar31,param_1,1);
                            iVar9 = piVar28[0xb];
                            uVar2 = fn_82AD18C0(param_1,uVar2,0);
                            uVar18 = fn_82AF7980(param_1,1,piVar28,iVar9,uVar2);
                          }
                          else {
                            if ((((uint)piVar28[2] >> 7 & 0x7f) == 0) ||
                               (bVar16 = true, 0x1f < uVar17)) {
                              bVar16 = false;
                            }
                            if (bVar16) {
                              uVar18 = fn_82B841E8(param_1,piVar28[7],0,uVar17 - 0x14,2,4);
                              uVar6 = uVar18 & 0xfffffffe;
                              *(int *)(uVar6 + 0x28) = piVar28[10];
                              *(uint *)((piVar28[10] & 0xfffffffeU) + 0x24) = uVar6 + 0x28;
                              *(int **)(uVar6 + 0x24) = piVar28 + 10;
                              piVar28[10] = uVar6;
                              uVar8 = fn_82AD1978(uVar18,piVar28[0xb]);
                              *(undefined4 *)(uVar18 + 0x2c) = uVar8;
                              uVar8 = fn_82AD1978(uVar18,piVar28[0xc]);
                              *(undefined4 *)(uVar18 + 0x30) = uVar8;
                            }
                            else {
                              uVar18 = fn_82B841E8(param_1,piVar28[7],0,uVar17 - 0x1c,1,4);
                              uVar6 = uVar18 & 0xfffffffe;
                              *(int *)(uVar6 + 0x28) = piVar28[10];
                              *(uint *)((piVar28[10] & 0xfffffffeU) + 0x24) = uVar6 + 0x28;
                              *(int **)(uVar6 + 0x24) = piVar28 + 10;
                              piVar28[10] = uVar6;
                              uVar8 = fn_82AD1978(uVar18,piVar28[0xb]);
                              *(undefined4 *)(uVar18 + 0x2c) = uVar8;
                            }
                          }
                        }
                        if ((piVar28[2] & 0x3f80U) == 0x2380) {
                          uVar6 = *puVar19;
                          *puVar19 = ((((0U >> (uVar6 >> 10 & 6) & 3) << 2 |
                                       0U >> (uVar6 >> 8 & 6) & 3) << 2 | 0U >> (uVar6 >> 6 & 6) & 3
                                      ) << 2 | 0U >> (uVar6 >> 4 & 6) & 3) << 5 | uVar6 & 0xffffe01f
                          ;
                        }
                        puVar14 = (uint *)(puVar19[3] + 4);
                        for (puVar5 = (uint *)*puVar14; puVar5 != puVar19;
                            puVar5 = (uint *)puVar5[2]) {
                          puVar14 = puVar5 + 2;
                        }
                        *puVar14 = puVar19[2];
                        puVar19[2] = *(uint *)(uVar18 + 4);
                        *(uint **)(uVar18 + 4) = puVar19;
                        puVar19[3] = uVar18;
                      }
                      if ((uint *)*puVar12 == puVar19) {
                        puVar12 = puVar19 + 2;
                      }
                    }
                  }
                  else {
                    if (uVar18 == 0x1e) {
                      uVar18 = 0;
                      puVar12 = (uint *)(piVar28 + 1);
                      while (puVar19 = (uint *)*puVar12, puVar19 != (uint *)0x0) {
                        if (puVar19[4] != 0) {
                          if (((*puVar19 & 0x40000000) == 0) ||
                             (bVar16 = true, (*puVar19 & 0xe000000) != 0)) {
                            bVar16 = false;
                          }
                          if (bVar16) {
                            if (uVar18 == 0) {
                              uVar18 = *(uint *)piVar28[0xb];
                              uVar17 = (ulonglong)
                                       ((uVar18 >> 5 & 0xff) >>
                                       (((uVar18 >> 0x19 & 7) - 1) * 2 & 0x3e));
                              puVar5 = (uint *)fn_82AD17B0(param_1,((uint *)piVar28[0xb])[3]);
                              *puVar5 = *puVar5 & 0xf1ffffff | 0x4000000;
                              fn_82AD1270(puVar5,uVar18 & 0x1f);
                              *puVar5 = (uint)(((uVar17 & 3) << 2 | 0xe0 | uVar17 & 3) << 5) |
                                        *puVar5 & 0xfffffc1f;
                              uVar18 = fn_82B1B020(param_1,0,piVar28,puVar5);
                            }
                            puVar14 = (uint *)(puVar19[3] + 4);
                            for (puVar5 = (uint *)*puVar14; puVar5 != puVar19;
                                puVar5 = (uint *)puVar5[2]) {
                              puVar14 = puVar5 + 2;
                            }
                            *puVar14 = puVar19[2];
                            puVar19[2] = *(uint *)(uVar18 + 4);
                            *(uint **)(uVar18 + 4) = puVar19;
                            puVar19[3] = uVar18;
                          }
                        }
                        if ((uint *)*puVar12 == puVar19) {
                          puVar12 = puVar19 + 2;
                        }
                      }
                      iVar9 = 3;
                      goto LAB_82b1cdcc;
                    }
                    if (uVar18 == 0x21) goto LAB_82b1ca90;
                    if (uVar18 == 0x23) {
                      iVar9 = 2;
                      goto LAB_82b1ca94;
                    }
                    if (uVar18 == 0x24) {
                      for (puVar12 = (uint *)piVar28[1]; puVar12 != (uint *)0x0;
                          puVar12 = (uint *)puVar12[2]) {
                        if (puVar12[4] != 0) {
                          uVar18 = *puVar12;
                          *puVar12 = ((((0U >> (uVar18 >> 10 & 6) & 3) << 2 |
                                       0U >> (uVar18 >> 8 & 6) & 3) << 2 |
                                      0U >> (uVar18 >> 6 & 6) & 3) << 2 |
                                     0U >> (uVar18 >> 4 & 6) & 3) << 5 | uVar18 & 0xffffe01f;
                        }
                      }
                    }
                  }
                }
              }
              else if (uVar18 == 0x38) {
LAB_82b1cc5c:
                uVar18 = 0;
                puVar12 = (uint *)(piVar28 + 1);
                while (puVar19 = (uint *)*puVar12, puVar19 != (uint *)0x0) {
                  if (puVar19[4] != 0) {
                    if (((*puVar19 & 0x40000000) == 0) ||
                       (bVar16 = true, (*puVar19 & 0xe000000) != 0)) {
                      bVar16 = false;
                    }
                    if (bVar16) {
                      if (uVar18 == 0) {
                        puVar5 = (uint *)piVar28[0xb];
                        if ((piVar28[2] & 0x3f80U) == 0x1c00) {
                          uVar18 = *puVar5;
                          uVar17 = (ulonglong)
                                   ((uVar18 >> 5 & 0xff) >> (((uVar18 >> 0x19 & 7) - 1) * 2 & 0x3e))
                          ;
                          puVar5 = (uint *)fn_82AD17B0(param_1,puVar5[3]);
                          *puVar5 = *puVar5 & 0xf1ffffff | 0x4000000;
                          fn_82AD1270(puVar5,uVar18 & 0x1f);
                          *puVar5 = (uint)(((uVar17 & 3) << 2 | 0xe0 | uVar17 & 3) << 5) |
                                    *puVar5 & 0xfffffc1f;
                          uVar2 = fn_82B1AAE8(param_1,0,piVar28,puVar5);
                          puVar5 = (uint *)fn_82AD17B0(param_1,uVar2);
                          *puVar5 = *puVar5 & 0xf1ffffff | 0x4000000;
                          fn_82AD1270(puVar5,0);
                          *puVar5 = *puVar5 & 0xffffe01f | 0x1c00;
                        }
                        uVar18 = fn_82B1B020(param_1,0,piVar28,puVar5);
                      }
                      puVar14 = (uint *)(puVar19[3] + 4);
                      for (puVar5 = (uint *)*puVar14; puVar5 != puVar19; puVar5 = (uint *)puVar5[2])
                      {
                        puVar14 = puVar5 + 2;
                      }
                      *puVar14 = puVar19[2];
                      puVar19[2] = *(uint *)(uVar18 + 4);
                      *(uint **)(uVar18 + 4) = puVar19;
                      puVar19[3] = uVar18;
                    }
                  }
                  if ((uint *)*puVar12 == puVar19) {
                    puVar12 = puVar19 + 2;
                  }
                }
                iVar9 = 0x25;
LAB_82b1cdcc:
                piVar28[2] = iVar9 << 7 | piVar28[2] & 0xffffc03fU;
                if (*(short *)((int)piVar28 + 0xe) != 0) {
                  *(undefined2 *)((int)piVar28 + 0xe) = 0;
                }
              }
              else {
                if (uVar18 == 0x3a) {
LAB_82b1ca90:
                  iVar9 = 1;
LAB_82b1ca94:
                  puVar12 = (uint *)*piVar28;
                  while( true ) {
                    if (puVar12 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                      fn_82AA66A8(param_1,0x12c1);
                    }
                    uVar18 = *puVar12;
                    if (((uVar18 & 0x40000000) == 0) || (bVar16 = true, (uVar18 & 0xe000000) != 0))
                    {
                      bVar16 = false;
                    }
                    if ((bVar16) && ((uVar18 & 0x1ffe000) == 0xc000)) break;
                    puVar12 = (uint *)puVar12[1];
                  }
                  uVar6 = fn_82B841E8(param_1,piVar28[7],0,iVar9,2,1);
                  uVar18 = uVar6 & 0xfffffffe;
                  puVar19 = (uint *)(piVar28 + 9);
                  *(uint *)(uVar18 + 0x24) = *puVar19;
                  *(uint *)(*puVar19 & 0xfffffffe) = uVar18;
                  *(int **)(uVar18 + 0x28) = piVar28;
                  *puVar19 = uVar18 + 0x28;
                  iVar7 = fn_82AD18C0(param_1,puVar12[3],0);
                  if ((piVar28[2] & 0x3f80U) == 0x1d00) {
                    iVar7 = fn_82ACA920(param_1,iVar7,*(undefined4 *)(iVar7 + 0xc));
                    fn_82AD1270(iVar7,4);
                  }
                  uVar8 = fn_82AD1978(uVar6,iVar7);
                  *(undefined4 *)(uVar6 + 0x30) = uVar8;
                  if (iVar9 != 3) {
                    iVar7 = fn_82B18128(param_1,piVar28[0xb],0);
                  }
                  uVar8 = fn_82AD1978(uVar6,iVar7);
                  *(undefined4 *)(uVar6 + 0x2c) = uVar8;
                  puVar12 = (uint *)(piVar28 + 1);
                  while (puVar19 = (uint *)*puVar12, puVar19 != (uint *)0x0) {
                    if (puVar19[4] != 0) {
                      puVar14 = (uint *)(puVar19[3] + 4);
                      for (puVar5 = (uint *)*puVar14; puVar5 != puVar19; puVar5 = (uint *)puVar5[2])
                      {
                        puVar14 = puVar5 + 2;
                      }
                      *puVar14 = puVar19[2];
                      puVar19[2] = *(uint *)(uVar6 + 4);
                      *(uint **)(uVar6 + 4) = puVar19;
                      puVar19[3] = uVar6;
                      uVar18 = *puVar19;
                      *puVar19 = ((((0U >> (uVar18 >> 10 & 6) & 3) << 2 |
                                   0U >> (uVar18 >> 8 & 6) & 3) << 2 | 0U >> (uVar18 >> 6 & 6) & 3)
                                  << 2 | 0U >> (uVar18 >> 4 & 6) & 3) << 5 | uVar18 & 0xffffe01f;
                    }
                    if ((uint *)*puVar12 == puVar19) {
                      puVar12 = puVar19 + 2;
                    }
                  }
                  goto LAB_82b1c620;
                }
                if (0x42 < uVar18) {
                  if (uVar18 < 0x48) goto LAB_82b1c870;
                  if (uVar18 == 0x52) {
                    iVar9 = 3;
                    goto LAB_82b1ca94;
                  }
                }
              }
              if (((uint)piVar28[2] >> 5 & 1) != 0) {
                uVar18 = (uint)piVar28[2] >> 7 & 0x7f;
                if ((uVar18 != 3) && (uVar18 != 0x69)) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                *(uint *)(uVar1 + 0x30) = *(uint *)(uVar1 + 0x30) | 0x10000000;
              }
              cVar11 = fn_82B170D8(piVar28);
              if (cVar11 != '\0') {
                if (((piVar28[2] & 0x3f80U) != 0x3000) ||
                   (bVar16 = true, (piVar28[2] & 0x380000U) < 0x80001)) {
                  bVar16 = false;
                }
                cVar11 = fn_82B175C8(param_1,piVar28,
                                       *(undefined4 *)(piVar28[0xc - (uint)!bVar16] + 0xc),0);
                if (cVar11 == '\0') {
                  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
                }
              }
              if ((((piVar28[2] & 0x3f80U) == 0x3000) && ((piVar28[2] & 0x380000U) == 0x80000)) &&
                 (piVar25 = piVar28, piVar24 = piVar28, piVar20 != (int *)0x0)) {
                fn_82AD2128(piVar20,3,piVar28,param_1);
                piVar24 = piVar23;
              }
            }
            if (piVar26 == (int *)0x0) {
              if ((*(uint *)(uVar1 + 0x1c) & 1) == 0) {
                piVar20 = (int *)((*puVar21 & 0xfffffffe) - 0x28);
              }
              else {
                piVar20 = (int *)0x0;
              }
              if (piVar28 == piVar20) goto LAB_82b1cefc;
              if ((*(uint *)(uVar1 + 0x1c) & 1) != 0) break;
              uVar18 = *puVar21;
            }
            else {
              uVar18 = piVar26[9];
              if ((uVar18 & 1) == 0) {
                piVar20 = (int *)((uVar18 & 0xfffffffe) - 0x28);
              }
              else {
                piVar20 = (int *)0x0;
              }
              if (piVar28 == piVar20) {
LAB_82b1cefc:
                uVar18 = piVar28[9];
                piVar26 = piVar28;
              }
              if ((uVar18 & 1) != 0) break;
            }
            piVar28 = (int *)((uVar18 & 0xfffffffe) - 0x28);
            piVar20 = piVar25;
            piVar23 = piVar24;
          } while (piVar28 != (int *)0x0);
          if (piVar24 != (int *)0x0) {
            iVar9 = fn_82B841E8(param_1,uVar1,puVar21,0x75,0,0);
            fn_82AD2128(iVar9,3,piVar24,param_1);
            if (*(int *)(uVar1 + 0x68) != 0) {
              fn_82AD2128(iVar9,3,*(int *)(uVar1 + 0x68),param_1);
            }
            *(int *)(uVar1 + 0x68) = iVar9;
            *(uint *)(iVar9 + 8) = *(uint *)(iVar9 + 8) | 0x2000000;
          }
        }
        if ((*(uint *)(uVar1 + 0x4c) & 0x80000) == 0) {
          puVar21 = *(uint **)(uVar1 + 0x1c);
          puVar12 = (uint *)0x0;
joined_r0x82b1cfe8:
          puVar19 = puVar21;
          if (((uint)puVar21 & 1) == 0) {
joined_r0x82b1cff0:
            if (puVar19 == (uint *)0x0) goto LAB_82b1dc80;
            uVar18 = puVar19[2] >> 7 & 0x7f;
            switch(uVar18) {
            case 0xc:
              uVar2 = fn_82B1A7E8(param_1,0,puVar19,puVar19[0xb],puVar19[0xc]);
              iVar9 = fn_82B1B4A0(param_1,0,puVar19,uVar2,puVar19[0xd]);
              puVar21 = puVar19 + 1;
              while (uVar18 = *puVar21, uVar18 != 0) {
                if (*(int *)(uVar18 + 0x10) != 0) {
                  puVar5 = (uint *)(*(int *)(uVar18 + 0xc) + 4);
                  for (uVar6 = *puVar5; uVar6 != uVar18; uVar6 = *(uint *)(uVar6 + 8)) {
                    puVar5 = (uint *)(uVar6 + 8);
                  }
                  *puVar5 = *(uint *)(uVar18 + 8);
                  *(undefined4 *)(uVar18 + 8) = *(undefined4 *)(iVar9 + 4);
                  *(uint *)(iVar9 + 4) = uVar18;
                  *(int *)(uVar18 + 0xc) = iVar9;
                }
                if (*puVar21 == uVar18) {
                  puVar21 = (uint *)(uVar18 + 8);
                }
              }
              break;
            default:
              if ((uVar18 < 0x20) || (bVar16 = true, 0x52 < uVar18)) {
                bVar16 = false;
              }
              if (bVar16) {
                for (puVar21 = (uint *)puVar19[1]; puVar21 != (uint *)0x0;
                    puVar21 = (uint *)puVar21[2]) {
                  if ((puVar21[4] != 0) && (uVar18 = *puVar21, (uVar18 & 0xe000000) != 0)) {
                    *puVar21 = ((((0U >> (uVar18 >> 10 & 6) & 3) << 2 | 0U >> (uVar18 >> 8 & 6) & 3)
                                 << 2 | 0U >> (uVar18 >> 6 & 6) & 3) << 2 |
                               0U >> (uVar18 >> 4 & 6) & 3) << 5 | uVar18 & 0xffffe01f;
                  }
                }
                puVar19[2] = puVar19[2] & 0xfffe3fff | 0x4000;
              }
              goto LAB_82b1dc08;
            case 0x10:
            case 0x11:
            case 0x12:
              uVar6 = 0;
              if (uVar18 == 0x12) {
                uVar6 = fn_82AF77E0(param_1,0,puVar19,puVar19[0xd],puVar19[0xd]);
              }
              uVar27 = 0;
              uVar10 = uVar6;
              if (-uVar18 != -0x14) {
                do {
                  uVar2 = fn_82B18128(param_1,puVar19[0xc],uVar27);
                  uVar3 = fn_82B18128(param_1,puVar19[0xb],uVar27);
                  uVar6 = fn_82B1A7E8(param_1,0,puVar19,uVar3,uVar2);
                  if (uVar10 != 0) {
                    uVar6 = fn_82B1BA28(param_1,0,puVar19,uVar10,uVar6);
                  }
                  uVar27 = uVar27 + 1;
                  uVar10 = uVar6;
                } while (uVar27 < -uVar18 + 0x14);
              }
              puVar21 = puVar19 + 1;
              while (puVar5 = (uint *)*puVar21, puVar5 != (uint *)0x0) {
                if (puVar5[4] != 0) {
                  puVar13 = (uint *)(puVar5[3] + 4);
                  for (puVar14 = (uint *)*puVar13; puVar14 != puVar5; puVar14 = (uint *)puVar14[2])
                  {
                    puVar13 = puVar14 + 2;
                  }
                  *puVar13 = puVar5[2];
                  puVar5[2] = *(uint *)(uVar6 + 4);
                  *(uint **)(uVar6 + 4) = puVar5;
                  uVar18 = *puVar5;
                  puVar5[3] = uVar6;
                  *puVar5 = ((((0U >> (uVar18 >> 10 & 6) & 3) << 2 | 0U >> (uVar18 >> 8 & 6) & 3) <<
                              2 | 0U >> (uVar18 >> 6 & 6) & 3) << 2 | 0U >> (uVar18 >> 4 & 6) & 3)
                            << 5 | uVar18 & 0xffffe01f;
                }
                if ((uint *)*puVar21 == puVar5) {
                  puVar21 = puVar5 + 2;
                }
              }
              break;
            case 0x14:
              uVar2 = fn_82B18128(param_1,puVar19[0xb],1);
              uVar3 = fn_82B18128(param_1,puVar19[0xb],0);
              uVar2 = fn_82AF77E0(param_1,0,puVar19,uVar3,uVar2);
              uVar3 = fn_82B18128(param_1,puVar19[0xb],2);
              uVar2 = fn_82B1B620(param_1,0,puVar19,uVar2,uVar3);
              uVar3 = fn_82B18128(param_1,puVar19[0xb],3);
              uVar18 = fn_82B1B620(param_1,0,puVar19,uVar2,uVar3);
              puVar21 = puVar19 + 1;
              while (puVar5 = (uint *)*puVar21, puVar5 != (uint *)0x0) {
                if (puVar5[4] != 0) {
                  puVar13 = (uint *)(puVar5[3] + 4);
                  for (puVar14 = (uint *)*puVar13; puVar14 != puVar5; puVar14 = (uint *)puVar14[2])
                  {
                    puVar13 = puVar14 + 2;
                  }
                  *puVar13 = puVar5[2];
                  puVar5[2] = *(uint *)(uVar18 + 4);
                  *(uint **)(uVar18 + 4) = puVar5;
                  puVar5[3] = uVar18;
                  uVar6 = *puVar5;
                  *puVar5 = ((((0U >> (uVar6 >> 10 & 6) & 3) << 2 | 0U >> (uVar6 >> 8 & 6) & 3) << 2
                             | 0U >> (uVar6 >> 6 & 6) & 3) << 2 | 0U >> (uVar6 >> 4 & 6) & 3) << 5 |
                            uVar6 & 0xffffe01f;
                }
                if ((uint *)*puVar21 == puVar5) {
                  puVar21 = puVar5 + 2;
                }
              }
              break;
            case 0x20:
            case 0x39:
              uVar2 = 1;
              goto code_r0x82b1d37c;
            case 0x22:
              uVar2 = 2;
              goto code_r0x82b1d37c;
            case 0x25:
              uVar2 = 3;
              goto code_r0x82b1d37c;
            case 0x26:
              uVar2 = 4;
code_r0x82b1d37c:
              uVar6 = fn_82B841E8(param_1,puVar19[7],0,uVar2,2,1);
              uVar18 = uVar6 & 0xfffffffe;
              puVar21 = (uint *)(((uint)puVar19 & 0xfffffffe) + 0x24);
              *(uint *)(uVar18 + 0x24) = *puVar21;
              *(uint *)(*puVar21 & 0xfffffffe) = uVar18;
              *(uint *)(uVar18 + 0x28) = (uint)puVar19 & 0xfffffffe;
              *puVar21 = uVar18 + 0x28;
              uVar2 = fn_82B18128(param_1,puVar19[0xb],0);
              uVar8 = fn_82AD1978(uVar6,uVar2);
              *(undefined4 *)(uVar6 + 0x2c) = uVar8;
              iVar9 = fn_82B18128(param_1,puVar19[0xb],1);
              if ((puVar19[2] & 0x3f80) == 0x1c80) {
                iVar9 = fn_82ACA920(param_1,iVar9,*(undefined4 *)(iVar9 + 0xc));
                fn_82AD1270(iVar9,4);
              }
              uVar8 = fn_82AD1978(uVar6,iVar9);
              *(undefined4 *)(uVar6 + 0x30) = uVar8;
              puVar21 = puVar19 + 1;
              while (puVar5 = (uint *)*puVar21, puVar5 != (uint *)0x0) {
                if (puVar5[4] != 0) {
                  puVar13 = (uint *)(puVar5[3] + 4);
                  for (puVar14 = (uint *)*puVar13; puVar14 != puVar5; puVar14 = (uint *)puVar14[2])
                  {
                    puVar13 = puVar14 + 2;
                  }
                  *puVar13 = puVar5[2];
                  puVar5[2] = *(uint *)(uVar6 + 4);
                  *(uint **)(uVar6 + 4) = puVar5;
                  uVar18 = *puVar5;
                  puVar5[3] = uVar6;
                  *puVar5 = ((((0U >> (uVar18 >> 10 & 6) & 3) << 2 | 0U >> (uVar18 >> 8 & 6) & 3) <<
                              2 | 0U >> (uVar18 >> 6 & 6) & 3) << 2 | 0U >> (uVar18 >> 4 & 6) & 3)
                            << 5 | uVar18 & 0xffffe01f;
                }
                if ((uint *)*puVar21 == puVar5) {
                  puVar21 = puVar5 + 2;
                }
              }
              break;
            case 0x27:
              uVar2 = 5;
              goto code_r0x82b1d678;
            case 0x28:
              uVar2 = 6;
              goto code_r0x82b1d678;
            case 0x29:
              uVar2 = 7;
              goto code_r0x82b1d678;
            case 0x2a:
              uVar2 = 8;
              goto code_r0x82b1d678;
            case 0x2b:
              uVar2 = 9;
              goto code_r0x82b1da50;
            case 0x2c:
              uVar2 = 10;
              goto code_r0x82b1da50;
            case 0x2d:
              uVar2 = 0xb;
code_r0x82b1da50:
              uVar6 = fn_82B841E8(param_1,puVar19[7],0,uVar2,1,1);
              uVar18 = uVar6 & 0xfffffffe;
              puVar21 = (uint *)(((uint)puVar19 & 0xfffffffe) + 0x24);
              *(uint *)(uVar18 + 0x24) = *puVar21;
              *(uint *)(*puVar21 & 0xfffffffe) = uVar18;
              *(uint *)(uVar18 + 0x28) = (uint)puVar19 & 0xfffffffe;
              *puVar21 = uVar18 + 0x28;
              uVar2 = fn_82B18128(param_1,puVar19[0xb],0);
              uVar8 = fn_82AD1978(uVar6,uVar2);
              *(undefined4 *)(uVar6 + 0x2c) = uVar8;
              puVar21 = puVar19 + 1;
              while (puVar5 = (uint *)*puVar21, puVar5 != (uint *)0x0) {
                if (puVar5[4] != 0) {
                  puVar13 = (uint *)(puVar5[3] + 4);
                  for (puVar14 = (uint *)*puVar13; puVar14 != puVar5; puVar14 = (uint *)puVar14[2])
                  {
                    puVar13 = puVar14 + 2;
                  }
                  *puVar13 = puVar5[2];
                  puVar5[2] = *(uint *)(uVar6 + 4);
                  *(uint **)(uVar6 + 4) = puVar5;
                  puVar5[3] = uVar6;
                  uVar18 = *puVar5;
                  *puVar5 = ((((0U >> (uVar18 >> 10 & 6) & 3) << 2 | 0U >> (uVar18 >> 8 & 6) & 3) <<
                              2 | 0U >> (uVar18 >> 6 & 6) & 3) << 2 | 0U >> (uVar18 >> 4 & 6) & 3)
                            << 5 | uVar18 & 0xffffe01f;
                }
                if ((uint *)*puVar21 == puVar5) {
                  puVar21 = puVar5 + 2;
                }
              }
              break;
            case 0x43:
              uVar2 = 0x19;
              goto code_r0x82b1d678;
            case 0x44:
              uVar2 = 0x1a;
              goto code_r0x82b1d678;
            case 0x45:
            case 0x46:
              uVar2 = 0x1c;
code_r0x82b1d678:
              puVar21 = (uint *)fn_82B841E8(param_1,puVar19[7],0,uVar2,2,1);
              uVar18 = (uint)puVar21 & 0xfffffffe;
              puVar5 = (uint *)(((uint)puVar19 & 0xfffffffe) + 0x24);
              *(uint *)(uVar18 + 0x24) = *puVar5;
              *(uint *)(*puVar5 & 0xfffffffe) = uVar18;
              *(uint *)(uVar18 + 0x28) = (uint)puVar19 & 0xfffffffe;
              *puVar5 = uVar18 + 0x28;
              uVar2 = fn_82B8A3A0(dVar31,dVar31,dVar31,dVar31,param_1,1);
              uVar3 = fn_82B18128(param_1,puVar19[0xb],0);
              uVar18 = fn_82AD1978(puVar21,uVar3);
              puVar21[0xb] = uVar18;
              uVar2 = fn_82AD18C0(param_1,uVar2,0);
              uVar18 = fn_82AD1978(puVar21,uVar2);
              puVar21[0xc] = uVar18;
              puVar5 = puVar19 + 1;
              while (puVar14 = (uint *)*puVar5, puVar13 = puVar19, puVar14 != (uint *)0x0) {
                if (puVar14[4] != 0) {
                  puVar15 = (uint *)(puVar14[3] + 4);
                  for (puVar13 = (uint *)*puVar15; puVar13 != puVar14; puVar13 = (uint *)puVar13[2])
                  {
                    puVar15 = puVar13 + 2;
                  }
                  *puVar15 = puVar14[2];
                  puVar14[2] = puVar21[1];
                  puVar21[1] = (uint)puVar14;
                  puVar14[3] = (uint)puVar21;
                  uVar18 = *puVar14;
                  *puVar14 = ((((0U >> (uVar18 >> 10 & 6) & 3) << 2 | 0U >> (uVar18 >> 8 & 6) & 3)
                               << 2 | 0U >> (uVar18 >> 6 & 6) & 3) << 2 |
                             0U >> (uVar18 >> 4 & 6) & 3) << 5 | uVar18 & 0xffffe01f;
                }
                if ((uint *)*puVar5 == puVar14) {
                  puVar5 = puVar14 + 2;
                }
              }
              while (puVar5 = (uint *)*puVar13, puVar5 != (uint *)0x0) {
                if ((*puVar5 & 0xe000000) == 0) {
                  puVar14 = (uint *)puVar5[4];
                  for (puVar15 = (uint *)*puVar14; puVar15 != puVar5; puVar15 = (uint *)puVar15[1])
                  {
                    puVar14 = puVar15 + 1;
                  }
                  *puVar14 = puVar5[1];
                  puVar5[1] = *puVar21;
                  *puVar21 = (uint)puVar5;
                  puVar5[4] = (uint)puVar21;
                }
                if ((uint *)*puVar13 == puVar5) {
                  puVar13 = puVar5 + 1;
                }
              }
              if ((puVar19[2] & 0x2000000) != 0) {
                puVar22 = (undefined4 *)(uVar1 + 0x5c);
                puVar21[2] = puVar21[2] | 0x2000000;
                lVar29 = 4;
                do {
                  if ((uint *)*puVar22 == puVar19) {
                    *puVar22 = puVar21;
                  }
                  puVar22 = puVar22 + 1;
                  lVar29 = lVar29 + -1;
                } while (lVar29 != 0);
              }
              break;
            case 0x47:
              uVar2 = fn_82B8A3A0(dVar30,dVar31,dVar31,dVar31,param_1,1);
              uVar3 = fn_82B18128(param_1,puVar19[0xb],0);
              uVar2 = fn_82AD18C0(param_1,uVar2,0);
              puVar21 = (uint *)fn_82B1ADB8(param_1,0,puVar19,uVar3,uVar2);
              puVar5 = puVar19 + 1;
              while (puVar14 = (uint *)*puVar5, puVar13 = puVar19, puVar14 != (uint *)0x0) {
                if (puVar14[4] != 0) {
                  puVar15 = (uint *)(puVar14[3] + 4);
                  for (puVar13 = (uint *)*puVar15; puVar13 != puVar14; puVar13 = (uint *)puVar13[2])
                  {
                    puVar15 = puVar13 + 2;
                  }
                  *puVar15 = puVar14[2];
                  puVar14[2] = puVar21[1];
                  puVar21[1] = (uint)puVar14;
                  puVar14[3] = (uint)puVar21;
                  uVar18 = *puVar14;
                  *puVar14 = ((((0U >> (uVar18 >> 10 & 6) & 3) << 2 | 0U >> (uVar18 >> 8 & 6) & 3)
                               << 2 | 0U >> (uVar18 >> 6 & 6) & 3) << 2 |
                             0U >> (uVar18 >> 4 & 6) & 3) << 5 | uVar18 & 0xffffe01f;
                }
                if ((uint *)*puVar5 == puVar14) {
                  puVar5 = puVar14 + 2;
                }
              }
              while (puVar5 = (uint *)*puVar13, puVar5 != (uint *)0x0) {
                if ((*puVar5 & 0xe000000) == 0) {
                  puVar14 = (uint *)puVar5[4];
                  for (puVar15 = (uint *)*puVar14; puVar15 != puVar5; puVar15 = (uint *)puVar15[1])
                  {
                    puVar14 = puVar15 + 1;
                  }
                  *puVar14 = puVar5[1];
                  puVar5[1] = *puVar21;
                  *puVar21 = (uint)puVar5;
                  puVar5[4] = (uint)puVar21;
                }
                if ((uint *)*puVar13 == puVar5) {
                  puVar13 = puVar5 + 1;
                }
              }
              if ((puVar19[2] & 0x2000000) != 0) {
                puVar22 = (undefined4 *)(uVar1 + 0x5c);
                puVar21[2] = puVar21[2] | 0x2000000;
                lVar29 = 4;
                do {
                  if ((uint *)*puVar22 == puVar19) {
                    *puVar22 = puVar21;
                  }
                  puVar22 = puVar22 + 1;
                  lVar29 = lVar29 + -1;
                } while (lVar29 != 0);
              }
              break;
            case 0x4a:
            case 0x4b:
              uVar2 = 2;
              goto code_r0x82b1d4f4;
            case 0x4c:
            case 0x4d:
            case 0x4e:
            case 0x4f:
              uVar2 = 1;
code_r0x82b1d4f4:
              uVar10 = fn_82B841E8(param_1,puVar19[7],0,uVar2,2,1);
              uVar18 = uVar10 & 0xfffffffe;
              puVar21 = (uint *)(((uint)puVar19 & 0xfffffffe) + 0x24);
              *(uint *)(uVar18 + 0x24) = *puVar21;
              *(uint *)(*puVar21 & 0xfffffffe) = uVar18;
              *(uint *)(uVar18 + 0x28) = (uint)puVar19 & 0xfffffffe;
              *puVar21 = uVar18 + 0x28;
              uVar8 = fn_82AD1978(uVar10,puVar19[0xb]);
              *(undefined4 *)(uVar10 + 0x2c) = uVar8;
              uVar6 = puVar19[2] >> 7 & 0x7f;
              uVar18 = puVar19[0xc];
              if ((uVar6 == 0x4e) || (uVar6 == 0x4f)) {
                uVar18 = fn_82ACA920(param_1,uVar18,*(undefined4 *)(uVar18 + 0xc));
                fn_82AD1270(uVar18,4);
              }
              uVar8 = fn_82AD1978(uVar10,uVar18);
              *(undefined4 *)(uVar10 + 0x30) = uVar8;
              puVar21 = puVar19 + 1;
              while (puVar5 = (uint *)*puVar21, puVar5 != (uint *)0x0) {
                if (puVar5[4] != 0) {
                  puVar13 = (uint *)(puVar5[3] + 4);
                  for (puVar14 = (uint *)*puVar13; puVar14 != puVar5; puVar14 = (uint *)puVar14[2])
                  {
                    puVar13 = puVar14 + 2;
                  }
                  *puVar13 = puVar5[2];
                  puVar5[2] = *(uint *)(uVar10 + 4);
                  *(uint **)(uVar10 + 4) = puVar5;
                  puVar5[3] = uVar10;
                  uVar18 = *puVar5;
                  *puVar5 = ((((0U >> (uVar18 >> 10 & 6) & 3) << 2 | 0U >> (uVar18 >> 8 & 6) & 3) <<
                              2 | 0U >> (uVar18 >> 6 & 6) & 3) << 2 | 0U >> (uVar18 >> 4 & 6) & 3)
                            << 5 | uVar18 & 0xffffe01f;
                }
                if ((uint *)*puVar21 == puVar5) {
                  puVar21 = puVar5 + 2;
                }
              }
            }
            fn_82B8AC10(param_1,puVar19,0,1);
LAB_82b1dc08:
            if (puVar12 != (uint *)0x0) {
              puVar21 = *(uint **)(((uint)puVar12 & 0xfffffffe) + 0x28);
              if (puVar19 == (uint *)(-(uint)(((uint)puVar21 & 1) == 0) & (uint)puVar21))
              goto LAB_82b1dc30;
              puVar19 = puVar21;
              if (((uint)puVar21 & 1) != 0) goto LAB_82b1dc80;
              goto joined_r0x82b1cff0;
            }
            if (puVar19 !=
                (uint *)(-(uint)((*(uint *)(uVar1 + 0x1c) & 1) == 0) & *(uint *)(uVar1 + 0x1c))) {
              puVar21 = *(uint **)(uVar1 + 0x1c);
              goto joined_r0x82b1cfe8;
            }
LAB_82b1dc30:
            puVar21 = *(uint **)(((uint)puVar19 & 0xfffffffe) + 0x28);
            puVar12 = puVar19;
            goto joined_r0x82b1cfe8;
          }
        }
      }
LAB_82b1dc80:
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4);
    } while (((uVar1 & 1) == 0) && (uVar1 != 0));
  }
  return;
}

