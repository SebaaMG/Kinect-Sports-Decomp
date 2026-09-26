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
extern int fn_82ABDD90();
extern int fn_82ABE0E8();
extern int fn_82ABE2E0();
extern int fn_82AC63D0();
extern int fn_82AC64B8();
extern int fn_82AC6650();
extern int fn_82AC6740();
extern int fn_82AC68F0();
extern int fn_82AC6A10();
extern int fn_82AC6CD0();
extern int fn_82AC6D78();
extern int fn_82AC6EF0();
extern int fn_82ACB4F0();
extern int fn_82AD14F0();
extern int fn_82AD20C0();
extern int fn_82AD2128();
extern int fn_82B18F40();
extern int fn_82B44B88();
extern int fn_82B81180();
extern int fn_82B841E8();
extern int fn_82B8AC10();
extern int fn_82B8AE98();
extern int fn_82B8F170();
extern int fn_82B8F208();
extern int fn_82B8F328();
extern unsigned int iStack_a0;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;


/* WARNING: Type propagation algorithm not settling */

void fn_82AC70D0(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  char cVar12;
  uint uVar10;
  uint uVar11;
  undefined4 uVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint *puVar18;
  bool bVar19;
  byte bVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  int *piVar24;
  uint uVar25;
  int iStack_a0;
  int *piStack_9c;
  int aiStack_98 [2];
  uint *apuStack_90 [2];
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  
  bVar20 = 0;
  bVar19 = false;
  if ((param_1[10] & 4) != 0) {
    for (uVar21 = param_1[1]; ((uVar21 & 1) == 0 && (uVar21 != 0));
        uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
      if (((*(uint *)(uVar21 + 0x1c) & 1) == 0) &&
         (uVar25 = *(uint *)(uVar21 + 0x18) & 0xfffffffe, uVar25 != 0x28)) {
        uVar6 = *(uint *)(uVar25 - 0x20);
        uVar10 = uVar6 >> 7 & 0x7f;
        if (((((uVar10 == 0x56) || (uVar10 == 0x57)) || (uVar10 == 0x59)) ||
            ((uVar10 == 0x5a || (uVar10 == 0x54)))) || (bVar4 = false, uVar10 == 0x55)) {
          bVar4 = true;
        }
        if (bVar4) {
          iVar5 = fn_82ABDD90(param_1,uVar10,uVar6 >> 0x13 & 7,uVar6 >> 0xe & 7);
          piVar24 = (int *)(iVar5 + (uVar25 - 0x38));
          if (((piVar24[2] & 3U) == 0) &&
             ((uVar10 = (uint)piVar24[2] >> 2 & 0xf, uVar10 == 9 || (uVar10 == 8)))) {
            for (piVar15 = *(int **)(uVar21 + 0xc); piVar15 != (int *)0x0;
                piVar15 = (int *)piVar15[2]) {
              iVar5 = *piVar15;
              if (iVar5 != *piVar24) goto LAB_82ac71d8;
            }
            iVar5 = 0;
LAB_82ac71d8:
            iVar9 = *piVar24;
            iVar14 = iVar5;
            iVar17 = iVar9;
            if ((piVar24[3] & 2U) != 0) {
              iVar14 = iVar9;
              iVar17 = iVar5;
            }
            uVar7 = (uint)piVar24[3] >> 2 & 1;
            if (uVar10 == 9) {
              uVar7 = (uint)(uVar7 == 0);
            }
            if (uVar7 == 0) {
              iVar17 = iVar14;
            }
            if (iVar17 != iVar9) {
              *(uint *)(uVar25 - 0x20) = uVar6 & 0xfffbffff | ~uVar6 & 0x40000;
              *piVar24 = iVar5;
              piVar24[3] = piVar24[3] & 0xfffffffdU | ~piVar24[3] & 2U;
            }
            if (((*(uint *)(uVar21 + 0x4c) >> 0x16 & 1) != 0) &&
               (((*(uint *)(uVar21 + 0x4c) >> 0x17 & 0xff ^ *(uint *)(uVar25 - 0x20) >> 0x12) & 1)
                != 0)) {
              fn_82B81180(*(undefined4 *)(*(int *)(uVar25 + 4) + 0xc),param_1);
              *(uint *)(uVar25 - 0x20) =
                   *(uint *)(uVar25 - 0x20) & 0xfffbffff | ~*(uint *)(uVar25 - 0x20) & 0x40000;
            }
          }
        }
      }
    }
  }
  uVar21 = 0;
  uVar25 = param_1[1];
  if ((param_1[1] & 1) == 0) {
joined_r0x82ac72bc:
    if (uVar25 != 0) {
      uVar6 = *(uint *)(uVar25 + 0x1c);
      puVar23 = (uint *)(uVar25 + 0x1c);
      if ((((uVar6 & 1) != 0) || (uVar6 == 0)) || ((*(uint *)(uVar6 + 8) & 0x3f80) != 0x3f00)) {
        uVar6 = fn_82B841E8(param_1,uVar25,0,0x7e,0,0);
        uVar10 = uVar6 & 0xfffffffe;
        *(uint *)(uVar10 + 0x28) = *puVar23;
        *(uint *)((*puVar23 & 0xfffffffe) + 0x24) = uVar10 + 0x28;
        *(uint *)(uVar10 + 0x24) = (uint)puVar23 | 1;
        *puVar23 = uVar10;
      }
      if ((*(uint *)(uVar25 + 0x44) & 0x80000000) == 0) {
LAB_82ac7470:
        if (((uVar25 == (-(uint)((param_1[1] & 1) == 0) & param_1[1])) ||
            ((*(uint *)(uVar25 + 0x4c) & 0x200000) != 0)) ||
           (((*(uint *)(uVar25 + 0x4c) & 0x10000000) != 0 &&
            (((uint *)param_1[0xe] != (uint *)0x0 && ((*(uint *)param_1[0xe] & 0x1000) != 0)))))) {
          *(uint *)(uVar6 + 0x14) = *(uint *)(uVar6 + 0x14) | 0x10000;
        }
      }
      else {
        if ((*(int *)(uVar25 + 0xc) == 0) ||
           (bVar4 = true, *(int *)(*(int *)(uVar25 + 0xc) + 8) == 0)) {
          bVar4 = false;
        }
        if (bVar4) goto LAB_82ac7470;
        *(uint *)(uVar6 + 0x14) = *(uint *)(uVar6 + 0x14) | 0x10000;
        if ((*puVar23 & 1) == 0) {
          uVar6 = *(uint *)(uVar25 + 0x18);
          do {
            uVar6 = uVar6 & 0xfffffffe;
            if (uVar6 == 0x28) break;
            if (((*(uint *)(uVar6 - 0x20) & 0x3f80) == 0x3a80) &&
               ((*(uint *)(uVar6 - 0x20) >> 0x11 & 1) != 0)) {
              iVar5 = fn_82ABDD90(param_1,0x75,0,0);
              puVar18 = (uint *)(iVar5 + (uVar6 - 0x38));
              if (((*puVar18 & 7) == 7) && (puVar18[1] == 2)) {
                if (*(int **)(uVar25 + 0xc) == (int *)0x0) {
                  iVar5 = 0;
                }
                else {
                  iVar5 = **(int **)(uVar25 + 0xc);
                }
                if (((~(ulonglong)*(uint *)(iVar5 + 0x44) & 0xffffffff) >> 0x1e & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                uVar10 = *(uint *)(iVar5 + 0x1c);
                if ((uVar10 & 1) == 0) goto joined_r0x82ac7438;
                break;
              }
            }
            uVar6 = *(uint *)(uVar6 - 4);
          } while ((uVar6 & 1) == 0);
        }
      }
      goto LAB_82ac74c4;
    }
  }
LAB_82ac7c68:
  if (((bVar20 != 0) && (uVar21 = param_1[1], (uVar21 & 1) == 0)) && (uVar21 != 0)) {
    do {
      if ((*(byte *)(uVar21 + 0x30) & 1) != 0) {
        fn_82AC6CD0(param_1,uVar21);
        uVar25 = *(uint *)((uVar21 & 0xfffffffe) + 4);
        if (((uVar25 & 1) != 0) || (uVar25 == 0)) break;
        do {
          if (((*(byte *)(uVar25 + 0x30) & 1) == 0) ||
             (cVar12 = fn_82AC63D0(uVar25,uVar21), cVar12 == '\0')) break;
          if ((*(uint *)(uVar25 + 0x4c) & 0x200000) != 0) {
            uVar25 = 0;
            break;
          }
          uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4);
          if ((uVar25 & 1) != 0) goto LAB_82ac7d8c;
        } while (uVar25 != 0);
        if (uVar25 == 0) break;
        fn_82AC6CD0(param_1,uVar25);
        if ((*(uint *)(uVar25 & 0xfffffffe) & 1) == 0) {
          uVar21 = (*(uint *)(uVar25 & 0xfffffffe) & 0xfffffffe) - 4;
        }
        else {
          uVar21 = 0;
        }
      }
      uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4);
      if (((uVar21 & 1) != 0) || (uVar21 == 0)) break;
    } while( true );
  }
LAB_82ac7d8c:
  uVar21 = param_1[1];
  if (((uVar21 & 1) == 0) && (uVar21 != 0)) {
LAB_82ac7da4:
    do {
      if ((*(uint *)(uVar21 + 0x1c) & 1) == 0) {
        uVar25 = *(uint *)(uVar21 + 0x18) & 0xfffffffe;
        if ((uVar25 - 0x28 != 0) &&
           ((uVar6 = *(uint *)(uVar25 - 0x20) >> 7 & 0x7f, uVar6 == 0x5a || (uVar6 == 0x59)))) {
          uVar6 = *(uint *)(uVar25 - 0x20);
          iVar5 = fn_82ABDD90(param_1,uVar6 >> 7 & 0x7f,uVar6 >> 0x13 & 7,uVar6 >> 0xe & 7);
          uVar6 = *(uint *)((uVar21 & 0xfffffffe) + 4);
          uVar10 = *(uint *)(iVar5 + (uVar25 - 0x38));
          if (((uVar6 & 1) == 0) && (uVar6 != 0)) {
            while ((*(uint *)(uVar6 + 0x4c) & 0x200000) == 0) {
              if ((*(uint *)(uVar6 + 0x14) & 1) == 0) {
                iVar5 = uVar6 + 0x10;
                uVar7 = -(uint)((*(uint *)(uVar6 + 0x14) & 1) == 0) & *(uint *)(uVar6 + 0x14);
              }
              else {
                iVar5 = uVar6 + 0x18;
                uVar7 = -(uint)((*(uint *)(uVar6 + 0x1c) & 1) == 0) & *(uint *)(uVar6 + 0x1c);
              }
              if (uVar7 != 0) {
                while (uVar7 != (uVar10 & 0xfffffffc)) {
                  cVar12 = fn_82AC6740(uVar7);
                  if (cVar12 != '\0') goto LAB_82ac7ec8;
                  uVar7 = *(uint *)((uVar7 & 0xfffffffe) + 0x28);
                  if ((((uVar7 & 1) != 0) || (uVar7 == 0)) &&
                     ((iVar5 == uVar6 + 0x18 ||
                      ((uVar7 = *(uint *)(uVar6 + 0x1c), (uVar7 & 1) != 0 ||
                       (iVar5 = uVar6 + 0x18, uVar7 == 0)))))) goto LAB_82ac7ed0;
                }
                uVar6 = 0;
LAB_82ac7ec8:
                if (uVar7 != 0) break;
              }
LAB_82ac7ed0:
              uVar6 = *(uint *)((uVar6 & 0xfffffffe) + 4);
              if (((uVar6 & 1) != 0) || (uVar6 == 0)) goto LAB_82ac7ef4;
            }
            if (uVar6 != 0) goto LAB_82ac7f04;
LAB_82ac7ef4:
            fn_82B8AE98(param_1,uVar25 - 0x28);
            goto LAB_82ac7da4;
          }
        }
      }
LAB_82ac7f04:
      uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4);
      if (((uVar21 & 1) != 0) || (uVar21 == 0)) break;
    } while( true );
  }
  param_1[0xb] = param_1[0xb] | 0x4000;
  if (bVar19) {
    fn_82B44B88(param_1);
  }
  if ((param_1[0xc] & 0xffff0000) == 0xffff0000) {
    for (uVar21 = param_1[1]; ((uVar21 & 1) == 0 && (uVar21 != 0));
        uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
      *(uint *)(uVar21 + 0x30) = *(uint *)(uVar21 + 0x30) & 0xbfffffff;
      *(uint *)(uVar21 + 0x4c) = *(uint *)(uVar21 + 0x4c) & 0x9fffffff | 0x20000000;
    }
    do {
      bVar19 = false;
      for (uVar21 = param_1[1]; ((uVar21 & 1) == 0 && (uVar21 != 0));
          uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
        if ((*(uint *)(uVar21 + 0x4c) & 0x20000000) != 0) {
          for (iVar5 = *(int *)(uVar21 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
            uVar3 = (ulonglong)*(uint *)(uVar21 + 0x30) & 0x7ffff;
            if ((*(uint *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(*(int *)(iVar5 + 4) + 0x28)) &
                1 << ((uint)uVar3 & 0x1f)) != 0) {
              fn_82AC6EF0(param_1,uVar21);
              bVar19 = true;
              break;
            }
          }
          if ((*(uint *)(uVar21 + 0x30) >> 0x13 & 1) != 0) {
            uVar25 = 0;
            for (iVar5 = *(int *)(uVar21 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
              uVar25 = uVar25 + 1;
              if ((*(uint *)(*(int *)(iVar5 + 4) + 0x4c) & 0x20000000) == 0) {
                uVar25 = 2;
                break;
              }
            }
            if ((1 < uVar25) &&
               (piVar24 = (int *)(*(int *)(uVar21 + 0x74) + 0x10),
               *(int *)(*(int *)(uVar21 + 0x74) + 0x10) != 0)) {
              for (; piVar24 != (int *)0x0; piVar24 = (int *)piVar24[1]) {
                if (((*(uint *)(*piVar24 + 0x30) >> 0x16 & 1) == 0) &&
                   ((*(uint *)(*piVar24 + 0x30) >> 0x14 & 1) != 0)) {
                  fn_82AC6EF0(param_1,uVar21);
                  bVar19 = true;
                }
              }
            }
          }
          uVar25 = *(uint *)(uVar21 + 0x1c);
          if (((uVar25 & 1) == 0) && (uVar25 != 0)) {
            while( true ) {
              uVar6 = *(uint *)(uVar25 + 8) >> 7 & 0x7f;
              if ((uVar6 < 0x5b) || (bVar4 = true, 0x5e < uVar6)) {
                bVar4 = false;
              }
              if ((bVar4) && (uVar6 != 0x5d)) break;
              uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 0x28);
              if (((uVar25 & 1) != 0) || (uVar25 == 0)) goto LAB_82ac8118;
            }
            bVar19 = true;
            *(uint *)(uVar21 + 0x4c) = *(uint *)(uVar21 + 0x4c) & 0x9fffffff | 0x40000000;
          }
        }
LAB_82ac8118:;}
      if ((param_1[1] & 1) == 0) {
        uVar21 = *param_1;
        do {
          uVar21 = uVar21 & 0xfffffffe;
          puVar23 = (uint *)(uVar21 - 4);
          if (puVar23 == (uint *)0x0) break;
          if ((*(uint *)(uVar21 + 0x48) & 0x40000000) != 0) {
            iVar5 = fn_82AC6A10(param_1,puVar23);
            if ((iVar5 != 0) && ((*(uint *)(iVar5 + 0x4c) & 0x40000000) == 0)) {
              bVar19 = true;
              *(uint *)(iVar5 + 0x4c) = *(uint *)(iVar5 + 0x4c) & 0x9fffffff | 0x40000000;
            }
            uStack_80 = 0;
            uStack_7c = 0;
            uStack_78 = 1;
            uStack_88 = 0;
            apuStack_90[0] = puVar23;
            fn_82B8F208(apuStack_90,*(undefined4 *)(uVar21 + 4));
            while (iVar5 = fn_82AC64B8(apuStack_90), iVar5 != 0) {
              if ((*(uint *)(iVar5 + 0x4c) & 0x40000000) == 0) {
                bVar19 = true;
                *(uint *)(iVar5 + 0x4c) = *(uint *)(iVar5 + 0x4c) & 0x9fffffff | 0x40000000;
              }
            }
          }
          uVar21 = *puVar23;
        } while ((uVar21 & 1) == 0);
      }
    } while (bVar19);
    uVar21 = param_1[1];
    if (((uVar21 & 1) == 0) && (uVar21 != 0)) {
LAB_82ac8204:
      for (piVar24 = *(int **)(uVar21 + 0x1c); (((uint)piVar24 & 1) == 0 && (piVar24 != (int *)0x0))
          ; piVar24 = *(int **)(((uint)piVar24 & 0xfffffffe) + 0x28)) {
        if (((piVar24[2] & 0x3f80U) == 0x2e80) && (*piVar24 == 0)) {
          uVar25 = (uint)piVar24 & 0xfffffffe;
          puVar23 = (uint *)(uVar25 + 0x24);
          uVar6 = uVar25;
          uVar10 = uVar21;
LAB_82ac8318:
          uVar6 = *(uint *)(uVar6 + 0x24);
          if ((uVar6 & 1) == 0) goto LAB_82ac8268;
LAB_82ac82bc:
          uVar6 = 0;
          do {
            if (uVar6 != 0) {
              uVar7 = *(uint *)(uVar6 + 8) >> 7 & 0x7f;
              if ((uVar7 < 0x60) || (bVar19 = true, 0x66 < uVar7)) {
                bVar19 = false;
              }
              if (bVar19) {
                *(uint *)(uVar10 + 0x30) = *(uint *)(uVar10 + 0x30) | 0x40000000;
                fn_82B18F40(param_1,1);
                uVar7 = param_1[1];
                uVar22 = 0;
                if (((uVar7 & 1) != 0) || (uVar7 == 0)) goto LAB_82ac842c;
                goto LAB_82ac835c;
              }
              if ((uVar7 < 0x5b) || (bVar19 = true, 0x5e < uVar7)) {
                bVar19 = false;
              }
              if (bVar19) goto LAB_82ac8678;
              goto LAB_82ac8318;
            }
            do {
              uVar10 = fn_82AC6A10(param_1,uVar10);
              if (uVar10 == 0) goto LAB_82ac8678;
              if ((*(uint *)(uVar10 + 0x4c) & 0x40000000) != 0) {
                uVar10 = 0;
                break;
              }
            } while ((*(uint *)(uVar10 + 0x4c) & 0x20000000) == 0);
            if (uVar10 == 0) goto LAB_82ac8678;
            if ((*(uint *)(uVar10 + 0x1c) & 1) != 0) goto LAB_82ac82bc;
            uVar6 = *(uint *)(uVar10 + 0x18);
LAB_82ac8268:
            uVar6 = (uVar6 & 0xfffffffe) - 0x28;
          } while( true );
        }
      }
      goto LAB_82ac8678;
    }
  }
  return;
  while( true ) {
    if ((*(uint *)(uVar10 + 8) >> 0x11 & 1) != 0) {
      *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) & 0xfffbffff | *(uint *)(uVar6 - 0x20) & 0x40000
      ;
    }
    uVar10 = *(uint *)((uVar10 & 0xfffffffe) + 0x28);
    if ((uVar10 & 1) != 0) break;
joined_r0x82ac7438:
    if (uVar10 == 0) break;
  }
LAB_82ac74c4:
  uVar6 = 0;
  if ((*puVar23 & 1) != 0) goto LAB_82ac7abc;
  uVar10 = *(uint *)(uVar25 + 0x18) & 0xfffffffe;
  piVar24 = (int *)(uVar10 - 0x28);
  if (piVar24 == (int *)0x0) goto LAB_82ac7abc;
  uVar7 = *(uint *)(uVar10 - 0x20) >> 7 & 0x7f;
  if ((((uVar7 == 0x56) || (uVar7 == 0x57)) || (uVar7 == 0x59)) ||
     (((uVar7 == 0x5a || (uVar7 == 0x54)) || (bVar4 = false, uVar7 == 0x55)))) {
    bVar4 = true;
  }
  if (bVar4) {
    uVar7 = *(uint *)(uVar10 - 0x20);
    iVar5 = fn_82ABDD90(param_1,uVar7 >> 7 & 0x7f,uVar7 >> 0x13 & 7,uVar7 >> 0xe & 7);
    puVar23 = (uint *)(iVar5 + (uVar10 - 0x38));
    if ((*puVar23 & 3) != 0) goto LAB_82ac7abc;
    iVar5 = fn_82ABE0E8(piVar24,param_1);
    if (iVar5 == 4) {
      *(uint *)(uVar25 + 0x4c) = *(uint *)(uVar25 + 0x4c) | 0x4000000;
    }
    uVar6 = *puVar23;
    if ((*(uint *)(uVar25 + 0x30) >> 0x1a & 1) != 0) {
      cVar12 = fn_82AC6650(param_1,piVar24,puVar23,&piStack_9c);
      piVar15 = piStack_9c;
      if (cVar12 == '\0') {
        param_1[0xb] = param_1[0xb] | 0x2000;
        uVar10 = (uint)piStack_9c[2] >> 7 & 0x7f;
        if ((uVar10 < 0x15) || (bVar4 = true, 0x18 < uVar10)) {
          bVar4 = false;
        }
        if (bVar4) {
          iStack_a0 = 0;
          aiStack_98[0] = 0;
          fn_82AD14F0(param_1,piStack_9c,&iStack_a0,aiStack_98);
          if ((iStack_a0 == 0) && (aiStack_98[0] == 0)) {
            uVar10 = fn_82AC6CD0(param_1,uVar6);
          }
          else {
            uVar10 = 0;
            if (aiStack_98[0] != 0) {
              uVar10 = fn_82AC6D78(param_1);
            }
            if (iStack_a0 != 0) {
              uVar7 = fn_82AC6D78(param_1,iStack_a0);
              *puVar23 = uVar7 | 1;
              iVar5 = fn_82B841E8(param_1,(ulonglong)*(uint *)(iStack_a0 + 0x1c),
                                        (ulonglong)*(uint *)(iStack_a0 + 0x1c) + 0x18,0x5a,0,0);
              if (uVar10 == 0) {
                uVar13 = 0;
                puVar1 = *(undefined4 **)(*(int *)(iStack_a0 + 0x1c) + 0xc);
                if (puVar1 != (undefined4 *)0x0) {
                  uVar13 = *puVar1;
                }
                uVar10 = fn_82AC6CD0(param_1,uVar13);
              }
              uVar7 = *(uint *)(iVar5 + 8);
              *(uint *)(iVar5 + 8) = uVar7 & 0xfff9ffff | 0x20000;
              iVar9 = fn_82ABDD90(param_1,((ulonglong)uVar7 & 0x3f80) >> 7,uVar7 >> 0x13 & 7,
                                    ((ulonglong)uVar7 & 0x1c000) >> 0xe);
              *(uint *)(iVar9 + iVar5 + -0x10) = uVar10 | 1;
              goto LAB_82ac7abc;
            }
          }
          *puVar23 = uVar10 | 1;
        }
        else {
          uVar10 = fn_82AC6CD0(param_1,uVar6);
          *puVar23 = uVar10 | 1;
          if ((*(uint *)(uVar6 + 0x4c) >> 0x16 & 1) != 0) {
            iVar5 = *(int *)(uVar6 + 0x70);
            if ((*(uint *)(iVar5 + 0x30) >> 0x16 & 1) != 0) {
LAB_82ac76b8:
              do {
                iVar5 = *(int *)(iVar5 + 0x50);
                if (iVar5 != 0) {
                  if ((*(uint *)(iVar5 + 0x30) & 0x400000) != 0) goto LAB_82ac76b8;
                }
              } while ((*(uint *)(iVar5 + 0x30) >> 0x16 & 1) != 0);
              *(int *)(uVar6 + 0x70) = iVar5;
            }
            if (*(uint *)(uVar6 + 0x70) == uVar25) {
              bVar4 = true;
              if ((puVar23[3] & 1) == 0) {
                if ((puVar23[3] & 2) == 0) {
                  bVar4 = false;
                }
                else {
                  fn_82B8AC10(param_1,piVar24,0,1);
                  if ((piVar15[2] & 0x3f80U) == 0x3c00) {
                    fn_82B8AC10(param_1,piVar15,0,1);
                    piStack_9c = (int *)0x0;
                  }
                  else if (((uint)piVar15[2] >> 0x19 & 1) == 0) {
                    if (*(int *)(uVar25 + 0x60) != 0) {
                      fn_82AD2128(piVar15,1,*(int *)(uVar25 + 0x60),param_1);
                    }
                    *(int **)(uVar25 + 0x60) = piVar15;
                    piVar15[2] = piVar15[2] | 0x2000000;
                  }
                }
              }
              if (bVar4) {
                if ((*(uint *)(uVar6 & 0xfffffffe) & 1) == 0) {
                  uVar10 = (*(uint *)(uVar6 & 0xfffffffe) & 0xfffffffe) - 4;
                }
                else {
                  uVar10 = 0;
                }
                if (uVar10 != uVar25) {
                  iVar5 = fn_82B841E8(param_1,uVar10,uVar10 + 0x18,0x5a,0,0);
                  uVar7 = *(uint *)(iVar5 + 8);
                  *(uint *)(iVar5 + 8) = uVar7 | 0x20000;
                  *(uint *)(iVar5 + 8) =
                       (*(uint *)(uVar10 + 0x4c) >> 0x17 & 1) << 0x12 | uVar7 & 0xfffbffff | 0x20000
                  ;
                  iVar9 = fn_82ABDD90(param_1,((ulonglong)uVar7 & 0x3f80) >> 7,uVar7 >> 0x13 & 7,
                                        ((ulonglong)uVar7 & 0x1c000) >> 0xe);
                  uVar13 = 0;
                  if (*(undefined4 **)(uVar10 + 0xc) != (undefined4 *)0x0) {
                    uVar13 = **(undefined4 **)(uVar10 + 0xc);
                  }
                  uVar10 = fn_82AC6CD0(param_1,uVar13);
                  *(uint *)(iVar9 + iVar5 + -0x10) = uVar10 | 1;
                }
              }
            }
          }
        }
        goto LAB_82ac7abc;
      }
      fn_82B8AC10(param_1,piVar24,0,1);
      piVar24 = piStack_9c;
      if (piStack_9c == (int *)0x0) goto LAB_82ac7abc;
      if ((piStack_9c[2] & 0x3f80U) != 0x3c00) {
        if (((uint)piStack_9c[2] >> 0x19 & 1) == 0) {
          if (*(int *)(uVar25 + 0x60) != 0) {
            fn_82AD2128(piStack_9c,1,*(int *)(uVar25 + 0x60),param_1);
          }
          *(int **)(uVar25 + 0x60) = piVar24;
          piVar24[2] = piVar24[2] | 0x2000000;
        }
        goto LAB_82ac7abc;
      }
LAB_82ac7a78:
      fn_82B8AC10(param_1,piVar24,0,1);
      goto LAB_82ac7abc;
    }
    uVar7 = fn_82AC6CD0(param_1,uVar6);
    *puVar23 = uVar7 | 1;
    if ((*(uint *)(uVar10 - 0x20) & 0x3f80) != 0x2a00) goto LAB_82ac7abc;
    uVar10 = *(uint *)((uVar25 & 0xfffffffe) + 4);
  }
  else {
    if (uVar7 != 0x53) goto LAB_82ac7abc;
    if ((*(uint *)(uVar25 + 0x4c) >> 0x16 & 1) != 0) {
      iVar5 = *(int *)(uVar25 + 0x70);
      if ((*(uint *)(iVar5 + 0x30) >> 0x16 & 1) != 0) {
LAB_82ac7964:
        do {
          iVar5 = *(int *)(iVar5 + 0x50);
          if (iVar5 != 0) {
            if ((*(uint *)(iVar5 + 0x30) & 0x400000) != 0) goto LAB_82ac7964;
          }
        } while ((*(uint *)(iVar5 + 0x30) >> 0x16 & 1) != 0);
        *(int *)(uVar25 + 0x70) = iVar5;
      }
      iVar5 = *(int *)(*(int *)(uVar25 + 0x70) + 0xc);
      if ((iVar5 == 0) || (bVar4 = true, *(int *)(iVar5 + 8) == 0)) {
        bVar4 = false;
      }
      if (bVar4) {
        if (*piVar24 != 0) {
          piVar8 = (int *)fn_82B841E8(param_1,*(undefined4 *)(uVar10 - 0xc),0,0x75,0,0);
          uVar7 = (uint)piVar8 & 0xfffffffe;
          puVar23 = (uint *)(uVar10 - 4);
          *(uint *)(uVar7 + 0x24) = *puVar23;
          *(uint *)(*puVar23 & 0xfffffffe) = uVar7;
          *(int **)(uVar7 + 0x28) = piVar24;
          *puVar23 = uVar7 + 0x28;
          piVar8[2] = piVar8[2] | 0x3000000;
          piVar15 = piVar24;
          while (iVar5 = *piVar15, iVar5 != 0) {
            piVar16 = *(int **)(iVar5 + 0x10);
            for (iVar9 = *piVar16; iVar9 != iVar5; iVar9 = *(int *)(iVar9 + 4)) {
              piVar16 = (int *)(iVar9 + 4);
            }
            *piVar16 = *(int *)(iVar5 + 4);
            *(int *)(iVar5 + 4) = *piVar8;
            *piVar8 = iVar5;
            *(int **)(iVar5 + 0x10) = piVar8;
            if (*piVar15 == iVar5) {
              piVar15 = (int *)(iVar5 + 4);
            }
          }
        }
        goto LAB_82ac7a78;
      }
    }
    uVar10 = *(uint *)((uVar25 & 0xfffffffe) + 4);
    if (((uVar10 & 1) != 0) || (uVar10 == 0)) goto LAB_82ac7abc;
  }
  fn_82AC6CD0(param_1,-(uint)((uVar10 & 1) == 0) & uVar10);
LAB_82ac7abc:
  puVar18 = (uint *)(uVar25 + 0xc);
  uVar10 = 0;
  for (puVar23 = *(uint **)(uVar25 + 0xc); puVar23 != (uint *)0x0; puVar23 = (uint *)puVar23[2]) {
    if (*puVar23 != uVar6) {
      uVar10 = *puVar23;
    }
  }
  if (uVar10 != 0) {
    uVar7 = uVar25 & 0xfffffffe;
    uVar6 = *(uint *)(uVar7 + 4);
    if ((uVar10 != (-(uint)((uVar6 & 1) == 0) & uVar6)) &&
       (((*(uint *)(uVar25 + 0x30) >> 0x1b & 1) == 0 ||
        ((*(uint *)((-(uint)((uVar6 & 1) == 0) & uVar6) + 0x30) >> 0x17 & 1) == 0)))) {
      uVar6 = uVar25;
      if ((*(uint *)(uVar25 + 0x30) >> 0x17 & 1) != 0) {
        uVar6 = fn_82AC68F0(param_1);
        piVar24 = (int *)(uVar6 & 0xfffffffe);
        piVar24[1] = *(int *)(uVar7 + 4);
        *(int **)(*(uint *)(uVar7 + 4) & 0xfffffffe) = piVar24 + 1;
        *piVar24 = uVar7 + 4;
        *(int **)(uVar7 + 4) = piVar24;
        while (puVar23 = (uint *)*puVar18, puVar23 != (uint *)0x0) {
          if (*puVar23 == uVar10) {
            fn_82B8F170(uVar25,puVar23,uVar6);
          }
          if ((uint *)*puVar18 == puVar23) {
            puVar18 = puVar23 + 2;
          }
        }
        fn_82B8F328(uVar6,uVar10,param_1);
        bVar19 = true;
      }
      iVar5 = fn_82B841E8(param_1,uVar6,uVar6 + 0x18,0x59,0,0);
      uVar6 = *(uint *)(iVar5 + 8);
      iVar9 = fn_82ABDD90(param_1,uVar6 >> 7 & 0x7f,uVar6 >> 0x13 & 7,uVar6 >> 0xe & 7);
      uVar6 = fn_82AC6CD0(param_1,uVar10);
      *(uint *)(iVar9 + iVar5 + -0x10) = uVar6 | 1;
    }
  }
  bVar20 = *(byte *)(uVar25 + 0x30) & 1 | bVar20;
  if (uVar21 == 0) {
    uVar6 = param_1[1];
    uVar10 = -(uint)((uVar6 & 1) == 0) & uVar6;
  }
  else {
    uVar6 = *(uint *)((uVar21 & 0xfffffffe) + 4);
    uVar10 = -(uint)((uVar6 & 1) == 0) & uVar6;
  }
  if (uVar25 == uVar10) {
    uVar6 = *(uint *)((uVar25 & 0xfffffffe) + 4);
    uVar21 = uVar25;
  }
  uVar25 = uVar6;
  if ((uVar6 & 1) != 0) goto LAB_82ac7c68;
  goto joined_r0x82ac72bc;
  while (uVar11 != uVar10) {
LAB_82ac83e8:
    uVar11 = fn_82AC6A10(param_1,uVar11);
    if (uVar11 == 0) break;
  }
  if (uVar11 != uVar10) {
    uVar22 = uVar7;
  }
  while ((uVar7 = *(uint *)((uVar7 & 0xfffffffe) + 4), (uVar7 & 1) == 0 && (uVar7 != 0))) {
LAB_82ac835c:
    if (((*(uint *)(uVar7 + 0x30) >> 0x1e & 1) != 0) &&
       ((*(uint *)(uVar7 + 0x30) = *(uint *)(uVar7 + 0x30) & 0xbfffffff, uVar21 != uVar7 &&
        (uVar3 = (ulonglong)*(uint *)(uVar10 + 0x30) & 0x7ffff,
        (*(uint *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(uVar7 + 0x28)) & 1 << ((uint)uVar3 & 0x1f)
        ) == 0)))) {
      for (uVar2 = *(uint *)(uVar7 + 0x1c); ((uVar2 & 1) == 0 && (uVar2 != 0));
          uVar2 = *(uint *)((uVar2 & 0xfffffffe) + 0x28)) {
        uVar11 = uVar7;
        if ((*(uint *)(uVar2 + 8) & 0x3f80) == 0x2e80) goto LAB_82ac83e8;
      }
    }
  }
  if (uVar22 == 0) {
LAB_82ac842c:
    *(uint *)((*(uint *)(uVar25 + 0x28) & 0xfffffffe) + 0x24) = *puVar23;
    *(undefined4 *)(*puVar23 & 0xfffffffe) = *(undefined4 *)(uVar25 + 0x28);
    *(undefined4 *)(uVar25 + 0x28) = *(undefined4 *)(uVar6 + 0x28);
    *(uint *)((*(uint *)(uVar6 + 0x28) & 0xfffffffe) + 0x24) = uVar25 + 0x28;
    *puVar23 = uVar6 + 0x28;
    *(uint *)(uVar6 + 0x28) = uVar25;
    piVar24[7] = uVar10;
    if (uVar21 != uVar10) {
      piVar24 = piVar24 + 1;
      while (iVar5 = *piVar24, iVar5 != 0) {
        iVar9 = *(int *)(iVar5 + 0x10);
        if (iVar9 != 0) {
          fn_82AD20C0(iVar9,iVar5,param_1);
          cVar12 = fn_82ABE2E0(iVar9);
          if (cVar12 != '\0') {
            if ((*(uint *)(iVar9 + 8) & 0x3f80) != 0x3a80) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            fn_82B8AC10(param_1,iVar9,0,1);
          }
        }
        if (*piVar24 == iVar5) {
          piVar24 = (int *)(iVar5 + 8);
        }
      }
    }
    uVar25 = param_1[1];
    if (((uVar25 & 1) == 0) && (uVar25 != 0)) {
LAB_82ac8514:
      if (uVar10 != uVar25) {
        for (uVar6 = *(uint *)(uVar25 + 0x1c); ((uVar6 & 1) == 0 && (uVar6 != 0));
            uVar6 = *(uint *)((uVar6 & 0xfffffffe) + 0x28)) {
          if ((*(uint *)(uVar6 + 8) & 0x3f80) == 0x2e80) {
            uVar3 = (ulonglong)*(uint *)(uVar10 + 0x30) & 0x7ffff;
            uVar7 = uVar25;
            if ((*(uint *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(uVar25 + 0x28)) &
                1 << ((uint)uVar3 & 0x1f)) != 0) goto LAB_82ac85b4;
            goto LAB_82ac8594;
          }
        }
      }
      goto LAB_82ac863c;
    }
LAB_82ac8658:
    fn_82ACB4F0(param_1,uVar21,0);
    fn_82ACB4F0(param_1,uVar10,0);
  }
LAB_82ac8678:
  uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4);
  if ((uVar21 & 1) != 0) {
    return;
  }
  if (uVar21 == 0) {
    return;
  }
  goto LAB_82ac8204;
  while (uVar7 != uVar10) {
LAB_82ac8594:
    uVar7 = fn_82AC6A10(param_1,uVar7);
    if (uVar7 == 0) break;
  }
  if (uVar7 == uVar10) {
LAB_82ac85b4:
    piVar24 = (int *)(uVar6 + 4);
    while (iVar5 = *piVar24, iVar5 != 0) {
      iVar9 = *(int *)(iVar5 + 0x10);
      if (iVar9 != 0) {
        fn_82AD20C0(iVar9,iVar5,param_1);
        cVar12 = fn_82ABE2E0(iVar9);
        if (cVar12 != '\0') {
          if ((*(uint *)(iVar9 + 8) & 0x3f80) != 0x3a80) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          fn_82B8AC10(param_1,iVar9,0,1);
        }
      }
      if (*piVar24 == iVar5) {
        piVar24 = (int *)(iVar5 + 8);
      }
    }
    fn_82B8AC10(param_1,uVar6,0,1);
  }
LAB_82ac863c:
  uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4);
  if (((uVar25 & 1) != 0) || (uVar25 == 0)) goto LAB_82ac8658;
  goto LAB_82ac8514;
}

