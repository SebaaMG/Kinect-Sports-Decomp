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
extern int iRam83236bf4;
extern unsigned int iStack_100;
extern unsigned int iStack_114;
extern unsigned int iStack_128;
extern unsigned int iStack_158;
extern unsigned int iStack_168;
extern unsigned int iStack_f8;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82052318;
extern unsigned int lbl_820FC3A8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82CC9120(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  bool bVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined1 *puVar35;
  ulonglong uVar36;
  int iVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  int iVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  undefined1 *puVar43;
  ulonglong uVar44;
  byte *pbVar45;
  int iVar46;
  int iVar48;
  ulonglong uVar47;
  ulonglong uVar49;
  int iVar50;
  int iVar51;
  byte bVar52;
  int iVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  int iVar56;
  byte *pbVar59;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar60;
  byte *pbVar62;
  ulonglong uVar61;
  ulonglong uVar63;
  ulonglong uVar64;
  undefined1 *puVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  double dVar68;
  int iStack_168;
  undefined1 *puStack_160;
  int iStack_158;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  int iStack_128;
  int iStack_114;
  int iStack_100;
  int iStack_f8;
  
  dVar32 = lbl_820FC3A8;
  dVar31 = lbl_82052318;
  dVar30 = lbl_82005758;
  dVar29 = lbl_82005730;
  dVar28 = lbl_82005710;
  iVar18 = *(int *)(param_5 + 0x68);
  iVar19 = *(int *)(param_5 + 0x6c);
  iVar20 = *(int *)(param_5 + 0x50) >> 1;
  iStack_f8 = 0;
  if (0 < *(int *)(param_5 + 0x5c)) {
    puVar65 = (undefined1 *)(*(int *)(param_5 + 0x78) + -1);
    param_2 = param_2 - param_1;
    puVar35 = (undefined1 *)(*(int *)(param_5 + 0x74) + -1);
    puVar43 = (undefined1 *)(*(int *)(param_5 + 0x70) + -1);
    puStack_160 = puVar43;
    puStack_140 = puVar35;
    puStack_13c = puVar65;
    do {
      bVar27 = true;
      bVar26 = true;
      dVar68 = dVar28;
      if (*(int *)(param_5 + 0x60) != 0) {
        dVar68 = (param_3 - dVar30) * dVar29;
      }
      dVar68 = dVar68 + (double)(longlong)iStack_f8 * param_3 + param_4;
      iVar37 = (int)dVar68;
      iVar1 = (int)(dVar68 * dVar29);
      iVar48 = *(int *)(param_5 + 0x50) * iVar37 + *(int *)(param_5 + 100);
      iVar40 = (int)(dVar68 * dVar32 - (double)(longlong)(iVar1 << 8));
      iVar2 = (int)(dVar68 * dVar31 - (double)(longlong)(iVar37 << 8));
      iVar46 = iVar2 * iVar2 >> 8;
      iVar21 = iVar46 * iVar2 >> 8;
      iVar22 = iVar40 * iVar40 >> 8;
      iVar23 = iVar22 * iVar40 >> 8;
      if ((iVar37 < 2) || (*(int *)(param_5 + 0x54) + -4 <= iVar37)) {
        if (iVar37 < *(int *)(param_5 + 0x54)) {
          iVar40 = 0;
          iVar51 = *(int *)(param_5 + 0x58);
          if (iVar37 < *(int *)(param_5 + 0x54) + -1) {
            dVar68 = param_2;
            if (0 < iVar51) {
              do {
                dVar68 = dVar68 + param_1;
                iVar37 = (int)dVar68;
                if ((iVar37 < 0) || (*(int *)(param_5 + 0x50) <= iVar37)) {
                  puVar43[1] = 0x10;
                  if (!bVar27) goto LAB_82cca3dc;
                  puVar35[1] = 0x80;
                  bVar27 = false;
                  puVar65[1] = 0x80;
                  puVar65 = puVar65 + 1;
                  puVar35 = puVar35 + 1;
                }
                else {
                  puVar43[1] = (char)((ulonglong)
                                      ((longlong)(int)(uint)*(byte *)(iVar37 + iVar48) *
                                       (longlong)(0x100 - iVar2) +
                                      (longlong)
                                      (int)(uint)*(byte *)(*(int *)(param_5 + 0x50) + iVar37 +
                                                          iVar48) * (longlong)iVar2) >> 8);
                  if (bVar27) {
                    bVar27 = false;
                    iVar37 = iVar1 * iVar20 + (iVar37 >> 1);
                    puVar35[1] = *(undefined1 *)(iVar37 + iVar18);
                    puVar35 = puVar35 + 1;
                    puVar65[1] = *(undefined1 *)(iVar37 + iVar19);
                    puVar65 = puVar65 + 1;
                  }
                  else {
LAB_82cca3dc:
                    bVar27 = true;
                  }
                }
                puVar43 = puVar43 + 1;
                iVar51 = *(int *)(param_5 + 0x58);
                iVar40 = iVar40 + 1;
                puStack_160 = puVar43;
                puStack_140 = puVar35;
                puStack_13c = puVar65;
              } while (iVar40 < iVar51);
            }
          }
          else {
            dVar68 = param_2;
            if (0 < iVar51) {
              do {
                dVar68 = dVar68 + param_1;
                iVar37 = (int)dVar68;
                if ((iVar37 < 0) || (*(int *)(param_5 + 0x50) <= iVar37)) {
                  puVar43[1] = 0x10;
                  if (!bVar27) goto LAB_82cca48c;
                  puVar35[1] = 0x80;
                  bVar27 = false;
                  puVar65[1] = 0x80;
                  puVar65 = puVar65 + 1;
                  puVar35 = puVar35 + 1;
                }
                else {
                  puVar43[1] = *(undefined1 *)(iVar37 + iVar48);
                  if (bVar27) {
                    bVar27 = false;
                    iVar37 = iVar1 * iVar20 + (iVar37 >> 1);
                    puVar35[1] = *(undefined1 *)(iVar37 + iVar18);
                    puVar35 = puVar35 + 1;
                    puVar65[1] = *(undefined1 *)(iVar37 + iVar19);
                    puVar65 = puVar65 + 1;
                  }
                  else {
LAB_82cca48c:
                    bVar27 = true;
                  }
                }
                puVar43 = puVar43 + 1;
                iVar51 = *(int *)(param_5 + 0x58);
                iVar40 = iVar40 + 1;
                puStack_160 = puVar43;
                puStack_140 = puVar35;
                puStack_13c = puVar65;
              } while (iVar40 < iVar51);
            }
          }
        }
        else {
          iVar51 = *(int *)(param_5 + 0x58);
          iVar37 = 0;
          if (0 < iVar51) {
            do {
              puVar43[1] = 0x10;
              bVar27 = !bVar27;
              puVar43 = puVar43 + 1;
              if (!bVar27) {
                puVar35 = puVar35 + 1;
                *puVar35 = 0x80;
                puVar65 = puVar65 + 1;
                *puVar65 = 0x80;
              }
              iVar51 = *(int *)(param_5 + 0x58);
              iVar37 = iVar37 + 1;
              puStack_160 = puVar43;
              puStack_140 = puVar35;
              puStack_13c = puVar65;
            } while (iVar37 < iVar51);
          }
        }
      }
      else {
        iVar51 = *(int *)(param_5 + 0x58);
        iStack_114 = 0;
        dVar68 = param_2;
        if (0 < iVar51) {
          do {
            dVar68 = dVar68 + param_1;
            iVar37 = (int)dVar68;
            iVar51 = (int)(dVar68 * dVar31 - (double)(longlong)(iVar37 << 8));
            if ((iVar37 < 2) || (*(int *)(param_5 + 0x50) + -4 <= iVar37)) {
              iVar24 = *(int *)(param_5 + 0x50);
              if (iVar37 < iVar24) {
                if (iVar37 < iVar24 + -1) {
                  pbVar45 = (byte *)(iVar24 + iVar37 + iVar48);
                  bVar52 = *(byte *)(iVar37 + iVar48 + 1);
                  bVar3 = *pbVar45;
                  puVar43[1] = (char)(((int)(((((uint)pbVar45[1] - (uint)bVar52) - (uint)bVar3) +
                                             (uint)*(byte *)(iVar37 + iVar48)) * iVar51 * iVar2) >>
                                      8) + ((0x100 - iVar51) - iVar2) *
                                           (uint)*(byte *)(iVar37 + iVar48) + (uint)bVar52 * iVar51
                                      + (uint)bVar3 * iVar2 >> 8);
                }
                else {
                  puVar43[1] = (char)((ulonglong)
                                      ((longlong)(int)(uint)*(byte *)(iVar37 + iVar48) *
                                       (longlong)(0x100 - iVar2) +
                                      (longlong)(int)(uint)*(byte *)(iVar24 + iVar37 + iVar48) *
                                      (longlong)iVar2) >> 8);
                }
                puStack_160 = puVar43 + 1;
                if (bVar26) {
                  bVar26 = false;
                  iVar37 = iVar1 * iVar20 + (iVar37 >> 1);
                  puVar35[1] = *(undefined1 *)(iVar37 + iVar18);
                  puVar35 = puVar35 + 1;
                  puVar65[1] = *(undefined1 *)(iVar37 + iVar19);
                  puVar65 = puVar65 + 1;
                  puStack_140 = puVar35;
                  puStack_13c = puVar65;
                }
                else {
LAB_82cca1b8:
                  bVar26 = true;
                }
              }
              else {
                puVar43[1] = 0x10;
                puStack_160 = puVar43 + 1;
                if (!bVar26) goto LAB_82cca1b8;
                puVar35[1] = 0x80;
                puVar35 = puVar35 + 1;
                puVar65[1] = 0x80;
                puVar65 = puVar65 + 1;
                bVar26 = false;
                puStack_140 = puVar35;
                puStack_13c = puVar65;
              }
            }
            else {
              pbVar45 = (byte *)(iVar37 + iVar48);
              iVar37 = *(int *)(param_5 + 0x50);
              bVar15 = pbVar45[iVar37];
              uVar41 = (ulonglong)bVar15;
              bVar52 = *pbVar45;
              uVar49 = (ulonglong)bVar52;
              bVar3 = pbVar45[-1];
              uVar44 = (ulonglong)bVar3;
              bVar4 = pbVar45[2];
              uVar38 = (ulonglong)bVar4;
              bVar5 = pbVar45[1];
              uVar42 = (ulonglong)bVar5;
              pbVar62 = pbVar45 + -iVar37;
              iVar24 = iVar51 * iVar51 >> 8;
              pbVar59 = pbVar45 + iVar37 * 2;
              bVar6 = pbVar45[iVar37 + 1];
              uVar66 = (ulonglong)bVar6;
              bVar7 = pbVar62[-1];
              uVar39 = (ulonglong)bVar7;
              bVar8 = *pbVar62;
              uVar47 = (ulonglong)bVar8;
              bVar9 = pbVar62[1];
              uVar63 = (ulonglong)bVar9;
              bVar10 = pbVar45[iVar37 + -1];
              uVar64 = (ulonglong)bVar10;
              bVar11 = pbVar59[-1];
              uVar60 = (ulonglong)bVar11;
              uVar55 = (ulonglong)pbVar59[1];
              bVar12 = pbVar59[2];
              bVar13 = *pbVar59;
              uVar36 = (ulonglong)bVar13;
              bVar14 = pbVar62[2];
              uVar61 = (ulonglong)bVar14;
              uVar33 = (ulonglong)pbVar45[iVar37 + 2];
              uVar57 = uVar36 + (uVar44 + uVar47) * -2 + uVar38;
              uVar54 = ((uVar49 * 2 + uVar64 + uVar63) * 2 - uVar55) - uVar33;
              uVar58 = ((uVar41 - uVar66) - uVar38) + uVar44;
              iVar37 = iVar24 * iVar51 >> 8;
              iVar53 = (uint)bVar52 + (uint)bVar52 * 4;
              uVar34 = ((uVar66 - uVar41) - uVar42) + uVar49;
              iStack_128 = (int)(((((((uVar44 - uVar64 & 0x7fffffff) * 2 - uVar38) - uVar39) +
                                    uVar60 + uVar33 & 0x7fffffff) * 2 - (ulonglong)bVar12) + uVar61
                                 & 0x7fffffff) << 1);
              iStack_100 = (int)((((((uVar36 - uVar55) - uVar33) - uVar44) - uVar47) + uVar64 +
                                  uVar38 + uVar63 & 0x7fffffff) << 1);
              iVar37 = (((int)(((int)((uVar57 & 0xffffffff) << 3) - (int)uVar57) +
                               ((int)((((uVar66 + uVar39) * 2 - uVar60) - uVar61 & 0xffffffff) << 1)
                               + (uint)bVar12) * 2 + (int)uVar54 + (int)((uVar54 & 0xffffffff) << 2)
                              + ((uint)bVar15 + (uint)bVar5) * -0xd) >> 1) * iVar24 +
                        ((int)((int)(((((((uVar47 - uVar63 & 0x7fffffff) * 2 - uVar36) - uVar39) +
                                        uVar55 + uVar61 & 0x7fffffff) * 2 - (ulonglong)bVar12) +
                                      uVar60 & 0xffffffff) << 1) +
                               ((int)((uVar58 & 0xffffffff) << 3) - (int)uVar58) +
                               (int)(uVar33 - uVar64) + (int)((uVar33 - uVar64 & 0xffffffff) << 2) +
                              ((uint)bVar5 - (uint)bVar52) * 0xb) >> 1) * iVar37 +
                        ((int)((((((int)(((uVar47 - uVar49) - uVar39 & 0xffffffff) << 1) -
                                  (uint)bVar13) + (uint)bVar11 + (uint)bVar15) * 2 +
                                (int)(uVar66 - uVar42) + (int)((uVar66 - uVar42 & 0xffffffff) << 1))
                               - ((uint)bVar10 + (uint)bVar10 * 4)) +
                              ((uint)bVar3 * 8 - (uint)bVar3)) >> 1) * iVar51 +
                       ((int)((((uint)bVar15 * 2 + (uint)bVar8) * 2 - iVar53) - (uint)bVar13) >> 1)
                       * 0x100) * iVar46 +
                       (((int)(iStack_128 +
                               ((((uint)bVar5 - (uint)bVar13) - (uint)bVar6) + (uint)bVar8) * 7 +
                               ((uint)bVar15 - (uint)bVar52) * 0xb +
                              (int)(uVar55 - uVar63) + (int)((uVar55 - uVar63 & 0xffffffff) << 2))
                        >> 1) * iVar24 +
                        ((((iStack_100 + (int)uVar34 + (int)((uVar34 & 0xffffffff) << 1)) -
                          (uint)bVar11) - (uint)bVar14) + (uint)bVar12 + (uint)bVar7) * iVar37 +
                       ((((((int)((uVar64 - uVar44 & 0xffffffff) << 1) - (uint)bVar11) - (uint)bVar6
                          ) - (uint)bVar15) - (uint)bVar8) + (uint)bVar13 + (uint)bVar5 +
                        (uint)bVar52 + (uint)bVar7) * iVar51) * iVar21 +
                       (((int)((((int)(((((uVar44 - uVar49) - uVar39 & 0x7fffffff) * 2 - uVar38) +
                                        uVar42 + uVar61 & 0xffffffff) << 1) +
                                (int)(uVar66 - uVar41) + (int)((uVar66 - uVar41 & 0xffffffff) << 1))
                               - ((uint)bVar9 + (uint)bVar9 * 4)) + ((uint)bVar8 * 8 - (uint)bVar8))
                        >> 1) * iVar24 +
                        ((((((int)((uVar63 - uVar47 & 0xffffffff) << 1) - (uint)bVar6) - (uint)bVar5
                           ) - (uint)bVar3) - (uint)bVar14) + (uint)bVar15 + (uint)bVar4 +
                         (uint)bVar52 + (uint)bVar7) * iVar37 +
                       ((((uint)bVar52 - (uint)bVar3) - (uint)bVar8) + (uint)bVar7) * iVar51) *
                       iVar2 + (int)(((longlong)
                                      ((int)((((uint)bVar5 * 2 + (uint)bVar3) * 2 - iVar53) -
                                            (uint)bVar4) >> 1) * (longlong)iVar24 +
                                      (longlong)
                                      ((int)((((int)(uVar49 - uVar42) +
                                              (int)((uVar49 - uVar42 & 0xffffffff) << 1)) -
                                             (uint)bVar3) + (uint)bVar4) >> 1) * (longlong)iVar37 +
                                      (longlong)
                                      ((int)((((int)(uVar49 - uVar41) +
                                              (int)((uVar49 - uVar41 & 0xffffffff) << 1)) -
                                             (uint)bVar8) + (uint)bVar13) >> 1) * (longlong)iVar21 +
                                      (longlong)((int)((uint)bVar5 - (uint)bVar3) >> 1) *
                                      (longlong)iVar51 +
                                      (longlong)((int)((uint)bVar15 - (uint)bVar8) >> 1) *
                                      (longlong)iVar2 + uVar49 * 0x100 & 0xffffffff) << 8);
              if (iVar37 >> 0x10 < 0x100) {
                bVar52 = -(char)(iVar37 >> 0x1f) - 1U & (byte)((uint)iVar37 >> 0x10);
              }
              else {
                bVar52 = 0xff;
              }
              puVar43 = puStack_160 + 1;
              puStack_160[1] = bVar52;
              puVar35 = puStack_140;
              puVar65 = puStack_13c;
              puStack_160 = puVar43;
              if (!bVar26) goto LAB_82cca1b8;
              iVar50 = iVar1 * iVar20 + (int)(dVar68 * dVar29);
              iVar56 = iVar20 * 2;
              pbVar45 = (byte *)(iVar50 + iVar18);
              pbVar59 = pbVar45 + -iVar20;
              bVar52 = *pbVar45;
              uVar49 = (ulonglong)bVar52;
              bVar10 = pbVar45[iVar20 + 1];
              uVar60 = (ulonglong)bVar10;
              bVar3 = pbVar59[-1];
              uVar39 = (ulonglong)bVar3;
              bVar4 = *pbVar59;
              uVar42 = (ulonglong)bVar4;
              bVar5 = pbVar45[-1];
              uVar44 = (ulonglong)bVar5;
              bVar11 = pbVar45[iVar20 + -1];
              uVar61 = (ulonglong)bVar11;
              iVar53 = (uint)bVar52 + (uint)bVar52 * 4;
              bVar12 = pbVar45[iVar56 + -1];
              uVar58 = (ulonglong)bVar12;
              bVar6 = pbVar59[1];
              uVar64 = (ulonglong)bVar6;
              bVar13 = pbVar45[iVar56];
              uVar67 = (ulonglong)bVar13;
              uVar54 = (ulonglong)pbVar45[iVar56 + 1];
              bVar7 = pbVar59[2];
              uVar57 = (ulonglong)bVar7;
              bVar8 = pbVar45[2];
              uVar66 = (ulonglong)bVar8;
              uVar55 = (ulonglong)pbVar45[iVar20 + 2];
              uVar38 = uVar67 + (uVar44 + uVar42) * -2 + uVar66;
              bVar14 = pbVar45[iVar56 + 2];
              bVar15 = pbVar45[iVar20];
              uVar41 = (ulonglong)bVar15;
              bVar9 = pbVar45[1];
              uVar47 = (ulonglong)bVar9;
              uVar33 = ((uVar49 * 2 + uVar61 + uVar64) * 2 - uVar54) - uVar55;
              iVar37 = (int)(dVar68 * dVar32 - (double)(longlong)((int)(dVar68 * dVar29) << 8));
              iVar51 = iVar37 * iVar37 >> 8;
              iVar24 = iVar51 * iVar37 >> 8;
              iStack_158 = (int)(((((uVar42 - uVar64 & 0x7fffffff) * 2 - uVar67) - uVar39) + uVar54
                                  + uVar57 & 0x7fffffff) << 1);
              uVar34 = ((uVar41 - uVar60) - uVar66) + uVar44;
              uVar36 = uVar60 - uVar41;
              uVar63 = (uVar36 - uVar47) + uVar49;
              iVar53 = (((int)(((int)((uVar38 & 0xffffffff) << 3) - (int)uVar38) +
                               (int)(((((uVar60 + uVar39) * 2 - uVar58) - uVar57 & 0x7fffffff) * 2 +
                                      (ulonglong)bVar14 & 0xffffffff) << 1) +
                               (int)uVar33 + (int)((uVar33 & 0xffffffff) << 2) +
                              ((uint)bVar15 + (uint)bVar9) * -0xd) >> 1) * iVar51 +
                        ((int)(((iStack_158 - (uint)bVar14) + (uint)bVar12) * 2 +
                               ((int)((uVar34 & 0xffffffff) << 3) - (int)uVar34) +
                               ((uint)pbVar45[iVar20 + 2] - (uint)bVar11) * 5 +
                              ((uint)bVar9 - (uint)bVar52) * 0xb) >> 1) * iVar24 +
                        ((int)((((int)(((((uVar42 - uVar49) - uVar39 & 0x7fffffff) * 2 - uVar67) +
                                        uVar58 + uVar41 & 0xffffffff) << 1) +
                                (int)(uVar60 - uVar47) + (int)((uVar60 - uVar47 & 0xffffffff) << 1))
                               - ((uint)bVar11 + (uint)bVar11 * 4)) +
                              ((uint)bVar5 * 8 - (uint)bVar5)) >> 1) * iVar37 +
                       ((int)((((uint)bVar15 * 2 + (uint)bVar4) * 2 - iVar53) - (uint)bVar13) >> 1)
                       * 0x100) * iVar22 +
                       (((int)((int)((((int)(((((uVar44 - uVar61 & 0x7fffffff) * 2 - uVar66) -
                                              uVar39) + uVar58 + uVar55 & 0xffffffff) << 1) -
                                      (uint)bVar14) + uVar57 & 0xffffffff) << 1) +
                               ((((uint)bVar9 - (uint)bVar13) - (uint)bVar10) + (uint)bVar4) * 7 +
                               ((uint)bVar15 - (uint)bVar52) * 0xb +
                              (int)(uVar54 - uVar64) + (int)((uVar54 - uVar64 & 0xffffffff) << 2))
                        >> 1) * iVar51 +
                        (((((int)((((((uVar67 - uVar54) - uVar55) - uVar44) - uVar42) + uVar61 +
                                   uVar66 + uVar64 & 0xffffffff) << 1) +
                           (int)uVar63 + (int)((uVar63 & 0xffffffff) << 1)) - (uint)bVar12) -
                         (uint)bVar7) + (uint)bVar14 + (uint)bVar3) * iVar24 +
                       ((((((int)((uVar61 - uVar44 & 0xffffffff) << 1) - (uint)bVar12) -
                          (uint)bVar10) - (uint)bVar15) - (uint)bVar4) + (uint)bVar13 + (uint)bVar9
                        + (uint)bVar52 + (uint)bVar3) * iVar37) * iVar23 +
                       (((int)((((int)(((((uVar44 - uVar49) - uVar39 & 0x7fffffff) * 2 - uVar66) +
                                        uVar47 + uVar57 & 0xffffffff) << 1) +
                                (int)uVar36 + (int)((uVar36 & 0xffffffff) << 1)) -
                               ((uint)bVar6 + (uint)bVar6 * 4)) + ((uint)bVar4 * 8 - (uint)bVar4))
                        >> 1) * iVar51 +
                        ((((((int)((uVar64 - uVar42 & 0xffffffff) << 1) - (uint)bVar10) -
                           (uint)bVar9) - (uint)bVar5) - (uint)bVar7) + (uint)bVar15 + (uint)bVar8 +
                         (uint)bVar52 + (uint)bVar3) * iVar24 +
                       ((((uint)bVar52 - (uint)bVar5) - (uint)bVar4) + (uint)bVar3) * iVar37) *
                       iVar40 + (int)(((longlong)
                                       ((int)((((uint)bVar9 * 2 + (uint)bVar5) * 2 - iVar53) -
                                             (uint)bVar8) >> 1) * (longlong)iVar51 +
                                       (longlong)
                                       ((int)((((int)(uVar49 - uVar41) +
                                               (int)((uVar49 - uVar41 & 0xffffffff) << 1)) -
                                              (uint)bVar4) + (uint)bVar13) >> 1) * (longlong)iVar23
                                       + (longlong)
                                         ((int)((((int)(uVar49 - uVar47) +
                                                 (int)((uVar49 - uVar47 & 0xffffffff) << 1)) -
                                                (uint)bVar5) + (uint)bVar8) >> 1) * (longlong)iVar24
                                       + (longlong)((int)((uint)bVar9 - (uint)bVar5) >> 1) *
                                         (longlong)iVar37 +
                                       (longlong)((int)((uint)bVar15 - (uint)bVar4) >> 1) *
                                       (longlong)iVar40 + uVar49 * 0x100 & 0xffffffff) << 8);
              if (iVar53 >> 0x10 < 0x100) {
                bVar52 = -(char)(iVar53 >> 0x1f) - 1U & (byte)((uint)iVar53 >> 0x10);
              }
              else {
                bVar52 = 0xff;
              }
              puVar35 = puStack_140 + 1;
              pbVar45 = (byte *)(iVar50 + iVar19);
              puStack_140[1] = bVar52;
              pbVar59 = pbVar45 + -iVar20;
              bVar10 = pbVar45[iVar20 + 1];
              uVar57 = (ulonglong)bVar10;
              bVar11 = pbVar45[iVar20];
              uVar34 = (ulonglong)bVar11;
              bVar52 = pbVar45[2];
              uVar61 = (ulonglong)bVar52;
              bVar3 = pbVar45[-1];
              uVar39 = (ulonglong)bVar3;
              bVar4 = *pbVar59;
              uVar38 = (ulonglong)bVar4;
              bVar5 = *pbVar45;
              uVar42 = (ulonglong)bVar5;
              bVar12 = pbVar45[iVar20 + -1];
              uVar58 = (ulonglong)bVar12;
              bVar6 = pbVar59[1];
              uVar60 = (ulonglong)bVar6;
              bVar7 = pbVar59[-1];
              uVar63 = (ulonglong)bVar7;
              bVar8 = pbVar59[2];
              uVar55 = (ulonglong)bVar8;
              uVar47 = (ulonglong)pbVar45[iVar56 + 1];
              uVar44 = ((uVar34 - uVar57) - uVar61) + uVar39;
              bVar13 = pbVar45[iVar56 + -1];
              bVar14 = pbVar45[iVar56 + 2];
              bVar15 = pbVar45[iVar20 + 2];
              bVar9 = pbVar45[1];
              uVar36 = (ulonglong)bVar9;
              bVar16 = pbVar45[iVar56];
              uVar41 = (ulonglong)bVar16;
              uVar49 = uVar41 + (uVar39 + uVar38) * -2 + uVar61;
              uVar54 = bVar15 - uVar58;
              iStack_168 = (int)((uVar54 & 0x3fffffff) << 2);
              iVar53 = (uint)bVar5 + (uint)bVar5 * 4;
              uVar33 = ((uVar57 - uVar34) - uVar36) + uVar42;
              uVar25 = (uint)bVar9;
              iVar37 = (((int)(((int)((uVar49 & 0xffffffff) << 3) - (int)uVar49) +
                               (int)(((((uVar57 + uVar63) * 2 - (ulonglong)bVar13) - uVar55 &
                                      0x7fffffff) * 2 + (ulonglong)bVar14 & 0xffffffff) << 1) +
                               ((((uint)bVar5 * 2 + (uint)bVar12 + (uint)bVar6) * 2 -
                                (uint)pbVar45[iVar56 + 1]) - (uint)bVar15) * 5 +
                              ((uint)bVar11 + (uint)bVar9) * -0xd) >> 1) * iVar51 +
                        ((int)((((int)(((((uVar38 - uVar60 & 0x7fffffff) * 2 - uVar41) - uVar63) +
                                        uVar47 + uVar55 & 0xffffffff) << 1) - (uint)bVar14) +
                               (uint)bVar13) * 2 + ((int)((uVar44 & 0xffffffff) << 3) - (int)uVar44)
                               + (int)uVar54 + iStack_168 + ((uint)bVar9 - (uint)bVar5) * 0xb) >> 1)
                        * iVar24 +
                        ((int)((((int)(((((uVar38 - uVar42) - uVar63 & 0x7fffffff) * 2 - uVar41) +
                                        (ulonglong)bVar13 + uVar34 & 0xffffffff) << 1) +
                                (int)(uVar57 - uVar36) + (int)((uVar57 - uVar36 & 0xffffffff) << 1))
                               - ((uint)bVar12 + (uint)bVar12 * 4)) +
                              ((uint)bVar3 * 8 - (uint)bVar3)) >> 1) * iVar37 +
                       ((int)((((uint)bVar11 * 2 + (uint)bVar4) * 2 - iVar53) - (uint)bVar16) >> 1)
                       * 0x100) * iVar22 +
                       (((int)((int)(((((ulonglong)
                                        ((((int)((uVar39 - uVar58 & 0xffffffff) << 1) - (uint)bVar52
                                          ) - (uint)bVar7) + (uint)bVar13 + (uint)bVar15) &
                                       0x7fffffff) * 2 - (ulonglong)bVar14) + uVar55 & 0xffffffff)
                                    << 1) +
                               ((((uint)bVar9 - (uint)bVar16) - (uint)bVar10) + (uint)bVar4) * 7 +
                               ((uint)bVar11 - (uint)bVar5) * 0xb +
                              (int)(uVar47 - uVar60) + (int)((uVar47 - uVar60 & 0xffffffff) << 2))
                        >> 1) * iVar51 +
                        (((((int)((((((uVar41 - uVar47) - (ulonglong)bVar15) - uVar39) - uVar38) +
                                   uVar58 + uVar61 + uVar60 & 0xffffffff) << 1) +
                           (int)uVar33 + (int)((uVar33 & 0xffffffff) << 1)) - (uint)bVar13) -
                         (uint)bVar8) + (uint)bVar14 + (uint)bVar7) * iVar24 +
                       (((((((uint)bVar12 - (uint)bVar3) * 2 - (uint)bVar13) - (uint)bVar10) -
                         (uint)bVar11) - (uint)bVar4) + (uint)bVar16 + uVar25 + (uint)bVar5 +
                       (uint)bVar7) * iVar37) * iVar23 +
                       (((int)((((int)(((((uVar39 - uVar42) - uVar63 & 0x7fffffff) * 2 - uVar61) +
                                        uVar36 + uVar55 & 0xffffffff) << 1) +
                                (int)(uVar57 - uVar34) + (int)((uVar57 - uVar34 & 0xffffffff) << 1))
                               - ((uint)bVar6 + (uint)bVar6 * 4)) + ((uint)bVar4 * 8 - (uint)bVar4))
                        >> 1) * iVar51 +
                        ((((((int)((uVar60 - uVar38 & 0xffffffff) << 1) - (uint)bVar10) - uVar25) -
                          (uint)bVar3) - (uint)bVar8) + (uint)bVar11 + (uint)bVar52 + (uint)bVar5 +
                        (uint)bVar7) * iVar24 +
                       ((((uint)bVar5 - (uint)bVar3) - (uint)bVar4) + (uint)bVar7) * iVar37) *
                       iVar40 + (int)(((longlong)
                                       ((int)((((uint)bVar9 * 2 + (uint)bVar3) * 2 - iVar53) -
                                             (uint)bVar52) >> 1) * (longlong)iVar51 +
                                       (longlong)
                                       ((int)((((int)(uVar42 - uVar34) +
                                               (int)((uVar42 - uVar34 & 0xffffffff) << 1)) -
                                              (uint)bVar4) + (uint)bVar16) >> 1) * (longlong)iVar23
                                       + (longlong)
                                         ((int)((((int)(uVar42 - uVar36) +
                                                 (int)((uVar42 - uVar36 & 0xffffffff) << 1)) -
                                                (uint)bVar3) + (uint)bVar52) >> 1) *
                                         (longlong)iVar24 +
                                       (longlong)((int)(uVar25 - bVar3) >> 1) * (longlong)iVar37 +
                                       (longlong)((int)((uint)bVar11 - (uint)bVar4) >> 1) *
                                       (longlong)iVar40 + uVar42 * 0x100 & 0xffffffff) << 8);
              if (iVar37 >> 0x10 < 0x100) {
                bVar52 = -(char)(iVar37 >> 0x1f) - 1U & (byte)((uint)iVar37 >> 0x10);
              }
              else {
                bVar52 = 0xff;
              }
              bVar26 = false;
              puVar65 = puStack_13c + 1;
              puStack_13c[1] = bVar52;
              puStack_140 = puVar35;
              puStack_13c = puVar65;
            }
            iVar51 = *(int *)(param_5 + 0x58);
            iStack_114 = iStack_114 + 1;
            puVar43 = puStack_160;
          } while (iStack_114 < iVar51);
        }
      }
      dVar68 = (double)(longlong)(iStack_f8 + 1) * param_3 + param_4;
      iVar37 = (int)dVar68;
      iRam83236bf4 = iVar37 << 8;
      iVar46 = *(int *)(param_5 + 0x50) * iVar37 + *(int *)(param_5 + 100);
      iVar1 = (int)(dVar68 * dVar31 - (double)(longlong)iRam83236bf4);
      iVar40 = iVar1 * iVar1 >> 8;
      iVar2 = iVar40 * iVar1 >> 8;
      if ((iVar37 < 2) || (*(int *)(param_5 + 0x54) + -4 <= iVar37)) {
        if (iVar37 < *(int *)(param_5 + 0x54)) {
          if (iVar37 < *(int *)(param_5 + 0x54) + -1) {
            iVar37 = 0;
            dVar68 = param_2;
            if (0 < iVar51) {
              do {
                dVar68 = dVar68 + param_1;
                iVar40 = (int)dVar68;
                if ((iVar40 < 0) || (*(int *)(param_5 + 0x50) <= iVar40)) {
                  puVar43[1] = 0x10;
                }
                else {
                  puVar43[1] = (char)((ulonglong)
                                      ((longlong)(int)(uint)*(byte *)(iVar40 + iVar46) *
                                       (longlong)(0x100 - iVar1) +
                                      (longlong)
                                      (int)(uint)*(byte *)(iVar40 + *(int *)(param_5 + 0x50) +
                                                          iVar46) * (longlong)iVar1) >> 8);
                }
                iVar37 = iVar37 + 1;
                puVar43 = puVar43 + 1;
                puStack_160 = puVar43;
              } while (iVar37 < *(int *)(param_5 + 0x58));
            }
          }
          else {
            iVar37 = 0;
            dVar68 = param_2;
            if (0 < iVar51) {
              do {
                dVar68 = dVar68 + param_1;
                iVar1 = (int)dVar68;
                if ((iVar1 < 0) || (*(int *)(param_5 + 0x50) <= iVar1)) {
                  puVar43[1] = 0x10;
                }
                else {
                  puVar43[1] = *(undefined1 *)(iVar1 + iVar46);
                }
                iVar37 = iVar37 + 1;
                puVar43 = puVar43 + 1;
                puStack_160 = puVar43;
              } while (iVar37 < *(int *)(param_5 + 0x58));
            }
          }
        }
        else {
          iVar37 = 0;
          if (0 < iVar51) {
            do {
              iVar37 = iVar37 + 1;
              puVar43 = puVar43 + 1;
              *puVar43 = 0x10;
              puStack_160 = puVar43;
            } while (iVar37 < *(int *)(param_5 + 0x58));
          }
        }
      }
      else {
        iStack_114 = 0;
        dVar68 = param_2;
        if (0 < iVar51) {
          do {
            dVar68 = dVar68 + param_1;
            iVar37 = (int)dVar68;
            if ((iVar37 < 2) || (*(int *)(param_5 + 0x50) + -4 <= iVar37)) {
              if (iVar37 < *(int *)(param_5 + 0x50)) {
                puVar43[1] = *(undefined1 *)(iVar37 + iVar46);
              }
              else {
                puVar43[1] = 0x10;
              }
            }
            else {
              pbVar45 = (byte *)(iVar37 + iVar46);
              iVar21 = *(int *)(param_5 + 0x50);
              iRam83236bf4 = iVar37 << 8;
              pbVar62 = pbVar45 + -iVar21;
              bVar52 = pbVar45[2];
              uVar36 = (ulonglong)bVar52;
              bVar3 = pbVar62[-1];
              uVar39 = (ulonglong)bVar3;
              bVar4 = pbVar45[iVar21 + 1];
              uVar60 = (ulonglong)bVar4;
              pbVar59 = pbVar45 + iVar21 * 2;
              bVar5 = *pbVar45;
              uVar49 = (ulonglong)bVar5;
              bVar6 = pbVar45[iVar21 + -1];
              uVar61 = (ulonglong)bVar6;
              bVar7 = pbVar45[-1];
              uVar47 = (ulonglong)bVar7;
              bVar8 = *pbVar62;
              uVar44 = (ulonglong)bVar8;
              bVar9 = pbVar59[-1];
              uVar57 = (ulonglong)bVar9;
              bVar10 = pbVar62[1];
              uVar63 = (ulonglong)bVar10;
              bVar11 = pbVar62[2];
              uVar58 = (ulonglong)bVar11;
              bVar12 = *pbVar59;
              uVar38 = (ulonglong)bVar12;
              bVar13 = pbVar59[2];
              bVar14 = pbVar59[1];
              bVar15 = pbVar45[1];
              uVar42 = (ulonglong)bVar15;
              bVar17 = pbVar45[iVar21];
              uVar41 = (ulonglong)bVar17;
              bVar16 = pbVar45[iVar21 + 2];
              uVar33 = uVar38 + (uVar47 + uVar44) * -2 + uVar36;
              uVar55 = ((uVar49 * 2 + uVar61 + uVar63) * 2 - (ulonglong)bVar14) - (ulonglong)bVar16;
              iVar37 = (int)(dVar68 * dVar31 - (double)(longlong)iRam83236bf4);
              uVar34 = ((uVar42 - uVar38) - uVar60) + uVar44;
              iVar21 = iVar37 * iVar37 >> 8;
              iVar22 = (int)(uVar60 - uVar41);
              uVar54 = (iVar22 - (uint)bVar15) + uVar49;
              iStack_128 = (int)(((((((((uint)bVar12 - (uint)bVar14) - (uint)bVar16) - (uint)bVar7)
                                    - (uint)bVar8) + (uint)bVar6) + uVar36 & 0xffffffff) + uVar63 &
                                 0x7fffffff) << 1);
              iStack_168 = (int)((uVar63 - uVar44 & 0x7fffffff) << 1);
              iVar37 = (((int)(((int)((uVar33 & 0xffffffff) << 3) - (int)uVar33) +
                               (int)(((((uVar60 + uVar39) * 2 - uVar57) - uVar58 & 0x7fffffff) * 2 +
                                      (ulonglong)bVar13 & 0xffffffff) << 1) +
                               (int)uVar55 + (int)((uVar55 & 0xffffffff) << 2) +
                              ((uint)bVar17 + (uint)bVar15) * -0xd) >> 1) * iVar40 +
                        ((int)((((int)(((((uVar47 - uVar61 & 0x7fffffff) * 2 - uVar36) - uVar39) +
                                        uVar57 + (ulonglong)bVar16 & 0xffffffff) << 1) -
                                (uint)bVar13) + (uint)bVar11) * 2 +
                               ((int)((uVar34 & 0xffffffff) << 3) - (int)uVar34) +
                               ((uint)bVar17 - (uint)bVar5) * 0xb +
                              ((uint)bVar14 - (uint)bVar10) * 5) >> 1) * iVar2 +
                       ((int)((((int)(((((int)(((uVar47 - uVar49) - uVar39 & 0xffffffff) << 1) -
                                        (uint)bVar52) + (uint)bVar15) + uVar58 & 0xffffffff) << 1) +
                               iVar22 + (int)((uVar60 - uVar41 & 0xffffffff) << 1)) -
                              ((uint)bVar10 + (uint)bVar10 * 4)) + ((uint)bVar8 * 8 - (uint)bVar8))
                       >> 1) * iVar1) * iVar21 +
                       (((int)((int)((((int)(((((uVar44 - uVar63 & 0x7fffffff) * 2 - uVar38) -
                                              uVar39) + (ulonglong)bVar14 + uVar58 & 0xffffffff) <<
                                            1) - (uint)bVar13) + uVar57 & 0xffffffff) << 1) +
                               ((((uint)bVar17 - (uint)bVar4) - (uint)bVar52) + (uint)bVar7) * 7 +
                               ((uint)bVar16 - (uint)bVar6) * 5 + ((uint)bVar15 - (uint)bVar5) * 0xb
                              ) >> 1) * iVar40 +
                        ((((iStack_128 + (int)uVar54 + (int)((uVar54 & 0xffffffff) << 1)) -
                          (uint)bVar9) - (uint)bVar11) + (uint)bVar13 + (uint)bVar3) * iVar2 +
                        (((((iStack_168 - (uint)bVar4) - (uint)bVar15) - (uint)bVar7) - (uint)bVar11
                         ) + (uint)bVar17 + (uint)bVar52 + (uint)bVar5 + (uint)bVar3) * iVar1 +
                       ((int)((((int)(uVar49 - uVar42) + (int)((uVar49 - uVar42 & 0xffffffff) << 1))
                              - (uint)bVar7) + (uint)bVar52) >> 1) * 0x100) * (iVar21 * iVar37 >> 8)
                       + (((int)((((int)(((((uVar44 - uVar49) - uVar39 & 0x7fffffff) * 2 - uVar38) +
                                          uVar57 + uVar41 & 0xffffffff) << 1) +
                                  (int)(uVar60 - uVar42) +
                                  (int)((uVar60 - uVar42 & 0xffffffff) << 1)) -
                                 ((uint)bVar6 + (uint)bVar6 * 4)) + ((uint)bVar7 * 8 - (uint)bVar7))
                          >> 1) * iVar40 +
                          ((((((int)((uVar61 - uVar47 & 0xffffffff) << 1) - (uint)bVar9) -
                             (uint)bVar4) - (uint)bVar17) - (uint)bVar8) + (uint)bVar12 +
                           (uint)bVar15 + (uint)bVar5 + (uint)bVar3) * iVar2 +
                          ((((uint)bVar5 - (uint)bVar7) - (uint)bVar8) + (uint)bVar3) * iVar1 +
                         ((int)((uint)bVar15 - (uint)bVar7) >> 1) * 0x100) * iVar37 +
                       (int)(((longlong)
                              ((int)((((uint)bVar17 * 2 + (uint)bVar8) * 2 - (uint)bVar12) +
                                    (uint)bVar5 * -5) >> 1) * (longlong)iVar40 +
                              (longlong)
                              ((int)((((uint)bVar15 * 2 + (uint)bVar7) * 2 - (uint)bVar52) +
                                    (uint)bVar5 * -5) >> 1) * (longlong)iVar21 +
                              (longlong)
                              ((int)((((int)(uVar49 - uVar41) +
                                      (int)((uVar49 - uVar41 & 0xffffffff) << 1)) - (uint)bVar8) +
                                    (uint)bVar12) >> 1) * (longlong)iVar2 +
                              (longlong)((int)((uint)bVar17 - (uint)bVar8) >> 1) * (longlong)iVar1 +
                              uVar49 * 0x100 & 0xffffffff) << 8);
              if (iVar37 >> 0x10 < 0x100) {
                bVar52 = -(char)(iVar37 >> 0x1f) - 1U & (byte)((uint)iVar37 >> 0x10);
              }
              else {
                bVar52 = 0xff;
              }
              puStack_160[1] = bVar52;
              puVar35 = puStack_140;
              puVar65 = puStack_13c;
              puVar43 = puStack_160;
            }
            puVar43 = puVar43 + 1;
            iStack_114 = iStack_114 + 1;
            puStack_160 = puVar43;
          } while (iStack_114 < *(int *)(param_5 + 0x58));
        }
      }
      iStack_f8 = iStack_f8 + 2;
    } while (iStack_f8 < *(int *)(param_5 + 0x5c));
  }
  return;
}

