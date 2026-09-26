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
extern int fn_82965528();
extern int fn_8296CF68();
extern int fn_8296D7F0();
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


ulonglong fn_8296F968(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  uint *puVar18;
  int *piVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b0;
  uint uStack_ac;
  
  piVar7 = (int *)fn_8265C940(*(int *)(param_1 + 8) << 2,0x24810000);
  if (piVar7 != (int *)0x0) {
    iVar15 = 0;
    do {
      uVar24 = 0;
      bVar6 = false;
      uStack_c0 = 0;
      fn_8296CF68(param_1);
      uVar14 = 0;
      uVar16 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        iVar13 = 0;
        do {
          piVar17 = (int *)(*(int *)(param_1 + 0x14) + iVar13);
          iVar13 = iVar13 + 4;
          *(uint *)(*piVar17 + 0x30) = uVar14;
          uVar14 = uVar14 + 1;
          uVar16 = *(uint *)(param_1 + 8);
        } while (uVar14 < uVar16);
      }
      uVar14 = 0;
      if (uVar16 != 0) {
        iVar13 = 0;
        puVar18 = (uint *)(piVar7 + -1);
        do {
          iVar21 = *(int *)(*(int *)(param_1 + 0x14) + iVar13);
          if ((((*(int *)(iVar21 + 8) == -1) && (*(int *)(iVar21 + 0x48) != -1)) &&
              (uVar16 = *(uint *)(*(int *)(*(int *)(iVar21 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4)
              , (uVar16 & 2) != 0)) && ((uVar16 & 0x20) == 0)) {
            puVar3 = *(uint **)(*(int *)(iVar21 + 0x48) * 4 + *(int *)(param_1 + 0x18));
            uVar16 = *puVar3;
            if ((0xfffffff < (uVar16 & 0xf0000000)) && ((uVar16 & 0xf0000000) < 0x40000001)) {
              uVar25 = uVar16 & 0xfff00000;
              if (uVar25 < 0x11400001) {
                if ((((uVar25 != 0x11400000) && (uVar25 != 0x10f00000)) && (uVar25 != 0x11100000))
                   && (uVar25 != 0x11200000)) {
                  uVar22 = 0x11300000;
LAB_8296fae0:
                  if (uVar25 != uVar22) {
                    uVar20 = 0;
                    if ((ulonglong)puVar3[3] != 0) {
                      iVar8 = 0;
                      do {
                        if (uVar14 == *(uint *)(puVar3[4] + iVar8)) break;
                        uVar20 = uVar20 + 1;
                        iVar8 = iVar8 + 4;
                      } while ((uVar20 & 0xffffffff) < (ulonglong)puVar3[3]);
                    }
                    uVar23 = (ulonglong)puVar3[1] / ((ulonglong)uVar16 & 0xfffff);
                    trapWord(6,(ulonglong)uVar16 & 0xfffff,0);
                    fn_82963400(puVar3);
                    uVar12 = 0;
                    if (uVar23 != 0) {
                      do {
                        iVar8 = fn_82965528(param_1,puVar3,uVar12,uVar20);
                        uVar12 = uVar12 + 1;
                        uVar25 = iVar8 + uVar25 * 0x83f;
                      } while ((uVar12 & 0xffffffff) < uVar23);
                    }
                    *(uint *)(iVar21 + 0x40) = uVar25;
                    uVar24 = uVar24 + 1;
                    puVar18 = puVar18 + 1;
                    *puVar18 = uVar14;
                  }
                }
              }
              else if (((uVar25 != 0x11500000) && (uVar25 != 0x20700000)) && (uVar25 != 0x20800000))
              {
                uVar22 = 0x20900000;
                goto LAB_8296fae0;
              }
            }
          }
          uVar14 = uVar14 + 1;
          iVar13 = iVar13 + 4;
        } while (uVar14 < *(uint *)(param_1 + 8));
        uStack_c0 = (uint)uVar24;
      }
      fn_82965280(0xffffffff82965240,piVar7,uVar24,param_1);
      if ((uVar24 & 0xffffffff) == 0) goto LAB_8296ff38;
      uVar20 = 1;
      uStack_ac = (uint)uVar24;
      uStack_bc = 1;
      piVar17 = piVar7;
      do {
        iVar13 = *(int *)(*piVar17 * 4 + *(int *)(param_1 + 0x14));
        puVar18 = *(uint **)(*(int *)(iVar13 + 0x48) * 4 + *(int *)(param_1 + 0x18));
        if ((*(int *)(iVar13 + 0x30) == *piVar17) &&
           (uStack_b0 = (uint)uVar20, piVar5 = piVar17,
           (uVar20 & 0xffffffff) < (uVar24 & 0xffffffff))) {
          do {
            iVar21 = piVar5[1];
            iVar8 = *(int *)(iVar21 * 4 + *(int *)(param_1 + 0x14));
            if (*(int *)(iVar13 + 0x40) != *(int *)(iVar8 + 0x40)) break;
            if (((*(int *)(iVar8 + 0x30) == iVar21) &&
                (*(int *)(iVar13 + 0x48) != *(int *)(iVar8 + 0x48))) &&
               ((*(int *)(iVar13 + 4) == *(int *)(iVar8 + 4) &&
                (((*(int *)(iVar13 + 0x14) == *(int *)(iVar8 + 0x14) &&
                  (*(int *)(iVar13 + 0x18) == *(int *)(iVar8 + 0x18))) &&
                 (((**(uint **)(*(int *)(iVar8 + 0x48) * 4 + *(int *)(param_1 + 0x18)) ^ *puVar18) &
                  0xfff00000) == 0)))))) {
              uVar24 = (ulonglong)*puVar18 & 0xfffff;
              uVar20 = puVar18[1] / uVar24;
              trapWord(6,uVar24,0);
              fn_82963400(puVar18);
              iVar21 = *(int *)(param_1 + 0x18);
              uVar16 = 0;
LAB_8296fca8:
              if (uVar16 == 0) {
                uVar14 = *(uint *)(iVar13 + 0x48);
                iVar1 = *(int *)(iVar8 + 0x48);
              }
              else {
                uVar14 = *(uint *)(iVar8 + 0x48);
                iVar1 = *(int *)(iVar13 + 0x48);
              }
              uVar22 = 0;
              puVar4 = *(undefined4 **)(iVar1 * 4 + iVar21);
              iVar1 = *(int *)(uVar14 * 4 + iVar21);
              uVar25 = puVar4[3];
              if (uVar25 != 0) {
                iVar11 = *(int *)(param_1 + 0x14);
                piVar19 = (int *)puVar4[4];
                do {
                  if (*(uint *)(*(int *)(*piVar19 * 4 + iVar11) + 0x54) <= uVar14) break;
                  uVar2 = *(uint *)(iVar1 + 0xc);
                  uVar24 = 0;
                  if (uVar2 != 0) {
                    do {
                      uVar12 = 0;
                      if (uVar20 != 0) {
                        do {
                          iVar9 = fn_82965528(param_1,iVar1,uVar12,uVar24);
                          iVar10 = fn_82965528(param_1,puVar4);
                          if (iVar9 != iVar10) break;
                          uVar12 = uVar12 + 1;
                        } while ((uVar12 & 0xffffffff) < uVar20);
                      }
                    } while (((uVar12 & 0xffffffff) != uVar20) &&
                            (uVar24 = uVar24 + 1, (uVar24 & 0xffffffff) < (ulonglong)uVar2));
                  }
                  if ((uVar24 & 0xffffffff) == (ulonglong)uVar2) break;
                  uVar22 = uVar22 + 1;
                  piVar19 = piVar19 + 1;
                } while (uVar22 < (uint)puVar4[3]);
              }
              if (uVar22 < uVar25) goto code_r0x8296fda4;
              uVar24 = 0;
              if (uVar25 != 0) {
                iVar21 = 0;
                do {
                  uVar16 = *(uint *)(iVar1 + 0xc);
                  uVar14 = 0;
                  if (uVar16 != 0) {
                    do {
                      uVar12 = 0;
                      if (uVar20 != 0) {
                        do {
                          iVar8 = fn_82965528(param_1,puVar4,uVar12,uVar24);
                          iVar11 = fn_82965528(param_1,iVar1);
                          if (iVar11 != iVar8) break;
                          uVar12 = uVar12 + 1;
                        } while ((uVar12 & 0xffffffff) < uVar20);
                      }
                    } while (((uVar12 & 0xffffffff) != uVar20) &&
                            (uVar14 = uVar14 + 1, uVar14 < uVar16));
                  }
                  uVar24 = uVar24 + 1;
                  piVar19 = (int *)(puVar4[4] + iVar21);
                  iVar21 = iVar21 + 4;
                  *(undefined4 *)(*(int *)(*piVar19 * 4 + *(int *)(param_1 + 0x14)) + 0x30) =
                       *(undefined4 *)(uVar14 * 4 + *(int *)(iVar1 + 0x10));
                } while ((uVar24 & 0xffffffff) < (ulonglong)(uint)puVar4[3]);
              }
              bVar6 = true;
              *puVar4 = 0;
LAB_8296fe74:
              uVar24 = (ulonglong)uStack_c0;
              uVar20 = (ulonglong)uStack_bc;
            }
            uStack_b0 = uStack_b0 + 1;
            piVar5 = piVar5 + 1;
          } while ((ulonglong)uStack_b0 < (uVar24 & 0xffffffff));
        }
        uVar12 = (ulonglong)uStack_ac;
        uVar20 = uVar20 + 1;
        piVar17 = piVar17 + 1;
        uStack_bc = (uint)uVar20;
        uStack_ac = (uint)(uVar12 - 1);
      } while (uVar12 - 1 != 0);
      if (!bVar6) goto LAB_8296ff38;
      uVar16 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        iVar13 = *(int *)(param_1 + 0x14);
        iVar21 = 0;
        do {
          iVar8 = *(int *)(iVar13 + iVar21);
          while (*(int *)(iVar8 + 0x30) !=
                 *(int *)(*(int *)(*(int *)(iVar8 + 0x30) * 4 + iVar13) + 0x30)) {
            *(undefined4 *)(iVar8 + 0x30) =
                 *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x30) * 4 + iVar13) + 0x30);
            iVar13 = *(int *)(param_1 + 0x14);
          }
          uVar16 = uVar16 + 1;
          iVar21 = iVar21 + 4;
        } while (uVar16 < *(uint *)(param_1 + 8));
      }
      fn_8296D7F0(param_1);
      iVar15 = iVar15 + 1;
    } while( true );
  }
  uVar24 = 0xffffffff8007000e;
LAB_8296ff44:
  fn_8265C990(piVar7,0x24810000);
  return uVar24;
code_r0x8296fda4:
  uVar16 = uVar16 + 1;
  if (1 < uVar16) goto LAB_8296fe74;
  goto LAB_8296fca8;
LAB_8296ff38:
  uVar24 = (ulonglong)(iVar15 == 0);
  goto LAB_8296ff44;
}

