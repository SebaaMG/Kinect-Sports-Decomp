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
extern unsigned int *auStack_11c;
extern int fn_829632A0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963FA8();
extern int fn_829644B8();
extern int fn_82964628();
extern int fn_82975B00();
extern int fn_8299F910();
extern int fn_8299FA58();
extern int fn_82BA02A8();
extern unsigned int lbl_82005710;
extern unsigned int uStack00000024;


longlong fn_829A0220(int param_1,int *param_2,uint param_3,int param_4,ulonglong param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int *piVar7;
  int iVar8;
  ulonglong uVar6;
  int iVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar15;
  undefined8 uVar14;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  longlong lVar21;
  int iVar22;
  uint *puVar24;
  int iVar25;
  longlong lVar23;
  uint uVar26;
  uint uVar27;
  int *piStack0000001c;
  uint uStack00000024;
  uint *puStack_120;
  uint auStack_11c [13];
  int aiStack_e8 [8];
  int aiStack_c8 [50];
  
  puStack_120 = (uint *)0x0;
  auStack_11c[7] = 0;
  puVar20 = (uint *)0x0;
  uVar19 = 0;
  uVar13 = lbl_82005710;
  piStack0000001c = param_2;
  uStack00000024 = param_3;
  if (param_3 != 0) {
    do {
      puVar24 = (uint *)*param_2;
      if (puVar24 != (uint *)0x0) {
        uVar16 = *puVar24;
        uVar17 = (ulonglong)uVar16 & 0xfffff;
        if ((uVar16 & 0xfff00000) == 0x60000000) {
          uVar17 = 1;
        }
        if ((uVar17 == (param_5 & 0xffffffff)) && ((*puVar24 & 0xfff00000) != 0x11000000)) {
          bVar5 = false;
          if ((param_5 & 0xffffffff) != 0) {
            uVar26 = puVar24[2];
            lVar21 = ((ulonglong)uVar16 & 0xfffff) << 2;
            uVar11 = *(undefined4 *)(param_1 + 0x224);
            iVar22 = 0;
            uVar1 = *(undefined4 *)(param_1 + 0x230);
            uVar17 = param_5;
            do {
              piVar7 = (int *)fn_8299F910(param_1,uVar1,uVar11,lVar21 + (ulonglong)uVar26,1,0);
              *(int **)((int)aiStack_e8 + iVar22) = piVar7;
              if ((piVar7 == (int *)0x0) || (*piVar7 != 0x50000003)) {
LAB_829a03b4:
                bVar5 = true;
              }
              else {
                fn_8299FA58(param_1);
                puVar24 = (uint *)((int)auStack_11c + iVar22 + 0x24);
                fn_8299FA58(param_1,param_4,4,piVar7,puVar24,(int)aiStack_c8 + iVar22,&puStack_120
                              ,1);
                puVar20 = puStack_120;
                if ((*(int *)((int)aiStack_c8 + iVar22 + 0x10) == 0) ||
                   ((*puVar24 != auStack_11c[9] || (puStack_120 == (uint *)0x0))))
                goto LAB_829a03b4;
              }
              uVar17 = uVar17 - 1;
              lVar21 = lVar21 + 4;
              iVar22 = iVar22 + 4;
            } while (uVar17 != 0);
            if (bVar5) goto LAB_829a08d8;
          }
          uVar17 = 0;
          if ((param_5 & 0xffffffff) != 0) {
            iVar22 = -4;
            do {
              uVar16 = *(uint *)(param_1 + 0x4c);
              if (uVar16 < *(uint *)(param_1 + 0x228)) {
                piVar7 = (int *)(*(int *)(param_1 + 0x234) + uVar16 * 4);
                do {
                  piVar2 = (int *)*piVar7;
                  if (((piVar2 != (int *)0x0) &&
                      (puVar24 = (uint *)*param_2, puVar24 != (uint *)0x0)) && (*piVar2 != 0)) {
                    uVar26 = puVar24[1];
                    uVar27 = *puVar24 & 0xfffff;
                    if (*puVar24 == 0x72d00003) {
                      uVar26 = 6;
                    }
                    if (uVar27 < uVar26) {
                      iVar8 = uVar27 << 2;
                      do {
                        uVar15 = 0;
                        if (piVar2[1] != 0) {
                          iVar18 = 0;
                          do {
                            if ((*(int *)(iVar18 + piVar2[2]) == *(int *)(puVar24[2] + iVar8)) ||
                               (*(int *)(*(int *)(*(int *)(iVar18 + piVar2[2]) * 4 +
                                                 *(int *)(param_1 + 0x14)) + 0x38) ==
                                *(int *)(puVar24[2] + iVar8))) {
                              iVar22 = piVar2[0xf];
                              uVar13 = 0x11ac;
                              uVar14 = 0xffffffff820517b0;
                              goto LAB_829a09a4;
                            }
                            uVar15 = uVar15 + 1;
                            iVar18 = iVar18 + 4;
                          } while (uVar15 < (uint)piVar2[1]);
                        }
                        uVar27 = uVar27 + 1;
                        iVar8 = iVar8 + 4;
                      } while (uVar27 < uVar26);
                    }
                  }
                  uVar16 = uVar16 + 1;
                  piVar7 = piVar7 + 1;
                } while (uVar16 < *(uint *)(param_1 + 0x228));
              }
              if (((uVar17 & 0xffffffff) != 0) &&
                 ((uVar16 = *(uint *)((int)auStack_11c + iVar22 + 4), uVar16 <= auStack_11c[9] ||
                  (*(int *)((int)auStack_11c + iVar22 + 8) != uVar16 + 1)))) {
                uVar16 = (uint)*(byte *)(param_1 + 0xcb);
                uVar13 = 0x11ad;
                uVar14 = 0xffffffff82051720;
                uVar11 = 0;
                goto LAB_829a09b8;
              }
              iVar8 = *(int *)(*(int *)((int)aiStack_e8 + iVar22 + 4) + 8);
              if (*(int *)(*(int *)(*(int *)(*(int *)((int)aiStack_e8 + iVar22 + 0x14) * 4 + iVar8)
                                    * 4 + *(int *)(param_1 + 0x14)) + 0x3c) != 0) {
                uVar13 = 0x11ae;
                uVar14 = 0xffffffff820516c8;
                goto LAB_829a09a0;
              }
              iVar8 = *(int *)(*(int *)(*(int *)(*(int *)((int)aiStack_c8 + iVar22 + 4) * 4 + iVar8)
                                        * 4 + *(int *)(param_1 + 0x14)) + 0x3c);
              if ((iVar8 != 0) && (iVar8 != 0x60000)) {
                uVar13 = 0x11af;
                uVar14 = 0xffffffff82051678;
                goto LAB_829a09a0;
              }
              iVar8 = fn_82963998(0x74);
              if (iVar8 == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = fn_829632A0();
              }
              *(int *)((int)auStack_11c + iVar22 + 0x18) = (int)uVar6;
              if ((uVar6 & 0xffffffff) == 0) {
                lVar21 = -0x7ff8fff2;
                goto LAB_829a08f0;
              }
              if ((uVar17 & 0xffffffff) == (param_5 - 1 & 0xffffffff)) {
                if (*(int *)*param_2 != 0x72d00003) {
                  if (*(int *)*param_2 == 0x72c00003) {
                    if ((param_5 & 0xffffffff) != 3) goto LAB_829a098c;
                    uVar10 = 0x72900000;
                  }
                  else if ((param_5 & 0xffffffff) == 1) {
                    uVar10 = 0x72b00000;
                  }
                  else {
                    uVar10 = 0x72500000;
                    if ((param_5 & 0xffffffff) != 3) {
                      uVar10 = 0x72300000;
                    }
                  }
                  uVar14 = 4;
                  goto LAB_829a060c;
                }
                if ((param_5 & 0xffffffff) != 3) {
LAB_829a098c:
                  lVar21 = 1;
                  goto LAB_829a08f0;
                }
                uVar10 = 0x72a00000;
                uVar14 = 4;
                uVar12 = 9;
              }
              else {
                uVar10 = 0x72400000;
                if ((param_5 & 0xffffffff) != 3) {
                  uVar10 = 0x72200000;
                }
                uVar14 = 0;
LAB_829a060c:
                uVar12 = 6;
              }
              lVar21 = fn_82963A30(uVar6,uVar10 | 3,uVar12,uVar14,0);
              if (lVar21 < 0) goto LAB_829a08f0;
              uVar17 = uVar17 + 1;
              iVar22 = iVar22 + 4;
            } while ((uVar17 & 0xffffffff) < (param_5 & 0xffffffff));
          }
          uVar17 = 0;
          if ((param_5 & 0xffffffff) != 0) {
            do {
              iVar22 = 0;
              uVar16 = 0xc;
              do {
                iVar25 = uVar16 - 0xc;
                iVar4 = (int)((uVar17 & 0x3fffffff) << 2);
                iVar8 = *(int *)((int)aiStack_e8 + iVar4);
                iVar18 = *(int *)((int)auStack_11c + iVar4 + 0x14);
                iVar3 = *(int *)((int)aiStack_c8 + iVar4);
                *(undefined4 *)(*(int *)(iVar18 + 8) + iVar25) =
                     *(undefined4 *)
                      ((*(int *)((int)aiStack_e8 + iVar4 + 0x10) + iVar22) * 4 + *(int *)(iVar8 + 8)
                      );
                *(undefined4 *)(*(int *)(iVar18 + 8) + uVar16) =
                     *(undefined4 *)((iVar3 + iVar22) * 4 + *(int *)(iVar8 + 8));
                uVar11 = *(undefined4 *)
                          (*(int *)(*(int *)(iVar18 + 8) + iVar25) * 4 + *(int *)(param_1 + 0x14));
                iVar8 = *(int *)(*(int *)(*(int *)(iVar18 + 8) + uVar16) * 4 +
                                *(int *)(param_1 + 0x14));
                iVar9 = fn_82964628(uVar13,param_1,*(undefined4 *)(param_1 + 0x80),0,0);
                iVar3 = *(int *)(iVar9 * 4 + *(int *)(param_1 + 0x14));
                *(int *)(*(int *)(iVar18 + 8) + uVar16) = iVar9;
                fn_82963FA8(uVar11,*(undefined4 *)
                                     (*(int *)(*(int *)(*(int *)((int)aiStack_c8 + iVar4 + 0x10) + 8
                                                       ) + iVar25) * 4 + *(int *)(param_1 + 0x14)));
                uVar11 = *(undefined4 *)(iVar8 + 0x3c);
                fn_82963FA8(iVar3,*(undefined4 *)
                                    (*(int *)((*puVar20 & 0xfffff) * 4 + puVar20[2]) * 4 +
                                    *(int *)(param_1 + 0x14)));
                *(int *)(iVar3 + 0x10) = iVar22;
                *(undefined4 *)(iVar3 + 0x3c) = uVar11;
                if ((*(int *)*param_2 == 0x72d00003) &&
                   ((uVar17 & 0xffffffff) == (param_5 - 1 & 0xffffffff))) {
                  *(undefined4 *)(*(int *)(iVar18 + 8) + uVar16 + 0xc) =
                       *(undefined4 *)(((int *)*param_2)[2] + uVar16 + 0xc);
                }
                uVar16 = uVar16 + 4;
                iVar22 = iVar22 + 1;
              } while (uVar16 < 0x18);
              uVar17 = uVar17 + 1;
            } while ((uVar17 & 0xffffffff) < (param_5 & 0xffffffff));
          }
          iVar22 = (int)param_5;
          iVar8 = 0;
          lVar21 = 4;
          uVar16 = auStack_11c[iVar22 + 4];
          do {
            *(undefined4 *)(*(int *)(uVar16 + 0x10) + iVar8) =
                 *(undefined4 *)(*(int *)(*param_2 + 0x10) + iVar8);
            iVar8 = iVar8 + 4;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          uVar17 = 0;
          if ((param_5 & 0xffffffff) != 0) {
            puVar24 = auStack_11c;
            do {
              puVar24 = puVar24 + 1;
              if (*(int *)(*puVar24 * 4 + param_4) != 0) goto LAB_829a09bc;
              uVar17 = uVar17 + 1;
            } while ((uVar17 & 0xffffffff) < (param_5 & 0xffffffff));
          }
          iVar8 = *(int *)(**(int **)(*param_2 + 8) * 4 + *(int *)(param_1 + 0x14));
          uVar26 = *(uint *)(*(int *)(*(int *)(iVar8 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4);
          if ((uVar26 & 0x80) == 0) {
            uVar13 = 0x12cc;
            uVar14 = 0xffffffff8205164c;
LAB_829a09a0:
            iVar22 = 0;
LAB_829a09a4:
            fn_82975B00(param_1,iVar22,uVar13,uVar14);
LAB_829a09bc:
            lVar21 = -0x7fffbffb;
            goto LAB_829a08f0;
          }
          if ((uVar26 & 0x840) == 0) {
            *(uint *)(iVar8 + 0xc) = auStack_11c[iVar22];
          }
          else {
            uVar16 = auStack_11c[iVar22];
            if (uVar16 != *(uint *)(iVar8 + 0xc)) {
              uVar13 = 0x11a3;
              uVar11 = *(undefined4 *)(piStack0000001c[uVar19] + 0x3c);
              if ((uVar26 & 0x800) == 0) {
                uVar14 = 0xffffffff82051608;
              }
              else {
                uVar14 = 0xffffffff820517f8;
              }
LAB_829a09b8:
              fn_82975B00(param_1,uVar11,uVar13,uVar14,uVar16);
              goto LAB_829a09bc;
            }
          }
          uVar17 = 0;
          if ((param_5 & 0xffffffff) != 0) {
            iVar22 = 0;
            do {
              *(undefined4 *)(*(int *)((int)auStack_11c + iVar22 + 4) * 4 + param_4) =
                   *(undefined4 *)((int)auStack_11c + iVar22 + 0x14);
              lVar21 = fn_829644B8(param_1);
              if (lVar21 < 0) goto LAB_829a08f0;
              uVar17 = uVar17 + 1;
              *(undefined4 *)((int)auStack_11c + iVar22 + 0x14) = 0;
              *param_2 = 0;
              iVar22 = iVar22 + 4;
            } while ((uVar17 & 0xffffffff) < (param_5 & 0xffffffff));
          }
        }
      }
LAB_829a08d8:
      uVar19 = uVar19 + 1;
      param_2 = param_2 + 1;
    } while (uVar19 < uStack00000024);
  }
  lVar21 = 0;
LAB_829a08f0:
  puVar20 = auStack_11c + 5;
  lVar23 = 3;
  do {
    uVar19 = *puVar20;
    if (uVar19 != 0) {
      fn_82BA02A8(uVar19);
      fn_829639F0(uVar19);
    }
    lVar23 = lVar23 + -1;
    puVar20 = puVar20 + 1;
  } while (lVar23 != 0);
  return lVar21;
}

