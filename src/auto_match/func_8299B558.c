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
extern unsigned int *auStack_a0;
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_829644B8();
extern int fn_82964628();
extern int fn_82964868();
extern int fn_82969030();
extern int fn_82996970();
extern int fn_8299A410();
extern int fn_82BA02A8();
extern unsigned int lbl_82005710;


longlong fn_8299B558(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined8 uVar23;
  uint auStack_a0 [40];
  
  uVar15 = (ulonglong)*(uint *)(param_1 + 0xc);
  auStack_a0[0] = 0;
  auStack_a0[1] = 0;
  auStack_a0[2] = 0;
  auStack_a0[3] = 0;
  auStack_a0[4] = 0;
  auStack_a0[5] = 0;
  if (uVar15 != 0) {
    piVar19 = *(int **)(param_1 + 0x18);
    uVar17 = uVar15;
    do {
      puVar16 = (uint *)*piVar19;
      if ((puVar16 != (uint *)0x0) && (uVar1 = *puVar16, uVar1 != 0)) {
        uVar20 = puVar16[1];
        uVar21 = 0;
        if (uVar20 != 0) {
          uVar10 = (ulonglong)puVar16[2];
          lVar11 = 0;
          uVar9 = (ulonglong)*(uint *)(param_1 + 0x14);
          uVar8 = (ulonglong)*(uint *)(param_1 + 0x80);
          do {
            iVar5 = *(int *)(*(int *)((int)uVar10 + (int)lVar11) * 4 + (int)uVar9);
            if ((ulonglong)*(uint *)(iVar5 + 4) == (uVar8 & 0xffffffff)) {
              uVar13 = (ulonglong)*(byte *)(iVar5 + 0x6e);
              if (5 < uVar13) break;
              if (*(char *)(iVar5 + 0x6f) == '\x03') {
                uVar12 = (ulonglong)uVar1 & 0xfff00000;
                iVar4 = fn_82996970(uVar12);
                if ((iVar4 == 0) && ((uVar12 & 0xffffffff) != 0x11000000)) {
                  iVar4 = (int)((uVar13 & 0xffffffff) << 2);
                  uVar14 = *(int *)(iVar5 + 0x10) + 1;
                  if (*(uint *)((int)auStack_a0 + iVar4) < uVar14) {
                    *(uint *)((int)auStack_a0 + iVar4) = uVar14;
                  }
                }
                else {
                  iVar4 = (int)((uVar13 & 0xffffffff) << 2);
                  uVar14 = *(int *)(iVar5 + 0x10) + 1;
                  if ((*(uint *)((int)auStack_a0 + iVar4) < uVar14) && (*(int *)(iVar5 + 0x3c) != 0)
                     ) {
                    *(uint *)((int)auStack_a0 + iVar4) = uVar14;
                  }
                }
              }
            }
            uVar21 = uVar21 + 1;
            lVar11 = lVar11 + 4;
          } while (uVar21 < uVar20);
        }
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 1;
    } while (uVar17 != 0);
  }
  uVar17 = 0;
  puVar16 = auStack_a0;
  uVar23 = lbl_82005710;
  do {
    uVar1 = *puVar16;
    if (uVar1 != 0) {
      iVar5 = fn_82963998(0x74);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = fn_829632A0();
      }
      if (iVar5 == 0) {
        return -0x7ff8fff2;
      }
      lVar11 = fn_82963A30(iVar5,uVar1 & 0xfffff | 0x72100000,uVar1,uVar1,0);
      if (lVar11 < 0) {
        return lVar11;
      }
      uVar8 = 0;
      if (uVar1 != 0) {
        iVar4 = 0;
        do {
          uVar6 = fn_82964628(uVar23,param_1,*(undefined4 *)(param_1 + 0x88),0,uVar8);
          *(undefined4 *)(*(int *)(iVar5 + 0x10) + iVar4) = uVar6;
          if (*(int *)(*(int *)(iVar5 + 0x10) + iVar4) == -1) {
            fn_82BA02A8(iVar5);
            fn_829639F0(iVar5);
            return -0x7ff8fff2;
          }
          uVar8 = uVar8 + 1;
          iVar4 = iVar4 + 4;
        } while ((uVar8 & 0xffffffff) < (ulonglong)*puVar16);
      }
      lVar11 = fn_8299A410(param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0xc),
                             3,uVar17,uVar1,*(undefined4 *)(iVar5 + 0x10));
      if (lVar11 < 0) {
        fn_82BA02A8(iVar5);
        fn_829639F0(iVar5);
        return lVar11;
      }
      uVar8 = 0;
      if (uVar1 != 0) {
        iVar4 = 0;
        do {
          iVar7 = fn_82964628(uVar23,param_1,*(undefined4 *)(param_1 + 0x80),uVar17,uVar8);
          if (iVar7 == -1) {
            fn_82BA02A8(iVar5);
            fn_829639F0(iVar5);
            return -0x7ff8fff2;
          }
          uVar1 = *puVar16;
          uVar8 = uVar8 + 1;
          iVar22 = *(int *)(iVar7 * 4 + *(int *)(param_1 + 0x14));
          *(uint *)(iVar22 + 0x6c) = (uint)((uVar17 & 0xffffffff) << 8) | 3;
          *(undefined4 *)(iVar22 + 0x3c) = 0;
          *(int *)(*(int *)(iVar5 + 8) + iVar4) = iVar7;
          iVar4 = iVar4 + 4;
        } while ((uVar8 & 0xffffffff) < (ulonglong)uVar1);
      }
      lVar11 = fn_829644B8(param_1,iVar5);
      if (lVar11 < 0) {
        return lVar11;
      }
    }
    uVar17 = uVar17 + 1;
    puVar16 = puVar16 + 1;
  } while ((uVar17 & 0xffffffff) < 6);
  uVar17 = 0;
  if (uVar15 != 0) {
    iVar5 = 0;
    do {
      puVar16 = *(uint **)(iVar5 + *(int *)(param_1 + 0x18));
      uVar1 = *puVar16;
      uVar8 = (ulonglong)uVar1 & 0xfff00000;
      uVar20 = uVar1 & 0xfffff;
      iVar4 = fn_82996970(uVar8);
      if ((iVar4 != 0) || ((uVar8 & 0xffffffff) == 0x11000000)) {
        if ((uVar8 & 0xffffffff) == 0x11000000) {
          iVar4 = *(int *)(*(int *)puVar16[2] * 4 + *(int *)(param_1 + 0x14));
        }
        else {
          iVar4 = *(int *)(((int *)puVar16[2])[uVar20] * 4 + *(int *)(param_1 + 0x14));
        }
        if (((*(uint *)(iVar4 + 0x3c) & 0x1f0000) != 0) &&
           (*(int *)(iVar4 + 4) == *(int *)(param_1 + 0x88))) {
          iVar4 = fn_82963998(0x74);
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = fn_829632A0();
          }
          if (iVar4 == 0) {
            return -0x7ff8fff2;
          }
          lVar11 = fn_82963A30(iVar4,uVar20 | 0x10000000,uVar20,uVar20,0);
          if (lVar11 < 0) {
            return lVar11;
          }
          if ((uVar1 & 0xfffff) != 0) {
            iVar22 = 0;
            iVar7 = (-(uint)((*puVar16 & 0xfff00000) != 0x11000000) & *puVar16 & 0xfffff) << 2;
            do {
              iVar2 = *(int *)(*(int *)(iVar7 + puVar16[2]) * 4 + *(int *)(param_1 + 0x14));
              *(int *)(iVar22 + *(int *)(iVar4 + 8)) = *(int *)(iVar7 + puVar16[2]);
              uVar6 = fn_82964628(uVar23,param_1,*(undefined4 *)(param_1 + 0x88),0,
                                        *(undefined4 *)(iVar2 + 0x10));
              uVar20 = uVar20 - 1;
              *(undefined4 *)(iVar22 + *(int *)(iVar4 + 0x10)) = uVar6;
              iVar22 = iVar22 + 4;
              *(undefined4 *)(iVar7 + puVar16[2]) = uVar6;
              iVar7 = iVar7 + 4;
            } while (uVar20 != 0);
          }
          lVar11 = fn_829644B8(param_1,iVar4);
          if (lVar11 < 0) {
            return lVar11;
          }
        }
      }
      uVar17 = uVar17 + 1;
      iVar5 = iVar5 + 4;
    } while ((uVar17 & 0xffffffff) < uVar15);
  }
  uVar17 = 0;
  if (uVar15 != 0) {
    iVar5 = 0;
    do {
      lVar11 = fn_82964868(param_1,*(undefined4 *)(iVar5 + *(int *)(param_1 + 0x18)));
      if (lVar11 < 0) {
        return lVar11;
      }
      uVar17 = uVar17 + 1;
      puVar3 = (undefined4 *)(iVar5 + *(int *)(param_1 + 0x18));
      iVar5 = iVar5 + 4;
      *(undefined4 *)*puVar3 = 0;
    } while ((uVar17 & 0xffffffff) < uVar15);
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar20 = 0;
  if (uVar1 != 0) {
    iVar5 = 0;
    do {
      puVar16 = *(uint **)(iVar5 + *(int *)(param_1 + 0x18));
      uVar21 = *puVar16;
      if (uVar21 != 0) {
        uVar15 = (ulonglong)uVar21 & 0xfff00000;
        uVar14 = uVar21 & 0xfffff;
        iVar4 = fn_82996970(uVar15);
        if ((iVar4 != 0) || ((uVar15 & 0xffffffff) == 0x11000000)) {
          iVar7 = (-(uint)(uVar15 != 0x11000000) & uVar14) * 4;
          iVar4 = *(int *)(*(int *)(iVar7 + puVar16[2]) * 4 + *(int *)(param_1 + 0x14));
          uVar18 = *(uint *)(*(int *)(*(int *)(iVar4 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4);
          if (((uVar18 & 0x200) != 0) ||
             (((uVar18 & 0x10) != 0 && (*(char *)(iVar4 + 0x6f) == '\x01')))) {
            iVar4 = fn_82963998(0x74);
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = fn_829632A0();
            }
            if (iVar4 == 0) {
              return -0x7ff8fff2;
            }
            lVar11 = fn_82963A30(iVar4,uVar14 | 0x10000000,uVar14,uVar14,0);
            if (lVar11 < 0) {
              return lVar11;
            }
            lVar11 = fn_829632F0(iVar4,puVar16);
            if (lVar11 < 0) {
              return lVar11;
            }
            uVar18 = 0;
            if ((uVar21 & 0xfffff) != 0) {
              uVar21 = puVar16[2];
              iVar22 = 0;
              do {
                *(undefined4 *)(iVar22 + *(int *)(iVar4 + 8)) = *(undefined4 *)(iVar7 + uVar21);
                uVar6 = fn_82964628(uVar23,param_1,*(undefined4 *)(param_1 + 0x88),0,uVar18);
                *(undefined4 *)(*(int *)(iVar4 + 0x10) + iVar22) = uVar6;
                *(undefined4 *)(puVar16[2] + iVar7) = uVar6;
                uVar21 = puVar16[2];
                if (*(int *)(iVar7 + uVar21) == -1) {
                  return -0x7ff8fff2;
                }
                uVar18 = uVar18 + 1;
                iVar22 = iVar22 + 4;
                iVar7 = iVar7 + 4;
              } while (uVar18 < uVar14);
            }
            fn_829644B8(param_1,iVar4);
          }
        }
        fn_82964868(param_1,puVar16);
        *puVar16 = 0;
      }
      uVar20 = uVar20 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar20 < uVar1);
  }
  lVar11 = fn_82969030(param_1);
  return lVar11;
}

