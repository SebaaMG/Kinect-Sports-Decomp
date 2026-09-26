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
extern int fn_82B7BD28();
extern int fn_82B7BEB0();
extern int fn_82BA02A8();
extern int fn_82BA0450();
extern int fn_82BA05E8();
extern int fn_82BA0968();
extern int fn_82BA0FD8();
extern int fn_82BABD38();
extern int fn_82BB1C18();
extern int fn_82BB1D38();
extern int fn_82BB1EB0();
extern int fn_82BBFE28();
extern int fn_82BC24F0();
extern int fn_82BC5628();
extern int fn_82BCFB88();
extern int fn_82BCFCE0();
extern int fn_82BD0730();
extern int fn_82BD0910();
extern int fn_82BD0C10();
extern int fn_82BD0D30();
extern int fn_82BD0DB8();
extern int fn_82BD0F28();
extern int fn_82BD1078();
extern int fn_82BD10E8();
extern int fn_82BD1358();
extern int fn_82BD19F8();
extern unsigned int iStack_b0;
extern unsigned int lbl_820E7F9C;
extern unsigned int lbl_83223EC0;
extern unsigned int uStack_ac;


void fn_82BB2520(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar10;
  char cVar11;
  byte bVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  ulonglong uVar16;
  byte bVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int *piVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  int *piVar26;
  int iStack_b0;
  uint uStack_ac;
  
  iVar5 = fn_82BB1D38();
  lVar18 = (ulonglong)*(uint *)(iVar5 + 0x820) + 1;
  lbl_83223EC0 = 0;
  lVar13 = (ulonglong)*(uint *)(*(int *)(iVar5 + 0xc) + 0x5f4) + 1;
  lVar23 = lVar18 + lVar13;
  if (((*(uint *)(*(int *)(iVar5 + 0xc) + 0x858) >> 0xb & 1) == 0) || ((int)lVar13 != 0)) {
    for (iVar5 = *(int *)(param_1 + 0x88); *(int *)(iVar5 + 8) != 0; iVar5 = *(int *)(iVar5 + 8)) {
      for (iVar9 = *(int *)(iVar5 + 0x1c); *(int *)(iVar9 + 8) != 0; iVar9 = *(int *)(iVar9 + 8)) {
        uVar14 = *(uint *)(iVar9 + 0xe4);
        if (((uVar14 & 1) != 0) && ((uVar14 >> 6 & 1) == 0)) {
          if ((*(int *)(iVar9 + 0x10) == 0) ||
             (((uVar14 >> 1 & 1) != 0 ||
              (bVar15 = true, (&lbl_820E7F9C)[*(int *)(iVar9 + 0x50) * 0xc] == '\0')))) {
            bVar15 = false;
          }
          if (bVar15) {
            *(undefined4 *)(iVar9 + 0x50) = 0;
            *(uint *)(iVar9 + 0xe4) = uVar14 | 0x80;
            *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + (int)lVar18;
          }
        }
      }
    }
    fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820dfda0,lVar18,lVar13,lVar23);
    fn_82BCFCE0(param_1,lVar23);
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
    puVar6 = (undefined4 *)fn_82B7BD28(uVar7,0x18);
    *puVar6 = uVar7;
    if (puVar6 + 1 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = fn_82BD0C10(puVar6 + 1,lVar18,lVar23,*(undefined4 *)(param_1 + 0xc));
    }
    *(undefined4 *)(param_1 + 0x810) = uVar7;
    iVar5 = 0;
    iStack_b0 = 0;
    bVar17 = 0;
    lVar19 = 0;
    lVar13 = 0;
    lVar20 = 0;
    piVar8 = (int *)fn_82BA0968(param_1);
    do {
      uVar25 = 0;
      uStack_ac = 0;
      *(int *)(*(int *)(param_1 + 0xc) + 0x5d4) = *(int *)(*(int *)(param_1 + 0xc) + 0x5d4) + 1;
      if (0 < (int)lVar19) {
        fn_82BD1078(*(undefined4 *)(param_1 + 0x810));
        fn_82BD0910(*(undefined4 *)(param_1 + 0x810));
      }
      fn_82BB1EB0(param_1,*(undefined4 *)(param_1 + 0x810),lVar18,lVar23,bVar17);
      bVar17 = 0;
      iVar21 = 0;
      iVar9 = fn_82BBFE28(param_1 + 0x80);
      piVar22 = piVar8;
      if (0 < iVar9) {
        do {
          iVar9 = *piVar22;
          uVar16 = 1;
          for (piVar1 = *(int **)(iVar9 + 0x1c); piVar1[2] != 0; piVar1 = (int *)piVar1[2]) {
            if (uVar16 != 0) {
              uVar16 = 0;
              lVar24 = lVar23;
              piVar26 = piVar1;
              do {
                lVar23 = lVar24;
                if (uVar16 != 0) break;
                if (((piVar26[0x39] & 1U) != 0) &&
                   (iVar5 = (**(code **)(*piVar26 + 0x2c))(piVar26), iVar5 == 0)) {
                  if (((uint)piVar26[0x39] >> 9 & 1) == 0) {
                    cVar11 = fn_82BABD38(piVar26);
                    if ((cVar11 != '\0') && (((uint)piVar26[0x39] >> 0xb & 1) == 0)) {
                      uVar3 = fn_82BD0730(*(undefined4 *)(param_1 + 0x810),piVar26[0xe],bVar17
                                               );
                      iVar5 = piVar26[0x3b];
                      if ((*(int *)(iVar5 + 0x10) == 0) ||
                         (((*(uint *)(iVar5 + 0xe4) >> 1 & 1) != 0 ||
                          (bVar15 = true, (&lbl_820E7F9C)[*(int *)(iVar5 + 0x50) * 0xc] == '\0'))))
                      {
                        bVar15 = false;
                      }
                      if (bVar15) {
                        uVar4 = fn_82BD0730(*(undefined4 *)(param_1 + 0x810),
                                                  *(undefined4 *)(iVar5 + 0x38),bVar17);
                        bVar12 = 0;
                        if (0 < *(int *)(*(int *)(param_1 + 0xc) + 0xa98)) {
                          bVar12 = fn_82BD10E8(*(undefined4 *)(param_1 + 0x810),uVar3,uVar4);
                        }
                        bVar17 = bVar17 | bVar12;
                        if (bVar12 == 0) {
                          if ((int)lVar18 <= (int)uVar3) {
                            fn_82BD0D30(*(undefined4 *)(param_1 + 0x810),uVar3,uVar4);
                          }
                        }
                        else {
                          iStack_b0 = iStack_b0 + 1;
                          (**(code **)(*piVar26 + 0x60))(piVar26);
                        }
                      }
                    }
                  }
                  else {
                    uVar3 = fn_82BD0730(*(undefined4 *)(param_1 + 0x810),piVar26[0xe],bVar17);
                    iVar5 = fn_82BA0450(piVar26);
                    uVar4 = fn_82BD0730(*(undefined4 *)(param_1 + 0x810),
                                              *(undefined4 *)(iVar5 + 0x38),bVar17);
                    if ((int)uVar4 != (int)uVar3) {
                      if ((((uint)piVar26[0x39] >> 6 & 1) == 0) ||
                         ((*(uint *)(iVar5 + 0xe4) >> 6 & 1) == 0)) {
                        bVar12 = fn_82BD10E8(*(undefined4 *)(param_1 + 0x810),uVar3,uVar4);
                        bVar17 = bVar17 | bVar12;
                        if (bVar12 == 0) {
                          uStack_ac = (int)uVar25 + 1;
                        }
                        else {
                          lVar13 = lVar13 + 1;
                        }
                      }
                      else {
                        iVar10 = fn_82BC24F0(0x31,*(undefined4 *)(param_1 + 0xc));
                        *(int *)(iVar10 + 0x38) = (int)lVar24;
                        *(undefined4 *)(iVar10 + 0x50) = 0;
                        fn_82BA05E8(iVar10,1,iVar5);
                        *(uint *)(iVar10 + 0xe4) = *(uint *)(iVar10 + 0xe4) | 0x880;
                        fn_82BC5628(iVar9,piVar1,iVar10);
                        lVar20 = lVar20 + 1;
                        iVar5 = piVar26[5];
                        if (((uint)piVar26[0x39] >> 9 & 1) == 0) {
                          piVar26[5] = iVar5 + 1;
                          piVar26[iVar5 + 0x3b] = iVar10;
                          piVar26[0x39] = piVar26[0x39] | 0x200;
                        }
                        else {
                          piVar26[iVar5 + 0x3a] = iVar10;
                        }
                        lVar23 = lVar24 + 1;
                        fn_82BD0DB8(*(undefined4 *)(param_1 + 0x810));
                        for (iVar5 = *(int *)(param_1 + 0x88); *(int *)(iVar5 + 8) != 0;
                            iVar5 = *(int *)(iVar5 + 8)) {
                          cVar11 = fn_82BB1C18(*(undefined4 *)(iVar5 + 0x68),1);
                          if (cVar11 == '\0') {
                            puVar2 = *(uint **)(iVar5 + 0x68);
                            iVar10 = fn_82BA0FD8(lVar23,*(undefined4 *)
                                                               (*(int *)(param_1 + 0xc) + 0x5b0));
                            *(int *)(iVar5 + 0x68) = iVar10;
                            uVar14 = 0;
                            if (*puVar2 != 0) {
                              puVar6 = (undefined4 *)(iVar10 + 8);
                              do {
                                uVar14 = uVar14 + 1;
                                *puVar6 = *(undefined4 *)((int)puVar2 + ((int)puVar6 - iVar10));
                                puVar6 = puVar6 + 1;
                              } while (uVar14 < *puVar2);
                            }
                          }
                        }
                        uVar25 = 0;
                        if (0 < (int)lVar23) {
                          do {
                            if ((*(uint *)(((int)((uVar25 & 0xffffffff) >> 5) + 2) * 4 +
                                          *(int *)(iVar9 + 0x68)) >> ((uint)uVar25 & 0x1f) & 1) != 0
                               ) {
                              uVar3 = fn_82BD0730(*(undefined4 *)(param_1 + 0x810),uVar25,1);
                              fn_82BD0F28(*(undefined4 *)(param_1 + 0x810),lVar24,uVar3);
                            }
                            uVar25 = uVar25 + 1;
                          } while ((int)uVar25 < (int)lVar23);
                        }
                      }
                    }
                  }
                }
                puVar2 = (uint *)(piVar26 + 0x39);
                piVar26 = (int *)piVar26[2];
                uVar25 = (ulonglong)uStack_ac;
                uVar16 = (~(ulonglong)*puVar2 & 0xffffffff) >> 2 & 1;
                lVar24 = lVar23;
                iVar5 = iStack_b0;
              } while (piVar26 != (int *)0x0);
            }
            uVar16 = (~(ulonglong)(uint)piVar1[0x39] & 0xffffffff) >> 2 & 1;
          }
          iVar21 = iVar21 + 1;
          iVar9 = fn_82BBFE28(param_1 + 0x80);
          piVar22 = piVar22 + 1;
        } while (iVar21 < iVar9);
      }
      lVar19 = lVar19 + 1;
    } while ((bVar17 != 0) && ((int)lVar19 < *(int *)(*(int *)(param_1 + 0xc) + 0xa98)));
    if ((0 < (int)lVar13) || ((0 < iVar5 || ((int)lVar20 != 0)))) {
      lVar18 = 0;
      if (0 < (int)lVar23) {
        do {
          fn_82BD0730(*(undefined4 *)(param_1 + 0x810),lVar18,1);
          lVar18 = lVar18 + 1;
        } while ((int)lVar18 < (int)lVar23);
      }
      if ((int)lVar20 != 0) {
        fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820dfd50,lVar20);
      }
    }
    if (((int)lVar13 != 0) || ((int)uVar25 != 0)) {
      fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820dfd10,lVar13,uVar25 + lVar13);
    }
    if (0 < iVar5) {
      fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820dfcd4,iVar5,lVar19);
    }
    fn_82BCFB88(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xab0));
    fn_82BD1358(*(undefined4 *)(param_1 + 0x810));
    fn_82BB1D38(param_1);
    fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820dfca0,
                 (ulonglong)*(uint *)(param_1 + 0x820) + 1);
    iVar5 = *(int *)(param_1 + 0x810);
    if (iVar5 != 0) {
      fn_82BD19F8(iVar5);
      fn_82B7BEB0(*(undefined4 *)(iVar5 + -4),iVar5 + -4);
    }
  }
  else {
    lbl_83223EC0 = 0;
    fn_82BA02A8(*(undefined4 *)(iVar5 + 0xc),0xffffffff820dfdf0);
  }
  return;
}

