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
extern int fn_8294B7A8();
extern int fn_829632F0();
extern int fn_829640A0();
extern int fn_82964628();
extern int fn_829646C8();
extern int fn_82964868();
extern int fn_82975B00();
extern unsigned int iStack_d4;
extern unsigned int iStack_dc;
extern unsigned int lbl_82005710;
extern unsigned int uStack_a8;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;


undefined8 fn_829558B0(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar13;
  int iVar14;
  longlong lVar11;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 uVar12;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uStack_e0;
  int iStack_dc;
  uint uStack_d8;
  int iStack_d4;
  uint uStack_d0;
  int aiStack_c0 [4];
  uint auStack_b0 [2];
  undefined8 uStack_a8;
  
  uVar10 = fn_8294B7A8();
  if (-1 < (int)uVar10) {
    uStack_e0 = 0;
    uVar21 = 0;
    if (param_1[2] != 0) {
      iVar20 = 0;
      do {
        if ((param_1[0x22] == *(int *)(*(int *)(param_1[5] + iVar20) + 4)) &&
           (uVar1 = *(uint *)(*(int *)(param_1[5] + iVar20) + 0xc), uStack_e0 <= uVar1)) {
          uStack_e0 = uVar1 + 1;
        }
        uVar21 = uVar21 + 1;
        iVar20 = iVar20 + 4;
      } while (uVar21 < (uint)param_1[2]);
    }
    uVar21 = param_1[3];
    uStack_d8 = 0;
    if (uVar21 != 0) {
      iStack_d4 = 0;
      uVar10 = lbl_82005710;
      uStack_d0 = uVar21;
      do {
        iVar20 = iStack_d4;
        uVar23 = uStack_d8;
        puVar4 = *(uint **)(iStack_d4 + param_1[6]);
        uVar1 = *puVar4;
        if ((uVar1 & 0xfff00000) != 0) {
          uVar9 = (ulonglong)uVar1 & 0xfffff;
          uVar21 = puVar4[1];
          trapWord(6,uVar9,0);
          iVar5 = *(int *)(*(int *)puVar4[4] * 4 + param_1[5]);
          iVar2 = *(int *)(iVar5 + 0x14);
          iVar5 = *(int *)(iVar5 + 0x18);
          iVar13 = (**(code **)(*param_1 + 0x20))(param_1,puVar4,&iStack_dc);
          while ((iVar13 != 0 && ((*puVar4 & 0xfff00000) != 0x74100000))) {
            iVar20 = *(int *)(*(int *)(*(int *)(*(int *)(iStack_dc * (int)uVar9 * 4 + puVar4[2]) * 4
                                               + param_1[5]) + 4) * 4 + param_1[4]);
            if ((*(uint *)(iVar20 + 4) & 2) != 0) {
              uVar10 = 0xffffffff82037f94;
LAB_82955f70:
              fn_82975B00(param_1,puVar4[0xf],0,uVar10);
              return 0xffffffff80004005;
            }
            uVar24 = 0;
            uVar25 = 0;
            if (uVar21 / uVar9 != 0) {
              lVar26 = 0;
              do {
                iVar13 = *(int *)(*(int *)(*(int *)(*(int *)((int)lVar26 + puVar4[2]) * 4 +
                                                   param_1[5]) + 4) * 4 + param_1[4]);
                iVar14 = (**(code **)(*param_1 + 0x170))(param_1,puVar4,uVar25);
                if ((((iVar14 != 1) && (uVar19 = *(uint *)(iVar13 + 4), (uVar19 & 0x40) != 0)) &&
                    (((uVar19 ^ *(uint *)(iVar20 + 4)) & 0x12bf) == 0)) && ((uVar1 & 0xfffff) != 0))
                {
                  lVar11 = lVar26;
                  uVar27 = uVar9;
                  do {
                    uVar18 = 0;
                    uVar19 = 0;
                    iVar13 = *(int *)(*(int *)((int)lVar11 + puVar4[2]) * 4 + param_1[5]);
                    if (param_1[2] != 0) {
                      iVar14 = 0;
                      do {
                        iVar16 = *(int *)(param_1[5] + iVar14);
                        if (((*(int *)(iVar16 + 4) == *(int *)(iVar13 + 4)) &&
                            (*(int *)(iVar16 + 0xc) == *(int *)(iVar13 + 0xc))) &&
                           (*(int *)(iVar16 + 8) == *(int *)(iVar13 + 8))) {
                          uVar18 = *(int *)(iVar16 + 0x5c) + uVar18;
                        }
                        uVar19 = uVar19 + 1;
                        iVar14 = iVar14 + 4;
                      } while (uVar19 < (uint)param_1[2]);
                      if (uVar24 < uVar18) {
                        iStack_dc = (int)uVar25;
                        uVar24 = uVar18;
                      }
                    }
                    lVar11 = lVar11 + 4;
                    uVar27 = uVar27 - 1;
                  } while (uVar27 != 0);
                }
                uVar25 = uVar25 + 1;
                lVar26 = ((ulonglong)uVar1 & 0xfffff) * 4 + lVar26;
              } while ((uVar25 & 0xffffffff) < uVar21 / uVar9);
            }
            iVar14 = *(int *)(*(int *)(iStack_dc * (int)uVar9 * 4 + puVar4[2]) * 4 + param_1[5]);
            iVar20 = *(int *)(iVar14 + 4);
            iVar13 = *(int *)(iVar14 + 0xc);
            iVar14 = *(int *)(iVar14 + 8);
            if ((*(uint *)(*(int *)(iVar20 * 4 + param_1[4]) + 4) & 0x40) == 0) {
              uVar10 = 0xffffffff82037f54;
              goto LAB_82955f70;
            }
            uVar24 = param_1[2];
            uVar18 = 0;
            uVar19 = 0;
            uStack_a8 = 0xffffffffffffffff;
            if (uVar24 != 0) {
              iVar16 = param_1[5];
              iVar15 = 0;
              do {
                iVar22 = *(int *)(iVar16 + iVar15);
                if (((*(int *)(iVar22 + 4) == iVar20) && (*(int *)(iVar22 + 0xc) == iVar13)) &&
                   ((*(int *)(iVar22 + 8) == iVar14 &&
                    (((*(int *)(iVar22 + 0x3c) == 0 &&
                      (uVar3 = *(uint *)(iVar22 + 0x58), uVar23 <= uVar3)) &&
                     (auStack_b0[*(int *)(iVar22 + 0x10)] = uVar19, uVar18 <= uVar3)))))) {
                  uVar18 = uVar3 + 1;
                }
                uVar19 = uVar19 + 1;
                iVar15 = iVar15 + 4;
              } while (uVar19 < uVar24);
            }
            uVar25 = 0;
            lVar26 = 0;
            uVar23 = 0;
            do {
              iVar16 = *(int *)((int)auStack_b0 + uVar23);
              if (iVar16 != -1) {
                iVar15 = fn_82964628(uVar10,param_1,param_1[0x22],uStack_e0,lVar26);
                *(int *)((int)aiStack_c0 + uVar23) = iVar15;
                if (iVar15 == -1) {
                  return 0xffffffff8007000e;
                }
                iVar15 = *(int *)(iVar15 * 4 + param_1[5]);
                uVar12 = fn_829640A0(iVar15,*(undefined4 *)(iVar16 * 4 + param_1[5]));
                if ((int)uVar12 < 0) {
                  return uVar12;
                }
                *(int *)(iVar15 + 0x14) = iVar2;
                *(int *)(iVar15 + 0x18) = iVar5;
                uVar25 = uVar25 + 1;
                *(undefined4 *)(iVar15 + 0x68) = 0;
                *(undefined4 *)(iVar15 + 0x6c) = 0xffffffff;
                *(undefined4 *)(iVar15 + 0x70) = 0;
              }
              uVar23 = uVar23 + 4;
              lVar26 = lVar26 + 1;
            } while (uVar23 < 0x10);
            iVar16 = fn_829646C8(param_1,uVar25 & 0xffffffff000fffff | 0x10000000,uVar25,
                                       uVar25);
            if (iVar16 == -1) {
              return 0xffffffff8007000e;
            }
            iVar16 = *(int *)(iVar16 * 4 + param_1[6]);
            uVar12 = fn_829632F0(iVar16,puVar4);
            if ((int)uVar12 < 0) {
              return uVar12;
            }
            iVar22 = 0;
            iVar15 = 0;
            lVar26 = 4;
            do {
              if (*(int *)((int)auStack_b0 + iVar15) != -1) {
                uVar17 = *(undefined4 *)((int)aiStack_c0 + iVar15);
                *(int *)(*(int *)(iVar16 + 8) + iVar22) = *(int *)((int)auStack_b0 + iVar15);
                *(undefined4 *)(*(int *)(iVar16 + 0x10) + iVar22) = uVar17;
                iVar22 = iVar22 + 4;
              }
              iVar15 = iVar15 + 4;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            uStack_e0 = uStack_e0 + 1;
            iVar16 = iStack_d4;
            for (uVar23 = uStack_d8; uVar23 < uVar18; uVar23 = uVar23 + 1) {
              puVar6 = *(uint **)(iVar16 + param_1[6]);
              if ((*puVar6 & 0xfff00000) != 0) {
                iVar15 = *(int *)puVar6[4];
                do {
                  iVar22 = *(int *)(iVar15 * 4 + param_1[5]);
                  iVar15 = *(int *)(iVar22 + 0x14);
                  iVar22 = *(int *)(iVar22 + 0x18);
                  if (iVar15 == -1) break;
                } while ((iVar15 != iVar2) || (iVar22 != iVar5));
                if ((((iVar15 == iVar2) &&
                     ((iVar22 == iVar5 &&
                      (iVar15 = (**(code **)(*param_1 + 0x20))(param_1,puVar6,0), iVar15 != 0)))) &&
                    ((*puVar6 & 0xfff00000) != 0x74100000)) && (uVar24 = 0, puVar6[1] != 0)) {
                  iVar15 = 0;
                  do {
                    iVar22 = *(int *)(*(int *)(iVar15 + puVar6[2]) * 4 + param_1[5]);
                    if (((*(int *)(iVar22 + 4) == iVar20) && (*(int *)(iVar22 + 0xc) == iVar13)) &&
                       (*(int *)(iVar22 + 8) == iVar14)) {
                      if (*(int *)(iVar22 + 0x3c) == 0) {
                        *(int *)(iVar15 + puVar6[2]) = aiStack_c0[*(int *)(iVar22 + 0x10)];
                      }
                      else {
                        iVar7 = *(int *)(aiStack_c0[*(int *)(iVar22 + 0x10)] * 4 + param_1[5]);
                        uVar17 = fn_82964628(uVar10,param_1,param_1[0x22],
                                                   *(undefined4 *)(iVar7 + 0xc),
                                                   *(undefined4 *)(iVar7 + 0x10));
                        *(undefined4 *)(iVar15 + puVar6[2]) = uVar17;
                        if (*(int *)(iVar15 + puVar6[2]) == -1) {
                          return 0xffffffff8007000e;
                        }
                        iVar8 = *(int *)(*(int *)(iVar15 + puVar6[2]) * 4 + param_1[5]);
                        uVar12 = fn_829640A0(iVar8,iVar7);
                        if ((int)uVar12 < 0) {
                          return uVar12;
                        }
                        *(int *)(iVar8 + 0x38) = aiStack_c0[*(int *)(iVar22 + 0x10)];
                        *(undefined4 *)(iVar8 + 0x3c) = *(undefined4 *)(iVar22 + 0x3c);
                      }
                    }
                    uVar24 = uVar24 + 1;
                    iVar15 = iVar15 + 4;
                  } while (uVar24 < puVar6[1]);
                }
              }
              iVar16 = iVar16 + 4;
            }
            iVar13 = (**(code **)(*param_1 + 0x20))(param_1,puVar4,&iStack_dc);
            uVar23 = uStack_d8;
            iVar20 = iStack_d4;
          }
          uVar12 = fn_82964868(param_1,puVar4);
          if ((int)uVar12 < 0) {
            return uVar12;
          }
          *puVar4 = 0;
          uVar21 = uStack_d0;
        }
        uStack_d8 = uVar23 + 1;
        iStack_d4 = iVar20 + 4;
      } while (uStack_d8 < uVar21);
    }
    uVar10 = 0;
  }
  return uVar10;
}

