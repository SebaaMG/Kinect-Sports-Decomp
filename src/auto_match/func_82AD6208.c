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
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b4;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_bc;
extern int fn_82AA66A8();
extern int fn_82ABDA10();
extern int fn_82ABDAA0();
extern int fn_82ABDD90();
extern int fn_82ABE0E8();
extern int fn_82ABF768();
extern int fn_82AC65F0();
extern int fn_82AC6740();
extern int fn_82AD14F0();
extern int fn_82AD1978();
extern int fn_82AD1B28();
extern int fn_82AD1C60();
extern int fn_82AD2020();
extern int fn_82AD21B8();
extern int fn_82AD2CF0();
extern int fn_82AD3088();
extern int fn_82AD3450();
extern int fn_82AD5AA8();
extern int fn_82AD5BF0();
extern int fn_82B80EE0();
extern int fn_82B81180();
extern int fn_82B82D28();
extern int fn_82B841E8();
extern int fn_82B8AE98();
extern unsigned int iStack_c0;
extern unsigned int iStack_c4;
extern unsigned int iStack_d4;
extern unsigned int lbl_82005710;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_dd;
extern unsigned int uStack_de;
extern unsigned int uStack_df;


longlong fn_82AD6208(uint *param_1)

{
  undefined1 uVar1;
  char cVar6;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar7;
  int *piVar8;
  undefined8 uVar9;
  bool bVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  int *piVar20;
  int *piVar21;
  ulonglong uVar22;
  int *piVar23;
  int *piVar24;
  uint uVar25;
  int *piVar26;
  ulonglong uVar27;
  uint uVar28;
  uint *puVar29;
  double dVar30;
  undefined8 uVar31;
  char cStack_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  int *piStack_dc;
  int *piStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int *piStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [8];
  ulonglong auStack_a8 [21];
  
  if ((param_1[0xb] & 0x8000) != 0) {
    return 0;
  }
  lVar17 = 0;
  if ((param_1[10] & 0x100) != 0) {
    uVar31 = lbl_82005710;
    for (uVar25 = param_1[1]; (lbl_82005710 = uVar31, (uVar25 & 1) == 0 && (uVar25 != 0));
        uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4)) {
      for (uVar15 = *(uint *)(uVar25 + 0x1c); ((uVar15 & 1) == 0 && (uVar15 != 0));
          uVar15 = *(uint *)((uVar15 & 0xfffffffe) + 0x28)) {
        cVar6 = fn_82ABDAA0(uVar15);
        if (cVar6 != '\0') {
          *(uint *)(uVar15 + 0x14) = *(uint *)(uVar15 + 0x14) & 0x1fff;
        }
      }
      uVar31 = lbl_82005710;
    }
    uVar25 = param_1[1];
    uVar27 = 0;
    if (((uVar25 & 1) == 0) && (uVar25 != 0)) {
      do {
        uVar31 = lbl_82005710;
        for (uVar15 = *(uint *)(uVar25 + 0x1c);
            (lbl_82005710 = uVar31, (uVar15 & 1) == 0 && (uVar15 != 0));
            uVar15 = *(uint *)((uVar15 & 0xfffffffe) + 0x28)) {
          cVar6 = fn_82ABDAA0(uVar15);
          if (cVar6 != '\0') {
            uVar13 = *(uint *)(uVar15 + 8) >> 7 & 0x7f;
            if (uVar13 < 0x42) {
              if (uVar13 == 0x41) {
LAB_82ad633c:
                uVar13 = *(uint *)(uVar15 + 0x14) & 0xe7ffffff;
              }
              else {
                if (uVar13 < 0x15) {
LAB_82ad6374:
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                if (uVar13 < 0x19) {
                  uVar13 = *(uint *)(uVar15 + 0x14) & 0xe7ffffff | 0x8000000;
                }
                else {
                  if (uVar13 == 0x3f) goto LAB_82ad633c;
                  if (uVar13 != 0x40) goto LAB_82ad6374;
                  uVar13 = *(uint *)(uVar15 + 0x14) | 0x18000000;
                }
              }
              *(uint *)(uVar15 + 0x14) = uVar13;
            }
            else {
              if (uVar13 != 0x42) {
                if ((uVar13 != 0x6c) && (uVar13 != 0x6d)) goto LAB_82ad6374;
                goto LAB_82ad633c;
              }
              *(uint *)(uVar15 + 0x14) = *(uint *)(uVar15 + 0x14) & 0xe7ffffff;
              fn_82B82D28(*(undefined4 *)(uVar15 + 0x2c),0,&iStack_d4,&uStack_cc,&uStack_d0,0,
                                0,0);
              iVar5 = iStack_d4;
              uVar13 = *(uint *)(iStack_d4 + 8);
              if ((uVar13 & 0x3f80) == 16000) {
                dVar30 = (double)fn_82B80EE0(iStack_d4,uStack_cc,uStack_d0);
                auStack_a8[0] = (ulonglong)dVar30;
                uVar27 = auStack_a8[0] & 0xffffffff;
              }
              else {
                cVar6 = fn_82ABDAA0(iStack_d4);
                if (cVar6 == '\0') {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                if ((uVar13 >> 0x17 & 1) != 0) {
                  iVar5 = fn_82AD5AA8(param_1,uVar15,*(undefined2 *)(iVar5 + 0x12));
                  iStack_d4 = iVar5;
                }
                uVar13 = *(uint *)(iVar5 + 0x14);
                uVar27 = (ulonglong)(uVar13 >> 0xd) & 0x3fff;
                if ((uVar13 & 0x18000000) != 0) {
                  uVar27 = (uVar27 - ((ulonglong)(uVar13 >> 0x1b) & 3)) + 2;
                }
              }
            }
            uVar13 = *(uint *)(uVar15 + 0x14) >> 0x1b & 3;
            *(uint *)(uVar15 + 0x14) =
                 (uint)((uVar27 & 0xffffffff) << 0xd) & 0x7ffe000 |
                 *(uint *)(uVar15 + 0x14) & 0xf8001fff;
            if (uVar13 != 0) {
              if (uVar13 == 1) {
                uVar27 = uVar27 + 1;
                if (0x3fff < (uVar27 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0xdcf);
                }
              }
              else {
                if (uVar13 != 3) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                if ((uVar27 & 0xffffffff) == 0) {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                uVar27 = uVar27 - 1;
              }
            }
          }
          uVar31 = lbl_82005710;
        }
        uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4);
      } while (((uVar25 & 1) == 0) && (uVar25 != 0));
      if ((uVar27 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
    }
    do {
      uVar4 = 0;
      uVar25 = 0x4000;
      iVar5 = 0;
      piVar23 = (int *)0x0;
      uVar22 = 1;
      uVar19 = 1;
      uVar27 = 1;
      if ((param_1[1] & 1) != 0) goto LAB_82ad6c48;
      uVar15 = *param_1;
LAB_82ad6520:
      puVar18 = (uint *)((uVar15 & 0xfffffffe) - 4);
      while( true ) {
        if (puVar18 == (uint *)0x0) {
          if (((lVar17 == 0) || (uVar25 = param_1[1], (uVar25 & 1) != 0)) || (uVar25 == 0))
          goto LAB_82ad7074;
          goto LAB_82ad6fd0;
        }
        puVar11 = puVar18 + 6;
        piVar20 = (int *)0x0;
        if (((puVar18[7] & 1) == 0) &&
           (piVar26 = (int *)((*puVar11 & 0xfffffffe) - 0x28), piVar26 != (int *)0x0)) break;
LAB_82ad6c38:
        uVar15 = *puVar18;
        if ((uVar15 & 1) == 0) goto LAB_82ad6520;
LAB_82ad6c48:
        puVar18 = (uint *)0x0;
      }
      while (cVar6 = fn_82ABDAA0(piVar26), cVar6 == '\0') {
        uVar15 = piVar26[2];
        uVar13 = uVar15 >> 7 & 0x7f;
        if (uVar13 == 0x55) {
          if ((puVar18[0xc] >> 0x17 & 1) != 0) {
            iVar5 = iVar5 + 1;
          }
        }
        else if (uVar13 == 0x54) {
          iVar3 = fn_82ABDD90(param_1,0x54,uVar15 >> 0x13 & 7,uVar15 >> 0xe & 7);
          uVar15 = *(uint *)(*(uint *)((int)piVar26 + iVar3 + -0x10) & 0xfffffffe);
          if ((uVar15 & 1) == 0) {
            iVar3 = (uVar15 & 0xfffffffe) - 4;
          }
          else {
            iVar3 = 0;
          }
          if ((*(uint *)(iVar3 + 0x30) >> 0x17 & 1) != 0) {
            iVar5 = iVar5 + -1;
          }
        }
LAB_82ad6b14:
        cVar6 = fn_82ABDA10(piVar26);
        if (cVar6 != '\0') {
          uVar4 = 0;
          uVar27 = (ulonglong)((uint)piVar26[2] >> 7) & 0x7f;
          uVar19 = (uVar27 - 0x42) - ((uVar27 - 0x43) + (ulonglong)(uVar27 - 0x42 == 0));
          uVar27 = (uVar27 - 0x3f) - ((uVar27 - 0x40) + (ulonglong)(uVar27 - 0x3f == 0));
        }
        uVar15 = piVar26[2];
        if ((((uVar15 >> 0x11 & 1) != 0) ||
            ((((puVar18[0x13] >> 0x16 & 1) != 0 &&
              (cVar6 = fn_82AC6740(piVar26), cVar6 != '\0')) &&
             (cVar6 = fn_82ABDAA0(piVar26), cVar6 == '\0')))) &&
           (((uVar15 & 0x3f80) != 0x2d00 || ((puVar18[0xc] >> 0x1a & 1) == 0)))) {
          uVar4 = 1;
        }
        if (piVar20 == (int *)0x0) {
          if ((puVar18[7] & 1) == 0) {
            piVar24 = (int *)((*puVar11 & 0xfffffffe) - 0x28);
          }
          else {
            piVar24 = (int *)0x0;
          }
          if (piVar26 == piVar24) goto LAB_82ad6bcc;
          if ((puVar18[7] & 1) != 0) goto LAB_82ad6c38;
          uVar15 = *puVar11;
        }
        else {
          uVar15 = piVar20[9];
          if ((uVar15 & 1) == 0) {
            piVar24 = (int *)((uVar15 & 0xfffffffe) - 0x28);
          }
          else {
            piVar24 = (int *)0x0;
          }
          if (piVar26 == piVar24) {
LAB_82ad6bcc:
            uVar15 = piVar26[9];
            piVar20 = piVar26;
          }
          if ((uVar15 & 1) != 0) goto LAB_82ad6c38;
        }
        piVar26 = (int *)((uVar15 & 0xfffffffe) - 0x28);
        if (piVar26 == (int *)0x0) goto LAB_82ad6c38;
      }
      cVar6 = fn_82ABDA10(piVar26);
      if (cVar6 == '\0') {
        piVar26[5] = piVar26[5] | 0x80000000;
      }
      else {
        piVar26[5] = (uint)(LZCOUNT(uVar4) << 0x1a) & 0x80000000 | piVar26[5] & 0x7fffffffU;
      }
      uVar15 = piVar26[5];
      uVar13 = uVar15 >> 0x1b & 3;
      uVar28 = uVar15 >> 0xd & 0x3fff;
      if (uVar13 != 0) {
        uVar28 = (uVar28 - uVar13) + 2;
      }
      if ((uVar28 != uVar25) && (iVar5 == 0)) {
        piVar26[5] = uVar15 | 0x40000000;
      }
      piVar24 = (int *)0x0;
      piVar21 = (int *)0x0;
      uVar25 = (uint)piVar26[2] >> 7 & 0x7f;
      piStack_dc = (int *)0x0;
      piStack_d8 = (int *)0x0;
      if ((uVar25 < 0x15) || (bVar10 = true, 0x18 < uVar25)) {
        bVar10 = false;
      }
      if (bVar10) {
        fn_82AD14F0(param_1,piVar26,&piStack_dc,&piStack_d8);
        piVar21 = piStack_d8;
        piVar24 = piStack_dc;
        if ((piVar26[5] & 0x40000000U) != 0) {
          if ((piStack_d8 != (int *)0x0) || (piVar24 = (int *)0x0, piStack_dc != (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          goto LAB_82ad6638;
        }
        if (piStack_dc == (int *)0x0) {
          if (piStack_d8 == (int *)0x0) {
            if (uVar28 <= ((uint)piVar23[5] >> 0xd & 0x3fff)) goto LAB_82ad6674;
          }
          else if (piStack_d8 != piVar23) goto LAB_82ad6674;
LAB_82ad6638:
          piVar26[5] = piVar26[5] | 0x20000000;
        }
        else {
LAB_82ad6674:
          if ((((((uVar27 & 0xff) == 0) && (piStack_dc != (int *)0x0)) &&
               ((piStack_dc[5] & 0x40000000U) != 0)) &&
              ((piVar23 == piStack_dc && (piStack_d8 == (int *)0x0)))) &&
             (cVar6 = fn_82ABF768(uVar31,piVar26[0xb]), cVar6 != '\0')) {
            piVar26[5] = piVar26[5] | 0x20000000;
            uVar25 = piVar24[7];
LAB_82ad677c:
            do {
              uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4);
              if ((((uVar25 & 1) != 0) || (uVar25 == 0)) ||
                 ((*(uint *)(uVar25 + 0x4c) >> 0x16 & 1) == 0)) break;
              iVar3 = *(int *)(uVar25 + 0x70);
              if ((*(uint *)(iVar3 + 0x30) >> 0x16 & 1) != 0) {
LAB_82ad66f8:
                do {
                  iVar3 = *(int *)(iVar3 + 0x50);
                  if (iVar3 != 0) {
                    if ((*(uint *)(iVar3 + 0x30) & 0x400000) != 0) goto LAB_82ad66f8;
                  }
                } while ((*(uint *)(iVar3 + 0x30) >> 0x16 & 1) != 0);
                *(int *)(uVar25 + 0x70) = iVar3;
              }
              if (*(int *)(uVar25 + 0x70) != piVar26[7]) break;
              uVar15 = *(uint *)(uVar25 + 0x1c);
              if (((uVar15 & 1) == 0) && (uVar15 != 0)) {
                while (cVar6 = fn_82ABDA10(uVar15), cVar6 == '\0') {
                  uVar15 = *(uint *)((uVar15 & 0xfffffffe) + 0x28);
                  if (((uVar15 & 1) != 0) || (uVar15 == 0)) goto LAB_82ad677c;
                }
                piVar26[5] = piVar26[5] & 0xdfffffff;
              }
            } while( true );
          }
        }
      }
      piVar8 = piVar23;
      if (((((piVar23 != (int *)0x0) && ((piVar23[2] & 0x3f80U) == 0x2100)) &&
           ((piVar26[2] & 0x3f80U) != 0x2080)) && (((uint)piVar23[5] >> 0xd & 0x3fff) == uVar28)) &&
         (((piVar23[5] & 0x80000000U) != 0 ||
          (((uVar19 & 0xff) == 0 && (((piVar23[2] & 0x80000000U) == 0 || (piVar23[1] == 0)))))))) {
LAB_82ad6c54:
        fn_82AD1C60(param_1,piVar8,0);
        goto LAB_82ad6c60;
      }
      uVar25 = (uint)piVar26[2] >> 7 & 0x7f;
      if (((uVar25 == 0x42) || (uVar25 == 0x6d)) &&
         ((((uVar22 & 0xff) == 0 && (piVar23 != (int *)0x0)) && ((piVar23[2] & 0x3f80U) == 0x2080)))
         ) {
        puVar29 = (uint *)*piVar23;
        while( true ) {
          if (puVar29 == (uint *)0x0) goto LAB_82ad6c54;
          if (((*puVar29 & 0xe000000) != 0) &&
             (fn_82B82D28(puVar29,0,&piStack_c8,auStack_b8,auStack_bc,0,0,0),
             piStack_c8 != piVar26)) break;
          puVar29 = (uint *)puVar29[1];
        }
      }
      piVar8 = piVar26;
      if (((piVar26[5] & 0x80000000U) != 0) && ((piVar26[5] & 0x40000000U) != 0)) {
        uVar25 = (uint)piVar26[2] >> 7 & 0x7f;
        if ((uVar25 < 0x20) || (bVar10 = true, 0x52 < uVar25)) {
          bVar10 = false;
        }
        if ((bVar10) &&
           ((uVar25 != 0x3f || (cVar6 = fn_82AD3450(param_1,piVar26), cVar6 != '\0'))))
        goto LAB_82ad6c54;
      }
      if ((((piVar26[2] & 0x3f80U) == 0x1f80) &&
          ((((piVar26[5] & 0x80000000U) != 0 && (piVar23 != (int *)0x0)) &&
           ((piVar23[2] & 0x3f80U) == 0x2000)))) &&
         (cVar6 = fn_82AD3450(param_1,piVar26), cVar6 != '\0')) goto LAB_82ad6c54;
      uVar25 = (uint)piVar26[2] >> 7 & 0x7f;
      if ((uVar25 < 0x15) || (bVar10 = true, 0x18 < uVar25)) {
        bVar10 = false;
      }
      if (((bVar10) && ((piVar26[5] & 0x80000000U) != 0)) &&
         ((piVar23 != (int *)0x0 &&
          (((piVar23[2] & 0x3f80U) == 0x1f80 &&
           (cVar6 = fn_82AD3450(param_1,piVar23), cVar6 != '\0')))))) {
        iVar3 = piVar23[7];
        iVar14 = *(int *)(iVar3 + 0x70);
        if ((*(uint *)(iVar14 + 0x30) >> 0x16 & 1) != 0) {
LAB_82ad699c:
          do {
            iVar14 = *(int *)(iVar14 + 0x50);
            if (iVar14 != 0) {
              if ((*(uint *)(iVar14 + 0x30) & 0x400000) != 0) goto LAB_82ad699c;
            }
          } while ((*(uint *)(iVar14 + 0x30) >> 0x16 & 1) != 0);
          *(int *)(iVar3 + 0x70) = iVar14;
        }
        lVar2 = fn_82AD2020(param_1,*(undefined4 *)(iVar3 + 0x70));
        if ((lVar2 == 0) ||
           ((iVar3 = fn_82ABE0E8(lVar2,param_1), iVar3 != 9 &&
            (iVar3 = fn_82ABE0E8(lVar2,param_1), iVar3 != 8)))) {
          fn_82B81180(piVar26,param_1);
          piVar8 = piVar23;
          goto LAB_82ad6c54;
        }
      }
      if (((piVar26[5] & 0x20000000U) == 0) ||
         ((((piVar21 != (int *)0x0 && ((piVar21[5] & 0x80000000U) == 0)) ||
           ((*(uint *)(((uint *)piVar26[0xc])[3] + 8) >> 0x17 & 1) != 0)) ||
          ((*(uint *)piVar26[0xc] & 8) != 0)))) {
        uVar25 = (uint)piVar26[5] >> 0xd & 0x3fff;
        uVar22 = (ulonglong)(uint)piVar26[2] & 0x3f80;
        lVar2 = uVar22 - 0x2080;
        uVar22 = lVar2 - ((uVar22 - 0x2081) + (ulonglong)(lVar2 == 0));
        piVar23 = piVar26;
        if (((uVar25 == 0) && ((piVar26[2] & 0x380000U) != 0)) &&
           (fn_82B82D28(piVar26[0xb],0,&iStack_c4,auStack_b0,auStack_b4,0,0,0),
           (*(uint *)(iStack_c4 + 8) & 0x3f80) == 16000)) {
          uVar25 = 0x4000;
        }
        goto LAB_82ad6b14;
      }
      iVar5 = piVar26[1];
      puVar11 = (uint *)(piVar26 + 1);
      while( true ) {
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        if ((*(int *)(iVar5 + 0x10) != 0) &&
           ((*(uint *)(*(int *)(iVar5 + 0x10) + 8) & 0x3f80) == 0x2d00)) break;
        iVar5 = *(int *)(iVar5 + 8);
      }
      uVar25 = *(uint *)(iVar5 + 0x10);
      while( true ) {
        uVar25 = uVar25 & 0xfffffffe;
        puVar29 = (uint *)(uVar25 + 0x24);
        uVar15 = *(uint *)(uVar25 + 0x24);
        if ((uVar15 & 1) == 0) {
          iVar5 = (uVar15 & 0xfffffffe) - 0x28;
        }
        else {
          iVar5 = 0;
        }
        uVar13 = *(uint *)(iVar5 + 8) >> 7 & 0x7f;
        if ((uVar13 == 0) || (bVar10 = true, 0x66 < uVar13)) {
          bVar10 = false;
        }
        if (bVar10) break;
        if ((uVar15 & 1) == 0) {
          uVar25 = (uVar15 & 0xfffffffe) - 0x28;
        }
        else {
          uVar25 = 0;
        }
      }
      uVar15 = (uint)piVar26[2] >> 7 & 0x7f;
      if (uVar15 == 0x15) {
        uVar9 = 0x3b;
      }
      else if (uVar15 == 0x16) {
        uVar9 = 0x3c;
      }
      else if (uVar15 == 0x17) {
        uVar9 = 0x3d;
      }
      else {
        if (uVar15 != 0x18) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        uVar9 = 0x3e;
      }
      uVar13 = fn_82B841E8(param_1,puVar18,0,uVar9,1,1);
      uVar15 = uVar13 & 0xfffffffe;
      *(uint *)(uVar15 + 0x24) = *puVar29;
      *(uint *)(*puVar29 & 0xfffffffe) = uVar15;
      *(uint *)(uVar15 + 0x28) = uVar25;
      *puVar29 = uVar15 + 0x28;
      *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) | 0x40;
      uVar4 = fn_82AD1978(uVar13,piVar26[0xc]);
      *(undefined4 *)(uVar13 + 0x2c) = uVar4;
      if (piVar24 != (int *)0x0) {
        uVar25 = piVar24[7];
        while (((uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4), (uVar25 & 1) == 0 && (uVar25 != 0))
               && ((*(uint *)(uVar25 + 0x4c) >> 0x16 & 1) != 0))) {
          iVar5 = *(int *)(uVar25 + 0x70);
          if ((*(uint *)(iVar5 + 0x30) >> 0x16 & 1) != 0) {
LAB_82ad6e08:
            do {
              iVar5 = *(int *)(iVar5 + 0x50);
              if (iVar5 != 0) {
                if ((*(uint *)(iVar5 + 0x30) & 0x400000) != 0) goto LAB_82ad6e08;
              }
            } while ((*(uint *)(iVar5 + 0x30) >> 0x16 & 1) != 0);
            *(int *)(uVar25 + 0x70) = iVar5;
          }
          if (*(int *)(uVar25 + 0x70) != piVar26[7]) break;
          *(uint *)(uVar25 + 0x4c) = *(uint *)(uVar25 + 0x4c) & 0xff7fffff;
          iVar5 = fn_82AD2020(param_1,uVar25);
          if (((iVar5 != 0) && (uVar15 = *(uint *)(iVar5 + 8), (uVar15 & 0x3f80) == 0x2a80)) &&
             ((uVar15 >> 0x11 & 1) != 0)) {
            *(uint *)(iVar5 + 8) = uVar15 & 0xfffbffff;
          }
        }
        fn_82AD1C60(param_1,piVar24,0);
      }
      if (piVar21 != (int *)0x0) {
        fn_82AD1C60(param_1,piVar21,0);
      }
      while (puVar18 = (uint *)*puVar11, puVar18 != (uint *)0x0) {
        if (puVar18[4] != 0) {
          if (((*puVar18 & 0x40000000) == 0) || (bVar10 = true, (*puVar18 & 0xe000000) != 0)) {
            bVar10 = false;
          }
          if (bVar10) {
            puVar12 = (uint *)(puVar18[3] + 4);
            for (puVar29 = (uint *)*puVar12; puVar29 != puVar18; puVar29 = (uint *)puVar29[2]) {
              puVar12 = puVar29 + 2;
            }
            *puVar12 = puVar18[2];
            puVar18[2] = *(uint *)(uVar13 + 4);
            *(uint **)(uVar13 + 4) = puVar18;
            puVar18[3] = uVar13;
          }
        }
        if ((uint *)*puVar11 == puVar18) {
          puVar11 = puVar18 + 2;
        }
      }
      for (puVar18 = (uint *)*piVar26; puVar18 != (uint *)0x0; puVar18 = (uint *)puVar18[1]) {
        if ((*puVar18 & 0xe000000) == 0) {
          fn_82AD1978(uVar13,puVar18);
        }
      }
      fn_82AD1B28(uVar13);
      *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) | 0x1000000;
      fn_82B8AE98(param_1,piVar26);
LAB_82ad6c60:
      lVar17 = 1;
    } while( true );
  }
LAB_82ad7074:
  uVar25 = param_1[1];
  do {
    if (((uVar25 & 1) != 0) || (uVar25 == 0)) {
      return lVar17;
    }
    if (((*(uint *)(uVar25 + 0x30) >> 0x1a & 1) == 0) && ((*(uint *)(uVar25 + 0x1c) & 1) == 0)) {
      uVar15 = *(uint *)(uVar25 + 0x18) & 0xfffffffe;
      iVar5 = uVar15 - 0x28;
      if (iVar5 != 0) {
        uVar13 = *(uint *)(uVar15 - 0x20) >> 7 & 0x7f;
        if ((((uVar13 == 0x56) || (uVar13 == 0x57)) || (uVar13 == 0x59)) ||
           (((uVar13 == 0x5a || (uVar13 == 0x54)) || (bVar10 = false, uVar13 == 0x55)))) {
          bVar10 = true;
        }
        if ((((bVar10) && ((*(uint *)(uVar15 - 0x20) >> 0x11 & 1) != 0)) &&
            ((cVar6 = fn_82AD5BF0(param_1,uVar25,iVar5,&iStack_c0,&cStack_e0,&piStack_d8,
                                    &piStack_dc,auStack_a8), cVar6 != '\0' &&
             (iVar3 = fn_82ABE0E8(iVar5,param_1), iVar3 != 1)))) &&
           ((iVar3 < 3 || ((4 < iVar3 && ((iVar3 < 8 || (9 < iVar3)))))))) {
          iVar3 = fn_82AC65F0(iVar5);
          piVar20 = piStack_d8;
          piVar23 = piStack_dc;
          iVar3 = *(int *)(iVar3 + 0xc);
          if (iStack_c0 == 3) {
            cVar6 = fn_82AD2CF0(param_1,piStack_dc,piStack_d8,iVar5,iVar3,&uStack_df);
            if (cVar6 != '\0') {
              if (cStack_e0 != '\0') {
                for (iVar3 = *(int *)(iVar3 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
                  if ((*(int *)(iVar3 + 0x10) != 0) && (*(int *)(iVar3 + 0x10) != iVar5)) {
                    bVar10 = true;
                    goto LAB_82ad71f0;
                  }
                }
                bVar10 = false;
LAB_82ad71f0:
                if (bVar10) goto LAB_82ad7300;
                fn_82AD21B8(param_1,iVar5);
                cStack_e0 = '\0';
              }
              uVar13 = *(uint *)(uVar15 - 0x20);
              iVar5 = fn_82ABDD90(param_1,uVar13 >> 7 & 0x7f,uVar13 >> 0x13 & 7,uVar13 >> 0xe & 7);
              puVar16 = (undefined4 *)(iVar5 + (uVar15 - 0x38));
              if ((int *)*puVar16 != piVar20) {
                puVar16[3] = puVar16[3] & 0xfffffffd | ~puVar16[3] & 2;
              }
              *puVar16 = piVar20;
              bVar10 = true;
              *(uint *)(uVar15 - 0x20) = *(uint *)(uVar15 - 0x20) & 0xfffbffff;
              uVar1 = uStack_df;
LAB_82ad72e8:
              fn_82AD3088(param_1,uVar25,piVar23,piVar20,bVar10,uVar1);
              *(uint *)(uVar25 + 0x30) = *(uint *)(uVar25 + 0x30) | 0xc000000;
            }
          }
          else {
            cVar6 = fn_82AD2CF0(param_1,piStack_d8,0,iVar5,iVar3,&uStack_de);
            piVar23 = piStack_dc;
            if ((cVar6 != '\0') &&
               (cVar7 = fn_82AD2CF0(param_1,piStack_dc,0,iVar5,iVar3,&uStack_dd),
               cVar6 = cStack_e0, cVar7 != '\0')) {
              fn_82AD3088(param_1,uVar25,piVar20,0,cStack_e0,uStack_de);
              piVar20 = (int *)0x0;
              bVar10 = cVar6 == '\0';
              uVar1 = uStack_dd;
              goto LAB_82ad72e8;
            }
          }
        }
      }
    }
LAB_82ad7300:
    uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4);
  } while( true );
LAB_82ad6fd0:
  do {
    for (uVar15 = *(uint *)(uVar25 + 0x1c); ((uVar15 & 1) == 0 && (uVar15 != 0));
        uVar15 = *(uint *)((uVar15 & 0xfffffffe) + 0x28)) {
      cVar6 = fn_82ABDAA0(uVar15);
      if (cVar6 != '\0') {
        for (puVar18 = *(uint **)(uVar15 + 4); puVar18 != (uint *)0x0; puVar18 = (uint *)puVar18[2])
        {
          if ((puVar18[4] != 0) && ((*puVar18 & 0xe000000) != 0)) goto LAB_82ad7040;
        }
        *(uint *)(uVar15 + 0x10) = *(uint *)(uVar15 + 0x10) & 0xfff8ffff;
        *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) & 0xff7e3fe1;
      }
LAB_82ad7040:;}
    uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 4);
  } while (((uVar25 & 1) == 0) && (uVar25 != 0));
  goto LAB_82ad7074;
}

