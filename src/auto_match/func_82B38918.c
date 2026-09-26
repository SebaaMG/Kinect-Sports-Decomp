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
extern unsigned int *auStack_94;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82ACA920();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82AD35E8();
extern int fn_82AD6090();
extern int fn_82AF77E0();
extern int fn_82B111F0();
extern int fn_82B17520();
extern int fn_82B196F0();
extern int fn_82B1A4E0();
extern int fn_82B1EB50();
extern int fn_82B23950();
extern int fn_82B23B90();
extern int fn_82B330F8();
extern int fn_82B44B88();
extern int fn_82B841E8();
extern int fn_82B8A3A0();
extern int fn_82B8AC10();
extern int fn_82B8D5B0();
extern int fn_82B8F170();
extern int fn_82B8F1B0();
extern int fn_82B8F328();
extern unsigned int iStack_9c;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;


void fn_82B38918(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar6;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 uVar7;
  int *piVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  int *piVar24;
  uint uVar25;
  double dVar26;
  uint uStack_a0;
  int iStack_9c;
  uint uStack_98;
  uint auStack_94 [37];
  
  uVar23 = -(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4);
  *(uint *)(uVar23 + 0x30) = *(uint *)(uVar23 + 0x30) | 0x10000000;
  fn_82B23950();
  fn_82B330F8(param_1,1);
  if ((*(uint *)(param_1 + 0x28) & 0x400) != 0) {
    fn_82B1EB50(param_1);
  }
  if ((*(uint *)(param_1 + 0x2c) & 0x10) == 0) goto LAB_82b38d74;
  puVar8 = (uint *)fn_82ABE250(param_1,8,0x1c);
  puVar22 = puVar8 + 1;
  puVar8[1] = (uint)puVar8 | 1;
  *puVar8 = (uint)puVar22 | 1;
  puVar9 = (uint *)fn_82ABE250(param_1,8,6);
  puVar9[1] = (uint)puVar9 | 1;
  *puVar9 = (uint)(puVar9 + 1) | 1;
  iVar16 = 0;
  for (uVar19 = *(uint *)(param_1 + 4); ((uVar19 & 1) == 0 && (uVar19 != 0));
      uVar19 = *(uint *)((uVar19 & 0xfffffffe) + 4)) {
    if ((*(uint *)(*(int *)(uVar19 + 0x28) + 4) & 1) == 0) {
      for (piVar24 = *(int **)(uVar19 + 0x24); (((uint)piVar24 & 1) == 0 && (piVar24 != (int *)0x0))
          ; piVar24 = *(int **)(((uint)piVar24 & 0xfffffffe) + 0x28)) {
        for (puVar18 = (uint *)*piVar24; puVar18 != (uint *)0x0; puVar18 = (uint *)puVar18[1]) {
          if (((*puVar18 & 0xe000000) == 0) ||
             (bVar4 = true, (*(uint *)(puVar18[3] + 8) >> 5 & 1) == 0)) {
            bVar4 = false;
          }
          if (bVar4) {
            if ((*puVar18 & 0x1fe0000) == 0x7c0000) {
              fn_82B8D5B0(param_1,puVar18,1);
              if ((puVar9[1] & 1) == 0) {
                uVar20 = *puVar9 & 0xfffffffe;
                iVar10 = uVar20 - 4;
                if ((iVar10 == 0) || (*(uint *)(uVar20 + 8) < *(int *)(uVar20 + 4) + 1U))
                goto LAB_82b38aa0;
              }
              else {
LAB_82b38aa0:
                iVar10 = fn_82AD6090(puVar9,1);
              }
              iVar11 = *(int *)(iVar10 + 8);
              *(int *)(iVar10 + 8) = iVar11 + 1;
              *(uint *)((iVar11 + 4) * 4 + iVar10) = uVar19;
              if ((*puVar22 & 1) == 0) {
                uVar20 = *puVar8 & 0xfffffffe;
                iVar10 = uVar20 - 4;
                if ((iVar10 == 0) || (*(uint *)(uVar20 + 8) < *(int *)(uVar20 + 4) + 1U))
                goto LAB_82b38af4;
              }
              else {
LAB_82b38af4:
                iVar10 = fn_82AD6090(puVar8,1);
              }
              iVar11 = *(int *)(iVar10 + 8);
              *(int *)(iVar10 + 8) = iVar11 + 1;
              *(uint **)((iVar11 + 4) * 4 + iVar10) = puVar18;
            }
            else {
              iVar16 = iVar16 + 1;
            }
          }
        }
      }
    }
  }
  if (((*puVar22 & 1) == 0) && (*puVar22 != 0)) {
    if (iVar16 == 0) {
      uVar19 = *(uint *)(param_1 + 0x2c) | 0x20;
      goto LAB_82b38b74;
    }
    for (uVar19 = *(uint *)(param_1 + 4); ((uVar19 & 1) == 0 && (uVar19 != 0));
        uVar19 = *(uint *)((uVar19 & 0xfffffffe) + 4)) {
      for (uVar20 = *(uint *)(uVar19 + 0x24); ((uVar20 & 1) == 0 && (uVar20 != 0));
          uVar20 = *(uint *)((uVar20 & 0xfffffffe) + 0x28)) {
        if ((*(uint *)(uVar20 + 8) >> 0x1a & 1) != 0) {
          uVar25 = *(uint *)(uVar20 + 8) >> 7 & 0x7f;
          if ((uVar25 == 0x56) || (bVar4 = false, uVar25 == 0x57)) {
            bVar4 = true;
          }
          if (bVar4) {
            fn_82B17520(param_1,uVar20);
          }
        }
      }
    }
  }
  else {
    uVar19 = *(int *)(param_1 + 0x2c) - 0x10;
LAB_82b38b74:
    *(uint *)(param_1 + 0x2c) = uVar19;
  }
  for (uVar19 = *(uint *)(param_1 + 4); ((uVar19 & 1) == 0 && (uVar19 != 0));
      uVar19 = *(uint *)((uVar19 & 0xfffffffe) + 4)) {
    if ((*(uint *)(uVar19 + 0x14) & 1) == 0) {
      uVar20 = *(uint *)(uVar19 + 0x14);
      iVar16 = uVar19 + 0x10;
    }
    else if ((*(uint *)(uVar19 + 0x1c) & 1) == 0) {
      uVar20 = *(uint *)(uVar19 + 0x1c);
      iVar16 = uVar19 + 0x18;
    }
    else {
      uVar20 = *(uint *)(uVar19 + 0x24);
      iVar16 = uVar19 + 0x20;
    }
    uVar20 = -(uint)((uVar20 & 1) == 0) & uVar20;
    do {
      if (uVar20 == 0) break;
      do {
        if ((*(uint *)(uVar20 + 8) >> 0x1a & 1) != 0) {
          *(uint *)(uVar20 + 8) = *(uint *)(uVar20 + 8) & 0xfbffffff;
        }
        uVar20 = *(uint *)((uVar20 & 0xfffffffe) + 0x28);
      } while (((uVar20 & 1) == 0) && (uVar20 != 0));
      iVar10 = uVar19 + 0x20;
      if (iVar16 == iVar10) break;
      if ((iVar16 == uVar19 + 0x18) || ((*(uint *)(uVar19 + 0x1c) & 1) != 0)) {
        uVar20 = *(uint *)(uVar19 + 0x24);
      }
      else {
        uVar20 = *(uint *)(uVar19 + 0x1c);
        iVar10 = uVar19 + 0x18;
      }
      iVar16 = iVar10;
    } while ((uVar20 & 1) == 0);
  }
  uVar19 = 0;
  if (*(int *)(param_1 + 0x150) != 0) {
    puVar22 = (uint *)(param_1 + 0x80);
    do {
      if ((*puVar22 & 0xfffffff0) == 0x3e0) {
        iVar16 = uVar19 * 0xc + param_1;
        *(uint *)(iVar16 + 0x7c) = *(uint *)(iVar16 + 0x7c) & 0xfffbffff;
        break;
      }
      uVar19 = uVar19 + 1;
      puVar22 = puVar22 + 3;
    } while (uVar19 < *(uint *)(param_1 + 0x150));
  }
LAB_82b38d74:
  dVar26 = (double)lbl_821AAD20;
LAB_82b38d7c:
  uVar19 = *(uint *)(param_1 + 4);
  do {
    uVar19 = -(uint)((uVar19 & 1) == 0) & uVar19;
    if (uVar19 == 0) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -0x8000;
      if ((*(uint *)(param_1 + 0x2c) & 0x10) == 0) {
        *(uint *)(uVar23 + 0x30) = *(uint *)(uVar23 + 0x30) & 0xefffffff;
      }
      return;
    }
    if ((*(uint *)(*(int *)(uVar19 + 0x28) + 4) & 1) == 0) {
      iVar16 = *(int *)(uVar19 + 8);
      piVar24 = (int *)(uVar19 + 8);
      if ((iVar16 == 0) || (bVar4 = true, *(int *)(iVar16 + 0xc) == 0)) {
        bVar4 = false;
      }
      if ((((bVar4) || (iVar16 == 0)) || (*(int *)(iVar16 + 4) == 0)) ||
         ((*(uint *)(*(int *)(iVar16 + 4) + 0x44) & 0x40000000) == 0)) {
        piVar1 = *(int **)(uVar19 + 0x24);
joined_r0x82b38dfc:
        if ((((uint)piVar1 & 1) != 0) || (piVar1 == (int *)0x0)) goto LAB_82b38ed0;
        puVar22 = (uint *)*piVar1;
LAB_82b38e10:
        if (puVar22 == (uint *)0x0) goto LAB_82b38eb4;
        if (((*puVar22 & 0xe000000) == 0) ||
           (bVar4 = true, (*(uint *)(puVar22[3] + 8) >> 5 & 1) == 0)) {
          bVar4 = false;
        }
        if ((bVar4) && (puVar8 = (uint *)puVar22[3], (puVar8[5] & 2) == 0)) {
          uVar20 = 0;
          if (*(uint *)(param_1 + 0x150) != 0) {
            puVar9 = (uint *)(param_1 + 0x80);
            do {
              if (*puVar9 >> 4 == (*puVar22 >> 0x11 & 0xff)) break;
              uVar20 = uVar20 + 1;
              puVar9 = puVar9 + 3;
            } while (uVar20 < *(uint *)(param_1 + 0x150));
          }
          if ((uVar20 != *(uint *)(param_1 + 0x150)) &&
             ((*(uint *)(uVar20 * 0xc + param_1 + 0x7c) & 0x40000) != 0)) break;
        }
        puVar22 = (uint *)puVar22[1];
        goto LAB_82b38e10;
      }
    }
LAB_82b38ed0:
    uVar19 = *(uint *)((uVar19 & 0xfffffffe) + 4);
  } while( true );
  fn_82B8D5B0(param_1,puVar22,1);
  for (uVar20 = *(uint *)(param_1 + 4); ((uVar20 & 1) == 0 && (uVar20 != 0));
      uVar20 = *(uint *)((uVar20 & 0xfffffffe) + 4)) {
    for (uVar25 = *(uint *)(uVar20 + 0x24); ((uVar25 & 1) == 0 && (uVar25 != 0));
        uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 0x28)) {
      if ((*(uint *)(uVar25 + 8) >> 0x1a & 1) != 0) {
        uVar2 = *(uint *)(uVar25 + 8) >> 7 & 0x7f;
        if ((uVar2 == 0x56) || (bVar4 = false, uVar2 == 0x57)) {
          bVar4 = true;
        }
        if (bVar4) {
          fn_82B17520(param_1,uVar25);
        }
      }
    }
  }
  uVar20 = *(uint *)(param_1 + 0x5c);
  auStack_94[0] = (uint)&uStack_98 | 1;
  uStack_98 = (uint)auStack_94 | 1;
  fn_82B23B90(param_1,uVar19,1,0,&uStack_98,&iStack_9c,&uStack_a0);
  if ((*(uint *)(uVar19 & 0xfffffffe) & 1) == 0) {
    lVar6 = ((ulonglong)*(uint *)(uVar19 & 0xfffffffe) & 0xfffffffe) - 4;
  }
  else {
    lVar6 = 0;
  }
  fn_82B1A4E0(lVar6,&uStack_98);
  iVar16 = iStack_9c;
  uVar25 = uStack_a0;
  if ((*(uint *)(uVar19 + 0x30) >> 0x15 & 1) != 0) {
    *(uint *)(uVar19 + 0x30) = *(uint *)(uVar19 + 0x30) & 0xffdfffff;
    *(uint *)(uStack_a0 + 0x30) = *(uint *)(uStack_a0 + 0x30) | 0x200000;
  }
  piVar15 = (int *)0x0;
  piVar1 = *(int **)(uVar19 + 0x14);
joined_r0x82b3902c:
  piVar5 = piVar1;
  if (((uint)piVar5 & 1) == 0) {
    do {
      if (piVar5 == (int *)0x0) break;
      if ((((piVar5[2] & 0x3f80U) == 0x3800) && (iVar10 = *piVar5, iVar10 != 0)) &&
         ((*(int *)(iVar10 + 4) != 0 ||
          ((iVar10 = *(int *)(*(int *)(iVar10 + 0xc) + 0x1c), *(int *)(iVar10 + 0x2c) != iStack_9c
           && ((*(uint *)(iVar10 + 0x30) & 0x7ffff) < uVar20)))))) {
        uVar2 = (uint)piVar5 & 0xfffffffe;
        puVar9 = (uint *)(uVar2 + 0x24);
        *(uint *)((*(uint *)(uVar2 + 0x28) & 0xfffffffe) + 0x24) = *puVar9;
        *(undefined4 *)(*puVar9 & 0xfffffffe) = *(undefined4 *)(uVar2 + 0x28);
        *puVar9 = *(uint *)(uStack_a0 + 0x10);
        *(uint *)(*(uint *)(uStack_a0 + 0x10) & 0xfffffffe) = uVar2;
        *(uint *)(uVar2 + 0x28) = uStack_a0 - 0x14 | 1;
        *(uint *)(uStack_a0 + 0x10) = uVar2 + 0x28;
        piVar5[7] = uStack_a0;
        if (((uint)piVar5[2] >> 0x1a & 1) != 0) {
          piVar5[2] = piVar5[2] & 0xfbffffff;
          *(uint *)(piVar5[8] + 8) = *(uint *)(piVar5[8] + 8) & 0xfbffffff;
        }
      }
      if (piVar15 == (int *)0x0) {
        piVar1 = *(int **)(uVar19 + 0x14);
        if (piVar5 != (int *)(-(uint)(((uint)piVar1 & 1) == 0) & (uint)piVar1))
        goto joined_r0x82b3902c;
LAB_82b39154:
        piVar1 = *(int **)(((uint)piVar5 & 0xfffffffe) + 0x28);
        piVar15 = piVar5;
      }
      else {
        piVar1 = *(int **)(((uint)piVar15 & 0xfffffffe) + 0x28);
        if (piVar5 == (int *)(-(uint)(((uint)piVar1 & 1) == 0) & (uint)piVar1)) goto LAB_82b39154;
      }
      piVar5 = piVar1;
      if (((uint)piVar5 & 1) != 0) break;
    } while( true );
  }
  while (iVar10 = *piVar24, iVar10 != 0) {
    iVar11 = *(int *)(iVar10 + 4);
    fn_82B8F170(iVar11,iVar10,uVar25);
    if (((*(uint *)(iVar11 + 0x24) & 1) == 0) &&
       (uVar2 = *(uint *)(iVar11 + 0x20) & 0xfffffffe, uVar2 != 0x28)) {
      uVar13 = *(uint *)(uVar2 - 0x20) >> 7 & 0x7f;
      if (((uVar13 == 0x56) || (((uVar13 == 0x57 || (uVar13 == 0x59)) || (uVar13 == 0x5a)))) ||
         ((uVar13 == 0x54 || (bVar4 = false, uVar13 == 0x55)))) {
        bVar4 = true;
      }
      if (bVar4) {
        uVar13 = *(uint *)(uVar2 - 0x20);
        iVar11 = fn_82ABDD90(param_1,uVar13 >> 7 & 0x7f,uVar13 >> 0x13 & 7,uVar13 >> 0xe & 7);
        puVar9 = (uint *)(iVar11 + (uVar2 - 0x38));
        if (*puVar9 == uVar19) {
          *puVar9 = uVar25;
        }
      }
    }
    if (*piVar24 == iVar10) {
      piVar24 = (int *)(iVar10 + 0xc);
    }
  }
  for (uVar2 = *(uint *)(param_1 + 4); ((uVar2 & 1) == 0 && (uVar2 != 0));
      uVar2 = *(uint *)((uVar2 & 0xfffffffe) + 4)) {
    if (*(int *)(uVar2 + 0x2c) == iVar16) {
      iVar10 = *(int *)(uVar2 + 0x50);
      puVar17 = (uint *)(iVar10 + 0xc);
      puVar9 = *(uint **)(iVar10 + 0xc);
      puVar18 = puVar17;
      while (puVar9 != (uint *)0x0) {
        uVar13 = *puVar9;
        if ((*(uint *)(uVar13 + 0x30) & 0x7ffff) < uVar20) {
          if ((*(uint *)(iVar10 + 0x24) & 1) == 0) {
            iVar11 = (*(uint *)(iVar10 + 0x20) & 0xfffffffe) - 0x28;
          }
          else {
            iVar11 = 0;
          }
          if ((*(uint *)(uVar13 + 0x30) >> 0x13 & 1) == 0) {
            for (puVar21 = (uint *)*puVar17; puVar21 != (uint *)0x0; puVar21 = (uint *)puVar21[2]) {
              if (uVar19 == *puVar21) {
                bVar4 = true;
                goto LAB_82b392ec;
              }
            }
            bVar4 = false;
LAB_82b392ec:
            if (bVar4) {
              fn_82B8F1B0(iVar10,uVar13,param_1);
              if (iVar11 != 0) {
                uVar13 = *(uint *)(iVar11 + 8) >> 7 & 0x7f;
                if (((uVar13 == 0x56) || (uVar13 == 0x57)) ||
                   ((uVar13 == 0x59 ||
                    (((uVar13 == 0x5a || (uVar13 == 0x54)) || (bVar4 = false, uVar13 == 0x55)))))) {
                  bVar4 = true;
                }
                if (bVar4) {
                  if (uVar13 != 0x5a) {
                    /* WARNING: Subroutine does not return */
                    fn_82AA66A8(param_1,0xdac,0xffffffff820d7f90);
                  }
                  fn_82B8AC10(param_1,iVar11,0,1);
                }
              }
            }
            else {
              fn_82B8F170(iVar10,puVar9,uVar19);
              if (iVar11 != 0) {
                uVar3 = *(uint *)(iVar11 + 8) >> 7 & 0x7f;
                if ((((uVar3 == 0x56) || (uVar3 == 0x57)) || (uVar3 == 0x59)) ||
                   (((uVar3 == 0x5a || (uVar3 == 0x54)) || (bVar4 = false, uVar3 == 0x55)))) {
                  bVar4 = true;
                }
                if (bVar4) {
                  uVar3 = *(uint *)(iVar11 + 8);
                  iVar12 = fn_82ABDD90(param_1,uVar3 >> 7 & 0x7f,uVar3 >> 0x13 & 7,uVar3 >> 0xe & 7
                                       );
                  puVar21 = (uint *)(iVar12 + iVar11 + -0x10);
                  if (*puVar21 == uVar13) {
                    *puVar21 = uVar19;
                  }
                }
              }
            }
          }
        }
        if ((uint *)*puVar18 == puVar9) {
          puVar18 = puVar9 + 2;
        }
        puVar9 = (uint *)*puVar18;
      }
      if (((int *)*puVar17 == (int *)0x0) || (*(int *)*puVar17 == 0)) {
        fn_82B8F328(iVar10,uVar19,param_1);
      }
    }
  }
  uVar20 = puVar8[8];
  fn_82B44B88(param_1);
  fn_82B196F0(param_1,iVar16,uVar25);
  puVar8[2] = puVar8[2] & 0xffffffdf;
  *(uint *)(uVar20 + 8) = *(uint *)(uVar20 + 8) & 0xffffffdf;
  puVar9 = (uint *)fn_82ACA920(param_1,puVar22,uVar20);
  *puVar9 = *puVar9 & 0xbe001fff;
  uVar13 = fn_82B841E8(param_1,puVar8[7],0,0x68,1,*puVar22 >> 0x19 & 7);
  uVar2 = uVar13 & 0xfffffffe;
  puVar22 = (uint *)(((uint)puVar8 & 0xfffffffe) + 0x24);
  *(uint *)(uVar2 + 0x24) = *puVar22;
  *(uint *)(*puVar22 & 0xfffffffe) = uVar2;
  *(uint *)(uVar2 + 0x28) = (uint)puVar8 & 0xfffffffe;
  *puVar22 = uVar2 + 0x28;
  uVar14 = fn_82AD1978(uVar13,puVar9);
  *(undefined4 *)(uVar13 + 0x2c) = uVar14;
  uVar20 = *(uint *)(*(int *)(uVar20 + 0x1c) + 0x30);
  if ((*(uint *)(((int)(((ulonglong)uVar20 & 0x7ffff) >> 5) + 1) * 4 + *(int *)(puVar8[7] + 0x28)) &
      1 << (uVar20 & 0x1f)) == 0) {
    fn_82B111F0(param_1,puVar9);
    uVar7 = fn_82B8A3A0(dVar26,dVar26,dVar26,dVar26,param_1,1);
    uVar7 = fn_82AD18C0(param_1,uVar7,0);
    uVar7 = fn_82AD35E8(param_1,uVar25,uVar25 + 0x18,uVar7,uVar7);
    uVar7 = fn_82AD18C0(param_1,uVar7,0);
    uVar20 = puVar9[3];
    if ((*(uint *)(uVar20 + 8) & 0x3f80) == 0x3800) {
      fn_82AD1978(uVar20,uVar7);
    }
    else {
      piVar24 = (int *)(uVar20 + 0x28);
      for (uVar25 = 0; uVar25 < (*(uint *)(uVar20 + 8) >> 0x13 & 7); uVar25 = uVar25 + 1) {
        piVar24 = piVar24 + 1;
        fn_82AD1978(*(undefined4 *)(*piVar24 + 0xc),uVar7);
      }
    }
  }
  uVar7 = fn_82AD17B0(param_1,uVar13);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 4;
  puVar9 = (uint *)fn_82AF77E0(param_1,0,puVar8,uVar7,uVar7);
  puVar9[5] = puVar9[5] | 2;
  puVar9[2] = puVar9[2] | 0x20;
  puVar22 = puVar8;
  while (puVar18 = (uint *)*puVar22, puVar18 != (uint *)0x0) {
    if ((*puVar18 & 0xe000000) == 0) {
      puVar17 = (uint *)puVar18[4];
      for (puVar21 = (uint *)*puVar17; puVar21 != puVar18; puVar21 = (uint *)puVar21[1]) {
        puVar17 = puVar21 + 1;
      }
      *puVar17 = puVar18[1];
      puVar18[1] = *puVar9;
      *puVar9 = (uint)puVar18;
      puVar18[4] = (uint)puVar9;
    }
    if ((uint *)*puVar22 == puVar18) {
      puVar22 = puVar18 + 1;
    }
  }
  puVar22 = puVar8 + 1;
  while (uVar20 = *puVar22, uVar20 != 0) {
    if (*(int *)(uVar20 + 0x10) != 0) {
      puVar18 = (uint *)(*(int *)(uVar20 + 0xc) + 4);
      for (uVar25 = *puVar18; uVar25 != uVar20; uVar25 = *(uint *)(uVar25 + 8)) {
        puVar18 = (uint *)(uVar25 + 8);
      }
      *puVar18 = *(uint *)(uVar20 + 8);
      *(uint *)(uVar20 + 8) = puVar9[1];
      puVar9[1] = uVar20;
      *(uint **)(uVar20 + 0xc) = puVar9;
    }
    if (*puVar22 == uVar20) {
      puVar22 = (uint *)(uVar20 + 8);
    }
  }
  if ((puVar8[2] >> 0x19 & 1) != 0) {
    puVar22 = (uint *)(uVar19 + 0x5c);
    puVar9[2] = puVar9[2] | 0x2000000;
    lVar6 = 4;
    do {
      if ((uint *)*puVar22 == puVar8) {
        *puVar22 = (uint)puVar9;
      }
      puVar22 = puVar22 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar8[2] = puVar8[2] & 0xfdffffff;
  }
  fn_82B23950(param_1);
  fn_82B330F8(param_1,1);
  goto LAB_82b38d7c;
LAB_82b38eb4:
  piVar1 = *(int **)(((uint)piVar1 & 0xfffffffe) + 0x28);
  goto joined_r0x82b38dfc;
}

