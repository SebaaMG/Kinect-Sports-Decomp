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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c4;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82AC68F0();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD20C0();
extern int fn_82AD6090();
extern int fn_82AF8720();
extern int fn_82B18438();
extern int fn_82B1F310();
extern int fn_82B22850();
extern int fn_82B23950();
extern int fn_82B24700();
extern int fn_82B330F8();
extern int fn_82B36328();
extern int fn_82B41D68();
extern int fn_82B44B88();
extern int fn_82B462A8();
extern int fn_82B476D0();
extern int fn_82B4B048();
extern int fn_82B84290();
extern int fn_82B8AE98();
extern int fn_82B8E778();
extern int fn_82B8F170();
extern int fn_82B8F1B0();
extern int fn_82B8F328();
extern unsigned int iStack_a8;
extern unsigned int iStack_c8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b4;


undefined8 fn_82B36648(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  bool bVar6;
  uint *puVar7;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined8 uVar8;
  byte bVar16;
  int iVar15;
  uint uVar17;
  int *piVar18;
  bool bVar19;
  int *piVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  uint uVar27;
  byte bVar28;
  uint uVar29;
  byte abStack_d0 [4];
  uint *puStack_cc;
  int iStack_c8;
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [8];
  uint *puStack_b8;
  uint uStack_b4;
  uint *puStack_b0;
  uint uStack_ac;
  int iStack_a8;
  
  if (param_2[1] == (-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4))) {
    return 0;
  }
  puStack_cc = (uint *)fn_82ABE250(param_1,8,6);
  puVar4 = puStack_cc + 1;
  puStack_cc[1] = (uint)puStack_cc | 1;
  *puStack_cc = (uint)puVar4 | 1;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x20000;
  iVar15 = param_2[1];
  if ((*(uint *)(iVar15 + 0x30) >> 0x16 & 1) != 0) {
    for (iVar15 = *(int *)(iVar15 + 0x50);
        (iVar15 != 0 && ((*(uint *)(iVar15 + 0x30) & 0x400000) != 0));
        iVar15 = *(int *)(iVar15 + 0x50)) {
    }
    param_2[1] = iVar15;
    if (iVar15 == 0) goto LAB_82b37590;
  }
  uVar17 = 0;
  if ((((param_2[0xf] & 0x80000000U) == 0) || (param_2[6] != 0)) ||
     (bVar6 = true, (*(uint *)(param_1 + 0x34) & 0x40000) != 0)) {
    bVar6 = false;
  }
  uVar24 = 1;
  uVar1 = ((int)param_2 - *(int *)(param_1 + 0x268)) / 0x44;
  if (0x400 < (param_2[9] & 0x1fffc00U)) {
    do {
      puVar3 = puStack_cc;
      iVar22 = param_2[2];
      if ((*(uint *)(iVar22 + 0x30) >> 0x16 & 1) != 0) {
        for (iVar22 = *(int *)(iVar22 + 0x50);
            (iVar22 != 0 && ((*(uint *)(iVar22 + 0x30) & 0x400000) != 0));
            iVar22 = *(int *)(iVar22 + 0x50)) {
        }
        param_2[2] = iVar22;
      }
      if (iVar22 == iVar15) {
        for (iVar10 = *(int *)(iVar15 + 8); iVar10 != 0; iVar10 = *(int *)(iVar10 + 0xc)) {
          if (iVar22 == *(int *)(iVar10 + 4)) {
            bVar19 = true;
            goto LAB_82b367bc;
          }
        }
        bVar19 = false;
LAB_82b367bc:
        if (!bVar19) goto LAB_82b37590;
      }
      uVar27 = *(uint *)(param_1 + 4);
      uVar25 = (ulonglong)*(uint *)(param_1 + 0x6c) + 1;
      puStack_b8 = (uint *)((uint)&uStack_b4 | 1);
      uVar26 = (undefined4)uVar25;
      *(undefined4 *)(param_1 + 0x6c) = uVar26;
      uStack_b4 = (uint)&puStack_b8 | 1;
      for (; ((uVar27 & 1) == 0 && (uVar27 != 0)); uVar27 = *(uint *)((uVar27 & 0xfffffffe) + 4)) {
        uVar9 = ((int)param_2 - *(int *)(param_1 + 0x268)) / 0x44;
        if ((*(uint *)(((uVar9 >> 5) + 0x15) * 4 + uVar27) >> (uVar9 & 0x1f) & 1) != 0) {
          uVar9 = fn_82AC68F0(param_1);
          *(uint *)(uVar9 + 0x50) = uVar27;
          *(uint *)(uVar27 + 0x50) = uVar9;
          puVar7 = (uint *)(uVar9 & 0xfffffffe);
          iVar10 = ((uVar1 >> 5) + 0x15) * 4;
          *puVar7 = (uint)puStack_b8;
          *(uint **)((uint)puStack_b8 & 0xfffffffe) = puVar7;
          puVar7[1] = (uint)&puStack_b8 | 1;
          *(undefined4 *)(uVar9 + 0x54) = *(undefined4 *)(uVar27 + 0x54);
          *(uint *)(iVar10 + uVar27) = *(uint *)(iVar10 + uVar27) & ~(1 << (uVar1 & 0x1f));
          *(undefined4 *)(uVar27 + 0x2c) = uVar26;
          puStack_b8 = puVar7 + 1;
          if ((*puVar4 & 1) == 0) {
            uVar9 = *puVar3 & 0xfffffffe;
            iVar10 = uVar9 - 4;
            if ((iVar10 == 0) || (*(uint *)(uVar9 + 8) < *(int *)(uVar9 + 4) + 1U))
            goto LAB_82b368c0;
          }
          else {
LAB_82b368c0:
            iVar10 = fn_82AD6090(puVar3,1);
          }
          iVar11 = *(int *)(iVar10 + 8);
          *(int *)(iVar10 + 8) = iVar11 + 1;
          *(uint *)((iVar11 + 4) * 4 + iVar10) = uVar27;
        }
      }
      iVar10 = fn_82B22850(param_1,&puStack_b8,uVar25,0);
      uVar17 = iVar10 + uVar17;
      fn_82B476D0(param_1,&puStack_b8);
      iVar10 = *(int *)(iVar15 + 0x50);
      fn_82B8F1B0(iVar22,iVar15,param_1);
      fn_82B8F328(iVar22,iVar10,param_1);
      for (uVar27 = *(uint *)(iVar22 + 0x24); ((uVar27 & 1) == 0 && (uVar27 != 0));
          uVar27 = *(uint *)((uVar27 & 0xfffffffe) + 0x28)) {
        uVar9 = *(uint *)(uVar27 + 8) >> 7 & 0x7f;
        if ((uVar9 == 0x56) ||
           ((((uVar9 == 0x57 || (uVar9 == 0x59)) || (uVar9 == 0x5a)) ||
            ((uVar9 == 0x54 || (bVar19 = false, uVar9 == 0x55)))))) {
          bVar19 = true;
        }
        if (bVar19) {
          uVar9 = *(uint *)(uVar27 + 8);
          iVar11 = fn_82ABDD90(param_1,uVar9 >> 7 & 0x7f,uVar9 >> 0x13 & 7,uVar9 >> 0xe & 7);
          piVar21 = (int *)(iVar11 + (uVar27 - 0x10));
          if (*piVar21 == iVar15) {
            *piVar21 = iVar10;
          }
        }
      }
      iVar11 = *(int *)(iVar10 + 8);
      piVar21 = (int *)(iVar10 + 8);
      while (iVar11 != 0) {
        iVar23 = *(int *)(iVar11 + 4);
        if (((*(uint *)(((uVar1 >> 5) + 0x15) * 4 + iVar23) >> (uVar1 & 0x1f) & 1) == 0) &&
           ((ulonglong)*(uint *)(iVar23 + 0x2c) != (uVar25 & 0xffffffff))) {
          fn_82B8F1B0(iVar23,iVar10,param_1);
        }
        if (*piVar21 == iVar11) {
          piVar21 = (int *)(iVar11 + 0xc);
        }
        iVar11 = *piVar21;
      }
      iVar11 = *(int *)(iVar15 + 8);
      piVar21 = (int *)(iVar15 + 8);
      while (iVar11 != 0) {
        if ((*(uint *)(((uVar1 >> 5) + 0x15) * 4 + *(int *)(iVar11 + 4)) >> (uVar1 & 0x1f) & 1) != 0
           ) {
          fn_82B8F1B0(*(int *)(iVar11 + 4),iVar15,param_1);
        }
        if (*piVar21 == iVar11) {
          piVar21 = (int *)(iVar11 + 0xc);
        }
        iVar11 = *piVar21;
      }
      iVar11 = param_2[4];
      *param_2 = iVar22;
      param_2[1] = iVar10;
      param_2[2] = *(int *)(iVar22 + 0x50);
      if (iVar11 != 0) {
        if ((*(uint *)(iVar11 + 0x30) >> 0x16 & 1) != 0) {
          do {
            iVar11 = *(int *)(iVar11 + 0x50);
            if (iVar11 == 0) break;
          } while ((*(uint *)(iVar11 + 0x30) & 0x400000) != 0);
          param_2[4] = iVar11;
        }
        param_2[4] = *(int *)(param_2[4] + 0x50);
      }
      iVar22 = param_2[3];
      if (iVar22 != 0) {
        if ((*(uint *)(iVar22 + 0x30) >> 0x16 & 1) != 0) {
          do {
            iVar22 = *(int *)(iVar22 + 0x50);
            if (iVar22 == 0) break;
          } while ((*(uint *)(iVar22 + 0x30) & 0x400000) != 0);
          param_2[3] = iVar22;
        }
        param_2[3] = *(int *)(param_2[3] + 0x50);
      }
      fn_82B44B88(param_1);
      for (piVar21 = *(int **)(iVar15 + 0x14); (((uint)piVar21 & 1) == 0 && (piVar21 != (int *)0x0))
          ; piVar21 = *(int **)(((uint)piVar21 & 0xfffffffe) + 0x28)) {
        piVar18 = piVar21;
        if ((piVar21[2] & 0x3f80U) == 0x3800) {
          while (iVar22 = *piVar18, iVar22 != 0) {
            for (iVar11 = *(int *)(iVar15 + 8); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0xc)) {
              uVar5 = (ulonglong)*(uint *)(*(int *)(*(int *)(iVar22 + 0xc) + 0x1c) + 0x30) & 0x7ffff
              ;
              if ((*(uint *)(((int)(uVar5 >> 5) + 1) * 4 + *(int *)(*(int *)(iVar11 + 4) + 0x28)) &
                  1 << ((uint)uVar5 & 0x1f)) != 0) goto LAB_82b36c14;
            }
            piVar14 = *(int **)(iVar22 + 0x10);
            piVar20 = (int *)piVar21[8];
            for (iVar11 = *piVar14; iVar11 != iVar22; iVar11 = *(int *)(iVar11 + 4)) {
              piVar14 = (int *)(iVar11 + 4);
            }
            *piVar14 = *(int *)(iVar22 + 4);
            *(int *)(iVar22 + 4) = *piVar20;
            *piVar20 = iVar22;
            *(int **)(iVar22 + 0x10) = piVar20;
LAB_82b36c14:
            if (*piVar18 == iVar22) {
              piVar18 = (int *)(iVar22 + 4);
            }
          }
        }
      }
      for (piVar21 = *(int **)(iVar10 + 0x14); (((uint)piVar21 & 1) == 0 && (piVar21 != (int *)0x0))
          ; piVar21 = *(int **)(((uint)piVar21 & 0xfffffffe) + 0x28)) {
        piVar18 = piVar21;
        if ((piVar21[2] & 0x3f80U) == 0x3800) {
          while (iVar22 = *piVar18, iVar22 != 0) {
            for (iVar11 = *(int *)(iVar10 + 8); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0xc)) {
              iVar23 = *(int *)(iVar11 + 4);
              iVar12 = fn_82B41D68(param_1,piVar21,iVar23,0,1);
              if (iVar22 == iVar12) {
                if (iVar23 != 0) goto LAB_82b36ccc;
                break;
              }
            }
            fn_82AD20C0(piVar21,iVar22,param_1);
LAB_82b36ccc:
            if (*piVar18 == iVar22) {
              piVar18 = (int *)(iVar22 + 4);
            }
          }
        }
      }
      uVar27 = *(uint *)(param_1 + 4);
      if (((uVar27 & 1) == 0) && (uVar27 != 0)) {
        uVar9 = uVar1 & 0x1f;
        iVar22 = ((uVar1 >> 5) + 0x15) * 4;
        do {
          if ((*(uint *)(iVar22 + uVar27) >> uVar9 & 1) == 0) {
            for (piVar21 = *(int **)(uVar27 + 0x14);
                (((uint)piVar21 & 1) == 0 && (piVar21 != (int *)0x0));
                piVar21 = *(int **)(((uint)piVar21 & 0xfffffffe) + 0x28)) {
              if ((piVar21[2] & 0x3f80U) == 0x3800) {
LAB_82b36d60:
                iVar10 = *piVar21;
                if ((iVar10 == 0) || (bVar19 = true, *(int *)(iVar10 + 4) == 0)) {
                  bVar19 = false;
                }
                if (bVar19) {
                  for (; iVar10 != 0; iVar10 = *(int *)(iVar10 + 4)) {
                    iVar11 = *(int *)(*(int *)(iVar10 + 0xc) + 0x1c);
                    if ((ulonglong)*(uint *)(iVar11 + 0x2c) == (uVar25 & 0xffffffff)) {
                      iVar23 = *(int *)(uVar27 + 8);
                      while( true ) {
                        if (iVar23 == 0) {
                          bVar19 = false;
                          uVar13 = *(uint *)(uVar27 + 0x34);
                          uVar29 = uVar27;
                          goto LAB_82b36e54;
                        }
                        uVar5 = (ulonglong)*(uint *)(iVar11 + 0x30) & 0x7ffff;
                        if ((*(uint *)(((int)(uVar5 >> 5) + 1) * 4 +
                                      *(int *)(*(int *)(iVar23 + 4) + 0x28)) &
                            1 << ((uint)uVar5 & 0x1f)) != 0) break;
                        iVar23 = *(int *)(iVar23 + 0xc);
                      }
                    }
                  }
                }
              }
            }
          }
          uVar27 = *(uint *)((uVar27 & 0xfffffffe) + 4);
        } while (((uVar27 & 1) == 0) && (uVar27 != 0));
      }
      abStack_d0[0] = 0;
      fn_82B1F310(param_1,uVar25,abStack_d0,0);
      bVar28 = abStack_d0[0];
      if (2000 < uVar17) {
        fn_82B23950(param_1);
        fn_82B330F8(param_1,!bVar6);
        fn_82B24700(&puStack_b0,puStack_cc);
        bVar28 = abStack_d0[0];
LAB_82b37094:
        if ((iStack_a8 != 0) ||
           (bVar19 = true, uStack_ac != (-(uint)((puStack_b0[1] & 1) == 0) & puStack_b0[1]))) {
          bVar19 = false;
        }
        if (!bVar19) {
          piVar21 = (int *)fn_82AF8720(&puStack_b0);
          iVar22 = *piVar21;
          if ((*(uint *)(iVar22 + 0x30) >> 0x16 & 1) != 0) goto code_r0x82b370ec;
          goto LAB_82b37118;
        }
        if (bVar6) {
          if ((puStack_b0[1] & 1) == 0) {
            uStack_ac = (*puStack_b0 & 0xfffffffe) - 4;
          }
          else {
            uStack_ac = 0;
          }
          if (uStack_ac == 0) {
            iStack_a8 = 0;
          }
          else {
            iStack_a8 = *(int *)(uStack_ac + 8);
          }
LAB_82b3717c:
          if ((iStack_a8 != 0) ||
             (bVar6 = true, uStack_ac != (-(uint)((puStack_b0[1] & 1) == 0) & puStack_b0[1]))) {
            bVar6 = false;
          }
          if (!bVar6) {
            piVar21 = (int *)fn_82AF8720(&puStack_b0);
            iVar22 = *piVar21;
            if ((*(uint *)(iVar22 + 0x30) >> 0x16 & 1) != 0) goto code_r0x82b371d0;
            goto LAB_82b371fc;
          }
          fn_82B330F8(param_1,1);
          bVar6 = false;
        }
        uVar17 = 0;
        fn_82B4B048(puStack_cc);
      }
      if (bVar28 != 0) {
        fn_82B44B88(param_1);
        fn_82B330F8(param_1,1);
      }
      if (((*(uint *)(iVar15 + 0x30) >> 0x16 & 1) != 0) &&
         (iVar15 = *(int *)(iVar15 + 0x50), iVar15 != 0)) {
        do {
          if ((*(uint *)(iVar15 + 0x30) & 0x400000) == 0) break;
          iVar15 = *(int *)(iVar15 + 0x50);
        } while (iVar15 != 0);
        if (iVar15 != 0) {
          *(undefined4 *)(iVar15 + 0x2c) = uVar26;
        }
      }
      iVar15 = param_2[1];
      if ((*(uint *)(iVar15 + 0x30) >> 0x16 & 1) != 0) goto LAB_82b37590;
      iVar22 = param_2[2];
      if ((*(uint *)(iVar22 + 0x30) >> 0x16 & 1) != 0) {
        do {
          iVar22 = *(int *)(iVar22 + 0x50);
          if (iVar22 == 0) break;
        } while ((*(uint *)(iVar22 + 0x30) & 0x400000) != 0);
        param_2[2] = iVar22;
      }
      iVar22 = param_2[4];
      if ((iVar22 != 0) && ((*(uint *)(iVar22 + 0x30) >> 0x16 & 1) != 0)) {
        do {
          iVar22 = *(int *)(iVar22 + 0x50);
          if (iVar22 == 0) break;
        } while ((*(uint *)(iVar22 + 0x30) & 0x400000) != 0);
        param_2[4] = iVar22;
      }
      iVar22 = param_2[3];
      if ((*(uint *)(iVar22 + 0x30) >> 0x16 & 1) != 0) {
        do {
          iVar22 = *(int *)(iVar22 + 0x50);
          if (iVar22 == 0) break;
        } while ((*(uint *)(iVar22 + 0x30) & 0x400000) != 0);
        param_2[3] = iVar22;
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < ((uint)param_2[9] >> 10 & 0x7fff));
  }
  iVar22 = param_2[2];
  if ((iVar22 != 0) && ((*(uint *)(iVar22 + 0x30) >> 0x16 & 1) != 0)) {
    do {
      iVar22 = *(int *)(iVar22 + 0x50);
      if (iVar22 == 0) break;
    } while ((*(uint *)(iVar22 + 0x30) & 0x400000) != 0);
    param_2[2] = iVar22;
  }
  iVar22 = param_2[2];
  if ((iVar22 != 0) && ((*(uint *)(iVar15 + 0x30) >> 0x16 & 1) == 0)) {
    for (piVar21 = *(int **)(iVar22 + 0xc); piVar21 != (int *)0x0; piVar21 = (int *)piVar21[2]) {
      if (iVar15 == *piVar21) {
        bVar6 = true;
        goto LAB_82b374e8;
      }
    }
    bVar6 = false;
LAB_82b374e8:
    if (bVar6) {
      fn_82B18438(param_1,iVar22,iVar15);
      fn_82B44B88(param_1);
    }
    uVar17 = *(uint *)(param_2[2] + 0x24);
    if (((uVar17 & 1) == 0) && (uVar17 != 0)) {
      while( true ) {
        uVar1 = *(uint *)(uVar17 + 8) >> 7 & 0x7f;
        if (((uVar1 == 0x56) || (((uVar1 == 0x57 || (uVar1 == 0x59)) || (uVar1 == 0x5a)))) ||
           ((uVar1 == 0x54 || (bVar6 = false, uVar1 == 0x55)))) {
          bVar6 = true;
        }
        if (bVar6) break;
        uVar17 = *(uint *)((uVar17 & 0xfffffffe) + 0x28);
        if (((uVar17 & 1) != 0) || (uVar17 == 0)) goto LAB_82b37590;
      }
      fn_82B8AE98(param_1);
    }
  }
LAB_82b37590:
  puVar4 = puStack_cc;
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  param_2[9] = param_2[9] & 0xfe0003ffU | 0x400;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[0xf] = param_2[0xf] | 0x10;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -0x20000;
  fn_82B4B048(puStack_cc);
  *puVar4 = *(uint *)(param_1 + 0x3d0);
  *(uint **)(param_1 + 0x3d0) = puVar4;
  return 1;
LAB_82b36e54:
  uVar2 = uVar13;
  iVar10 = *(int *)(uVar27 + 8);
  if ((ulonglong)*(uint *)(uVar2 + 0x2c) == (uVar25 & 0xffffffff)) goto code_r0x82b36e60;
  for (; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0xc)) {
    uVar5 = (ulonglong)*(uint *)(iVar11 + 0x30) & 0x7ffff;
    if ((*(uint *)(((int)(uVar5 >> 5) + 1) * 4 + *(int *)(*(int *)(iVar10 + 4) + 0x28)) &
        1 << ((uint)uVar5 & 0x1f)) != 0) goto LAB_82b36e64;
  }
  uVar13 = *(uint *)(uVar2 + 0x34);
  uVar29 = uVar2;
  goto LAB_82b36e54;
code_r0x82b36e60:
  bVar19 = true;
LAB_82b36e64:
  uVar13 = uVar29;
  if (bVar19) {
    uVar13 = fn_82AC68F0(param_1);
    puVar7 = (uint *)(uVar29 & 0xfffffffe);
    puVar3 = (uint *)(uVar13 & 0xfffffffe);
    piVar18 = (int *)(uVar29 + 8);
    *puVar3 = *puVar7;
    *(uint **)(*puVar7 & 0xfffffffe) = puVar3;
    puVar3[1] = (uint)puVar7;
    *puVar7 = (uint)(puVar3 + 1);
    iVar10 = *(int *)(uVar29 + 8);
    while (iVar10 != 0) {
      iVar11 = *(int *)(iVar10 + 4);
      if (((*(uint *)(iVar22 + iVar11) >> uVar9 & 1) != 0) ||
         ((ulonglong)*(uint *)(iVar11 + 0x2c) == (uVar25 & 0xffffffff))) {
        fn_82B8F170(iVar11,iVar10,uVar13);
      }
      if (*piVar18 == iVar10) {
        piVar18 = (int *)(iVar10 + 0xc);
      }
      iVar10 = *piVar18;
    }
    fn_82B8F328(uVar13,uVar29,param_1);
    *(uint *)(uVar13 + 0x4c) =
         *(uint *)(uVar13 + 0x4c) & 0xfff80000 | *(uint *)(uVar29 + 0x4c) & 0x7ffff;
  }
  fn_82B44B88(param_1);
  piVar14 = (int *)fn_82B84290(param_1,uVar13);
  piVar18 = piVar21;
  while (iVar10 = *piVar18, iVar10 != 0) {
    iVar11 = *(int *)(*(int *)(iVar10 + 0xc) + 0x1c);
    if (((*(uint *)(iVar22 + iVar11) >> uVar9 & 1) != 0) ||
       ((ulonglong)*(uint *)(iVar11 + 0x2c) == (uVar25 & 0xffffffff))) {
      iVar23 = *(int *)(uVar13 + 8);
LAB_82b36f6c:
      if (iVar23 != 0) {
        uVar5 = (ulonglong)*(uint *)(iVar11 + 0x30) & 0x7ffff;
        if ((*(uint *)(((int)(uVar5 >> 5) + 1) * 4 + *(int *)(*(int *)(iVar23 + 4) + 0x28)) &
            1 << ((uint)uVar5 & 0x1f)) == 0) goto code_r0x82b36fa4;
        piVar20 = *(int **)(iVar10 + 0x10);
        for (iVar11 = *piVar20; iVar11 != iVar10; iVar11 = *(int *)(iVar11 + 4)) {
          piVar20 = (int *)(iVar11 + 4);
        }
        *piVar20 = *(int *)(iVar10 + 4);
        *(int *)(iVar10 + 4) = *piVar14;
        *piVar14 = iVar10;
        *(int **)(iVar10 + 0x10) = piVar14;
      }
    }
    if (*piVar18 == iVar10) {
      piVar18 = (int *)(iVar10 + 4);
    }
  }
  uVar8 = fn_82AD17B0(param_1);
  fn_82AD1978(piVar21,uVar8);
  goto LAB_82b36d60;
code_r0x82b36fa4:
  iVar23 = *(int *)(iVar23 + 0xc);
  goto LAB_82b36f6c;
code_r0x82b370ec:
  for (iVar22 = *(int *)(iVar22 + 0x50);
      (iVar22 != 0 && ((*(uint *)(iVar22 + 0x30) & 0x400000) != 0));
      iVar22 = *(int *)(iVar22 + 0x50)) {
  }
  if (iVar22 != 0) {
LAB_82b37118:
    bVar16 = fn_82B36328(param_1,iVar22);
    bVar28 = bVar16 | bVar28;
  }
  goto LAB_82b37094;
code_r0x82b371d0:
  for (iVar22 = *(int *)(iVar22 + 0x50);
      (iVar22 != 0 && ((*(uint *)(iVar22 + 0x30) & 0x400000) != 0));
      iVar22 = *(int *)(iVar22 + 0x50)) {
  }
  if (iVar22 != 0) {
LAB_82b371fc:
    if ((*(uint *)(iVar22 + 0x1c) & 1) == 0) {
      piVar21 = (int *)(-(uint)((*(uint *)(iVar22 + 0x1c) & 1) == 0) & *(uint *)(iVar22 + 0x1c));
      iVar10 = iVar22 + 0x18;
    }
    else {
      piVar21 = (int *)(-(uint)((*(uint *)(iVar22 + 0x24) & 1) == 0) & *(uint *)(iVar22 + 0x24));
      iVar10 = iVar22 + 0x20;
    }
    while (piVar21 != (int *)0x0) {
      do {
        for (puVar3 = (uint *)*piVar21; puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[1]) {
          if (((*puVar3 & 0xe000000) != 0) &&
             (fn_82B8E778(puVar3,&iStack_c8,auStack_c0,auStack_c4,0),
             (*(uint *)(iStack_c8 + 8) & 0x3f80) == 0x3a00)) {
            iVar15 = fn_82ABDD90(param_1,0x74,0,1);
            if ((*(uint *)((*(uint *)(iVar15 + iStack_c8 + -4) & 0x7fff) * 0x28 +
                           *(int *)(param_1 + 0xc) + 4) & 0x8000000) == 0) {
              uVar8 = fn_82B462A8(param_1);
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0xdc7,uVar8);
            }
            uVar8 = fn_82B462A8(param_1);
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0xdb3,uVar8);
          }
        }
        piVar21 = *(int **)(((uint)piVar21 & 0xfffffffe) + 0x28);
      } while ((((uint)piVar21 & 1) == 0) && (piVar21 != (int *)0x0));
      if ((iVar10 == iVar22 + 0x20) ||
         (piVar21 = *(int **)(iVar22 + 0x24), iVar10 = iVar22 + 0x20, ((uint)piVar21 & 1) != 0))
      break;
    }
  }
  goto LAB_82b3717c;
}

