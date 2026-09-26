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
extern int fn_82ABE0E8();
extern int fn_82ABE250();
extern int fn_82AD7788();
extern int fn_82AD7878();
extern int fn_82AD7A50();
extern int fn_82AD7B20();
extern int fn_82B189C0();
extern int fn_82B8F398();


void fn_82AD84B0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  char cVar12;
  int iVar10;
  int iVar11;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  int *piVar19;
  
  puVar8 = (uint *)fn_82ABE250(param_1,8,0x26);
  puVar17 = puVar8 + 1;
  puVar8[1] = (uint)puVar8 | 1;
  *puVar8 = (uint)puVar17 | 1;
  for (uVar18 = *(uint *)((-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)) +
                         0x14); ((uVar18 & 1) == 0 && (uVar18 != 0));
      uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 0x28)) {
    if ((*(uint *)(uVar18 + 8) & 0x3f80) == 0x3880) {
      puVar2 = *(uint **)(uVar18 + 4);
      *(uint *)(uVar18 + 8) = *(uint *)(uVar18 + 8) | 0x8000000;
      for (; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[2]) {
        uVar15 = puVar2[4];
        if (uVar15 != 0) {
          if (((*puVar2 & 0x40000000) != 0) || (bVar5 = false, (*puVar2 & 0xe000000) != 0)) {
            bVar5 = true;
          }
          if ((bVar5) && ((*(uint *)(uVar15 + 8) >> 0x1b & 1) == 0)) {
            fn_82AD7788(param_1,uVar15,puVar8);
          }
        }
      }
    }
  }
  if ((*(uint *)(param_1 + 0x28) & 4) != 0) {
    for (uVar18 = *(uint *)(param_1 + 4); ((uVar18 & 1) == 0 && (uVar18 != 0));
        uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 4)) {
      if ((*(uint *)(uVar18 + 0x24) & 1) == 0) {
        uVar15 = *(uint *)(uVar18 + 0x20) & 0xfffffffe;
        iVar11 = uVar15 - 0x28;
        if (iVar11 != 0) {
          uVar15 = *(uint *)(uVar15 - 0x20);
          uVar3 = uVar15 >> 7 & 0x7f;
          if (((((uVar3 == 0x56) || (uVar3 == 0x57)) || (uVar3 == 0x59)) ||
              ((uVar3 == 0x5a || (uVar3 == 0x54)))) || (bVar5 = false, uVar3 == 0x55)) {
            bVar5 = true;
          }
          if (((bVar5) && ((uVar15 >> 0x1b & 1) == 0)) &&
             ((iVar9 = fn_82ABE0E8(iVar11,param_1), iVar9 == 3 || (iVar9 == 4)))) {
            fn_82AD7788(param_1,iVar11,puVar8);
          }
        }
      }
    }
  }
  while( true ) {
    while (((*puVar17 & 1) == 0 && (*puVar17 != 0))) {
      puVar2 = (uint *)(*puVar8 & 0xfffffffe);
      puVar13 = puVar2 + -1;
      uVar15 = puVar2[1] - 1;
      uVar18 = puVar13[puVar2[1] + 3];
      puVar2[1] = uVar15;
      if (uVar15 == 0) {
        *(uint *)(*puVar2 & 0xfffffffe) = *puVar13;
        *(uint *)(*puVar13 & 0xfffffffe) = *puVar2;
        fn_82AA6648(puVar8,puVar13,((ulonglong)puVar2[2] + 4 & 0x3fffffff) << 2);
      }
      iVar11 = *(int *)(uVar18 + 0x1c);
      if (((*(uint **)(iVar11 + 0x28))[1] & 1) == 0) {
        uVar15 = *(uint *)(uVar18 + 8) >> 7 & 0x7f;
        if ((((uVar15 == 0x56) || (uVar15 == 0x57)) || (uVar15 == 0x59)) ||
           (((uVar15 == 0x5a || (uVar15 == 0x54)) || (bVar5 = false, uVar15 == 0x55)))) {
          bVar5 = true;
        }
        if ((bVar5) && ((**(uint **)(iVar11 + 0x28) >> 0x13 & 1) != 0)) {
          for (uVar15 = *(uint *)(param_1 + 4); ((uVar15 & 1) == 0 && (uVar15 != 0));
              uVar15 = *(uint *)((uVar15 & 0xfffffffe) + 4)) {
            if ((*(uint *)(((uint)(((ulonglong)**(uint **)(uVar15 + 0x28) & 0x7ffff) + 0x1f >> 3) &
                           0x1ffffffc) +
                           ((int)(((ulonglong)*(uint *)(iVar11 + 0x30) & 0x7ffff) >> 5) + 1) * 4 +
                          (int)*(uint **)(uVar15 + 0x28)) & 1 << (*(uint *)(iVar11 + 0x30) & 0x1f))
                != 0) {
              fn_82AD7878(param_1,uVar15,iVar11,puVar8);
            }
          }
        }
        for (puVar2 = *(uint **)(uVar18 + 4); puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[2]) {
          uVar18 = puVar2[4];
          if (uVar18 != 0) {
            if (((*puVar2 & 0x40000000) != 0) || (bVar5 = false, (*puVar2 & 0xe000000) != 0)) {
              bVar5 = true;
            }
            if ((bVar5) && ((*(uint *)(uVar18 + 8) >> 0x1b & 1) == 0)) {
              fn_82AD7788(param_1,uVar18,puVar8);
            }
          }
        }
      }
    }
    if ((*(uint *)(param_1 + 0x28) & 0x100) == 0) break;
    uVar18 = *(uint *)(param_1 + 4);
    if (((uVar18 & 1) == 0) && (uVar18 != 0)) {
LAB_82ad8858:
      if (((*(uint *)(uVar18 + 0x24) & 1) == 0) &&
         (uVar15 = *(uint *)(uVar18 + 0x20) & 0xfffffffe, uVar15 != 0x28)) {
        if (((*(uint *)(uVar15 - 0x20) & 0x3f80) == 0x2980) &&
           (cVar12 = fn_82B189C0(param_1,uVar18), cVar12 != '\0')) {
          for (iVar11 = *(int *)(uVar18 + 0x40); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x40)) {
            if ((*(uint *)(iVar11 + 0x24) & 1) == 0) {
              iVar9 = (*(uint *)(iVar11 + 0x20) & 0xfffffffe) - 0x28;
            }
            else {
              iVar9 = 0;
            }
            uVar3 = *(uint *)(iVar9 + 8);
            if ((uVar3 >> 0x1b & 1) == 0) {
              uVar7 = uVar3 >> 7 & 0x7f;
              if ((((uVar7 == 0x56) || (uVar7 == 0x57)) || (uVar7 == 0x59)) ||
                 (((uVar7 == 0x5a || (uVar7 == 0x54)) || (bVar5 = false, uVar7 == 0x55)))) {
                bVar5 = true;
              }
              if ((bVar5) &&
                 ((iVar10 = fn_82ABE0E8(iVar9,param_1), iVar10 == 8 || (iVar10 == 9)))) break;
              *(uint *)(iVar9 + 8) = uVar3 | 0x8000000;
            }
            if ((*(uint *)(uVar15 - 0x20) >> 0x1b & 1) == 0) {
              *(uint *)(uVar15 - 0x20) = *(uint *)(uVar15 - 0x20) | 0x8000000;
            }
            *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x100;
            fn_82AD7A50(param_1,iVar11,puVar8);
          }
        }
        iVar11 = *(int *)(uVar18 + 8);
        if ((iVar11 == 0) || (bVar5 = true, *(int *)(iVar11 + 0xc) == 0)) {
          bVar5 = false;
        }
        if ((bVar5) && ((*(uint *)(*(int *)(uVar18 + 0x28) + 4) & 1) == 0)) {
          iVar9 = 0;
          bVar6 = false;
          bVar5 = false;
          for (; iVar11 != 0; iVar11 = *(int *)(iVar11 + 0xc)) {
            iVar10 = *(int *)(*(int *)(iVar11 + 4) + 0x28);
            if ((*(uint *)(iVar10 + 4) & 1) == 0) {
              uVar4 = (ulonglong)*(uint *)(uVar18 + 0x30) & 0x7ffff;
              if ((1 << ((uint)uVar4 & 0x1f) & *(uint *)(((int)(uVar4 >> 5) + 1) * 4 + iVar10)) != 0
                 ) {
                bVar5 = true;
                break;
              }
              bVar1 = iVar9 != 0;
              iVar9 = *(int *)(iVar11 + 4);
              if (bVar1) {
                iVar9 = fn_82B8F398();
              }
            }
          }
          if (!bVar5) {
            iVar11 = *(int *)(uVar18 + 8);
            for (iVar10 = iVar11; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0xc)) {
              iVar16 = *(int *)(iVar10 + 4);
              if ((((*(uint *)(*(int *)(iVar16 + 0x28) + 4) & 1) == 0) && (iVar9 != iVar16)) &&
                 (iVar9 != *(int *)(iVar16 + 0x34))) {
                bVar6 = true;
                break;
              }
            }
            iVar10 = iVar9;
            if (bVar6) {
              do {
                if (((*(uint *)(iVar10 + 0x24) & 1) == 0) &&
                   (uVar15 = *(uint *)(iVar10 + 0x20) & 0xfffffffe, uVar15 != 0x28)) {
                  uVar15 = *(uint *)(uVar15 - 0x20) >> 7 & 0x7f;
                  if ((((uVar15 == 0x56) || ((uVar15 == 0x57 || (uVar15 == 0x59)))) ||
                      (uVar15 == 0x5a)) || ((uVar15 == 0x54 || (bVar5 = false, uVar15 == 0x55)))) {
                    bVar5 = true;
                  }
                  if (bVar5) goto LAB_82ad8af0;
                }
                piVar19 = (int *)(iVar10 + 0x34);
                iVar10 = *piVar19;
                if (*piVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
              } while( true );
            }
          }
        }
      }
      goto LAB_82ad8b74;
    }
LAB_82ad8b90:
    if (((*puVar17 & 1) != 0) || (*puVar17 == 0)) break;
  }
  *puVar8 = *(uint *)(param_1 + 0x3d0);
  *(uint **)(param_1 + 0x3d0) = puVar8;
LAB_82ad8bb4:
  bVar5 = false;
  uVar18 = -(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4);
  do {
    uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 4);
    if (((uVar18 & 1) != 0) || (uVar18 == 0)) goto LAB_82ad8e90;
    if ((*(uint *)(uVar18 + 0x24) & 1) == 0) {
      uVar15 = *(uint *)(uVar18 + 0x24);
      puVar17 = (uint *)(uVar18 + 0x20);
    }
    else if ((*(uint *)(uVar18 + 0x1c) & 1) == 0) {
      uVar15 = *(uint *)(uVar18 + 0x1c);
      puVar17 = (uint *)(uVar18 + 0x18);
    }
    else {
      uVar15 = *(uint *)(uVar18 + 0x14);
      puVar17 = (uint *)(uVar18 + 0x10);
    }
    if ((uVar15 & 1) == 0) {
      piVar19 = (int *)((*puVar17 & 0xfffffffe) - 0x28);
    }
    else {
      piVar19 = (int *)0x0;
    }
    while (piVar19 != (int *)0x0) {
      do {
        if ((piVar19[2] & 0x3f80U) == 0x3080) {
          uVar15 = piVar19[2];
          iVar11 = fn_82ABDD90(param_1,uVar15 >> 7 & 0x7f,uVar15 >> 0x13 & 7,uVar15 >> 0xe & 7);
          if (((*(uint *)((int)piVar19 + iVar11 + -0x14) & 0x10000000) != 0) &&
             ((*(uint *)((int)piVar19 + iVar11 + -0x10) & 1) == 0)) {
            for (puVar8 = (uint *)*piVar19; puVar8 != (uint *)0x0; puVar8 = (uint *)puVar8[1]) {
              if ((*puVar8 & 0xe000000) != 0) {
                uVar15 = puVar8[3];
                if (((*(uint *)(uVar15 + 8) & 0x10000000) == 0) &&
                   (*(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) | 0x10000000,
                   *(uint *)(uVar15 + 0x1c) !=
                   (-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)))) {
                  bVar5 = true;
                }
              }
            }
          }
        }
        if ((piVar19[2] & 0x10000000U) != 0) {
          for (iVar11 = *piVar19; iVar11 != 0; iVar11 = *(int *)(iVar11 + 4)) {
            iVar9 = *(int *)(iVar11 + 0xc);
            if (((*(uint *)(iVar9 + 8) & 0x10000000) == 0) &&
               (*(uint *)(iVar9 + 8) = *(uint *)(iVar9 + 8) | 0x10000000,
               *(uint *)(iVar9 + 0x1c) !=
               (-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)))) {
              bVar5 = true;
            }
          }
          for (iVar11 = *(int *)(uVar18 + 0x34); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x34)) {
            if ((((*(uint *)(iVar11 + 0x24) & 1) == 0) &&
                (uVar15 = *(uint *)(iVar11 + 0x20) & 0xfffffffe, uVar15 != 0x28)) &&
               (uVar3 = *(uint *)(uVar15 - 0x20), (uVar3 & 0x10000000) == 0)) {
              uVar7 = uVar3 >> 7 & 0x7f;
              if ((((uVar7 == 0x56) || (uVar7 == 0x57)) ||
                  ((uVar7 == 0x59 || ((uVar7 == 0x5a || (uVar7 == 0x54)))))) ||
                 (bVar6 = false, uVar7 == 0x55)) {
                bVar6 = true;
              }
              if ((bVar6) &&
                 (iVar9 = fn_82ABDD90(param_1,uVar7,uVar3 >> 0x13 & 7,uVar3 >> 0xe & 7),
                 uVar4 = (ulonglong)*(uint *)(*(int *)(iVar9 + (uVar15 - 0x38)) + 0x30) & 0x7ffff,
                 (*(uint *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar18 + 0x28)) &
                 1 << ((uint)uVar4 & 0x1f)) == 0)) {
                bVar5 = true;
                *(uint *)(uVar15 - 0x20) = uVar3 | 0x10000000;
              }
            }
          }
        }
      } while (((piVar19[9] & 1U) == 0) &&
              (piVar19 = (int *)((piVar19[9] & 0xfffffffeU) - 0x28), piVar19 != (int *)0x0));
      if (puVar17 == (uint *)(uVar18 + 0x10)) break;
      if ((puVar17 == (uint *)(uVar18 + 0x18)) || ((*(uint *)(uVar18 + 0x1c) & 1) != 0)) {
        uVar15 = *(uint *)(uVar18 + 0x14);
        puVar17 = (uint *)(uVar18 + 0x10);
      }
      else {
        uVar15 = *(uint *)(uVar18 + 0x1c);
        puVar17 = (uint *)(uVar18 + 0x18);
      }
      if ((uVar15 & 1) != 0) break;
      piVar19 = (int *)((*puVar17 & 0xfffffffe) - 0x28);
    }
  } while( true );
LAB_82ad8af0:
  for (; iVar11 != 0; iVar11 = *(int *)(iVar11 + 0xc)) {
    iVar16 = *(int *)(iVar11 + 4);
    if ((iVar10 != iVar16) && ((*(uint *)(*(int *)(iVar16 + 0x28) + 4) & 1) == 0)) {
      do {
        iVar16 = *(int *)(iVar16 + 0x40);
        if (iVar16 == 0) break;
        if ((*(uint *)(iVar16 + 0x24) & 1) == 0) {
          iVar14 = (*(uint *)(iVar16 + 0x20) & 0xfffffffe) - 0x28;
        }
        else {
          iVar14 = 0;
        }
        if ((*(uint *)(iVar14 + 8) >> 0x1b & 1) != 0) {
          fn_82AD7B20(param_1,iVar9,uVar18,puVar8);
          goto LAB_82ad8b74;
        }
      } while (iVar16 != iVar10);
    }
  }
LAB_82ad8b74:
  uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 4);
  if (((uVar18 & 1) != 0) || (uVar18 == 0)) goto LAB_82ad8b90;
  goto LAB_82ad8858;
LAB_82ad8e90:
  if (!bVar5) {
    return;
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x800000;
  goto LAB_82ad8bb4;
}

