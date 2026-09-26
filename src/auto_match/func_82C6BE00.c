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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_120;
extern unsigned int fStack_114;
extern int fn_82C6B0F0();
extern int fn_82C6B5F0();
extern int fn_82F68918();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern int fn_82F6B2A8();
extern unsigned int iStack_108;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200E890;
extern unsigned int lbl_8208DE50;
extern unsigned int lbl_820FC378;
extern unsigned int lbl_820FC380;
extern unsigned int lbl_820FC388;
extern unsigned int lbl_83231E50;
extern unsigned int lbl_83232350;
extern unsigned int uStack_100;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_140;
extern unsigned int uStack_148;


void fn_82C6BE00(undefined8 param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int in_r0;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  byte *pbVar30;
  int iVar31;
  uint uVar33;
  uint uVar34;
  ulonglong uVar32;
  undefined1 *puVar35;
  int iVar36;
  int iVar39;
  undefined1 *puVar40;
  longlong lVar37;
  ulonglong uVar38;
  uint *puVar41;
  int *piVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  longlong lVar46;
  longlong lVar47;
  int iVar48;
  uint uVar49;
  bool bVar50;
  uint uVar51;
  double dVar52;
  double dVar53;
  double extraout_f1;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  undefined1 in_vs32 [16];
  undefined1 in_vs42 [16];
  undefined4 in_register_000103f0;
  undefined1 *puStack_174;
  undefined1 *puStack_170;
  undefined1 *puStack_16c;
  uint uStack_148;
  uint uStack_140;
  undefined4 auStack_120 [3];
  float fStack_114;
  uint uStack_110;
  uint uStack_10c;
  int iStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  
  iVar19 = fn_82F6A538();
  dVar57 = lbl_82005710;
  if (iVar19 == 0) {
    fn_82F6A584(0xfffffffffffffffd);
  }
  else {
    iVar31 = *(int *)(iVar19 + 0x14);
    uVar6 = *(uint *)(iVar19 + 0x3c30);
    uVar7 = *(uint *)(iVar19 + 0x3c34);
    iVar44 = iVar31 >> 1;
    iVar8 = *(int *)(iVar19 + 0x3c20) >> 1;
    auStack_120[0] = lbl_82002AE0;
    uVar21 = iVar31 >> 5;
    lVar47 = (longlong)(int)uVar21;
    altv207_13(in_vs32,in_vs42);
    uVar27 = iVar31 >> 6;
    lVar46 = (longlong)(int)uVar27;
    bVar50 = extraout_f1 != lbl_82005710;
    puVar12 = (undefined4 *)((int)auStack_120 + in_r0 & 0xfffffff0);
    *puVar12 = in_register_000103f0;
    puVar12[1] = in_register_000103f0;
    puVar12[2] = in_register_000103f0;
    puVar12[3] = in_register_000103f0;
    uStack_110 = uVar27;
    uStack_10c = uVar21;
    if ((bVar50) && (param_3 != dVar57)) {
      dVar58 = ((double)(longlong)iVar31 - param_2) / extraout_f1;
      dVar52 = (lbl_8200E890 / extraout_f1) * param_2;
      dVar54 = dVar52;
      if (dVar58 < dVar52) {
        dVar54 = dVar58;
        dVar58 = dVar52;
      }
      if (dVar54 < 0.0) {
        dVar54 = dVar57;
      }
      dVar52 = extraout_f1;
      dVar59 = lbl_8200E890;
      dVar54 = (double)fn_82F6B2A8(dVar54);
      if ((double)(longlong)*(int *)(iVar19 + 0x3c20) < dVar54) {
        dVar54 = (double)(longlong)*(int *)(iVar19 + 0x3c20);
      }
      dVar55 = (double)fn_82F68918(dVar54);
      dVar54 = dVar58 + lbl_820FC388;
      if ((double)(longlong)*(int *)(iVar19 + 0x3c20) < dVar58 + lbl_820FC388) {
        dVar54 = (double)(longlong)*(int *)(iVar19 + 0x3c20);
      }
      dVar54 = (double)fn_82F68918(dVar54);
      dVar53 = (double)(longlong)*(int *)(iVar19 + 0x3c20);
      if (dVar58 <= (double)(longlong)*(int *)(iVar19 + 0x3c20)) {
        dVar53 = dVar58;
      }
      dVar58 = (double)fn_82F68918(dVar53);
      if (dVar58 < 0.0) {
        dVar58 = dVar57;
      }
      dVar58 = (double)fn_82F6B2A8(dVar58);
      if (dVar54 < 0.0) {
        dVar54 = dVar57;
      }
      dVar56 = (double)fn_82F6B2A8(dVar54);
      dVar53 = (dVar59 / param_3) * param_4;
      dVar59 = ((double)(longlong)*(int *)(iVar19 + 0x3c1c) - param_4) / param_3 + lbl_82005758;
      dVar54 = dVar53;
      if (dVar59 < dVar53) {
        dVar54 = dVar59;
        dVar59 = dVar53;
      }
      if (dVar54 < 0.0) {
        dVar54 = dVar57;
      }
      dVar54 = (double)fn_82F6B2A8(dVar54);
      if ((double)(longlong)*(int *)(iVar19 + 0x3c24) < dVar54) {
        dVar54 = (double)(longlong)*(int *)(iVar19 + 0x3c24);
      }
      dVar53 = (double)fn_82F68918(dVar54);
      uStack_100 = (ulonglong)(int)dVar53;
      dVar54 = (double)(longlong)*(int *)(iVar19 + 0x3c24);
      if (dVar59 <= (double)(longlong)*(int *)(iVar19 + 0x3c24)) {
        dVar54 = dVar59;
      }
      dVar54 = (double)fn_82F68918(dVar54);
      if (dVar54 < 0.0) {
        dVar54 = dVar57;
      }
      uVar33 = (int)dVar53 + 1;
      uVar14 = (int)dVar55 + 1U & 0xfffffffe;
      uVar45 = uVar33 & 0xfffffffe;
      uVar15 = (int)dVar58 & 0xfffffffe;
      uVar16 = (int)dVar56 & 0xfffffffe;
      uStack_100 = CONCAT44(uVar33,(((U64)(uStack_100) >> 32) & 0xFFFFFFFF)) & 0xfffffffeffffffff;
      dVar57 = (double)fn_82F6B2A8(dVar54);
      uStack_148 = (int)dVar57 & 0xfffffffe;
      if ((int)uStack_148 < 2) {
        uStack_148 = 2;
      }
      puStack_16c = *(undefined1 **)(iVar19 + 0x3c38);
      puStack_174 = *(undefined1 **)(iVar19 + 0x3c3c);
      uVar9 = (int)((int)dVar55 + 1U) >> 1;
      puStack_170 = *(undefined1 **)(iVar19 + 0x3c40);
      iVar10 = (int)dVar58 >> 1;
      iStack_108 = (int)dVar56 >> 1;
      iVar43 = 0;
      iVar36 = (int)(dVar52 * lbl_820FC380);
      uVar33 = (uint)(param_3 * lbl_820FC380);
      iVar1 = (int)(dVar52 * lbl_820FC380 * lbl_82002C40);
      uVar22 = (longlong)(int)uVar33 * (longlong)(int)uVar45 -
               (ulonglong)(uint)(int)(param_4 * lbl_820FC378);
      uVar34 = iVar36 * uVar14 - (int)(param_2 * lbl_820FC378);
      uVar22 = ((uVar22 & 0xffffffff) >> 0x1f) - 1 & uVar22;
      uVar34 = -((int)uVar34 >> 0x1f) - 1U & uVar34;
      uStack_140 = (uint)uVar22;
      if (0 < (int)uVar45) {
        do {
          iVar39 = 0;
          if (0 < *(int *)(iVar19 + 0x3c20)) {
            puVar40 = puStack_16c + -1;
            do {
              iVar39 = iVar39 + 1;
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
            } while (iVar39 < *(int *)(iVar19 + 0x3c20));
          }
          if (0 < iVar8) {
            puVar40 = puStack_170;
            iVar39 = iVar8;
            do {
              puVar40[(int)puStack_174 - (int)puStack_170] = 0x80;
              *puVar40 = 0x80;
              puVar40 = puVar40 + 1;
              iVar39 = iVar39 + -1;
            } while (iVar39 != 0);
          }
          iVar39 = *(int *)(iVar19 + 0x3c20);
          puStack_174 = puStack_174 + iVar8;
          puStack_170 = puStack_170 + iVar8;
          iVar20 = 0;
          iVar48 = iVar39;
          if (0 < iVar39) {
            puVar40 = puStack_16c + iVar39 + -1;
            do {
              iVar20 = iVar20 + 1;
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
              iVar48 = *(int *)(iVar19 + 0x3c20);
            } while (iVar20 < iVar48);
          }
          iVar43 = iVar43 + 2;
          puStack_16c = puStack_16c + iVar48 + iVar39;
        } while (iVar43 < (int)uVar45);
      }
      lVar37 = 0;
      lVar29 = (longlong)((int)uStack_140 >> 0xb) * (longlong)(int)*(uint *)(iVar19 + 0x14) +
               (ulonglong)*(uint *)(iVar19 + 0x3c2c);
      if (0 < (int)uVar21) {
        do {
          dataCacheBlockTouch(lVar37 + lVar29);
          dataCacheBlockTouch(lVar37 + (ulonglong)*(uint *)(iVar19 + 0x14) + lVar29);
          lVar37 = lVar37 + 0x80;
          lVar47 = lVar47 + -1;
        } while (lVar47 != 0);
      }
      lVar47 = (longlong)((int)uStack_140 >> 0xc) * (longlong)iVar44;
      if (0 < (int)uVar27) {
        do {
          dataCacheBlockTouch(lVar47 + (ulonglong)uVar6);
          dataCacheBlockTouch(lVar47 + (ulonglong)uVar7);
          lVar47 = lVar47 + 0x80;
          lVar46 = lVar46 + -1;
        } while (lVar46 != 0);
      }
      if ((int)uVar45 < (int)(uStack_148 - 2)) {
        uVar21 = uVar15 - uVar14;
        dVar57 = (double)lbl_8208DE50;
        do {
          uVar27 = (uint)uVar22 & 0x7ff;
          uVar38 = (ulonglong)*(uint *)(iVar19 + 0x14);
          lStack_f8 = (longlong)(int)uVar27;
          lVar46 = (longlong)((int)(uint)uVar22 >> 0xb) * (longlong)(int)*(uint *)(iVar19 + 0x14) +
                   (ulonglong)*(uint *)(iVar19 + 0x3c2c);
          uVar32 = (ulonglong)uStack_10c;
          fStack_114 = (float)((double)lStack_f8 * dVar57);
          if (0 < (int)uStack_10c) {
            do {
              dataCacheBlockTouch(uVar38 + lVar46);
              uVar38 = uVar38 + 0x80;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          puVar40 = puStack_16c;
          if (0 < (int)uVar14) {
            puVar40 = puStack_16c + -1;
            for (uVar51 = uVar14; uVar51 != 0; uVar51 = uVar51 - 1) {
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
            }
            puVar40 = puStack_16c + uVar14;
          }
          lVar47 = 0x10;
          puVar41 = (uint *)0x83232348;
          do {
            puVar41 = puVar41 + 4;
            *puVar41 = uVar27;
            lVar47 = lVar47 + -1;
          } while (lVar47 != 0);
          iVar43 = 0x800 - uVar27;
          uVar51 = (int)uVar21 >> 4;
          lVar47 = (longlong)(int)uVar51;
          lVar29 = (ulonglong)uVar21 + ((ulonglong)uVar51 & 0xfffffff) * -0x10;
          iVar39 = (int)lVar46;
          uVar49 = uVar34;
          if (0 < lVar47) {
            iVar48 = iVar31 + 1;
            do {
              piVar42 = (int *)0x83231e4c;
              puVar41 = (uint *)0x8323234c;
              lVar46 = 4;
              do {
                uVar23 = uVar49 + iVar36;
                pbVar30 = (byte *)(((int)uVar49 >> 0xb) + iVar39);
                uVar49 = uVar49 & 0x7ff;
                uVar17 = uVar23 & 0x7ff;
                bVar4 = pbVar30[iVar31];
                uVar24 = uVar23 + iVar36;
                bVar5 = pbVar30[iVar48];
                bVar2 = pbVar30[1];
                bVar3 = *pbVar30;
                pbVar30 = (byte *)(((int)uVar23 >> 0xb) + iVar39);
                puVar41[2] = uVar49;
                puVar41[4] = uVar49;
                piVar42[3] = (uint)bVar4;
                uVar23 = uVar24 & 0x7ff;
                piVar42[2] = (uint)bVar2;
                piVar42[1] = (uint)bVar3;
                uVar25 = uVar24 + iVar36;
                piVar42[4] = (((uint)bVar5 - (uint)bVar4) - (uint)bVar2) + (uint)bVar3;
                puVar41[1] = iVar43 - uVar49;
                uVar28 = uVar25 & 0x7ff;
                bVar4 = pbVar30[iVar31];
                bVar5 = pbVar30[iVar48];
                bVar2 = pbVar30[1];
                uVar49 = uVar25 + iVar36;
                bVar3 = *pbVar30;
                iVar20 = ((int)uVar24 >> 0xb) + iVar39;
                piVar42[7] = (uint)bVar4;
                piVar42[5] = (uint)bVar3;
                puVar41[6] = uVar17;
                puVar41[8] = uVar17;
                piVar42[6] = (uint)bVar2;
                piVar42[8] = (((uint)bVar5 - (uint)bVar4) - (uint)bVar2) + (uint)bVar3;
                puVar41[5] = iVar43 - uVar17;
                bVar2 = *(byte *)(iVar20 + 1);
                bVar3 = *(byte *)(iVar20 + iVar31);
                bVar4 = *(byte *)(iVar48 + iVar20);
                bVar5 = *(byte *)(((int)uVar24 >> 0xb) + iVar39);
                iVar20 = ((int)uVar25 >> 0xb) + iVar39;
                piVar42[9] = (uint)bVar5;
                puVar41[10] = uVar23;
                puVar41[0xc] = uVar23;
                piVar42[0xb] = (uint)bVar3;
                piVar42[10] = (uint)bVar2;
                piVar42[0xc] = (((uint)bVar4 - (uint)bVar3) - (uint)bVar2) + (uint)bVar5;
                puVar41[9] = iVar43 - uVar23;
                bVar3 = *(byte *)(iVar20 + iVar31);
                bVar4 = *(byte *)(iVar48 + iVar20);
                bVar2 = *(byte *)(iVar20 + 1);
                bVar5 = *(byte *)(((int)uVar25 >> 0xb) + iVar39);
                puVar41[0xd] = iVar43 - uVar28;
                piVar42[0xf] = (uint)bVar3;
                puVar41[0xe] = uVar28;
                piVar42[0xe] = (uint)bVar2;
                piVar42[0xd] = (uint)bVar5;
                piVar42 = piVar42 + 0x10;
                *piVar42 = (((uint)bVar4 - (uint)bVar3) - (uint)bVar2) + (uint)bVar5;
                puVar41 = puVar41 + 0x10;
                *puVar41 = uVar28;
                lVar46 = lVar46 + -1;
              } while (lVar46 != 0);
              iVar20 = fn_82C6B0F0(puVar40,&lbl_83231E50,&lbl_83232350);
              lVar47 = lVar47 + -1;
              puVar40 = (undefined1 *)(iVar20 + 0x10);
            } while (lVar47 != 0);
            uVar22 = (ulonglong)uStack_140;
          }
          if (0 < (int)lVar29) {
            do {
              uVar17 = uVar49 & 0x7ff;
              pbVar30 = (byte *)(((int)uVar49 >> 0xb) + iVar39);
              uVar49 = uVar49 + iVar36;
              *puVar40 = (char)((int)(((int)(((((uint)pbVar30[iVar31 + 1] - (uint)pbVar30[iVar31]) -
                                              (uint)pbVar30[1]) + (uint)*pbVar30) * uVar17 * uVar27)
                                      >> 0xb) + ((0x800 - uVar17) - uVar27) * (uint)*pbVar30 +
                                      pbVar30[1] * uVar17 + pbVar30[iVar31] * uVar27) >> 0xb);
              puVar40 = puVar40 + 1;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
          }
          uVar32 = (ulonglong)uVar16;
          if ((int)uVar15 < (int)uVar16) {
            lVar46 = uVar32 - uVar15;
            do {
              iVar43 = (int)uVar49 >> 0xb;
              uVar49 = uVar49 + iVar36;
              *puVar40 = *(undefined1 *)(iVar43 + iVar39);
              puVar40 = puVar40 + 1;
              lVar46 = lVar46 + -1;
            } while (lVar46 != 0);
          }
          if ((int)uVar16 < *(int *)(iVar19 + 0x3c20)) {
            puVar40 = puVar40 + -1;
            do {
              puVar40 = puVar40 + 1;
              *puVar40 = 0x10;
              uVar32 = uVar32 + 1;
            } while ((int)uVar32 < *(int *)(iVar19 + 0x3c20));
          }
          uVar32 = (ulonglong)uStack_110;
          lVar47 = (longlong)((int)uVar22 >> 0xc) * (longlong)iVar44;
          uVar27 = (int)uVar22 >> 1 & 0x7ff;
          lVar46 = lVar47 + iVar44;
          lStack_e8 = (longlong)(int)uVar27;
          fStack_114 = (float)((double)lStack_e8 * dVar57);
          if (0 < (int)uStack_110) {
            do {
              dataCacheBlockTouch(lVar46 + (ulonglong)uVar6);
              dataCacheBlockTouch(lVar46 + (ulonglong)uVar7);
              lVar46 = lVar46 + 0x80;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          uVar32 = (ulonglong)uVar9;
          puVar40 = puStack_174;
          puVar35 = puStack_170;
          if (0 < (int)uVar9) {
            do {
              *puVar40 = 0x80;
              puVar40 = puVar40 + 1;
              *puVar35 = 0x80;
              puVar35 = puVar35 + 1;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          lVar46 = 0x10;
          puVar41 = (uint *)0x83232348;
          do {
            puVar41 = puVar41 + 4;
            *puVar41 = uVar27;
            lVar46 = lVar46 + -1;
          } while (lVar46 != 0);
          iVar39 = 0x800 - uVar27;
          uVar49 = (int)(iVar10 - uVar9) >> 4;
          lVar46 = (longlong)(int)uVar49;
          lVar29 = (ulonglong)(iVar10 - uVar9) + ((ulonglong)uVar49 & 0xfffffff) * -0x10;
          iVar43 = (int)lVar47;
          uVar49 = uVar34;
          if (0 < lVar46) {
            iVar48 = iVar44 + 1;
            iVar20 = iVar43 + uVar6;
            iVar18 = iVar43 + uVar7;
            do {
              piVar42 = (int *)0x83231e4c;
              puVar41 = (uint *)0x8323234c;
              lVar47 = 4;
              do {
                iVar11 = (int)uVar49 >> 0xc;
                iVar13 = iVar20 + iVar11;
                uVar17 = (int)uVar49 >> 1 & 0x7ff;
                iVar26 = uVar49 + iVar1;
                bVar3 = *(byte *)(iVar20 + iVar11);
                bVar4 = *(byte *)(iVar13 + iVar44);
                bVar2 = *(byte *)(iVar13 + 1);
                bVar5 = *(byte *)(iVar48 + iVar13);
                pbVar30 = (byte *)(iVar18 + iVar11);
                piVar42[1] = (uint)bVar3;
                iVar11 = iVar26 >> 0xc;
                puVar41[2] = uVar17;
                piVar42[3] = (uint)bVar4;
                puVar41[4] = uVar17;
                puVar41[1] = iVar39 - uVar17;
                piVar42[2] = (uint)bVar2;
                uVar49 = iVar26 >> 1 & 0x7ff;
                piVar42[4] = (((uint)bVar5 - (uint)bVar4) - (uint)bVar2) + (uint)bVar3;
                iVar26 = iVar26 + iVar1;
                bVar4 = pbVar30[iVar44];
                bVar2 = pbVar30[1];
                bVar5 = pbVar30[iVar48];
                bVar3 = *pbVar30;
                piVar42[7] = (uint)bVar4;
                iVar13 = iVar20 + iVar11;
                piVar42[6] = (uint)bVar2;
                piVar42[5] = (uint)bVar3;
                piVar42[8] = (((uint)bVar5 - (uint)bVar4) - (uint)bVar2) + (uint)bVar3;
                bVar3 = *(byte *)(iVar13 + iVar44);
                bVar4 = *(byte *)(iVar48 + iVar13);
                bVar2 = *(byte *)(iVar13 + 1);
                bVar5 = *(byte *)(iVar20 + iVar11);
                pbVar30 = (byte *)(iVar18 + iVar11);
                piVar42[9] = (uint)bVar5;
                piVar42[0xc] = (((uint)bVar4 - (uint)bVar3) - (uint)bVar2) + (uint)bVar5;
                iVar11 = iVar26 >> 0xc;
                puVar41[6] = uVar49;
                puVar41[8] = uVar49;
                piVar42[0xb] = (uint)bVar3;
                uVar17 = iVar26 >> 1 & 0x7ff;
                piVar42[10] = (uint)bVar2;
                puVar41[5] = iVar39 - uVar49;
                bVar4 = pbVar30[iVar44];
                bVar2 = pbVar30[1];
                bVar3 = *pbVar30;
                bVar5 = pbVar30[iVar48];
                piVar42[0xd] = (uint)bVar3;
                iVar13 = iVar20 + iVar11;
                piVar42[0xe] = (uint)bVar2;
                piVar42[0xf] = (uint)bVar4;
                piVar42[0x10] = (((uint)bVar5 - (uint)bVar4) - (uint)bVar2) + (uint)bVar3;
                bVar3 = *(byte *)(iVar13 + iVar44);
                bVar4 = *(byte *)(iVar48 + iVar13);
                bVar2 = *(byte *)(iVar13 + 1);
                bVar5 = *(byte *)(iVar20 + iVar11);
                puVar41[9] = iVar39 - uVar17;
                piVar42[0x13] = (uint)bVar3;
                piVar42[0x12] = (uint)bVar2;
                piVar42[0x11] = (uint)bVar5;
                piVar42[0x14] = (((uint)bVar4 - (uint)bVar3) - (uint)bVar2) + (uint)bVar5;
                puVar41[10] = uVar17;
                pbVar30 = (byte *)(iVar18 + iVar11);
                puVar41[0xc] = uVar17;
                iVar26 = iVar26 + iVar1;
                iVar11 = iVar26 >> 0xc;
                bVar4 = pbVar30[iVar48];
                uVar49 = iVar26 + iVar1;
                bVar2 = pbVar30[1];
                uVar17 = iVar26 >> 1 & 0x7ff;
                bVar3 = *pbVar30;
                bVar5 = pbVar30[iVar44];
                iVar13 = iVar20 + iVar11;
                piVar42[0x15] = (uint)bVar3;
                piVar42[0x16] = (uint)bVar2;
                piVar42[0x17] = (uint)bVar5;
                piVar42[0x18] = (((uint)bVar4 - (uint)bVar5) - (uint)bVar2) + (uint)bVar3;
                bVar2 = *(byte *)(iVar13 + 1);
                bVar3 = *(byte *)(iVar13 + iVar44);
                bVar4 = *(byte *)(iVar20 + iVar11);
                bVar5 = *(byte *)(iVar48 + iVar13);
                pbVar30 = (byte *)(iVar18 + iVar11);
                piVar42[0x19] = (uint)bVar4;
                puVar41[0xd] = iVar39 - uVar17;
                puVar41[0xe] = uVar17;
                piVar42[0x1b] = (uint)bVar3;
                piVar42[0x1a] = (uint)bVar2;
                puVar41 = puVar41 + 0x10;
                *puVar41 = uVar17;
                piVar42[0x1c] = (((uint)bVar5 - (uint)bVar3) - (uint)bVar2) + (uint)bVar4;
                bVar4 = pbVar30[iVar44];
                bVar5 = pbVar30[iVar48];
                bVar2 = pbVar30[1];
                bVar3 = *pbVar30;
                piVar42[0x1e] = (uint)bVar2;
                piVar42[0x1d] = (uint)bVar3;
                piVar42[0x1f] = (uint)bVar4;
                piVar42 = piVar42 + 0x20;
                *piVar42 = (((uint)bVar5 - (uint)bVar4) - (uint)bVar2) + (uint)bVar3;
                lVar47 = lVar47 + -1;
              } while (lVar47 != 0);
              fn_82C6B5F0(puVar40,puVar35,&lbl_83231E50,&lbl_83232350);
              lVar46 = lVar46 + -1;
              puVar40 = puVar40 + 0x10;
              puVar35 = puVar35 + 0x10;
            } while (lVar46 != 0);
            uVar22 = (ulonglong)uStack_140;
          }
          if (0 < (int)lVar29) {
            do {
              iVar39 = (int)uVar49 >> 0xc;
              iVar48 = iVar43 + uVar6 + iVar39;
              uVar17 = (int)uVar49 >> 1 & 0x7ff;
              uVar49 = uVar49 + iVar1;
              iVar20 = (0x800 - uVar17) - uVar27;
              bVar2 = *(byte *)(iVar43 + uVar6 + iVar39);
              pbVar30 = (byte *)(iVar43 + uVar7 + iVar39);
              *puVar40 = (char)((int)(((int)(((((uint)*(byte *)(iVar44 + 1 + iVar48) -
                                               (uint)*(byte *)(iVar48 + iVar44)) -
                                              (uint)*(byte *)(iVar48 + 1)) + (uint)bVar2) * uVar17 *
                                            uVar27) >> 0xb) + *(byte *)(iVar48 + 1) * uVar17 +
                                      *(byte *)(iVar48 + iVar44) * uVar27 + iVar20 * (uint)bVar2) >>
                               0xb);
              puVar40 = puVar40 + 1;
              *puVar35 = (char)((int)(((int)(((((uint)pbVar30[iVar44 + 1] - (uint)pbVar30[iVar44]) -
                                              (uint)pbVar30[1]) + (uint)*pbVar30) * uVar17 * uVar27)
                                      >> 0xb) + pbVar30[1] * uVar17 + pbVar30[iVar44] * uVar27 +
                                     iVar20 * (uint)*pbVar30) >> 0xb);
              puVar35 = puVar35 + 1;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
          }
          if (iVar10 < iStack_108) {
            iVar39 = iStack_108 - iVar10;
            do {
              iVar48 = (int)uVar49 >> 0xc;
              uVar49 = uVar49 + iVar1;
              *puVar40 = *(undefined1 *)(iVar43 + uVar6 + iVar48);
              puVar40 = puVar40 + 1;
              *puVar35 = *(undefined1 *)(iVar43 + uVar7 + iVar48);
              puVar35 = puVar35 + 1;
              iVar39 = iVar39 + -1;
            } while (iVar39 != 0);
          }
          if (iStack_108 < iVar8) {
            iVar39 = iVar8 - iStack_108;
            iVar43 = iStack_108;
            do {
              puVar40[iVar43 - iStack_108] = 0x80;
              puVar35[iVar43 - iStack_108] = 0x80;
              iVar43 = iVar43 + 1;
              iVar39 = iVar39 + -1;
            } while (iVar39 != 0);
          }
          puStack_174 = puStack_174 + iVar8;
          puStack_170 = puStack_170 + iVar8;
          puStack_16c = puStack_16c + *(int *)(iVar19 + 0x3c20);
          uVar22 = ((uVar22 + uVar33 & 0xffffffff) >> 0x1f) - 1 & uVar22 + uVar33;
          uVar27 = (uint)uVar22;
          uVar49 = uVar27 & 0x7ff;
          lStack_f0 = (longlong)(int)uVar49;
          iVar43 = ((int)uVar27 >> 0xb) * *(int *)(iVar19 + 0x14) + *(int *)(iVar19 + 0x3c2c);
          fStack_114 = (float)((double)lStack_f0 * dVar57);
          puVar40 = puStack_16c;
          if (0 < (int)uVar14) {
            puVar40 = puStack_16c + -1;
            for (uVar27 = uVar14; uVar27 != 0; uVar27 = uVar27 - 1) {
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
            }
            puVar40 = puStack_16c + uVar14;
          }
          lVar46 = 0x10;
          puVar41 = (uint *)0x83232348;
          do {
            puVar41 = puVar41 + 4;
            *puVar41 = uVar49;
            lVar46 = lVar46 + -1;
          } while (lVar46 != 0);
          iVar39 = 0x800 - uVar49;
          lVar46 = (longlong)(int)uVar51;
          lVar47 = (ulonglong)uVar21 + ((ulonglong)uVar51 & 0xfffffff) * -0x10;
          uVar27 = uVar34;
          if (0 < lVar46) {
            iVar48 = iVar31 + 1;
            do {
              piVar42 = (int *)0x83231e4c;
              puVar41 = (uint *)0x8323234c;
              lVar29 = 4;
              do {
                uVar51 = uVar27 & 0x7ff;
                pbVar30 = (byte *)(((int)uVar27 >> 0xb) + iVar43);
                uVar27 = uVar27 + iVar36;
                uVar17 = uVar27 & 0x7ff;
                bVar4 = pbVar30[iVar31];
                uVar28 = uVar27 + iVar36;
                bVar5 = pbVar30[iVar48];
                bVar2 = pbVar30[1];
                uVar23 = uVar28 & 0x7ff;
                bVar3 = *pbVar30;
                pbVar30 = (byte *)(((int)uVar27 >> 0xb) + iVar43);
                puVar41[2] = uVar51;
                piVar42[3] = (uint)bVar4;
                puVar41[1] = iVar39 - uVar51;
                piVar42[2] = (uint)bVar2;
                piVar42[1] = (uint)bVar3;
                uVar24 = uVar28 + iVar36;
                piVar42[4] = (((uint)bVar5 - (uint)bVar4) - (uint)bVar2) + (uint)bVar3;
                puVar41[4] = uVar51;
                uVar51 = uVar24 & 0x7ff;
                uVar27 = uVar24 + iVar36;
                bVar4 = pbVar30[iVar31];
                bVar2 = *pbVar30;
                bVar5 = pbVar30[iVar48];
                bVar3 = pbVar30[1];
                puVar41[6] = uVar17;
                puVar41[8] = uVar17;
                iVar20 = ((int)uVar28 >> 0xb) + iVar43;
                piVar42[5] = (uint)bVar2;
                piVar42[8] = (((uint)bVar5 - (uint)bVar4) - (uint)bVar3) + (uint)bVar2;
                piVar42[7] = (uint)bVar4;
                puVar41[5] = iVar39 - uVar17;
                piVar42[6] = (uint)bVar3;
                bVar2 = *(byte *)(iVar20 + 1);
                bVar3 = *(byte *)(iVar48 + iVar20);
                bVar4 = *(byte *)(iVar20 + iVar31);
                iVar20 = ((int)uVar24 >> 0xb) + iVar43;
                bVar5 = *(byte *)(((int)uVar28 >> 0xb) + iVar43);
                puVar41[10] = uVar23;
                piVar42[9] = (uint)bVar5;
                puVar41[0xc] = uVar23;
                piVar42[0xb] = (uint)bVar4;
                piVar42[0xc] = (((uint)bVar3 - (uint)bVar4) - (uint)bVar2) + (uint)bVar5;
                piVar42[10] = (uint)bVar2;
                puVar41[9] = iVar39 - uVar23;
                bVar2 = *(byte *)(iVar20 + 1);
                bVar3 = *(byte *)(iVar48 + iVar20);
                bVar4 = *(byte *)(iVar20 + iVar31);
                bVar5 = *(byte *)(((int)uVar24 >> 0xb) + iVar43);
                puVar41[0xd] = iVar39 - uVar51;
                piVar42[0xf] = (uint)bVar4;
                puVar41[0xe] = uVar51;
                piVar42[0xe] = (uint)bVar2;
                piVar42[0xd] = (uint)bVar5;
                piVar42 = piVar42 + 0x10;
                *piVar42 = (((uint)bVar3 - (uint)bVar4) - (uint)bVar2) + (uint)bVar5;
                puVar41 = puVar41 + 0x10;
                *puVar41 = uVar51;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              iVar20 = fn_82C6B0F0(puVar40,&lbl_83231E50,&lbl_83232350);
              lVar46 = lVar46 + -1;
              puVar40 = (undefined1 *)(iVar20 + 0x10);
            } while (lVar46 != 0);
          }
          if (0 < (int)lVar47) {
            do {
              uVar51 = uVar27 & 0x7ff;
              pbVar30 = (byte *)(((int)uVar27 >> 0xb) + iVar43);
              uVar27 = uVar27 + iVar36;
              *puVar40 = (char)((int)(((int)(((((uint)pbVar30[iVar31 + 1] - (uint)pbVar30[iVar31]) -
                                              (uint)pbVar30[1]) + (uint)*pbVar30) * uVar51 * uVar49)
                                      >> 0xb) + ((0x800 - uVar51) - uVar49) * (uint)*pbVar30 +
                                      pbVar30[1] * uVar51 + pbVar30[iVar31] * uVar49) >> 0xb);
              puVar40 = puVar40 + 1;
              lVar47 = lVar47 + -1;
            } while (lVar47 != 0);
          }
          uVar32 = (ulonglong)uVar16;
          if ((int)uVar15 < (int)uVar16) {
            lVar46 = uVar32 - uVar15;
            do {
              iVar39 = (int)uVar27 >> 0xb;
              uVar27 = uVar27 + iVar36;
              *puVar40 = *(undefined1 *)(iVar39 + iVar43);
              puVar40 = puVar40 + 1;
              lVar46 = lVar46 + -1;
            } while (lVar46 != 0);
          }
          iVar43 = *(int *)(iVar19 + 0x3c20);
          if ((int)uVar16 < iVar43) {
            puVar40 = puVar40 + -1;
            do {
              puVar40 = puVar40 + 1;
              *puVar40 = 0x10;
              uVar32 = uVar32 + 1;
              iVar43 = *(int *)(iVar19 + 0x3c20);
            } while ((int)uVar32 < iVar43);
          }
          puStack_16c = puStack_16c + iVar43;
          uVar22 = uVar22 + uVar33;
          uVar45 = uVar45 + 2;
          uVar22 = ((uVar22 & 0xffffffff) >> 0x1f) - 1 & uVar22;
          uStack_140 = (uint)uVar22;
        } while ((int)uVar45 < (int)(uStack_148 - 2));
      }
      iVar43 = uStack_148 - 2;
      iVar31 = (int)uVar22 >> 0xb;
      if (*(int *)(iVar19 + 0x3c1c) <= iVar31) {
        iVar31 = *(int *)(iVar19 + 0x3c1c) + -1;
      }
      uVar21 = uVar34;
      if ((((U64)(uStack_100) >> 0) & 0xFFFFFFFF) + 2 <= (int)uStack_148) {
        for (; iVar43 < (int)uStack_148; iVar43 = iVar43 + 2) {
          puVar40 = puStack_16c;
          if (0 < (int)uVar14) {
            puVar40 = puStack_16c + -1;
            for (uVar27 = uVar14; uVar27 != 0; uVar27 = uVar27 - 1) {
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
            }
            puVar40 = puStack_16c + uVar14;
          }
          iVar39 = *(int *)(iVar19 + 0x14);
          iVar48 = *(int *)(iVar19 + 0x3c2c);
          if ((int)uVar14 < (int)uVar15) {
            iVar20 = uVar15 - uVar14;
            do {
              iVar18 = (int)uVar21 >> 0xb;
              uVar21 = uVar21 + iVar36;
              *puVar40 = *(undefined1 *)(iVar18 + iVar39 * iVar31 + iVar48);
              puVar40 = puVar40 + 1;
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          }
          if ((int)uVar15 < *(int *)(iVar19 + 0x3c20)) {
            puVar40 = puVar40 + -1;
            uVar21 = uVar15;
            do {
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
              uVar21 = uVar21 + 1;
            } while ((int)uVar21 < *(int *)(iVar19 + 0x3c20));
          }
          puVar40 = puStack_174;
          puVar35 = puStack_170;
          uVar21 = uVar9;
          if (0 < (int)uVar9) {
            do {
              *puVar40 = 0x80;
              puVar40 = puVar40 + 1;
              *puVar35 = 0x80;
              puVar35 = puVar35 + 1;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          iVar31 = (int)uVar22 >> 0xc;
          iVar39 = *(int *)(iVar19 + 0x3c1c) >> 1;
          if (iVar39 <= iVar31) {
            iVar31 = iVar39 + -1;
          }
          if ((int)uVar9 < iVar10) {
            iVar39 = iVar10 - uVar9;
            uVar21 = uVar34;
            do {
              iVar48 = (int)uVar21 >> 0xc;
              uVar21 = uVar21 + iVar1;
              *puVar40 = *(undefined1 *)(iVar31 * iVar44 + uVar6 + iVar48);
              puVar40 = puVar40 + 1;
              *puVar35 = *(undefined1 *)(iVar31 * iVar44 + uVar7 + iVar48);
              puVar35 = puVar35 + 1;
              iVar39 = iVar39 + -1;
            } while (iVar39 != 0);
          }
          if (iVar10 < iVar8) {
            iVar39 = iVar8 - iVar10;
            iVar31 = iVar10;
            do {
              puVar40[iVar31 - iVar10] = 0x80;
              puVar35[iVar31 - iVar10] = 0x80;
              iVar31 = iVar31 + 1;
              iVar39 = iVar39 + -1;
            } while (iVar39 != 0);
          }
          puStack_174 = puStack_174 + iVar8;
          puStack_170 = puStack_170 + iVar8;
          puStack_16c = puStack_16c + *(int *)(iVar19 + 0x3c20);
          uVar22 = ((uVar22 + uVar33 & 0xffffffff) >> 0x1f) - 1 & uVar22 + uVar33;
          iVar31 = (int)uVar22 >> 0xb;
          if (*(int *)(iVar19 + 0x3c1c) <= iVar31) {
            iVar31 = *(int *)(iVar19 + 0x3c1c) + -1;
          }
          puVar40 = puStack_16c;
          if (0 < (int)uVar14) {
            puVar40 = puStack_16c + -1;
            for (uVar21 = uVar14; uVar21 != 0; uVar21 = uVar21 - 1) {
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
            }
            puVar40 = puStack_16c + uVar14;
          }
          iVar39 = *(int *)(iVar19 + 0x14);
          iVar48 = *(int *)(iVar19 + 0x3c2c);
          uVar21 = uVar34;
          if ((int)uVar14 < (int)uVar15) {
            iVar20 = uVar15 - uVar14;
            do {
              iVar18 = (int)uVar21 >> 0xb;
              uVar21 = uVar21 + iVar36;
              *puVar40 = *(undefined1 *)(iVar18 + iVar39 * iVar31 + iVar48);
              puVar40 = puVar40 + 1;
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          }
          iVar39 = *(int *)(iVar19 + 0x3c20);
          if ((int)uVar15 < iVar39) {
            puVar40 = puVar40 + -1;
            uVar27 = uVar15;
            do {
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
              uVar27 = uVar27 + 1;
              iVar39 = *(int *)(iVar19 + 0x3c20);
            } while ((int)uVar27 < iVar39);
          }
          puStack_16c = puStack_16c + iVar39;
        }
      }
      if ((int)uStack_148 < *(int *)(iVar19 + 0x3c24)) {
        do {
          iVar31 = 0;
          if (0 < *(int *)(iVar19 + 0x3c20)) {
            puVar40 = puStack_16c + -1;
            do {
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
              iVar31 = iVar31 + 1;
            } while (iVar31 < *(int *)(iVar19 + 0x3c20));
          }
          if (0 < iVar8) {
            iVar31 = iVar8;
            puVar40 = puStack_170;
            do {
              puVar40[(int)puStack_174 - (int)puStack_170] = 0x80;
              *puVar40 = 0x80;
              puVar40 = puVar40 + 1;
              iVar31 = iVar31 + -1;
            } while (iVar31 != 0);
          }
          iVar31 = *(int *)(iVar19 + 0x3c20);
          puStack_174 = puStack_174 + iVar8;
          puStack_170 = puStack_170 + iVar8;
          iVar36 = 0;
          iVar44 = iVar31;
          if (0 < iVar31) {
            puVar40 = puStack_16c + iVar31 + -1;
            do {
              iVar36 = iVar36 + 1;
              puVar40 = puVar40 + 1;
              *puVar40 = 0;
              iVar44 = *(int *)(iVar19 + 0x3c20);
            } while (iVar36 < iVar44);
          }
          uStack_148 = uStack_148 + 2;
          puStack_16c = puStack_16c + iVar44 + iVar31;
        } while ((int)uStack_148 < *(int *)(iVar19 + 0x3c24));
      }
    }
    fn_82F6A584(0);
  }
  return;
}

