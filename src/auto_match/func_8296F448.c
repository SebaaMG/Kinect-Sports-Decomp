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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82963400();
extern int fn_82965280();
extern int fn_829689A0();
extern int fn_8296D7F0();
extern int fn_8296EB38();


ulonglong fn_8296F448(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  bool bVar6;
  bool bVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  
  uVar16 = 0;
  puVar8 = (uint *)fn_8265C940(*(int *)(param_1 + 0xc) << 2,0x24810000);
  if (puVar8 == (uint *)0x0) {
    uVar16 = 0xffffffff8007000e;
  }
  else {
    uVar12 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar10 = 0;
      puVar9 = puVar8 + -1;
      do {
        puVar13 = *(uint **)(*(int *)(param_1 + 0x18) + iVar10);
        uVar23 = *puVar13 & 0xfff00000;
        if (((((*puVar13 & 0xfff00000) != 0) &&
             ((((param_2 == 0 || (puVar13[9] == 0)) && (uVar23 != 0x10f00000)) &&
              ((uVar23 != 0x20700000 && (uVar23 != 0x11100000)))))) && (uVar23 != 0x11200000)) &&
           (((uVar23 != 0x11300000 && (uVar23 != 0x11400000)) &&
            ((uVar23 != 0x20800000 && ((uVar23 != 0x20900000 && (uVar23 != 0x11500000)))))))) {
          uVar23 = puVar13[3];
          uVar15 = 0;
          if (uVar23 != 0) {
            iVar11 = 0;
            do {
              if ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar11 + puVar13[4]) * 4 +
                                                       *(int *)(param_1 + 0x14)) + 4) * 4 +
                                     *(int *)(param_1 + 0x10)) + 4) & 0x1020) != 0) break;
              uVar15 = uVar15 + 1;
              iVar11 = iVar11 + 4;
            } while (uVar15 < uVar23);
          }
          if (uVar23 <= uVar15) {
            puVar9 = puVar9 + 1;
            *puVar9 = uVar12;
            uVar16 = uVar16 + 1;
          }
        }
        uVar12 = uVar12 + 1;
        iVar10 = iVar10 + 4;
      } while (uVar12 < *(uint *)(param_1 + 0xc));
    }
    bVar7 = false;
    while( true ) {
      bVar6 = false;
      uVar12 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        iVar10 = 0;
        do {
          piVar4 = (int *)(*(int *)(param_1 + 0x14) + iVar10);
          iVar10 = iVar10 + 4;
          *(uint *)(*piVar4 + 0x30) = uVar12;
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(param_1 + 8));
      }
      fn_82965280(0xffffffff82968e08,puVar8,uVar16,param_1);
      if ((uVar16 & 0xffffffff) == 0) break;
      uVar19 = 1;
      uVar17 = uVar16;
      puVar9 = puVar8;
      do {
        uVar12 = *puVar9;
        if ((uVar12 != 0xffffffff) &&
           (uVar18 = uVar19, puVar13 = puVar9, (uVar19 & 0xffffffff) < (uVar16 & 0xffffffff))) {
          do {
            puVar13 = puVar13 + 1;
            uVar23 = *puVar13;
            if (uVar23 != 0xffffffff) {
              if ((uVar23 <= uVar12) || (iVar10 = fn_829689A0(uVar12,uVar23,param_1), iVar10 != 0)
                 ) break;
              puVar1 = *(uint **)(uVar12 * 4 + *(int *)(param_1 + 0x18));
              puVar2 = *(undefined4 **)(uVar23 * 4 + *(int *)(param_1 + 0x18));
              uVar21 = (ulonglong)*puVar1 & 0xfffff;
              uVar23 = *puVar1 & 0xf0000000;
              uVar20 = puVar1[1] / uVar21;
              trapWord(6,uVar21,0);
              if ((uVar23 < 0x10000000) || (0x40000000 < uVar23)) {
                uVar23 = 0;
                if (puVar2[3] != 0) {
                  iVar10 = 0;
                  do {
                    uVar23 = uVar23 + 1;
                    piVar4 = (int *)(puVar2[4] + iVar10);
                    puVar5 = (undefined4 *)(puVar1[4] + iVar10);
                    iVar10 = iVar10 + 4;
                    *(undefined4 *)(*(int *)(*piVar4 * 4 + *(int *)(param_1 + 0x14)) + 0x30) =
                         *puVar5;
                  } while (uVar23 < (uint)puVar2[3]);
                }
              }
              else {
                uVar21 = 0;
                if (puVar2[3] != 0) {
                  iVar10 = 0;
                  do {
                    uVar14 = (ulonglong)puVar1[3];
                    uVar22 = 0;
                    if (uVar14 != 0) {
                      do {
                        uVar23 = 0;
                        if (uVar20 != 0) {
                          do {
                            if (*(int *)(*(int *)(*(int *)((int)(((longlong)(int)uVar14 *
                                                                  (longlong)(int)uVar23 + uVar22 &
                                                                 0xffffffff) << 2) + puVar1[2]) * 4
                                                 + *(int *)(param_1 + 0x14)) + 0x30) !=
                                *(int *)(*(int *)(*(int *)((int)(((longlong)(int)puVar2[3] *
                                                                  (longlong)(int)uVar23 + uVar21 &
                                                                 0xffffffff) << 2) + puVar2[2]) * 4
                                                 + *(int *)(param_1 + 0x14)) + 0x30)) break;
                            uVar23 = uVar23 + 1;
                          } while (uVar23 < uVar20);
                        }
                        if (uVar23 == uVar20) {
LAB_8296f7d8:
                          *(undefined4 *)
                           (*(int *)(*(int *)(puVar2[4] + iVar10) * 4 + *(int *)(param_1 + 0x14)) +
                           0x30) = *(undefined4 *)((int)((uVar22 & 0xffffffff) << 2) + puVar1[4]);
                          break;
                        }
                        iVar11 = fn_82963400(puVar1);
                        if ((iVar11 != 0) && (uVar23 = 0, uVar20 != 0)) {
                          iVar11 = 1;
                          do {
                            if (*(int *)(*(int *)(*(int *)((int)(((longlong)(int)puVar1[3] *
                                                                  (longlong)iVar11 + uVar22 &
                                                                 0xffffffff) << 2) + puVar1[2]) * 4
                                                 + *(int *)(param_1 + 0x14)) + 0x30) !=
                                *(int *)(*(int *)(*(int *)((int)(((longlong)(int)puVar2[3] *
                                                                  (longlong)(int)uVar23 + uVar21 &
                                                                 0xffffffff) << 2) + puVar2[2]) * 4
                                                 + *(int *)(param_1 + 0x14)) + 0x30)) break;
                            uVar23 = uVar23 + 1;
                            iVar11 = iVar11 + -1;
                          } while (uVar23 < uVar20);
                        }
                        if (uVar23 == uVar20) goto LAB_8296f7d8;
                        uVar14 = (ulonglong)puVar1[3];
                        uVar22 = uVar22 + 1;
                      } while ((uVar22 & 0xffffffff) < uVar14);
                    }
                    uVar21 = uVar21 + 1;
                    iVar10 = iVar10 + 4;
                  } while ((uVar21 & 0xffffffff) < (ulonglong)(uint)puVar2[3]);
                }
              }
              bVar7 = true;
              *puVar13 = 0xffffffff;
              *puVar2 = 0;
              puVar2[1] = 0;
              puVar2[3] = 0;
              bVar6 = true;
            }
            uVar18 = uVar18 + 1;
          } while ((uVar18 & 0xffffffff) < (uVar16 & 0xffffffff));
        }
        uVar17 = uVar17 - 1;
        puVar9 = puVar9 + 1;
        uVar19 = uVar19 + 1;
      } while (uVar17 != 0);
      if (!bVar6) break;
      uVar17 = 0;
      if (uVar16 != 0) {
        puVar9 = puVar8 + -1;
        puVar13 = puVar8;
        do {
          uVar12 = *puVar13;
          if (uVar12 != 0xffffffff) {
            uVar15 = 0;
            iVar10 = *(int *)(uVar12 * 4 + *(int *)(param_1 + 0x18));
            uVar23 = *(uint *)(iVar10 + 4);
            if (uVar23 != 0) {
              iVar11 = 0;
              do {
                iVar3 = *(int *)(*(int *)(iVar10 + 8) + iVar11);
                if (*(int *)(*(int *)(iVar3 * 4 + *(int *)(param_1 + 0x14)) + 0x30) != iVar3) break;
                uVar15 = uVar15 + 1;
                iVar11 = iVar11 + 4;
              } while (uVar15 < uVar23);
            }
            if (uVar15 != uVar23) {
              puVar9 = puVar9 + 1;
              *puVar9 = uVar12;
              uVar17 = uVar17 + 1;
            }
          }
          puVar13 = puVar13 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      fn_8296D7F0(param_1);
      uVar16 = uVar17;
    }
    if (bVar7) {
      fn_8296EB38(param_1);
    }
    uVar16 = (ulonglong)!bVar7;
  }
  fn_8265C990(puVar8,0x24810000);
  return uVar16;
}

