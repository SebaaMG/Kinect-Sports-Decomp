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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_829576E0();
extern int fn_829640A0();
extern unsigned int uStack00000034;


undefined8
fn_82959138(int param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,int param_7)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  uint uStack00000034;
  int aiStack_120 [4];
  int aiStack_110 [4];
  int aiStack_100 [4];
  undefined4 auStack_f0 [4];
  undefined4 auStack_e0 [4];
  uint auStack_d0 [4];
  undefined4 auStack_c0 [4];
  undefined4 auStack_b0 [44];
  
  if (param_6 == 0) {
    param_6 = *(int *)(param_1 + 0x104);
  }
  iVar20 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x88) == *(int *)(*(int *)(**(int **)(param_6 + 0x10) * 4 + iVar20) + 4)) {
    puVar1 = *(uint **)(param_1 + 0x104);
    bVar11 = false;
    if ((*puVar1 & 0xfffff) == puVar1[3]) {
      uVar18 = 0;
      if (puVar1[3] != 0) {
        iVar19 = 0;
        bVar11 = false;
        do {
          iVar12 = *(int *)(*(int *)(iVar19 + param_4) * 4 + iVar20);
          if ((((*(uint *)(param_1 + 0x6c) & 0x2000) != 0) &&
              ((*(uint *)(iVar12 + 0x3c) & 0x200) != 0)) && (param_2 == 0x80000)) {
            bVar11 = true;
          }
          if (((*(uint *)(iVar12 + 0x3c) & 0x1f0000) != 0) &&
             ((*(uint *)(iVar12 + 0x3c) & ~param_3 & 0x1f0000) != 0)) {
            if (param_2 != 0x80000) {
              return 1;
            }
            bVar11 = true;
          }
          if ((*(uint *)(*(int *)(*(int *)((int)*(int **)(param_6 + 0x10) + iVar19) * 4 + iVar20) +
                        0x3c) & 0xfe00) != 0) {
            return 1;
          }
          if (((*(uint *)(param_1 + 0x6c) & 0x4000000) != 0) &&
             ((*(uint *)(*(int *)(*(int *)(iVar12 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x200)
              != 0)) {
            if ((*puVar1 & 0xfff00000) != 0x10100000) {
              return 1;
            }
            bVar11 = true;
          }
          uVar18 = uVar18 + 1;
          iVar19 = iVar19 + 4;
        } while (uVar18 < *(uint *)(*(int *)(param_1 + 0x104) + 0xc));
      }
      uVar13 = 0;
      uVar18 = 0;
      if (*(int *)(param_6 + 0xc) != 0) {
        iVar20 = 0;
        do {
          iVar19 = *(int *)(*(int *)(iVar20 + *(int *)(param_6 + 0x10)) * 4 +
                           *(int *)(param_1 + 0x14));
          iVar12 = *(int *)(*(int *)((param_4 - (int)aiStack_120) + (int)aiStack_120 + iVar20) * 4 +
                           *(int *)(param_1 + 0x14));
          uVar2 = *(undefined4 *)(iVar19 + 0xc);
          uVar3 = *(undefined4 *)(iVar19 + 0x10);
          uVar4 = *(undefined4 *)(iVar19 + 0x14);
          uVar5 = *(undefined4 *)(iVar19 + 0x18);
          uVar18 = *(uint *)(iVar19 + 0x3c);
          uVar6 = *(undefined4 *)(iVar19 + 0x48);
          uVar7 = *(undefined4 *)(iVar19 + 0x68);
          *(undefined4 *)((int)aiStack_120 + iVar20) = *(undefined4 *)(iVar19 + 8);
          *(undefined4 *)((int)aiStack_110 + iVar20) = uVar2;
          *(undefined4 *)((int)aiStack_100 + iVar20) = uVar3;
          *(undefined4 *)((int)auStack_f0 + iVar20) = uVar4;
          *(undefined4 *)((int)auStack_e0 + iVar20) = uVar5;
          *(uint *)((int)auStack_d0 + iVar20) = uVar18;
          *(undefined4 *)((int)auStack_c0 + iVar20) = uVar6;
          *(undefined4 *)((int)auStack_b0 + iVar20) = uVar7;
          if (bVar11) {
            uVar18 = uVar18 ^ param_5 | ~param_5 & uVar18;
          }
          else {
            *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(iVar12 + 4);
            *(undefined4 *)(iVar19 + 8) = *(undefined4 *)(iVar12 + 8);
            *(undefined4 *)(iVar19 + 0xc) = *(undefined4 *)(iVar12 + 0xc);
            *(undefined4 *)(iVar19 + 0x10) = *(undefined4 *)(iVar12 + 0x10);
            *(undefined4 *)(iVar19 + 0x14) = *(undefined4 *)(iVar12 + 0x14);
            *(undefined4 *)(iVar19 + 0x18) = *(undefined4 *)(iVar12 + 0x18);
            *(undefined4 *)(iVar19 + 0x48) = *(undefined4 *)(iVar12 + 0x48);
            *(undefined4 *)(iVar19 + 0x68) = *(undefined4 *)(iVar12 + 0x68);
            uVar18 = *(uint *)(iVar12 + 0x3c) ^ param_5 | *(uint *)(iVar12 + 0x3c) & ~param_5 |
                     uVar18;
          }
          uVar13 = uVar13 + 1;
          *(uint *)(iVar19 + 0x3c) = uVar18;
          uVar18 = *(uint *)(param_6 + 0xc);
          iVar20 = iVar20 + 4;
        } while (uVar13 < uVar18);
      }
      uVar13 = 0;
      uStack00000034 = param_5;
      if (uVar18 != 0) {
        iVar20 = *(int *)(param_6 + 0x10);
        iVar19 = 0;
        do {
          iVar12 = fn_829576E0(param_1,*(undefined4 *)(iVar20 + iVar19));
          if (iVar12 == 1) goto LAB_82959650;
          uVar13 = uVar13 + 1;
          iVar19 = iVar19 + 4;
        } while (uVar13 < uVar18);
      }
      uVar22 = 0;
      uVar13 = 0xffffffff;
      uVar25 = 0xffffffff;
      uVar23 = 0;
      if (uVar18 != 0) {
        iVar20 = 0;
        do {
          iVar19 = *(int *)(*(int *)(*(int *)(param_6 + 0x10) + iVar20) * 4 +
                           *(int *)(param_1 + 0x14));
          iVar12 = *(int *)(*(int *)((int)aiStack_120 + iVar20 + (param_4 - (int)aiStack_120)) * 4 +
                           *(int *)(param_1 + 0x14));
          if (*(uint *)(iVar19 + 0x54) < uVar13) {
            uVar13 = *(uint *)(iVar19 + 0x54);
          }
          if (uVar22 < *(uint *)(iVar19 + 0x58)) {
            uVar22 = *(uint *)(iVar19 + 0x58);
          }
          if ((((*(int *)(param_1 + 0x88) == *(int *)(iVar12 + 4)) &&
               (*(int *)((int)aiStack_120 + iVar20) == *(int *)(iVar12 + 8))) &&
              (*(int *)((int)aiStack_110 + iVar20) == *(int *)(iVar12 + 0xc))) &&
             (*(int *)((int)aiStack_100 + iVar20) == *(int *)(iVar12 + 0x10))) {
            uVar26 = *(uint *)(iVar19 + 0x50);
          }
          else {
            uVar26 = *(uint *)(iVar12 + 0x50);
          }
          if (uVar26 < uVar25) {
            uVar25 = uVar26;
          }
          uVar23 = uVar23 + 1;
          iVar20 = iVar20 + 4;
        } while (uVar23 < uVar18);
      }
      if (((param_7 != 0) || (uVar22 <= uVar25)) || ((*(uint *)(param_1 + 0x6c) & 4) != 0)) {
        if (bVar11) {
          **(uint **)(param_1 + 0x104) = **(uint **)(param_1 + 0x104) & 0xfffff | 0x10000000;
          return 0;
        }
        if (uVar13 <= uVar22) {
          piVar24 = (int *)(uVar13 * 4 + *(int *)(param_1 + 0x18));
          do {
            puVar1 = (uint *)*piVar24;
            uVar25 = *puVar1;
            if (uVar25 != 0) {
              uVar23 = uVar25 & 0xfffff;
              piVar21 = (int *)puVar1[2];
              bVar11 = false;
              piVar14 = piVar21 + puVar1[1];
              if (piVar21 < piVar14) {
                do {
                  uVar15 = 0;
                  piVar16 = piVar21;
                  uVar26 = uVar23;
                  if ((uVar25 & 0xfffff) != 0) {
                    do {
                      uVar17 = 0;
                      if (uVar18 != 0) {
                        iVar20 = 0;
                        do {
                          if (*(int *)(*(int *)(param_6 + 0x10) + iVar20) == *piVar16) {
                            uVar15 = uVar15 + 1;
                            break;
                          }
                          uVar17 = uVar17 + 1;
                          iVar20 = iVar20 + 4;
                        } while (uVar17 < uVar18);
                      }
                      uVar26 = uVar26 - 1;
                      piVar16 = piVar16 + 1;
                    } while (uVar26 != 0);
                    if (uVar15 != 0) {
                      if (((uVar15 != uVar23) ||
                          (uVar26 = uVar25 & 0xfff00000, uVar26 == 0x70500000)) ||
                         ((uVar26 == 0x70600000 || (uVar26 == 0x70700000)))) goto LAB_82959650;
                      bVar11 = true;
                    }
                  }
                  piVar21 = piVar21 + uVar23;
                } while (piVar21 < piVar14);
                if (((bVar11) &&
                    (((((uVar25 & 0xf0000000) == 0x60000000 ||
                       (uVar25 = uVar25 & 0xfff00000, uVar25 == 0x10d00000)) ||
                      (uVar25 == 0x10e00000)) || (uVar25 == 0x11000000)))) &&
                   ((*(uint *)(param_1 + 0x6c) & 0x80) == 0)) goto LAB_82959650;
              }
            }
            uVar13 = uVar13 + 1;
            piVar24 = piVar24 + 1;
          } while (uVar13 <= uVar22);
        }
        if (*(int *)(param_1 + 0x160) == 0) {
          uVar13 = 0;
          if (uVar18 != 0) {
            iVar20 = 0;
            do {
              puVar1 = *(uint **)(*(uint *)(iVar20 + param_4) * 4 + *(int *)(param_1 + 0x14));
              uVar18 = puVar1[0xe];
              puVar10 = *(uint **)(*(int *)(iVar20 + *(int *)(param_6 + 0x10)) * 4 +
                                  *(int *)(param_1 + 0x14));
              if (uVar18 == 0xffffffff) {
                puVar10[0xe] = *(uint *)(iVar20 + param_4);
              }
              else {
                puVar10[0xe] = uVar18;
              }
              uVar18 = *puVar1;
              *puVar10 = uVar18;
              if (param_5 == 0x80000) {
                if ((uVar18 & 4) != 0) {
                  *puVar10 = uVar18 & 0xfffffff3 | 8;
                  goto LAB_82959764;
                }
              }
              else {
LAB_82959764:
                if (param_5 == 0x100000) {
                  *puVar10 = *puVar10 | 4;
                }
              }
              fn_829640A0();
              uVar13 = uVar13 + 1;
              iVar20 = iVar20 + 4;
            } while (uVar13 < *(uint *)(param_6 + 0xc));
          }
          **(undefined4 **)(param_1 + 0x104) = 0;
          return 0;
        }
        *(undefined4 *)(param_1 + 0x160) = 2;
      }
LAB_82959650:
      uVar18 = 0;
      if (*(int *)(param_6 + 0xc) != 0) {
        iVar20 = 0;
        do {
          uVar2 = *(undefined4 *)((int)aiStack_120 + iVar20);
          uVar3 = *(undefined4 *)((int)aiStack_110 + iVar20);
          uVar4 = *(undefined4 *)((int)aiStack_100 + iVar20);
          uVar5 = *(undefined4 *)((int)auStack_f0 + iVar20);
          uVar18 = uVar18 + 1;
          uVar6 = *(undefined4 *)((int)auStack_e0 + iVar20);
          uVar7 = *(undefined4 *)((int)auStack_d0 + iVar20);
          iVar19 = *(int *)(*(int *)(iVar20 + *(int *)(param_6 + 0x10)) * 4 +
                           *(int *)(param_1 + 0x14));
          uVar8 = *(undefined4 *)((int)auStack_c0 + iVar20);
          uVar9 = *(undefined4 *)((int)auStack_b0 + iVar20);
          iVar20 = iVar20 + 4;
          *(undefined4 *)(iVar19 + 4) = *(undefined4 *)(param_1 + 0x88);
          *(undefined4 *)(iVar19 + 8) = uVar2;
          *(undefined4 *)(iVar19 + 0xc) = uVar3;
          *(undefined4 *)(iVar19 + 0x10) = uVar4;
          *(undefined4 *)(iVar19 + 0x14) = uVar5;
          *(undefined4 *)(iVar19 + 0x18) = uVar6;
          *(undefined4 *)(iVar19 + 0x3c) = uVar7;
          *(undefined4 *)(iVar19 + 0x48) = uVar8;
          *(undefined4 *)(iVar19 + 0x68) = uVar9;
        } while (uVar18 < *(uint *)(param_6 + 0xc));
      }
    }
  }
  return 1;
}

