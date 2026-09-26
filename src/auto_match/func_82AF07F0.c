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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_11c;
extern unsigned int *auStack_120;
extern unsigned int *auStack_124;
extern unsigned int *auStack_148;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_82AA65B0();
extern int fn_82AA66A8();
extern int fn_82ABDA10();
extern int fn_82ABDB58();
extern int fn_82ABDBA0();
extern int fn_82ABDBE8();
extern int fn_82ABDCB0();
extern int fn_82ABDD90();
extern int fn_82ABE0E8();
extern int fn_82ABE2E0();
extern int fn_82ABE5F8();
extern int fn_82ABF768();
extern int fn_82AC69C8();
extern int fn_82AC9EE0();
extern int fn_82ACA598();
extern int fn_82ACA920();
extern int fn_82AD0098();
extern int fn_82AD1228();
extern int fn_82AD1270();
extern int fn_82AD1670();
extern int fn_82AD16B8();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD19D8();
extern int fn_82AD1A40();
extern int fn_82AD1B28();
extern int fn_82AD1C60();
extern int fn_82AD20C0();
extern int fn_82AD35A8();
extern int fn_82AE91E8();
extern int fn_82AEB338();
extern int fn_82AEFA80();
extern int fn_82AEFAD0();
extern int fn_82AEFB18();
extern int fn_82AEFBB8();
extern int fn_82AEFC28();
extern int fn_82AEFCD8();
extern int fn_82AEFDB8();
extern int fn_82AEFEA8();
extern int fn_82AF04D0();
extern int fn_82AF0548();
extern int fn_82AF0618();
extern int fn_82AF06E8();
extern int fn_82AF4D10();
extern int fn_82AF9290();
extern int fn_82B0FD38();
extern int fn_82B10120();
extern int fn_82B102D8();
extern int fn_82B471E8();
extern int fn_82B80D50();
extern int fn_82B80EE0();
extern int fn_82B81270();
extern int fn_82B81338();
extern int fn_82B841E8();
extern int fn_82B843F0();
extern int fn_82B85910();
extern int fn_82B8A3A0();
extern int fn_82B8AC10();
extern int fn_82B8AE98();
extern int fn_82B8BCB0();
extern int fn_82B8D2B8();
extern int fn_82B8D3D0();
extern int fn_82B8D488();
extern int fn_82B8EB40();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int iStack_14c;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_128;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_168;
extern unsigned int uStack_170;


/* WARNING: Removing unreachable block (ram,0x82af1ec8) */
/* WARNING: Removing unreachable block (ram,0x82af1ed0) */
/* WARNING: Removing unreachable block (ram,0x82af3358) */
/* WARNING: Removing unreachable block (ram,0x82af3360) */

void fn_82AF07F0(void)

{
  byte bVar1;
  bool bVar2;
  int iVar6;
  uint *puVar7;
  char cVar15;
  undefined4 uVar8;
  ulonglong uVar3;
  uint uVar9;
  int *piVar10;
  undefined8 uVar4;
  int iVar11;
  char cVar16;
  longlong lVar5;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar17;
  uint uVar18;
  int iVar19;
  bool bVar23;
  uint uVar20;
  uint uVar21;
  uint **ppuVar22;
  undefined4 *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  uint uVar31;
  uint *puVar32;
  uint *puVar33;
  uint *puVar34;
  uint uVar35;
  uint uVar36;
  uint *puVar37;
  ulonglong uVar30;
  uint *puVar38;
  uint uVar39;
  int *piVar40;
  int *piVar41;
  ulonglong uVar42;
  uint uVar43;
  uint uVar44;
  uint *puVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  uint *puStack_180;
  char cStack_17c;
  uint *puStack_178;
  uint *puStack_174;
  uint uStack_170;
  uint *puStack_16c;
  uint uStack_168;
  uint *puStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  uint uStack_158;
  uint uStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  uint auStack_148 [2];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  uint *puStack_130;
  uint *puStack_12c;
  undefined4 uStack_128;
  undefined1 auStack_124 [4];
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [12];
  uint auStack_110 [4];
  uint auStack_100 [4];
  uint auStack_f0 [4];
  undefined1 auStack_e0 [224];
  
  iVar6 = fn_82F6A540();
  cStack_17c = '\0';
  if ((*(uint *)(iVar6 + 0x28) & 0x200000) != 0) {
    for (uVar9 = *(uint *)(iVar6 + 4); ((uVar9 & 1) == 0 && (uVar9 != 0));
        uVar9 = *(uint *)((uVar9 & 0xfffffffe) + 4)) {
      for (uVar31 = *(uint *)(uVar9 + 0x1c); ((uVar31 & 1) == 0 && (uVar31 != 0));
          uVar31 = *(uint *)((uVar31 & 0xfffffffe) + 0x28)) {
        if ((*(uint *)(uVar31 + 8) & 0x3f80) == 0x3480) {
          *(uint *)(uVar31 + 8) = *(uint *)(uVar31 + 8) & 0xffffc07f | 0x600;
          puVar38 = *(uint **)(uVar31 + 0x30);
          puVar45 = *(uint **)(uVar31 + 0x34);
          puVar32 = *(uint **)(uVar31 + 0x2c);
          uStack_170 = puVar38[3];
          uStack_168 = puVar45[3];
          uVar21 = *(uint *)(uStack_170 + 8) >> 7 & 0x7f;
          if ((uVar21 == 0x7d) || (bVar23 = false, uVar21 == 0x7c)) {
            bVar23 = true;
          }
          if (bVar23) {
            uVar21 = *(uint *)(uStack_168 + 8) >> 7 & 0x7f;
            if ((uVar21 == 0x7d) || (bVar23 = false, uVar21 == 0x7c)) {
              bVar23 = true;
            }
            if (bVar23) goto LAB_82af0d38;
          }
          fn_82B8EB40(iVar6,puVar32,&uStack_160,&uStack_154,&iStack_14c);
          fn_82B8EB40(iVar6,puVar38,&uStack_170,&uStack_158,&uStack_15c);
          uVar21 = *(uint *)(uStack_160 + 8) >> 7 & 0x7f;
          if ((uVar21 == 0x7d) || (bVar23 = false, uVar21 == 0x7c)) {
            bVar23 = true;
          }
          if (!bVar23) {
            uVar21 = *(uint *)(uStack_170 + 8) >> 7 & 0x7f;
            if ((uVar21 == 0x7d) || (bVar23 = false, uVar21 == 0x7c)) {
              bVar23 = true;
            }
            if (!bVar23) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(iVar6,0xde3);
            }
          }
          fn_82B8EB40(iVar6,puVar45,&uStack_168,auStack_148,&uStack_150);
          uVar17 = auStack_148[0];
          uVar8 = uStack_150;
          uVar21 = *(uint *)(uStack_168 + 8) >> 7 & 0x7f;
          if ((uVar21 == 0x7d) || (bVar23 = false, uVar21 == 0x7c)) {
            bVar23 = true;
          }
          if (!bVar23) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(iVar6,0xde4);
          }
          uVar21 = *(uint *)(puVar45[3] + 8) >> 7 & 0x7f;
          if ((uVar21 == 0x7d) || (bVar23 = false, uVar21 == 0x7c)) {
            bVar23 = true;
          }
          puStack_180 = puVar38;
          puStack_178 = puVar32;
          puStack_174 = puVar45;
          if (!bVar23) {
            uVar21 = *puVar45;
            puVar7 = (uint *)fn_82AD17B0(iVar6);
            *puVar7 = (uVar21 >> 0x19 & 7) << 0x19 | *puVar7 & 0xf1ffffff;
            fn_82AD1270(puVar7,uVar8);
            *puVar7 = (uVar17 & 0xff) << 5 | *puVar7 & 0xffffe01f;
            puStack_174 = puVar7;
          }
          iVar19 = iStack_14c;
          uVar39 = uStack_154;
          uVar17 = uStack_158;
          uVar8 = uStack_15c;
          uVar21 = *(uint *)(puVar32[3] + 8) >> 7 & 0x7f;
          if ((uVar21 == 0x7d) || (bVar23 = false, uVar21 == 0x7c)) {
            bVar23 = true;
          }
          if (!bVar23) {
            uVar21 = *(uint *)(puVar38[3] + 8) >> 7 & 0x7f;
            if ((uVar21 == 0x7d) || (bVar23 = false, uVar21 == 0x7c)) {
              bVar23 = true;
            }
            if (!bVar23) {
              uVar21 = *(uint *)(uStack_160 + 8) >> 7 & 0x7f;
              if ((uVar21 == 0x7d) || (bVar23 = false, uVar21 == 0x7c)) {
                bVar23 = true;
              }
              if (bVar23) {
                uVar21 = *puVar32;
                puVar7 = (uint *)fn_82AD17B0(iVar6);
                *puVar7 = (uVar21 >> 0x19 & 7) << 0x19 | *puVar7 & 0xf1ffffff;
                fn_82AD1270(puVar7,iVar19);
                uVar17 = uStack_158;
                uVar8 = uStack_15c;
                *puVar7 = (uVar39 & 0xff) << 5 | *puVar7 & 0xffffe01f;
                uVar21 = *(uint *)(uStack_170 + 8) >> 7 & 0x7f;
                if ((uVar21 == 0x7d) || (bVar23 = false, uVar21 == 0x7c)) {
                  bVar23 = true;
                }
                puStack_164 = puVar7;
                if (bVar23) {
                  uVar21 = *puVar38;
                  puVar7 = (uint *)fn_82AD17B0(iVar6);
                  *puVar7 = (uVar21 >> 0x19 & 7) << 0x19 | *puVar7 & 0xf1ffffff;
                  fn_82AD1270(puVar7,uVar8);
                  *puVar7 = (uVar17 & 0xff) << 5 | *puVar7 & 0xffffe01f;
                  puStack_16c = puVar7;
                  cVar15 = fn_82AF9290(iVar6,&puStack_164,&puStack_16c,&puStack_174);
                  if (cVar15 == '\0') {
                    cVar15 = fn_82AF9290(iVar6,&puStack_178,&puStack_16c,&puStack_174);
                    if (cVar15 == '\0') goto LAB_82af0ba8;
                    puStack_180 = puStack_16c;
                  }
                  else {
                    puStack_178 = puStack_164;
                    puStack_180 = puStack_16c;
                  }
                }
                else {
LAB_82af0ba8:
                  cVar15 = fn_82AF9290(iVar6,&puStack_164,&puStack_180,&puStack_174);
                  if (cVar15 == '\0') {
                    /* WARNING: Subroutine does not return */
                    fn_82AA66A8(iVar6,0xe2d);
                  }
                  puStack_178 = puStack_164;
                }
              }
              else {
                uVar21 = *puVar38;
                puVar7 = (uint *)fn_82AD17B0(iVar6,uStack_170);
                *puVar7 = (uVar21 >> 0x19 & 7) << 0x19 | *puVar7 & 0xf1ffffff;
                fn_82AD1270(puVar7,uVar8);
                *puVar7 = (uVar17 & 0xff) << 5 | *puVar7 & 0xffffe01f;
                puStack_180 = puVar7;
                cVar15 = fn_82AF9290(iVar6,&puStack_178,&puStack_180,&puStack_174);
                if (cVar15 == '\0') {
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(iVar6,0xe2d);
                }
              }
            }
          }
          puVar7 = puStack_178;
          if (puStack_178 != puVar32) {
            fn_82AD20C0(uVar31,*(undefined4 *)(uVar31 + 0x2c),iVar6);
            uVar8 = fn_82AD1978(uVar31,puVar7);
            *(undefined4 *)(uVar31 + 0x2c) = uVar8;
          }
          puVar32 = puStack_180;
          if (puStack_180 != puVar38) {
            fn_82AD20C0(uVar31,*(undefined4 *)(uVar31 + 0x30),iVar6);
            uVar8 = fn_82AD1978(uVar31,puVar32);
            *(undefined4 *)(uVar31 + 0x30) = uVar8;
          }
          puVar38 = puStack_174;
          if (puStack_174 != puVar45) {
            fn_82AD20C0(uVar31,*(undefined4 *)(uVar31 + 0x34),iVar6);
            uVar8 = fn_82AD1978(uVar31,puVar38);
            *(undefined4 *)(uVar31 + 0x34) = uVar8;
          }
          if ((*(uint *)(uStack_160 + 8) & 0x3f80) == 16000) {
            fn_82AEFCD8();
            *(uint *)(uStack_160 + 8) = *(uint *)(uStack_160 + 8) | 0x1000000;
          }
          if ((*(uint *)(uStack_170 + 8) & 0x3f80) == 16000) {
            fn_82AEFCD8();
            *(uint *)(uStack_170 + 8) = *(uint *)(uStack_170 + 8) | 0x1000000;
          }
          if ((*(uint *)(uStack_168 + 8) & 0x3f80) == 16000) {
            fn_82AEFCD8();
            *(uint *)(uStack_168 + 8) = *(uint *)(uStack_168 + 8) | 0x1000000;
          }
          cStack_17c = '\x01';
        }
LAB_82af0d38:;}
    }
  }
  puVar38 = *(uint **)(iVar6 + 4);
  if ((((uint)puVar38 & 1) != 0) || (puStack_16c = puVar38, puVar38 == (uint *)0x0)) {
LAB_82af3b70:
    for (uVar9 = *(uint *)((-(uint)((*(uint *)(iVar6 + 4) & 1) == 0) & *(uint *)(iVar6 + 4)) + 0x14)
        ; uVar9 = -(uint)((uVar9 & 1) == 0) & uVar9, uVar9 != 0;
        uVar9 = *(uint *)((uVar9 & 0xfffffffe) + 0x28)) {
      if ((*(uint *)(uVar9 + 8) & 0x3f80) == 0x3e00) {
        iVar19 = fn_82AD16B8(uVar9,iVar6);
        puVar38 = (uint *)(iVar19 * 0x28 + *(int *)(iVar6 + 0xc));
        uVar31 = *(uint *)(iVar19 * 0x28 + *(int *)(iVar6 + 0xc));
        if ((((uVar31 & 0x80000) == 0) || ((puVar38[1] & 0x70) == 0)) && (puVar38[9] == 0)) {
          uVar21 = 0;
          iVar12 = 0;
          while( true ) {
            if ((uVar31 >> 3 & 0x3fff) <= uVar21) goto LAB_82af3c48;
            if ((*(uint *)(puVar38[7] + iVar12) & 0xc0000) != 0x40000) break;
            uVar21 = uVar21 + 1;
            iVar12 = iVar12 + 8;
          }
LAB_82af3f94:
          uVar21 = 0;
          if ((puVar38[1] & 0x70) == 0) {
            piVar40 = (int *)(uVar9 + 4);
            for (iVar12 = *(int *)(uVar9 + 4); iVar12 != 0; iVar12 = *(int *)(iVar12 + 8)) {
              uVar31 = *(uint *)(iVar12 + 0x10);
              if ((uVar31 != 0) && ((*(uint *)(uVar31 + 8) & 0x3f80) == 0x3500)) goto LAB_82af40a8;
            }
            uVar31 = fn_82B841E8(iVar6,-(uint)((*(uint *)(iVar6 + 4) & 1) == 0) &
                                             *(uint *)(iVar6 + 4),0,0x6a,1,1);
            uVar17 = uVar31 & 0xfffffffe;
            uVar39 = -(uint)((*(uint *)(iVar6 + 4) & 1) == 0) & *(uint *)(iVar6 + 4);
            *(undefined4 *)(uVar17 + 0x28) = *(undefined4 *)(uVar39 + 0x1c);
            *(uint *)((*(uint *)(uVar39 + 0x1c) & 0xfffffffe) + 0x24) = uVar17 + 0x28;
            *(uint *)(uVar17 + 0x24) = uVar39 + 0x1c | 1;
            *(uint *)(uVar39 + 0x1c) = uVar17;
            uVar4 = fn_82AD17B0(iVar6,uVar9);
            fn_82AC9EE0(uVar31,0,uVar4);
LAB_82af40a8:
            while (iVar12 = *piVar40, iVar12 != 0) {
              uVar17 = *(uint *)(iVar12 + 0x10);
              if ((uVar17 != 0) && (uVar17 != uVar31)) {
                if (*(uint *)(uVar17 + 0x1c) ==
                    (-(uint)((*(uint *)(iVar6 + 4) & 1) == 0) & *(uint *)(iVar6 + 4))) {
                  piVar10 = (int *)(*(int *)(iVar12 + 0xc) + 4);
                  for (iVar11 = *piVar10; iVar11 != iVar12; iVar11 = *(int *)(iVar11 + 8)) {
                    piVar10 = (int *)(iVar11 + 8);
                  }
                  *piVar10 = *(int *)(iVar12 + 8);
                  *(undefined4 *)(iVar12 + 8) = *(undefined4 *)(uVar31 + 4);
                  *(int *)(uVar31 + 4) = iVar12;
                  *(uint *)(iVar12 + 0xc) = uVar31;
                }
                else {
                  iVar11 = fn_82B10120(iVar6,*(uint *)(uVar17 + 0x1c),uVar31,0,0,1);
                  if ((*(uint *)(iVar11 + 0x10) & 0xffff) == 0) {
                    *(uint *)(iVar11 + 0x10) = *(uint *)(iVar11 + 0x10) & 0xfff8ffff | 0x10000;
                    *(short *)(iVar11 + 0x12) = (short)*(undefined4 *)(iVar6 + 0x74) + 1;
                    *(uint *)(iVar6 + 0x74) =
                         (*(ushort *)(iVar11 + 0x10) & 7) + *(int *)(iVar6 + 0x74);
                  }
                  piVar10 = (int *)(*(int *)(iVar12 + 0xc) + 4);
                  for (iVar13 = *piVar10; iVar13 != iVar12; iVar13 = *(int *)(iVar13 + 8)) {
                    piVar10 = (int *)(iVar13 + 8);
                  }
                  *piVar10 = *(int *)(iVar12 + 8);
                  *(undefined4 *)(iVar12 + 8) = *(undefined4 *)(iVar11 + 4);
                  *(int *)(iVar11 + 4) = iVar12;
                  *(int *)(iVar12 + 0xc) = iVar11;
                }
              }
              if (*piVar40 == iVar12) {
                piVar40 = (int *)(iVar12 + 8);
              }
            }
            fn_82AD1B28(uVar31);
            *(uint *)(uVar31 + 8) = *(uint *)(uVar31 + 8) | 0x1000000;
            fn_82B0FD38(iVar6,uVar31);
          }
LAB_82af3c48:
          if (uVar21 == (*puVar38 >> 3 & 0x3fff)) {
            for (uVar31 = *(uint *)((-(uint)((*(uint *)(iVar6 + 4) & 1) == 0) & *(uint *)(iVar6 + 4)
                                    ) + 0x14); uVar31 = -(uint)((uVar31 & 1) == 0) & uVar31,
                uVar31 != 0; uVar31 = *(uint *)((uVar31 & 0xfffffffe) + 0x28)) {
              if (((*(uint *)(uVar31 + 8) & 0x3f80) == 0x3e00) &&
                 (iVar12 = fn_82AD16B8(uVar31,iVar6), iVar19 == iVar12)) {
                for (iVar12 = *(int *)(uVar31 + 4); iVar12 != 0; iVar12 = *(int *)(iVar12 + 8)) {
                  iVar11 = *(int *)(iVar12 + 0x10);
                  if (iVar11 != 0) {
                    uVar21 = *(uint *)(iVar11 + 8);
                    uVar17 = uVar21 >> 7 & 0x7f;
                    if (((((uVar17 != 0x3b) && (uVar17 != 0x3c)) && (uVar17 != 0x15)) &&
                        (((uVar17 != 0x16 && (uVar17 != 0x75)) && (uVar17 != 0x5a)))) ||
                       ((iVar13 = *(int *)(iVar11 + 0x1c), (*(byte *)(iVar13 + 0x4c) & 1) != 0 ||
                        ((cVar15 = fn_82ABDA10(iVar11), cVar15 != '\0' &&
                         ((uVar21 >> 0x11 & 1) != 0)))))) goto LAB_82af3f94;
                    if ((*(uint *)(iVar13 + 0x30) >> 0x1a & 1) != 0) {
                      if ((*(uint *)(iVar6 + 0x2c) & 0x8000) != 0) goto LAB_82af3f94;
                      fn_82AEFC28(&puStack_180,(ulonglong)*(uint *)(iVar6 + 0x5c) + 1,
                                    0xffffffff82af07e8,iVar6);
                      ppuVar22 = (uint **)(puStack_180 + 1);
                      if ((~(uint)puStack_180 & 1) == 0) {
                        ppuVar22 = &puStack_180;
                      }
                      uVar3 = ((ulonglong)*(uint *)(iVar13 + 0x30) & 0x7ffff) + 1;
                      uVar21 = (uint)(uVar3 >> 3) & 0x1ffffffc;
                      *(uint *)(uVar21 + (int)ppuVar22) =
                           1 << ((uint)uVar3 & 0x1f) | *(uint *)(uVar21 + (int)ppuVar22);
                      puVar45 = puStack_180;
                      for (uVar21 = *(uint *)(iVar6 + 4); ((uVar21 & 1) == 0 && (uVar21 != 0));
                          uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 4)) {
                        if ((*(uint *)(uVar21 + 0x4c) >> 0x16 & 1) != 0) {
                          iVar13 = fn_82ABDCB0(uVar21);
                          ppuVar22 = (uint **)(puVar45 + 1);
                          if ((~(uint)puVar45 & 1) == 0) {
                            ppuVar22 = &puStack_180;
                          }
                          uVar3 = ((ulonglong)*(uint *)(iVar13 + 0x30) & 0x7ffff) + 1;
                          if ((*(uint *)(((uint)(uVar3 >> 3) & 0x1ffffffc) + (int)ppuVar22) >>
                               ((uint)uVar3 & 0x1f) & 1) != 0) {
                            ppuVar22 = (uint **)(puVar45 + 1);
                            if ((~(uint)puVar45 & 1) == 0) {
                              ppuVar22 = &puStack_180;
                            }
                            uVar3 = ((ulonglong)*(uint *)(uVar21 + 0x30) & 0x7ffff) + 1;
                            uVar17 = (uint)(uVar3 >> 3) & 0x1ffffffc;
                            *(uint *)(uVar17 + (int)ppuVar22) =
                                 1 << ((uint)uVar3 & 0x1f) | *(uint *)(uVar17 + (int)ppuVar22);
                            if ((*(uint *)(uVar21 + 0x30) & 0x2000000) != 0) goto LAB_82af3f94;
                            if ((*(uint *)(uVar21 + 0x30) >> 0x18 & 1) == 0) {
                              uVar17 = *(uint *)(iVar11 + 8) >> 7 & 0x7f;
                              if ((uVar17 < 0x15) || (bVar23 = true, 0x18 < uVar17)) {
                                bVar23 = false;
                              }
                              if (!bVar23) goto LAB_82af3f94;
                            }
                            puVar45 = puStack_180;
                            if ((*(byte *)(uVar21 + 0x4c) & 1) != 0) goto LAB_82af3f94;
                          }
                        }
                      }
                      for (iVar13 = *(int *)(uVar31 + 4); iVar13 != 0; iVar13 = *(int *)(iVar13 + 8)
                          ) {
                        if ((*(int *)(iVar13 + 0x10) != 0) && (iVar13 != iVar12)) {
                          ppuVar22 = (uint **)(puVar45 + 1);
                          if ((~(uint)puVar45 & 1) == 0) {
                            ppuVar22 = &puStack_180;
                          }
                          uVar21 = (*(uint *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x1c) + 0x30) &
                                   0x7ffff) + 1;
                          if ((*(uint *)((uVar21 >> 3 & 0x1ffffffc) + (int)ppuVar22) >>
                               (uVar21 & 0x1f) & 1) != 0) goto LAB_82af3f94;
                        }
                      }
                    }
                    for (puVar45 = *(uint **)(iVar11 + 4); puVar45 != (uint *)0x0;
                        puVar45 = (uint *)puVar45[2]) {
                      uVar21 = puVar45[4];
                      if (uVar21 != 0) {
                        uVar17 = *puVar45;
                        if (((uVar17 & 0x40000000) == 0) ||
                           (bVar23 = true, (uVar17 & 0xe000000) != 0)) {
                          bVar23 = false;
                        }
                        if (bVar23) {
                          uVar17 = *(uint *)(uVar21 + 8) >> 7 & 0x7f;
                          if ((uVar17 == 0x5a) || (bVar23 = false, uVar17 == 0x57)) {
                            bVar23 = true;
                          }
                          if ((!bVar23) ||
                             (((cVar15 = fn_82ABDB58(uVar21), cVar15 != '\0' &&
                               (iVar11 = fn_82ABE0E8(uVar21,iVar6), 7 < iVar11)) &&
                              (iVar11 < 10)))) goto LAB_82af3f94;
                        }
                        else if (((uVar17 & 0xe000000) == 0) ||
                                ((*(uint *)(uVar21 + 8) & 0x3f80) != 0x3800)) goto LAB_82af3f94;
                      }
                    }
                  }
                }
              }
            }
            piVar40 = (int *)(uVar9 + 4);
            while (iVar19 = *piVar40, iVar19 != 0) {
              iVar12 = *(int *)(iVar19 + 0x10);
              if (((iVar12 != 0) && (uVar31 = *(uint *)(iVar12 + 8) >> 7 & 0x7f, uVar31 != 0x75)) &&
                 (((uVar31 == 0x3b || ((uVar31 == 0x3c || (uVar31 == 0x15)))) || (uVar31 == 0x16))))
              {
                iVar11 = *(int *)(iVar12 + 0x1c);
                uVar21 = fn_82B841E8(iVar6,iVar11,0,0x75,0,0);
                uVar31 = uVar21 & 0xfffffffe;
                *(undefined4 *)(uVar31 + 0x28) = *(undefined4 *)(iVar11 + 0x24);
                *(uint *)((*(uint *)(iVar11 + 0x24) & 0xfffffffe) + 0x24) = uVar31 + 0x28;
                *(uint *)(uVar31 + 0x24) = iVar11 + 0x24U | 1;
                *(uint *)(iVar11 + 0x24) = uVar31;
                *(uint *)(uVar21 + 8) = *(uint *)(uVar21 + 8) | 0x3000000;
                uVar8 = fn_82AD1978(uVar21,iVar19);
                if ((*(uint *)(iVar11 + 0x30) >> 0x1a & 1) != 0) {
                  fn_82AEFC28(&puStack_178,(ulonglong)*(uint *)(iVar6 + 0x5c) + 1,
                                0xffffffff82af07e8,iVar6);
                  ppuVar22 = (uint **)(puStack_178 + 1);
                  if ((~(uint)puStack_178 & 1) == 0) {
                    ppuVar22 = &puStack_178;
                  }
                  uVar3 = ((ulonglong)*(uint *)(iVar11 + 0x30) & 0x7ffff) + 1;
                  bVar23 = false;
                  uVar31 = (uint)(uVar3 >> 3) & 0x1ffffffc;
                  *(uint *)(uVar31 + (int)ppuVar22) =
                       1 << ((uint)uVar3 & 0x1f) | *(uint *)(uVar31 + (int)ppuVar22);
                  for (uVar31 = *(uint *)(iVar6 + 4); ((uVar31 & 1) == 0 && (uVar31 != 0));
                      uVar31 = *(uint *)((uVar31 & 0xfffffffe) + 4)) {
                    if ((*(uint *)(uVar31 + 0x4c) >> 0x16 & 1) != 0) {
                      iVar13 = fn_82ABDCB0(uVar31);
                      ppuVar22 = (uint **)(puStack_178 + 1);
                      if ((~(uint)puStack_178 & 1) == 0) {
                        ppuVar22 = &puStack_178;
                      }
                      uVar3 = ((ulonglong)*(uint *)(iVar13 + 0x30) & 0x7ffff) + 1;
                      if ((*(uint *)(((uint)(uVar3 >> 3) & 0x1ffffffc) + (int)ppuVar22) >>
                           ((uint)uVar3 & 0x1f) & 1) != 0) {
                        ppuVar22 = (uint **)(puStack_178 + 1);
                        if ((~(uint)puStack_178 & 1) == 0) {
                          ppuVar22 = &puStack_178;
                        }
                        uVar3 = ((ulonglong)*(uint *)(uVar31 + 0x30) & 0x7ffff) + 1;
                        uVar21 = (uint)(uVar3 >> 3) & 0x1ffffffc;
                        *(uint *)(uVar21 + (int)ppuVar22) =
                             1 << ((uint)uVar3 & 0x1f) | *(uint *)(uVar21 + (int)ppuVar22);
                        uVar39 = *(uint *)(iVar12 + 8) >> 7 & 0x7f;
                        uVar17 = *(uint *)(uVar31 + 0x4c) >> 0x17;
                        uVar21 = uVar17 & 1;
                        if ((uVar39 == 0x3b) || (uVar39 == 0x15)) {
                          uVar21 = (uint)((uVar17 & 1) == 0);
                        }
                        if (bVar23) {
                          uVar21 = (uint)(uVar21 == 0);
                        }
                        if ((*(uint *)(uVar31 + 0x30) >> 0x18 & 1) == 0) {
                          *(uint *)(uVar31 + 0x30) = *(uint *)(uVar31 + 0x30) | 0x1000000;
                        }
                        *(int *)(uVar31 + 0x6c) = iVar11;
                        *(undefined4 *)(uVar31 + 0x48) = uVar8;
                        *(uint *)(uVar31 + 0x30) = *(uint *)(uVar31 + 0x30) | 0x1800000;
                        *(uint *)(uVar31 + 0x4c) =
                             uVar21 << 0x19 | *(uint *)(uVar31 + 0x4c) & 0xfdffffff | 0x1000000;
                        iVar13 = fn_82ABDCB0(uVar31);
                        if (iVar13 == iVar11) {
                          uVar21 = *(uint *)(iVar11 + 0x4c);
                          if ((uVar21 >> 0x16 & 1) == 0) {
                            uVar21 = *(uint *)(uVar31 + 0x4c) & 0xffbfffff;
                          }
                          else {
                            uVar14 = fn_82ABDCB0(iVar11);
                            *(undefined4 *)(uVar31 + 0x70) = uVar14;
                            *(uint *)(uVar31 + 0x30) = *(uint *)(uVar31 + 0x30) | 0x800000;
                            uVar21 = (uVar21 >> 0x17 & 1) << 0x17 |
                                     *(uint *)(uVar31 + 0x4c) & 0xff7fffff | 0x400000;
                          }
                          *(uint *)(uVar31 + 0x4c) = uVar21;
                          uVar21 = *(uint *)(iVar12 + 8) >> 7 & 0x7f;
                          if ((uVar21 < 0x15) || (bVar2 = true, 0x18 < uVar21)) {
                            bVar2 = false;
                          }
                          if (((bVar2) && (*(int *)(uVar31 + 0x60) != 0)) &&
                             ((*(uint *)(*(int *)(uVar31 + 0x60) + 8) & 0x3f80) == 0x1f80)) {
                            bVar23 = true;
                          }
                        }
                      }
                    }
                  }
                }
                puVar45 = (uint *)(iVar12 + 4);
                while (puVar32 = (uint *)*puVar45, puVar32 != (uint *)0x0) {
                  uVar31 = puVar32[4];
                  if (uVar31 != 0) {
                    if (((*puVar32 & 0x40000000) == 0) ||
                       (bVar23 = true, (*puVar32 & 0xe000000) != 0)) {
                      bVar23 = false;
                    }
                    if (bVar23) {
                      if ((*(uint *)(iVar12 + 8) & 0x3f80) == 0x1d80) {
                        *(uint *)(uVar31 + 8) =
                             *(uint *)(uVar31 + 8) & 0xfffbffff | ~*(uint *)(uVar31 + 8) & 0x40000;
                      }
                      *(uint *)(uVar31 + 8) = *(uint *)(uVar31 + 8) & 0xfffdffff;
                      uVar4 = fn_82AD17B0(iVar6,uVar9);
                      fn_82AD35A8(uVar31,0,uVar4,iVar6);
                    }
                    else {
                      piVar10 = (int *)(uVar31 + 4);
                      while (iVar11 = *piVar10, iVar11 != 0) {
                        iVar13 = *(int *)(iVar11 + 0x10);
                        if ((iVar13 != 0) &&
                           ((uVar31 = *(uint *)(iVar13 + 8) >> 7 & 0x7f, uVar31 == 0x40 ||
                            (uVar31 == 0x3f)))) {
                          fn_82AD1C60(iVar6,iVar13,1);
                        }
                        if (*piVar10 == iVar11) {
                          piVar10 = (int *)(iVar11 + 8);
                        }
                      }
                    }
                  }
                  if ((uint *)*puVar45 == puVar32) {
                    puVar45 = puVar32 + 2;
                  }
                }
                uVar31 = *(uint *)(iVar12 + 8) >> 7 & 0x7f;
                if ((uVar31 < 0x15) || (bVar23 = true, 0x18 < uVar31)) {
                  bVar23 = false;
                }
                if (bVar23) {
                  fn_82AD1C60();
                }
                else {
                  fn_82B8AC10(iVar6,iVar12,0,1);
                }
              }
              if (*piVar40 == iVar19) {
                piVar40 = (int *)(iVar19 + 8);
              }
            }
            puVar38[1] = puVar38[1] & 0xffffff8f;
          }
        }
      }
    }
    if ((*(uint *)(iVar6 + 0x2c) & 4) != 0) {
      for (uVar9 = *(uint *)(iVar6 + 4); ((uVar9 & 1) == 0 && (uVar9 != 0));
          uVar9 = *(uint *)((uVar9 & 0xfffffffe) + 4)) {
        uVar31 = *(uint *)(uVar9 + 0x1c);
        uVar21 = 0;
        while ((uVar17 = uVar31, (uVar17 & 1) == 0 && (uVar17 != 0))) {
          uVar31 = *(uint *)(uVar17 + 8);
          if ((uVar31 & 0x3f80) == 0x3400) {
            iVar19 = fn_82AD1670(uVar17,iVar6);
            if ((*(uint *)(iVar19 + 4) & 0x200000) == 0) {
              if ((*(uint *)(iVar19 + 4) & 0x400000) != 0) {
                puVar38 = *(uint **)(uVar17 + 0x2c);
                uVar39 = puVar38[3];
                if ((((*(uint *)(uVar39 + 8) ^ uVar31) & 0x1c000) == 0) ||
                   (iVar19 = fn_82AD0098(uVar17), iVar19 == 0)) {
                  for (puVar45 = *(uint **)(uVar39 + 4); puVar45 != (uint *)0x0;
                      puVar45 = (uint *)puVar45[2]) {
                    uVar31 = puVar45[4];
                    if ((((uVar31 != 0) && ((*puVar45 & 0xe000000) != 0)) && (uVar31 != uVar17)) &&
                       (((*(uint *)(uVar31 + 8) & 0x3f80) != 0x3400 &&
                        (iVar19 = fn_82AD1670(uVar31,iVar6),
                        (*(uint *)(iVar19 + 4) & 0x400000) == 0)))) goto LAB_82af48cc;
                  }
                  puVar45 = (uint *)(uVar17 + 4);
                  while (puVar32 = (uint *)*puVar45, puVar32 != (uint *)0x0) {
                    if (puVar32[4] != 0) {
                      puVar37 = (uint *)(puVar32[3] + 4);
                      for (puVar7 = (uint *)*puVar37; puVar7 != puVar32; puVar7 = (uint *)puVar7[2])
                      {
                        puVar37 = puVar7 + 2;
                      }
                      *puVar37 = puVar32[2];
                      puVar32[2] = *(uint *)(uVar39 + 4);
                      *(uint **)(uVar39 + 4) = puVar32;
                      puVar32[3] = uVar39;
                      fn_82ACA598(puVar32,*puVar38 >> 5 & 0xff);
                      uVar31 = *puVar32;
                      uVar44 = fn_82AD1228(*puVar38 & 0x1f,uVar31 & 0x1f);
                      *puVar32 = uVar31 & 0xffffffe0 | uVar44 & 0x1f;
                    }
                    if ((uint *)*puVar45 == puVar32) {
                      puVar45 = puVar32 + 2;
                    }
                  }
                  if ((*(uint *)(uVar17 + 8) >> 0x17 & 1) != 0) {
                    uVar31 = *(uint *)(uVar39 + 8);
                    goto joined_r0x82af48a8;
                  }
                  goto LAB_82af48b8;
                }
              }
            }
            else {
              puVar38 = *(uint **)(uVar17 + 0x2c);
              if (((*(uint *)(puVar38[3] + 8) & 0x3f80) != 0x3700) ||
                 (iVar19 = fn_82AD0098(uVar17), iVar19 == 0)) {
                puVar45 = (uint *)(uVar17 + 4);
                while (puVar32 = (uint *)*puVar45, puVar32 != (uint *)0x0) {
                  if (puVar32[4] != 0) {
                    uVar31 = puVar38[3];
                    puVar37 = (uint *)(puVar32[3] + 4);
                    for (puVar7 = (uint *)*puVar37; puVar7 != puVar32; puVar7 = (uint *)puVar7[2]) {
                      puVar37 = puVar7 + 2;
                    }
                    *puVar37 = puVar32[2];
                    puVar32[2] = *(uint *)(uVar31 + 4);
                    *(uint **)(uVar31 + 4) = puVar32;
                    puVar32[3] = uVar31;
                    fn_82ACA598(puVar32,*puVar38 >> 5 & 0xff);
                    uVar31 = *puVar32;
                    uVar39 = fn_82AD1228(*puVar38 & 0x1f,uVar31 & 0x1f);
                    *puVar32 = uVar31 & 0xffffffe0 | uVar39 & 0x1f;
                  }
                  if ((uint *)*puVar45 == puVar32) {
                    puVar45 = puVar32 + 2;
                  }
                }
                if ((*(uint *)(uVar17 + 8) >> 0x17 & 1) != 0) {
                  uVar39 = puVar38[3];
                  uVar31 = *(uint *)(uVar39 + 8);
joined_r0x82af48a8:
                  if ((uVar31 >> 0x17 & 1) == 0) {
                    fn_82B102D8(iVar6,uVar39);
                  }
                }
LAB_82af48b8:
                fn_82B8AC10(iVar6,uVar17,0,1);
              }
            }
          }
LAB_82af48cc:
          if (uVar21 == 0) {
            if (uVar17 == (-(uint)((*(uint *)(uVar9 + 0x1c) & 1) == 0) & *(uint *)(uVar9 + 0x1c)))
            goto LAB_82af48f4;
            uVar31 = *(uint *)(uVar9 + 0x1c);
          }
          else {
            uVar31 = *(uint *)((uVar21 & 0xfffffffe) + 0x28);
            if (uVar17 == (-(uint)((uVar31 & 1) == 0) & uVar31)) {
LAB_82af48f4:
              uVar31 = *(uint *)((uVar17 & 0xfffffffe) + 0x28);
              uVar21 = uVar17;
            }
          }
        }
      }
    }
    fn_82F6A58C();
    return;
  }
  dVar47 = (double)lbl_82002AE0;
  dVar50 = (double)lbl_821AAD20;
  dVar48 = (double)lbl_82005340;
  dVar51 = (double)lbl_8200133C;
  dVar49 = lbl_82005710;
LAB_82af0db4:
  uVar9 = 0;
  uStack_158 = 0;
  if (*(uint *)(iVar6 + 0x314) != 0xffffffff) {
    for (uVar31 = puVar38[7]; ((uVar31 & 1) == 0 && (uVar31 != 0));
        uVar31 = *(uint *)((uVar31 & 0xfffffffe) + 0x28)) {
      if ((*(uint *)(uVar31 + 8) >> 5 & 1) != 0) {
        uVar21 = *(uint *)(uVar31 + 8) >> 7 & 0x7f;
        if ((uVar21 == 0) || (bVar23 = true, 0x66 < uVar21)) {
          bVar23 = false;
        }
        if (bVar23) {
          uVar9 = uVar9 + 1;
          uStack_158 = uVar9;
        }
      }
    }
    if (*(uint *)(iVar6 + 0x314) < uVar9) {
      fn_82AA65B0(iVar6,0xe03);
    }
  }
  puStack_174 = (uint *)0x0;
  puVar45 = (uint *)(-(uint)((puVar38[7] & 1) == 0) & puVar38[7]);
LAB_82af0e64:
  if (puVar45 == (uint *)0x0) goto LAB_82af3b00;
  if (cStack_17c != '\0') {
    fn_82AF04D0(puVar45,iVar6);
    cVar15 = fn_82ABE2E0(puVar45);
    if (cVar15 != '\0') {
      fn_82B8AE98(iVar6,puVar45);
      goto LAB_82af0db4;
    }
  }
  uVar9 = puVar45[2];
  uVar31 = uVar9 >> 7 & 0x7f;
  if (uVar31 == 1) {
    if (((uVar9 >> 5 & 1) == 0) && ((uVar9 >> 0x19 & 1) == 0)) {
      uVar9 = 0;
      puVar32 = puVar45 + 0xb;
      puVar7 = puVar45 + 0xc;
LAB_82af2630:
      if (uVar9 < (puVar45[2] >> 0x13 & 7)) {
        puVar37 = (uint *)*puVar32;
        uVar31 = *puVar37;
        if ((uVar31 & 0x1f) != 0) goto LAB_82af2b7c;
        puStack_180 = (uint *)*puVar7;
        puVar34 = (uint *)puVar37[3];
        for (uVar21 = puVar34[1]; uVar21 != 0; uVar21 = *(uint *)(uVar21 + 8)) {
          if ((*(uint **)(uVar21 + 0x10) != (uint *)0x0) && (*(uint **)(uVar21 + 0x10) != puVar45))
          {
            bVar23 = true;
            goto LAB_82af2690;
          }
        }
        bVar23 = false;
LAB_82af2690:
        if ((bVar23) || (uVar21 = puVar34[2], (uVar21 >> 0x17 & 1) != 0)) goto LAB_82af2b7c;
        uVar17 = uVar21 >> 7 & 0x7f;
        if (uVar17 == 0x6e) {
          if ((uint *)puStack_180[3] == puVar34) goto LAB_82af2b7c;
          uVar17 = uVar31 >> 0x19 & 7;
          uVar39 = 0;
          uVar44 = 0;
          if (uVar17 != 0) {
            uVar28 = 0;
            do {
              uVar44 = uVar44 + 1;
              uVar27 = uVar28 & 0x3f;
              uVar28 = uVar28 + 2;
              uVar39 = 1 << ((uVar31 >> 5 & 0xff) >> uVar27 & 3) | uVar39;
            } while (uVar44 < uVar17);
          }
          if (((uVar39 != (uVar21 >> 1 & 0xf)) ||
              (uVar31 = uVar21 >> 0xe & 7, uVar31 != (uVar21 >> 0x13 & 7))) || (uVar17 != uVar31))
          goto LAB_82af2b7c;
          puVar33 = puVar45 + 1;
          for (puVar25 = (uint *)puVar45[1]; puVar25 != (uint *)0x0; puVar25 = (uint *)puVar25[2]) {
            uVar31 = puVar25[4];
            if (((uVar31 != 0) && ((*(uint *)(uVar31 + 8) & 0x3f80) == 0x3700)) &&
               ((*puVar25 & 0xe000000) != 0)) goto LAB_82af275c;
          }
          uVar31 = 0;
LAB_82af275c:
          if ((uVar31 != 0) ||
             (cVar15 = fn_82B8D2B8(iVar6,puVar34,puVar45,1,0), cVar15 == '\0'))
          goto LAB_82af2b7c;
          uVar31 = *puVar37;
          uVar3 = 0;
          if ((uVar31 & 0xe000000) != 0) {
            uVar21 = 0;
            while( true ) {
              iVar19 = *(int *)(puVar34[((uVar31 >> 5 & 0xff) >> (uVar21 & 0x3f) & 3) + 0xb] + 0xc);
              if ((((*(uint *)(iVar19 + 8) & 0x3f80) != 0x900) || ((*(uint *)(iVar19 + 8) & 1) != 0)
                  ) || (cVar15 = fn_82ABF768(dVar49,*(undefined4 *)(iVar19 + 0x34)),
                       cVar15 == '\0')) break;
              for (iVar12 = *(int *)(iVar19 + 4); iVar12 != 0; iVar12 = *(int *)(iVar12 + 8)) {
                if ((*(uint **)(iVar12 + 0x10) != (uint *)0x0) &&
                   (*(uint **)(iVar12 + 0x10) != puVar34)) goto LAB_82af2928;
              }
              uStack_154 = *(uint *)(iVar19 + 0x2c);
              uStack_15c = *(undefined4 *)(iVar19 + 0x30);
              uStack_170 = fn_82B471E8(iVar6,puStack_180,uVar3);
              cVar16 = fn_82AF9290(iVar6,&uStack_154,&uStack_15c,&uStack_170);
              cVar15 = '\0';
              if (cVar16 != '\0') {
                cVar15 = fn_82AF4D10(iVar6,uStack_154,iVar19,uStack_15c,iVar19,uStack_170,
                                           puVar45,auStack_120);
              }
              puVar24 = (undefined4 *)(*(int *)(uStack_170 + 0xc) + 4);
              for (uVar31 = *(uint *)(*(int *)(uStack_170 + 0xc) + 4); uVar31 != uStack_170;
                  uVar31 = *(uint *)(uVar31 + 8)) {
                puVar24 = (undefined4 *)(uVar31 + 8);
              }
              *puVar24 = *(undefined4 *)(uVar31 + 8);
              fn_82ABE5F8(iVar6,uStack_170,0x14,0x1a);
              if (((cVar15 == '\0') ||
                  (cVar15 = fn_82B8D2B8(iVar6,iVar19,puVar34,1,0), cVar15 == '\0')) ||
                 ((cVar15 = fn_82B85910(iVar19,puStack_180[3]), cVar15 == '\0' &&
                  (cVar15 = fn_82B8BCB0(iVar6,puStack_180[3],iVar19,0), cVar15 == '\0'))))
              break;
              uVar31 = *puVar37;
              uVar3 = uVar3 + 1;
              uVar21 = uVar21 + 2;
              if (((ulonglong)(uVar31 >> 0x19) & 7) <= (uVar3 & 0xffffffff)) break;
            }
          }
LAB_82af2928:
          uVar31 = *puVar37;
          if ((uVar3 & 0xffffffff) < ((ulonglong)(uVar31 >> 0x19) & 7)) goto LAB_82af2b7c;
          uVar3 = 0;
          if ((uVar31 >> 0x19 & 7) != 0) {
            uVar9 = 0;
            do {
              puVar32 = (uint *)puVar34[((uVar31 >> 5 & 0xff) >> (uVar9 & 0x3f) & 3) + 0xb];
              uVar31 = puVar32[3];
              iStack_14c = *(int *)(uVar31 + 0x2c);
              auStack_148[0] = *(uint *)(uVar31 + 0x30);
              uStack_150 = fn_82B471E8(iVar6,puStack_180,uVar3);
              cVar15 = fn_82AF9290(iVar6,&iStack_14c,auStack_148,&uStack_150);
              if (cVar15 == '\0') {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(iVar6,0x12c0);
              }
              cVar15 = fn_82B85910(uVar31,puStack_180[3]);
              if (cVar15 == '\0') {
                fn_82B8D488(iVar6,puStack_180[3],uVar31,0);
              }
              iVar19 = iStack_14c;
              if (iStack_14c != *(int *)(uVar31 + 0x2c)) {
                fn_82AD20C0(uVar31,*(int *)(uVar31 + 0x2c),iVar6);
                uVar8 = fn_82AD1978(uVar31,iVar19);
                *(undefined4 *)(uVar31 + 0x2c) = uVar8;
              }
              uVar21 = auStack_148[0];
              if (auStack_148[0] != *(uint *)(uVar31 + 0x30)) {
                fn_82AD20C0(uVar31,*(uint *)(uVar31 + 0x30),iVar6);
                uVar8 = fn_82AD1978(uVar31,uVar21);
                *(undefined4 *)(uVar31 + 0x30) = uVar8;
              }
              uVar8 = uStack_150;
              fn_82AD20C0(uVar31,*(undefined4 *)(uVar31 + 0x34),iVar6);
              uVar8 = fn_82AD1978(uVar31,uVar8);
              *(undefined4 *)(uVar31 + 0x34) = uVar8;
              for (puVar7 = (uint *)*puVar45; puVar7 != (uint *)0x0; puVar7 = (uint *)puVar7[1]) {
                if ((*puVar7 & 0xe000000) == 0) {
                  cVar15 = fn_82B85910(uVar31,puVar7[3]);
                  if (cVar15 == '\0') {
                    fn_82B8D488(iVar6,puVar7[3],uVar31,0);
                  }
                  fn_82AD1978(uVar31,puVar7);
                }
              }
              if ((puVar45[2] & 1) != 0) {
                *(uint *)(uVar31 + 8) = *(uint *)(uVar31 + 8) | 1;
                *puVar32 = *puVar32 | 1;
              }
              if (((puVar45[2] >> 0x17 & 1) != 0) && ((*(uint *)(uVar31 + 8) >> 0x17 & 1) == 0)) {
                fn_82B102D8(iVar6,uVar31);
              }
              uVar31 = *puVar37;
              uVar3 = uVar3 + 1;
              uVar9 = uVar9 + 2;
            } while ((uVar3 & 0xffffffff) < ((ulonglong)(uVar31 >> 0x19) & 7));
          }
          while (puVar32 = (uint *)*puVar33, puVar32 != (uint *)0x0) {
            if (puVar32[4] != 0) {
              uVar9 = *puVar32 >> 0x19 & 7;
              if (uVar9 != 0) {
                if (uVar9 == 1) {
                  puVar25 = (uint *)(puVar32[3] + 4);
                  uVar9 = *(uint *)(puVar34[((*puVar37 >> 5 & 0xff) >> (*puVar32 >> 4 & 6) & 3) +
                                            0xb] + 0xc);
                  for (puVar7 = *(uint **)(puVar32[3] + 4); puVar7 != puVar32;
                      puVar7 = (uint *)puVar7[2]) {
                    puVar25 = puVar7 + 2;
                  }
                  *puVar25 = puVar32[2];
                  puVar32[2] = *(uint *)(uVar9 + 4);
                  *(uint **)(uVar9 + 4) = puVar32;
                  puVar32[3] = uVar9;
                  uVar31 = *puVar32;
                  *puVar32 = uVar31 & 0xffffe01f;
                  if ((*(uint *)(uVar9 + 8) & 1) != 0) {
                    *puVar32 = uVar31 & 0xffffe01f | 1;
                  }
                }
                else {
                  puVar25 = (uint *)(puVar32[3] + 4);
                  for (puVar7 = (uint *)*puVar25; puVar7 != puVar32; puVar7 = (uint *)puVar7[2]) {
                    puVar25 = puVar7 + 2;
                  }
                  *puVar25 = puVar32[2];
                  puVar32[2] = puVar34[1];
                  puVar34[1] = (uint)puVar32;
                  puVar32[3] = (uint)puVar34;
                  uVar21 = *puVar32 >> 5 & 0xff;
                  uVar9 = *puVar32;
                  uVar31 = *puVar37 >> 5 & 0xff;
                  uVar31 = ((((uVar31 >> (uVar21 >> 5 & 6) & 3) << 2 |
                             uVar31 >> (uVar21 >> 3 & 6) & 3) << 2 | uVar31 >> (uVar21 >> 1 & 6) & 3
                            ) << 2 | uVar31 >> ((*puVar32 >> 5 & 3) << 1) & 3) << 5;
                  uVar21 = uVar31 | uVar9 & 0xffffe01f;
                  *puVar32 = uVar21;
                  if ((puVar45[2] & 1) != 0) {
                    *puVar32 = uVar31 | uVar9 & 0xffffe000 | uVar21 - 1 & 0x1f;
                  }
                }
              }
            }
            if ((uint *)*puVar33 == puVar32) {
              puVar33 = puVar32 + 2;
            }
          }
          fn_82B8AC10(iVar6,puVar45,0,1);
          cVar15 = fn_82ABE2E0(puVar34);
          goto joined_r0x82af37cc;
        }
        if ((((((uVar17 != 0x12) || ((uVar21 & 1) != 0)) ||
              (cVar15 = fn_82ABF768(dVar49,puVar34[0xd]), cVar15 == '\0')) ||
             (((puVar45[2] & 0x1c000) != 0x4000 || ((*puVar37 & 0xe000000) != 0x2000000)))) ||
            ((uint *)puStack_180[3] == puVar34)) ||
           (cVar15 = fn_82B8D2B8(iVar6,puVar34,puVar45,1,0), cVar15 == '\0'))
        goto LAB_82af2b7c;
        puStack_164 = (uint *)puVar34[0xb];
        puStack_178 = (uint *)puVar34[0xc];
        cVar15 = fn_82AF9290(iVar6,&puStack_164,&puStack_178,&puStack_180);
        if ((cVar15 == '\0') ||
           (cVar15 = fn_82AF4D10(iVar6,puStack_164,puVar34,puStack_178,puVar34,puStack_180,
                                       puVar45,auStack_124), cVar15 == '\0')) goto LAB_82af2b7c;
        fn_82B8D3D0(iVar6,puVar34,puVar45,1,0);
        if (puStack_164 != (uint *)puVar34[0xb]) {
          puStack_178 = (uint *)fn_82ACA920(iVar6,puStack_178,puStack_178[3]);
          fn_82AD35A8(puVar34,0,puStack_164,iVar6);
        }
        if (puStack_178 != (uint *)puVar34[0xc]) {
          fn_82AD35A8(puVar34,1,puStack_178,iVar6);
        }
        fn_82AD35A8(puVar34,2,puStack_180,iVar6);
        puVar32 = puVar45;
        while (puVar7 = (uint *)*puVar32, puVar7 != (uint *)0x0) {
          if ((*puVar7 & 0xe000000) == 0) {
            puVar37 = (uint *)puVar7[4];
            for (puVar25 = (uint *)*puVar37; puVar25 != puVar7; puVar25 = (uint *)puVar25[1]) {
              puVar37 = puVar25 + 1;
            }
            *puVar37 = puVar7[1];
            puVar7[1] = *puVar34;
            *puVar34 = (uint)puVar7;
            puVar7[4] = (uint)puVar34;
          }
          if ((uint *)*puVar32 == puVar7) {
            puVar32 = puVar7 + 1;
          }
        }
        puVar32 = puVar45 + 1;
        while (puVar7 = (uint *)*puVar32, puVar7 != (uint *)0x0) {
          if (puVar7[4] != 0) {
            puVar25 = (uint *)(puVar7[3] + 4);
            for (puVar37 = (uint *)*puVar25; puVar37 != puVar7; puVar37 = (uint *)puVar37[2]) {
              puVar25 = puVar37 + 2;
            }
            *puVar25 = puVar7[2];
            puVar7[2] = puVar34[1];
            puVar34[1] = (uint)puVar7;
            puVar7[3] = (uint)puVar34;
            if ((*puVar7 & 0xe000000) != 0) {
              *puVar7 = *puVar7 & 0xffffe01f;
            }
          }
          if ((uint *)*puVar32 == puVar7) {
            puVar32 = puVar7 + 2;
          }
        }
        if ((puVar45[2] & 1) != 0) {
          puVar34[2] = puVar34[2] | 1;
        }
        if (((puVar45[2] >> 0x17 & 1) != 0) && ((puVar34[2] >> 0x17 & 1) == 0)) {
          fn_82B102D8(iVar6,puVar34);
        }
        goto LAB_82af2fd8;
      }
      goto LAB_82af2584;
    }
  }
  else if (uVar31 == 2) {
    if (((uVar9 >> 5 & 1) == 0) && ((uVar9 >> 0x19 & 1) == 0)) {
LAB_82af2584:
      uVar42 = 0;
      uVar3 = 0;
      for (puVar32 = (uint *)puVar45[1]; puVar32 != (uint *)0x0; puVar32 = (uint *)puVar32[2]) {
        uVar9 = puVar32[4];
        if ((uVar9 != 0) && ((*puVar32 & 0xe000000) != 0)) {
          if ((*(uint *)(uVar9 + 8) & 0x3f80) != 0x80) goto LAB_82af1070;
          puVar7 = *(uint **)(uVar9 + 0x2c);
          cStack_17c = '\x01';
          if (puVar7 == puVar32) {
            puVar7 = *(uint **)(uVar9 + 0x30);
          }
          cVar15 = fn_82AEFEA8(iVar6,uVar9,puVar45,puVar32,puVar7,auStack_e0);
          if (cVar15 == '\0') goto LAB_82af1070;
          uVar3 = uVar3 + 1;
          if ((*(uint *)(uVar9 + 8) & 0x1c000) == 0x4000) {
            uVar42 = uVar42 + 1;
          }
        }
      }
      if ((uVar3 & 0xffffffff) <
          (((((uVar42 & 0xffffffff) >> 1) + (uVar42 & 1)) - uVar42) + uVar3 + 1 & 0xffffffff)) {
        puVar32 = (uint *)puVar45[1];
LAB_82af2bb0:
        if (puVar32 != (uint *)0x0) {
          puVar7 = (uint *)puVar32[4];
          if ((puVar7 == (uint *)0x0) || ((*puVar32 & 0xe000000) == 0)) goto LAB_82af2bd0;
          if ((puVar7[2] & 0x3f80) != 0x80) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(iVar6,0x12c0);
          }
          puVar37 = (uint *)puVar7[0xb];
          if (puVar37 == puVar32) {
            puVar37 = (uint *)puVar7[0xc];
          }
          cVar15 = fn_82AEFEA8(iVar6,puVar7,puVar45,puVar32,puVar37,&uStack_140);
          if (cVar15 == '\0') {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(iVar6,0x12c0);
          }
          fn_82B8D3D0(iVar6,puVar45,puVar7,1,0);
          iVar19 = fn_82AF06E8(iVar6,1,puVar7,uStack_140,uStack_13c,uStack_138);
          for (puVar32 = (uint *)*puVar7; puVar32 != (uint *)0x0; puVar32 = (uint *)puVar32[1]) {
            if ((*puVar32 & 0xe000000) == 0) {
              fn_82AD1978(iVar19,puVar32);
            }
          }
          for (puVar45 = (uint *)*puVar45; puVar45 != (uint *)0x0; puVar45 = (uint *)puVar45[1]) {
            if ((*puVar45 & 0xe000000) == 0) {
              fn_82AD1978(iVar19,puVar45);
            }
          }
          puVar45 = puVar7 + 1;
          while (uVar9 = *puVar45, uVar9 != 0) {
            if (*(int *)(uVar9 + 0x10) != 0) {
              puVar32 = (uint *)(*(int *)(uVar9 + 0xc) + 4);
              for (uVar31 = *puVar32; uVar31 != uVar9; uVar31 = *(uint *)(uVar31 + 8)) {
                puVar32 = (uint *)(uVar31 + 8);
              }
              *puVar32 = *(uint *)(uVar9 + 8);
              *(undefined4 *)(uVar9 + 8) = *(undefined4 *)(iVar19 + 4);
              *(uint *)(iVar19 + 4) = uVar9;
              *(int *)(uVar9 + 0xc) = iVar19;
            }
            if (*puVar45 == uVar9) {
              puVar45 = (uint *)(uVar9 + 8);
            }
          }
          if ((puVar7[2] & 1) != 0) {
            *(uint *)(iVar19 + 8) = *(uint *)(iVar19 + 8) | 1;
          }
          fn_82AD1B28(iVar19);
          *(uint *)(iVar19 + 8) = *(uint *)(iVar19 + 8) | 0x1000000;
          puVar45 = puVar7;
          if ((puVar7[2] >> 0x17 & 1) != 0) {
            fn_82B102D8(iVar6,iVar19);
          }
          goto LAB_82af2fd8;
        }
      }
    }
  }
  else if (uVar31 == 3) {
    puVar32 = (uint *)puVar45[0xb];
    puVar7 = (uint *)puVar45[0xc];
    cVar15 = fn_82ABDBE8(puVar32,puVar7);
    if (cVar15 != '\0') {
      piVar40 = (int *)puVar32[3];
      uVar31 = piVar40[2];
      if ((uVar31 >> 5 & 1) == 0) {
        uVar21 = uVar31 >> 7 & 0x7f;
        if ((uVar21 == 0) || (bVar23 = true, 0x52 < uVar21)) {
          bVar23 = false;
        }
        if (bVar23) {
          uVar21 = *puVar32;
          uVar3 = (ulonglong)uVar21 & 0x1f;
          if ((uVar21 & 8) == 0) {
            if ((uVar9 >> 5 & 1) == 0) goto LAB_82af1f8c;
            if (((uVar31 >> 0x19 & 1) == 0) && ((uVar21 & 0x1e) == 0)) {
              if ((uVar9 & 1) != 0) {
                if ((uVar21 & 2) == 0) {
                  uVar42 = (~uVar3 & 0xffffffff) >> 2 & 1;
                }
                else {
                  uVar42 = 0;
                }
                if ((uVar42 == 0) || (cVar15 = fn_82AEFA80(piVar40), cVar15 == '\0'))
                goto LAB_82af1070;
              }
              for (puVar37 = (uint *)piVar40[1]; puVar37 != (uint *)0x0;
                  puVar37 = (uint *)puVar37[2]) {
                if ((((puVar37[4] != 0) && ((*puVar37 & 0xe000000) != 0)) && (puVar37 != puVar32))
                   && (puVar37 != puVar7)) {
                  cVar15 = fn_82AE91E8(piVar40);
                  if ((cVar15 == '\0') || (0x100000 < (piVar40[2] & 0x380000U))) goto LAB_82af1070;
                  break;
                }
              }
              cVar15 = fn_82B8D2B8(iVar6,piVar40,puVar45,1,0);
              if (cVar15 != '\0') {
                piVar10 = piVar40;
                if (puVar37 != (uint *)0x0) {
                  piVar10 = (int *)fn_82B843F0(iVar6,piVar40);
                  for (iVar19 = *piVar40; iVar19 != 0; iVar19 = *(int *)(iVar19 + 4)) {
                    uVar4 = fn_82ACA920(iVar6,iVar19,*(undefined4 *)(iVar19 + 0xc));
                    piVar41 = piVar40 + 0xb;
                    for (uVar9 = 0; uVar9 < ((uint)piVar40[2] >> 0x13 & 7); uVar9 = uVar9 + 1) {
                      iVar12 = *piVar41;
                      if (iVar12 == iVar19) {
                        iVar11 = fn_82AD1978(piVar10,uVar4);
                        piVar10[uVar9 + 0xb] = iVar11;
                        if (iVar12 != 0) goto LAB_82af2198;
                        break;
                      }
                      piVar41 = piVar41 + 1;
                    }
                    fn_82AD1978(piVar10,uVar4);
LAB_82af2198:;}
                  uVar9 = (uint)piVar10 & 0xfffffffe;
                  puVar37 = (uint *)(((uint)piVar40 & 0xfffffffe) + 0x24);
                  *(uint *)(uVar9 + 0x24) = *puVar37;
                  *(uint *)(*puVar37 & 0xfffffffe) = uVar9;
                  *(uint *)(uVar9 + 0x28) = (uint)piVar40 & 0xfffffffe;
                  *puVar37 = uVar9 + 0x28;
                  puVar34 = (uint *)(puVar32[3] + 4);
                  for (puVar37 = (uint *)*puVar34; puVar37 != puVar32; puVar37 = (uint *)puVar37[2])
                  {
                    puVar34 = puVar37 + 2;
                  }
                  *puVar34 = puVar32[2];
                  puVar32[2] = piVar10[1];
                  piVar10[1] = (int)puVar32;
                  puVar32[3] = (uint)piVar10;
                  puVar34 = (uint *)(puVar7[3] + 4);
                  for (puVar37 = (uint *)*puVar34; puVar37 != puVar7; puVar37 = (uint *)puVar37[2])
                  {
                    puVar34 = puVar37 + 2;
                  }
                  *puVar34 = puVar7[2];
                  puVar7[2] = piVar10[1];
                  piVar10[1] = (int)puVar7;
                  puVar7[3] = (uint)piVar10;
                  fn_82AD1B28(piVar10);
                  fn_82AD1B28(piVar40);
                  if (((uint)piVar40[2] >> 0x17 & 1) != 0) {
                    piVar10[2] = piVar10[2] & 0xff7fffff;
                    piVar10[4] = piVar10[4] & 0xffe7ffff;
                  }
                }
                uVar9 = *puVar32;
                uVar31 = uVar9 >> 0x19 & 7;
                if ((uVar31 != ((uint)piVar10[2] >> 0xe & 7)) || ((uVar9 & 0x1fe0) != 0x1c80)) {
                  cVar15 = fn_82B81270(piVar10,uVar31,uVar9 >> 5 & 0xff);
                  if (cVar15 == '\0') goto LAB_82af1070;
                  fn_82B81338(piVar10,*puVar32 >> 0x19 & 7,*puVar32 >> 5 & 0xff);
                }
                fn_82B8D3D0(iVar6,piVar10,puVar45,1,0);
                puVar32 = puVar45 + 1;
                piVar10[2] = piVar10[2] | 0x20;
                while (puVar7 = (uint *)*puVar32, puVar7 != (uint *)0x0) {
                  if (puVar7[4] != 0) {
                    puVar34 = (uint *)(puVar7[3] + 4);
                    for (puVar37 = (uint *)*puVar34; puVar37 != puVar7; puVar37 = (uint *)puVar37[2]
                        ) {
                      puVar34 = puVar37 + 2;
                    }
                    *puVar34 = puVar7[2];
                    puVar7[2] = piVar10[1];
                    piVar10[1] = (int)puVar7;
                    puVar7[3] = (uint)piVar10;
                    uVar9 = *puVar7;
                    if ((uVar9 & 0xe000000) != 0) {
                      uVar42 = (ulonglong)uVar9 & 0x1f;
                      uVar30 = uVar3;
                      if (((uVar21 & 4) != 0) && ((uVar9 & 2) != 0)) {
                        uVar30 = uVar3 - 4;
                      }
                      if ((uVar30 & uVar42 & 4) != 0) {
                        uVar30 = uVar30 - 4;
                        uVar42 = uVar42 - 4;
                      }
                      uVar31 = (uint)uVar42;
                      if (((uVar30 & 1) != 0) && ((uVar42 & 2) != 0)) {
                        uVar31 = uVar31 - 2;
                      }
                      *puVar7 = uVar9 & 0xffffffe0 | ((uint)uVar30 | uVar31) & 0x1f;
                    }
                  }
                  if ((uint *)*puVar32 == puVar7) {
                    puVar32 = puVar7 + 2;
                  }
                }
                for (puVar32 = (uint *)*puVar45; puVar32 != (uint *)0x0;
                    puVar32 = (uint *)puVar32[1]) {
                  if ((*puVar32 & 0xe000000) == 0) {
                    fn_82AD1978(piVar10,puVar32);
                  }
                }
                fn_82AD1B28(piVar10);
                if ((puVar45[2] & 1) != 0) {
                  piVar10[2] = piVar10[2] | 1;
                }
                if ((puVar45[2] >> 0x19 & 1) != 0) {
                  puVar32 = puVar38 + 0x17;
                  piVar10[2] = piVar10[2] | 0x2000000;
                  lVar5 = 4;
                  puVar45[2] = puVar45[2] & 0xfdffffff;
                  do {
                    if ((uint *)*puVar32 == puVar45) {
                      *puVar32 = (uint)piVar10;
                    }
                    puVar32 = puVar32 + 1;
                    lVar5 = lVar5 + -1;
                  } while (lVar5 != 0);
                }
                puVar45[2] = puVar45[2] & 0xffffffdf;
                if (((uint)piVar10[2] >> 0x17 & 1) != 0) {
                  piVar10[2] = piVar10[2] & 0xff7fffff;
                  piVar10[4] = piVar10[4] & 0xffe7ffff;
                }
                goto LAB_82af2fd8;
              }
            }
          }
        }
        else {
          if ((((uVar21 == 0x6e) && ((uVar9 >> 5 & 1) != 0)) && ((uVar9 & 1) == 0)) &&
             ((uVar9 >> 0x19 & 1) == 0)) {
            for (iVar19 = piVar40[1]; iVar19 != 0; iVar19 = *(int *)(iVar19 + 8)) {
              if ((*(uint **)(iVar19 + 0x10) != (uint *)0x0) &&
                 (*(uint **)(iVar19 + 0x10) != puVar45)) goto LAB_82af1070;
            }
            if ((*(uint **)(iVar6 + 0x38) == (uint *)0x0) || ((**(uint **)(iVar6 + 0x38) & 8) == 0))
            {
              puVar7 = (uint *)*puVar45;
              for (puVar37 = puVar7; puVar37 != (uint *)0x0; puVar37 = (uint *)puVar37[1]) {
                uVar9 = *puVar37;
                if (((uVar9 & 0x40000000) == 0) || (bVar23 = true, (uVar9 & 0xe000000) != 0)) {
                  bVar23 = false;
                }
                if ((bVar23) && ((uVar9 & 0x1ffe000) == 0x10000)) break;
              }
              uVar9 = puVar38[0x17];
              uVar31 = 0;
              if (uVar9 != 0) {
                for (; puVar7 != (uint *)0x0; puVar7 = (uint *)puVar7[1]) {
                  if (puVar7[3] == uVar9) {
                    bVar1 = 1;
                    goto LAB_82af1a00;
                  }
                }
                bVar1 = 0;
LAB_82af1a00:
                uVar31 = -(uint)bVar1 & uVar9;
              }
              for (puVar38 = (uint *)puVar45[1];
                  (puVar38 != (uint *)0x0 && ((puVar38[4] == 0 || ((*puVar38 & 0xe000000) == 0))));
                  puVar38 = (uint *)puVar38[2]) {
              }
              uVar39 = 0;
              uVar9 = *puVar38;
              iVar19 = 0;
              uVar21 = *puVar32 >> 0x19;
              uVar3 = (ulonglong)uVar21 & 7;
              uVar17 = *puVar32 >> 5 & 0xff;
              uVar42 = 0;
              if ((uVar21 & 7) != 0) {
                uVar44 = 0;
                iVar12 = 0;
                while( true ) {
                  uVar27 = uVar17 >> (uVar44 & 0x3f) & 3;
                  uVar39 = 1 << uVar27 | uVar39;
                  uVar28 = *(uint *)(piVar40[uVar27 + 0xb] + 0xc);
                  uVar18 = *(uint *)(uVar28 + 8) >> 7 & 0x7f;
                  if (uVar18 == 0x70) break;
                  if ((uVar18 == 0) || (bVar23 = true, 0x66 < uVar18)) {
                    bVar23 = false;
                  }
                  if ((!bVar23) || ((*(uint *)(uVar28 + 8) >> 0x19 & 1) != 0)) break;
                  for (iVar11 = *(int *)(uVar28 + 4); iVar11 != 0; iVar11 = *(int *)(iVar11 + 8)) {
                    if ((*(int **)(iVar11 + 0x10) != (int *)0x0) &&
                       (*(int **)(iVar11 + 0x10) != piVar40)) goto LAB_82af1d18;
                  }
                  for (puVar7 = (uint *)piVar40[1]; puVar7 != (uint *)0x0;
                      puVar7 = (uint *)puVar7[2]) {
                    if ((uint *)puVar7[4] != (uint *)0x0) {
                      uVar18 = *puVar7 >> 0x19 & 7;
                      if ((uVar18 != 0) && ((uint *)puVar7[4] != puVar45)) {
                        uVar36 = 0;
                        if (uVar18 != 0) {
                          uVar35 = 0;
                          do {
                            if (uVar27 == ((*puVar7 >> 5 & 0xff) >> (uVar35 & 0x3f) & 3)) {
                              bVar23 = true;
                              goto LAB_82af1b50;
                            }
                            uVar36 = uVar36 + 1;
                            uVar35 = uVar35 + 2;
                          } while (uVar36 < uVar18);
                        }
                        bVar23 = false;
LAB_82af1b50:
                        if (bVar23) goto LAB_82af1d18;
                      }
                    }
                  }
                  if (((puVar37 != (uint *)0x0) &&
                      (cVar15 = fn_82B8BCB0(iVar6,puVar37[3],uVar28,0), cVar15 == '\0')) ||
                     ((uVar31 != 0 &&
                      (cVar15 = fn_82B8BCB0(iVar6,uVar31,uVar28,0), cVar15 == '\0')))) break;
                  uVar27 = *puVar32;
                  if ((uVar27 & 0x1f) != 0) {
                    if ((*(uint *)(uVar28 + 8) & 0x3f80) != 0x180) break;
                    puVar7 = *(uint **)(uVar28 + 0x2c);
                    cVar15 = fn_82ABDBE8(puVar7,*(undefined4 *)(uVar28 + 0x30));
                    if (cVar15 == '\0') break;
                    uVar18 = *puVar7;
                    if ((((uVar18 & 0x18) == 0) || ((uVar27 & 0x18) == 0)) &&
                       (((uVar18 & 2) == 0 || ((uVar27 & 1) == 0)))) {
                      if (((uVar18 & 4) == 0) || (bVar23 = false, (uVar27 & 1) == 0)) {
                        bVar23 = true;
                      }
                    }
                    else {
                      bVar23 = false;
                    }
                    if (!bVar23) break;
                  }
                  uVar43 = 0;
                  lVar5 = 0;
                  uVar35 = 0;
                  uVar27 = uVar9 >> 0xd & 0xf;
                  iVar19 = iVar19 + 1;
                  uVar30 = 0;
                  uVar36 = 0;
                  uVar18 = 0;
                  do {
                    if (uVar27 == 0) break;
                    uVar20 = uVar27 & ~(uVar27 - 1);
                    uVar27 = uVar27 - uVar20;
                    if (((uint *)piVar40[(uVar17 >> (uVar18 & 0x3f) & 3) + 0xb])[3] == uVar28) {
                      lVar5 = lVar5 + 1;
                      uVar43 = (*(uint *)piVar40[(uVar17 >> (uVar18 & 0x3f) & 3) + 0xb] >> 5 & 3) <<
                               (uVar36 & 0x3f) | uVar43 & ~(3 << (uVar36 & 0x3f));
                      uVar36 = uVar36 + 2;
                      uVar35 = uVar20 | uVar35;
                      if ((uVar30 & 0xffffffff) < (uVar42 & 0xffffffff)) {
                        iVar19 = iVar19 + -1;
                      }
                    }
                    uVar30 = uVar30 + 1;
                    uVar18 = uVar18 + 2;
                  } while ((uVar30 & 0xffffffff) < uVar3);
                  if (((uVar30 & 0xffffffff) < uVar3) ||
                     (cVar15 = fn_82B81270(uVar28,lVar5,uVar43), cVar15 == '\0')) break;
                  uVar42 = uVar42 + 1;
                  uVar44 = uVar44 + 2;
                  *(uint *)((int)auStack_f0 + iVar12) = uVar43;
                  *(int *)((int)auStack_100 + iVar12) = (int)lVar5;
                  *(uint *)((int)auStack_110 + iVar12) = uVar35;
                  iVar12 = iVar12 + 4;
                  if (uVar3 <= (uVar42 & 0xffffffff)) break;
                }
              }
LAB_82af1d18:
              if ((((uVar42 & 0xffffffff) == uVar3) && (uVar39 == ((uint)piVar40[2] >> 1 & 0xf))) &&
                 ((iVar19 + uStack_158) - 1 <= *(uint *)(iVar6 + 0x314))) {
                if ((uVar21 & 7) == 0) goto LAB_82af30e8;
                uVar21 = 0;
                iVar19 = 0;
                goto LAB_82af1d60;
              }
            }
          }
          else if (uVar21 == 0x7d) {
            dVar46 = (double)fn_82B80EE0(piVar40,*puVar32 >> 5 & 3,*puVar32 & 0x1f);
            dVar52 = dVar46;
            if (dVar46 == dVar51) {
              for (puVar7 = (uint *)puVar45[1]; dVar52 = dVar46, puVar7 != (uint *)0x0;
                  puVar7 = (uint *)puVar7[2]) {
                if ((puVar7[4] != 0) && (uVar9 = *puVar7, (uVar9 & 0xe000000) != 0)) {
                  dVar52 = dVar48;
                  if ((~uVar9 & 1) == 0) break;
                  uVar3 = (ulonglong)uVar9 & 0x1f;
                  uVar42 = -(ulonglong)((uVar9 & 2) == 0) & 4;
                  if ((uVar3 & uVar42) != 0) {
                    uVar42 = uVar42 - 4;
                    uVar3 = uVar3 - 4;
                  }
                  cVar15 = fn_82AEFBB8(puVar7[4],uVar42 | uVar3);
                  dVar52 = dVar48;
                  if (cVar15 == '\0') break;
                }
              }
            }
            if ((dVar52 == dVar50) ||
               (((*(uint *)(iVar6 + 0x30) & 0xffff0000) != 0xffff0000 &&
                ((dVar52 == dVar47 || (dVar52 == dVar51)))))) {
              uVar3 = 1;
              uVar42 = (ulonglong)(*puVar32 >> 0x19) & 7;
              if (1 < uVar42) {
                uVar9 = 2;
                do {
                  dVar46 = (double)fn_82B80EE0(piVar40,(*puVar32 >> 5 & 0xff) >> (uVar9 & 0x3f) & 3
                                                ,*puVar32 & 0x1f);
                  if (dVar46 != dVar52) break;
                  uVar3 = uVar3 + 1;
                  uVar9 = uVar9 + 2;
                } while ((uVar3 & 0xffffffff) < uVar42);
              }
              if ((uVar3 & 0xffffffff) == uVar42) {
                iVar19 = fn_82B841E8(iVar6,puVar38,puVar38 + 4,0x78,0,1);
                if (dVar52 == dVar49) {
                  puVar7 = (uint *)fn_82AD17B0(iVar6,iVar19);
                  *puVar7 = (uint)(uVar42 << 0x19) | *puVar7 & 0xf1ffffff;
                  fn_82AD1270(puVar7,6);
                  *puVar7 = *puVar7 & 0xffffe01f;
                  uVar9 = fn_82AF0548(iVar6,0,puVar45,puVar7,puVar32);
                }
                else {
                  iVar12 = fn_82ABDD90(iVar6,0x78,*(uint *)(iVar19 + 8) >> 0x13 & 7,0);
                  puVar32 = (uint *)(iVar12 + iVar19 + -4);
                  *puVar32 = *puVar32 | 1;
                  iVar12 = fn_82B8A3A0(dVar50,dVar50,dVar50,dVar50,iVar6,1);
                  puVar32 = (uint *)fn_82AD17B0(iVar6,iVar12);
                  uVar9 = (uint)(uVar42 << 0x19);
                  *puVar32 = *puVar32 & 0xf1ffffff | uVar9;
                  fn_82AD1270(puVar32,0);
                  *puVar32 = *puVar32 & 0xffffe01f;
                  puVar7 = (uint *)fn_82AD17B0(iVar6,iVar19);
                  *puVar7 = *puVar7 & 0xf1ffffff | uVar9;
                  fn_82AD1270(puVar7,2);
                  *puVar7 = *puVar7 & 0xffffe01f;
                  uVar9 = fn_82AF0618(iVar6,0,puVar45,puVar7,puVar32);
                  fn_82AEFCD8(iVar12);
                  *(uint *)(iVar12 + 8) = *(uint *)(iVar12 + 8) | 0x1000000;
                }
                puVar32 = puVar45 + 1;
                **(uint **)(uVar9 + 0x2c) = **(uint **)(uVar9 + 0x2c) | 0x40000000;
                **(uint **)(uVar9 + 0x2c) = **(uint **)(uVar9 + 0x2c) & 0xfe001fff;
                while (puVar7 = (uint *)*puVar32, puVar7 != (uint *)0x0) {
                  if (puVar7[4] != 0) {
                    puVar34 = (uint *)(puVar7[3] + 4);
                    for (puVar37 = (uint *)*puVar34; puVar37 != puVar7; puVar37 = (uint *)puVar37[2]
                        ) {
                      puVar34 = puVar37 + 2;
                    }
                    *puVar34 = puVar7[2];
                    puVar7[2] = *(uint *)(uVar9 + 4);
                    *(uint **)(uVar9 + 4) = puVar7;
                    puVar7[3] = uVar9;
                    if ((dVar52 == dVar51) && (uVar31 = *puVar7, (uVar31 & 0xe000000) != 0)) {
                      uVar21 = uVar31 & 0x1f;
                      uVar17 = -(uint)((uVar31 & 2) == 0) & 4;
                      if ((uVar21 & uVar17) != 0) {
                        uVar17 = uVar17 - 4;
                        uVar21 = uVar21 - 4;
                      }
                      *puVar7 = uVar31 & 0xffffffe0 | (uVar21 | uVar17) & 0x1f;
                    }
                  }
                  if ((uint *)*puVar32 == puVar7) {
                    puVar32 = puVar7 + 2;
                  }
                }
                for (puVar32 = (uint *)*puVar45; puVar32 != (uint *)0x0;
                    puVar32 = (uint *)puVar32[1]) {
                  if ((*puVar32 & 0xe000000) == 0) {
                    fn_82AD1978(uVar9,puVar32);
                  }
                }
                if ((puVar45[2] >> 5 & 1) != 0) {
                  *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) | 0x20;
                  puVar45[2] = puVar45[2] & 0xffffffdf;
                }
                if ((puVar45[2] >> 0x19 & 1) != 0) {
                  puVar32 = puVar38 + 0x17;
                  *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) | 0x2000000;
                  lVar5 = 4;
                  puVar45[2] = puVar45[2] & 0xfdffffff;
                  do {
                    if ((uint *)*puVar32 == puVar45) {
                      *puVar32 = uVar9;
                    }
                    puVar32 = puVar32 + 1;
                    lVar5 = lVar5 + -1;
                  } while (lVar5 != 0);
                }
                if ((puVar45[2] & 1) != 0) {
                  *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) | 1;
                }
                if ((*(uint *)(iVar19 + 8) & 0x3f80) != 0x3880) {
                  fn_82AD1B28(iVar19);
                  *(uint *)(iVar19 + 8) = *(uint *)(iVar19 + 8) | 0x1000000;
                }
                fn_82AD1B28(uVar9);
                *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) | 0x1000000;
                if ((puVar45[2] >> 0x17 & 1) != 0) {
                  fn_82B0FD38(iVar6,uVar9);
                }
                goto LAB_82af2fd8;
              }
            }
          }
          uVar9 = puVar45[2];
          puVar38 = puStack_16c;
          if ((uVar9 >> 5 & 1) == 0) {
LAB_82af1f8c:
            if ((((uVar9 & 1) == 0) && ((uVar9 >> 0x19 & 1) == 0)) && ((puVar45[4] & 0x80000) == 0))
            {
              uVar9 = (uint)piVar40[2] >> 7 & 0x7f;
              if ((uVar9 == 0x7d) || (bVar23 = false, uVar9 == 0x7c)) {
                bVar23 = true;
              }
              if (!bVar23) {
                uVar9 = *puVar32;
                puVar32 = puVar45 + 1;
                uVar31 = uVar9 >> 5 & 0xff;
                uVar3 = (ulonglong)uVar9 & 0x1f;
                while (puVar7 = (uint *)*puVar32, puVar7 != (uint *)0x0) {
                  piVar10 = (int *)puVar7[4];
                  if (piVar10 != (int *)0x0) {
                    uVar21 = *puVar7;
                    if ((uVar21 & 0xe000000) == 0) {
                      cVar15 = fn_82AEB338(piVar40);
                      if (cVar15 != '\0') {
                        puVar34 = (uint *)(puVar7[3] + 4);
                        for (puVar37 = (uint *)*puVar34; puVar37 != puVar7;
                            puVar37 = (uint *)puVar37[2]) {
                          puVar34 = puVar37 + 2;
                        }
                        *puVar34 = puVar7[2];
                        puVar7[2] = piVar40[1];
                        piVar40[1] = (int)puVar7;
                        puVar7[3] = (uint)piVar40;
                      }
                    }
                    else {
                      uVar42 = (ulonglong)uVar21 & 0x1f;
                      if ((((uVar9 & 0x18) == 0) || ((uVar21 & 0x18) == 0)) &&
                         (((uVar9 & 2) == 0 || ((uVar21 & 1) == 0)))) {
                        if (((uVar9 & 4) == 0) || (bVar23 = false, (uVar21 & 1) == 0)) {
                          bVar23 = true;
                        }
                      }
                      else {
                        bVar23 = false;
                      }
                      if (bVar23) {
                        uVar17 = (uint)piVar10[2] >> 7 & 0x7f;
                        if (uVar17 == 0x70) {
                          if ((*piVar10 == 0) || (bVar23 = true, *(int *)(*piVar10 + 4) == 0)) {
                            bVar23 = false;
                          }
                          if (bVar23) goto LAB_82af2538;
                        }
                        if (uVar17 != 0x6e) {
                          if ((uVar17 == 0) || (bVar23 = true, 0x66 < uVar17)) {
                            bVar23 = false;
                          }
                          if (!bVar23) {
                            uVar17 = (uint)piVar40[2] >> 7 & 0x7f;
                            if ((uVar17 == 0) || (bVar23 = true, 0x66 < uVar17)) {
                              bVar23 = false;
                            }
                            if (!bVar23) goto LAB_82af2538;
                          }
                          cVar15 = fn_82AEFDB8(piVar10,piVar40,iVar6);
                          if (cVar15 != '\0') {
                            uVar30 = uVar3;
                            if (((uVar9 & 4) != 0) && ((uVar21 & 2) != 0)) {
                              uVar30 = uVar3 - 4;
                            }
                            if ((uVar42 & uVar30 & 4) != 0) {
                              uVar30 = uVar30 - 4;
                              uVar42 = uVar42 - 4;
                            }
                            if (((uVar30 & 1) != 0) && ((uVar42 & 2) != 0)) {
                              uVar42 = uVar42 - 2;
                            }
                            uVar30 = uVar30 | uVar42;
                            cVar15 = fn_82AEFBB8(piVar10,uVar30);
                            if ((cVar15 != '\0') && ((uVar30 & 0x18) == 0)) {
                              fn_82B80D50(piVar10,puVar7,piVar40,
                                           (((uVar31 >> (uVar21 >> 10 & 6) & 3) << 2 |
                                            uVar31 >> (uVar21 >> 8 & 6) & 3) << 2 |
                                           uVar31 >> (uVar21 >> 6 & 6) & 3) << 2 |
                                           uVar31 >> (uVar21 >> 4 & 6) & 3,uVar30);
                              uVar21 = (uint)piVar10[2] >> 7 & 0x7f;
                              if (((uVar21 == 0x70) ||
                                  ((uVar21 == 0x6e && (((uint)piVar10[2] >> 0x17 & 1) != 0)))) &&
                                 (((uint)piVar40[2] >> 0x17 & 1) == 0)) {
                                uVar21 = (uint)piVar40[2] >> 7 & 0x7f;
                                if ((uVar21 == 0x7d) || (bVar23 = false, uVar21 == 0x7c)) {
                                  bVar23 = true;
                                }
                                if (!bVar23) {
                                  fn_82B102D8(iVar6,piVar40);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
LAB_82af2538:
                  if ((uint *)*puVar32 == puVar7) {
                    puVar32 = puVar7 + 2;
                  }
                }
                cVar15 = fn_82ABE2E0(puVar45);
                puVar32 = puVar45;
                if (cVar15 != '\0') goto LAB_82af2560;
              }
            }
          }
        }
      }
    }
  }
  else if (uVar31 == 0xc) {
    piVar40 = (int *)0x0;
    for (puVar32 = (uint *)puVar45[1]; puVar32 != (uint *)0x0; puVar32 = (uint *)puVar32[2]) {
      piVar10 = (int *)puVar32[4];
      piVar41 = piVar40;
      if (((piVar10 != (int *)0x0) && ((*puVar32 & 0xe000000) != 0)) &&
         ((((piVar10[2] & 0x3f80U) != 0x80 || ((*puVar32 & 0x1f) != 0)) ||
          ((piVar41 = piVar10, piVar40 != (int *)0x0 && (piVar10 != piVar40)))))) goto LAB_82af1070;
      piVar40 = piVar41;
    }
    if ((((piVar40 != (int *)0x0) && (uVar31 = piVar40[2], (uVar31 >> 0x19 & 1) == 0)) &&
        ((uVar31 >> 5 & 1) == 0)) &&
       (((uVar31 & 1) == 0 && (uVar9 = uVar9 >> 0xe & 7, (uVar31 >> 0xe & 7) == uVar9)))) {
      puVar32 = (uint *)piVar40[0xb];
      puVar7 = puVar32;
      puVar37 = (uint *)piVar40[0xc];
      if ((uint *)puVar32[3] != puVar45) {
        puVar7 = (uint *)piVar40[0xc];
        puVar37 = puVar32;
      }
      puVar34 = (uint *)puVar45[0xd];
      uVar3 = (ulonglong)(*puVar7 >> 5) & 0xff;
      while( true ) {
        uVar31 = puVar34[3];
        uVar21 = *(uint *)(uVar31 + 8);
        uVar17 = (uint)uVar3;
        if ((uVar21 >> 0x19 & 1) != 0) break;
        for (iVar19 = *(int *)(uVar31 + 4); iVar19 != 0; iVar19 = *(int *)(iVar19 + 8)) {
          if ((*(uint *)(iVar19 + 0x10) != 0) && (*(uint *)(iVar19 + 0x10) != puVar34[4])) {
            bVar23 = true;
            goto LAB_82af1744;
          }
        }
        bVar23 = false;
LAB_82af1744:
        if ((bVar23) || ((uVar21 >> 0xe & 7) != uVar9)) break;
        uVar21 = uVar21 >> 7 & 0x7f;
        if (uVar21 == 2) goto LAB_82af17c4;
        if ((uVar21 != 0xc) || (uVar21 = *puVar34, (uVar21 & 0x1f) != 0)) goto LAB_82af1070;
        puVar34 = *(uint **)(uVar31 + 0x34);
        uVar31 = uVar21 >> 5 & 0xff;
        uVar3 = ((((ulonglong)(uVar31 >> (uVar17 >> 5 & 6)) & 3) << 2 |
                 (ulonglong)(uVar31 >> (uVar17 >> 3 & 6)) & 3) << 2 |
                (ulonglong)(uVar31 >> (uVar17 >> 1 & 6)) & 0xffffffff00000003) << 2 |
                (ulonglong)(uVar31 >> ((uint)(uVar3 << 1) & 6)) & 0xffffffff00000003;
      }
      puVar34 = (uint *)0x0;
LAB_82af17c4:
      if (puVar34 != (uint *)0x0) {
        piVar10 = (int *)puVar34[3];
        uVar9 = *(uint *)(puVar37[3] + 8) >> 7 & 0x7f;
        if ((uVar9 == 0x7d) || (bVar23 = false, uVar9 == 0x7c)) {
          bVar23 = true;
        }
        if ((bVar23) || (cVar15 = fn_82B8BCB0(iVar6,puVar37[3],piVar10,0), cVar15 != '\0')) {
          puVar32 = (uint *)fn_82AC69C8(iVar6,0,piVar40,0x78,0,4);
          puVar33 = (uint *)(puVar7[3] + 4);
          for (puVar25 = (uint *)*puVar33; puVar25 != puVar7; puVar25 = (uint *)puVar25[2]) {
            puVar33 = puVar25 + 2;
          }
          *puVar33 = puVar7[2];
          puVar7[2] = puVar32[1];
          puVar32[1] = (uint)puVar7;
          puVar7[3] = (uint)puVar32;
          cVar15 = fn_82AEFEA8(iVar6,piVar40,piVar10,puVar34,puVar37,&puStack_130);
          if (cVar15 != '\0') {
            fn_82B8D3D0(iVar6,piVar10,piVar40,1,0);
            uVar21 = uVar17 >> 5 & 6;
            uVar31 = uVar17 >> 3 & 6;
            uVar9 = uVar17 >> 1 & 6;
            uVar44 = (uint)(uVar3 << 1) & 6;
            uVar39 = *puStack_130 >> 5 & 0xff;
            *puStack_130 = ((((uVar39 >> uVar21 & 3) << 2 | uVar39 >> uVar31 & 3) << 2 |
                            uVar39 >> uVar9 & 3) << 2 | uVar39 >> uVar44 & 3) << 5 |
                           *puStack_130 & 0xffffe01f;
            uVar39 = *puStack_12c >> 5 & 0xff;
            *puStack_12c = ((((uVar39 >> uVar21 & 3) << 2 | uVar39 >> uVar31 & 3) << 2 |
                            uVar39 >> uVar9 & 3) << 2 | uVar39 >> uVar44 & 3) << 5 |
                           *puStack_12c & 0xffffe01f;
            uVar9 = fn_82AF06E8(iVar6,1,piVar40,puStack_130,puStack_12c,uStack_128);
            for (puVar37 = (uint *)*piVar40; puVar37 != (uint *)0x0; puVar37 = (uint *)puVar37[1]) {
              if ((*puVar37 & 0xe000000) == 0) {
                fn_82AD1978(uVar9,puVar37);
              }
            }
            for (puVar37 = (uint *)*piVar10; puVar37 != (uint *)0x0; puVar37 = (uint *)puVar37[1]) {
              if ((*puVar37 & 0xe000000) == 0) {
                fn_82AD1978(uVar9,puVar37);
              }
            }
            puVar37 = (uint *)(piVar40 + 1);
            while (puVar25 = (uint *)*puVar37, puVar25 != (uint *)0x0) {
              if (puVar25[4] != 0) {
                puVar29 = (uint *)(puVar25[3] + 4);
                for (puVar33 = (uint *)*puVar29; puVar33 != puVar25; puVar33 = (uint *)puVar33[2]) {
                  puVar29 = puVar33 + 2;
                }
                *puVar29 = puVar25[2];
                puVar25[2] = puVar45[1];
                puVar45[1] = (uint)puVar25;
                puVar25[3] = (uint)puVar45;
                uVar31 = *puVar25;
                if ((uVar31 & 0xe000000) != 0) {
                  uVar21 = *puVar7 >> 5 & 0xff;
                  *puVar25 = ((((uVar21 >> (uVar31 >> 10 & 6) & 3) << 2 |
                               uVar21 >> (uVar31 >> 8 & 6) & 3) << 2 |
                              uVar21 >> (uVar31 >> 6 & 6) & 3) << 2 |
                             uVar21 >> (uVar31 >> 4 & 6) & 3) << 5 | uVar31 & 0xffffe01f;
                }
              }
              if ((uint *)*puVar37 == puVar25) {
                puVar37 = puVar25 + 2;
              }
            }
            uVar31 = 0;
            uVar21 = 0;
            if ((*puVar34 & 0xe000000) != 0) {
              uVar39 = 0;
              do {
                iVar19 = (uVar17 >> (uVar39 & 0x3f) & 3) << 1;
                uVar39 = uVar39 + 2;
                uVar44 = uVar21 << iVar19;
                uVar21 = uVar21 + 1;
                uVar31 = uVar31 & ~(3 << iVar19) | uVar44;
              } while (uVar21 < (*puVar34 >> 0x19 & 7));
            }
            puVar37 = (uint *)(puVar34[3] + 4);
            for (puVar7 = (uint *)*puVar37; puVar7 != puVar34; puVar7 = (uint *)puVar7[2]) {
              puVar37 = puVar7 + 2;
            }
            *puVar37 = puVar34[2];
            puVar34[2] = *(uint *)(uVar9 + 4);
            *(uint **)(uVar9 + 4) = puVar34;
            puVar34[3] = uVar9;
            *puVar34 = (uVar31 & 0xff) << 5 | *puVar34 & 0xffffe000;
            fn_82AD1B28(uVar9);
            *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) | 0x1000000;
            if ((puVar45[2] >> 0x17 & 1) == 0) {
              if (((uint)piVar40[2] >> 0x17 & 1) != 0) {
                fn_82B0FD38(iVar6,puVar45);
              }
            }
            else if ((((uint)piVar40[2] >> 0x17 & 1) == 0) &&
                    (lVar5 = fn_82AD0098(puVar45), lVar5 != 0)) {
              fn_82B102D8(iVar6);
            }
            fn_82B8AC10(iVar6,piVar40,0,1);
            puVar45 = puVar32;
            goto LAB_82af2fd8;
          }
          puVar34 = (uint *)(puVar7[3] + 4);
          for (puVar37 = (uint *)*puVar34; puVar37 != puVar7; puVar37 = (uint *)puVar37[2]) {
            puVar34 = puVar37 + 2;
          }
          *puVar34 = puVar7[2];
          puVar7[2] = puVar45[1];
          puVar45[1] = (uint)puVar7;
          puVar7[3] = (uint)puVar45;
LAB_82af2560:
          fn_82B8AC10(iVar6,puVar32,0,1);
        }
      }
    }
  }
  else if (uVar31 == 0x12) {
    if ((uVar9 & 1) == 0) {
      while (((puVar45[2] & 0x1c000) == 0x4000 &&
             (puVar32 = (uint *)puVar45[0xd], (*puVar32 & 0x1f) == 0))) {
        puVar7 = (uint *)puVar32[3];
        if (((puVar7[2] & 0x3f80) != 0x80) || ((puVar7[2] & 0x1c000) != 0x4000)) break;
        for (puVar37 = (uint *)puVar7[1]; puVar37 != (uint *)0x0; puVar37 = (uint *)puVar37[2]) {
          if ((puVar37[4] != 0) && (puVar37 != puVar32)) goto LAB_82af1070;
        }
        uVar9 = puVar45[0xb];
        uVar21 = 0;
        uVar31 = puVar45[0xc];
        puVar37 = puVar7 + 0xb;
        while( true ) {
          if ((puVar7[2] >> 0x13 & 7) <= uVar21) goto LAB_82af1070;
          puVar34 = (uint *)*puVar37;
          puStack_180 = puVar34;
          uStack_168 = uVar9;
          uStack_160 = uVar31;
          if ((*puVar34 & 0xe000000) != 0x2000000) {
            puStack_180 = (uint *)fn_82ACA920(iVar6,puVar34,puVar34[3]);
            uVar17 = *puStack_180 >> 5 & 0xff;
            *puStack_180 = ((((uVar17 >> 6) << 2 | uVar17 >> 4 & 3) << 2 | uVar17 >> 2 & 3) << 2 |
                           uVar17 >> ((*puVar32 >> 5 & 3) << 1) & 3) << 5 |
                           *puStack_180 & 0xffffe01f;
            *puStack_180 = *puStack_180 & 0xf1ffffff | 0x2000000;
          }
          cVar15 = fn_82AF9290(iVar6,&uStack_168,&uStack_160,&puStack_180);
          if ((cVar15 != '\0') &&
             (cVar15 = fn_82AF4D10(iVar6,uStack_168,puVar45,uStack_160,puVar45,puStack_180,
                                         puVar7,auStack_11c), cVar15 != '\0')) break;
          if (*(int *)(uStack_168 + 0x10) == 0) {
            puVar24 = (undefined4 *)(*(int *)(uStack_168 + 0xc) + 4);
            for (uVar17 = *(uint *)(*(int *)(uStack_168 + 0xc) + 4); uVar17 != uStack_168;
                uVar17 = *(uint *)(uVar17 + 8)) {
              puVar24 = (undefined4 *)(uVar17 + 8);
            }
            *puVar24 = *(undefined4 *)(uVar17 + 8);
            fn_82ABE5F8(iVar6,uStack_168,0x14,0x1a);
          }
          if (*(int *)(uStack_160 + 0x10) == 0) {
            puVar24 = (undefined4 *)(*(int *)(uStack_160 + 0xc) + 4);
            for (uVar17 = *(uint *)(*(int *)(uStack_160 + 0xc) + 4); uVar17 != uStack_160;
                uVar17 = *(uint *)(uVar17 + 8)) {
              puVar24 = (undefined4 *)(uVar17 + 8);
            }
            *puVar24 = *(undefined4 *)(uVar17 + 8);
            fn_82ABE5F8(iVar6,uStack_160,0x14,0x1a);
          }
          if (puStack_180[4] == 0) {
            puVar25 = (uint *)(puStack_180[3] + 4);
            for (puVar34 = *(uint **)(puStack_180[3] + 4); puVar34 != puStack_180;
                puVar34 = (uint *)puVar34[2]) {
              puVar25 = puVar34 + 2;
            }
            *puVar25 = puVar34[2];
            fn_82ABE5F8(iVar6,puStack_180,0x14,0x1a);
          }
          uVar21 = uVar21 + 1;
          puVar37 = puVar37 + 1;
        }
        puVar37 = (uint *)puVar7[0xc - uVar21];
        if ((*puVar37 & 0xe000000) != 0x2000000) {
          fn_82AEFB18(puVar37,*puVar32 >> 5 & 3 | 0xe4);
          *puVar37 = *puVar37 & 0xf1ffffff | 0x2000000;
        }
        fn_82AD35A8(puVar45,2,puStack_180,iVar6);
        puStack_180 = (uint *)0x0;
        if (uStack_168 != uVar9) {
          fn_82AD35A8(puVar45,0,uStack_168,iVar6);
        }
        if (uStack_160 != uVar31) {
          fn_82AD35A8(puVar45,1,uStack_160,iVar6);
        }
        uVar9 = (uint)puVar7 & 0xfffffffe;
        uVar31 = (uint)puVar45 & 0xfffffffe;
        puVar32 = (uint *)(uVar9 + 0x24);
        puVar25 = puVar45 + 1;
        *(uint *)((*(uint *)(uVar9 + 0x28) & 0xfffffffe) + 0x24) = *puVar32;
        *(undefined4 *)(*puVar32 & 0xfffffffe) = *(undefined4 *)(uVar9 + 0x28);
        *(undefined4 *)(uVar9 + 0x28) = *(undefined4 *)(uVar31 + 0x28);
        *(uint *)((*(uint *)(uVar31 + 0x28) & 0xfffffffe) + 0x24) = uVar9 + 0x28;
        *puVar32 = uVar31 + 0x28;
        *(uint *)(uVar31 + 0x28) = uVar9;
        puVar32 = puVar25;
        while (puVar33 = (uint *)*puVar32, puVar33 != (uint *)0x0) {
          if ((puVar33[4] != 0) && ((*puVar33 & 0xe000000) != 0)) {
            puVar26 = (uint *)(puVar33[3] + 4);
            for (puVar29 = (uint *)*puVar26; puVar29 != puVar33; puVar29 = (uint *)puVar29[2]) {
              puVar26 = puVar29 + 2;
            }
            *puVar26 = puVar33[2];
            puVar33[2] = puVar7[1];
            puVar7[1] = (uint)puVar33;
            puVar33[3] = (uint)puVar7;
            uVar9 = *puVar33;
            *puVar33 = ((((0U >> (uVar9 >> 10 & 6) & 3) << 2 | 0U >> (uVar9 >> 8 & 6) & 3) << 2 |
                        0U >> (uVar9 >> 6 & 6) & 3) << 2 | 0U >> (uVar9 >> 4 & 6) & 3) << 5 |
                       uVar9 & 0xffffe01f;
          }
          if ((uint *)*puVar32 == puVar33) {
            puVar32 = puVar33 + 2;
          }
        }
        puVar33 = (uint *)(puVar34[3] + 4);
        for (puVar32 = (uint *)*puVar33; puVar32 != puVar34; puVar32 = (uint *)puVar32[2]) {
          puVar33 = puVar32 + 2;
        }
        *puVar33 = puVar34[2];
        puVar34[2] = *puVar25;
        *puVar25 = (uint)puVar34;
        puVar34[3] = (uint)puVar45;
        uVar9 = puVar45[2] >> 1 & 0xf;
        *puVar34 = (uint)((-LZCOUNT(uVar9 & ~(uVar9 - 1)) - 1U & 0xffffffff) << 5) & 0x360 |
                   0x2001c80 | *puVar34 & 0xf3fffc80;
        fn_82AD1B28(puVar7);
        puVar32 = puVar7;
        if ((*puVar37 & 0x18) == 0) {
          while (puVar37 = (uint *)*puVar32, puVar37 != (uint *)0x0) {
            uVar9 = *puVar37;
            if (((uVar9 & 0x40000000) == 0) || (bVar23 = true, (uVar9 & 0xe000000) != 0)) {
              bVar23 = false;
            }
            if ((bVar23) && ((uVar9 & 0x1ffe000) == 0)) {
              fn_82AD1978(puVar45,puVar37);
              fn_82AD20C0(puVar7,puVar37,iVar6);
            }
            if ((uint *)*puVar32 == puVar37) {
              puVar32 = puVar37 + 1;
            }
          }
        }
        uVar9 = puVar45[2] >> 0x17 & 1;
        if ((uVar9 == 0) || ((puVar7[2] >> 0x17 & 1) != 0)) {
          if (((puVar7[2] >> 0x17 & 1) != 0) && (uVar9 == 0)) {
            puVar7 = (uint *)fn_82AD0098(puVar7);
            goto LAB_82af1634;
          }
        }
        else {
LAB_82af1634:
          fn_82B102D8(iVar6,puVar7);
        }
        if ((puVar45[2] & 1) != 0) break;
      }
    }
  }
  else if (uVar31 == 0x37) {
    puVar32 = (uint *)puVar45[0xb];
    uVar9 = *puVar32;
    if (((((uVar9 >> 2 ^ uVar9) & 0x60) == 0) &&
        (puVar34 = (uint *)puVar32[3], (puVar34[2] & 0x3f80) == 0x580)) && ((uVar9 & 0x1f) == 0)) {
      puVar7 = (uint *)puVar34[0xb];
      puVar25 = puVar34 + 1;
      uVar9 = puVar7[3];
      for (puVar37 = (uint *)puVar34[1]; puVar37 != puVar32; puVar37 = (uint *)puVar37[2]) {
        puVar25 = puVar37 + 2;
      }
      *puVar25 = puVar32[2];
      puVar32[2] = *(uint *)(uVar9 + 4);
      *(uint **)(uVar9 + 4) = puVar32;
      puVar32[3] = uVar9;
      uVar9 = *puVar32;
      uVar31 = *puVar7;
      *puVar32 = uVar9 & 0xffffffe0 | uVar31 & 0x1f;
      uVar21 = *puVar7 >> 5 & 0xff;
      *puVar32 = ((((uVar21 >> ((uVar9 & 0x1800) >> 10) & 3) << 2 |
                   uVar21 >> ((uVar9 & 0x600) >> 8) & 3) << 2 | uVar21 >> ((uVar9 & 0x180) >> 6) & 3
                  ) << 2 | uVar21 >> ((uVar9 & 0x60) >> 4) & 3) << 5 |
                 uVar9 & 0xffffe000 | uVar31 & 0x1f;
      puVar45[2] = puVar45[2] & 0xffffc07f | 0x1c00;
      for (puVar32 = (uint *)*puVar34; puVar32 != (uint *)0x0; puVar32 = (uint *)puVar32[1]) {
        if ((*puVar32 & 0xe000000) == 0) {
          fn_82AD1978(puVar45,puVar32);
        }
      }
      cVar15 = fn_82ABE2E0(puVar34);
joined_r0x82af37cc:
      puVar45 = puVar34;
      if (cVar15 != '\0') {
LAB_82af2fd8:
        fn_82B8AC10(iVar6,puVar45,0,1);
      }
      goto LAB_82af0db4;
    }
  }
  else if (uVar31 == 0x6e) {
    puVar7 = puVar45 + 1;
    for (puVar32 = (uint *)puVar45[1]; puVar32 != (uint *)0x0; puVar32 = (uint *)puVar32[2]) {
      if ((puVar32[4] != 0) && (uVar9 = *puVar32, (uVar9 & 0xe000000) != 0)) {
        uVar3 = fn_82ABDBA0(puVar32);
        if (((uVar3 & 0xffffffff) == 0) || (bVar23 = true, uVar3 != (uVar3 & ~(uVar3 - 1)))) {
          bVar23 = false;
        }
        if ((!bVar23) ||
           (cVar15 = fn_82AEFAD0(*(uint *)puVar45[(uVar9 >> 5 & 3) + 0xb] & 0x1f,uVar9 & 0x1f),
           cVar15 == '\0')) goto LAB_82af1070;
      }
    }
    while (puVar32 = (uint *)*puVar7, puVar32 != (uint *)0x0) {
      if ((puVar32[4] != 0) && ((*puVar32 & 0xe000000) != 0)) {
        puVar25 = (uint *)(puVar32[3] + 4);
        puVar34 = (uint *)puVar45[(*puVar32 >> 5 & 3) + 0xb];
        uVar9 = puVar34[3];
        uVar3 = (ulonglong)(*puVar34 >> 5) & 3;
        for (puVar37 = (uint *)*puVar25; puVar37 != puVar32; puVar37 = (uint *)puVar37[2]) {
          puVar25 = puVar37 + 2;
        }
        *puVar25 = puVar32[2];
        puVar32[2] = *(uint *)(uVar9 + 4);
        *(uint **)(uVar9 + 4) = puVar32;
        puVar32[3] = uVar9;
        uVar9 = fn_82AD1228(*puVar34 & 0x1f,*puVar32 & 0x1f);
        *puVar32 = (uint)((((uVar3 << 2 | uVar3) << 2 | uVar3) << 2 | uVar3) << 5) | uVar9 & 0x1f |
                   *puVar32 & 0xffffe000;
      }
      if ((uint *)*puVar7 == puVar32) {
        puVar7 = puVar32 + 2;
      }
    }
    cVar15 = fn_82ABE2E0(puVar45);
    if (cVar15 != '\0') {
      fn_82B8AC10(iVar6,puVar45,0,1);
      cStack_17c = '\x01';
      goto LAB_82af0db4;
    }
  }
LAB_82af1070:
  if (puStack_174 == (uint *)0x0) {
    if (puVar45 == (uint *)(-(uint)((puVar38[7] & 1) == 0) & puVar38[7])) goto LAB_82af109c;
    uVar9 = puVar38[7];
  }
  else {
    uVar9 = *(uint *)(((uint)puStack_174 & 0xfffffffe) + 0x28);
    if (puVar45 == (uint *)(-(uint)((uVar9 & 1) == 0) & uVar9)) {
LAB_82af109c:
      uVar9 = *(uint *)(((uint)puVar45 & 0xfffffffe) + 0x28);
      puStack_174 = puVar45;
    }
  }
  puVar45 = (uint *)(-(uint)((uVar9 & 1) == 0) & uVar9);
  goto LAB_82af0e64;
LAB_82af3b00:
  if (cStack_17c != '\0') {
    do {
      uVar9 = puVar38[5];
      while( true ) {
        uVar9 = -(uint)((uVar9 & 1) == 0) & uVar9;
        if (uVar9 == 0) goto LAB_82af3b50;
        cVar15 = fn_82ABE2E0(uVar9);
        if (cVar15 != '\0') break;
        uVar9 = *(uint *)((uVar9 & 0xfffffffe) + 0x28);
      }
      fn_82B8AE98(iVar6,uVar9);
    } while( true );
  }
LAB_82af3b50:
  puVar38 = *(uint **)(((uint)puVar38 & 0xfffffffe) + 4);
  if ((((uint)puVar38 & 1) != 0) || (puStack_16c = puVar38, puVar38 == (uint *)0x0))
  goto LAB_82af3b70;
  goto LAB_82af0db4;
LAB_82af2b7c:
  uVar9 = uVar9 + 1;
  puVar32 = puVar32 + 1;
  puVar7 = puVar7 + -1;
  goto LAB_82af2630;
LAB_82af2bd0:
  puVar32 = (uint *)puVar32[2];
  goto LAB_82af2bb0;
LAB_82af1d60:
  do {
    iVar12 = *(int *)(piVar40[(uVar17 >> (uVar21 & 0x3f) & 3) + 0xb] + 0xc);
    if ((*(uint *)(iVar12 + 8) >> 5 & 1) == 0) {
      uVar39 = *(uint *)((int)auStack_100 + iVar19);
      fn_82B81338(iVar12,uVar39,*(undefined4 *)((int)auStack_f0 + iVar19));
      uVar42 = 0;
      if (puVar37 == (uint *)0x0) {
LAB_82af1ddc:
        if ((uVar31 != 0) && (fn_82B8D488(iVar6,uVar31,iVar12,0), (uVar42 & 0xffffffff) != 0))
        {
          fn_82AD20C0(iVar12,uVar42,iVar6);
        }
      }
      else {
        fn_82B8D488(iVar6,puVar37[3],iVar12,0);
        if (uVar31 != 0) {
          uVar42 = fn_82AD19D8(iVar12,puVar37[3],iVar6);
          goto LAB_82af1ddc;
        }
      }
      for (puVar7 = (uint *)*puVar45; puVar7 != (uint *)0x0; puVar7 = (uint *)puVar7[1]) {
        if ((*puVar7 & 0xe000000) == 0) {
          fn_82AD1978(iVar12,puVar7);
        }
      }
      for (puVar7 = (uint *)puVar45[1]; puVar7 != (uint *)0x0; puVar7 = (uint *)puVar7[2]) {
        if ((puVar7[4] != 0) && ((*puVar7 & 0xe000000) == 0)) {
          fn_82AD1A40(puVar7[4],iVar12,iVar6);
        }
      }
      puVar7 = (uint *)fn_82AD17B0(iVar6,iVar12);
      *puVar7 = (uVar39 & 7) << 0x19 | *puVar7 & 0xf1ffffff;
      fn_82AD1270(puVar7,0);
      *puVar7 = *puVar7 & 0xffffe01f | 0x1c80;
      fn_82AD1978(puVar38[4],puVar7);
      fn_82AD1B28(iVar12);
      *(uint *)(iVar12 + 0x10) = *(uint *)(iVar12 + 0x10) & 0xffe7ffff;
      uVar39 = *(uint *)((int)auStack_110 + iVar19);
      *(uint *)(iVar12 + 8) = *(uint *)(iVar12 + 8) & 0xff7fffdf | 0x20;
      *puVar7 = (uVar9 >> 0xd & 0xff0 | uVar39 & 0xf) << 0xd | 0x40000000 | *puVar7 & 0xfe001fff;
      if ((*puVar32 & 0x1f) != 0) {
        uVar8 = *(undefined4 *)(iVar12 + 0x30);
        fn_82AD1270(*(undefined4 *)(iVar12 + 0x2c));
        fn_82AD1270(uVar8,*puVar32 & 0x1f);
      }
    }
    uVar3 = uVar3 - 1;
    uVar21 = uVar21 + 2;
    iVar19 = iVar19 + 4;
  } while (uVar3 != 0);
LAB_82af30e8:
  puVar45[2] = puVar45[2] & 0xffffffdf;
  fn_82AD20C0(puVar38[4],puVar38,iVar6);
  fn_82B8AC10(iVar6,puVar45,0,1);
  fn_82B8AC10(iVar6,piVar40,0,1);
  puVar38 = puStack_16c;
  goto LAB_82af0db4;
}

