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
extern unsigned int *auStack_84;
extern unsigned int *auStack_88;
extern unsigned int *auStack_b0;
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABDA10();
extern int fn_82ABDD90();
extern int fn_82ABE190();
extern int fn_82ABE250();
extern int fn_82AC6740();
extern int fn_82ACAFD8();
extern int fn_82AD1A40();
extern int fn_82AD20C0();
extern int fn_82AD3B30();
extern int fn_82AD6090();
extern int fn_82AE9F18();
extern int fn_82AEDBE8();
extern int fn_82B41D68();
extern int fn_82B4B048();
extern int fn_82B82D28();
extern int fn_82B841E8();
extern int fn_82B8B280();
extern int fn_82B8BCB0();
extern int fn_82B8D488();
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int uStack_ac;


void fn_82AEEA68(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar11;
  int iVar12;
  char cVar18;
  uint uVar13;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  uint *puVar19;
  uint *puVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  int *piVar25;
  int *piVar26;
  int iVar27;
  undefined1 auStack_b0 [4];
  uint uStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [132];
  
  for (uVar1 = param_1[1]; ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
    if ((*(uint *)(uVar1 + 0x14) & 1) == 0) {
      uVar22 = *(uint *)(uVar1 + 0x14);
      iVar11 = uVar1 + 0x10;
    }
    else if ((*(uint *)(uVar1 + 0x1c) & 1) == 0) {
      uVar22 = *(uint *)(uVar1 + 0x1c);
      iVar11 = uVar1 + 0x18;
    }
    else {
      uVar22 = *(uint *)(uVar1 + 0x24);
      iVar11 = uVar1 + 0x20;
    }
    uVar22 = -(uint)((uVar22 & 1) == 0) & uVar22;
    do {
      if (uVar22 == 0) break;
      do {
        *(uint *)(uVar22 + 0x14) = *(uint *)(uVar22 + 0x14) & 0xc3ffffff | 0x20000000;
        uVar22 = *(uint *)((uVar22 & 0xfffffffe) + 0x28);
        if ((uVar22 & 1) != 0) break;
      } while (uVar22 != 0);
      iVar12 = uVar1 + 0x20;
      if (iVar11 == iVar12) break;
      if ((iVar11 == uVar1 + 0x18) || ((*(uint *)(uVar1 + 0x1c) & 1) != 0)) {
        uVar22 = *(uint *)(uVar1 + 0x24);
      }
      else {
        uVar22 = *(uint *)(uVar1 + 0x1c);
        iVar12 = uVar1 + 0x18;
      }
      iVar11 = iVar12;
    } while ((uVar22 & 1) == 0);
  }
  do {
    bVar6 = false;
    if ((param_1[1] & 1) == 0) {
      uVar1 = *param_1;
      do {
        uVar1 = uVar1 & 0xfffffffe;
        puVar24 = (uint *)(uVar1 - 4);
        if (puVar24 == (uint *)0x0) break;
        if ((*(uint *)(uVar1 + 0x20) & 1) == 0) {
          uVar22 = *(uint *)(uVar1 + 0x20);
          puVar14 = (uint *)(uVar1 + 0x1c);
        }
        else if ((*(uint *)(uVar1 + 0x18) & 1) == 0) {
          uVar22 = *(uint *)(uVar1 + 0x18);
          puVar14 = (uint *)(uVar1 + 0x14);
        }
        else {
          uVar22 = *(uint *)(uVar1 + 0x10);
          puVar14 = (uint *)(uVar1 + 0xc);
        }
        if ((uVar22 & 1) == 0) {
          piVar26 = (int *)((*puVar14 & 0xfffffffe) - 0x28);
        }
        else {
          piVar26 = (int *)0x0;
        }
        while (piVar26 != (int *)0x0) {
          do {
            bVar7 = false;
            lVar9 = 0;
            uVar22 = (uint)piVar26[2] >> 7 & 0x7f;
            bVar5 = false;
            if (uVar22 == 100) {
LAB_82aeed08:
              lVar9 = 1;
              bVar5 = true;
            }
            else {
              if ((uVar22 == 0x61) || (bVar21 = false, uVar22 == 99)) {
                bVar21 = true;
              }
              if (bVar21) {
                uVar22 = piVar26[2];
                bVar5 = true;
                iVar11 = fn_82ABDD90(param_1,uVar22 >> 7 & 0x7f,uVar22 >> 0x13 & 7,
                                      uVar22 >> 0xe & 7);
                if (((*(uint *)((int)piVar26 + iVar11 + -0x14) & 0x10000000) == 0) ||
                   (lVar9 = 1, (*(uint *)((int)piVar26 + iVar11 + -0x10) & 1) != 0)) {
                  lVar9 = 0;
                }
              }
              else if (uVar22 == 0x62) {
                for (puVar15 = (uint *)piVar26[1]; puVar15 != (uint *)0x0;
                    puVar15 = (uint *)puVar15[2]) {
                  uVar22 = puVar15[4];
                  if (uVar22 != 0) {
                    if (((*puVar15 & 0x40000000) != 0) ||
                       (bVar21 = false, (*puVar15 & 0xe000000) != 0)) {
                      bVar21 = true;
                    }
                    if (bVar21) {
                      uVar13 = *(uint *)(uVar22 + 8) >> 7 & 0x7f;
                      if (((uVar13 == 0x61) || (uVar13 == 99)) || (bVar21 = false, uVar13 == 100)) {
                        bVar21 = true;
                      }
                      if (!bVar21) goto LAB_82aeed08;
                      uVar13 = *(uint *)(uVar22 + 8);
                      iVar11 = fn_82ABDD90(param_1,uVar13 >> 7 & 0x7f,uVar13 >> 0x13 & 7,
                                            uVar13 >> 0xe & 7);
                      if ((*(uint *)(iVar11 + (uVar22 - 0x14)) & 0x1c0000) != 0) goto LAB_82aeed08;
                    }
                  }
                }
              }
            }
            if (bVar5) {
              bVar7 = true;
              for (puVar15 = (uint *)*piVar26; puVar15 != (uint *)0x0; puVar15 = (uint *)puVar15[1])
              {
                if (((*puVar15 & 0x40000000) != 0) || (bVar5 = false, (*puVar15 & 0xe000000) != 0))
                {
                  bVar5 = true;
                }
                if (bVar5) {
                  uVar22 = puVar15[3];
                  if (((*(uint *)(uVar22 + 0x14) & 0x8000000) == 0) &&
                     (*(uint *)(uVar22 + 0x14) = *(uint *)(uVar22 + 0x14) | 0x8000000,
                     *(uint **)(uVar22 + 0x1c) != puVar24)) {
                    uVar13 = *(uint *)(uVar22 + 8) >> 7 & 0x7f;
                    if ((uVar13 == 0x7d) || (bVar5 = false, uVar13 == 0x7c)) {
                      bVar5 = true;
                    }
                    if (!bVar5) {
                      bVar6 = true;
                    }
                  }
                  if (((lVar9 != 0) && ((*(uint *)(uVar22 + 0x14) & 0x10000000) == 0)) &&
                     (*(uint *)(uVar22 + 0x14) = *(uint *)(uVar22 + 0x14) | 0x10000000,
                     *(uint **)(uVar22 + 0x1c) != puVar24)) {
                    uVar22 = *(uint *)(uVar22 + 8) >> 7 & 0x7f;
                    if ((uVar22 == 0x7d) || (bVar5 = false, uVar22 == 0x7c)) {
                      bVar5 = true;
                    }
                    if (!bVar5) {
                      bVar6 = true;
                    }
                  }
                }
              }
            }
            if ((piVar26[5] & 0x8000000U) != 0) {
              uVar22 = (uint)piVar26[2] >> 7 & 0x7f;
              if ((uVar22 == 0) || (bVar7 = true, 0x66 < uVar22)) {
                bVar7 = false;
              }
              if ((piVar26[5] & 0x10000000U) != 0) {
                if (((uVar22 == 0x61) || (uVar22 == 99)) || (bVar5 = false, uVar22 == 100)) {
                  bVar5 = true;
                }
                if (bVar5) {
                  uVar22 = piVar26[2];
                  iVar11 = fn_82ABDD90(param_1,uVar22 >> 7 & 0x7f,uVar22 >> 0x13 & 7,
                                        uVar22 >> 0xe & 7);
                  puVar15 = (uint *)((int)piVar26 + iVar11 + -0x18);
                  *puVar15 = *puVar15 & 0xfff7ffff;
                }
              }
              for (puVar15 = (uint *)*piVar26; puVar15 != (uint *)0x0; puVar15 = (uint *)puVar15[1])
              {
                if (((*puVar15 & 0x40000000) != 0) || (bVar5 = false, (*puVar15 & 0xe000000) != 0))
                {
                  bVar5 = true;
                }
                if (bVar5) {
                  uVar22 = puVar15[3];
                  if (((*(uint *)(uVar22 + 0x14) & 0x8000000) == 0) &&
                     (*(uint *)(uVar22 + 0x14) = *(uint *)(uVar22 + 0x14) | 0x8000000,
                     *(uint **)(uVar22 + 0x1c) != puVar24)) {
                    uVar13 = *(uint *)(uVar22 + 8) >> 7 & 0x7f;
                    if ((uVar13 == 0x7d) || (bVar5 = false, uVar13 == 0x7c)) {
                      bVar5 = true;
                    }
                    if (!bVar5) {
                      bVar6 = true;
                    }
                  }
                  if ((((piVar26[5] & 0x10000000U) != 0) &&
                      ((*(uint *)(uVar22 + 0x14) & 0x10000000) == 0)) &&
                     (*(uint *)(uVar22 + 0x14) = *(uint *)(uVar22 + 0x14) | 0x10000000,
                     *(uint **)(uVar22 + 0x1c) != puVar24)) {
                    uVar22 = *(uint *)(uVar22 + 8) >> 7 & 0x7f;
                    if ((uVar22 == 0x7d) || (bVar5 = false, uVar22 == 0x7c)) {
                      bVar5 = true;
                    }
                    if (!bVar5) {
                      bVar6 = true;
                    }
                  }
                }
              }
            }
            if (bVar7) {
              if ((*(uint *)(uVar1 + 0x48) >> 0x16 & 1) == 0) {
                for (iVar11 = *(int *)(uVar1 + 0x30); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x34))
                {
                  if ((*(uint *)(iVar11 + 0x24) & 1) == 0) {
                    uVar22 = *(uint *)(iVar11 + 0x20) & 0xfffffffe;
                    if (uVar22 - 0x28 != 0) {
                      uVar13 = *(uint *)(uVar22 - 0x20) >> 7 & 0x7f;
                      if (((uVar13 == 0x56) || (uVar13 == 0x57)) ||
                         ((uVar13 == 0x59 ||
                          (((uVar13 == 0x5a || (uVar13 == 0x54)) || (bVar5 = false, uVar13 == 0x55))
                          )))) {
                        bVar5 = true;
                      }
                      if (bVar5) {
                        iVar12 = fn_82AD3B30(param_1,iVar11,uVar22 - 0x28,auStack_b0,
                                                   &iStack_a8,&iStack_a4);
                        if (iVar12 == 3) {
                          uVar10 = (ulonglong)*(uint *)(iStack_a8 + 0x30) & 0x7ffff;
                          if ((*(uint *)(((int)(uVar10 >> 5) + 1) * 4 + *(int *)(uVar1 + 0x24)) &
                              1 << ((uint)uVar10 & 0x1f)) == 0) {
LAB_82aef158:
                            uVar13 = *(uint *)(uVar22 - 0x14);
                            uVar23 = uVar13 | 0x8000000;
                            *(uint *)(uVar22 - 0x14) = uVar23;
                            *(uint *)(uVar22 - 0x14) =
                                 uVar13 & 0xefffffff | 0x8000000 |
                                 ((uint)(lVar9 << 0x1c) | piVar26[5] | uVar23) & 0x10000000;
                          }
                        }
                        else if ((iVar12 == 4) &&
                                ((uVar10 = (ulonglong)*(uint *)(iStack_a8 + 0x30) & 0x7ffff,
                                 (1 << ((uint)uVar10 & 0x1f) &
                                 *(uint *)(((int)(uVar10 >> 5) + 1) * 4 + *(int *)(uVar1 + 0x24)))
                                 != 0 || (uVar10 = (ulonglong)*(uint *)(iStack_a4 + 0x30) & 0x7ffff,
                                         (1 << ((uint)uVar10 & 0x1f) &
                                         *(uint *)(((int)(uVar10 >> 5) + 1) * 4 +
                                                  *(int *)(uVar1 + 0x24))) != 0))))
                        goto LAB_82aef158;
                      }
                    }
                  }
                }
              }
              else {
                iVar11 = *(int *)(uVar1 + 0x6c);
                if ((*(uint *)(iVar11 + 0x30) >> 0x16 & 1) != 0) {
LAB_82aeef98:
                  do {
                    iVar11 = *(int *)(iVar11 + 0x50);
                    if (iVar11 != 0) {
                      if ((*(uint *)(iVar11 + 0x30) & 0x400000) != 0) goto LAB_82aeef98;
                    }
                  } while ((*(uint *)(iVar11 + 0x30) >> 0x16 & 1) != 0);
                  *(int *)(uVar1 + 0x6c) = iVar11;
                }
                if (((*(uint *)(*(int *)(uVar1 + 0x6c) + 0x1c) & 1) != 0) ||
                   (iVar11 = (*(uint *)(*(int *)(uVar1 + 0x6c) + 0x18) & 0xfffffffe) - 0x28,
                   iVar11 == 0)) {
LAB_82aef33c:
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                do {
                  cVar18 = fn_82ABDA10(iVar11);
                  if (cVar18 != '\0') break;
                  if ((*(uint *)(iVar11 + 0x24) & 1) != 0) goto LAB_82aef33c;
                  iVar11 = (*(uint *)(iVar11 + 0x24) & 0xfffffffe) - 0x28;
                } while (iVar11 != 0);
                if (iVar11 == 0) goto LAB_82aef33c;
                uVar22 = *(uint *)(iVar11 + 0x14);
                uVar13 = uVar22 | 0x8000000;
                *(uint *)(iVar11 + 0x14) = uVar13;
                *(uint *)(iVar11 + 0x14) =
                     uVar22 & 0xefffffff | 0x8000000 |
                     ((uint)(lVar9 << 0x1c) | piVar26[5] | uVar13) & 0x10000000;
              }
            }
          } while (((piVar26[9] & 1U) == 0) &&
                  (piVar26 = (int *)((piVar26[9] & 0xfffffffeU) - 0x28), piVar26 != (int *)0x0));
          puVar15 = (uint *)(uVar1 + 0xc);
          if (puVar14 == puVar15) break;
          if ((puVar14 == (uint *)(uVar1 + 0x14)) || ((*(uint *)(uVar1 + 0x18) & 1) != 0)) {
            uVar22 = *(uint *)(uVar1 + 0x10);
          }
          else {
            uVar22 = *(uint *)(uVar1 + 0x18);
            puVar15 = (uint *)(uVar1 + 0x14);
          }
          if ((uVar22 & 1) != 0) break;
          puVar14 = puVar15;
          piVar26 = (int *)((*puVar15 & 0xfffffffe) - 0x28);
        }
        uVar1 = *puVar24;
      } while ((uVar1 & 1) == 0);
    }
  } while (bVar6);
  for (uVar1 = param_1[1]; ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
    for (uVar22 = *(uint *)(uVar1 + 0x1c); ((uVar22 & 1) == 0 && (uVar22 != 0));
        uVar22 = *(uint *)((uVar22 & 0xfffffffe) + 0x28)) {
      if ((*(uint *)(uVar22 + 0x14) & 0x8000000) != 0) {
        uVar13 = *(uint *)(uVar22 + 8) >> 7 & 0x7f;
        if ((uVar13 < 0x60) || (bVar6 = true, 0x66 < uVar13)) {
          bVar6 = false;
        }
        if (bVar6) {
          uVar13 = 0;
          piVar26 = (int *)(uVar22 + 4);
          while (iVar11 = *piVar26, iVar11 != 0) {
            iVar12 = *(int *)(iVar11 + 0x10);
            if ((iVar12 != 0) && (cVar18 = fn_82ABE190(iVar11), cVar18 != '\0')) {
              uVar23 = *(uint *)(iVar12 + 8) >> 7 & 0x7f;
              if ((uVar23 < 0x60) || (bVar6 = true, 0x66 < uVar23)) {
                bVar6 = false;
              }
              if (bVar6) {
                if (uVar13 == 0) {
                  for (puVar24 = *(uint **)(uVar22 + 4); puVar24 != (uint *)0x0;
                      puVar24 = (uint *)puVar24[2]) {
                    uVar13 = puVar24[4];
                    if (uVar13 != 0) {
                      if (((*puVar24 & 0x40000000) != 0) ||
                         (bVar6 = true, (*puVar24 & 0xe000000) != 0)) {
                        bVar6 = false;
                      }
                      if ((bVar6) && ((*(uint *)(uVar13 + 8) & 0x3f80) == 0x3d80))
                      goto LAB_82aef3b8;
                    }
                  }
                  uVar13 = fn_82B841E8(param_1,uVar1,0,0x7b,0,0);
                  uVar23 = uVar22 & 0xfffffffe;
                  uVar8 = uVar13 & 0xfffffffe;
                  *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) | 0x3000000;
                  *(undefined4 *)(uVar8 + 0x28) = *(undefined4 *)(uVar23 + 0x28);
                  *(uint *)((*(uint *)(uVar23 + 0x28) & 0xfffffffe) + 0x24) = uVar8 + 0x28;
                  *(uint *)(uVar8 + 0x24) = uVar23 + 0x28;
                  *(uint *)(uVar23 + 0x28) = uVar8;
                  fn_82AD1A40(uVar13,uVar22,param_1);
                }
LAB_82aef3b8:
                fn_82AD1A40(iVar12,uVar13,param_1);
              }
            }
            if (*piVar26 == iVar11) {
              piVar26 = (int *)(iVar11 + 8);
            }
          }
        }
      }
    }
  }
  if ((param_1[1] & 1) == 0) {
    uVar1 = *param_1;
    do {
      uVar1 = uVar1 & 0xfffffffe;
      if ((uint *)(uVar1 - 4) == (uint *)0x0) break;
      for (piVar26 = *(int **)(uVar1 + 0x10); (((uint)piVar26 & 1) == 0 && (piVar26 != (int *)0x0));
          piVar26 = *(int **)(((uint)piVar26 & 0xfffffffe) + 0x28)) {
        if ((piVar26[2] & 0x3f80U) == 0x3800) {
          if ((*piVar26 == 0) || (bVar6 = true, *(int *)(*piVar26 + 4) == 0)) {
            bVar6 = false;
          }
          if (bVar6) {
            for (iVar11 = *(int *)(uVar1 + 4); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0xc)) {
              iVar12 = *(int *)(iVar11 + 4);
              lVar9 = fn_82B41D68(param_1,piVar26,iVar12,0,1);
              if ((lVar9 != 0) && ((*(uint *)(iVar12 + 0x4c) >> 0x16 & 1) != 0)) {
                uVar22 = *(uint *)(iVar12 + 0x1c);
                if (((uVar22 & 1) == 0) && (uVar22 != 0)) {
                  while (cVar18 = fn_82AC6740(uVar22), cVar18 == '\0') {
                    uVar22 = *(uint *)((uVar22 & 0xfffffffe) + 0x28);
                    if (((uVar22 & 1) != 0) || (uVar22 == 0)) goto LAB_82aef4fc;
                  }
                  if (uVar22 != 0) goto LAB_82aef9b8;
                }
LAB_82aef4fc:
                fn_82B82D28(lVar9,0,&iStack_a0,&iStack_98,&iStack_90,0,0,0);
                for (iVar2 = *(int *)(uVar1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
                  iVar3 = *(int *)(iVar2 + 4);
                  if ((((iVar3 != iVar12) &&
                       (uVar10 = (ulonglong)*(uint *)(iVar3 + 0x30) & 0x7ffff,
                       (*(uint *)(((int)(uVar10 >> 5) + 1) * 4 + *(int *)(uVar1 + 0x24)) &
                       1 << ((uint)uVar10 & 0x1f)) == 0)) &&
                      (uVar10 = fn_82B41D68(param_1,piVar26,iVar3,0,1),
                      (uVar10 & 0xffffffff) != 0)) &&
                     (fn_82B82D28(uVar10,0,&uStack_ac,auStack_84,auStack_88,0,0,0),
                     *(int *)(uStack_ac + 0x1c) == iVar3)) {
                    puVar14 = (uint *)fn_82ABE250(param_1,8,0x1c);
                    puVar14[1] = (uint)puVar14 | 1;
                    *puVar14 = (uint)(puVar14 + 1) | 1;
                    puVar15 = (uint *)fn_82ABE250(param_1,8,0x26);
                    puVar24 = puVar15 + 1;
                    puVar15[1] = (uint)puVar15 | 1;
                    *puVar15 = (uint)puVar24 | 1;
                    piVar25 = *(int **)(iVar3 + 0x14);
                    if ((((uint)piVar25 & 1) == 0) && (piVar25 != (int *)0x0)) {
                      do {
                        if ((piVar25[2] & 0x3f80U) == 0x3800) {
                          iVar3 = *piVar25;
                          if ((iVar3 == 0) || (bVar6 = true, *(int *)(iVar3 + 4) == 0)) {
                            bVar6 = false;
                          }
                          if (!bVar6) {
                            if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                              fn_82AA66A8(param_1,0x12c0);
                            }
                            fn_82B82D28(iVar3,0,&iStack_9c,&iStack_94,&iStack_8c,0,0,0);
                            if ((((iStack_9c == iStack_a0) && (iStack_94 == iStack_98)) &&
                                (iStack_8c == iStack_90)) &&
                               (cVar18 = fn_82B8B280(uStack_ac,piVar25,0,1,param_1),
                               cVar18 != '\0')) {
                              iVar27 = 0;
                              for (iVar3 = piVar25[1]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
                                iVar17 = *(int *)(iVar3 + 0x10);
                                iVar16 = iVar27;
                                if (((iVar17 != 0) &&
                                    (iVar16 = iVar17, (*(uint *)(iVar17 + 8) & 0x3f80) != 0x3700))
                                   && (cVar18 = fn_82ACAFD8(iVar17), iVar16 = iVar27,
                                      cVar18 != '\0')) {
                                  if ((*puVar24 & 1) == 0) {
                                    uVar22 = *puVar15 & 0xfffffffe;
                                    iVar16 = uVar22 - 4;
                                    if ((iVar16 == 0) ||
                                       (*(uint *)(uVar22 + 8) < *(int *)(uVar22 + 4) + 1U))
                                    goto LAB_82aef740;
                                  }
                                  else {
LAB_82aef740:
                                    iVar16 = fn_82AD6090(puVar15,1);
                                  }
                                  iVar4 = *(int *)(iVar16 + 8);
                                  *(int *)(iVar16 + 8) = iVar4 + 1;
                                  *(int *)((iVar4 + 4) * 4 + iVar16) = iVar17;
                                  iVar16 = iVar27;
                                }
                                iVar27 = iVar16;
                              }
                              if (iVar27 != 0) {
                                for (iVar3 = *(int *)(iVar27 + 4); iVar3 != 0;
                                    iVar3 = *(int *)(iVar3 + 8)) {
                                  iVar27 = *(int *)(iVar3 + 0x10);
                                  if ((iVar27 != 0) &&
                                     (cVar18 = fn_82ACAFD8(iVar27), cVar18 != '\0')) {
                                    if ((*puVar24 & 1) == 0) {
                                      uVar22 = *puVar15 & 0xfffffffe;
                                      iVar17 = uVar22 - 4;
                                      if ((iVar17 == 0) ||
                                         (*(uint *)(uVar22 + 8) < *(int *)(uVar22 + 4) + 1U))
                                      goto LAB_82aef7cc;
                                    }
                                    else {
LAB_82aef7cc:
                                      iVar17 = fn_82AD6090(puVar15,1);
                                    }
                                    iVar16 = *(int *)(iVar17 + 8);
                                    *(int *)(iVar17 + 8) = iVar16 + 1;
                                    *(int *)((iVar16 + 4) * 4 + iVar17) = iVar27;
                                  }
                                }
                              }
                              while (((*puVar24 & 1) == 0 && (*puVar24 != 0))) {
                                puVar20 = (uint *)(*puVar15 & 0xfffffffe);
                                puVar19 = puVar20 + -1;
                                uVar13 = puVar20[1] - 1;
                                uVar22 = puVar19[puVar20[1] + 3];
                                puVar20[1] = uVar13;
                                if (uVar13 == 0) {
                                  *(uint *)(*puVar20 & 0xfffffffe) = *puVar19;
                                  *(uint *)(*puVar19 & 0xfffffffe) = *puVar20;
                                  fn_82AA6648(puVar15,puVar19,
                                               ((ulonglong)puVar20[2] + 4 & 0x3fffffff) << 2);
                                }
                                if (uVar22 != uStack_ac) {
                                  cVar18 = fn_82B8BCB0(param_1,uVar22,uStack_ac,0);
                                  if (cVar18 == '\0') break;
                                  fn_82B8D488(param_1,uVar22,uStack_ac,0);
                                  fn_82AD1A40(uStack_ac,uVar22,param_1);
                                }
                              }
                              if (((*puVar24 & 1) == 0) && (*puVar24 != 0)) break;
                            }
                          }
                        }
                        piVar25 = *(int **)(((uint)piVar25 & 0xfffffffe) + 0x28);
                        if ((((uint)piVar25 & 1) != 0) || (piVar25 == (int *)0x0)) break;
                      } while( true );
                    }
                    if (((*puVar24 & 1) == 0) && (*puVar24 != 0)) {
                      fn_82B4B048(puVar15);
                      while ((uVar22 = puVar14[1], (uVar22 & 1) == 0 && (uVar22 != 0))) {
                        puVar24 = (uint *)(*puVar14 & 0xfffffffe);
                        puVar20 = puVar24 + -1;
                        uVar13 = puVar24[1] - 1;
                        uVar22 = puVar20[puVar24[1] + 3];
                        puVar24[1] = uVar13;
                        if (uVar13 == 0) {
                          *(uint *)(*puVar24 & 0xfffffffe) = *puVar20;
                          *(uint *)(*puVar20 & 0xfffffffe) = *puVar24;
                          fn_82AA6648(puVar14,puVar20,((ulonglong)puVar24[2] + 4 & 0x3fffffff) << 2
                                      );
                        }
                        fn_82AD20C0(uStack_ac,uVar22,param_1);
                      }
                    }
                    *puVar15 = param_1[0xf4];
                    param_1[0xf4] = (uint)puVar15;
                    fn_82B4B048(puVar14);
                    *puVar14 = param_1[0xf4];
                    param_1[0xf4] = (uint)puVar14;
                  }
                }
              }
LAB_82aef9b8:;}
          }
        }
      }
      uVar1 = *(uint *)(uVar1 - 4);
    } while ((uVar1 & 1) == 0);
  }
  uVar22 = -(uint)((param_1[1] & 1) == 0) & param_1[1];
  fn_82AEDBE8(param_1,uVar22);
  uVar1 = uVar22;
  while ((uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4), (uVar1 & 1) == 0 && (uVar1 != 0))) {
    fn_82AEDBE8(param_1,uVar1);
    fn_82AE9F18(param_1,uVar1);
  }
  fn_82AE9F18(param_1,uVar22);
  param_1[10] = param_1[10] | 0x80000;
  return;
}

