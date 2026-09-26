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
#define ZEXT48(x) ((U64)((U32)(x)))
#define BADSPACEBASE char
extern int fn_82ABDBE8();
extern int fn_82ABE2E0();
extern int fn_82AC9F80();
extern int fn_82ACA920();
extern int fn_82AD1270();
extern int fn_82AD12C8();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82AD1B28();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82ADD810();
extern int fn_82AE0148();
extern int fn_82AEFCD8();
extern int fn_82AF77E0();
extern int fn_82AF7B20();
extern int fn_82AFA378();
extern int fn_82AFB698();
extern int fn_82B0FC78();
extern int fn_82B80EE0();
extern int fn_82B84350();
extern int fn_82B85910();
extern int fn_82B86888();
extern int fn_82B8A3A0();
extern int fn_82B8AC10();
extern int fn_82B8D3D0();
extern int fn_82B8D488();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820D7B2B;
extern unsigned int lbl_820D7D2F;
extern unsigned int lbl_820D7D3F;
extern unsigned int lbl_821AAD20;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


uint * fn_82AFC3B8(int param_1,int param_2,uint *param_3,undefined8 param_4,uint *param_5,
                    undefined8 param_6,uint param_7,uint *param_8)

{
  byte bVar1;
  int iVar4;
  uint *puVar5;
  ulonglong uVar2;
  char cVar14;
  undefined8 uVar3;
  uint uVar6;
  undefined4 uVar7;
  undefined2 uVar13;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar15;
  int *piVar16;
  int *piVar18;
  uint *puVar19;
  longlong lVar17;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined4 *puVar29;
  ulonglong uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  uVar2 = ZEXT48(&stack0x00000000);
  iVar4 = (int)(uVar2 - 0x110);
  *(BADSPACEBASE **)iVar4 = register0x0000000c;
  uVar8 = *param_3 >> 0x19;
  uVar26 = (ulonglong)uVar8 & 7;
  uVar22 = *param_5 >> 0x19;
  uVar27 = (ulonglong)uVar22 & 7;
  uVar10 = param_3[3];
  uVar23 = param_5[3];
  uVar25 = uVar27 + uVar26;
  if (((*(uint *)(param_2 + 8) & 0x3f80) == 0x3200) && (param_3 == *(uint **)(param_2 + 0x2c))) {
    uVar25 = 1;
  }
  uVar24 = *param_8;
  if ((uVar24 & 1) != 0) {
    if ((uVar24 & 0x40000) == 0) {
      if ((uVar24 & 0x80000) != 0) {
        param_3 = (uint *)fn_82AFB698(param_1,uVar23,param_3,param_7,param_8);
        uVar23 = param_3[3];
        puVar11 = (uint *)(param_5[3] + 4);
        for (puVar5 = (uint *)*puVar11; puVar5 != param_5; puVar5 = (uint *)puVar5[2]) {
          puVar11 = puVar5 + 2;
        }
        *puVar11 = param_5[2];
        param_5[2] = *(uint *)(uVar23 + 4);
        *(uint **)(uVar23 + 4) = param_5;
        param_5[3] = uVar23;
        uVar10 = uVar23;
      }
    }
    else {
      param_5 = (uint *)fn_82AFB698(param_1,uVar10,param_5,param_7,param_8);
      uVar23 = param_5[3];
      puVar11 = (uint *)(param_3[3] + 4);
      for (puVar5 = (uint *)*puVar11; puVar5 != param_3; puVar5 = (uint *)puVar5[2]) {
        puVar11 = puVar5 + 2;
      }
      *puVar11 = param_3[2];
      param_3[2] = *(uint *)(uVar23 + 4);
      *(uint **)(uVar23 + 4) = param_3;
      param_3[3] = uVar23;
      uVar10 = uVar23;
    }
    uVar24 = *(uint *)(uVar10 + 8);
    if ((uVar24 & 0x3f80) == 16000) {
      if ((uVar8 & 7) != 0) {
        uVar8 = 0;
        lVar28 = uVar2 - 0xb4;
        uVar30 = uVar26;
        do {
          dVar31 = (double)fn_82B80EE0(uVar10,(*param_3 >> 5 & 0xff) >> (uVar8 & 0x3f) & 3,
                                        *param_3 & 0x1f);
          lVar28 = lVar28 + 4;
          *(float *)lVar28 = (float)dVar31;
          uVar30 = uVar30 - 1;
          uVar8 = uVar8 + 2;
        } while (uVar30 != 0);
      }
      if ((uVar22 & 7) != 0) {
        uVar10 = 0;
        lVar28 = uVar26 * 4 + (uVar2 - 0x110) + 0x5c;
        do {
          dVar31 = (double)fn_82B80EE0(uVar23,(*param_5 >> 5 & 0xff) >> (uVar10 & 0x3f) & 3,
                                        *param_5 & 0x1f);
          lVar28 = lVar28 + 4;
          *(float *)lVar28 = (float)dVar31;
          uVar27 = uVar27 - 1;
          uVar10 = uVar10 + 2;
        } while (uVar27 != 0);
      }
      iVar4 = fn_82B86888(param_1,uVar25,uVar2 - 0xb0,*(undefined4 *)(iVar4 + 0x50));
      puVar5 = (uint *)fn_82AD17B0(param_1,iVar4);
      *puVar5 = (uint)(uVar25 << 0x19) & 0xe000000 | *puVar5 & 0xf1ffffff;
      fn_82AEFCD8(iVar4);
      *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) | 0x1000000;
      return puVar5;
    }
    uVar8 = param_8[1];
    if (uVar8 == 0) {
      uVar8 = uVar10;
      if ((uVar10 == uVar23) || (cVar14 = fn_82ABDBE8(param_3,param_5), cVar14 != '\0'))
      goto LAB_82afd1dc;
      if ((uVar24 >> 0x17 & 1) != 0) {
        uVar2 = fn_82ADD810(param_1,uVar10);
        uVar26 = fn_82ADD810(param_1,uVar23);
        if ((uVar2 & 0xffffffff) != (uVar26 & 0xffffffff)) {
          fn_82AE0148(param_1,uVar2,uVar26,*(undefined4 *)(iVar4 + 0x50),0,0,0,0);
        }
      }
      if (((*(uint *)(uVar10 + 8) & 0x3f80) == 0x3700) &&
         ((*(uint *)(uVar23 + 8) & 0x3f80) == 0x3700)) {
        fn_82B8D3D0(param_1,uVar10,uVar23,1,1);
      }
      uVar22 = *(uint *)(uVar10 + 8) >> 0xe;
      uVar2 = (ulonglong)uVar22 & 7;
      uVar24 = *(uint *)(uVar23 + 8) >> 0xe;
      uVar26 = (ulonglong)uVar24 & 7;
      uVar8 = fn_82B84350(param_1,param_6,0,uVar26 + uVar2);
      uVar6 = *(uint *)(uVar23 + 8) & 0x3f80;
      if ((*(uint *)(uVar10 + 8) & 0x3f80) == 0x3700) {
        if (uVar6 != 0x3800) {
          fn_82B8D488(param_1,uVar23,uVar10,0);
        }
        uVar6 = uVar10 & 0xfffffffe;
        uVar15 = uVar8 & 0xfffffffe;
        *(undefined4 *)(uVar15 + 0x28) = *(undefined4 *)(uVar6 + 0x28);
        *(uint *)((*(uint *)(uVar6 + 0x28) & 0xfffffffe) + 0x24) = uVar15 + 0x28;
        *(uint *)(uVar15 + 0x24) = uVar6 + 0x28;
        *(uint *)(uVar6 + 0x28) = uVar15;
        if ((uVar22 & 7) != 0) {
          puVar29 = (undefined4 *)(uVar8 + 0x2c);
          uVar27 = uVar2;
          do {
            uVar7 = fn_82AD1978(uVar8,*(undefined4 *)((uVar10 - uVar8) + (int)puVar29));
            *puVar29 = uVar7;
            uVar27 = uVar27 - 1;
            puVar29 = puVar29 + 1;
          } while (uVar27 != 0);
        }
        piVar16 = (int *)(uVar10 + 4);
        while (iVar4 = *piVar16, iVar4 != 0) {
          if (*(int *)(iVar4 + 0x10) != 0) {
            piVar18 = (int *)(*(int *)(iVar4 + 0xc) + 4);
            for (iVar9 = *piVar18; iVar9 != iVar4; iVar9 = *(int *)(iVar9 + 8)) {
              piVar18 = (int *)(iVar9 + 8);
            }
            *piVar18 = *(int *)(iVar4 + 8);
            *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(uVar8 + 4);
            *(int *)(uVar8 + 4) = iVar4;
            *(uint *)(iVar4 + 0xc) = uVar8;
          }
          if (*piVar16 == iVar4) {
            piVar16 = (int *)(iVar4 + 8);
          }
        }
      }
      else {
        if (uVar6 != 0x3700) {
          uVar6 = uVar8 & 0xfffffffe;
          puVar5 = (uint *)((param_7 & 0xfffffffe) + 0x24);
          *(uint *)(uVar6 + 0x24) = *puVar5;
          *(uint *)(*puVar5 & 0xfffffffe) = uVar6;
          *(uint *)(uVar6 + 0x28) = param_7 & 0xfffffffe;
          *puVar5 = uVar6 + 0x28;
        }
        bVar1 = (&lbl_820D7B2B)[*(uint *)(uVar10 + 8) >> 1 & 0xf];
        if ((uVar22 & 7) != 0) {
          uVar22 = 0;
          puVar29 = (undefined4 *)(uVar8 + 0x28);
          uVar27 = uVar2;
          do {
            puVar5 = (uint *)fn_82AD17B0(param_1,uVar10);
            uVar6 = *puVar5;
            uVar15 = (bVar1 >> (uVar22 & 0x3f) & 3) << 5 | 0x2001c80;
            *puVar5 = uVar15 | uVar6 & 0xf3fffc9f;
            *puVar5 = *param_3 & 1 | uVar15 | uVar6 & 0xf3fffc80;
            uVar7 = fn_82AD1978(uVar8,puVar5);
            uVar27 = uVar27 - 1;
            puVar29 = puVar29 + 1;
            *puVar29 = uVar7;
            uVar22 = uVar22 + 2;
          } while (uVar27 != 0);
        }
      }
      if ((*(uint *)(uVar23 + 8) & 0x3f80) == 0x3700) {
        uVar22 = *(uint *)(uVar10 + 8) >> 7 & 0x7f;
        if (uVar22 != 0x6e) {
          if (uVar22 != 0x70) {
            fn_82B8D488(param_1,uVar10,uVar23,0);
          }
          uVar22 = uVar23 & 0xfffffffe;
          uVar6 = uVar8 & 0xfffffffe;
          *(undefined4 *)(uVar6 + 0x28) = *(undefined4 *)(uVar22 + 0x28);
          *(uint *)((*(uint *)(uVar22 + 0x28) & 0xfffffffe) + 0x24) = uVar6 + 0x28;
          *(uint *)(uVar6 + 0x24) = uVar22 + 0x28;
          *(uint *)(uVar22 + 0x28) = uVar6;
        }
        uVar27 = 0;
        if ((uVar24 & 7) != 0) {
          puVar29 = (undefined4 *)(uVar23 + 0x28);
          do {
            puVar29 = puVar29 + 1;
            uVar7 = fn_82AD1978(uVar8,*puVar29);
            uVar30 = uVar27 + uVar2 + 0xb;
            uVar27 = uVar27 + 1;
            *(undefined4 *)((int)((uVar30 & 0xffffffff) << 2) + uVar8) = uVar7;
          } while ((uVar27 & 0xffffffff) < uVar26);
        }
        puVar5 = (uint *)(uVar23 + 4);
        bVar1 = (&lbl_820D7D3F)[(int)uVar2];
        while (puVar11 = (uint *)*puVar5, puVar11 != (uint *)0x0) {
          if ((puVar11[4] != 0) && (puVar11 != param_5)) {
            puVar19 = (uint *)(puVar11[3] + 4);
            for (puVar12 = (uint *)*puVar19; puVar12 != puVar11; puVar12 = (uint *)puVar12[2]) {
              puVar19 = puVar12 + 2;
            }
            *puVar19 = puVar11[2];
            puVar11[2] = *(uint *)(uVar8 + 4);
            *(uint **)(uVar8 + 4) = puVar11;
            uVar22 = *puVar11;
            puVar11[3] = uVar8;
            *puVar11 = ((((bVar1 >> (uVar22 >> 10 & 6) & 3) << 2 | bVar1 >> (uVar22 >> 8 & 6) & 3)
                         << 2 | bVar1 >> (uVar22 >> 6 & 6) & 3) << 2 |
                       bVar1 >> (uVar22 >> 4 & 6) & 3) << 5 | uVar22 & 0xffffe01f;
          }
          if ((uint *)*puVar5 == puVar11) {
            puVar5 = puVar11 + 2;
          }
        }
      }
      else {
        uVar27 = 0;
        bVar1 = (&lbl_820D7B2B)[*(uint *)(uVar23 + 8) >> 1 & 0xf];
        if ((uVar24 & 7) != 0) {
          uVar22 = 0;
          do {
            puVar5 = (uint *)fn_82AD17B0(param_1,uVar23);
            uVar24 = *puVar5;
            uVar6 = (bVar1 >> (uVar22 & 0x3f) & 3) << 5 | 0x2001c80;
            *puVar5 = uVar6 | uVar24 & 0xf3fffc9f;
            *puVar5 = *param_5 & 1 | uVar6 | uVar24 & 0xf3fffc80;
            uVar7 = fn_82AD1978(uVar8,puVar5);
            uVar30 = uVar27 + uVar2 + 0xb;
            uVar27 = uVar27 + 1;
            uVar22 = uVar22 + 2;
            *(undefined4 *)((int)((uVar30 & 0xffffffff) << 2) + uVar8) = uVar7;
          } while ((uVar27 & 0xffffffff) < uVar26);
        }
      }
      puVar11 = (uint *)(param_3[3] + 4);
      for (puVar5 = (uint *)*puVar11; puVar5 != param_3; puVar5 = (uint *)puVar5[2]) {
        puVar11 = puVar5 + 2;
      }
      *puVar11 = param_3[2];
      param_3[2] = *(uint *)(uVar8 + 4);
      *(uint **)(uVar8 + 4) = param_3;
      param_3[3] = uVar8;
      uVar22 = *param_3;
      *param_3 = uVar22 & 0xfffffffe;
      bVar1 = (&lbl_820D7D2F)[*(uint *)(uVar10 + 8) >> 1 & 0xf];
      *param_3 = ((((bVar1 >> (uVar22 >> 10 & 6) & 3) << 2 | bVar1 >> (uVar22 >> 8 & 6) & 3) << 2 |
                  bVar1 >> (uVar22 >> 6 & 6) & 3) << 2 | bVar1 >> (uVar22 >> 4 & 6) & 3) << 5 |
                 uVar22 & 0xffffe01e;
      puVar11 = (uint *)(param_5[3] + 4);
      for (puVar5 = (uint *)*puVar11; puVar5 != param_5; puVar5 = (uint *)puVar5[2]) {
        puVar11 = puVar5 + 2;
      }
      *puVar11 = param_5[2];
      param_5[2] = *(uint *)(uVar8 + 4);
      *(uint **)(uVar8 + 4) = param_5;
      param_5[3] = uVar8;
      uVar22 = *param_5;
      *param_5 = uVar22 & 0xfffffffe;
      bVar1 = (&lbl_820D7D2F)[*(uint *)(uVar23 + 8) >> 1 & 0xf];
      uVar21 = bVar1 >> (uVar22 >> 10 & 6) & 3;
      uVar15 = bVar1 >> (uVar22 >> 8 & 6) & 3;
      uVar24 = bVar1 >> (uVar22 >> 6 & 6) & 3;
      uVar6 = bVar1 >> (uVar22 >> 4 & 6) & 3;
      *param_5 = (((uVar21 << 2 | uVar15) << 2 | uVar24) << 2 | uVar6) << 5 | uVar22 & 0xffffe01e;
      bVar1 = (&lbl_820D7D3F)[(int)uVar2];
      *param_5 = ((((bVar1 >> (uVar21 << 1) & 3) << 2 | bVar1 >> (uVar15 << 1) & 3) << 2 |
                  bVar1 >> (uVar24 << 1) & 3) << 2 | bVar1 >> (uVar6 << 1) & 3) << 5 |
                 uVar22 & 0xffffe01e;
      cVar14 = fn_82ABE2E0(uVar10);
      if (cVar14 != '\0') {
        fn_82B8AC10(param_1,uVar10,*(undefined4 *)(param_1 + 0x28c),1);
      }
      cVar14 = fn_82ABE2E0(uVar23);
      if (cVar14 != '\0') {
        fn_82B8AC10(param_1,uVar23,*(undefined4 *)(param_1 + 0x28c),1);
      }
      uVar23 = ((1 << (int)(uVar26 + uVar2)) + -1) * 2 & 0x1eU | 0x1000000 |
               *(uint *)(uVar8 + 8) & 0xffffffe1;
      *(uint *)(uVar8 + 8) = uVar23;
      if ((*(uint *)(uVar10 + 8) >> 0x17 & 1) != 0) {
        *(uint *)(uVar8 + 8) = uVar23 | 0x800000;
        uVar13 = fn_82ADD120(uVar10);
        *(undefined2 *)(uVar8 + 0x12) = uVar13;
        puVar5 = *(uint **)(param_1 + 0x294);
        if ((puVar5[1] & 1) == 0) {
          uVar10 = *puVar5 & 0xfffffffe;
          iVar4 = uVar10 - 4;
          if ((iVar4 == 0) || (*(uint *)(uVar10 + 8) < *(int *)(uVar10 + 4) + 1U))
          goto LAB_82afd1a8;
        }
        else {
LAB_82afd1a8:
          iVar4 = fn_82AD6090(puVar5,1);
        }
        iVar9 = *(int *)(iVar4 + 8);
        *(int *)(iVar4 + 8) = iVar9 + 1;
        *(uint *)((iVar9 + 4) * 4 + iVar4) = uVar8;
      }
      fn_82AFA378(param_1,uVar8);
LAB_82afd1dc:
      puVar5 = (uint *)fn_82AD17B0(param_1,uVar8);
      uVar10 = *puVar5;
      uVar8 = (uint)(uVar25 << 0x19) & 0xe000000;
      *puVar5 = uVar8 | uVar10 & 0xf1ffffff;
      uVar23 = *param_3 >> 0x18 & 0xe;
      uVar23 = (((1 << uVar23) + -1) * 0x20 & *param_3 | ((*param_5 >> 5 & 0xff) << uVar23) << 5) &
               0x1fe0;
      *puVar5 = uVar8 | uVar10 & 0xf1ffe01f | uVar23;
      *puVar5 = uVar8 | uVar10 & 0xf1ffe000 | uVar23 | *param_3 & 0x1f;
      return puVar5;
    }
    if ((*param_8 & 0x800) != 0) {
      cVar14 = fn_82B85910(uVar8,param_7);
      if (cVar14 != '\0') {
        fn_82B8D488(param_1,uVar8,param_7,0);
      }
      goto LAB_82afc968;
    }
    if ((uVar24 >> 0x17 & 1) != 0) {
      uVar2 = fn_82ADD810(param_1,uVar10);
      uVar27 = fn_82ADD810(param_1,uVar23);
      if ((uVar2 & 0xffffffff) != (uVar27 & 0xffffffff)) {
        fn_82AE0148(param_1,uVar2,uVar27,*(undefined4 *)(iVar4 + 0x50),0,0,0,0);
      }
    }
    for (puVar5 = *(uint **)(uVar10 + 4); puVar5 != (uint *)0x0; puVar5 = (uint *)puVar5[2]) {
      uVar22 = puVar5[4];
      if (((uVar22 != 0) && ((*(uint *)(uVar22 + 8) & 0x3f80) == 0x3700)) &&
         ((*puVar5 & 0xe000000) != 0)) goto LAB_82afc6a4;
    }
    uVar22 = 0;
LAB_82afc6a4:
    uVar24 = uVar23;
    if (uVar22 == 0) {
      uVar24 = uVar10;
    }
    cVar14 = fn_82B85910(uVar24,uVar8);
    if (cVar14 != '\0') {
      fn_82B8D488(param_1,uVar24,uVar8,0);
    }
    cVar14 = fn_82B85910(uVar8,param_7);
    if (cVar14 != '\0') {
      uVar3 = fn_82AD17B0(param_1,uVar24);
      fn_82AD1978(uVar8,uVar3);
      fn_82B8D488(param_1,uVar8,param_7,0);
    }
    uVar6 = fn_82B84350(param_1,param_6,0,
                              (*(uint *)(uVar8 + 8) >> 0x13 & 7) +
                              (*(uint *)(uVar24 + 8) >> 0xe & 7));
    uVar22 = uVar6 & 0xfffffffe;
    puVar5 = (uint *)((uVar8 & 0xfffffffe) + 0x24);
    puVar29 = (undefined4 *)(uVar6 + 0x2c);
    *(uint *)(uVar22 + 0x24) = *puVar5;
    *(uint *)(*puVar5 & 0xfffffffe) = uVar22;
    *(uint *)(uVar22 + 0x28) = uVar8 & 0xfffffffe;
    *puVar5 = uVar22 + 0x28;
    for (uVar22 = 0; uVar22 < (*(uint *)(uVar8 + 8) >> 0x13 & 7); uVar22 = uVar22 + 1) {
      uVar7 = fn_82AD1978(uVar6,*(undefined4 *)((uVar8 - uVar6) + (int)puVar29));
      *puVar29 = uVar7;
      puVar29 = puVar29 + 1;
    }
    iVar4 = 0;
    for (uVar22 = *(uint *)(uVar24 + 8) >> 1 & 0xf; uVar22 != 0; uVar22 = uVar22 - uVar21) {
      uVar15 = *(uint *)(uVar8 + 8);
      uVar21 = uVar22 & ~(uVar22 - 1);
      uVar3 = fn_82AD18C0(param_1,uVar24,0x1f - LZCOUNT(uVar21));
      uVar7 = fn_82AD1978(uVar6,uVar3);
      iVar9 = (uVar15 >> 0x13 & 7) + iVar4;
      iVar4 = iVar4 + 1;
      *(undefined4 *)((iVar9 + 0xb) * 4 + uVar6) = uVar7;
    }
    piVar16 = (int *)(uVar8 + 4);
    while (iVar4 = *piVar16, iVar4 != 0) {
      if (*(int *)(iVar4 + 0x10) != 0) {
        piVar18 = (int *)(*(int *)(iVar4 + 0xc) + 4);
        for (iVar9 = *piVar18; iVar9 != iVar4; iVar9 = *(int *)(iVar9 + 8)) {
          piVar18 = (int *)(iVar9 + 8);
        }
        *piVar18 = *(int *)(iVar4 + 8);
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(uVar6 + 4);
        *(int *)(uVar6 + 4) = iVar4;
        *(uint *)(iVar4 + 0xc) = uVar6;
      }
      if (*piVar16 == iVar4) {
        piVar16 = (int *)(iVar4 + 8);
      }
    }
    uVar22 = ((1 << (*(uint *)(uVar6 + 8) >> 0x13 & 7)) + -1) * 2 & 0x1eU | 0x1000000 |
             *(uint *)(uVar6 + 8) & 0xffffffe1;
    *(uint *)(uVar6 + 8) = uVar22;
    if ((*(uint *)(uVar8 + 8) >> 0x17 & 1) != 0) {
      *(uint *)(uVar6 + 8) = uVar22 | 0x800000;
      uVar13 = fn_82ADD120(uVar8);
      *(undefined2 *)(uVar6 + 0x12) = uVar13;
      puVar5 = *(uint **)(param_1 + 0x294);
      if ((puVar5[1] & 1) == 0) {
        uVar22 = *puVar5 & 0xfffffffe;
        iVar4 = uVar22 - 4;
        if ((iVar4 == 0) || (*(uint *)(uVar22 + 8) < *(int *)(uVar22 + 4) + 1U)) goto LAB_82afc8f4;
      }
      else {
LAB_82afc8f4:
        iVar4 = fn_82AD6090(puVar5,1);
      }
      iVar9 = *(int *)(iVar4 + 8);
      *(int *)(iVar4 + 8) = iVar9 + 1;
      *(uint *)((iVar9 + 4) * 4 + iVar4) = uVar6;
    }
    fn_82B8AC10(param_1,uVar8,0,1);
    fn_82AFA378(param_1,uVar6);
    uVar8 = uVar6;
LAB_82afc968:
    uVar24 = 0;
    uVar22 = 0;
    piVar16 = (int *)(uVar8 + 0x2c);
    for (uVar6 = 0; uVar6 < (*(uint *)(uVar8 + 8) >> 0x13 & 7); uVar6 = uVar6 + 1) {
      puVar5 = (uint *)*piVar16;
      if (puVar5[3] == uVar10) {
        uVar15 = *puVar5 >> 4 & 6;
        uVar24 = uVar24 & ~(3 << uVar15) | uVar6 << uVar15;
      }
      if (puVar5[3] == uVar23) {
        uVar15 = *puVar5 >> 4 & 6;
        uVar22 = uVar22 & ~(3 << uVar15) | uVar6 << uVar15;
      }
      piVar16 = piVar16 + 1;
    }
    uVar6 = *param_3;
    uVar2 = (ulonglong)(uVar6 >> 5);
    uVar27 = uVar2 & 0xff;
    uVar15 = *param_5 >> 5 & 0xff;
    if (uVar10 != uVar8) {
      uVar10 = (uint)uVar27;
      uVar27 = ((((ulonglong)(uVar24 >> (uVar10 >> 5 & 6)) & 3) << 2 |
                (ulonglong)(uVar24 >> (uVar10 >> 3 & 6)) & 3) << 2 |
               (ulonglong)(uVar24 >> (uVar10 >> 1 & 6)) & 0xffffffff00000003) << 2 |
               (ulonglong)(uVar24 >> (int)((uVar2 & 3) << 1)) & 0xffffffff00000003;
    }
    if (uVar23 != uVar8) {
      uVar15 = (((uVar22 >> (uVar15 >> 5 & 6) & 3) << 2 | uVar22 >> (uVar15 >> 3 & 6) & 3) << 2 |
               uVar22 >> (uVar15 >> 1 & 6) & 3) << 2 | uVar22 >> ((*param_5 >> 5 & 3) << 1) & 3;
    }
    puVar5 = (uint *)fn_82AD17B0(param_1,uVar8);
    *puVar5 = (uint)(uVar25 << 0x19) & 0xe000000 | *puVar5 & 0xf1ffffff;
    fn_82AD1270(puVar5,uVar6 & 0x1e);
    iVar4 = (int)(uVar26 << 1);
    *puVar5 = (uint)(((ulonglong)(uint)(1 << iVar4) - 1 & uVar27 | (ulonglong)(uVar15 << iVar4)) <<
                    5) & 0x1fe0 | *puVar5 & 0xffffe01f;
    fn_82B0FC78(param_1,uVar8);
    return puVar5;
  }
  if ((uVar24 & 4) != 0) {
    fn_82B8D488(param_1,uVar10,param_7,0);
  }
  if ((*param_8 & 8) != 0) {
    fn_82B8D488(param_1,uVar23,param_7,0);
  }
  if ((*param_8 & 0x2000) != 0) {
    iVar4 = fn_82AF77E0(param_1,0,param_7,param_3,param_3);
    if ((*param_3 & 8) != 0) {
      uVar3 = fn_82AD12C8(param_2);
      uVar3 = fn_82AC9F80(param_1,uVar3,0);
      fn_82AD1978(iVar4,uVar3);
    }
    iVar9 = fn_82AF77E0(param_1,0,param_7,param_5,param_5);
    if ((*param_5 & 8) != 0) {
      uVar3 = fn_82AD12C8(param_4);
      uVar3 = fn_82AC9F80(param_1,uVar3,0);
      fn_82AD1978(iVar9,uVar3);
    }
    param_8[2] = 0;
    uVar10 = fn_82B84350(param_1,*(undefined4 *)(param_7 + 0x1c),0,uVar25);
    uVar23 = uVar10 & 0xfffffffe;
    puVar5 = (uint *)((param_7 & 0xfffffffe) + 0x24);
    uVar2 = 0;
    *(uint *)(uVar23 + 0x24) = *puVar5;
    *(uint *)(*puVar5 & 0xfffffffe) = uVar23;
    *(uint *)(uVar23 + 0x28) = param_7 & 0xfffffffe;
    *puVar5 = uVar23 + 0x28;
    if ((uVar8 & 7) != 0) {
      puVar29 = (undefined4 *)(uVar10 + 0x28);
      do {
        uVar3 = fn_82AD18C0(param_1,iVar4,uVar2);
        uVar7 = fn_82AD1978(uVar10,uVar3);
        uVar2 = uVar2 + 1;
        puVar29 = puVar29 + 1;
        *puVar29 = uVar7;
      } while ((uVar2 & 0xffffffff) < uVar26);
    }
    uVar2 = 0;
    if ((uVar22 & 7) != 0) {
      do {
        uVar3 = fn_82AD18C0(param_1,iVar9,uVar2);
        uVar7 = fn_82AD1978(uVar10,uVar3);
        uVar25 = uVar2 + uVar26 + 0xb;
        uVar2 = uVar2 + 1;
        *(undefined4 *)((int)((uVar25 & 0xffffffff) << 2) + uVar10) = uVar7;
      } while ((uVar2 & 0xffffffff) < uVar27);
    }
    puVar5 = (uint *)fn_82AD17B0(param_1,uVar10);
    fn_82AD1B28(iVar4);
    *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) | 0x1000000;
    fn_82AD1B28(iVar9);
    *(uint *)(iVar9 + 8) = *(uint *)(iVar9 + 8) | 0x1000000;
    fn_82B0FC78(param_1,uVar10);
    *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) | 0x1000000;
    fn_82AFA378(param_1,iVar4);
    fn_82AFA378(param_1,iVar9);
    goto LAB_82afd728;
  }
  dVar32 = (double)lbl_821AAD20;
  dVar31 = (double)lbl_82002AE0;
  dVar33 = dVar31;
  if (2 < uVar26) {
    dVar33 = dVar32;
  }
  if (1 < uVar26) {
    dVar31 = dVar32;
  }
  iVar4 = fn_82B8A3A0(dVar32,dVar31,dVar33,param_1,uVar25);
  puVar5 = (uint *)fn_82AD17B0(param_1,iVar4);
  uVar10 = (uint)((uVar25 & 7) << 0x19);
  *puVar5 = *puVar5 & 0xf1ffffff | uVar10;
  fn_82AD1270(puVar5,0);
  *puVar5 = *puVar5 & 0xffffe01f | 0x1c80;
  uVar23 = *param_3 >> 5 & 0xff;
  if (uVar26 < 4) {
    lVar17 = 4 - uVar26;
    lVar28 = uVar26 << 1;
    do {
      uVar24 = (uint)lVar28;
      lVar28 = lVar28 + 2;
      uVar23 = (uVar23 >> ((uint)((uVar26 - 1 & 0xffffffff) << 1) & 0x3e) & 3) << (uVar24 & 0x3f) |
               uVar23 & ~(3 << (uVar24 & 0x3f));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  puVar11 = (uint *)fn_82ACA920(param_1,param_3,param_3[3]);
  uVar24 = 0;
  *puVar11 = (uVar23 & 0xff) << 5 | *puVar11 & 0xf1ffe01f | uVar10;
  uVar23 = *param_5 >> 5 & 0xff;
  if ((uVar22 & 7) != 0) {
    uVar22 = 0;
    lVar28 = uVar26 << 1;
    uVar2 = uVar27;
    do {
      uVar6 = (uint)lVar28;
      lVar28 = lVar28 + 2;
      uVar24 = (uVar23 >> (uVar22 & 0x3f) & 3) << (uVar6 & 0x3f) | uVar24 & ~(3 << (uVar6 & 0x3f));
      uVar22 = uVar22 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if ((uVar8 & 7) != 0) {
    uVar8 = 0;
    do {
      uVar22 = uVar8 & 0x3f;
      uVar6 = uVar8 & 0x3f;
      uVar8 = uVar8 + 2;
      uVar24 = uVar24 & ~(3 << uVar22) | (*param_5 >> 5 & 3) << uVar6;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  if (uVar25 < 4) {
    lVar28 = 4 - uVar25;
    lVar17 = uVar25 << 1;
    do {
      uVar8 = (uint)lVar17;
      lVar17 = lVar17 + 2;
      uVar24 = uVar24 & ~(3 << (uVar8 & 0x3f)) |
               (uVar23 >> ((uint)((uVar27 - 1 & 0xffffffff) << 1) & 0x3e) & 3) << (uVar8 & 0x3f);
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  puVar12 = (uint *)fn_82ACA920(param_1,param_5,param_5[3]);
  uVar23 = *puVar12;
  *puVar12 = (uVar24 & 0xff) << 5 | uVar23 & 0xf1ffe01f | uVar10;
  uVar10 = *(uint *)(puVar11[3] + 8) >> 7 & 0x7f;
  if ((uVar10 == 0x7d) || (bVar20 = false, uVar10 == 0x7c)) {
    bVar20 = true;
  }
  if ((bVar20) && ((*puVar11 >> 1 & 1) != 0)) {
LAB_82afd69c:
    *puVar5 = *puVar5 & 0xffffffe0 | 2;
  }
  else {
    uVar10 = *(uint *)(puVar12[3] + 8) >> 7 & 0x7f;
    if ((uVar10 == 0x7d) || (bVar20 = false, uVar10 == 0x7c)) {
      bVar20 = true;
    }
    if ((bVar20) && ((((ulonglong)uVar23 & 0xf1ffe01f) >> 1 & 1) != 0)) goto LAB_82afd69c;
  }
  uVar10 = fn_82AF7B20(param_1,0,param_7,puVar5,puVar11);
  if (param_8[2] != 0) {
    uVar3 = fn_82AC9F80(param_1,param_8[2],0);
    fn_82AD1978(uVar10,uVar3);
    param_8[2] = 0;
  }
  puVar5 = (uint *)fn_82AD17B0(param_1,uVar10);
  fn_82AEFCD8(iVar4);
  *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) | 0x1000000;
  fn_82AD1B28(uVar10);
  *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) | 0x1000000;
LAB_82afd728:
  fn_82AFA378(param_1,uVar10);
  return puVar5;
}

