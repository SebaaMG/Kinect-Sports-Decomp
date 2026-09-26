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
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD20C0();
extern int fn_82B102D0();
extern int fn_82B41D68();
extern int fn_82B84350();


void fn_82B1EB50(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint uVar11;
  uint uVar12;
  undefined8 uVar10;
  undefined4 uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined4 *puVar23;
  uint uVar24;
  int *piVar25;
  ulonglong uVar26;
  
  uVar1 = *(uint *)(param_1 + 4);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      do {
        bVar9 = false;
        uVar1 = *(uint *)(param_1 + 4);
        iVar20 = *(int *)(param_1 + 0x6c) + 1;
        *(int *)(param_1 + 0x6c) = iVar20;
        for (; ((uVar1 & 1) == 0 && (uVar1 != 0)); uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
          if ((*(uint *)(uVar1 + 0x30) >> 0x13 & 1) != 0) {
            *(int *)(uVar1 + 0x2c) = iVar20;
            for (piVar4 = *(int **)(uVar1 + 0x14);
                (((uint)piVar4 & 1) == 0 && (piVar4 != (int *)0x0));
                piVar4 = *(int **)(((uint)piVar4 & 0xfffffffe) + 0x28)) {
              if ((piVar4[2] & 0x3f80U) == 0x3800) {
                for (iVar5 = *(int *)(uVar1 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
                  iVar6 = *(int *)(iVar5 + 4);
                  iVar21 = iVar6;
                  if (iVar6 != 0) {
                    do {
                      if ((*(uint *)(iVar21 + 0x30) & 0x80000) != 0) break;
                      iVar21 = *(int *)(iVar21 + 0x34);
                    } while (iVar21 != 0);
                    if (iVar21 != 0) {
                      puVar14 = (uint *)fn_82B41D68(param_1,piVar4,iVar6,0,1);
                      uVar15 = *(uint *)(puVar14[3] + 0x1c);
                      if ((uVar15 != (-(uint)((*(uint *)(param_1 + 4) & 1) == 0) &
                                     *(uint *)(param_1 + 4))) &&
                         (uVar26 = (ulonglong)*(uint *)(iVar21 + 0x30) & 0x7ffff,
                         (*(uint *)(((int)(uVar26 >> 5) + 1) * 4 + *(int *)(uVar15 + 0x28)) &
                         1 << ((uint)uVar26 & 0x1f)) == 0)) {
                        uVar26 = (ulonglong)*puVar14 & 0x19;
                        uVar15 = fn_82B102D0(param_1,iVar21,puVar14[3],*puVar14 >> 5 & 3,uVar26);
                        for (iVar7 = *(int *)(uVar1 + 8); piVar25 = piVar4, iVar7 != 0;
                            iVar7 = *(int *)(iVar7 + 0xc)) {
                          iVar8 = *(int *)(iVar7 + 4);
                          if ((iVar6 != iVar8) &&
                             (puVar16 = (uint *)fn_82B41D68(param_1,piVar4,iVar8,0,1),
                             puVar14 == puVar16)) {
                            if (iVar8 != 0) {
                              uVar2 = *puVar14;
                              puVar14 = (uint *)fn_82AD17B0(param_1,uVar15);
                              *puVar14 = *puVar14 & 0xf1ffffff | 0x2000000;
                              fn_82AD1270(puVar14,((ulonglong)uVar2 & 0x1f) - uVar26);
                              *puVar14 = *puVar14 & 0xffffe01f | 0x1c80;
                              fn_82AD1978(piVar4,puVar14);
                              goto LAB_82b1f0dc;
                            }
                            break;
                          }
                        }
                        puVar19 = (uint *)(puVar14[3] + 4);
                        for (puVar16 = (uint *)*puVar19; puVar16 != puVar14;
                            puVar16 = (uint *)puVar16[2]) {
                          puVar19 = puVar16 + 2;
                        }
                        *puVar19 = puVar14[2];
                        puVar14[2] = *(uint *)(uVar15 + 4);
                        *(uint **)(uVar15 + 4) = puVar14;
                        puVar14[3] = uVar15;
                        *puVar14 = *puVar14 & 0xffffe000 | 0x1c80 |
                                   (*puVar14 & 0xffffe01f) - (int)uVar26 & 0x1f;
LAB_82b1f0dc:
                        while (iVar6 = *piVar25, iVar6 != 0) {
                          for (iVar7 = *(int *)(uVar1 + 8); iVar7 != 0;
                              iVar7 = *(int *)(iVar7 + 0xc)) {
                            iVar8 = *(int *)(iVar7 + 4);
                            iVar17 = fn_82B41D68(param_1,piVar4,iVar8,0,1);
                            if (iVar17 == iVar6) {
                              if (iVar8 != 0) goto LAB_82b1f138;
                              break;
                            }
                          }
                          fn_82AD20C0(piVar4,iVar6,param_1);
LAB_82b1f138:
                          if (*piVar25 == iVar6) {
                            piVar25 = (int *)(iVar6 + 4);
                          }
                        }
                        if (*(int *)(iVar21 + 0x2c) == iVar20) {
                          bVar9 = true;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (!bVar9) {
          return;
        }
      } while( true );
    }
    if ((*(uint *)(uVar1 + 0x30) >> 0x13 & 1) != 0) {
      for (uVar15 = *(uint *)(param_1 + 4); ((uVar15 & 1) == 0 && (uVar15 != 0));
          uVar15 = *(uint *)((uVar15 & 0xfffffffe) + 4)) {
        uVar26 = (ulonglong)*(uint *)(uVar1 + 0x30) & 0x7ffff;
        if ((*(uint *)(((int)(uVar26 >> 5) + 1) * 4 + *(int *)(uVar15 + 0x28)) &
            1 << ((uint)uVar26 & 0x1f)) != 0) {
          if ((*(uint *)(uVar15 + 0x14) & 1) == 0) {
            iVar20 = uVar15 + 0x10;
            puVar14 = (uint *)(-(uint)((*(uint *)(uVar15 + 0x14) & 1) == 0) &
                              *(uint *)(uVar15 + 0x14));
          }
          else {
            if ((*(uint *)(uVar15 + 0x1c) & 1) == 0) {
              uVar2 = *(uint *)(uVar15 + 0x1c);
              iVar20 = uVar15 + 0x18;
            }
            else {
              uVar2 = *(uint *)(uVar15 + 0x24);
              iVar20 = uVar15 + 0x20;
            }
            puVar14 = (uint *)(-(uint)((uVar2 & 1) == 0) & uVar2);
          }
          if (puVar14 != (uint *)0x0) {
            while( true ) {
              do {
                puVar16 = puVar14;
                if (iVar20 != uVar1 + 0x10) {
                  while (puVar19 = (uint *)*puVar16, puVar19 != (uint *)0x0) {
                    uVar2 = puVar19[3];
                    uVar24 = *(uint *)(uVar2 + 0x1c);
                    if (uVar24 != (-(uint)((*(uint *)(param_1 + 4) & 1) == 0) &
                                  *(uint *)(param_1 + 4))) {
                      if ((uVar24 == uVar1) ||
                         (uVar26 = (ulonglong)*(uint *)(uVar24 + 0x30) & 0x7ffff, bVar9 = true,
                         (*(uint *)(((int)(uVar26 >> 5) + 1) * 4 + *(int *)(uVar1 + 0x28)) &
                         1 << ((uint)uVar26 & 0x1f)) == 0)) {
                        bVar9 = false;
                      }
                      if (bVar9) {
                        uVar11 = 0;
                        uVar24 = *puVar19 >> 0x19;
                        uVar26 = (ulonglong)uVar24 & 7;
                        uVar22 = *puVar19 & 0x19;
                        if (1 < uVar26) {
                          uVar11 = fn_82B84350(param_1,uVar1,0,uVar26);
                          uVar12 = uVar11 & 0xfffffffe;
                          *(undefined4 *)(uVar12 + 0x28) = *(undefined4 *)(uVar1 + 0x1c);
                          *(uint *)((*(uint *)(uVar1 + 0x1c) & 0xfffffffe) + 0x24) = uVar12 + 0x28;
                          *(uint *)(uVar12 + 0x24) = uVar1 + 0x1c | 1;
                          *(uint *)(uVar1 + 0x1c) = uVar12;
                        }
                        if ((uVar24 & 7) != 0) {
                          uVar24 = 0;
                          puVar23 = (undefined4 *)(uVar11 + 0x2c);
                          do {
                            uVar12 = fn_82B102D0(param_1,uVar1,uVar2,
                                                   (*puVar19 >> 5 & 0xff) >> (uVar24 & 0x3f) & 3,
                                                   uVar22);
                            if (uVar11 == 0) {
                              puVar18 = (uint *)(puVar19[3] + 4);
                              for (puVar3 = (uint *)*puVar18; puVar3 != puVar19;
                                  puVar3 = (uint *)puVar3[2]) {
                                puVar18 = puVar3 + 2;
                              }
                              *puVar18 = puVar19[2];
                              puVar19[2] = *(uint *)(uVar12 + 4);
                              *(uint **)(uVar12 + 4) = puVar19;
                              puVar19[3] = uVar12;
                            }
                            else {
                              uVar10 = fn_82AD17B0(param_1);
                              uVar13 = fn_82AD1978(uVar11,uVar10);
                              *puVar23 = uVar13;
                            }
                            uVar26 = uVar26 - 1;
                            puVar23 = puVar23 + 1;
                            uVar24 = uVar24 + 2;
                          } while (uVar26 != 0);
                        }
                        if (uVar11 != 0) {
                          puVar18 = (uint *)(puVar19[3] + 4);
                          for (puVar3 = (uint *)*puVar18; puVar3 != puVar19;
                              puVar3 = (uint *)puVar3[2]) {
                            puVar18 = puVar3 + 2;
                          }
                          *puVar18 = puVar19[2];
                          puVar19[2] = *(uint *)(uVar11 + 4);
                          *(uint **)(uVar11 + 4) = puVar19;
                          puVar19[3] = uVar11;
                        }
                        *puVar19 = *puVar19 & 0xffffe000 | 0x1c80 |
                                   (*puVar19 & 0xffffe01f) - uVar22 & 0x1f;
                      }
                    }
                    if ((uint *)*puVar16 == puVar19) {
                      puVar16 = puVar19 + 1;
                    }
                  }
                }
                puVar14 = *(uint **)(((uint)puVar14 & 0xfffffffe) + 0x28);
              } while ((((uint)puVar14 & 1) == 0) && (puVar14 != (uint *)0x0));
              if (iVar20 == uVar15 + 0x20) break;
              if ((iVar20 == uVar15 + 0x18) || ((*(uint *)(uVar15 + 0x1c) & 1) != 0)) {
                puVar14 = *(uint **)(uVar15 + 0x24);
                iVar20 = uVar15 + 0x20;
              }
              else {
                puVar14 = *(uint **)(uVar15 + 0x1c);
                iVar20 = uVar15 + 0x18;
              }
              if ((((uint)puVar14 & 1) != 0) || (puVar14 == (uint *)0x0)) break;
            }
          }
        }
      }
    }
    uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4);
  } while( true );
}

