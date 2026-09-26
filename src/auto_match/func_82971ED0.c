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
extern int fn_829632F0();
extern int fn_82963318();
extern int fn_829639F0();
extern int fn_82964628();
extern int fn_829646C8();
extern int fn_82966AA8();
extern int fn_8296CF68();
extern int fn_82BA02A8();
extern int fn_82F691F0();
extern unsigned int lbl_82005710;
extern unsigned int uStack_134;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;


longlong fn_82971ED0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int *piVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar20;
  longlong lVar19;
  undefined4 *puVar21;
  uint uVar23;
  uint uVar24;
  longlong lVar22;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined8 uVar30;
  uint uStack_140;
  undefined4 uStack_13c;
  int *piStack_138;
  undefined4 uStack_134;
  int aiStack_130 [76];
  
  bVar5 = false;
  fn_8296CF68();
  uVar25 = 0;
  uVar11 = 0;
  uStack_140 = 0;
  uVar24 = 0;
  uStack_13c = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar12 = 0;
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 0x14) + iVar12);
      if ((*(int *)(param_1 + 0x88) == *(int *)(iVar6 + 4)) &&
         (uVar18 = (ulonglong)*(uint *)(iVar6 + 0xc), (uVar25 & 0xffffffff) <= uVar18)) {
        uVar25 = uVar18 + 1;
      }
      uVar24 = uVar24 + 1;
      iVar12 = iVar12 + 4;
    } while (uVar24 < *(uint *)(param_1 + 8));
    uStack_140 = (uint)uVar25;
  }
  uVar30 = lbl_82005710;
  if (((*(uint *)(param_1 + 0x6c) & 0x2000000) == 0) && (uVar24 = 0, *(int *)(param_1 + 0xc) != 0))
  {
    iVar12 = 0;
    do {
      piVar16 = *(int **)(*(int *)(param_1 + 0x18) + iVar12);
      if (*piVar16 == 0x50000002) {
        iVar6 = fn_829646C8(param_1,0x20500002,0xffffffffffffffff,0xffffffffffffffff);
        if ((iVar6 == -1) ||
           (iVar7 = fn_829646C8(param_1,0x20400001,0xffffffffffffffff,0xffffffffffffffff),
           iVar7 == -1)) goto LAB_82973d68;
        iVar6 = *(int *)(iVar6 * 4 + *(int *)(param_1 + 0x18));
        iVar7 = *(int *)(iVar7 * 4 + *(int *)(param_1 + 0x18));
        fn_829632F0(iVar6,piVar16);
        fn_829632F0(iVar7,piVar16);
        puVar21 = (undefined4 *)piVar16[2];
        puVar1 = *(undefined4 **)(iVar6 + 8);
        lVar26 = 0;
        uVar10 = 0;
        *puVar1 = *puVar21;
        puVar1[1] = puVar21[1];
        puVar1[2] = puVar21[2];
        puVar1[3] = puVar21[3];
        **(undefined4 **)(iVar7 + 0x10) = *(undefined4 *)piVar16[4];
        do {
          uVar8 = fn_82964628(uVar30,param_1,*(undefined4 *)(param_1 + 0x88),uVar25,lVar26);
          *(undefined4 *)(uVar10 + *(int *)(iVar7 + 8)) = uVar8;
          *(undefined4 *)(*(int *)(iVar6 + 0x10) + uVar10) = uVar8;
          if (*(int *)(*(int *)(iVar6 + 0x10) + uVar10) == -1) goto LAB_82973d68;
          lVar26 = lVar26 + 1;
          *(undefined4 *)
           (*(int *)(*(int *)(*(int *)(iVar6 + 0x10) + uVar10) * 4 + *(int *)(param_1 + 0x14)) +
           0x18) = *(undefined4 *)
                    (*(int *)(*(int *)piVar16[4] * 4 + *(int *)(param_1 + 0x14)) + 0x18);
          piVar4 = (int *)(*(int *)(iVar6 + 0x10) + uVar10);
          uVar10 = uVar10 + 4;
          *(undefined4 *)(*(int *)(*piVar4 * 4 + *(int *)(param_1 + 0x14)) + 0x14) =
               *(undefined4 *)(*(int *)(*(int *)piVar16[4] * 4 + *(int *)(param_1 + 0x14)) + 0x14);
        } while (uVar10 < 8);
        iVar20 = *(int *)(param_1 + 0xc);
        if (uVar24 < iVar20 - 1U) {
          iVar17 = (iVar20 + -1) - uVar24;
          iVar20 = (iVar20 + -1) * 4;
          do {
            puVar21 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar20);
            iVar20 = iVar20 + -4;
            *puVar21 = puVar21[-1];
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        *(int *)(*(int *)(param_1 + 0x18) + iVar12) = iVar6;
        *(int *)(*(int *)(param_1 + 0x18) + iVar12 + 4) = iVar7;
        fn_82BA02A8(piVar16);
        fn_829639F0(piVar16);
        uVar25 = uVar25 + 1;
        uStack_140 = (uint)uVar25;
        bVar5 = true;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      }
      uVar24 = uVar24 + 1;
      iVar12 = iVar12 + 4;
    } while (uVar24 < *(uint *)(param_1 + 0xc));
    if (bVar5) {
      fn_8296CF68(param_1);
    }
  }
  if ((*(uint *)(param_1 + 0x6c) & 0x40000000) != 0) {
    uVar24 = *(uint *)(param_1 + 0xc);
    uVar10 = 0;
    if (uVar24 != 0) {
      iVar12 = 0;
      do {
        puVar3 = *(uint **)(*(int *)(param_1 + 0x18) + iVar12);
        if ((((*puVar3 & 0xfff00000) != 0) && (puVar3[3] != 0)) &&
           ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)puVar3[4] * 4 + *(int *)(param_1 + 0x14))
                                        + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x20) != 0)) {
          uVar27 = puVar3[1];
          uVar29 = 0;
          if (uVar27 != 0) {
            iVar6 = 0;
            do {
              if (uVar29 != *(uint *)(*(int *)(*(int *)(puVar3[2] + iVar6) * 4 +
                                              *(int *)(param_1 + 0x14)) + 0x10)) break;
              uVar29 = uVar29 + 1;
              iVar6 = iVar6 + 4;
            } while (uVar29 < uVar27);
          }
          if (uVar29 != uVar27) {
            iVar6 = fn_829646C8(param_1,puVar3[3] & 0xfffff | 0x10000000,0xffffffffffffffff,
                                  0xffffffffffffffff);
            if (iVar6 == -1) goto LAB_82973d68;
            iVar6 = *(int *)(iVar6 * 4 + *(int *)(param_1 + 0x18));
            fn_829632F0(iVar6,puVar3);
            uVar18 = 0;
            iVar7 = *(int *)(*(int *)puVar3[4] * 4 + *(int *)(param_1 + 0x14));
            uVar8 = *(undefined4 *)(iVar7 + 0x18);
            uVar2 = *(undefined4 *)(iVar7 + 0x14);
            if (puVar3[3] != 0) {
              iVar7 = 0;
              do {
                *(undefined4 *)(*(int *)(iVar6 + 0x10) + iVar7) = *(undefined4 *)(iVar7 + puVar3[4])
                ;
                uVar9 = fn_82964628(uVar30,param_1,*(undefined4 *)(param_1 + 0x88),uVar25,uVar18);
                *(undefined4 *)(iVar7 + puVar3[4]) = uVar9;
                *(undefined4 *)(iVar7 + *(int *)(iVar6 + 8)) = uVar9;
                if (*(int *)(iVar7 + *(int *)(iVar6 + 8)) == -1) goto LAB_82973d68;
                uVar18 = uVar18 + 1;
                *(undefined4 *)
                 (*(int *)(*(int *)(iVar7 + *(int *)(iVar6 + 8)) * 4 + *(int *)(param_1 + 0x14)) +
                 0x18) = uVar8;
                *(undefined4 *)
                 (*(int *)(*(int *)(iVar7 + *(int *)(iVar6 + 8)) * 4 + *(int *)(param_1 + 0x14)) +
                 0x14) = uVar2;
                piVar16 = (int *)(iVar7 + *(int *)(iVar6 + 8));
                piVar4 = (int *)(*(int *)(iVar6 + 0x10) + iVar7);
                iVar7 = iVar7 + 4;
                **(undefined4 **)(*piVar16 * 4 + *(int *)(param_1 + 0x14)) =
                     **(undefined4 **)(*piVar4 * 4 + *(int *)(param_1 + 0x14));
              } while ((uVar18 & 0xffffffff) < (ulonglong)puVar3[3]);
            }
            uVar25 = uVar25 + 1;
            bVar5 = true;
            uStack_140 = (uint)uVar25;
          }
        }
        uVar10 = uVar10 + 1;
        iVar12 = iVar12 + 4;
      } while (uVar10 < uVar24);
    }
  }
  if (((*(int *)(param_1 + 0x4c) != 0) && ((*(uint *)(param_1 + 0x70) & 0x2000000) == 0)) &&
     (uVar24 = 0, *(int *)(param_1 + 0xc) != 0)) {
    do {
      puVar3 = *(uint **)(uVar24 * 4 + *(int *)(param_1 + 0x18));
      if ((*puVar3 & 0xf0000000) == 0x60000000) {
        lVar26 = 1;
        while (uVar25 = fn_82963318(puVar3,lVar26,&piStack_138), (uVar25 & 0xffffffff) != 0) {
          uVar18 = 0;
          if ((uVar25 & 0xffffffff) != 0) {
            piVar16 = piStack_138;
            do {
              if ((ulonglong)*(uint *)(*(int *)(*piVar16 * 4 + *(int *)(param_1 + 0x14)) + 0x10) !=
                  (uVar18 & 0xffffffff)) break;
              uVar18 = uVar18 + 1;
              piVar16 = piVar16 + 1;
            } while ((uVar18 & 0xffffffff) < (uVar25 & 0xffffffff));
          }
          if ((uVar18 & 0xffffffff) != (uVar25 & 0xffffffff)) {
            iVar12 = *(int *)(param_1 + 0xc);
            lVar15 = fn_82966AA8(param_1,uVar24,piStack_138,uVar25,&uStack_140);
            if (lVar15 < 0) goto LAB_82973d4c;
            if (*(int *)(param_1 + 0xc) != iVar12) {
              uVar24 = (*(int *)(param_1 + 0xc) - iVar12) + uVar24;
              fn_8296CF68(param_1);
            }
            bVar5 = true;
          }
          lVar26 = lVar26 + 1;
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < *(uint *)(param_1 + 0xc));
    uVar25 = (ulonglong)uStack_140;
  }
  if ((*(int *)(param_1 + 0x4c) != 0) && (uVar24 = 0, *(int *)(param_1 + 0xc) != 0)) {
    iVar12 = 0;
    do {
      puVar3 = *(uint **)(*(int *)(param_1 + 0x18) + iVar12);
      if ((*puVar3 & 0xfff00000) == 0x11000000) {
        if (puVar3[1] == 4) {
          iVar6 = *(int *)(param_1 + 0x14);
          if ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)puVar3[2] * 4 + iVar6) + 4) * 4 +
                                 *(int *)(param_1 + 0x10)) + 4) & 0x200) == 0) {
            uVar10 = 0;
            iVar7 = 0;
            lVar26 = 4;
            do {
              piVar16 = (int *)((int)puVar3[2] + iVar7);
              iVar7 = iVar7 + 4;
              uVar10 = 1 << (*(uint *)(*(int *)(*piVar16 * 4 + iVar6) + 0x10) & 0x3f) | uVar10;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            if (uVar10 == 0xf) {
              uVar10 = puVar3[2];
              iVar7 = 0;
              lVar26 = 4;
              do {
                piVar16 = (int *)(iVar7 + uVar10);
                iVar7 = iVar7 + 4;
                aiStack_130[*(int *)(*(int *)(*piVar16 * 4 + iVar6) + 0x10)] = *piVar16;
                lVar26 = lVar26 + -1;
              } while (lVar26 != 0);
              iVar6 = 0;
              lVar26 = 4;
              do {
                *(undefined4 *)(iVar6 + puVar3[2]) = *(undefined4 *)((int)aiStack_130 + iVar6);
                iVar6 = iVar6 + 4;
                lVar26 = lVar26 + -1;
              } while (lVar26 != 0);
              goto LAB_829727e0;
            }
          }
        }
        uVar10 = fn_829646C8(param_1,0x10000004,0xffffffffffffffff,0xffffffffffffffff);
        iVar6 = fn_829646C8(param_1,0x11000004,0xffffffffffffffff,0xffffffffffffffff);
        if ((uVar10 == 0xffffffff) || (iVar6 == -1)) goto LAB_82973d68;
        iVar20 = uVar10 * 4;
        iVar7 = *(int *)(*(int *)(param_1 + 0x18) + iVar20);
        iVar6 = *(int *)(iVar6 * 4 + *(int *)(param_1 + 0x18));
        fn_829632F0(iVar7,puVar3);
        fn_829632F0(iVar6,puVar3);
        uVar27 = 0;
        uVar29 = 0;
        do {
          uVar23 = uVar27;
          if (puVar3[1] <= uVar27) {
            uVar23 = puVar3[1] - 1;
          }
          iVar17 = uVar23 * 4;
          *(undefined4 *)(*(int *)(iVar7 + 8) + uVar29) = *(undefined4 *)(iVar17 + puVar3[2]);
          uVar11 = fn_82964628(uVar30,param_1,*(undefined4 *)(param_1 + 0x88),uVar25,uVar27);
          *(undefined4 *)(uVar29 + *(int *)(iVar7 + 0x10)) = uVar11;
          *(undefined4 *)
           (*(int *)(*(int *)(uVar29 + *(int *)(iVar7 + 0x10)) * 4 + *(int *)(param_1 + 0x14)) +
           0x14) = *(undefined4 *)
                    (*(int *)(*(int *)(puVar3[4] + iVar17) * 4 + *(int *)(param_1 + 0x14)) + 0x14);
          *(undefined4 *)
           (*(int *)(*(int *)(uVar29 + *(int *)(iVar7 + 0x10)) * 4 + *(int *)(param_1 + 0x14)) +
           0x18) = *(undefined4 *)
                    (*(int *)(*(int *)(puVar3[4] + iVar17) * 4 + *(int *)(param_1 + 0x14)) + 0x18);
          if (*(int *)(uVar29 + *(int *)(iVar7 + 0x10)) == -1) goto LAB_82973d68;
          *(undefined4 *)(*(int *)(iVar6 + 8) + uVar29) =
               *(undefined4 *)(uVar29 + *(int *)(iVar7 + 0x10));
          uVar11 = fn_82964628(uVar30,param_1,*(int *)(param_1 + 0xa8),
                                 *(undefined4 *)
                                  (*(int *)(*(int *)(param_1 + 0xa8) * 4 + *(int *)(param_1 + 0x10))
                                  + 8),uVar27);
          uVar27 = uVar27 + 1;
          *(undefined4 *)(uVar29 + *(int *)(iVar6 + 0x10)) = uVar11;
          *(undefined4 *)
           (*(int *)(*(int *)(uVar29 + *(int *)(iVar6 + 0x10)) * 4 + *(int *)(param_1 + 0x14)) +
           0x14) = *(undefined4 *)
                    (*(int *)(*(int *)(puVar3[4] + iVar17) * 4 + *(int *)(param_1 + 0x14)) + 0x14);
          piVar16 = (int *)(uVar29 + *(int *)(iVar6 + 0x10));
          uVar29 = uVar29 + 4;
          *(undefined4 *)(*(int *)(*piVar16 * 4 + *(int *)(param_1 + 0x14)) + 0x18) =
               *(undefined4 *)
                (*(int *)(*(int *)(puVar3[4] + iVar17) * 4 + *(int *)(param_1 + 0x14)) + 0x18);
        } while (uVar29 < 0x10);
        iVar17 = *(int *)(*(int *)(param_1 + 0xa8) * 4 + *(int *)(param_1 + 0x10));
        *(int *)(iVar17 + 8) = *(int *)(iVar17 + 8) + 1;
        if (uVar24 < uVar10) {
          iVar17 = uVar10 - uVar24;
          do {
            puVar21 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar20);
            iVar20 = iVar20 + -4;
            *puVar21 = puVar21[-1];
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        uVar24 = uVar24 + 1;
        *(int *)(*(int *)(param_1 + 0x18) + iVar12) = iVar7;
        iVar12 = iVar12 + 4;
        fn_82BA02A8(puVar3);
        fn_829639F0(puVar3);
        uVar25 = uVar25 + 1;
        bVar5 = true;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        *(int *)(*(int *)(param_1 + 0x18) + iVar12) = iVar6;
      }
LAB_829727e0:
      uVar24 = uVar24 + 1;
      iVar12 = iVar12 + 4;
    } while (uVar24 < *(uint *)(param_1 + 0xc));
  }
  if (((*(uint *)(param_1 + 0x6c) & 0x10000000) != 0) ||
     ((*(uint *)(param_1 + 0x6c) & 0x20000000) != 0)) {
    uVar18 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        lVar26 = (uVar18 & 0x3fffffff) << 2;
        puVar3 = *(uint **)(*(int *)(param_1 + 0x18) + (int)lVar26);
        if (((*puVar3 & 0xfff00000) == 0x10000000) &&
           (iVar12 = *(int *)(param_1 + 0x14),
           (*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)puVar3[4] * 4 + iVar12) + 4) * 4 +
                              *(int *)(param_1 + 0x10)) + 4) & 0x20) == 0)) {
          uVar24 = puVar3[3];
          uVar10 = 0;
          if (uVar24 != 0) {
            iVar6 = 0;
            do {
              if (*(int *)(*(int *)(*(int *)puVar3[2] * 4 + iVar12) + 0x48) !=
                  *(int *)(*(int *)(*(int *)(iVar6 + (int)puVar3[2]) * 4 + iVar12) + 0x48)) break;
              uVar10 = uVar10 + 1;
              iVar6 = iVar6 + 4;
            } while (uVar10 < uVar24);
          }
          if (uVar10 != uVar24) {
            uVar24 = puVar3[1];
            uVar28 = 0;
            uVar10 = 0;
            if (uVar24 != 0) {
              iVar12 = 0;
              do {
                iVar6 = *(int *)(iVar12 + puVar3[2]);
                if (iVar6 != -1) {
                  uVar13 = 0;
                  iVar6 = *(int *)(*(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14)) + 0x48);
                  iVar7 = iVar12;
                  for (uVar27 = uVar10; uVar27 < uVar24; uVar27 = uVar27 + 1) {
                    iVar20 = *(int *)(iVar7 + puVar3[2]);
                    if ((iVar20 != -1) &&
                       (iVar6 == *(int *)(*(int *)(iVar20 * 4 + *(int *)(param_1 + 0x14)) + 0x48)))
                    {
                      uVar13 = uVar13 + 1;
                    }
                    iVar7 = iVar7 + 4;
                  }
                  iVar7 = fn_829646C8(param_1,uVar13 & 0xffffffff000fffff | 0x10000000,
                                        0xffffffffffffffff,0xffffffffffffffff);
                  if (iVar7 == -1) goto LAB_82973d68;
                  iVar7 = *(int *)(iVar7 * 4 + *(int *)(param_1 + 0x18));
                  fn_829632F0(iVar7,puVar3);
                  uVar24 = puVar3[1];
                  uVar28 = uVar28 + 1;
                  if (uVar10 < uVar24) {
                    iVar17 = 0;
                    iVar20 = iVar12;
                    uVar27 = uVar10;
                    do {
                      if ((*(int *)(puVar3[2] + iVar20) != -1) &&
                         (iVar6 == *(int *)(*(int *)(*(int *)(puVar3[2] + iVar20) * 4 +
                                                    *(int *)(param_1 + 0x14)) + 0x48))) {
                        *(undefined4 *)(*(int *)(iVar7 + 8) + iVar17) =
                             *(undefined4 *)(puVar3[2] + iVar20);
                        *(undefined4 *)(*(int *)(iVar7 + 0x10) + iVar17) =
                             *(undefined4 *)(iVar20 + puVar3[4]);
                        iVar17 = iVar17 + 4;
                        *(undefined4 *)(puVar3[2] + iVar20) = 0xffffffff;
                      }
                      uVar24 = puVar3[1];
                      uVar27 = uVar27 + 1;
                      iVar20 = iVar20 + 4;
                    } while (uVar27 < uVar24);
                  }
                }
                uVar10 = uVar10 + 1;
                iVar12 = iVar12 + 4;
              } while (uVar10 < uVar24);
            }
            lVar15 = 0;
            if ((uVar28 & 0xffffffff) != 0) {
              uVar24 = *(uint *)(param_1 + 0xc);
              puVar21 = &uStack_134;
              iVar12 = *(int *)(param_1 + 0x18);
              uVar13 = uVar28;
              do {
                uVar14 = (uVar24 - uVar28) + lVar15;
                lVar15 = lVar15 + 1;
                puVar21 = puVar21 + 1;
                *puVar21 = *(undefined4 *)((int)((uVar14 & 0xffffffff) << 2) + iVar12);
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            uVar13 = (*(uint *)(param_1 + 0xc) - uVar28) - 1;
            if ((uVar18 & 0xffffffff) < (uVar13 & 0xffffffff)) {
              lVar15 = uVar13 - uVar18;
              lVar19 = (uVar13 & 0x3fffffff) << 2;
              lVar22 = (uVar28 + uVar13 & 0x3fffffff) << 2;
              do {
                iVar6 = (int)lVar22;
                lVar22 = lVar22 + -4;
                iVar12 = (int)lVar19;
                lVar19 = lVar19 + -4;
                *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar6 + -4) =
                     *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar12);
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
            }
            if ((uVar28 & 0xffffffff) != 0) {
              puVar21 = &uStack_134;
              uVar13 = uVar28;
              do {
                puVar21 = puVar21 + 1;
                *(undefined4 *)((int)lVar26 + *(int *)(param_1 + 0x18)) = *puVar21;
                lVar26 = lVar26 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            fn_82BA02A8(puVar3);
            fn_829639F0(puVar3);
            bVar5 = true;
            uVar18 = (uVar28 + uVar18) - 1;
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
          }
        }
        uVar18 = uVar18 + 1;
      } while ((uVar18 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xc));
    }
    uVar18 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        lVar26 = (uVar18 & 0x3fffffff) << 2;
        puVar3 = *(uint **)(*(int *)(param_1 + 0x18) + (int)lVar26);
        if ((*puVar3 & 0xfff00000) == 0x10000000) {
          iVar12 = *(int *)(param_1 + 0x14);
          if ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)puVar3[4] * 4 + iVar12) + 4) * 4 +
                                 *(int *)(param_1 + 0x10)) + 4) & 0x20) == 0) {
            uVar24 = puVar3[3];
            uVar28 = 0;
            iVar6 = 0;
            uVar10 = 0;
            if (uVar24 != 0) {
              piVar16 = (int *)puVar3[2];
              iVar20 = 0;
              iVar7 = (int)puVar3[4] - (int)piVar16;
              do {
                if (*(int *)(*(int *)(*(int *)(iVar7 + (int)piVar16) * 4 + iVar12) + 0x10) ==
                    *(int *)(*(int *)(*piVar16 * 4 + iVar12) + 0x10)) {
                  uVar28 = uVar28 + 1;
                }
                uVar27 = 0;
                if (uVar10 != 0) {
                  iVar17 = 0;
                  do {
                    if (*(int *)(*(int *)(*(int *)(iVar17 + puVar3[2]) * 4 + iVar12) + 0x10) ==
                        *(int *)(*(int *)(*(int *)(iVar20 + puVar3[2]) * 4 + iVar12) + 0x10)) {
                      iVar6 = iVar6 + 1;
                      break;
                    }
                    uVar27 = uVar27 + 1;
                    iVar17 = iVar17 + 4;
                  } while (uVar27 < uVar10);
                }
                uVar10 = uVar10 + 1;
                iVar20 = iVar20 + 4;
                piVar16 = piVar16 + 1;
              } while (uVar10 < uVar24);
            }
            if ((((uVar28 & 0xffffffff) != (ulonglong)uVar24) && (iVar6 + 1U != uVar24)) &&
               ((1 < (uVar28 & 0xffffffff) || (iVar6 != 0)))) {
              uVar13 = 0;
              if (1 < (uVar28 & 0xffffffff)) {
                iVar12 = fn_829646C8(param_1,uVar28 & 0xffffffff000fffff | 0x10000000,
                                       0xffffffffffffffff,0xffffffffffffffff);
                if (iVar12 == -1) goto LAB_82973d68;
                iVar12 = *(int *)(iVar12 * 4 + *(int *)(param_1 + 0x18));
                fn_829632F0(iVar12,puVar3);
                uVar13 = 1;
                uVar24 = 0;
                if (puVar3[3] != 0) {
                  iVar7 = 0;
                  iVar6 = 0;
                  do {
                    if (*(int *)(*(int *)(*(int *)(iVar7 + puVar3[4]) * 4 + *(int *)(param_1 + 0x14)
                                         ) + 0x10) ==
                        *(int *)(*(int *)(*(int *)(iVar7 + puVar3[2]) * 4 + *(int *)(param_1 + 0x14)
                                         ) + 0x10)) {
                      *(int *)(*(int *)(iVar12 + 0x10) + iVar6) = *(int *)(iVar7 + puVar3[4]);
                      *(undefined4 *)(*(int *)(iVar12 + 8) + iVar6) =
                           *(undefined4 *)(iVar7 + puVar3[2]);
                      iVar6 = iVar6 + 4;
                      *(undefined4 *)(iVar7 + puVar3[2]) = 0xffffffff;
                    }
                    uVar24 = uVar24 + 1;
                    iVar7 = iVar7 + 4;
                  } while (uVar24 < puVar3[3]);
                }
              }
              uVar24 = puVar3[1];
              uVar10 = 0;
              if (uVar24 != 0) {
                iVar12 = 0;
                do {
                  iVar6 = *(int *)(iVar12 + puVar3[2]);
                  if (iVar6 != -1) {
                    uVar28 = 0;
                    iVar6 = *(int *)(*(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14)) + 0x10);
                    iVar7 = iVar12;
                    for (uVar27 = uVar10; uVar27 < uVar24; uVar27 = uVar27 + 1) {
                      iVar20 = *(int *)(iVar7 + puVar3[2]);
                      if ((iVar20 != -1) &&
                         (iVar6 == *(int *)(*(int *)(iVar20 * 4 + *(int *)(param_1 + 0x14)) + 0x10))
                         ) {
                        uVar28 = uVar28 + 1;
                      }
                      iVar7 = iVar7 + 4;
                    }
                    iVar7 = fn_829646C8(param_1,uVar28 & 0xffffffff000fffff | 0x10000000,
                                          0xffffffffffffffff,0xffffffffffffffff);
                    if (iVar7 == -1) goto LAB_82973d68;
                    iVar7 = *(int *)(iVar7 * 4 + *(int *)(param_1 + 0x18));
                    fn_829632F0(iVar7,puVar3);
                    uVar24 = puVar3[1];
                    uVar13 = uVar13 + 1;
                    if (uVar10 < uVar24) {
                      iVar17 = 0;
                      iVar20 = iVar12;
                      uVar27 = uVar10;
                      do {
                        if ((*(int *)(iVar20 + puVar3[2]) != -1) &&
                           (iVar6 == *(int *)(*(int *)(*(int *)(iVar20 + puVar3[2]) * 4 +
                                                      *(int *)(param_1 + 0x14)) + 0x10))) {
                          *(undefined4 *)(*(int *)(iVar7 + 0x10) + iVar17) =
                               *(undefined4 *)(iVar20 + puVar3[4]);
                          *(undefined4 *)(*(int *)(iVar7 + 8) + iVar17) =
                               *(undefined4 *)(iVar20 + puVar3[2]);
                          iVar17 = iVar17 + 4;
                          *(undefined4 *)(iVar20 + puVar3[2]) = 0xffffffff;
                        }
                        uVar24 = puVar3[1];
                        uVar27 = uVar27 + 1;
                        iVar20 = iVar20 + 4;
                      } while (uVar27 < uVar24);
                    }
                  }
                  uVar10 = uVar10 + 1;
                  iVar12 = iVar12 + 4;
                } while (uVar10 < uVar24);
              }
              lVar15 = 0;
              if ((uVar13 & 0xffffffff) != 0) {
                uVar24 = *(uint *)(param_1 + 0xc);
                puVar21 = &uStack_134;
                iVar12 = *(int *)(param_1 + 0x18);
                uVar28 = uVar13;
                do {
                  uVar14 = lVar15 + (uVar24 - uVar13);
                  lVar15 = lVar15 + 1;
                  puVar21 = puVar21 + 1;
                  *puVar21 = *(undefined4 *)((int)((uVar14 & 0xffffffff) << 2) + iVar12);
                  uVar28 = uVar28 - 1;
                } while (uVar28 != 0);
              }
              uVar28 = (*(uint *)(param_1 + 0xc) - uVar13) - 1;
              if ((uVar18 & 0xffffffff) < (uVar28 & 0xffffffff)) {
                lVar15 = uVar28 - uVar18;
                lVar19 = (uVar28 & 0x3fffffff) << 2;
                lVar22 = (uVar28 + uVar13 & 0x3fffffff) << 2;
                do {
                  iVar6 = (int)lVar22;
                  lVar22 = lVar22 + -4;
                  iVar12 = (int)lVar19;
                  lVar19 = lVar19 + -4;
                  *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x18) + -4) =
                       *(undefined4 *)(iVar12 + *(int *)(param_1 + 0x18));
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
              }
              if ((uVar13 & 0xffffffff) != 0) {
                puVar21 = &uStack_134;
                uVar28 = uVar13;
                do {
                  puVar21 = puVar21 + 1;
                  *(undefined4 *)(*(int *)(param_1 + 0x18) + (int)lVar26) = *puVar21;
                  lVar26 = lVar26 + 4;
                  uVar28 = uVar28 - 1;
                } while (uVar28 != 0);
              }
              fn_82BA02A8(puVar3);
              fn_829639F0(puVar3);
              bVar5 = true;
              uVar18 = (uVar13 + uVar18) - 1;
              *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
            }
          }
        }
        uVar18 = uVar18 + 1;
      } while ((uVar18 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xc));
    }
  }
  if (bVar5) {
    fn_8296CF68(param_1);
  }
  lVar15 = (uVar25 & 0x3fffffff) << 2;
  lVar26 = fn_8265C940(lVar15,0x24810000);
  uStack_13c = (undefined4)lVar26;
  if (lVar26 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(lVar26,0,lVar15);
  }
LAB_82973d68:
  lVar15 = -0x7ff8fff2;
  uVar11 = uStack_13c;
LAB_82973d4c:
  fn_8265C990(uVar11,0x24810000);
  return lVar15;
}

