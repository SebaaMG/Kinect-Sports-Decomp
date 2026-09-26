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
extern unsigned int fStack_e0;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_82230040();
extern int fn_82536690();
extern int fn_825510B0();
extern int fn_82551260();
extern int fn_82551480();
extern int fn_82554260();
extern int fn_82554860();
extern int fn_8262F8D8();
extern int fn_8262FEC8();
extern int fn_82630040();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_827F04B0();
extern int fn_827F3EB0();
extern int fn_827F6328();
extern int fn_82F622A8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_10c;
extern unsigned int iStack_120;
extern unsigned int iStack_12c;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_82192754;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_100;
extern unsigned int uStack_124;
extern unsigned int uStack_130;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_f4;


void fn_8254CEB8(void)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar5;
  int *piVar6;
  char cVar9;
  int iVar7;
  ulonglong uVar4;
  int iVar8;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar16;
  undefined4 *puVar17;
  longlong lVar15;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int *piVar24;
  byte in_xer_so;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 uStack_130;
  int iStack_12c;
  undefined **ppuStack_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 *puStack_11c;
  undefined4 *puStack_118;
  int iStack_10c;
  undefined4 uStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  
  iVar5 = fn_82F6A548();
  piVar19 = (int *)(iVar5 + 0x28);
  fn_825510B0(*(int *)(iVar5 + 0x28),*(int *)(iVar5 + 0x2c),
                    (*(int *)(iVar5 + 0x2c) - *(int *)(iVar5 + 0x28)) / 0x18,uStack_130);
  piVar20 = (int *)(iVar5 + 0x18);
  fn_82551260(*(int *)(iVar5 + 0x18),*(int *)(iVar5 + 0x1c),
                    *(int *)(iVar5 + 0x1c) - *(int *)(iVar5 + 0x18) >> 3,uStack_130);
  if (*(int *)(iVar5 + 0x28) != *(int *)(iVar5 + 0x2c)) {
    iVar8 = 0;
    uVar23 = 0;
    iVar10 = 0;
    iVar16 = 9;
    uVar21 = 0;
    iVar7 = 0;
    uVar11 = 0;
    if ((*(int *)(iVar5 + 0x2c) - *(int *)(iVar5 + 0x28)) / 0x18 != 0) {
      iVar22 = 0;
      iVar10 = 0;
      do {
        iVar12 = *piVar19 + iVar22;
        iVar13 = iVar8 * 0x54 + *(int *)(iVar5 + 0xb4);
        if (iVar8 != *(int *)(iVar12 + 0x10)) {
          *(uint *)(iVar13 + 4) = uVar23;
          *(int *)(iVar13 + 8) = iVar10;
          iVar10 = 0;
          iVar8 = *(int *)(iVar12 + 0x10);
          iVar16 = 9;
          uVar23 = uVar11;
        }
        if (iVar16 != *(int *)(iVar12 + 0x14)) {
          *(uint *)((iVar16 + 3) * 4 + iVar13) = uVar21;
          *(int *)((iVar16 + 0xb) * 4 + iVar13) = iVar7;
          iVar7 = 0;
          iVar16 = *(int *)(iVar12 + 0x14);
          uVar21 = uVar11;
        }
        uVar11 = uVar11 + 1;
        iVar10 = iVar10 + 1;
        iVar7 = iVar7 + 1;
        iVar22 = iVar22 + 0x18;
      } while ((bool)((byte)((uVar11 < (uint)((*(int *)(iVar5 + 0x2c) - *piVar19) / 0x18)) << 3 |
                            in_xer_so) >> 3));
    }
    iVar8 = *(int *)(*(int *)(iVar5 + 0x2c) + -8) * 0x54 + *(int *)(iVar5 + 0xb4);
    *(uint *)(iVar8 + 4) = uVar23;
    *(int *)(iVar8 + 8) = iVar10;
    if ((bool)((byte)((iVar16 < 8) << 3 | in_xer_so) >> 3)) {
      *(uint *)((iVar16 + 3) * 4 + iVar8) = uVar21;
      *(int *)((iVar16 + 0xb) * 4 + iVar8) = iVar7;
    }
  }
  if (*piVar20 != *(int *)(iVar5 + 0x1c)) {
    iVar8 = 0;
    uVar23 = 0;
    iVar16 = 0;
    uVar21 = 0;
    if (*(int *)(iVar5 + 0x1c) - *piVar20 >> 3 != 0) {
      iVar10 = 0;
      iVar16 = 0;
      do {
        iVar7 = *piVar20;
        if (iVar8 != *(int *)(iVar7 + iVar10 + 4)) {
          iVar8 = iVar8 * 0x54 + *(int *)(iVar5 + 0xb4);
          *(int *)(iVar8 + 0x50) = iVar16;
          iVar16 = 0;
          *(uint *)(iVar8 + 0x4c) = uVar23;
          iVar8 = *(int *)(iVar7 + iVar10 + 4);
          uVar23 = uVar21;
        }
        uVar21 = uVar21 + 1;
        iVar16 = iVar16 + 1;
        iVar10 = iVar10 + 8;
      } while (uVar21 < (uint)(*(int *)(iVar5 + 0x1c) - *piVar20 >> 3));
    }
    iVar8 = *(int *)(*(int *)(iVar5 + 0x1c) + -4) * 0x54 + *(int *)(iVar5 + 0xb4);
    *(uint *)(iVar8 + 0x4c) = uVar23;
    *(int *)(iVar8 + 0x50) = iVar16;
  }
  iStack_120 = 0;
  piVar6 = (int *)0x0;
  puStack_11c = (undefined4 *)0x0;
  puStack_118 = (undefined4 *)0x0;
  uVar23 = (*(int *)(iVar5 + 0xb8) - *(int *)(iVar5 + 0xb4)) / 0x54;
  iStack_10c = 0;
  if (uVar23 == 0) {
    bVar2 = false;
  }
  else {
    if (0xaaaaaaa < uVar23) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    piVar6 = (int *)0x0;
    if (uVar23 != 0) {
      piVar6 = (int *)fn_8265C9E0(uVar23 * 0x18);
      if (piVar6 == (int *)0x0) {
        uStack_124 = 0;
        ppuStack_128 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_128);
      }
    }
    bVar2 = true;
  }
  puVar1 = puStack_118;
  puVar3 = puStack_11c;
  piVar24 = piVar6;
  if (bVar2) {
    if (uVar23 != 0) {
      piVar24 = piVar6 + 1;
      uVar21 = uVar23;
      do {
        if (piVar24 != (int *)0x4) {
          piVar24[-1] = iStack_120;
          *piVar24 = 0;
          piVar24[1] = 0;
          piVar24[2] = 0;
          cVar9 = fn_82551480(piVar24,(int)puVar1 - (int)puVar3 >> 2);
          if (cVar9 != '\0') {
            puVar17 = (undefined4 *)*piVar24;
            for (puVar14 = puVar3; puVar14 != puVar1; puVar14 = puVar14 + 1) {
              if (puVar17 != (undefined4 *)0x0) {
                *puVar17 = *puVar14;
              }
              puVar17 = puVar17 + 1;
            }
            piVar24[1] = (int)puVar17;
          }
          piVar24[4] = iStack_10c;
        }
        uVar21 = uVar21 - 1;
        piVar24 = piVar24 + 6;
      } while (uVar21 != 0);
    }
    piVar24 = piVar6 + uVar23 * 6;
  }
  uVar23 = 0;
  if (*(int *)(iVar5 + 0x1c) - *piVar20 >> 3 != 0) {
    iVar8 = 0;
    do {
      iVar16 = ((int *)(*piVar20 + iVar8))[1];
      if (piVar6[iVar16 * 6 + 5] == 0) {
        piVar6[iVar16 * 6 + 5] = *(int *)(*piVar20 + iVar8);
      }
      uVar23 = uVar23 + 1;
      iVar8 = iVar8 + 8;
    } while (uVar23 < (uint)(*(int *)(iVar5 + 0x1c) - *piVar20 >> 3));
  }
  iVar8 = 0;
  uVar23 = 0;
  if ((*(int *)(iVar5 + 0x2c) - *piVar19) / 0x18 != 0) {
    iVar16 = 0;
    dVar28 = (double)lbl_821917C0;
    dVar29 = (double)lbl_821CC160;
    dVar27 = (double)lbl_821CA460;
    dVar26 = (double)lbl_82192754;
    do {
      iVar10 = *piVar19 + iVar16;
      piVar20 = piVar6 + *(int *)(iVar10 + 0x10) * 6;
      if ((int *)piVar20[5] == (int *)0x0) {
        *(undefined4 *)(iVar10 + 4) = 0;
        *(undefined4 *)(iVar10 + 8) = 0;
        *(undefined4 *)(iVar10 + 0xc) = 0;
      }
      else {
        dVar25 = dVar29;
        if (*piVar20 == 0) {
          iVar7 = (**(code **)(*(int *)piVar20[5] + 0x4c))();
          *piVar20 = iVar7;
          dVar25 = dVar29;
        }
        uVar4 = fn_827F04B0(0x1a0);
        if ((uVar4 & 0xffffffff) == 0) {
          iStack_12c = 0;
        }
        else {
          iStack_12c = fn_82554260(uVar4,*piVar20,1);
        }
        fn_82536690(piVar20 + 1,&iStack_12c);
        iVar7 = iStack_12c;
        fStack_fc = (float)dVar27;
        fStack_f8 = (float)dVar25;
        uStack_100 = 0x4d697850;
        fStack_ec = (float)dVar25;
        uStack_f4 = 0x20;
        fStack_f0 = (float)dVar28;
        uStack_e8 = 0;
        fStack_e0 = (float)dVar28;
        uStack_e4 = 0x40;
        uStack_dc = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        fn_82554860(iStack_12c,0,iVar10,&uStack_100);
        dVar29 = dVar25;
        if (*(int *)(**(int **)(iVar7 + 400) + 0x114) != 0) {
          dVar25 = (double)fn_827F6328();
        }
        *(int *)(iVar10 + 4) = (int)(dVar25 * dVar26);
        iVar7 = fn_827F3EB0(*piVar20);
        *(int *)(iVar10 + 0xc) = iVar8;
        *(int *)(iVar10 + 8) = iVar7;
        iVar8 = *(int *)(iVar10 + 4) * iVar7 + iVar8;
      }
      uVar23 = uVar23 + 1;
      iVar16 = iVar16 + 0x18;
    } while (uVar23 < (uint)((*(int *)(iVar5 + 0x2c) - *piVar19) / 0x18));
    if (0 < iVar8) {
      if (*(int *)(iVar5 + 0xfc) != 0) {
        fn_8262FEC8();
        *(undefined4 *)(iVar5 + 0xfc) = 0;
      }
      iVar8 = fn_82630040(iVar8 << 6,0,0);
      *(int *)(iVar5 + 0xfc) = iVar8;
      uVar23 = *(uint *)(iVar8 + 0x18) & 0xfffffffc;
                    /* WARNING: Subroutine does not return */
      fn_8262F8D8(iVar8,10,0,uVar23,0,uVar23,*(uint *)(iVar8 + 0x1c) & 0x3fffffc,0);
    }
  }
  iVar5 = ((int)piVar24 - (int)piVar6) / 0x18;
  lVar15 = (longlong)iVar5;
  if (iVar5 != 0) {
    piVar19 = piVar6 + 5;
    do {
      if (piVar19[-5] != 0) {
        (**(code **)(*(int *)*piVar19 + 0x54))();
        piVar19[-5] = 0;
      }
      uVar23 = 0;
      if (piVar19[-3] - piVar19[-4] >> 2 != 0) {
        iVar5 = 0;
        do {
          puVar1 = *(undefined4 **)(piVar19[-4] + iVar5);
          if (puVar1 != (undefined4 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          uVar23 = uVar23 + 1;
          iVar5 = iVar5 + 4;
        } while (uVar23 < (uint)(piVar19[-3] - piVar19[-4] >> 2));
      }
      lVar15 = lVar15 + -1;
      piVar19 = piVar19 + 6;
    } while (lVar15 != 0);
  }
  piVar19 = piVar24;
  if (piVar6 != piVar24) {
    piVar20 = piVar6 + 1;
    do {
      if (*piVar20 != 0) {
        fn_8265CA20();
      }
      *piVar20 = 0;
      piVar20[1] = 0;
      piVar20[2] = 0;
      piVar18 = piVar20 + 5;
      piVar19 = piVar6;
      piVar20 = piVar20 + 6;
    } while (piVar18 != piVar24);
  }
  if (piVar6 != (int *)0x0) {
    if (piVar6 != piVar19) {
      piVar20 = piVar6 + 1;
      do {
        if (*piVar20 != 0) {
          fn_8265CA20();
        }
        *piVar20 = 0;
        piVar20[1] = 0;
        piVar20[2] = 0;
        piVar24 = piVar20 + 5;
        piVar20 = piVar20 + 6;
      } while (piVar24 != piVar19);
    }
    fn_8265CA20(piVar6);
  }
  if (puVar3 != (undefined4 *)0x0) {
    fn_8265CA20(puVar3);
  }
  fn_82F6A594();
  return;
}

