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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82AD1A40();
extern int fn_82AD21B8();
extern int fn_82AD6090();
extern int fn_82B206A0();
extern int fn_82B841E8();
extern int fn_82B88A48();


void fn_82B34480(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  int *piVar15;
  bool bVar17;
  int *piVar16;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  
  if ((param_1[10] & 4) != 0) {
    for (uVar22 = param_1[1]; ((uVar22 & 1) == 0 && (uVar22 != 0));
        uVar22 = *(uint *)((uVar22 & 0xfffffffe) + 4)) {
      if ((*(uint *)(uVar22 + 0x24) & 1) == 0) {
        uVar19 = *(uint *)(uVar22 + 0x20) & 0xfffffffe;
        if (uVar19 - 0x28 != 0) {
          uVar18 = *(uint *)(uVar19 - 0x20);
          uVar20 = uVar18 >> 7 & 0x7f;
          if ((((uVar20 == 0x56) || (uVar20 == 0x57)) || (uVar20 == 0x59)) ||
             (((uVar20 == 0x5a || (uVar20 == 0x54)) || (bVar17 = false, uVar20 == 0x55)))) {
            bVar17 = true;
          }
          if (bVar17) {
            iVar6 = fn_82ABDD90(param_1,uVar20,uVar18 >> 0x13 & 7,uVar18 >> 0xe & 7);
            piVar16 = (int *)(iVar6 + (uVar19 - 0x38));
            if (((piVar16[2] & 3U) == 0) &&
               ((uVar20 = (uint)piVar16[2] >> 2 & 0xf, uVar20 == 9 || (uVar20 == 8)))) {
              for (piVar15 = *(int **)(uVar22 + 0xc); piVar15 != (int *)0x0;
                  piVar15 = (int *)piVar15[2]) {
                iVar6 = *piVar15;
                if (iVar6 != *piVar16) goto LAB_82b3457c;
              }
              iVar6 = 0;
LAB_82b3457c:
              if (((uint)piVar16[3] >> 1 & 1) != (uint)(uVar20 == 8)) {
                *(uint *)(uVar19 - 0x20) = uVar18 & 0xfffbffff | ~uVar18 & 0x40000;
                *piVar16 = iVar6;
                piVar16[3] = piVar16[3] & 0xfffffffdU | ~piVar16[3] & 2U;
              }
              if ((*(uint *)(uVar19 - 0x20) >> 0x12 & 1) != (uint)(uVar20 == 8)) {
                fn_82AD21B8(param_1,uVar19 - 0x28);
              }
            }
          }
        }
      }
    }
  }
  if (((param_1[10] & 0x200) != 0) &&
     (uVar22 = param_1[0x9a], uVar22 < param_1[0x9b] * 0x44 + uVar22)) {
    piVar16 = (int *)(uVar22 + 4);
    do {
      if ((piVar16[0xe] & 0x400U) != 0) {
        iVar6 = piVar16[1];
        if ((iVar6 != 0) && ((*(uint *)(iVar6 + 0x30) >> 0x16 & 1) != 0)) {
          do {
            iVar6 = *(int *)(iVar6 + 0x50);
            if (iVar6 == 0) break;
          } while ((*(uint *)(iVar6 + 0x30) & 0x400000) != 0);
          piVar16[1] = iVar6;
        }
        iVar6 = *piVar16;
        if ((iVar6 != 0) && ((*(uint *)(iVar6 + 0x30) >> 0x16 & 1) != 0)) {
          do {
            iVar6 = *(int *)(iVar6 + 0x50);
            if (iVar6 == 0) break;
          } while ((*(uint *)(iVar6 + 0x30) & 0x400000) != 0);
          *piVar16 = iVar6;
        }
        iVar6 = piVar16[2];
        if ((iVar6 != 0) && ((*(uint *)(iVar6 + 0x30) >> 0x16 & 1) != 0)) {
          do {
            iVar6 = *(int *)(iVar6 + 0x50);
            if (iVar6 == 0) break;
          } while ((*(uint *)(iVar6 + 0x30) & 0x400000) != 0);
          piVar16[2] = iVar6;
        }
        iVar6 = piVar16[1];
        if (((((iVar6 != 0) && (*piVar16 != 0)) && (piVar16[2] != 0)) &&
            (((*(uint *)(iVar6 + 0x24) & 1) == 0 &&
             (uVar22 = *(uint *)(iVar6 + 0x20) & 0xfffffffe, uVar22 != 0x28)))) &&
           ((*(uint *)(uVar22 - 0x20) & 0x3f80) == 0x2a80)) {
          fn_82B206A0(param_1,piVar16 + -1);
          iVar6 = piVar16[4];
          if ((*(uint *)(iVar6 + 0x1c) & 1) != 0) {
            iVar7 = fn_82B841E8(param_1,iVar6,iVar6 + 0x18,0x75,0,0);
            *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) | 0x2000000;
            iVar6 = fn_82B841E8(param_1,iVar6,iVar6 + 0x18,0x75,0,0);
            *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 0x2000000;
            fn_82AD1A40(iVar6,iVar7,param_1);
          }
        }
      }
      piVar15 = piVar16 + 0x10;
      piVar16 = piVar16 + 0x11;
    } while (piVar15 < (int *)(param_1[0x9b] * 0x44 + param_1[0x9a]));
  }
  puVar8 = (uint *)fn_82ABE250(param_1,8,6);
  puVar3 = puVar8 + 1;
  puVar8[1] = (uint)puVar8 | 1;
  *puVar8 = (uint)puVar3 | 1;
  puVar9 = (uint *)fn_82ABE250(param_1,8,6);
  puVar24 = puVar9 + 1;
  puVar9[1] = (uint)puVar9 | 1;
  *puVar9 = (uint)puVar24 | 1;
  uVar22 = param_1[1];
  param_1[1] = (uint)param_1 | 1;
  uVar19 = param_1[0x1b] + 1;
  *param_1 = (uint)(param_1 + 1) | 1;
  param_1[0x1b] = uVar19;
  uVar22 = -(uint)((uVar22 & 1) == 0) & uVar22;
  do {
    puVar13 = (uint *)(uVar22 & 0xfffffffe);
    uVar20 = 0;
    *puVar13 = *param_1;
    *(uint **)(*param_1 & 0xfffffffe) = puVar13;
    puVar13[1] = (uint)param_1 | 1;
    *param_1 = (uint)(puVar13 + 1);
    *(uint *)(uVar22 + 0x2c) = uVar19;
    uVar18 = param_1[10];
    if ((((uVar18 & 4) == 0) || ((*(uint *)(uVar22 + 0x24) & 1) != 0)) ||
       (uVar21 = *(uint *)(uVar22 + 0x20) & 0xfffffffe, uVar21 == 0x28)) {
LAB_82b34978:
      if ((uVar18 & 0x200) != 0) {
        if ((((*(uint *)(uVar22 + 0x24) & 1) == 0) &&
            (uVar18 = *(uint *)(uVar22 + 0x20) & 0xfffffffe, uVar18 != 0x28)) &&
           ((*(uint *)(uVar18 - 0x20) & 0x3f80) == 0x2a00)) {
          uVar20 = *(uint *)(uVar18 - 0x20);
          iVar6 = fn_82ABDD90(param_1,uVar20 >> 7 & 0x7f,uVar20 >> 0x13 & 7,uVar20 >> 0xe & 7);
          for (puVar13 = *(uint **)(uVar22 + 0xc); puVar13 != (uint *)0x0;
              puVar13 = (uint *)puVar13[2]) {
            uVar20 = *puVar13;
            if (*puVar13 != *(uint *)(iVar6 + (uVar18 - 0x38))) goto LAB_82b34b7c;
          }
          uVar20 = 0;
        }
        else if (*(int *)(uVar22 + 0x54) != 0) {
          puVar13 = *(uint **)(uVar22 + 0xc);
          if ((puVar13 == (uint *)0x0) || (bVar17 = true, puVar13[2] == 0)) {
            bVar17 = false;
          }
          if (bVar17) {
            uVar11 = 0;
            uVar18 = 0;
            uVar21 = 0;
            for (; puVar13 != (uint *)0x0; puVar13 = (uint *)puVar13[2]) {
              uVar23 = *puVar13;
              iVar6 = 0;
              piVar16 = (int *)(uVar22 + 0x54);
              do {
                if (*(int *)((uVar23 - uVar22) + (int)piVar16) != *piVar16) {
                  bVar17 = false;
                  goto LAB_82b34a9c;
                }
                iVar6 = iVar6 + 1;
                piVar16 = piVar16 + 1;
              } while (iVar6 < 1);
              bVar17 = true;
LAB_82b34a9c:
              uVar5 = uVar11;
              uVar10 = uVar23;
              uVar12 = uVar21;
              if ((bVar17) &&
                 (uVar4 = (ulonglong)*(uint *)(uVar23 + 0x30) & 0x7ffff, uVar10 = uVar18,
                 (*(uint *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar22 + 0x28)) &
                 1 << ((uint)uVar4 & 0x1f)) == 0)) {
                piVar16 = *(int **)(uVar23 + 0xc);
                while ((uVar5 = uVar11, uVar12 = uVar23, piVar16 != (int *)0x0 &&
                       (uVar4 = (ulonglong)*(uint *)(*piVar16 + 0x30) & 0x7ffff, uVar5 = uVar23,
                       uVar12 = uVar21,
                       (*(uint *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar23 + 0x28)) &
                       1 << ((uint)uVar4 & 0x1f)) == 0))) {
                  piVar16 = (int *)piVar16[2];
                }
              }
              uVar11 = uVar5;
              uVar18 = uVar10;
              uVar21 = uVar12;
            }
            if ((uVar11 != 0) || (uVar21 != 0)) {
              if (uVar21 == 0) {
                if (uVar18 != 0) {
                  uVar20 = uVar11;
                }
              }
              else if ((uVar11 != 0) || (uVar18 != 0)) {
                uVar20 = uVar21;
              }
            }
          }
        }
      }
    }
    else {
      uVar11 = *(uint *)(uVar21 - 0x20) >> 7 & 0x7f;
      if ((((uVar11 == 0x56) || (uVar11 == 0x57)) || (uVar11 == 0x59)) ||
         (((uVar11 == 0x5a || (uVar11 == 0x54)) || (bVar17 = false, uVar11 == 0x55)))) {
        bVar17 = true;
      }
      if (!bVar17) goto LAB_82b34978;
      uVar11 = *(uint *)(uVar21 - 0x20);
      iVar6 = fn_82ABDD90(param_1,uVar11 >> 7 & 0x7f,uVar11 >> 0x13 & 7,uVar11 >> 0xe & 7);
      puVar13 = (uint *)(iVar6 + (uVar21 - 0x38));
      if (((puVar13[2] & 3) != 0) ||
         ((uVar21 = puVar13[2] >> 2 & 0xf, uVar21 != 9 && (uVar21 != 8)))) goto LAB_82b34978;
      for (puVar1 = *(uint **)(uVar22 + 0xc); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
        uVar20 = *puVar1;
        if (uVar20 != *puVar13) goto LAB_82b34944;
      }
      uVar20 = 0;
LAB_82b34944:
      if (((puVar13[3] >> 1 & 1) != (uint)(uVar21 == 8)) || (uVar20 == *puVar13)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      if (uVar20 == 0) goto LAB_82b34978;
    }
LAB_82b34b7c:
    uVar21 = 0;
    uVar18 = 0;
    for (puVar13 = *(uint **)(uVar22 + 0xc); puVar13 != (uint *)0x0; puVar13 = (uint *)puVar13[2]) {
      uVar11 = *puVar13;
      uVar5 = uVar21;
      uVar23 = uVar18;
      if (*(uint *)(uVar11 + 0x2c) != uVar19) {
        uVar10 = *(uint *)(uVar11 + 0x30);
        if ((uVar10 >> 0x13 & 1) == 0) {
          for (iVar6 = *(int *)(uVar11 + 8); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
            if ((*(uint *)(*(int *)(iVar6 + 4) + 0x2c) != uVar19) &&
               ((*(uint *)(((uVar10 >> 5 & 0x3fff) + 1) * 4 + *(int *)(*(int *)(iVar6 + 4) + 0x28))
                & 1 << (uVar10 & 0x1f)) == 0)) goto LAB_82b34cdc;
          }
          if (uVar20 == uVar11) {
            uVar5 = uVar20;
            uVar23 = 0x10000000;
          }
          else {
            uVar23 = *(uint *)(uVar11 + 0x44) & 0xfffffff;
            bVar17 = uVar23 == uVar18;
            uVar5 = uVar11;
            if ((uVar23 <= uVar18) && (uVar5 = uVar21, uVar23 = uVar18, bVar17)) {
              iVar6 = *(int *)(uVar21 + 8);
              while ((uVar5 = uVar21, iVar6 != 0 &&
                     (uVar5 = uVar11,
                     (*(uint *)(((uVar10 >> 5 & 0x3fff) + 1) * 4 +
                               *(int *)(*(int *)(iVar6 + 4) + 0x28)) & 1 << (uVar10 & 0x1f)) == 0)))
              {
                iVar6 = *(int *)(iVar6 + 0xc);
              }
            }
          }
        }
        else {
          iVar6 = *(int *)(uVar11 + 0x74);
          if ((*(uint *)(iVar6 + 0x18) & 0x3fff8000) == 0) {
            *(uint *)(iVar6 + 0x18) = *(uint *)(iVar6 + 0x18) & 0xffff8000;
            for (iVar7 = *(int *)(uVar11 + 8); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xc)) {
              *(uint *)(iVar6 + 0x18) =
                   *(uint *)(iVar6 + 0x18) & 0xffff8000 | *(uint *)(iVar6 + 0x18) + 1 & 0x7fff;
            }
          }
          uVar18 = *(uint *)(iVar6 + 0x18);
          uVar4 = ((ulonglong)uVar18 & 0xffff8000) + 0x8000 & 0x3fff8000;
          uVar14 = CONCAT44(uVar18,uVar18) & 0xffffffffc0007fff | uVar4;
          *(int *)(iVar6 + 0x18) = (int)uVar14;
          if (((uVar4 >> 0xf ^ uVar14) & 0x7fff) == 0) {
            if ((*puVar24 & 1) == 0) {
              uVar18 = *puVar9 & 0xfffffffe;
              iVar6 = uVar18 - 4;
              if ((iVar6 == 0) || (*(uint *)(uVar18 + 8) < *(int *)(uVar18 + 4) + 1U))
              goto LAB_82b34c40;
            }
            else {
LAB_82b34c40:
              iVar6 = fn_82AD6090(puVar9,1);
            }
            iVar7 = *(int *)(iVar6 + 8);
            *(int *)(iVar6 + 8) = iVar7 + 1;
            *(uint *)((iVar7 + 4) * 4 + iVar6) = uVar11;
          }
        }
      }
LAB_82b34cdc:
      uVar21 = uVar5;
      uVar18 = uVar23;
    }
    if ((((*(uint *)(uVar22 + 0x24) & 1) == 0) &&
        (uVar18 = *(uint *)(uVar22 + 0x20) & 0xfffffffe, uVar18 != 0x28)) &&
       ((*(uint *)(uVar18 - 0x20) & 0x3f80) == 0x2a00)) {
      iVar6 = fn_82ABDD90(param_1,0x54,0,0);
      iVar6 = *(int *)((*(uint *)(iVar6 + (uVar18 - 0x3c)) >> 5 & 0x1f) * 0x44 + param_1[0x9a] + 8);
      uVar18 = *(uint *)(iVar6 + 0x30) >> 0x16 & 1;
      while ((uVar18 != 0 && (iVar6 = *(int *)(iVar6 + 0x50), iVar6 != 0))) {
        uVar18 = *(uint *)(iVar6 + 0x30) & 0x400000;
      }
      if ((*puVar3 & 1) == 0) {
        uVar18 = *puVar8 & 0xfffffffe;
        iVar7 = uVar18 - 4;
        if ((iVar7 == 0) || (*(uint *)(uVar18 + 8) < *(int *)(uVar18 + 4) + 1U)) goto LAB_82b34dd4;
      }
      else {
LAB_82b34dd4:
        iVar7 = fn_82AD6090(puVar8,1);
      }
      iVar2 = *(int *)(iVar7 + 8);
      *(int *)(iVar7 + 8) = iVar2 + 1;
      *(int *)((iVar2 + 4) * 4 + iVar7) = iVar6;
    }
    puVar13 = *(uint **)(uVar22 + 0xc);
    uVar22 = uVar21;
    for (; puVar13 != (uint *)0x0; puVar13 = (uint *)puVar13[2]) {
      uVar18 = *puVar13;
      if ((*(uint *)(uVar18 + 0x2c) != uVar19) &&
         (uVar20 = *(uint *)(uVar18 + 0x30), (uVar20 >> 0x13 & 1) == 0)) {
        for (iVar6 = *(int *)(uVar18 + 8); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
          if ((*(uint *)(*(int *)(iVar6 + 4) + 0x2c) != uVar19) &&
             ((*(uint *)(((uVar20 >> 5 & 0x3fff) + 1) * 4 + *(int *)(*(int *)(iVar6 + 4) + 0x28)) &
              1 << (uVar20 & 0x1f)) == 0)) goto LAB_82b34fa4;
        }
        if ((((*(uint *)(uVar18 + 0x24) & 1) == 0) &&
            (uVar20 = *(uint *)(uVar18 + 0x20) & 0xfffffffe, uVar20 != 0x28)) &&
           ((*(uint *)(uVar20 - 0x20) & 0x3f80) == 0x2a80)) {
          iVar6 = fn_82ABDD90(param_1,0x55,0,0);
          iVar6 = *(int *)(iVar6 + (uVar20 - 0x3c));
          iVar7 = fn_82ABDD90(param_1,0x54,0,0);
          iVar6 = *(int *)((*(uint *)(iVar6 + -0x14 + iVar7) >> 5 & 0x1f) * 0x44 + param_1[0x9a] + 4
                          );
          uVar20 = *(uint *)(iVar6 + 0x30) >> 0x16 & 1;
          while ((uVar20 != 0 && (iVar6 = *(int *)(iVar6 + 0x50), iVar6 != 0))) {
            uVar20 = *(uint *)(iVar6 + 0x30) & 0x400000;
          }
          for (piVar16 = *(int **)(uVar18 + 0xc); piVar16 != (int *)0x0; piVar16 = (int *)piVar16[2]
              ) {
            if (iVar6 == *piVar16) {
              bVar17 = true;
              goto LAB_82b34f30;
            }
          }
          bVar17 = false;
LAB_82b34f30:
          if (bVar17) {
            if (uVar18 == uVar22) {
              uVar22 = 0;
            }
            goto LAB_82b34fa4;
          }
        }
        if (uVar18 != uVar22) {
          if ((*puVar3 & 1) == 0) {
            uVar20 = *puVar8 & 0xfffffffe;
            iVar6 = uVar20 - 4;
            if ((iVar6 == 0) || (*(uint *)(uVar20 + 8) < *(int *)(uVar20 + 4) + 1U))
            goto LAB_82b34f80;
          }
          else {
LAB_82b34f80:
            iVar6 = fn_82AD6090(puVar8,1);
          }
          iVar7 = *(int *)(iVar6 + 8);
          *(int *)(iVar6 + 8) = iVar7 + 1;
          *(uint *)((iVar7 + 4) * 4 + iVar6) = uVar18;
        }
      }
LAB_82b34fa4:;}
    if (uVar22 == 0) {
      do {
        if (((*puVar3 & 1) == 0) && (*puVar3 != 0)) {
          uVar18 = *puVar8 & 0xfffffffe;
          puVar13 = (uint *)(uVar18 - 4);
          iVar6 = *(int *)(uVar18 + 4) + -1;
          uVar22 = puVar13[*(int *)(uVar18 + 4) + 3];
          *(int *)(uVar18 + 4) = iVar6;
          puVar1 = puVar8;
        }
        else {
          if (((*puVar24 & 1) != 0) || (*puVar24 == 0)) {
            uVar22 = param_1[1];
            goto joined_r0x82b35098;
          }
          uVar18 = *puVar9 & 0xfffffffe;
          puVar13 = (uint *)(uVar18 - 4);
          iVar6 = *(int *)(uVar18 + 4) + -1;
          uVar22 = puVar13[*(int *)(uVar18 + 4) + 3];
          *(int *)(uVar18 + 4) = iVar6;
          puVar1 = puVar9;
        }
        if (iVar6 == 0) {
          *(uint *)(puVar13[1] & 0xfffffffe) = *puVar13;
          *(uint *)(*puVar13 & 0xfffffffe) = puVar13[1];
          fn_82AA6648(puVar1,puVar13,((ulonglong)puVar13[3] + 4 & 0x3fffffff) << 2);
        }
      } while (*(uint *)(uVar22 + 0x2c) == uVar19);
    }
  } while( true );
joined_r0x82b35098:
  if (((uVar22 & 1) != 0) || (uVar22 == 0)) {
    return;
  }
  if ((*(int *)(uVar22 + 0xc) == 0) || (bVar17 = true, *(int *)(*(int *)(uVar22 + 0xc) + 8) == 0)) {
    bVar17 = false;
  }
  if ((((bVar17) && ((*(uint *)(uVar22 + 0x24) & 1) == 0)) &&
      (uVar19 = *(uint *)(uVar22 + 0x20) & 0xfffffffe, uVar19 != 0x28)) &&
     ((*(uint *)(uVar19 - 0x20) & 0x3f80) == 0x2d00)) {
    uVar18 = *(uint *)(uVar19 - 0x20);
    iVar6 = fn_82ABDD90(param_1,uVar18 >> 7 & 0x7f,uVar18 >> 0x13 & 7,uVar18 >> 0xe & 7);
    puVar24 = (uint *)(iVar6 + (uVar19 - 0x38));
    uVar18 = *(uint *)((uVar22 & 0xfffffffe) + 4);
    if ((*puVar24 == (-(uint)((uVar18 & 1) == 0) & uVar18)) &&
       (((((puVar24[2] & 3) != 0 || (uVar18 = puVar24[2] >> 2 & 0xf, uVar18 < 8)) || (9 < uVar18))
        && (iVar6 = fn_82B88A48(*(undefined4 *)(*(int *)(uVar19 + 4) + 0xc),param_1),
           iVar6 != 0)))) {
      for (puVar3 = *(uint **)(uVar22 + 0xc); puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[2]) {
        uVar18 = *puVar3;
        if (uVar18 != *puVar24) goto LAB_82b351a0;
      }
      uVar18 = 0;
LAB_82b351a0:
      iVar7 = *(int *)(uVar19 + 4);
      piVar16 = (int *)(*(int *)(iVar7 + 0xc) + 4);
      for (iVar2 = *piVar16; iVar2 != iVar7; iVar2 = *(int *)(iVar2 + 8)) {
        piVar16 = (int *)(iVar2 + 8);
      }
      *piVar16 = *(int *)(iVar7 + 8);
      *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar6 + 4);
      *(int *)(iVar6 + 4) = iVar7;
      *(int *)(iVar7 + 0xc) = iVar6;
      *puVar24 = uVar18;
      puVar24[3] = puVar24[3] & 0xfffffffd | ~puVar24[3] & 2;
    }
  }
  uVar22 = *(uint *)((uVar22 & 0xfffffffe) + 4);
  goto joined_r0x82b35098;
}

