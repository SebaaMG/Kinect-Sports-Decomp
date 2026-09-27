extern unsigned int *puRam832155bc;
extern unsigned int *puRam832155c0;
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
#define TBLr 0
extern int fn_829CA188();
extern int memcpy();
extern int iRam832154b8;
extern int iRam832154bc;
extern int iRam832155ac;
extern unsigned int iStack0000001c;
extern unsigned int iStack_ac;
extern unsigned int iStack_c0;
extern unsigned int iStack_c4;
extern unsigned int iStack_d0;
extern unsigned int lbl_83214FF4;
extern unsigned int lbl_8321505C;
extern unsigned int lbl_832154A8;
extern unsigned int lbl_832154B0;
extern unsigned int uRam83215488;
extern unsigned int uRam8321548c;
extern unsigned int uRam83215490;
extern unsigned int uRam83215494;
extern unsigned int uRam8321549c;
extern unsigned int uRam832154a0;
extern unsigned int uRam832154a4;
extern unsigned int uRam832154b4;
extern unsigned int uRam832154e4;
extern unsigned int uRam83215518;
extern unsigned int uRam8321554c;
extern unsigned int uRam83215560;
extern unsigned int uRam83215568;
extern unsigned int uRam8321556c;
extern unsigned int uRam83215580;
extern unsigned int uRam83215594;
extern unsigned int uRam8321559c;
extern unsigned int uRam832155a0;
extern unsigned int uRam83217280;
extern unsigned int uRam83217294;
extern unsigned int uRam83217298;
extern unsigned int uRam832172ac;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c8;
extern unsigned int uStack_d8;
extern unsigned int uStack_e4;
extern unsigned int uStack_f0;


void fn_829CA268(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined4 *puVar20;
  ulonglong uVar19;
  uint uVar21;
  undefined4 *puVar22;
  uint *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint *puVar27;
  uint *puVar29;
  ulonglong uVar28;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar34;
  ulonglong uVar33;
  int iVar35;
  ulonglong uVar36;
  int iVar38;
  ulonglong uVar37;
  ulonglong uVar39;
  ulonglong uVar40;
  bool bVar41;
  bool bVar42;
  longlong lVar43;
  int iStack0000001c;
  uint uStack_f0;
  uint uStack_e4;
  uint uStack_d8;
  int iStack_d0;
  uint uStack_c8;
  int iStack_c4;
  int iStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  struct { uint first; int second; } stack_pair_b0;

  uint uStack_a8;

  iVar7 = iRam832154bc;
  iVar9 = iRam832154b8;
  uVar6 = lbl_832154B0;
  uStack_bc = 0;
  uVar32 = 0;
  uStack_b8 = 0;
  uStack_f0 = 0;
  uStack_b4 = 0;
  uStack_a8 = uRam832154b4;
  stack_pair_b0.first = 0;
  if ((lbl_832154A8 != 0) && (iRam832155ac == 0)) {
    uVar3 = TBLr;
    stack_pair_b0.second = (int)uVar3;
    iStack0000001c = param_2;
    memcpy(0xffffffff83215544,0xffffffff832154dc,0x34);
    puVar20 = (undefined4 *)0x83215574;
    puVar22 = (undefined4 *)0x8321550c;
    lVar43 = 0xd;
    do {
      puVar22 = puVar22 + 1;
      puVar20 = puVar20 + 1;
      *puVar20 = *puVar22;
      lVar43 = lVar43 + -1;
    } while (lVar43 != 0);
    iVar35 = -0x7cdeab24;
    puVar27 = &uStack_bc;
    puVar29 = &uStack_b8;
    puVar22 = (undefined4 *)0x83217280;
    uVar30 = 1;
    iStack_c4 = -0x7cdeab24;
    iStack_c0 = -0x7cde8d80;
    uStack_c8 = 0;
    puVar23 = (uint *)0x83215544;
    uStack_e4 = 1;
    uVar14 = uRam83215490;
    uVar18 = uRam83215488;
    uVar34 = uRam83215494;
    puVar1 = puRam832155bc;
    uVar21 = uRam8321548c;
    iStack_d0 = param_1;
    do {
      uVar24 = (ulonglong)uVar21;
      bVar41 = puVar23[9] != 0;
      if (((bVar41) && (iStack_d0 != 0)) && (puVar23[8] <= stack_pair_b0.second - puVar23[7])) {
        puVar23[9] = puVar23[9] - 1;
        lVar43 = (ulonglong)*(uint *)(iVar35 + 0x24) - 1;
        *(int *)(iVar35 + 0x24) = (int)lVar43;
        if (lVar43 == 0) {
          puVar23[8] = 0;
          *(undefined4 *)(iVar35 + 0x20) = 0;
          puVar23[10] = 0;
          uVar21 = *(uint *)(iVar35 + 8);
          *(undefined4 *)(iVar35 + 0x28) = 0;
          puVar22[5] = 0;
          *puVar22 = (int)(((ulonglong)uVar21 * 1000000) / 50000000);
        }
      }
      if ((puVar23[10] == 1) && (bVar41)) {
LAB_829cab20:
        if (iStack_d0 != 0) {
          puVar23[4] = *(uint *)(iStack_d0 + 0x58);
          *(undefined4 *)(iVar35 + 0x10) = *(undefined4 *)(iStack_d0 + 0x58);
          puVar23[5] = *(uint *)(iStack_d0 + 0x5c);
          *(undefined4 *)(iVar35 + 0x14) = *(undefined4 *)(iStack_d0 + 0x5c);
          puVar23[6] = *(uint *)(iStack_d0 + 0x60);
          *(undefined4 *)(iVar35 + 0x18) = *(undefined4 *)(iStack_d0 + 0x60);
          if (74999999 < *(int *)(iStack_d0 + 0x60) - puVar23[0xb]) {
            puVar23[0xb] = *(int *)(iStack_d0 + 0x60) + 0xfb879740;
            *(int *)(iVar35 + 0x2c) = *(int *)(iStack_d0 + 0x60) + -75000000;
          }
        }
      }
      else {
        if (puVar1 != (uint *)0x0) {
          uVar34 = *puVar1;
          *puVar23 = uVar34;
          uVar21 = puVar1[1];
          puVar23[2] = uVar18;
          puVar23[3] = uVar18;
          puVar23[10] = 3;
          puVar23[1] = uVar21;
          puVar23[8] = uVar34 * 5 + iVar7 + iVar9;
          if (iStack_d0 == 0) {
            uVar34 = puVar23[6];
          }
          else {
            uVar34 = *(uint *)(iStack_d0 + 0x60);
          }
          *puVar27 = uVar18;
          *puVar29 = 0;
          uVar32 = uVar30 | uVar32;
          puVar23[0xb] = uVar34 + 0xfb879740;
          puVar23[0xc] = 1;
          puVar22[1] = 0;
          puVar22[2] = 0;
          uStack_f0 = (uint)uVar32;
          puVar22[3] = 0;
          puVar22[4] = 0;
          goto LAB_829cab20;
        }
        if (iStack_d0 != 0) {
          uVar21 = *puVar23;
          uVar19 = (ulonglong)uVar21;
          if (uVar19 != 0) {
            uVar15 = (ulonglong)*(uint *)(iStack_d0 + 0x58) - (ulonglong)puVar23[4];
            uVar39 = (ulonglong)puVar23[1];
            lVar43 = (ulonglong)*(uint *)(iStack_d0 + 0x5c) - (ulonglong)*(uint *)(iStack_d0 + 0x60)
            ;
            if (uVar15 != 0) {
              trapWord(6,uVar15,0);
              uVar15 = ((ulonglong)*(uint *)(iStack_d0 + 0x5c) - (ulonglong)puVar23[5] & 0xffffffff)
                       / (uVar15 & 0xffffffff);
              if (799999 < uVar15) {
                uVar36 = uVar15 - uVar19;
                if (uVar15 < uVar19) {
                  uVar36 = uVar19 - uVar15;
                }
                iVar38 = (int)uVar36;
                uVar25 = uVar19 + (longlong)(int)((lVar43 + 0x196e69U & 0xffffffff) / 0x196e6a) *
                                  -0x196e6a + lVar43;
                uVar17 = uVar39 - uVar25;
                if (uVar39 < (uVar25 & 0xffffffff)) {
                  lVar43 = -uVar39;
                  uVar17 = uVar17 + uVar19;
                }
                else {
                  lVar43 = uVar19 - uVar39;
                }
                uVar26 = uVar25 + lVar43;
                uStack_d8 = (uint)uVar26;
                if ((uVar17 & 0xffffffff) <= (uVar26 & 0xffffffff)) {
                  uStack_d8 = (uint)uVar17;
                }
                iVar4 = (int)uVar15;
                if (((ulonglong)uVar6 & 0x7fffffff) << 1 < (uVar36 & 0xffffffff)) {
                  uVar18 = puVar23[2];
                  if (uVar19 < uVar15) {
                    uVar34 = (uint)uVar32;
                    if ((uVar36 + uVar24 & 0xffffffff) <= (ulonglong)uVar18) {
LAB_829ca580:
                      if (uVar19 < uVar15) {
                        iVar38 = -iVar38;
                      }
                      puVar23[2] = uVar18 + iVar38;
                      uStack_f0 = (uint)uVar30 | uVar34;
                      puVar23[10] = 1;
                      *puVar29 = 0;
                      puVar23[8] = uVar21 * 2 + iVar4 + iVar7 + iVar9;
                      puVar23[3] = puVar23[2];
                      *puVar27 = puVar23[2];
                    }
                  }
                  else {
                    uVar34 = uStack_f0;
                    if ((uVar18 + uVar36 & 0xffffffff) <= (ulonglong)uVar14) goto LAB_829ca580;
                  }
                }
                else {
                  trapWord(6,uVar19,0);
                  uVar30 = (ulonglong)puVar23[5] - (ulonglong)puVar23[6];
                  uVar2 = puVar23[0xb];
                  uVar30 = uVar30 - (longlong)(int)((uVar30 & 0xffffffff) / uVar19) *
                                    (longlong)(int)uVar21;
                  uVar31 = (longlong)(int)(puVar23[3] / 0x196e6a) * 0x196e6a + (ulonglong)uVar18;
                  uVar16 = uVar39 - uVar30;
                  uVar32 = uVar30 - uVar39;
                  if (uVar39 < (uVar30 & 0xffffffff)) {
                    uVar16 = uVar16 + uVar19;
                  }
                  else {
                    uVar32 = uVar32 + uVar19;
                  }
                  if ((uVar16 & 0xffffffff) <= (uVar32 & 0xffffffff)) {
                    uVar32 = uVar16;
                  }
                  uVar16 = uVar30 - uVar25;
                  if ((uVar30 & 0xffffffff) < (uVar25 & 0xffffffff)) {
                    lVar43 = -uVar30;
                    uVar16 = uVar16 + uVar19;
                  }
                  else {
                    lVar43 = uVar19 - uVar30;
                  }
                  if ((uVar25 + lVar43 & 0xffffffff) < (uVar16 & 0xffffffff)) {
                    uVar16 = uVar25 + lVar43;
                  }
                  if (((((ulonglong)uVar21 & 0x3fffffff) << 2) / 10 < (uVar16 & 0xffffffff)) &&
                     (uVar21 == 0x196e6a)) {
                    puVar23[0xb] = *(uint *)(iStack_d0 + 0x60);
                    *(undefined4 *)(iVar35 + 0x2c) = *(undefined4 *)(iStack_d0 + 0x60);
                  }
                  uVar16 = (uVar15 - puVar23[3]) + uVar31;
                  uVar28 = uVar16 - uVar19;
                  if ((uVar16 & 0xffffffff) < uVar19) {
                    uVar28 = uVar19 - uVar16;
                  }
                  uVar16 = (ulonglong)(uVar21 >> 1);
                  uVar33 = ((ulonglong)uVar6 & 0x7fffffff) * 2;
                  uVar12 = uVar16 + ((ulonglong)uVar6 & 0x7fffffff) * -2;
                  uVar10 = uVar33 + uVar16;
                  if (((ulonglong)uStack_d8 <= (uVar12 & 0xffffffff)) ||
                     (uVar8 = uVar16, (uVar10 & 0xffffffff) <= (ulonglong)uStack_d8)) {
                    uVar8 = 0;
                  }
                  if (((uVar32 & 0xffffffff) <= (uVar12 & 0xffffffff)) ||
                     ((uVar10 & 0xffffffff) <= (uVar32 & 0xffffffff))) {
                    uVar16 = 0;
                  }
                  uVar32 = (uVar8 + uVar39) -
                           (longlong)(int)((uVar8 + uVar39 & 0xffffffff) / (ulonglong)uVar21) *
                           (longlong)(int)uVar21;
                  trapWord(6,uVar19,0);
                  trapWord(6,uVar19,0);
                  uVar16 = (uVar16 + uVar39) -
                           (longlong)(int)((uVar16 + uVar39 & 0xffffffff) / (ulonglong)uVar21) *
                           (longlong)(int)uVar21;
                  uVar39 = uVar32 - uVar25;
                  if ((uVar32 & 0xffffffff) < (uVar25 & 0xffffffff)) {
                    lVar43 = -uVar32;
                    uVar10 = uVar39 + uVar19;
                  }
                  else {
                    lVar43 = uVar19 - uVar32;
                    uVar10 = uVar39;
                  }
                  uVar8 = uVar25 + lVar43;
                  uVar12 = uVar8;
                  if ((uVar10 & 0xffffffff) <= (uVar8 & 0xffffffff)) {
                    uVar12 = uVar10;
                  }
                  uVar37 = uVar30 - uVar16;
                  uVar40 = uVar16 - uVar30;
                  if ((uVar16 & 0xffffffff) < (uVar30 & 0xffffffff)) {
                    uVar11 = uVar40 + uVar19;
                    uVar13 = uVar37;
                  }
                  else {
                    uVar13 = uVar37 + uVar19;
                    uVar11 = uVar40;
                  }
                  if ((uVar11 & 0xffffffff) <= (uVar13 & 0xffffffff)) {
                    uVar13 = uVar11;
                  }
                  if ((uVar32 & 0xffffffff) < (uVar25 & 0xffffffff)) {
                    lVar43 = -uVar32;
                    uVar39 = uVar39 + uVar19;
                  }
                  else {
                    lVar43 = uVar19 - uVar32;
                  }
                  uVar32 = uVar25 + lVar43;
                  if ((uVar39 & 0xffffffff) < (uVar32 & 0xffffffff)) {
                    uVar32 = -uVar39;
                  }
                  if ((uVar16 & 0xffffffff) < (uVar30 & 0xffffffff)) {
                    uVar40 = uVar40 + uVar19;
                  }
                  else {
                    uVar37 = uVar37 + uVar19;
                  }
                  if ((uVar40 & 0xffffffff) < (uVar37 & 0xffffffff)) {
                    uVar37 = -uVar40;
                  }
                  bVar42 = (ulonglong)*(uint *)(iStack_d0 + 0x60) - (ulonglong)uVar2 < 75000000;
                  uVar18 = (uint)uVar31;
                  if ((uStack_d8 <= uVar6) || (bVar42)) {
                    bVar5 = false;
                    if (((uVar12 & 0xffffffff) <= (ulonglong)uVar6) ||
                       (uVar33 <= (uVar12 & 0xffffffff))) {
                      if (((uVar12 & 0xffffffff) <= (ulonglong)uStack_a8) || (bVar41)) {
                        if (((ulonglong)puVar23[2] != (uVar31 & 0xffffffff)) &&
                           ((((uVar28 & 0xffffffff) <= ((ulonglong)uVar6 & 0x7fffffff) &&
                             (((uVar37 ^ uVar32) & 0x80000000) != 0)) && (!bVar41)))) {
                          uStack_f0 = uStack_e4 | uStack_f0;
                          puVar23[2] = uVar18;
                          puVar23[10] = 3;
                          *puVar27 = uVar18;
                          *puVar29 = 0;
                          puVar23[8] = iVar4 + (int)(uVar15 << 1) + iVar7 + iVar9;
                        }
                      }
                      else if ((uVar13 & 0xffffffff) <= (uVar12 & 0xffffffff)) {
                        uVar18 = puVar23[2];
                        if ((uVar8 & 0xffffffff) < (uVar10 & 0xffffffff)) {
                          if ((uVar34 + uVar24 & 0xffffffff) <= (ulonglong)uVar18) {
LAB_829ca8f4:
                            puVar23[10] = 2;
                            uVar21 = iVar4 * 3 + iVar7 + iVar9;
                            puVar23[8] = uVar21;
                            if ((uVar8 & 0xffffffff) < (uVar10 & 0xffffffff)) {
                              puVar23[2] = uVar18 - uVar34;
                              puVar23[8] = uVar21 + uVar34 * -2;
                            }
                            else {
                              puVar23[2] = uVar18 + uVar34;
                              puVar23[8] = uVar34 * 2 + uVar21;
                            }
                            uVar18 = puVar23[2];
                            uStack_f0 = uStack_e4 | uStack_f0;
                            *puVar29 = 0;
                            *puVar27 = uVar18;
                          }
                        }
                        else if (((ulonglong)uVar18 + (ulonglong)uVar34 & 0xffffffff) <=
                                 (ulonglong)uVar14) goto LAB_829ca8f4;
                      }
                      goto LAB_829caa78;
                    }
                  }
                  else {
                    bVar5 = true;
                  }
                  if (((ulonglong)puVar23[0xb] != (ulonglong)*(uint *)(iStack_d0 + 0x60)) ||
                     (bVar41 = true, bVar42)) {
                    bVar41 = false;
                  }
                  uVar34 = puVar23[2];
                  if ((((ulonglong)uVar34 == (uVar31 & 0xffffffff)) || (bVar41)) ||
                     (((ulonglong)uVar6 & 0x7fffffff) < (uVar28 & 0xffffffff))) {
                    if (!bVar5) {
                      uVar17 = uVar10;
                      uVar26 = uVar8;
                    }
                    uVar18 = (uint)uVar17;
                    if ((uVar26 & 0xffffffff) < (uVar17 & 0xffffffff)) {
                      uVar18 = uVar21 - (int)uVar26;
                      if ((((uVar26 & 0xffffffff) >> 1) + uVar24 & 0xffffffff) <= (ulonglong)uVar34)
                      {
                        uVar18 = -(int)uVar26;
                      }
                    }
                    uVar34 = ((int)uVar18 >> 1) + (uint)((int)uVar18 < 0 && (uVar18 & 1) != 0) +
                             uVar34;
                    if (uVar34 <= uVar14) {
                      puVar23[10] = 1;
                      uStack_f0 = uStack_e4 | uStack_f0;
                      *puVar27 = uVar34;
                      *puVar29 = 2;
                      puVar23[8] = (int)(uVar15 << 2) + uVar18 + iVar7 + iVar9;
                    }
                  }
                  else {
                    uStack_f0 = uStack_e4 | uStack_f0;
                    puVar23[2] = uVar18;
                    puVar23[10] = 3;
                    *puVar27 = uVar18;
                    *puVar29 = 0;
                    puVar23[8] = iVar4 + (int)(uVar15 << 1) + iVar7 + iVar9;
                  }
                }
LAB_829caa78:
                uVar32 = (ulonglong)uStack_f0;
                uVar30 = (ulonglong)uStack_e4;
                *(int *)(iStack_c0 + 4) = (int)((uVar15 * 1000000) / 50000000);
                *(int *)(iStack_c0 + 8) = (int)(((uVar25 & 0xffffffff) * 1000000) / 50000000);
                *(int *)(iStack_c0 + 0xc) = (int)(((uVar36 & 0xffffffff) * 1000000) / 50000000);
                *(int *)(iStack_c0 + 0x10) = (int)(((ulonglong)uStack_d8 * 1000000) / 50000000);
                iVar35 = iStack_c4;
              }
            }
          }
          goto LAB_829cab20;
        }
      }
      uStack_c8 = uStack_c8 + 1;
      iVar35 = -0x7cdeaaf0;
      puVar27 = &uStack_b4;
      puVar29 = &stack_pair_b0.first;
      puVar22 = (undefined4 *)0x83217298;
      uStack_e4 = (uint)(uVar30 << 1) | (uint)(uVar30 >> 0x1f);
      uVar30 = uVar30 << 1 & 0xffffffff | uVar30 >> 0x1f;
      puVar23 = (uint *)0x83215578;
      iStack_c4 = -0x7cdeaaf0;
      iStack_d0 = iStack0000001c;
      iStack_c0 = -0x7cde8d68;
      uVar14 = uRam832154a4;
      uVar18 = uRam8321549c;
      uVar34 = lbl_832154A8;
      puVar1 = puRam832155c0;
      uVar21 = uRam832154a0;
    } while (uStack_c8 < 2);
    if ((uVar32 != 0) && (lbl_8321505C != 0)) {
      uVar3 = TBLr;
      uVar30 = (ulonglong)uStack_bc;
      if ((uVar32 & 1) != 0) {
        if (uStack_b8 == 0) {
          uRam8321554c = uStack_bc;
        }
        uRam83215568 = 2;
        uRam83215560 = (int)uVar3;
      }
      uVar24 = (ulonglong)uStack_b4;
      if ((uVar32 & 2) != 0) {
        if (stack_pair_b0.first == 0) {
          uRam83215580 = uStack_b4;
        }
        uRam8321559c = 2;
        uRam83215594 = (int)uVar3;
      }
      if (lbl_83214FF4 == 0) {
        iVar9 = fn_829CA188(uVar32 + 0xffff & 0xffff,uVar30,uStack_b8 & 0xffff,uVar24,
                              stack_pair_b0.first & 0xffff,0xffffffff83215488);
      }
      else {
        iVar9 = -0x3fffffde;
      }
      sync(0);
      if (iVar9 < 0) {
        uRam83217294 = 0;
        uRam832172ac = 0;
        uRam83217280 = (undefined4)(((ulonglong)uRam832154e4 * 1000000) / 50000000);
        uRam83217298 = (undefined4)(((ulonglong)uRam83215518 * 1000000) / 50000000);
      }
      else {
        if ((uVar32 & 1) == 0) {
          uVar30 = (ulonglong)uRam832154e4;
        }
        if ((uVar32 & 2) == 0) {
          uVar24 = (ulonglong)uRam83215518;
        }
        uRam83217294 = uRam8321556c;
        uRam832172ac = uRam832155a0;
        uRam83217280 = (undefined4)((uVar30 * 1000000) / 50000000);
        uRam83217298 = (undefined4)((uVar24 * 1000000) / 50000000);
      }
    }
  }
  return;
}
