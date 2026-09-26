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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82B7BEB0();
extern int fn_82BA02A8();
extern int fn_82BA03B8();
extern int fn_82BA05E8();
extern int fn_82BABD38();
extern int fn_82BAF3D8();
extern int fn_82BB1BB8();
extern int fn_82BB2C90();
extern int fn_82BB3148();
extern int fn_82BB31A0();
extern int fn_82BB3358();
extern int fn_82BB33A0();
extern int fn_82BBFFC8();
extern int fn_82BC0088();
extern int fn_82BC0B00();
extern int fn_82BC27A0();
extern int fn_82BC59C8();
extern int fn_82BC5AE8();
extern int fn_82BC6118();
extern int fn_82BC6160();
extern int fn_82BC7368();
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_bc;
extern unsigned int iStack_c8;
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int iStack_f4;
extern unsigned int iStack_fc;
extern unsigned int lbl_820DFE24;
extern unsigned int lbl_820E7F9C;
extern unsigned int lbl_820E7F9E;
extern unsigned int lbl_8316FF50;
extern unsigned int uStack_100;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_c4;
extern unsigned int uStack_cc;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BB4080(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  undefined4 *puVar11;
  char cVar18;
  int iVar12;
  longlong lVar8;
  undefined8 uVar9;
  int iVar13;
  longlong lVar10;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  ulonglong uVar25;
  int *piVar26;
  uint uVar27;
  uint uStack_100;
  int iStack_fc;
  undefined4 *puStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined1 auStack_d0 [4];
  uint uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [4];
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  
  fn_82BA03B8(auStack_c0,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
  uVar5 = *(undefined4 *)(param_1 + 0xa4);
  puVar11 = (undefined4 *)fn_82BC0088(auStack_c0,iStack_bc);
  iStack_f4 = 0;
  iStack_fc = 0;
  *puVar11 = uVar5;
  iVar17 = *(int *)(param_1 + 0xa4);
  iStack_f0 = 0;
  iStack_ec = 0;
  uStack_100 = 0xffffffff;
  fn_82BA03B8(auStack_d0,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
  iVar13 = iStack_a8;
  iVar21 = iStack_ac;
  while( true ) {
    if ((*(uint *)(*(int *)(param_1 + 0xc) + 0x858) >> 2 & 1) == 0) {
      uVar25 = (ulonglong)uStack_100;
    }
    else {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
      puVar11 = (undefined4 *)fn_82B7BD28(uVar5,0x1c);
      puStack_f8 = puVar11 + 1;
      *puVar11 = uVar5;
      if (puStack_f8 == (undefined4 *)0x0) {
        puStack_f8 = (undefined4 *)0x0;
      }
      else {
        fn_82BAF3D8(puStack_f8,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0),0xffffffff82bb2be8
                      ,0xffffffff82bb2cf8,0x10);
      }
      puVar11 = (undefined4 *)fn_82BC0088(auStack_d0,uStack_cc);
      *puVar11 = puStack_f8;
      uVar25 = (ulonglong)uStack_100 + 1;
      uStack_100 = (uint)uVar25;
    }
    piVar19 = *(int **)(iVar17 + 0x1c);
    if (piVar19[2] != 0) break;
LAB_82bb4a48:
    iVar12 = 0;
    for (uVar24 = 1; uVar24 <= *(uint *)(*(int *)(iVar17 + 0x38) + 4); uVar24 = uVar24 + 1) {
      iVar15 = *(int *)(*(int *)(*(int *)(iVar17 + 0x38) + 8) + iVar12);
      iVar14 = fn_82BC59C8(iVar15,iVar17);
      for (piVar19 = *(int **)(iVar15 + 0x1c); piVar19[2] != 0; piVar19 = (int *)piVar19[2]) {
        if (((piVar19[0x39] & 1U) != 0) &&
           (iVar15 = (**(code **)(*piVar19 + 0x2c))(piVar19), iVar15 != 0)) {
          iVar16 = *(int *)(iVar15 + 0x1c);
          if (iVar16 == 0) {
            fn_82AB15D0(0,0xffffffff820d2ea4,"vReg != 0",0xffffffff820dfe60,0x526);
          }
          iVar16 = fn_82BC0B00(iVar16,*(undefined4 *)(param_1 + 0xa4),
                                   *(undefined4 *)(param_1 + 0xc));
          fn_82BA05E8(iVar15,iVar14,*(undefined4 *)(iVar16 + 0x10));
          iVar20 = 0;
          puVar11 = (undefined4 *)(iVar16 + -4);
          lVar8 = 4;
          do {
            iVar16 = iVar20 + iVar14 * 4 + 0x5b;
            puVar11 = puVar11 + 1;
            iVar20 = iVar20 + 1;
            *(undefined4 *)(iVar16 * 4 + iVar15) = *puVar11;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          if (((*(int *)(iVar15 + 0x10) == 0) || ((*(uint *)(iVar15 + 0xe4) >> 1 & 1) != 0)) ||
             (bVar7 = true, (&lbl_820E7F9C)[*(int *)(iVar15 + 0x50) * 0xc] == '\0')) {
            bVar7 = false;
          }
          if ((bVar7) && ((*(uint *)(iVar15 + 0xe4) >> 6 & 1) == 0)) {
            *(undefined4 *)(iVar15 + 0x38) = *(undefined4 *)(iVar15 + 0xe0);
          }
        }
      }
      iVar12 = iVar12 + 4;
    }
    cVar18 = fn_82BC5AE8(iVar17);
    if (cVar18 == '\0') {
      fn_82BC6118(iVar17);
      if ((*(uint *)(*(int *)(param_1 + 0xc) + 0x858) >> 2 & 1) == 0) {
        uVar25 = (ulonglong)uStack_100;
      }
      else {
        fn_82BBFFC8(auStack_d0,(ulonglong)uStack_100);
        uVar25 = (ulonglong)uStack_100 - 1;
        uStack_100 = (uint)uVar25;
      }
      iVar12 = *(int *)(iVar17 + 0x54);
      iVar17 = fn_82BC7368(auStack_c0);
      while ((iVar12 != 0 && (iVar12 != *(int *)(iVar17 + 0x54)))) {
        fn_82BC6118(iVar12);
        iVar12 = *(int *)(iVar12 + 0x54);
        if ((*(uint *)(*(int *)(param_1 + 0xc) + 0x858) >> 2 & 1) != 0) {
          fn_82BBFFC8(auStack_d0,uVar25);
          uVar25 = uVar25 - 1;
          uStack_100 = (uint)uVar25;
        }
      }
    }
    else {
      iVar12 = *(int *)(iVar17 + 0x58);
      uVar24 = *(uint *)(iVar12 + 4);
      if (uVar24 == 0) {
        piVar19 = (int *)0x0;
      }
      else {
        piVar19 = *(int **)(iVar12 + 8);
      }
      iVar17 = *piVar19;
      uVar27 = 1;
      if (1 < uVar24) {
        iVar15 = 4;
        if (uVar24 < 2) {
          puVar11 = (undefined4 *)0x0;
          goto LAB_82bb4c00;
        }
        do {
          puVar11 = (undefined4 *)(*(int *)(iVar12 + 8) + iVar15);
LAB_82bb4c00:
          uVar5 = *puVar11;
          puVar11 = (undefined4 *)fn_82BC0088(auStack_c0,iStack_bc);
          uVar27 = uVar27 + 1;
          *puVar11 = uVar5;
          iVar15 = iVar15 + 4;
        } while (uVar27 < *(uint *)(iVar12 + 4));
      }
    }
    if (iStack_bc == 0) {
      if (((*(uint *)(*(int *)(param_1 + 0xc) + 0x858) >> 1 & 1) != 0) && (iStack_f4 != 0)) {
        fn_82BA02A8(*(int *)(param_1 + 0xc),0xffffffff820dffe0);
      }
      if ((*(uint *)(*(int *)(param_1 + 0xc) + 0x858) >> 2 & 1) != 0) {
        if (iStack_fc != 0) {
          fn_82BA02A8(*(int *)(param_1 + 0xc),0xffffffff820dffa4);
        }
        if (iStack_f0 != 0) {
          fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820dff68);
        }
      }
      if (iStack_ec != 0) {
        fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820dff34);
      }
      *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x571) = 1;
      fn_82B7BEB0(uStack_c4,iStack_c8);
      fn_82B7BEB0(uStack_b4,uStack_b8);
      return;
    }
  }
  do {
    if ((((piVar19[0x39] & 1U) != 0) &&
        (cVar18 = (**(code **)(*piVar19 + 0x24))(piVar19), cVar18 == '\0')) &&
       (cVar18 = (**(code **)(*piVar19 + 0x28))(piVar19), cVar18 == '\0')) {
      piVar22 = (int *)piVar19[7];
      piVar26 = piVar19 + 7;
      if (piVar22 != (int *)0x0) {
        if (*(char *)((int)piVar22 + 5) == '\0') {
          cVar18 = (**(code **)(*piVar22 + 0x10))();
          if (cVar18 == '\0') goto LAB_82bb4268;
          iVar12 = piVar19[0x38];
          piVar19[0x14] = 0;
        }
        else {
          iVar12 = piVar22[4];
          piVar19[0x39] = piVar19[0x39] | 0x40;
          piVar19[0x14] = piVar19[0x14];
        }
        piVar19[0xe] = iVar12;
      }
LAB_82bb4268:
      cVar18 = (**(code **)(*piVar19 + 0x18))(piVar19);
      if (cVar18 != '\0') {
        *(uint *)(piVar19[0xed] + 0x84) = *(uint *)(piVar19[0xed] + 0x84) | 1;
        *(uint *)(piVar19[0xed] + 0x84) = *(uint *)(piVar19[0xed] + 0x84) | 2;
      }
      if ((piVar19[0x14] == 0x1f) && (piVar19[0xe] == 2)) {
        *(uint *)(piVar19[0xed] + 0x84) = *(uint *)(piVar19[0xed] + 0x84) | 4;
      }
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
      puVar11 = (undefined4 *)fn_82B7BD28(uVar5,0x110);
      piVar22 = puVar11 + 1;
      *puVar11 = uVar5;
      if (piVar22 == (int *)0x0) {
        piVar22 = (int *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0xc);
        puVar11[5] = piVar19;
        *(undefined1 *)(puVar11 + 0x43) = 0;
        *piVar22 = 3;
        puVar11[2] = 3;
        puVar11[0x42] = uVar5;
        puVar11[3] = 3;
        puVar11[4] = 3;
      }
      iVar12 = (**(code **)(*piVar19 + 0x2c))(piVar19);
      if (iVar12 == 0) {
        if (((*(uint *)(*(int *)(param_1 + 0xc) + 0x858) >> 1 & 1) != 0) &&
           (cVar18 = fn_82BABD38(piVar19), cVar18 != '\0')) {
          if (piVar19[0x3b] == 0) {
            iVar12 = piVar19[0x15];
          }
          else {
            iVar12 = *(int *)(piVar19[0x3b] + 0x50);
          }
          if (((&lbl_820E7F9E)[iVar12 * 0xc] == 0) ||
             (bVar7 = true, 4 < (byte)(&lbl_820E7F9E)[iVar12 * 0xc])) {
            bVar7 = false;
          }
          if ((!bVar7) &&
             (((((uint)piVar19[0x39] >> 6 & 1) == 0 ||
               (cVar18 = fn_82BB1BB8(param_1,piVar19[0xe]), cVar18 != '\0')) &&
              (iStack_f4 < *(int *)(*(int *)(param_1 + 0xc) + 0xaa0))))) {
            uVar9 = fn_82BC0B00(piVar19[8],*(undefined4 *)(param_1 + 0xa4));
            fn_82BC6160(iVar17,*piVar26,uVar9);
            (**(code **)(*piVar19 + 0x60))(piVar19);
            iStack_f4 = iStack_f4 + 1;
            goto LAB_82bb4a38;
          }
        }
        iVar14 = 1;
        iVar12 = iVar21;
        iVar15 = iVar13;
        if (0 < piVar19[5]) {
          puVar11 = &uStack_b0;
          piVar23 = piVar19 + 8;
          do {
            iVar21 = *piVar23;
            if (iVar21 == 0) {
              fn_82AB15D0(0,0xffffffff820d2ea4,"vReg != 0",0xffffffff820dfe60,0x486);
            }
            iVar13 = fn_82BC0B00(iVar21,*(undefined4 *)(param_1 + 0xa4),
                                     *(undefined4 *)(param_1 + 0xc));
            iVar21 = piVar19[5];
            iVar14 = iVar14 + 1;
            piVar23 = piVar23 + 1;
            puVar11 = puVar11 + 1;
            *puVar11 = *(undefined4 *)(iVar13 + 0x10);
            iVar12 = iStack_ac;
            iVar15 = iStack_a8;
          } while (iVar14 <= iVar21);
        }
        iVar21 = iVar12;
        iVar13 = iVar15;
        if ((*(uint *)(&lbl_8316FF50 + piVar19[6] * 0x34) & 1) != 0) {
          if (((&lbl_820E7F9E)[*(int *)(iVar12 + 0x50) * 0xc] == 0) ||
             (bVar7 = true, 4 < (byte)(&lbl_820E7F9E)[*(int *)(iVar12 + 0x50) * 0xc])) {
            bVar7 = false;
          }
          if (((bVar7) && (*(int *)(iVar15 + 0x50) == 0)) ||
             ((*(int *)(iVar12 + 0x50) == 0 &&
              ((*(int *)(iVar15 + 0x50) == 0 && (*(int *)(iVar15 + 0xe0) < *(int *)(iVar12 + 0xe0)))
              )))) {
            iVar21 = piVar19[0x22];
            piVar19[0x22] = piVar19[0x21];
            piVar19[0x21] = iVar21;
            uVar1 = *(undefined1 *)((int)piVar19 + 0x9a);
            uVar2 = *(undefined1 *)((int)piVar19 + 0x9f);
            *(undefined1 *)((int)piVar19 + 0x9f) = *(undefined1 *)(piVar19 + 0x28);
            *(undefined1 *)((int)piVar19 + 0x9a) = *(undefined1 *)((int)piVar19 + 0x99);
            *(undefined1 *)((int)piVar19 + 0x99) = uVar1;
            *(undefined1 *)(piVar19 + 0x28) = uVar2;
            iVar21 = piVar19[0x33];
            piVar19[0x33] = piVar19[0x34];
            piVar19[0x34] = iVar21;
            iVar21 = iVar15;
            iVar13 = iVar12;
            iStack_ac = iVar15;
            iStack_a8 = iVar12;
          }
        }
        if (((*(uint *)(*(int *)(param_1 + 0xc) + 0x858) >> 2 & 1) != 0) &&
           (iStack_fc < *(int *)(*(int *)(param_1 + 0xc) + 0xa9c))) {
          if ((piVar19[4] == 0) ||
             ((((uint)piVar19[0x39] >> 1 & 1) != 0 ||
              (bVar7 = true, (&lbl_820E7F9C)[piVar19[0x14] * 0xc] == '\0')))) {
            bVar7 = false;
          }
          if ((bVar7) && (0 < piVar19[5])) {
            if (-1 < (int)uVar25) {
              lVar8 = (uVar25 & 0x3fffffff) << 2;
              do {
                if ((uVar25 & 0xffffffff) < (ulonglong)uStack_cc) {
                  puVar11 = (undefined4 *)((int)lVar8 + iStack_c8);
                }
                else {
                  puVar11 = (undefined4 *)fn_82BC0088(auStack_d0,uVar25);
                }
                lVar10 = fn_82BB3148(*puVar11,piVar22,*(undefined4 *)(param_1 + 0xc));
                if (lVar10 != 0) {
                  fn_82BC6160(iVar17,*piVar26);
                  (**(code **)(*piVar19 + 0x60))(piVar19);
                  iStack_fc = iStack_fc + 1;
                  if (piVar22 != (int *)0x0) {
                    fn_82B7BEB0(piVar22[-1],piVar22 + -1);
                  }
                  goto LAB_82bb4a38;
                }
                uVar25 = uVar25 - 1;
                lVar8 = lVar8 + -4;
              } while (-1 < (longlong)uVar25);
            }
            fn_82BB3358(puStack_f8,piVar22);
          }
          else if (piVar19[4] != 0) {
            iVar12 = 0;
            piVar26 = piVar22;
            do {
              if (*piVar26 != 3) {
                bVar7 = true;
                goto LAB_82bb47c4;
              }
              iVar12 = iVar12 + 1;
              piVar26 = piVar26 + 1;
            } while (iVar12 < 4);
            bVar7 = false;
LAB_82bb47c4:
            if (bVar7) {
              fn_82AB15D0(0,0xffffffff820d2ea4,"!cv_inst->HasValues()",0xffffffff820dfe60,
                                0x4c8);
            }
            fn_82BB31A0(piVar22);
          }
        }
        iVar12 = 1;
        if (0 < piVar19[5]) {
          piVar23 = &iStack_ac;
          piVar26 = piVar19 + 7;
          do {
            if ((*(uint *)(*(int *)(param_1 + 0xc) + 0x858) >> 3 & 1) == 0) {
LAB_82bb4978:
              fn_82BA05E8(piVar19,iVar12,*piVar23);
            }
            else {
              piVar6 = (int *)*piVar23;
              cVar18 = fn_82BB33A0(piVar19,piVar6,iVar12);
              if ((cVar18 == '\0') ||
                 ((((((uint)piVar6[0x39] >> 6 & 1) != 0 &&
                    (cVar18 = fn_82BB1BB8(param_1,piVar6[0xe]), cVar18 == '\0')) ||
                   (iVar15 = (**(code **)(*piVar19 + 4))(piVar19), iVar15 < iVar12)) ||
                  ((*(char *)(piVar6 + 0x29) != '\0' ||
                   (iVar15 = fn_82BC27A0(piVar6,1), iVar15 != 0)))))) goto LAB_82bb4978;
              bVar3 = *(byte *)((int)piVar6 + 0x99);
              bVar4 = *(byte *)((int)piVar19 + iVar12 + 0x9e);
              *(byte *)((int)piVar19 + iVar12 + 0x9e) = *(byte *)((int)piVar6 + 0x9f) | bVar4;
              *(byte *)((int)piVar19 + iVar12 + 0x98) =
                   bVar4 == 0 & bVar3 ^ *(byte *)((int)piVar19 + iVar12 + 0x98);
              if (piVar26[0x1a] == lbl_820DFE24) {
                piVar26[0x1a] = piVar6[0x21];
              }
              else {
                lVar8 = 0;
                do {
                  uVar9 = (**(code **)(*piVar19 + 0x50))(piVar19,iVar12,lVar8);
                  iVar15 = *piVar19;
                  uVar9 = (**(code **)(*piVar6 + 0x50))(piVar6,1,uVar9);
                  (**(code **)(iVar15 + 0x58))(piVar19,iVar12,lVar8,uVar9);
                  lVar8 = lVar8 + 1;
                } while ((int)lVar8 < 4);
              }
              fn_82BA05E8(piVar19,iVar12,piVar6[0x3b]);
              iStack_ec = iStack_ec + 1;
            }
            piVar26[0xe] = 0x30;
            iVar12 = iVar12 + 1;
            piVar26[8] = -1;
            piVar23 = piVar23 + 1;
            piVar26 = piVar26 + 1;
            *piVar26 = 0;
          } while (iVar12 <= piVar19[5]);
        }
      }
      else if ((*(uint *)(*(int *)(param_1 + 0xc) + 0x858) >> 2 & 1) != 0) {
        iVar12 = 1;
        if (0 < piVar19[5]) {
          piVar23 = piVar19 + 0x3b;
          do {
            if (*piVar23 == 0) {
              bVar7 = false;
              goto LAB_82bb4380;
            }
            iVar12 = iVar12 + 1;
            piVar23 = piVar23 + 1;
          } while (iVar12 <= piVar19[5]);
        }
        bVar7 = true;
LAB_82bb4380:
        if ((bVar7) && (iStack_fc < *(int *)(*(int *)(param_1 + 0xc) + 0xa9c))) {
          cVar18 = fn_82BB2C90(piVar19);
          if (cVar18 == '\0') {
            if (uStack_100 < uStack_cc) {
              puVar11 = (undefined4 *)(uStack_100 * 4 + iStack_c8);
            }
            else {
              puVar11 = (undefined4 *)fn_82BC0088(auStack_d0);
            }
            lVar8 = fn_82BB3148(*puVar11,piVar22,*(undefined4 *)(param_1 + 0xc));
            if (lVar8 == 0) {
              fn_82BB3358(puStack_f8,piVar22);
              goto LAB_82bb49b0;
            }
            fn_82BC6160(iVar17,*piVar26);
          }
          else {
            fn_82BC6160(iVar17,*piVar26,
                              **(undefined4 **)(*(int *)(*(int *)(piVar19[0x3b] + 0x1c) + 0x2c) + 4)
                             );
          }
          (**(code **)(*piVar19 + 0x60))(piVar19);
          iStack_f0 = iStack_f0 + 1;
          goto LAB_82bb4a38;
        }
      }
LAB_82bb49b0:
      iVar12 = 0;
      if (0 < piVar19[4]) {
        piVar26 = piVar19 + 6;
        do {
          piVar26 = piVar26 + 1;
          fn_82BC6160(iVar17,*piVar26,piVar22);
          iVar12 = iVar12 + 1;
        } while (iVar12 < piVar19[4]);
      }
      if (((piVar19[4] == 0) || (((uint)piVar19[0x39] >> 1 & 1) != 0)) ||
         (bVar7 = true, (&lbl_820E7F9C)[piVar19[0x14] * 0xc] == '\0')) {
        bVar7 = false;
      }
      if ((bVar7) && (((uint)piVar19[0x39] >> 6 & 1) == 0)) {
        piVar19[0xe] = piVar19[0x38];
      }
    }
LAB_82bb4a38:
    piVar19 = (int *)piVar19[2];
    if (piVar19[2] == 0) goto LAB_82bb4a48;
    uVar25 = (ulonglong)uStack_100;
  } while( true );
}

