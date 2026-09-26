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
extern unsigned int *auStack_ac;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b4;
extern int fn_82AA65B0();
extern int fn_82AA66A8();
extern int fn_82ABDAA0();
extern int fn_82ABDD90();
extern int fn_82ABE0E8();
extern int fn_82ABE2E0();
extern int fn_82AC65F0();
extern int fn_82AC68F0();
extern int fn_82AC9F80();
extern int fn_82AD1400();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82AD1BF0();
extern int fn_82AD2020();
extern int fn_82AD2128();
extern int fn_82AD21B8();
extern int fn_82AD2410();
extern int fn_82AD2770();
extern int fn_82AD2888();
extern int fn_82AD3A90();
extern int fn_82AD3B30();
extern int fn_82AD4500();
extern int fn_82AD49F0();
extern int fn_82AD4E58();
extern int fn_82AD4F40();
extern int fn_82AD5050();
extern int fn_82AD5398();
extern int fn_82AD6118();
extern int fn_82AD8278();
extern int fn_82B206A0();
extern int fn_82B330F8();
extern int fn_82B42C70();
extern int fn_82B44B88();
extern int fn_82B82D28();
extern int fn_82B841E8();
extern int fn_82B84290();
extern int fn_82B8A3A0();
extern int fn_82B8AC10();
extern int fn_82B8F1B0();
extern int fn_82B8F328();
extern int fn_82B8F618();
extern unsigned int iStack_cc;
extern unsigned int iStack_d4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_d9;
extern unsigned int uStack_de;


/* WARNING: Type propagation algorithm not settling */

void fn_82AD8FB8(uint *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  uint *puVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  char cVar22;
  int iVar16;
  int iVar17;
  ulonglong uVar8;
  uint uVar18;
  undefined8 uVar9;
  uint uVar19;
  undefined8 uVar10;
  int iVar20;
  uint uVar21;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  int *piVar26;
  uint uVar27;
  int *piVar28;
  uint *puVar29;
  int *piVar30;
  uint uVar31;
  uint *puVar32;
  uint *puVar34;
  ulonglong uVar33;
  uint *puVar35;
  uint uVar36;
  double dVar37;
  char cStack_e0;
  char cStack_df;
  undefined1 uStack_de;
  char cStack_dd;
  char cStack_dc;
  char cStack_db;
  char cStack_da;
  undefined1 uStack_d9;
  uint uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint *puStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [172];
  
  if ((((param_1[0xb] & 0x100) != 0) || ((param_1[10] & 4) != 0)) && ((param_1[1] & 1) == 0)) {
    uVar21 = *param_1;
    do {
      uVar21 = uVar21 & 0xfffffffe;
      puVar34 = (uint *)(uVar21 - 4);
      if (puVar34 == (uint *)0x0) break;
      if ((*(uint *)(uVar21 + 0x20) & 1) == 0) {
        uVar14 = *(uint *)(uVar21 + 0x1c) & 0xfffffffe;
        piVar30 = (int *)(uVar14 - 0x28);
        if ((piVar30 != (int *)0x0) &&
           (uVar14 = *(uint *)(uVar14 - 0x20), (uVar14 & 0x3f80) == 0x2980)) {
          iVar15 = 0;
          if (((uVar14 >> 0x1b & 1) == 0) ||
             (iVar16 = *(int *)(uVar21 + 0x3c), *(int *)(uVar21 + 0x3c) == 0)) {
LAB_82ad912c:
            iVar20 = *(int *)(uVar21 + 0x3c);
            if (iVar20 != 0) {
              do {
                if ((*(uint *)(iVar20 + 0x24) & 1) == 0) {
                  lVar24 = ((ulonglong)*(uint *)(iVar20 + 0x20) & 0xfffffffe) - 0x28;
                }
                else {
                  lVar24 = 0;
                }
                iVar17 = fn_82ABE0E8(lVar24,param_1);
                iVar16 = iVar20;
              } while ((iVar17 != 2) &&
                      (iVar20 = *(int *)(iVar20 + 0x40), iVar16 = iVar15, iVar20 != 0));
              if (iVar16 != 0) goto LAB_82ad9184;
            }
          }
          else {
            do {
              iVar20 = iVar16;
              if ((*(uint *)(iVar20 + 0x24) & 1) == 0) {
                iVar16 = (*(uint *)(iVar20 + 0x20) & 0xfffffffe) - 0x28;
              }
              else {
                iVar16 = 0;
              }
              if ((*(uint *)(iVar16 + 8) >> 0x1b & 1) == 0) {
                if ((*(uint *)(iVar16 + 8) & 0x3f80) != 0x2a00) break;
                iVar17 = fn_82ABDD90(param_1,0x54,0,0);
                iVar16 = (*(uint *)(iVar17 + iVar16 + -0x14) >> 5 & 0x1f) * 0x44 + param_1[0x9a];
                while ((*(uint *)(*(int *)(iVar16 + 8) + 0x30) >> 0x16 & 1) != 0) {
                  iVar17 = *(int *)(iVar16 + 8);
                  do {
                    iVar17 = *(int *)(iVar17 + 0x50);
                    if (iVar17 == 0) break;
                  } while ((*(uint *)(iVar17 + 0x30) & 0x400000) != 0);
                  *(int *)(iVar16 + 8) = iVar17;
                }
                if ((((*(uint *)(*(int *)(iVar16 + 8) + 0x24) & 1) != 0) ||
                    (uVar14 = *(uint *)(*(int *)(iVar16 + 8) + 0x20) & 0xfffffffe, uVar14 == 0x28))
                   || (uVar14 = *(uint *)(uVar14 - 0x20), (uVar14 & 0x3f80) != 0x2a80)) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                if ((uVar14 >> 0x1b & 1) == 0) break;
              }
              iVar16 = *(int *)(iVar20 + 0x40);
              iVar15 = iVar20;
            } while (*(int *)(iVar20 + 0x40) != 0);
            iVar16 = iVar15;
            if (iVar15 == 0) goto LAB_82ad912c;
LAB_82ad9184:
            if (((param_1[1] & 1) != 0) ||
               (puVar32 = (uint *)((*param_1 & 0xfffffffe) - 4), puVar32 == (uint *)0x0)) {
LAB_82ad96c8:
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0xdcf);
            }
            do {
              if (((((*(uint *)(puVar32[10] +
                                ((uint)(((ulonglong)*(uint *)(iVar16 + 0x30) & 0x7ffff) >> 3) &
                                0x1ffffffc) + 4) & 1 << (*(uint *)(iVar16 + 0x30) & 0x1f)) != 0) &&
                   ((puVar32[9] & 1) == 0)) && ((puVar32[8] & 0xfffffffe) != 0x28)) &&
                 ((*(uint *)((puVar32[8] & 0xfffffffe) - 0x20) & 0x3f80) == 0x2980)) break;
              if ((*puVar32 & 1) != 0) goto LAB_82ad96c8;
              puVar32 = (uint *)((*puVar32 & 0xfffffffe) - 4);
            } while (puVar32 != (uint *)0x0);
            if (puVar32 == (uint *)0x0) goto LAB_82ad96c8;
            puVar11 = puVar32;
            if ((puVar32[0xc] & 0x80000000) == 0) {
              puVar11 = (uint *)fn_82AC68F0(param_1);
              puVar1 = (undefined4 *)((uint)puVar11 & 0xfffffffe);
              puVar11[0xc] = puVar11[0xc] | 0x80000000;
              puVar1[1] = puVar32[1];
              *(undefined4 **)(puVar32[1] & 0xfffffffe) = puVar1 + 1;
              *puVar1 = puVar32 + 1;
              puVar32[1] = (uint)puVar1;
              fn_82B8F328(puVar32,puVar11,param_1);
              fn_82B841E8(param_1,puVar11,puVar11 + 8,0x53,0,0);
              if ((puVar32[9] & 1) == 0) {
                piVar26 = (int *)((puVar32[8] & 0xfffffffe) - 0x28);
              }
              else {
                piVar26 = (int *)0x0;
              }
              piVar12 = (int *)fn_82B841E8(param_1,puVar32,puVar32 + 8,0x75,0,0);
              piVar12[2] = piVar12[2] | 0x2000000;
              piVar13 = piVar26;
              while (iVar15 = *piVar13, iVar15 != 0) {
                piVar28 = *(int **)(iVar15 + 0x10);
                for (iVar16 = *piVar28; iVar16 != iVar15; iVar16 = *(int *)(iVar16 + 4)) {
                  piVar28 = (int *)(iVar16 + 4);
                }
                *piVar28 = *(int *)(iVar15 + 4);
                *(int *)(iVar15 + 4) = *piVar12;
                *piVar12 = iVar15;
                *(int **)(iVar15 + 0x10) = piVar12;
                if (*piVar13 == iVar15) {
                  piVar13 = (int *)(iVar15 + 4);
                }
              }
              fn_82B8AC10(param_1,piVar26,0,1);
              fn_82B44B88(param_1);
            }
            for (puVar1 = *(undefined4 **)(uVar21 + 8); puVar1 != (undefined4 *)0x0;
                puVar1 = (undefined4 *)puVar1[2]) {
              if (puVar11 == (uint *)*puVar1) {
                bVar5 = true;
                goto LAB_82ad9388;
              }
            }
            bVar5 = false;
LAB_82ad9388:
            if (!bVar5) {
              fn_82B8F328(puVar34,puVar11,param_1);
              if (*piVar30 != 0) {
                piVar13 = (int *)fn_82B841E8(param_1,puVar34,(uint *)(uVar21 + 0x1c),0x75,0,0)
                ;
                piVar13[2] = piVar13[2] | 0x2000000;
                piVar26 = piVar30;
                while (iVar15 = *piVar26, iVar15 != 0) {
                  piVar12 = *(int **)(iVar15 + 0x10);
                  for (iVar16 = *piVar12; iVar16 != iVar15; iVar16 = *(int *)(iVar16 + 4)) {
                    piVar12 = (int *)(iVar16 + 4);
                  }
                  *piVar12 = *(int *)(iVar15 + 4);
                  *(int *)(iVar15 + 4) = *piVar13;
                  *piVar13 = iVar15;
                  *(int **)(iVar15 + 0x10) = piVar13;
                  if (*piVar26 == iVar15) {
                    piVar26 = (int *)(iVar15 + 4);
                  }
                }
              }
              fn_82B8AC10(param_1,piVar30,0,1);
              fn_82B44B88(param_1);
            }
          }
        }
      }
      uVar21 = *puVar34;
    } while ((uVar21 & 1) == 0);
  }
  if ((param_1[10] & 0x104) != 0) {
    for (uVar21 = param_1[1]; ((uVar21 & 1) == 0 && (uVar21 != 0));
        uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
      if ((((**(uint **)(uVar21 + 0x28) >> 0x13 & 1) != 0) &&
          ((uVar14 = fn_82AD4500(param_1,uVar21), uVar14 != 0 &&
           (uVar33 = (ulonglong)*(uint *)(uVar21 + 0x30) & 0x7ffff,
           uVar25 = (uint)(uVar33 << 1) & 0x1e,
           uVar25 = (*(uint *)((((uint)(((ulonglong)**(uint **)(uVar14 + 0x28) & 0x7ffff) + 0x1f >>
                                       3) & 0x1ffffffc) + ((int)(uVar33 >> 4) + 1) * 2) * 2 +
                              (int)*(uint **)(uVar14 + 0x28)) &
                     (2 << ((int)(((ulonglong)*(uint *)(uVar21 + 0x30) & 0x7ffff) << 1) + 1U & 0x1f)
                     ) - 1U & -1 << uVar25) >> uVar25, uVar25 != 0)))) && (uVar25 != 3)) {
        param_1[0xb] = param_1[0xb] | 0x8000;
        uVar25 = uVar21;
        while ((uVar25 == uVar21 ||
               (uVar33 = (ulonglong)*(uint *)(uVar21 + 0x30) & 0x7ffff,
               (*(uint *)(((uint)(((ulonglong)**(uint **)(uVar25 + 0x28) & 0x7ffff) + 0x1f >> 3) &
                          0x1ffffffc) + ((int)(uVar33 >> 5) + 1) * 4 +
                         (int)*(uint **)(uVar25 + 0x28)) & 1 << ((uint)uVar33 & 0x1f)) != 0))) {
          if ((uVar25 != uVar14) &&
             ((iVar15 = fn_82AD2020(param_1,uVar25), iVar15 != 0 &&
              ((*(uint *)(iVar15 + 8) & 0x3f80) != 0x2a80)))) {
            puVar32 = (uint *)(uVar25 + 0xc);
            puVar34 = *(uint **)(uVar25 + 0xc);
            while (puVar34 != (uint *)0x0) {
              uVar18 = *puVar34;
              if ((uVar18 != uVar14) &&
                 (uVar33 = (ulonglong)*(uint *)(uVar18 + 0x30) & 0x7ffff,
                 (1 << ((uint)uVar33 & 0x1f) &
                 *(uint *)(((int)(uVar33 >> 5) + 1) * 4 + *(int *)(uVar21 + 0x28))) == 0)) {
                if ((*(int *)(uVar18 + 8) == 0) ||
                   (bVar5 = true, *(int *)(*(int *)(uVar18 + 8) + 0xc) == 0)) {
                  bVar5 = false;
                }
                if ((bVar5) && (cVar22 = fn_82B8F618(uVar18,uVar21), cVar22 == '\0')) {
                  uVar36 = uVar25;
                  if (((*(uint *)(uVar25 + 0x44) & 0x80000000) != 0) &&
                     (uVar27 = *(uint *)((uVar25 & 0xfffffffe) + 4),
                     (*(uint *)((-(uint)((uVar27 & 1) == 0) & uVar27) + 0x44) & 0x40000000) != 0)) {
                    uVar36 = *(uint *)((-(uint)((uVar27 & 1) == 0) & uVar27 & 0xfffffffe) + 4);
                    uVar36 = -(uint)((uVar36 & 1) == 0) & uVar36;
                  }
                  fn_82B42C70(param_1,uVar25,uVar18,1,uVar36,1);
                }
              }
              if ((uint *)*puVar32 == puVar34) {
                puVar32 = puVar34 + 2;
              }
              puVar34 = (uint *)*puVar32;
            }
          }
          uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4);
          if (((uVar25 & 1) != 0) || (uVar25 == 0)) break;
        }
      }
    }
    puVar34 = (uint *)param_1[1];
    uVar21 = param_1[0x17];
    if ((((uint)puVar34 & 1) == 0) && (puVar34 != (uint *)0x0)) {
      dVar37 = (double)lbl_821AAD20;
LAB_82ad973c:
      if ((*(uint *)puVar34[10] >> 0x13 & 1) != 0) {
        if ((puVar34[9] & 1) != 0) {
LAB_82adb0a8:
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        uVar14 = puVar34[8] & 0xfffffffe;
        iVar15 = uVar14 - 0x28;
        if (iVar15 == 0) goto LAB_82adb0a8;
        uVar25 = *(uint *)(uVar14 - 0x20);
        uVar18 = uVar25 >> 7 & 0x7f;
        if ((((uVar18 == 0x56) || (uVar18 == 0x57)) || (uVar18 == 0x59)) ||
           (((uVar18 == 0x5a || (uVar18 == 0x54)) || (uVar18 == 0x55)))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (!bVar5) goto LAB_82adb0a8;
        if (uVar18 == 0x54) {
          iVar15 = fn_82ABDD90(param_1,0x54,0,0);
          iVar16 = (*(uint *)(iVar15 + (uVar14 - 0x3c)) >> 5 & 0x1f) * 0x44 + param_1[0x9a];
          iVar15 = *(int *)(iVar16 + 0x10);
          if (iVar15 != 0) {
            while ((*(uint *)(iVar15 + 0x30) >> 0x16 & 1) != 0) {
              iVar15 = *(int *)(iVar16 + 0x10);
              do {
                iVar15 = *(int *)(iVar15 + 0x50);
                if (iVar15 == 0) break;
              } while ((*(uint *)(iVar15 + 0x30) & 0x400000) != 0);
              *(int *)(iVar16 + 0x10) = iVar15;
            }
          }
          iVar15 = *(int *)(iVar16 + 0xc);
          if (iVar15 != 0) {
            while ((*(uint *)(iVar15 + 0x30) >> 0x16 & 1) != 0) {
              iVar15 = *(int *)(iVar16 + 0xc);
              do {
                iVar15 = *(int *)(iVar15 + 0x50);
                if (iVar15 == 0) break;
              } while ((*(uint *)(iVar15 + 0x30) & 0x400000) != 0);
              *(int *)(iVar16 + 0xc) = iVar15;
            }
          }
          while ((*(uint *)(*(int *)(iVar16 + 8) + 0x30) >> 0x16 & 1) != 0) {
            iVar15 = *(int *)(iVar16 + 8);
            do {
              iVar15 = *(int *)(iVar15 + 0x50);
              if (iVar15 == 0) break;
            } while ((*(uint *)(iVar15 + 0x30) & 0x400000) != 0);
            *(int *)(iVar16 + 8) = iVar15;
          }
          iVar15 = *(int *)(iVar16 + 8);
          if ((*(uint *)(iVar15 + 0x24) & 1) != 0) {
LAB_82adb11c:
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          uVar14 = *(uint *)(iVar15 + 0x20) & 0xfffffffe;
          iVar20 = uVar14 - 0x28;
          if ((iVar20 == 0) || (uVar25 = *(uint *)(uVar14 - 0x20), (uVar25 & 0x3f80) != 0x2a80))
          goto LAB_82adb11c;
          if ((puVar34[0x13] >> 0x16 & 1) == 0) {
            if ((*(uint *)(iVar16 + 0x24) & 0x2000000) != 0) {
              if ((*(int *)(iVar16 + 0xc) == 0) || (*(int *)(iVar16 + 0xc) != iVar15)) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0xdcf);
              }
              if ((uVar25 >> 0x11 & 1) == 0) {
                uVar18 = fn_82B841E8(param_1,*(undefined4 *)(uVar14 - 0xc),0,0x78,0,1);
                uVar25 = uVar18 & 0xfffffffe;
                puVar32 = (uint *)(uVar14 - 4);
                *(uint *)(uVar18 + 8) = *(uint *)(uVar18 + 8) | 0x40;
                *(uint *)(uVar25 + 0x24) = *puVar32;
                *(uint *)(*puVar32 & 0xfffffffe) = uVar25;
                *(int *)(uVar25 + 0x28) = iVar20;
                *puVar32 = uVar25 + 0x28;
                uVar9 = fn_82AC9F80(param_1,uVar18,7);
                fn_82AD1978(iVar20,uVar9);
                *(uint *)(uVar14 - 0x20) = *(uint *)(uVar14 - 0x20) | 0x60000;
                puVar32 = (uint *)fn_82AD18C0(param_1,uVar18,0);
                fn_82AD1978(iVar20,puVar32);
                *puVar32 = *puVar32 & 0xbe001fff | 0x40000000;
                *(uint *)(uVar18 + 8) = *(uint *)(uVar18 + 8) & 0xffffffe1 | 2;
              }
              for (uVar14 = param_1[1]; ((uVar14 & 1) == 0 && (uVar14 != 0));
                  uVar14 = *(uint *)((uVar14 & 0xfffffffe) + 4)) {
                uVar25 = (int)(iVar16 - param_1[0x9a]) / 0x44;
                if ((*(uint *)(((uVar25 >> 5) + 0x15) * 4 + uVar14) >> (uVar25 & 0x1f) & 1) != 0) {
                  *(uint **)(uVar14 + 0x70) = puVar34;
                  *(uint *)(uVar14 + 0x30) = *(uint *)(uVar14 + 0x30) | 0x800000;
                  *(uint *)(uVar14 + 0x4c) = *(uint *)(uVar14 + 0x4c) | 0xc00000;
                }
              }
              uVar9 = fn_82B8A3A0(dVar37,dVar37,dVar37,dVar37,param_1,1);
              uVar10 = fn_82AD18C0(param_1,uVar9,0);
              uVar14 = fn_82AD3A90(param_1,puVar34,uVar10);
              *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) | 0x80000000;
              if (puVar34[0x18] != 0) {
                fn_82AD2128(uVar14,1,puVar34[0x18],param_1);
              }
              puVar34[0x18] = uVar14;
              *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) | 0x2000000;
              fn_82AD4F40(param_1,iVar20,uVar14);
              if (*(int *)(iVar16 + 0x14) == 0) {
                fn_82B206A0(param_1,iVar16);
              }
              fn_82AD4E58(param_1,puVar34,*(undefined4 *)(iVar16 + 0x14),
                            *(undefined4 *)(iVar16 + 8),0x42,uVar9);
            }
          }
          else {
            if ((*(int *)(iVar16 + 0xc) == 0) || (*(int *)(iVar16 + 0xc) != iVar15)) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0xdcf);
            }
            if (((uVar25 >> 0x11 & 1) == 0) && ((*(uint *)(iVar16 + 0x24) & 1) == 0)) {
              uVar18 = fn_82B841E8(param_1,*(undefined4 *)(uVar14 - 0xc),0,0x78,0,1);
              uVar25 = uVar18 & 0xfffffffe;
              puVar32 = (uint *)(uVar14 - 4);
              *(uint *)(uVar18 + 8) = *(uint *)(uVar18 + 8) | 0x40;
              *(uint *)(uVar25 + 0x24) = *puVar32;
              *(uint *)(*puVar32 & 0xfffffffe) = uVar25;
              *(int *)(uVar25 + 0x28) = iVar20;
              *puVar32 = uVar25 + 0x28;
              uVar9 = fn_82AC9F80(param_1,uVar18,7);
              fn_82AD1978(iVar20,uVar9);
              uVar25 = *(uint *)(uVar14 - 0x20);
              *(uint *)(uVar14 - 0x20) = uVar25 | 0x20000;
              *(uint *)(uVar14 - 0x20) =
                   (puVar34[0x13] >> 0x17 & 1) << 0x12 | uVar25 & 0xfffbffff | 0x20000;
              puVar32 = (uint *)fn_82AD18C0(param_1,uVar18,0);
              fn_82AD1978(iVar20,puVar32);
              *puVar32 = *puVar32 & 0xbe001fff | 0x40000000;
              *(uint *)(uVar18 + 8) = *(uint *)(uVar18 + 8) & 0xffffffe1 | 2;
            }
            else {
              if (*(int *)(iVar16 + 0x14) == 0) {
                fn_82B206A0(param_1,iVar16);
              }
              uVar9 = fn_82AD2770(param_1,puVar34);
              fn_82AD4E58(param_1,puVar34,*(undefined4 *)(iVar16 + 0x14),
                            *(undefined4 *)(iVar16 + 8),0x42,uVar9);
              uVar10 = fn_82B84290(param_1,puVar34);
              uVar9 = fn_82AD18C0(param_1,uVar9,0);
              fn_82AD1978(uVar10,uVar9);
              uVar9 = fn_82AD17B0(param_1,uVar10);
              uVar25 = fn_82AD3A90(param_1,puVar34,uVar9);
              *(uint *)(uVar25 + 8) = *(uint *)(uVar25 + 8) | 0x80000000;
              if (puVar34[0x18] != 0) {
                fn_82AD2128(uVar25,1,puVar34[0x18],param_1);
              }
              puVar34[0x18] = uVar25;
              *(uint *)(uVar25 + 8) = *(uint *)(uVar25 + 8) | 0x2000000;
              for (uVar18 = param_1[1]; ((uVar18 & 1) == 0 && (uVar18 != 0));
                  uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 4)) {
                uVar36 = (int)(iVar16 - param_1[0x9a]) / 0x44;
                if ((*(uint *)(((uVar36 >> 5) + 0x15) * 4 + uVar18) >> (uVar36 & 0x1f) & 1) != 0) {
                  *(uint **)(uVar18 + 0x70) = puVar34;
                }
              }
              if ((*(uint *)(uVar14 - 0x20) >> 0x11 & 1) != 0) {
                fn_82AD4F40(param_1,iVar20,uVar25);
              }
            }
          }
          goto LAB_82adb084;
        }
        iVar16 = fn_82ABDD90(param_1,uVar18,uVar25 >> 0x13 & 7,uVar25 >> 0xe & 7);
        puVar32 = (uint *)(iVar16 + (uVar14 - 0x38));
        if ((puVar32[2] & 3) == 0) {
          uVar18 = puVar32[2] >> 2 & 0xf;
          if (((uVar18 != 2) && (uVar18 != 3)) && (uVar18 != 4)) goto LAB_82ad980c;
        }
        else {
          uVar18 = 7;
LAB_82ad980c:
          if (((puVar34[0x13] >> 0x16 & 1) == 0) && ((uVar25 >> 0x1b & 1) == 0)) goto LAB_82adb084;
        }
        if ((uVar18 != 8) && (uVar18 != 9)) {
          uVar25 = puVar34[0xc];
          uVar36 = (uint)puVar34 & 0xfffffffe;
          uVar33 = (ulonglong)uVar25 & 0x7ffff;
          while( true ) {
            uVar27 = *(uint *)(uVar36 + 4);
            uVar31 = 0;
            if (((uVar27 & 1) != 0) || (uVar27 == 0)) break;
            do {
              if ((((*(uint *)((int)*(uint **)(uVar27 + 0x28) +
                              ((uint)(((ulonglong)**(uint **)(uVar27 + 0x28) & 0x7ffff) + 0x1f >> 3)
                              & 0x1ffffffc) +
                              ((uint)(((ulonglong)puVar34[0xc] & 0x7ffff) >> 3) & 0x1ffffffc) + 4) &
                    1 << (puVar34[0xc] & 0x1f)) != 0) &&
                  (uVar23 = (uint)(uVar33 << 1) & 0x1e,
                  uVar23 = (*(uint *)((((uint)(((ulonglong)**(uint **)(uVar27 + 0x28) & 0x7ffff) +
                                               0x1f >> 3) & 0x1ffffffc) +
                                      ((int)(uVar33 >> 4) + 1) * 2) * 2 +
                                     (int)*(uint **)(uVar27 + 0x28)) &
                            (2 << ((int)(((ulonglong)uVar25 & 0x7ffff) << 1) + 1U & 0x1f)) - 1U &
                           -1 << uVar23) >> uVar23, uVar23 != 0)) && (uVar23 != 3)) {
                uVar31 = uVar23 | uVar31;
              }
              uVar27 = *(uint *)((uVar27 & 0xfffffffe) + 4);
            } while (((uVar27 & 1) == 0) && (uVar27 != 0));
            if (uVar31 == 0) break;
            if ((*(uint *)(uVar14 - 0x20) >> 0x11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            iVar16 = fn_82AC65F0(iVar15);
            iVar16 = *(int *)(iVar16 + 0xc);
            if ((*(uint *)(iVar16 + 8) & 0x3f80) == 0x3c00) goto LAB_82adb084;
            if (uVar18 == 2) {
              if (uVar31 == 3) {
                iVar20 = fn_82AD3B30(param_1,puVar34,iVar15,&uStack_d9,&uStack_c4,&uStack_c8);
                uVar7 = uStack_c8;
                if ((((((iVar20 == 4) &&
                       (cVar22 = fn_82AD2410(param_1,uStack_c8,0,&cStack_dd,&cStack_db,&uStack_d8)
                       , uVar27 = uStack_c4, cVar22 != '\0')) &&
                      (cVar22 = fn_82AD2410(param_1,uStack_c4,0,&cStack_dc,&cStack_da,&uStack_c0),
                      uVar23 = uStack_d8, cVar22 != '\0')) &&
                     ((cStack_dd == '\0' && (cStack_dc == '\0')))) && (cStack_db == '\0')) &&
                   ((cStack_da == '\0' && (uStack_d8 == uStack_c0)))) {
                  if ((*(uint *)(uStack_d8 + 0x30) & 0x80000000) != 0) {
                    fn_82AD6118(param_1,uStack_d8);
                  }
                  iVar20 = fn_82AD1BF0(param_1,uVar27,uVar23);
                  iVar17 = fn_82AD1BF0(param_1,uVar7,uVar23);
                  if (iVar20 == 0) {
                    iVar20 = fn_82B42C70(param_1,uVar27,uVar23,0,uVar23,1);
                  }
                  if (iVar17 == 0) {
                    iVar17 = fn_82B42C70(param_1,uVar7,uVar23,0,uVar23,1);
                  }
                  for (iVar4 = *(int *)(uVar23 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
                    iVar2 = *(int *)(iVar4 + 4);
                    if ((iVar2 != iVar20) && (iVar2 != iVar17)) {
                      if ((*(uint *)(((int)(((ulonglong)puVar34[0xc] & 0x7ffff) >> 5) + 1) * 4 +
                                    *(int *)(iVar2 + 0x28)) &
                          1 << ((uint)((ulonglong)puVar34[0xc] & 0x7ffff) & 0x1f)) != 0) {
                    /* WARNING: Subroutine does not return */
                        fn_82AA66A8(param_1,0x12c0);
                      }
                      uStack_d8 = fn_82B42C70(param_1,puVar34,uVar23,0,uVar23,1);
                      uVar23 = uStack_d8;
                      break;
                    }
                  }
                  cVar22 = fn_82AD8278(param_1,iVar15,iVar16,uStack_d9,iVar20,iVar17,uVar23);
                  if (cVar22 != '\0') {
                    fn_82B8F1B0(puVar34,uVar27,param_1);
                    fn_82B8F1B0(iVar17,uVar23,param_1);
                    fn_82B8F328(iVar17,uVar27,param_1);
                    if (((*(uint *)(iVar17 + 0x24) & 1) == 0) &&
                       (uVar14 = *(uint *)(iVar17 + 0x20) & 0xfffffffe, uVar14 != 0x28)) {
                      uVar25 = *(uint *)(uVar14 - 0x20) >> 7 & 0x7f;
                      if (((uVar25 == 0x56) ||
                          (((uVar25 == 0x57 || (uVar25 == 0x59)) || (uVar25 == 0x5a)))) ||
                         ((uVar25 == 0x54 || (bVar5 = false, uVar25 == 0x55)))) {
                        bVar5 = true;
                      }
                      if (bVar5) {
                        uVar25 = *(uint *)(uVar14 - 0x20);
                        iVar16 = fn_82ABDD90(param_1,uVar25 >> 7 & 0x7f,uVar25 >> 0x13 & 7,
                                              uVar25 >> 0xe & 7);
                        puVar32 = (uint *)(iVar16 + (uVar14 - 0x38));
                        if (*puVar32 == uVar23) {
                          *puVar32 = uVar27;
                        }
                      }
                    }
                    goto LAB_82ad9a4c;
                  }
                }
              }
              else {
                iVar17 = fn_82AD3B30(param_1,puVar34,iVar15,&uStack_de,&iStack_d4,&uStack_d0);
                uVar7 = uStack_d0;
                iVar20 = iStack_d4;
                if (((iVar17 == 3) &&
                    (cVar22 = fn_82AD2410(param_1,uStack_d0,iStack_d4,&cStack_e0,&cStack_df,
                                            &iStack_cc), iVar17 = iStack_cc, cVar22 != '\0')) &&
                   ((cStack_e0 == '\0' &&
                    (((cStack_df == '\0' && (iStack_cc != 0)) && (iStack_cc == iVar20)))))) {
                  if ((*(uint *)(iStack_cc + 0x30) & 0x80000000) != 0) {
                    fn_82AD6118(param_1,iStack_cc);
                  }
                  uVar8 = fn_82AD1BF0(param_1,uVar7,iVar17);
                  if ((uVar8 & 0xffffffff) == 0) {
                    uVar8 = fn_82B42C70(param_1);
                  }
                  cVar22 = fn_82AD8278(param_1,iVar15,iVar16,uStack_de,puVar34,uVar8,iVar17);
                  if (cVar22 != '\0') {
                    fn_82B8F1B0(puVar34,iVar20,param_1);
LAB_82ad9a4c:
                    fn_82B8AC10(param_1,iVar15,0,1);
                    fn_82B44B88(param_1);
                    goto LAB_82adb084;
                  }
                }
              }
              if ((puVar32[2] & 3) == 0) {
                uVar8 = (~(ulonglong)puVar32[2] & 0xffffffff) >> 7 & 1;
              }
              else {
                uVar8 = 1;
              }
              if (uVar8 != 0) {
                fn_82AA65B0(param_1,0xe04);
              }
              if (((puVar34[0x13] >> 0x16 & 1) == 0) &&
                 ((*(uint *)(uVar14 - 0x20) >> 0x1b & 1) == 0)) goto LAB_82adb084;
            }
            if ((uVar31 == 3) ||
               (uVar27 = puVar32[3], uVar31 == 1 << (1 - (uVar27 >> 1 & 1) & 0x3f))) {
              uVar8 = (ulonglong)param_1[0x1b] + 1;
              uVar33 = (ulonglong)param_1[0x1b] + 2;
              uVar25 = (uint)uVar33;
              param_1[0x1b] = uVar25;
              cVar22 = fn_82AD49F0(param_1,puVar34,1 << (1 - (puVar32[3] >> 1 & 1) & 0x3f),uVar8,
                                     uVar33,puVar34,auStack_b4,&puStack_bc);
              if (puStack_bc == puVar34) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0xdcf);
              }
              uVar18 = fn_82AD4500(param_1,puVar34);
              if ((*(uint *)(uVar14 - 0x20) >> 0x12 & 1) != 0) {
                fn_82AD21B8(param_1,iVar15);
              }
              puVar34[0xc] = puVar34[0xc] | 0xc000000;
              if ((cVar22 == '\0') && ((puVar34[0x13] >> 0x16 & 1) == 0)) goto LAB_82ada590;
              uVar9 = fn_82AD2888(param_1,puVar34);
              uVar27 = *(uint *)(uVar18 & 0xfffffffe);
              uVar14 = uVar27;
              goto joined_r0x82ad9f04;
            }
            for (puVar11 = (uint *)puVar34[3]; puVar11 != (uint *)0x0; puVar11 = (uint *)puVar11[2])
            {
              uVar31 = *puVar11;
              if (uVar31 != *puVar32) goto LAB_82ad9cdc;
            }
            uVar31 = 0;
LAB_82ad9cdc:
            *puVar32 = uVar31;
            puVar32[3] = uVar27 & 0xfffffffd | ~uVar27 & 2;
            *(uint *)(uVar14 - 0x20) =
                 *(uint *)(uVar14 - 0x20) & 0xfffbffff | ~*(uint *)(uVar14 - 0x20) & 0x40000;
            fn_82B44B88(param_1);
          }
          if ((puVar34[3] == 0) || (bVar5 = true, *(int *)(puVar34[3] + 8) == 0)) {
            bVar5 = false;
          }
          if ((bVar5) &&
             (((puVar34[0x13] >> 0x16 & 1) != 0 || ((*(uint *)(uVar14 - 0x20) >> 0x1b & 1) != 0))))
          {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0xdcf);
          }
          if (uVar18 == 2) {
            if ((puVar32[2] & 3) == 0) {
              uVar33 = (~(ulonglong)puVar32[2] & 0xffffffff) >> 7 & 1;
            }
            else {
              uVar33 = 1;
            }
            if (uVar33 != 0) {
              fn_82AA65B0(param_1,0xe04);
            }
          }
          goto LAB_82adb084;
        }
        puVar34[0xc] = puVar34[0xc] & 0xf7ffffff;
        iVar15 = fn_82AD2888(param_1,puVar34);
        puVar11 = (uint *)0x0;
        if ((puVar34[0x11] & 0x80000000) != 0) {
          uVar14 = *(uint *)(((uint)puVar34 & 0xfffffffe) + 4);
          uVar14 = *(uint *)((-(uint)((uVar14 & 1) == 0) & uVar14 & 0xfffffffe) + 4);
          puVar11 = (uint *)(-(uint)((uVar14 & 1) == 0) & uVar14);
        }
        uVar25 = (uint)puVar34 & 0xfffffffe;
        for (uVar14 = *(uint *)(uVar25 + 4); ((uVar14 & 1) == 0 && (uVar14 != 0));
            uVar14 = *(uint *)((uVar14 & 0xfffffffe) + 4)) {
          if ((*(uint *)(((uint)(((ulonglong)**(uint **)(uVar14 + 0x28) & 0x7ffff) + 0x1f >> 3) &
                         0x1ffffffc) + ((int)(((ulonglong)puVar34[0xc] & 0x7ffff) >> 5) + 1) * 4 +
                        (int)*(uint **)(uVar14 + 0x28)) & 1 << (puVar34[0xc] & 0x1f)) != 0) {
            cVar22 = fn_82B8F618(uVar14,puVar34);
            if (cVar22 == '\0') {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0xdac,0xffffffff820d7b9c);
            }
            for (uVar18 = *(uint *)(uVar14 + 0x24); ((uVar18 & 1) == 0 && (uVar18 != 0));
                uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 0x28)) {
              if ((*(uint *)(uVar18 + 8) & 0x3f80) == 0x2000) {
                fn_82B82D28(*(undefined4 *)(uVar18 + 0x2c),0,&uStack_b8,auStack_ac,auStack_b0,
                                  0,0,0);
                cVar22 = fn_82ABDAA0(uStack_b8);
                if (cVar22 == '\0') {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                uVar18 = *puVar32;
                uVar36 = uVar18;
                if (uVar18 != (-(uint)((*(uint *)(uVar25 + 4) & 1) == 0) & *(uint *)(uVar25 + 4)))
                goto LAB_82ada734;
                puVar35 = (uint *)puVar34[3];
                goto LAB_82ada710;
              }
            }
          }
        }
        goto LAB_82ada928;
      }
      goto LAB_82adb084;
    }
LAB_82adb144:
    if ((param_1[0xb] & 0x8000) != 0) {
      for (uVar21 = param_1[1]; ((uVar21 & 1) == 0 && (uVar21 != 0));
          uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
        iVar15 = *(int *)(uVar21 + 0x60);
        if ((iVar15 != 0) && ((*(uint *)(iVar15 + 8) & 0x3f80) == 0x2100)) {
          for (iVar16 = *(int *)(uVar21 + 8); iVar16 != 0; iVar16 = *(int *)(iVar16 + 0xc)) {
            iVar20 = *(int *)(iVar16 + 4);
            while (iVar17 = *(int *)(iVar20 + 0x60), iVar17 != 0) {
              uVar14 = *(uint *)(iVar17 + 8) >> 7 & 0x7f;
              if (uVar14 == 0x41) {
LAB_82adb1fc:
                if (iVar17 != 0) {
                  iVar20 = fn_82AD1400(param_1);
                  uVar25 = *(uint *)(iVar20 + 8) >> 7 & 0x7f;
                  uVar14 = uVar21;
                  if ((uVar25 != 0x42) && (uVar25 != 0x6d)) {
                    /* WARNING: Subroutine does not return */
                    fn_82AA66A8(param_1,0x12c0);
                  }
                  goto LAB_82adb284;
                }
                break;
              }
              if (uVar14 != 0x40) {
LAB_82adb1f8:
                iVar17 = 0;
                goto LAB_82adb1fc;
              }
              iVar17 = *(int *)(iVar20 + 8);
              if ((iVar17 == 0) || (bVar5 = true, *(int *)(iVar17 + 0xc) == 0)) {
                bVar5 = false;
              }
              if (bVar5) goto LAB_82adb1f8;
              iVar20 = 0;
              if (iVar17 != 0) {
                iVar20 = *(int *)(iVar17 + 4);
              }
            }
LAB_82adb29c:;}
        }
LAB_82adb370:;}
      for (uVar21 = param_1[1]; ((uVar21 & 1) == 0 && (uVar21 != 0));
          uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
        iVar15 = *(int *)(uVar21 + 0x60);
        if ((iVar15 != 0) &&
           (((*(uint *)(iVar15 + 8) & 0x3f80) == 0x2080 &&
            ((*(uint *)(iVar15 + 8) >> 0x11 & 1) != 0)))) {
          uVar14 = fn_82AD1400(param_1,iVar15);
          for (iVar16 = *(int *)(uVar21 + 0x34); iVar16 != 0; iVar16 = *(int *)(iVar16 + 0x34)) {
            iVar20 = fn_82AD2020(param_1,iVar16);
            if ((iVar20 == 0) || ((*(uint *)(iVar20 + 8) >> 0x11 & 1) == 0)) {
              uVar25 = *(uint *)(iVar16 + 0x60);
            }
            else {
              iVar20 = fn_82AC65F0();
              uVar25 = *(uint *)(iVar20 + 0xc);
            }
            if ((uVar25 != 0) && (cVar22 = fn_82ABDAA0(uVar25), cVar22 != '\0')) {
              if (uVar25 == uVar14) break;
              if ((*(uint *)(uVar25 + 8) & 0x80000000) != 0) {
                uVar21 = fn_82AD5050(param_1,uVar21,iVar15,uVar25);
              }
            }
            for (uVar25 = *(uint *)(iVar16 + 0x1c); ((uVar25 & 1) == 0 && (uVar25 != 0));
                uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 0x28)) {
              if ((*(uint *)(uVar25 + 8) & 0x3f80) == 0x3680) {
                if (uVar25 == uVar14) goto LAB_82adb4e0;
                uVar21 = fn_82AD5050(param_1,uVar21,iVar15,uVar25);
              }
            }
          }
        }
LAB_82adb4e0:;}
    }
    fn_82B330F8(param_1,1);
  }
  return;
joined_r0x82ad9f04:
  if ((uVar14 & 1) != 0) {
LAB_82ad9fa4:
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  uVar14 = uVar14 & 0xfffffffe;
  puVar11 = (uint *)(uVar14 - 4);
  if ((puVar11 == (uint *)0x0) || (puVar11 == puVar34)) goto LAB_82ad9fa4;
  if ((*(uint *)(uVar14 + 0x2c) & 0x7ffff) < uVar21) {
    for (piVar30 = *(int **)(uVar14 + 8); piVar30 != (int *)0x0; piVar30 = (int *)piVar30[2]) {
      iVar15 = *piVar30;
      if ((((ulonglong)*(uint *)(iVar15 + 0x2c) != (uVar8 & 0xffffffff)) &&
          (uVar6 = (ulonglong)*(uint *)(iVar15 + 0x30) & 0x7ffff,
          (*(uint *)(((int)(uVar6 >> 5) + 1) * 4 + *(int *)(uVar14 + 0x24)) &
          1 << ((uint)uVar6 & 0x1f)) == 0)) || (uVar21 <= (*(uint *)(iVar15 + 0x30) & 0x7ffff)))
      goto joined_r0x82ad9fb4;
    }
  }
  uVar14 = *puVar11;
  goto joined_r0x82ad9f04;
joined_r0x82ad9fb4:
  while( true ) {
    if ((uVar27 & 1) == 0) {
      puVar35 = (uint *)((uVar27 & 0xfffffffe) - 4);
    }
    else {
      puVar35 = (uint *)0x0;
    }
    if ((puVar35 == puVar11) || ((puVar35[0xc] & 0x7ffff) < uVar21)) break;
    uVar27 = *puVar35;
  }
  uVar14 = fn_82AD4E58(param_1,puVar11,iVar15,puVar35,0x40,uVar9);
  if ((*(uint *)(((**(uint **)(uVar18 + 0x28) & 0x7ffff) + 0x1f >> 3 & 0x1ffffffc) +
                 ((int)(((ulonglong)puVar34[0xc] & 0x7ffff) >> 5) + 1) * 4 +
                (int)*(uint **)(uVar18 + 0x28)) &
      1 << ((uint)((ulonglong)puVar34[0xc] & 0x7ffff) & 0x1f)) != 0) {
    for (uVar27 = param_1[1]; ((uVar27 & 1) == 0 && (uVar27 != 0));
        uVar27 = *(uint *)((uVar27 & 0xfffffffe) + 4)) {
      if ((ulonglong)*(uint *)(uVar27 + 0x2c) == (uVar8 & 0xffffffff)) {
        *(uint *)(uVar27 + 0x2c) = uVar25;
      }
    }
    if ((ulonglong)*(uint *)(uVar18 + 0x2c) != (uVar33 & 0xffffffff)) {
      *(uint *)(uVar18 + 0x2c) = uVar25;
    }
    if ((ulonglong)*(uint *)(iVar15 + 0x2c) == (uVar33 & 0xffffffff)) {
      *(uint *)(uVar14 + 0x2c) = uVar25;
    }
    *(undefined4 *)(uVar14 + 0x54) = *(undefined4 *)(uVar18 + 0x54);
    uVar25 = uVar14;
    while (uVar25 != 0) {
      *(uint **)(uVar25 + 0x70) = puVar34;
      *(uint *)(uVar25 + 0x30) = *(uint *)(uVar25 + 0x30) | 0x800000;
      *(uint *)(uVar25 + 0x4c) = *(uint *)(uVar25 + 0x4c) | 0xc00000;
      if ((uVar25 == uVar18) || (uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4), (uVar25 & 1) != 0))
      break;
    }
    for (uVar25 = *(uint *)(uVar36 + 4);
        (((uVar25 & 1) == 0 && (uVar25 != 0)) && (uVar25 != uVar14));
        uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4)) {
      for (puVar11 = *(uint **)(uVar25 + 0xc); puVar11 != (uint *)0x0; puVar11 = (uint *)puVar11[2])
      {
        uVar18 = *puVar11;
        if ((ulonglong)*(uint *)(uVar18 + 0x2c) != (uVar33 & 0xffffffff)) {
          if (uVar18 == uVar14) {
            uVar18 = 0;
            if (*(uint **)(uVar14 + 0xc) != (uint *)0x0) {
              uVar18 = **(uint **)(uVar14 + 0xc);
            }
          }
          else {
            uVar8 = (ulonglong)*(uint *)(uVar18 + 0x30) & 0x7ffff;
            if ((*(uint *)(((int)(uVar8 >> 5) + 1) * 4 + *(int *)(uVar25 + 0x28)) &
                1 << ((uint)uVar8 & 0x1f)) != 0) goto LAB_82ada188;
          }
          fn_82AD5398(param_1,puVar34,uVar9,uVar25,uVar18);
        }
LAB_82ada188:;}
    }
  }
  uVar27 = 0;
  uVar18 = 1 << (1 - (puVar32[3] >> 1 & 1) & 0x3f);
  for (uVar25 = *(uint *)(uVar36 + 4); ((uVar25 & 1) == 0 && (uVar25 != 0));
      uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4)) {
    if ((*(uint *)(uVar25 + 0x4c) >> 0x16 & 1) != 0) {
      iVar15 = *(int *)(uVar25 + 0x70);
      if ((*(uint *)(iVar15 + 0x30) >> 0x16 & 1) != 0) {
LAB_82ada1f4:
        do {
          iVar15 = *(int *)(iVar15 + 0x50);
          if (iVar15 != 0) {
            if ((*(uint *)(iVar15 + 0x30) & 0x400000) != 0) goto LAB_82ada1f4;
          }
        } while ((*(uint *)(iVar15 + 0x30) >> 0x16 & 1) != 0);
        *(int *)(uVar25 + 0x70) = iVar15;
      }
      if (*(uint **)(uVar25 + 0x70) == puVar34) {
        *(uint **)(uVar25 + 0x70) = puVar34;
        *(uint *)(uVar25 + 0x4c) = *(uint *)(uVar25 + 0x4c) | 0xc00000;
        *(uint *)(uVar25 + 0x30) = *(uint *)(uVar25 + 0x30) | 0x800000;
      }
    }
  }
  uVar25 = *(uint *)(uVar36 + 4);
  if (((uVar25 & 1) == 0) && (uVar25 != 0)) {
    while (uVar25 != uVar14) {
      uVar33 = (ulonglong)puVar34[0xc];
      iVar15 = (int)((uVar33 & 0xf) << 1);
      if (uVar18 != (*(uint *)((((uint)(((ulonglong)**(uint **)(uVar25 + 0x28) & 0x7ffff) + 0x1f >>
                                       3) & 0x1ffffffc) + ((int)((uVar33 & 0x7ffff) >> 4) + 1) * 2)
                               * 2 + (int)*(uint **)(uVar25 + 0x28)) &
                     (2 << ((int)((uVar33 & 0x7ffff) << 1) + 1U & 0x1f)) - 1U & -1 << iVar15) >>
                    iVar15) {
        if ((*(uint *)(uVar25 & 0xfffffffe) & 1) == 0) {
          lVar24 = ((ulonglong)*(uint *)(uVar25 & 0xfffffffe) & 0xfffffffe) - 4;
        }
        else {
          lVar24 = 0;
        }
        iVar15 = fn_82AD4E58(param_1,puVar34,uVar25,lVar24,0x3f,uVar9);
        piVar30 = *(int **)(iVar15 + 0x14);
        uVar27 = uVar27 + 1;
        piVar26 = (int *)0x0;
joined_r0x82ada320:
        piVar13 = piVar30;
        if (((uint)piVar30 & 1) == 0) {
          do {
            if (piVar13 == (int *)0x0) break;
            puVar32 = (uint *)*piVar13;
            for (puVar11 = puVar32; puVar11 != (uint *)0x0; puVar11 = (uint *)puVar11[1]) {
              puVar35 = *(uint **)(*(int *)(puVar11[3] + 0x1c) + 0x28);
              if ((*(uint *)(((*puVar35 & 0x7ffff) + 0x1f >> 3 & 0x1ffffffc) +
                             ((int)(((ulonglong)puVar34[0xc] & 0x7ffff) >> 5) + 1) * 4 +
                            (int)puVar35) & 1 << ((uint)((ulonglong)puVar34[0xc] & 0x7ffff) & 0x1f))
                  != 0) goto LAB_82ada4d0;
            }
            if (puVar32[1] != 0) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            puVar11 = (uint *)(piVar13 + 1);
            while (puVar35 = (uint *)*puVar11, puVar35 != (uint *)0x0) {
              if (puVar35[4] != 0) {
                uVar36 = puVar32[3];
                puVar29 = (uint *)(puVar35[3] + 4);
                for (puVar3 = (uint *)*puVar29; puVar3 != puVar35; puVar3 = (uint *)puVar3[2]) {
                  puVar29 = puVar3 + 2;
                }
                *puVar29 = puVar35[2];
                puVar35[2] = *(uint *)(uVar36 + 4);
                *(uint **)(uVar36 + 4) = puVar35;
                puVar35[3] = uVar36;
                uVar36 = *puVar35 & 0x1f;
                uVar31 = *puVar32 & 0x1f;
                if (((*puVar32 & 4) != 0) && ((*puVar35 & 2) != 0)) {
                  uVar31 = uVar31 - 4;
                }
                if ((uVar36 & uVar31 & 4) != 0) {
                  uVar31 = uVar31 - 4;
                  uVar36 = uVar36 - 4;
                }
                if (((uVar31 & 1) != 0) && ((uVar36 & 2) != 0)) {
                  uVar36 = uVar36 - 2;
                }
                uVar23 = *puVar35;
                *puVar35 = uVar23 & 0xffffffe0 | (uVar36 | uVar31) & 0x1f;
                uVar19 = *puVar32 >> 5 & 0xff;
                *puVar35 = ((((uVar19 >> ((uVar23 & 0x1800) >> 10) & 3) << 2 |
                             uVar19 >> ((uVar23 & 0x600) >> 8) & 3) << 2 |
                            uVar19 >> ((uVar23 & 0x180) >> 6) & 3) << 2 |
                           uVar19 >> ((uVar23 & 0x60) >> 4) & 3) << 5 |
                           uVar23 & 0xffffe000 | (uVar36 | uVar31) & 0x1f;
              }
              if ((uint *)*puVar11 == puVar35) {
                puVar11 = puVar35 + 2;
              }
            }
            cVar22 = fn_82ABE2E0(piVar13);
            if (cVar22 == '\0') {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            fn_82B8AC10(param_1,piVar13,0,1);
LAB_82ada4d0:
            if (piVar26 == (int *)0x0) {
              piVar30 = *(int **)(iVar15 + 0x14);
              if (piVar13 != (int *)(-(uint)(((uint)piVar30 & 1) == 0) & (uint)piVar30))
              goto joined_r0x82ada320;
LAB_82ada4f8:
              piVar30 = *(int **)(((uint)piVar13 & 0xfffffffe) + 0x28);
              piVar26 = piVar13;
            }
            else {
              piVar30 = *(int **)(((uint)piVar26 & 0xfffffffe) + 0x28);
              if (piVar13 == (int *)(-(uint)(((uint)piVar30 & 1) == 0) & (uint)piVar30))
              goto LAB_82ada4f8;
            }
            piVar13 = piVar30;
            if (((uint)piVar30 & 1) != 0) break;
          } while( true );
        }
        uVar18 = 3 - uVar18;
        *(uint **)(iVar15 + 0x70) = puVar34;
        *(uint *)(iVar15 + 0x4c) = *(uint *)(iVar15 + 0x4c) | 0xc00000;
        *(uint *)(iVar15 + 0x30) = *(uint *)(iVar15 + 0x30) | 0x8800000;
      }
      uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4);
      if (((uVar25 & 1) != 0) || (uVar25 == 0)) break;
    }
    if (1 < uVar27) {
      param_1[0xb] = param_1[0xb] | 0x8000;
    }
  }
LAB_82ada590:
  param_1[10] = param_1[10] | 0x100;
LAB_82adb084:
  puVar34 = *(uint **)(((uint)puVar34 & 0xfffffffe) + 4);
  if ((((uint)puVar34 & 1) != 0) || (puVar34 == (uint *)0x0)) goto LAB_82adb144;
  goto LAB_82ad973c;
LAB_82ada710:
  if (puVar35 == (uint *)0x0) goto LAB_82ada72c;
  uVar36 = *puVar35;
  if (uVar36 != uVar18) goto LAB_82ada734;
  puVar35 = (uint *)puVar35[2];
  goto LAB_82ada710;
LAB_82adb284:
  uVar14 = *(uint *)((uVar14 & 0xfffffffe) + 4);
  if (((uVar14 & 1) != 0) || (uVar14 == 0)) goto LAB_82adb29c;
  if ((*(int *)(uVar14 + 0x60) != 0) &&
     ((*(uint *)(*(int *)(uVar14 + 0x60) + 8) & 0x3f80) == 0x2100)) {
    iVar17 = *(int *)(uVar14 + 8);
LAB_82adb250:
    if (iVar17 != 0) {
      iVar4 = *(int *)(*(int *)(iVar17 + 4) + 0x60);
      if ((iVar4 == 0) || ((*(uint *)(iVar4 + 8) & 0x3f80) != 0x2080)) goto LAB_82adb278;
      iVar16 = fn_82AD1400(param_1);
      uVar14 = *(uint *)(iVar16 + 8) >> 7 & 0x7f;
      if ((uVar14 != 0x42) && (uVar14 != 0x6d)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      uVar33 = (ulonglong)*(uint *)(*(int *)(iVar16 + 0x1c) + 0x30) & 0x7ffff;
      if ((*(uint *)(((int)(uVar33 >> 5) + 1) * 4 + *(int *)(*(int *)(iVar20 + 0x1c) + 0x28)) &
          1 << ((uint)uVar33 & 0x1f)) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      iVar20 = *(int *)(iVar20 + 0x2c);
      piVar30 = (int *)(*(int *)(iVar20 + 0xc) + 4);
      for (iVar17 = *piVar30; iVar17 != iVar20; iVar17 = *(int *)(iVar17 + 8)) {
        piVar30 = (int *)(iVar17 + 8);
      }
      *piVar30 = *(int *)(iVar20 + 8);
      *(undefined4 *)(iVar20 + 8) = *(undefined4 *)(iVar16 + 4);
      *(int *)(iVar16 + 4) = iVar20;
      *(int *)(iVar20 + 0xc) = iVar16;
      iVar15 = *(int *)(iVar15 + 0x2c);
      piVar30 = (int *)(*(int *)(iVar15 + 0xc) + 4);
      for (iVar20 = *piVar30; iVar20 != iVar15; iVar20 = *(int *)(iVar20 + 8)) {
        piVar30 = (int *)(iVar20 + 8);
      }
      *piVar30 = *(int *)(iVar15 + 8);
      *(undefined4 *)(iVar15 + 8) = *(undefined4 *)(iVar16 + 4);
      *(int *)(iVar16 + 4) = iVar15;
      *(int *)(iVar15 + 0xc) = iVar16;
      goto LAB_82adb370;
    }
  }
  goto LAB_82adb284;
LAB_82adb278:
  iVar17 = *(int *)(iVar17 + 0xc);
  goto LAB_82adb250;
LAB_82ada72c:
  uVar36 = 0;
LAB_82ada734:
  fn_82B8F1B0(puVar34,uVar36,param_1);
  for (puVar35 = (uint *)puVar34[3]; puVar35 != (uint *)0x0; puVar35 = (uint *)puVar35[2]) {
    if (uVar14 == *puVar35) {
      bVar5 = true;
      goto LAB_82ada770;
    }
  }
  bVar5 = false;
LAB_82ada770:
  if (!bVar5) {
    fn_82B8F328(puVar34,uVar14,param_1);
  }
  if (*puVar32 == uVar36) {
    *puVar32 = uVar14;
  }
  for (uVar18 = *(uint *)(uVar25 + 4); (((uVar18 & 1) == 0 && (uVar18 != 0)) && (uVar18 != uVar14));
      uVar18 = *(uint *)((uVar18 & 0xfffffffe) + 4)) {
    if ((*(uint *)(((uint)(((ulonglong)**(uint **)(uVar18 + 0x28) & 0x7ffff) + 0x1f >> 3) &
                   0x1ffffffc) + ((int)(((ulonglong)puVar34[0xc] & 0x7ffff) >> 5) + 1) * 4 +
                  (int)*(uint **)(uVar18 + 0x28)) & 1 << (puVar34[0xc] & 0x1f)) != 0) {
      for (puVar32 = *(uint **)(uVar18 + 0xc); puVar32 != (uint *)0x0; puVar32 = (uint *)puVar32[2])
      {
        if (uVar36 == *puVar32) {
          bVar5 = true;
          goto LAB_82ada814;
        }
      }
      bVar5 = false;
LAB_82ada814:
      if (bVar5) {
        fn_82B8F1B0(uVar18,uVar36,param_1);
        for (puVar32 = *(uint **)(uVar18 + 0xc); puVar32 != (uint *)0x0;
            puVar32 = (uint *)puVar32[2]) {
          if (uVar14 == *puVar32) {
            bVar5 = true;
            goto LAB_82ada858;
          }
        }
        bVar5 = false;
LAB_82ada858:
        if (!bVar5) {
          fn_82B8F328(uVar18,uVar14,param_1);
        }
        if (((*(uint *)(uVar18 + 0x24) & 1) == 0) &&
           (uVar27 = *(uint *)(uVar18 + 0x20) & 0xfffffffe, uVar27 != 0x28)) {
          uVar31 = *(uint *)(uVar27 - 0x20) >> 7 & 0x7f;
          if (((uVar31 == 0x56) || ((uVar31 == 0x57 || (uVar31 == 0x59)))) ||
             ((uVar31 == 0x5a || ((uVar31 == 0x54 || (bVar5 = false, uVar31 == 0x55)))))) {
            bVar5 = true;
          }
          if (bVar5) {
            uVar31 = *(uint *)(uVar27 - 0x20);
            iVar16 = fn_82ABDD90(param_1,uVar31 >> 7 & 0x7f,uVar31 >> 0x13 & 7,uVar31 >> 0xe & 7);
            puVar32 = (uint *)(iVar16 + (uVar27 - 0x38));
            if (uVar36 == *puVar32) {
              *puVar32 = uVar14;
            }
          }
        }
      }
    }
  }
  fn_82B44B88(param_1);
LAB_82ada928:
  puVar32 = *(uint **)(uVar25 + 4);
  iVar16 = 0;
  bVar5 = true;
  if ((((uint)puVar32 & 1) == 0) && (puVar35 = puVar34, puVar32 != (uint *)0x0)) {
    do {
      if ((*(uint *)(((*(uint *)puVar32[10] & 0x7ffff) + 0x1f >> 3 & 0x1ffffffc) +
                     ((int)(((ulonglong)puVar34[0xc] & 0x7ffff) >> 5) + 1) * 4 + (int)puVar32[10]) &
          1 << ((uint)((ulonglong)puVar34[0xc] & 0x7ffff) & 0x1f)) != 0) {
        if (bVar5) {
          bVar5 = puVar11 != puVar32;
          puVar32[0x1c] = 0;
          puVar32[0x1b] = 0;
          puVar32[0x12] = 0;
          puVar32[0x13] = puVar32[0x13] & 0xfc3fffff;
          puVar32[0xc] = puVar32[0xc] & 0xf37fffff;
        }
        puVar3 = (uint *)((uint)puVar32 & 0xfffffffe);
        uVar14 = (uint)puVar35 & 0xfffffffe;
        *(uint *)(puVar3[1] & 0xfffffffe) = *puVar3;
        *(uint *)(*puVar3 & 0xfffffffe) = puVar3[1];
        puVar3[1] = *(uint *)(uVar14 + 4);
        *(uint **)(*(uint *)(uVar14 + 4) & 0xfffffffe) = puVar3 + 1;
        *puVar3 = uVar14 + 4;
        *(uint **)(uVar14 + 4) = puVar3;
        puVar35 = puVar32;
        if (iVar16 == 0) {
          for (piVar30 = (int *)puVar32[3]; piVar30 != (int *)0x0; piVar30 = (int *)piVar30[2]) {
            iVar16 = *piVar30;
            cVar22 = fn_82B8F618(iVar16,puVar34);
            if ((cVar22 == '\0') &&
               (uVar33 = (ulonglong)*(uint *)(iVar16 + 0x30) & 0x7ffff,
               (1 << ((uint)uVar33 & 0x1f) & *(uint *)(((int)(uVar33 >> 5) + 1) * 4 + puVar32[10]))
               == 0)) goto LAB_82adaa7c;
          }
          iVar16 = 0;
        }
      }
LAB_82adaa7c:
      puVar32 = *(uint **)(((uint)puVar32 & 0xfffffffe) + 4);
    } while ((((uint)puVar32 & 1) == 0) && (puVar32 != (uint *)0x0));
    if (iVar16 != 0) {
      iVar16 = fn_82AD4E58(param_1,puVar34,iVar16,puVar35,0x40,iVar15);
      uVar33 = (ulonglong)*(uint *)(*(int *)(iVar15 + 0x1c) + 0x30) & 0x7ffff;
      if ((*(uint *)(((int)(uVar33 >> 5) + 1) * 4 + *(int *)(iVar16 + 0x28)) &
          1 << ((uint)uVar33 & 0x1f)) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      goto LAB_82adb084;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c0);
}

