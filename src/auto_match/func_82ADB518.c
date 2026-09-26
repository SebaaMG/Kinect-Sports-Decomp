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
extern unsigned int *auStack_dc;
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABDBE8();
extern int fn_82ABDD90();
extern int fn_82ABE0E8();
extern int fn_82ABE250();
extern int fn_82ABE2E0();
extern int fn_82AC65F0();
extern int fn_82AD1328();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82AD1B28();
extern int fn_82AD20C0();
extern int fn_82AD21B8();
extern int fn_82AD2CF0();
extern int fn_82AD3088();
extern int fn_82AD3368();
extern int fn_82AD3550();
extern int fn_82AD35E8();
extern int fn_82AD5998();
extern int fn_82AD5A48();
extern int fn_82AD5BF0();
extern int fn_82AD5F68();
extern int fn_82AD6008();
extern int fn_82AD6090();
extern int fn_82AD7330();
extern int fn_82AD7E28();
extern int fn_82ADD120();
extern int fn_82ADD198();
extern int fn_82ADD810();
extern int fn_82B0FC78();
extern int fn_82B10120();
extern int fn_82B16698();
extern int fn_82B41D68();
extern int fn_82B42C70();
extern int fn_82B44B88();
extern int fn_82B4B048();
extern int fn_82B84350();
extern int fn_82B894C8();
extern int fn_82B8AC10();
extern int fn_82B8AE98();
extern int fn_82B8F1B0();
extern int fn_82B8F328();
extern int fn_82B8F3D8();
extern int fn_82F68CC0();
extern unsigned int iStack0000001c;
extern unsigned int iStack_104;
extern unsigned int iStack_108;
extern unsigned int iStack_10c;
extern unsigned int iStack_110;
extern unsigned int iStack_114;
extern unsigned int iStack_124;
extern unsigned int iStack_128;
extern unsigned int iStack_134;
extern unsigned int iStack_148;
extern unsigned int iStack_14c;
extern unsigned int iStack_c8;
extern unsigned int iStack_f8;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_130;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_cc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_fc;


undefined1 fn_82ADB518(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar4;
  char cVar17;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 uVar3;
  uint *puVar10;
  undefined2 uVar16;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  uint uVar21;
  uint **ppuVar22;
  int *piVar23;
  uint *puVar24;
  uint uVar25;
  uint *puVar26;
  ulonglong uVar27;
  int *piVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint **ppuVar31;
  undefined4 *puVar32;
  int iVar34;
  ulonglong uVar33;
  int *piVar35;
  uint uVar36;
  ulonglong uVar37;
  int iStack0000001c;
  byte bStack_150;
  byte bStack_14f;
  char acStack_14e [2];
  int iStack_14c;
  int iStack_148;
  undefined1 uStack_144;
  char cStack_143;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  int iStack_134;
  uint uStack_130;
  uint *puStack_12c;
  int iStack_128;
  int iStack_124;
  uint *puStack_120;
  uint uStack_11c;
  uint uStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  uint *puStack_100;
  uint uStack_fc;
  int iStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined4 auStack_dc [4];
  uint uStack_cc;
  int iStack_c8;
  int aiStack_c0 [48];
  
  cStack_143 = '\0';
  uStack_144 = 0;
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    return 0;
  }
  uVar15 = *(uint *)(param_2 + 0x20) & 0xfffffffe;
  iVar6 = uVar15 - 0x28;
  if (iVar6 == 0) {
    return 0;
  }
  uVar15 = *(uint *)(uVar15 - 0x20);
  uVar13 = uVar15 >> 7 & 0x7f;
  if (((((uVar13 == 0x56) || (uVar13 == 0x57)) || (uVar13 == 0x59)) ||
      ((uVar13 == 0x5a || (uVar13 == 0x54)))) || (bVar20 = false, uVar13 == 0x55)) {
    bVar20 = true;
  }
  if (!bVar20) {
    return 0;
  }
  if ((uVar15 >> 0x11 & 1) == 0) {
    return 0;
  }
  iVar34 = 1;
  iStack_104 = 1;
  iStack0000001c = param_2;
  iStack_134 = iVar6;
  iVar4 = fn_82AC65F0(iVar6);
  iVar4 = *(int *)(iVar4 + 0xc);
  iVar11 = 0;
  uVar15 = *(uint *)(iVar4 + 8) >> 7 & 0x7f;
  if ((uVar15 < 0x15) || (bVar20 = true, 0x18 < uVar15)) {
    bVar20 = false;
  }
  if (bVar20) {
    iVar11 = *(int *)(iVar4 + 0x30);
    for (puVar24 = *(uint **)(iVar4 + 4); iStack_104 = iVar34, puVar24 != (uint *)0x0;
        puVar24 = (uint *)puVar24[2]) {
      if ((puVar24[4] != 0) && ((*puVar24 & 0xe000000) != 0)) {
        for (iVar7 = *(int *)(puVar24[4] + 4); iVar7 != 0; iVar7 = *(int *)(iVar7 + 8)) {
          if ((*(int *)(iVar7 + 0x10) != 0) &&
             ((uVar15 = *(uint *)(*(int *)(iVar7 + 0x10) + 8) >> 7 & 0x7f, uVar15 == 0x40 ||
              (uVar15 == 0x3f)))) {
            iVar34 = iVar34 + 1;
          }
        }
      }
    }
  }
  else if ((*(uint *)(iVar4 + 8) & 0x380000) != 0) {
    iVar11 = *(int *)(iVar4 + 0x2c);
  }
  puStack_12c = (uint *)0x0;
  uStack_13c = 0;
  puStack_120 = (uint *)0x0;
  iStack_124 = iVar4;
  cVar17 = fn_82AD5BF0(param_1,param_2,iVar6,&iStack_110,acStack_14e,&uStack_140,&iStack_14c,
                         &iStack_114);
  iVar7 = iStack_110;
  iVar34 = iStack_14c;
  if (cVar17 == '\0') {
    if (iStack_110 != 3) {
      if (iStack_110 != 4) goto LAB_82adcf6c;
      goto LAB_82adb6c8;
    }
LAB_82adb6e0:
    cVar17 = fn_82AD2CF0(param_1,iStack_14c,uStack_140,iVar6,iVar4,&bStack_150);
    iVar6 = iStack_134;
    if (cVar17 != '\0') {
      if (acStack_14e[0] != '\0') {
        fn_82AD21B8(param_1,iStack_134);
      }
      uVar15 = *(uint *)(iVar6 + 8);
      iVar4 = fn_82ABDD90(param_1,uVar15 >> 7 & 0x7f,uVar15 >> 0x13 & 7,uVar15 >> 0xe & 7);
      puVar24 = (uint *)(iVar4 + iVar6 + -0x10);
      if (*puVar24 != uStack_140) {
        puVar24[3] = puVar24[3] & 0xfffffffd | ~puVar24[3] & 2;
      }
      *puVar24 = uStack_140;
      bVar20 = true;
      *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) & 0xfffbffff;
      bVar1 = bStack_150;
      uVar15 = uStack_140;
      iVar6 = iStack0000001c;
LAB_82adce30:
      fn_82AD3088(param_1,iVar6,iStack_14c,uVar15,bVar20,bVar1);
      *(uint *)(iVar6 + 0x30) = *(uint *)(iVar6 + 0x30) | 0xc000000;
    }
  }
  else {
    iVar5 = fn_82ABE0E8(iVar6,param_1);
    if ((iVar5 == 1) || ((2 < iVar5 && ((iVar5 < 5 || ((7 < iVar5 && (iVar5 < 10)))))))) {
LAB_82adb6c8:
      iVar6 = iStack_134;
      iVar4 = iStack_124;
      uVar15 = uStack_140;
      if (iStack_110 == 3) goto LAB_82adb6e0;
LAB_82adcdb0:
      cVar17 = fn_82AD2CF0(param_1,uVar15,0,iVar6,iVar4,&bStack_150);
      if ((cVar17 == '\0') ||
         (cVar17 = fn_82AD2CF0(param_1,iStack_14c,0,iStack_134,iStack_124,&bStack_14f),
         iVar6 = iStack0000001c, cVar17 == '\0')) goto LAB_82adce4c;
      fn_82AD3088(param_1,iStack0000001c,uStack_140,0,acStack_14e[0],bStack_150);
      uVar15 = 0;
      bVar20 = acStack_14e[0] == '\0';
      bVar1 = bStack_14f;
      goto LAB_82adce30;
    }
    if ((iVar11 != 0) &&
       ((iVar11 = *(int *)(iVar11 + 0xc), iVar5 != 2 && ((*(uint *)(iVar11 + 8) & 0x3f80) == 0x3e00)
        ))) {
      uVar15 = *(uint *)(iVar11 + 8);
      iVar5 = fn_82ABDD90(param_1,uVar15 >> 7 & 0x7f,uVar15 >> 0x13 & 7,uVar15 >> 0xe & 7);
      if ((*(uint *)((*(uint *)(iVar5 + iVar11 + -8) & 0x7fff) * 0x28 + *(int *)(param_1 + 0xc) + 4)
          & 0x70) == 0) goto LAB_82adb6c8;
    }
    cVar17 = fn_82AD3368(param_1,iVar34);
    uVar15 = uStack_140;
    if (cVar17 == '\0') goto LAB_82adb6c8;
    if ((iVar7 == 4) && (cVar17 = fn_82AD3368(param_1,uStack_140), cVar17 == '\0'))
    goto LAB_82adcdb0;
    uVar13 = uStack_138;
    iStack_148 = 0;
    cVar17 = fn_82AD7330(param_1,param_2,uStack_138,1,&iStack_148);
    if ((cVar17 == '\0') ||
       ((cVar17 = fn_82AD7330(param_1,param_2,iVar34,0,&iStack_148), cVar17 == '\0' ||
        (cVar17 = fn_82AD7330(param_1,iVar34,uVar13,1,&iStack_148), cVar17 == '\0'))))
    goto LAB_82adb6c8;
    if ((iVar7 == 4) &&
       (((cVar17 = fn_82AD7330(param_1,param_2,uVar15,0,&iStack_148), cVar17 == '\0' ||
         (cVar17 = fn_82AD7330(param_1,uVar15,uVar13,1,&iStack_148), cVar17 == '\0')) ||
        (cVar17 = fn_82AD7330(param_1,uVar15,iVar34,0,&iStack_148), cVar17 == '\0'))))
    goto LAB_82adcdb0;
    iStack_108 = 0;
    iStack_10c = 0;
    if (iVar7 == 4) {
      for (uVar15 = *(uint *)(uVar15 + 0x1c); ((uVar15 & 1) == 0 && (uVar15 != 0));
          uVar15 = *(uint *)((uVar15 & 0xfffffffe) + 0x28)) {
        iStack_108 = iStack_108 + 1;
      }
    }
    for (uVar15 = *(uint *)(iVar34 + 0x1c); ((uVar15 & 1) == 0 && (uVar15 != 0));
        uVar15 = *(uint *)((uVar15 & 0xfffffffe) + 0x28)) {
      iStack_10c = iStack_10c + 1;
    }
    for (uVar15 = *(uint *)(uVar13 + 0x14); ((uVar15 & 1) == 0 && (uVar15 != 0));
        uVar15 = *(uint *)((uVar15 & 0xfffffffe) + 0x28)) {
      *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) & 0xfbffffff;
    }
    puStack_12c = (uint *)fn_82ABE250(param_1,8,8);
    iStack_128 = 0;
    puStack_12c[1] = (uint)puStack_12c | 1;
    *puStack_12c = (uint)(puStack_12c + 1) | 1;
    uVar13 = *(uint *)(uVar13 + 0x14);
    uVar15 = uStack_130;
    while ((uStack_130 = uVar13, (uStack_130 & 1) == 0 && (uVar15 = uStack_130, uStack_130 != 0))) {
      uVar15 = uStack_13c;
      if (((*(uint *)(uStack_130 + 8) & 0x3f80) == 0x3800) &&
         ((((*(uint *)(uStack_130 + 8) >> 0x1a & 1) == 0 &&
           (iVar6 = fn_82B41D68(param_1,uStack_130,iStack_114,0,0), uVar15 = uStack_13c,
           iVar6 != 0)) &&
          (iVar4 = fn_82B41D68(param_1,uStack_130,iStack_14c,0,0), uVar15 = uStack_13c,
          iVar4 != 0)))) {
        uVar13 = -(uint)(iStack_114 == *(int *)(*(uint *)(iVar6 + 0xc) + 0x1c)) &
                 *(uint *)(iVar6 + 0xc);
        uVar25 = -(uint)(iStack_14c == *(int *)(*(uint *)(iVar4 + 0xc) + 0x1c)) &
                 *(uint *)(iVar4 + 0xc);
        if ((uVar13 != 0) || (uVar25 != 0)) {
          uVar15 = 0;
          bStack_14f = 0;
          if ((uVar25 == 0) ||
             ((iVar6 = iStack_114, iVar4 = iStack_14c, uStack_118 = uVar25, uVar13 != 0 &&
              ((*(uint *)(uVar25 + 8) & 0x1c000) < (*(uint *)(uVar13 + 8) & 0x1c000))))) {
            bStack_14f = 1;
            iVar6 = iStack_14c;
            iVar4 = iStack_114;
            uStack_118 = uVar13;
          }
          uVar27 = 0;
          uStack_11c = 0;
          bStack_150 = 0;
          for (puVar24 = *(uint **)(uStack_130 + 4); puVar24 != (uint *)0x0;
              puVar24 = (uint *)puVar24[2]) {
            uVar13 = puVar24[4];
            if (((uVar13 != 0) && ((*(uint *)(uVar13 + 8) & 0x3f80) == 0x3700)) &&
               ((*puVar24 & 0xe000000) != 0)) goto LAB_82adbb78;
          }
          uVar13 = 0;
LAB_82adbb78:
          piVar28 = (int *)(uStack_118 + 4);
          iVar11 = 0;
          iStack_c8 = iStack_148;
          uStack_cc = uStack_13c;
          uVar25 = uStack_138;
          while (iVar34 = *piVar28, iVar34 != 0) {
            piVar23 = *(int **)(iVar34 + 0x10);
            if (piVar23 != (int *)0x0) {
              if (piVar23[7] == uVar25) {
                if (((uint)piVar23[2] >> 0x1a & 1) == 0) {
                  if ((*piVar23 == 0) || (bVar20 = true, *(int *)(*piVar23 + 4) == 0)) {
                    bVar20 = false;
                  }
                  if (bVar20) {
                    uVar33 = 0;
                    if ((uVar27 & 0xffffffff) != 0) {
                      piVar35 = aiStack_c0;
                      do {
                        uVar16 = *(undefined2 *)(*piVar35 + 0x12);
                        iVar7 = fn_82ADD198(param_1,*(undefined2 *)((int)piVar23 + 0x12));
                        iVar5 = fn_82ADD198(param_1,uVar16);
                        if (iVar5 == iVar7) goto LAB_82adb6c8;
                        uVar33 = uVar33 + 1;
                        piVar35 = piVar35 + 1;
                      } while ((uVar33 & 0xffffffff) < (uVar27 & 0xffffffff));
                    }
                    puVar24 = (uint *)fn_82B41D68(param_1,piVar23,iVar4,0,0);
                    puVar8 = (uint *)fn_82B41D68(param_1,piVar23,iVar6,0,0);
                    if (puVar8 != (uint *)0x0) {
                      for (puVar10 = (uint *)piVar23[1]; puVar10 != (uint *)0x0;
                          puVar10 = (uint *)puVar10[2]) {
                        uVar12 = puVar10[4];
                        if (((uVar12 != 0) && ((*(uint *)(uVar12 + 8) & 0x3f80) == 0x3700)) &&
                           ((*puVar10 & 0xe000000) != 0)) goto LAB_82adbcc8;
                      }
                      uVar12 = 0;
LAB_82adbcc8:
                      if (uVar12 == uVar13) {
                        if (uVar15 == 8) {
                    /* WARNING: Subroutine does not return */
                          fn_82AA66A8(param_1,0x12c0);
                        }
                        uVar12 = puVar8[3];
                        iVar7 = *(int *)(uVar12 + 0x1c);
                        if (iVar7 != iVar6) {
                          uVar36 = *puVar8 >> 5 & 3;
                          uVar9 = fn_82B10120(param_1,iVar6,uVar12,uVar36,*puVar8 & 1,1);
                          if ((*(uint *)(((int)(((ulonglong)*(uint *)(iVar7 + 0x30) & 0x7ffff) >> 5)
                                         + 1) * 4 + *(int *)(uVar25 + 0x28)) &
                              1 << (*(uint *)(iVar7 + 0x30) & 0x1f)) == 0) {
                            for (iVar5 = *(int *)(uVar25 + 8); iVar5 != 0;
                                iVar5 = *(int *)(iVar5 + 0xc)) {
                              iVar2 = *(int *)(iVar5 + 4);
                              if ((iVar2 != iVar7) &&
                                 (puVar10 = (uint *)fn_82B41D68(param_1,piVar23,iVar2,0,1),
                                 puVar8 == puVar10)) {
                                if (iVar2 != 0) {
                                  uVar3 = fn_82AD1918(param_1,uVar9,0,*puVar8 & 0x1e);
                                  puVar8 = (uint *)fn_82AD1978(piVar23,uVar3);
                                  goto LAB_82adbea8;
                                }
                                break;
                              }
                            }
                            puVar26 = (uint *)(puVar8[3] + 4);
                            for (puVar10 = (uint *)*puVar26; puVar10 != puVar8;
                                puVar10 = (uint *)puVar10[2]) {
                              puVar26 = puVar10 + 2;
                            }
                            *puVar26 = puVar8[2];
                            puVar8[2] = *(uint *)(uVar9 + 4);
                            *(uint **)(uVar9 + 4) = puVar8;
                            puVar8[3] = uVar9;
                            *puVar8 = *puVar8 & 0xfffffffe;
                          }
                          else {
                            uVar3 = fn_82AD18C0(param_1,uVar9,0);
                            puVar8 = (uint *)fn_82AD1978(piVar23,uVar3);
                            if (puStack_120 == (uint *)0x0) {
                              puStack_120 = (uint *)fn_82ABE250(param_1,8,0x1b);
                              puStack_120[1] = (uint)puStack_120 | 1;
                              *puStack_120 = (uint)(puStack_120 + 1) | 1;
                            }
                            if ((puStack_120[1] & 1) == 0) {
                              uVar25 = *puStack_120 & 0xfffffffe;
                              iVar7 = uVar25 - 4;
                              if ((iVar7 == 0) ||
                                 (*(uint *)(uVar25 + 8) < *(int *)(uVar25 + 4) + 1U))
                              goto LAB_82adbdc8;
                            }
                            else {
LAB_82adbdc8:
                              iVar7 = fn_82AD6090(puStack_120,1);
                            }
                            iVar5 = *(int *)(iVar7 + 8);
                            *(int *)(iVar7 + 8) = iVar5 + 1;
                            *(uint **)((iVar5 + 4) * 4 + iVar7) = puVar8;
                          }
LAB_82adbea8:
                          if ((*(uint *)(uVar12 + 0x10) & 0x70000) == 0) {
                            uVar16 = fn_82ADD120(uVar12);
                            *(undefined2 *)(uVar9 + 0x12) = uVar16;
                          }
                          else {
                            *(short *)(uVar9 + 0x12) =
                                 (short)*(uint *)(uVar12 + 0x10) + (short)uVar36;
                          }
                          puVar10 = *(uint **)(param_1 + 0x294);
                          if ((puVar10[1] & 1) == 0) {
                            uVar25 = *puVar10 & 0xfffffffe;
                            iVar7 = uVar25 - 4;
                            if ((iVar7 == 0) || (*(uint *)(uVar25 + 8) < *(int *)(uVar25 + 4) + 1U))
                            goto LAB_82adbf00;
                          }
                          else {
LAB_82adbf00:
                            iVar7 = fn_82AD6090(puVar10,1);
                          }
                          iVar5 = *(int *)(iVar7 + 8);
                          *(int *)(iVar7 + 8) = iVar5 + 1;
                          *(uint *)((iVar5 + 4) * 4 + iVar7) = uVar9;
                          uVar25 = uStack_138;
                        }
                        uVar12 = *puVar24;
                        uVar36 = piVar23[2];
                        *(uint **)((int)&puStack_100 + iVar11) = puVar8;
                        *(int **)((int)aiStack_c0 + iVar11) = piVar23;
                        uStack_11c = uStack_11c & ~(3 << (uVar15 & 0x3f)) |
                                     (uVar12 >> 5 & 3) << (uVar15 & 0x3f);
                        uVar27 = uVar27 + 1;
                        piVar23[2] = uVar36 | 0x4000000;
                        uVar15 = uVar15 + 2;
                        iVar11 = iVar11 + 4;
                      }
                    }
                  }
                }
              }
              else {
                bStack_150 = 1;
              }
            }
            if (*piVar28 == iVar34) {
              piVar28 = (int *)(iVar34 + 8);
            }
          }
          uVar33 = 0;
          if ((uVar27 & 0xffffffff) != 0) {
            ppuVar31 = &puStack_100;
            do {
              uVar15 = (*ppuVar31)[3];
              if ((*(uint *)(uVar15 + 8) & 0x3f80) == 0x3800) {
                for (puVar24 = *(uint **)(uVar15 + 4); puVar24 != (uint *)0x0;
                    puVar24 = (uint *)puVar24[2]) {
                  uVar13 = puVar24[4];
                  if (((uVar13 != 0) && ((*(uint *)(uVar13 + 8) & 0x3f80) == 0x3700)) &&
                     ((*puVar24 & 0xe000000) != 0)) goto LAB_82adbff0;
                }
                uVar13 = 0;
LAB_82adbff0:
                if (uVar13 == 0) {
                  cVar17 = fn_82AD5998(param_1,uVar15,iStack0000001c,uStack_140,iStack_14c,
                                         uStack_138);
                  bVar20 = cVar17 != '\0';
                  iVar4 = fn_82ADD810(param_1,uVar15);
                  uVar13 = *(uint *)(iVar6 + 0x14);
                  uVar29 = 1;
                  if (((uVar13 & 1) == 0) && (uVar13 != 0)) {
                    do {
                      if (uVar13 != uVar15) {
                        if ((*(uint *)(uVar13 + 8) & 0x3f80) != 0x3800) goto LAB_82adb6c8;
                        iVar11 = fn_82ADD810(param_1,uVar13);
                        if (iVar11 == iVar4) {
                          cVar17 = fn_82AD5998(param_1,uVar13,iStack0000001c,uStack_140,iStack_14c
                                                 ,uStack_138);
                          if (cVar17 != '\0') {
                            bVar20 = true;
                          }
                          uVar29 = uVar29 + 1;
                        }
                      }
                      uVar13 = *(uint *)((uVar13 & 0xfffffffe) + 0x28);
                    } while (((uVar13 & 1) == 0) && (uVar13 != 0));
                    if (4 < (uVar29 & 0xffffffff)) goto LAB_82adb6c8;
                  }
                  uVar13 = *(uint *)(iVar6 + 0x14);
                  if (((uVar13 & 1) == 0) && (uVar13 != 0)) {
                    piVar28 = aiStack_c0 + 3;
                    do {
                      iVar11 = fn_82ADD810(param_1,uVar13);
                      if (iVar11 == iVar4) {
                        iVar11 = fn_82AD18C0(param_1,uVar13,0);
                        piVar28 = piVar28 + 1;
                        *piVar28 = iVar11;
                      }
                      uVar13 = *(uint *)((uVar13 & 0xfffffffe) + 0x28);
                    } while (((uVar13 & 1) == 0) && (uVar13 != 0));
                  }
                  uVar25 = 0;
                  if (bVar20) {
                    if ((uVar29 & 0xffffffff) != 0) {
                      puVar24 = (uint *)(iVar6 + 0x1c);
                      piVar28 = aiStack_c0 + 3;
                      uVar30 = uVar29;
                      do {
                        iVar11 = piVar28[1];
                        uVar12 = fn_82AD35E8(param_1,iVar6,0,iVar11,iVar11);
                        uVar13 = uVar12 & 0xfffffffe;
                        *(uint *)(uVar13 + 0x28) = *puVar24;
                        *(uint *)((*puVar24 & 0xfffffffe) + 0x24) = uVar13 + 0x28;
                        *(uint *)(uVar13 + 0x24) = (uint)puVar24 | 1;
                        *puVar24 = uVar13;
                        if (uVar25 == 0) {
                          uVar25 = uVar12;
                        }
                        uVar13 = *(uint *)(iVar11 + 0xc);
                        *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) | 0x800000;
                        uVar16 = fn_82ADD120(uVar13);
                        *(undefined2 *)(uVar12 + 0x12) = uVar16;
                        puVar8 = *(uint **)(param_1 + 0x294);
                        if ((puVar8[1] & 1) == 0) {
                          uVar36 = *puVar8 & 0xfffffffe;
                          iVar11 = uVar36 - 4;
                          if ((iVar11 == 0) || (*(uint *)(uVar36 + 8) < *(int *)(uVar36 + 4) + 1U))
                          goto LAB_82adc1fc;
                        }
                        else {
LAB_82adc1fc:
                          iVar11 = fn_82AD6090(puVar8,1);
                        }
                        iVar34 = *(int *)(iVar11 + 8);
                        *(int *)(iVar11 + 8) = iVar34 + 1;
                        *(uint *)((iVar34 + 4) * 4 + iVar11) = uVar12;
                        if (uVar13 == uVar15) {
                          uVar15 = uVar12;
                        }
                        iVar11 = fn_82AD18C0(param_1,uVar12,0);
                        uVar30 = uVar30 - 1;
                        piVar28 = piVar28 + 1;
                        *piVar28 = iVar11;
                        *(uint *)(uVar12 + 0x20) = uStack_13c;
                        uStack_13c = uVar12;
                      } while (uVar30 != 0);
                    }
                    iStack_148 = iStack_148 + 1;
                  }
                  uVar13 = fn_82B84350(param_1,iVar6,0,uVar29);
                  uVar12 = uVar13 & 0xfffffffe;
                  if (uVar25 == 0) {
                    puVar24 = (uint *)(iVar6 + 0x1c);
                    *(uint *)(uVar12 + 0x28) = *puVar24;
                    *(uint *)((*puVar24 & 0xfffffffe) + 0x24) = uVar12 + 0x28;
                    *(uint *)(uVar12 + 0x24) = (uint)puVar24 | 1;
                    *puVar24 = uVar12;
                  }
                  else {
                    uVar25 = uVar25 & 0xfffffffe;
                    *(undefined4 *)(uVar12 + 0x28) = *(undefined4 *)(uVar25 + 0x28);
                    *(uint *)((*(uint *)(uVar25 + 0x28) & 0xfffffffe) + 0x24) = uVar12 + 0x28;
                    *(uint *)(uVar12 + 0x24) = uVar25 + 0x28;
                    *(uint *)(uVar25 + 0x28) = uVar12;
                  }
                  uVar25 = *(uint *)(iVar6 + 0x14);
                  if (((uVar25 & 1) == 0) && (uVar25 != 0)) {
                    puVar32 = (undefined4 *)(uVar13 + 0x28);
                    piVar28 = aiStack_c0 + 3;
                    do {
                      iVar11 = fn_82ADD810(param_1,uVar25);
                      if (iVar11 == iVar4) {
                        piVar28 = piVar28 + 1;
                        uVar14 = fn_82AD1978(uVar13,*piVar28);
                        puVar32 = puVar32 + 1;
                        *puVar32 = uVar14;
                      }
                      uVar25 = *(uint *)((uVar25 & 0xfffffffe) + 0x28);
                    } while (((uVar25 & 1) == 0) && (uVar25 != 0));
                  }
                  *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) | 0x800000;
                  uVar16 = fn_82ADD120(uVar15);
                  *(undefined2 *)(uVar13 + 0x12) = uVar16;
                  puVar24 = *(uint **)(param_1 + 0x294);
                  if ((puVar24[1] & 1) == 0) {
                    uVar25 = *puVar24 & 0xfffffffe;
                    iVar4 = uVar25 - 4;
                    if ((iVar4 == 0) || (*(uint *)(uVar25 + 8) < *(int *)(uVar25 + 4) + 1U))
                    goto LAB_82adc398;
                  }
                  else {
LAB_82adc398:
                    iVar4 = fn_82AD6090(puVar24,1);
                  }
                  iVar11 = *(int *)(iVar4 + 8);
                  *(int *)(iVar4 + 8) = iVar11 + 1;
                  *(uint *)((iVar11 + 4) * 4 + iVar4) = uVar13;
                  *(uint *)(uVar13 + 0x20) = uStack_13c;
                  uStack_13c = uVar13;
                }
                piVar28 = (int *)(uVar13 + 0x2c);
                for (uVar25 = 0; uVar25 < (*(uint *)(uVar13 + 8) >> 0x13 & 7); uVar25 = uVar25 + 1)
                {
                  if (*(uint *)(*piVar28 + 0xc) == uVar15) {
                    puVar24 = (uint *)fn_82AD18C0(param_1,uVar13);
                    *ppuVar31 = puVar24;
                    break;
                  }
                  piVar28 = piVar28 + 1;
                }
                fn_82B0FC78(param_1,uVar13);
                *(uint *)(uVar13 + 8) = *(uint *)(uVar13 + 8) | 0x1000000;
              }
              uVar33 = uVar33 + 1;
              ppuVar31 = ppuVar31 + 1;
            } while ((uVar33 & 0xffffffff) < (uVar27 & 0xffffffff));
          }
          uVar15 = uStack_118;
          puVar24 = puStack_12c;
          uVar13 = 0;
          uVar33 = 0;
          uVar29 = 0;
          if ((uVar27 & 0xffffffff) != 0) {
            ppuVar31 = &puStack_100;
            do {
              uVar30 = 0;
              uVar25 = (*ppuVar31)[3];
              if ((uVar29 & 0xffffffff) != 0) {
                ppuVar22 = &puStack_100;
                do {
                  if ((*ppuVar22)[3] == uVar25) break;
                  uVar30 = uVar30 + 1;
                  ppuVar22 = ppuVar22 + 1;
                } while ((uVar30 & 0xffffffff) < (uVar29 & 0xffffffff));
              }
              if ((uVar30 & 0xffffffff) == (uVar29 & 0xffffffff)) {
                uVar36 = 0;
                uVar12 = 0;
                uStack_f0 = uVar15;
                uStack_e8 = 0;
                uStack_e4 = 0;
                iVar6 = 0;
                uVar30 = ((ulonglong)bStack_14f & 1) << 3 | (ulonglong)uStack_e0 & 0xfffffff0;
                uStack_e0 = (uint)uVar30;
                uVar37 = uVar27;
                do {
                  if ((*(uint **)((int)&puStack_100 + iVar6))[3] == uVar25) {
                    uVar19 = (uint)((uVar30 & 0xffffffff) << 1) & 0xe;
                    uVar18 = (uint)((uVar30 & 0xffffffff) << 1) & 0xe;
                    uVar9 = uStack_11c >> (uVar12 & 0x3f) & 3;
                    uVar21 = **(uint **)((int)&puStack_100 + iVar6) >> 5 & 3;
                    uStack_e8 = uStack_e8 & ~(3 << uVar19) | uVar9 << uVar19;
                    uStack_e4 = uStack_e4 & ~(3 << uVar18) | uVar21 << uVar18;
                    uVar36 = 1 << uVar21 | uVar36;
                    *(undefined4 *)((int)auStack_dc + ((uint)((uVar30 & 0xffffffff) << 2) & 0x1c)) =
                         *(undefined4 *)((int)aiStack_c0 + iVar6);
                    uVar13 = 1 << uVar9 | uVar13;
                    uVar30 = (ulonglong)uStack_e0 & 0xfffffff8 |
                             (ulonglong)uStack_e0 + 1 & 0xffffffff00000007;
                    uStack_e0 = (uint)uVar30;
                  }
                  uVar12 = uVar12 + 2;
                  iVar6 = iVar6 + 4;
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
                uStack_ec = uVar25;
                if ((uVar30 & 7) == 1) {
                  fn_82AD1328(param_1,&uStack_f0,&uStack_e8);
                  fn_82AD1328(param_1,&uStack_ec,&uStack_e4);
                }
                if ((puVar24[1] & 1) == 0) {
                  uVar12 = *puVar24 & 0xfffffffe;
                  iVar6 = uVar12 - 4;
                  if ((iVar6 == 0) || (*(uint *)(uVar12 + 8) < *(int *)(uVar12 + 4) + 1U))
                  goto LAB_82adc5e0;
                }
                else {
LAB_82adc5e0:
                  iVar6 = fn_82AD6008(puVar24,1);
                }
                iVar4 = *(int *)(iVar6 + 8);
                *(int *)(iVar6 + 8) = iVar4 + 1;
                fn_82F68CC0(iVar4 * 0x24 + iVar6 + 0x10,&uStack_f0,0x24);
                uVar33 = uVar33 + 1;
                if (((uVar36 == (*(uint *)(uVar25 + 8) >> 1 & 0xf)) &&
                    ((*(uint *)(uVar25 + 8) & 0x3f80) == 0x180)) &&
                   (cVar17 = fn_82ABDBE8(*(undefined4 *)(uVar25 + 0x2c),
                                          *(undefined4 *)(uVar25 + 0x30)), cVar17 != '\0')) {
                  for (iVar6 = *(int *)(uVar25 + 4); iVar6 != 0; iVar6 = *(int *)(iVar6 + 8)) {
                    if ((*(int *)(iVar6 + 0x10) != 0) &&
                       (*(uint *)(*(int *)(iVar6 + 0x10) + 0x1c) != uStack_138)) goto LAB_82adc684;
                  }
                  iStack_128 = iStack_128 + 1;
                }
              }
LAB_82adc684:
              uVar29 = uVar29 + 1;
              ppuVar31 = ppuVar31 + 1;
            } while ((uVar29 & 0xffffffff) < (uVar27 & 0xffffffff));
          }
          if (((bStack_150 == 0) && (uVar13 == (*(uint *)(uVar15 + 8) >> 1 & 0xf))) &&
             (((*(uint *)(uVar15 + 8) & 0x3f80) == 0x180 &&
              (cVar17 = fn_82ABDBE8(*(undefined4 *)(uVar15 + 0x2c),*(undefined4 *)(uVar15 + 0x30)),
              cVar17 != '\0')))) {
            iStack_128 = iStack_128 + 1;
          }
          uVar13 = uStack_cc;
          uVar15 = uStack_13c;
          iVar6 = iStack_c8;
          if ((uVar33 & 0xffffffff) == (uVar27 & 0xffffffff)) {
            while (iStack_148 = iVar6, uVar15 != uVar13) {
              uVar25 = *(uint *)(uVar15 + 0x20);
              fn_82B8AC10(param_1,uVar15,0,1);
              iVar6 = iStack_148;
              uVar15 = uVar25;
            }
          }
        }
      }
      uStack_13c = uVar15;
      uVar15 = uStack_130;
      uVar13 = *(uint *)((uStack_130 & 0xfffffffe) + 0x28);
    }
    uStack_130 = uVar15;
    iStack_f8 = 0;
    uStack_fc = -(uint)((puStack_12c[1] & 1) == 0) & puStack_12c[1];
    puStack_100 = puStack_12c;
    while( true ) {
      if ((uStack_fc == 0) || (bVar20 = false, iStack_f8 == *(int *)(uStack_fc + 8))) {
        bVar20 = true;
      }
      if (bVar20) break;
      iVar6 = fn_82AD3550(&puStack_100);
      piVar28 = (int *)(iVar6 + 0x14);
      for (puVar24 = *(uint **)(*(int *)(iVar6 + 0x14) + 4); puVar24 != (uint *)0x0;
          puVar24 = (uint *)puVar24[2]) {
        uVar15 = puVar24[4];
        if (((uVar15 != 0) && ((*(uint *)(uVar15 + 8) & 0x3f80) == 0x3700)) &&
           ((*puVar24 & 0xe000000) != 0)) goto LAB_82adc7f8;
      }
      uVar15 = 0;
LAB_82adc7f8:
      if (uVar15 != 0) {
        uVar13 = 0;
        if ((*(uint *)(iVar6 + 0x10) & 7) != 0) {
          do {
            uVar25 = 0;
            piVar23 = (int *)(uVar15 + 0x2c);
            while( true ) {
              if ((*(uint *)(uVar15 + 8) >> 0x13 & 7) <= uVar25) goto LAB_82adb6c8;
              if (*(int *)(*piVar23 + 0xc) == *piVar28) break;
              uVar25 = uVar25 + 1;
              piVar23 = piVar23 + 1;
            }
            uVar13 = uVar13 + 1;
            piVar28 = piVar28 + 1;
          } while (uVar13 < (*(uint *)(iVar6 + 0x10) & 7));
        }
      }
    }
    iVar4 = fn_82ABE0E8(iStack_134,param_1);
    iVar6 = iStack0000001c;
    if (iVar4 != 2) {
      iVar4 = 0;
      for (uVar15 = puStack_12c[1]; ((uVar15 & 1) == 0 && (uVar15 != 0));
          uVar15 = *(uint *)((uVar15 & 0xfffffffe) + 4)) {
        iVar4 = *(int *)(uVar15 + 8) + iVar4;
      }
      iVar4 = ((iVar4 - iStack_128) - iStack_104) + iStack_148;
      if ((*(uint *)(iStack0000001c + 0x30) >> 0x1a & 1) == 0) {
        iVar4 = iVar4 + iStack_10c + iStack_108;
      }
      if (0 < iVar4) goto LAB_82adb6c8;
    }
    uVar15 = fn_82B42C70(param_1,iStack0000001c,uStack_138,0,uStack_138,0);
    if (uVar15 != uStack_138) {
      if (uStack_140 == uStack_138) {
        uStack_140 = uVar15;
      }
      goto LAB_82adb6c8;
    }
    uStack_13c = 0;
    if (puStack_120 != (uint *)0x0) {
      fn_82B4B048();
    }
    iVar4 = iStack_124;
    fn_82AD7E28(param_1,puStack_12c,iStack_124,acStack_14e[0],uVar15,
                  *(undefined4 *)(param_1 + 0x294));
    fn_82B8AC10(param_1,iStack_134,0,1);
    uVar13 = *(uint *)(iVar4 + 8) >> 7 & 0x7f;
    if ((uVar13 < 0x15) || (bVar20 = true, 0x18 < uVar13)) {
      bVar20 = false;
    }
    if (bVar20) {
LAB_82adc9ac:
      for (puVar24 = *(uint **)(iVar4 + 4); puVar24 != (uint *)0x0; puVar24 = (uint *)puVar24[2]) {
        if ((puVar24[4] != 0) && ((*puVar24 & 0xe000000) != 0)) {
          piVar28 = (int *)(puVar24[4] + 4);
          while (iVar11 = *piVar28, iVar11 != 0) {
            iVar34 = *(int *)(iVar11 + 0x10);
            if (iVar34 != 0) {
              uVar13 = *(uint *)(iVar34 + 8) >> 7 & 0x7f;
              if ((uVar13 != 0x40) && (uVar13 != 0x3f)) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0xdac,0xffffffff820d7bc4);
              }
              fn_82B8F3D8(*(undefined4 *)(iVar34 + 0x1c),1,iVar34,param_1);
              fn_82B8AE98(param_1,iVar34);
              goto LAB_82adc9ac;
            }
            piVar28 = (int *)(iVar11 + 8);
          }
        }
      }
    }
    else {
      fn_82B8AE98(param_1,iVar4);
    }
    *(uint *)(iVar6 + 0x30) = *(uint *)(iVar6 + 0x30) & 0xfbffffff;
    if (iStack_110 == 4) {
      fn_82B8F1B0(iVar6,iStack_14c,param_1);
      uVar13 = uStack_140;
      fn_82B8F1B0(uStack_140,uVar15,param_1);
      fn_82B8F328(uVar13,iStack_14c,param_1);
      if (*(int *)(uVar13 + 8) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(uVar13 + 8) + 4);
      }
      if ((iVar6 != iVar4) && (cVar17 = fn_82AD5A48(param_1,iVar6), cVar17 == '\0')) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      cVar17 = fn_82AD5A48(param_1,iVar6,uVar13);
      if (cVar17 == '\0') {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
    }
    else {
      fn_82B8F1B0(iVar6,uVar15,param_1);
    }
    cVar17 = fn_82AD5A48(param_1,iVar6,iStack_14c);
    if (cVar17 == '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    cVar17 = fn_82AD5A48(param_1,iVar6,uVar15);
    if (cVar17 == '\0') {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    piVar28 = *(int **)(iVar6 + 0xc);
    if ((piVar28 == (int *)0x0) || (bVar20 = true, piVar28[2] == 0)) {
      bVar20 = false;
    }
    if (((!bVar20) && (piVar28 != (int *)0x0)) && (*piVar28 != 0)) {
      iVar4 = *(int *)(*piVar28 + 8);
      if ((iVar4 == 0) || (bVar20 = true, *(int *)(iVar4 + 0xc) == 0)) {
        bVar20 = false;
      }
      if (!bVar20) {
        fn_82AD5A48(param_1,iVar6);
      }
    }
    cStack_143 = '\x01';
    if ((*(uint *)(iVar6 + 0x1c) & 1) == 0) {
      uVar15 = (*(uint *)(iVar6 + 0x18) & 0xfffffffe) - 0x28;
joined_r0x82adcbf0:
      uVar13 = uVar15;
      if (uVar13 != 0) {
        if ((*(uint *)(uVar13 + 0x24) & 1) == 0) {
          uVar15 = (*(uint *)(uVar13 + 0x24) & 0xfffffffe) - 0x28;
        }
        else {
          uVar15 = 0;
        }
        uVar25 = *(uint *)(uVar13 + 8);
        if ((uVar25 >> 0x18 & 1) != 0) goto LAB_82adcc4c;
        *(uint *)(uVar13 + 8) = uVar25 | 0x1000000;
        goto LAB_82adcc28;
      }
    }
    uStack_144 = 1;
  }
LAB_82adce4c:
  puVar24 = puStack_12c;
  uVar15 = uStack_13c;
  if (puStack_12c != (uint *)0x0) {
    fn_82AD5F68(puStack_12c);
    *puVar24 = *(uint *)(param_1 + 0x3d0);
    *(uint **)(param_1 + 0x3d0) = puVar24;
    uVar15 = uStack_13c;
  }
  while (puVar24 = puStack_120, uVar15 != 0) {
    uVar13 = *(uint *)(uVar15 + 0x20);
    fn_82B8AC10(param_1,uVar15,0,1);
    uVar15 = uVar13;
  }
  if (puStack_120 != (uint *)0x0) {
    while (((puVar24[1] & 1) == 0 && (puVar24[1] != 0))) {
      puVar8 = (uint *)(*puVar24 & 0xfffffffe);
      puVar10 = puVar8 + -1;
      uVar13 = puVar8[1] - 1;
      uVar15 = puVar10[puVar8[1] + 3];
      puVar8[1] = uVar13;
      if (uVar13 == 0) {
        *(uint *)(*puVar8 & 0xfffffffe) = *puVar10;
        *(uint *)(*puVar10 & 0xfffffffe) = *puVar8;
        fn_82AA6648(puVar24,puVar10,((ulonglong)puVar8[2] + 4 & 0x3fffffff) << 2);
      }
      uVar14 = *(undefined4 *)(uVar15 + 0xc);
      fn_82AD20C0(*(undefined4 *)(uVar15 + 0x10),uVar15,param_1);
      cVar17 = fn_82ABE2E0(uVar14);
      if (cVar17 != '\0') {
        fn_82B8AC10(param_1,uVar14,0,1);
      }
    }
    fn_82B4B048(puVar24);
    *puVar24 = *(uint *)(param_1 + 0x3d0);
    *(uint **)(param_1 + 0x3d0) = puVar24;
  }
LAB_82adcf6c:
  if (cStack_143 != '\0') {
    fn_82B44B88(param_1);
    return uStack_144;
  }
  return uStack_144;
LAB_82adcc4c:
  if ((uVar25 & 0x3f80) == 0x3700) {
    piVar28 = (int *)(uVar13 + 0x2c);
    for (uVar25 = 0; uVar25 < (*(uint *)(uVar13 + 8) >> 0x13 & 7); uVar25 = uVar25 + 1) {
      puVar24 = (uint *)*piVar28;
      uVar12 = puVar24[3];
      *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) | 0x1000000;
      fn_82B16698(param_1,uVar12,*(undefined4 *)(param_1 + 0x294));
      for (iVar4 = *(int *)(uVar12 + 4); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
        uVar36 = *(uint *)(iVar4 + 0x10);
        if (((uVar36 != 0) && ((*(uint *)(uVar36 + 8) & 0x3f80) == 0x3700)) && (uVar36 != uVar13))
        goto LAB_82adccdc;
      }
      if (0x4000 < (*(uint *)(uVar12 + 8) & 0x1c000)) {
LAB_82adccdc:
        uVar36 = *puVar24;
        fn_82B894C8(param_1,iVar6,uVar13 & 0xfffffffc,puVar24);
        uVar9 = puVar24[3];
        fn_82AD1B28(uVar9);
        uVar18 = *(uint *)(uVar9 + 8);
        *(uint *)(uVar9 + 8) = uVar18 | 0x1000000;
        if ((*(uint *)(uVar12 + 8) >> 0x17 & 1) != 0) {
          *(uint *)(uVar9 + 8) = uVar18 | 0x1800000;
          if ((*(uint *)(uVar12 + 0x10) & 0x70000) == 0) {
            uVar16 = fn_82ADD120(uVar12);
            *(undefined2 *)(uVar9 + 0x12) = uVar16;
          }
          else {
            *(ushort *)(uVar9 + 0x12) =
                 ((ushort)(uVar36 >> 5) & 3) + (short)*(uint *)(uVar12 + 0x10);
          }
          puVar24 = *(uint **)(param_1 + 0x294);
          if ((puVar24[1] & 1) == 0) {
            uVar12 = *puVar24 & 0xfffffffe;
            iVar4 = uVar12 - 4;
            if ((iVar4 == 0) || (*(uint *)(uVar12 + 8) < *(int *)(uVar12 + 4) + 1U))
            goto LAB_82adcd7c;
          }
          else {
LAB_82adcd7c:
            iVar4 = fn_82AD6090(puVar24,1);
          }
          iVar11 = *(int *)(iVar4 + 8);
          *(int *)(iVar4 + 8) = iVar11 + 1;
          *(uint *)((iVar11 + 4) * 4 + iVar4) = uVar9;
        }
      }
      piVar28 = piVar28 + 1;
    }
LAB_82adcc28:
    fn_82B16698(param_1,uVar13,*(undefined4 *)(param_1 + 0x294));
  }
  goto joined_r0x82adcbf0;
}

