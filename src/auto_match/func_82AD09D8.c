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
extern unsigned int *auStack_118;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_98;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d0;
extern int fn_82AA66A8();
extern int fn_82ABE190();
extern int fn_82AC8750();
extern int fn_82AC8910();
extern int fn_82AC8E50();
extern int fn_82AC8ED0();
extern int fn_82AC8F30();
extern int fn_82ACB0F8();
extern int fn_82ACFEF0();
extern int fn_82AD01A0();
extern int fn_82AD0248();
extern int fn_82AE5A50();
extern int fn_82AE5AC8();
extern int fn_82B81D80();
extern unsigned int iStack_dc;
extern unsigned int lbl_820D7B2B;
extern unsigned int uStack_128;
extern unsigned int uStack_d8;


undefined8 fn_82AD09D8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  ulonglong *puVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar11;
  char cVar12;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint *puVar17;
  bool bVar20;
  uint uVar18;
  ulonglong *puVar19;
  ulonglong uVar21;
  int *piVar22;
  uint *puVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  undefined8 uVar27;
  int *piVar28;
  int *piVar29;
  int *piVar30;
  longlong lVar31;
  uint auStack_130 [2];
  undefined8 uStack_128;
  undefined4 auStack_120 [2];
  ulonglong auStack_118 [4];
  int aiStack_f8 [7];
  int iStack_dc;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  ulonglong auStack_c8 [5];
  int aiStack_a0 [2];
  ulonglong auStack_98 [19];
  
  uVar1 = *(uint *)(param_1 + 0x74);
  uVar2 = *(uint *)(param_1 + 4);
  uVar27 = 0;
  uVar6 = uVar1 + 0x40 >> 6;
  do {
    if (((uVar2 & 1) != 0) || (uVar2 == 0)) {
      return uVar27;
    }
    for (uVar11 = *(uint *)(uVar2 + 0x1c); ((uVar11 & 1) == 0 && (uVar11 != 0));
        uVar11 = *(uint *)((uVar11 & 0xfffffffe) + 0x28)) {
      *(uint *)(uVar11 + 0x14) = *(uint *)(uVar11 + 0x14) & 0xbfffffff;
    }
    fn_82AC8E50(auStack_120,param_1);
    if (*(int *)(uVar2 + 0x58) != 0) {
      uVar11 = fn_82AC8910(*(int *)(uVar2 + 0x58),0,uVar6);
      while (uVar11 <= uVar1) {
        iVar25 = *(int *)(uVar11 * 4 + *(int *)(param_1 + 0x2c4));
        for (puVar3 = *(uint **)(iVar25 + 4); puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[2]) {
          if ((puVar3[4] != 0) && ((*puVar3 & 0xe000000) != 0)) {
            fn_82AC8ED0(auStack_120,
                            ((ulonglong)(*puVar3 >> 0xc) & 0x1fe0 |
                            (ulonglong)*(uint *)(iVar25 + 8) & 0x1e) >> 1);
            break;
          }
        }
        if (uVar11 == uVar1) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = fn_82AC8910(*(undefined4 *)(uVar2 + 0x58),uVar11 + 1,uVar6);
        }
      }
    }
    iVar25 = iStack_dc;
    if ((*(int *)(uVar2 + 0x60) != 0) && (iVar25 = *(int *)(uVar2 + 0x60), iStack_dc != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(auStack_120[0],0x12c0);
    }
    iStack_dc = iVar25;
    uVar21 = (ulonglong)*(uint *)(param_1 + 0x318);
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    auStack_98[2] = 0;
    auStack_98[3] = 0;
    if (uVar21 == 0) {
      uVar21 = 0x20;
    }
    aiStack_a0[0] = param_1;
    if (uVar21 < 0x40) {
      fn_82AE5AC8(aiStack_a0,uVar21,0x40 - uVar21);
    }
    if ((*(uint *)(uVar2 + 0x1c) & 1) == 0) {
      uVar11 = *(uint *)(uVar2 + 0x18);
LAB_82ad11b4:
      uVar11 = uVar11 & 0xfffffffe;
      piVar28 = (int *)(uVar11 - 0x28);
      if (piVar28 != (int *)0x0) {
        uVar26 = *(uint *)(uVar11 - 0x20);
        uVar21 = 0;
        if ((uVar26 >> 5 & 1) == 0) {
          if ((uVar26 & 0x3f80) != 0x3c00) {
            for (puVar3 = *(uint **)(uVar11 - 0x24); puVar3 != (uint *)0x0;
                puVar3 = (uint *)puVar3[2]) {
              if ((puVar3[4] != 0) && ((*puVar3 & 0xe000000) != 0)) {
                uVar10 = (ulonglong)(*puVar3 >> 0xc) & 0x1fe0;
                uVar21 = (uVar10 | (ulonglong)uVar26 & 0x1e) >> 1;
                fn_82AC8F30(auStack_120,uVar21);
                if ((*(uint *)(uVar11 - 0x14) & 0x40000000) != 0) {
                  uVar13 = ((ulonglong)uVar26 & 0x1e) >> 1;
                  piVar22 = piVar28;
                  goto LAB_82ad0c78;
                }
                break;
              }
            }
          }
        }
        else {
          for (puVar3 = *(uint **)(uVar11 - 0x24);
              (puVar3 != (uint *)0x0 && ((puVar3[4] == 0 || ((*puVar3 & 0xe000000) == 0))));
              puVar3 = (uint *)puVar3[2]) {
          }
          *(uint *)(uVar11 - 0x20) = *puVar3 >> 0xc & 0x1e | uVar26 & 0xffffffe1;
        }
        goto LAB_82ad0ca4;
      }
    }
LAB_82ad10e0:
    uVar2 = *(uint *)((uVar2 & 0xfffffffe) + 4);
  } while( true );
LAB_82ad0c78:
  if ((piVar22[9] & 1U) == 0) {
    uVar26 = piVar22[9] & 0xfffffffe;
    piVar22 = (int *)(uVar26 - 0x28);
    if (piVar22 == (int *)0x0) goto LAB_82ad0c90;
    if ((*(uint *)(uVar26 - 0x14) & 0x40000000) != 0) {
      for (puVar3 = *(uint **)(uVar26 - 0x24);
          (puVar3 != (uint *)0x0 && ((*puVar3 & 0xe000000) == 0)); puVar3 = (uint *)puVar3[2]) {
      }
      if (((ulonglong)(*puVar3 >> 0xc) & 0x1fe0) >> 5 == uVar10 >> 5) {
        uVar13 = uVar13 & ~(((ulonglong)*(uint *)(uVar26 - 0x20) & 0x1e) >> 1);
      }
    }
    goto LAB_82ad0c78;
  }
LAB_82ad0c90:
  if (uVar13 != 0) {
    fn_82AC8F30(aiStack_a0,uVar10 >> 1 | uVar13);
  }
LAB_82ad0ca4:
  if ((*(uint *)(uVar11 - 0x20) >> 6 & 1) == 0) {
    uVar26 = *(uint *)(uVar11 - 0x20) >> 7 & 0x7f;
    if ((uVar26 < 0x20) || (bVar20 = true, 0x52 < uVar26)) {
      bVar20 = false;
    }
    if (!bVar20) goto LAB_82ad0cf8;
  }
  piVar22 = aiStack_f8;
  lVar31 = 9;
  do {
    if (piVar28 == (int *)*piVar22) {
      *piVar22 = 0;
    }
    piVar22 = piVar22 + 1;
    lVar31 = lVar31 + -1;
  } while (lVar31 != 0);
LAB_82ad0cf8:
  for (puVar3 = (uint *)*piVar28; puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[1]) {
    if (((*puVar3 & 0xe000000) != 0) && ((*(uint *)(puVar3[3] + 8) >> 0x17 & 1) != 0)) {
      fn_82AC8ED0(auStack_120,*puVar3 >> 0xd & 0xfff);
    }
  }
  for (puVar3 = (uint *)*piVar28; puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[1]) {
    uVar26 = *puVar3;
    uVar8 = uVar26 >> 0x1e & 1;
    if ((uVar8 != 0) || (bVar20 = false, (uVar26 & 0xe000000) != 0)) {
      bVar20 = true;
    }
    if (bVar20) {
      piVar22 = (int *)puVar3[3];
      if ((uVar8 == 0) || (bVar20 = true, (uVar26 & 0xe000000) != 0)) {
        bVar20 = false;
      }
      if (bVar20) {
        uVar26 = uVar26 >> 0xb & 0x3ffc;
        piVar30 = *(int **)((int)aiStack_f8 + uVar26);
        if (piVar30 == (int *)0x0) {
          *(int **)((int)aiStack_f8 + uVar26) = piVar22;
        }
        else if (piVar30 != piVar22) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(auStack_120[0],0x12c0);
        }
      }
      else if ((~(uVar26 >> 0x1e) & 1) == 0) {
        if (((piVar22[2] & 0x3f80U) != 0x3c00) && (cVar12 = fn_82ABE190(puVar3), cVar12 != '\0')) {
          uVar9 = fn_82AC8750(puVar3);
          fn_82AC8ED0(auStack_120,uVar9);
        }
      }
      else {
        puVar14 = &uStack_d8;
        puVar16 = &uStack_128;
        lVar31 = 5;
        do {
          puVar16 = puVar16 + 1;
          puVar14 = puVar14 + 1;
          *puVar14 = *puVar16;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        piVar30 = piVar28;
        piVar29 = piVar22;
        if ((piVar22[2] & 0x3f80U) == 0x3700) {
          for (puVar23 = (uint *)*piVar22; puVar23 != (uint *)0x0; puVar23 = (uint *)puVar23[1]) {
            if ((*puVar23 & 0xe000000) != 0) {
              piVar4 = (int *)puVar23[3];
              if ((piVar4[2] & 0x3f80U) == 0x3800) {
                piVar29 = (int *)(-(uint)((*(uint *)(uVar2 + 0x14) & 1) == 0) &
                                 *(uint *)(uVar2 + 0x14));
                break;
              }
              if ((piVar4 != piVar29) && (cVar12 = fn_82ACB0F8(piVar4,piVar29), cVar12 != '\0')) {
                piVar29 = piVar4;
              }
            }
          }
        }
        while( true ) {
          if (((piVar30[9] & 1U) != 0) ||
             (piVar30 = (int *)((piVar30[9] & 0xfffffffeU) - 0x28), piVar30 == (int *)0x0)) {
            if ((*(uint *)(uVar2 + 0x14) & 1) == 0) {
              piVar30 = (int *)((*(uint *)(uVar2 + 0x10) & 0xfffffffe) - 0x28);
            }
            else {
              piVar30 = (int *)0x0;
            }
          }
          if (piVar30 == piVar29) break;
          if (((uint)piVar30[2] >> 0x17 & 1) != 0) {
            puVar23 = (uint *)piVar30[1];
            for (puVar17 = puVar23; puVar17 != (uint *)0x0; puVar17 = (uint *)puVar17[2]) {
              if ((*puVar17 & 0xe000000) != 0) {
                bVar20 = true;
                if ((*puVar17 >> 0x1e & 1) != 0) goto LAB_82ad0f28;
                break;
              }
            }
            bVar20 = false;
LAB_82ad0f28:
            if (bVar20) {
              for (; (puVar23 != (uint *)0x0 && ((*puVar23 & 0xe000000) == 0));
                  puVar23 = (uint *)puVar23[2]) {
              }
              fn_82AC8ED0(auStack_d0,
                              ((ulonglong)(*puVar23 >> 0xc) & 0x1fe0 |
                              (ulonglong)(uint)piVar30[2] & 0x1e) >> 1);
            }
          }
          for (puVar23 = (uint *)*piVar30; puVar23 != (uint *)0x0; puVar23 = (uint *)puVar23[1]) {
            if (((*puVar23 & 0xe000000) != 0) && ((*(uint *)(puVar23[3] + 8) >> 0x17 & 1) != 0)) {
              fn_82AC8ED0(auStack_d0,*puVar23 >> 0xd & 0xfff);
            }
          }
        }
        bVar20 = false;
        if ((*(uint *)(uVar11 - 0x20) & 0x3f80) != 0x3700) {
          uVar26 = piVar22[2];
          if ((uVar26 & 0x3f80) == 0x3700) {
LAB_82ad1014:
            bVar7 = false;
          }
          else {
            uVar15 = 0;
            uVar24 = 0;
            uVar8 = *puVar3 >> 0x19 & 7;
            if (uVar8 != 0) {
              uVar18 = 0;
              do {
                uVar24 = uVar24 + 1;
                uVar15 = 1 << ((*puVar3 >> 5 & 0xff) >> (uVar18 & 0x3f) & 3) | uVar15;
                uVar18 = uVar18 + 2;
              } while (uVar24 < uVar8);
            }
            bVar7 = true;
            if (uVar15 == (uVar26 >> 1 & 0xf)) goto LAB_82ad1014;
          }
          if (bVar7) {
            piVar22[5] = piVar22[5] | 0x40000000;
            uVar10 = fn_82AD0248(param_1,auStack_d0,piVar28,piVar22,auStack_130);
            bVar20 = true;
          }
          else {
            iVar25 = 0;
            lVar31 = 4;
            do {
              puVar19 = (ulonglong *)((int)auStack_c8 + iVar25);
              puVar5 = (ulonglong *)((int)auStack_98 + iVar25);
              iVar25 = iVar25 + 8;
              *puVar19 = *puVar5 | *puVar19;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            uVar10 = fn_82AD01A0(auStack_d0,uVar26 >> 0xe & 7,0);
            auStack_130[0] = (uint)(byte)(&lbl_820D7B2B)[(uint)uVar10 & 0xf];
          }
          if ((int)uVar10 != -1) {
            uVar26 = *(uint *)(param_1 + 0x31c);
            if ((uVar26 == 0) && (uVar26 = *(uint *)(param_1 + 0x318), uVar26 == 0)) {
              uVar26 = 0x20;
            }
            if ((uVar10 & 0xffffffff) >> 4 < (ulonglong)uVar26) goto LAB_82ad1164;
          }
          uVar27 = 1;
          *(uint *)(uVar2 + 0x44) = *(uint *)(uVar2 + 0x44) | 0x20000000;
          goto LAB_82ad10e0;
        }
        uVar10 = uVar21 >> 2 & 0x3c;
        uVar10 = fn_82ACFEF0(param_1,uVar21,
                               ((2L << ((uVar21 >> 2 & 0x3ffffffc) + 3 & 0x3f)) - 1U &
                                *(ulonglong *)((int)auStack_118 + ((uint)uVar21 >> 5 & 0x7fffff8)) &
                               -1L << uVar10) >> uVar10 & 0xffffffff,piVar28,piVar22,auStack_130);
LAB_82ad1164:
        fn_82B81D80(piVar22,uVar10,auStack_130[0]);
        if (bVar20) {
          fn_82AC8ED0(aiStack_a0,uVar10);
          uVar10 = fn_82AC8750(puVar3);
        }
        fn_82AE5A50(auStack_120,uVar10);
      }
    }
  }
  uVar11 = *(uint *)(uVar11 - 4);
  if ((uVar11 & 1) != 0) goto LAB_82ad10e0;
  goto LAB_82ad11b4;
}

