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
extern int iRam832617f4;
extern unsigned int iStack_10c;
extern unsigned int iStack_110;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82052318;


void fn_82F30F38(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  int iVar1;
  byte bVar2;
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
  int iVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  byte *pbVar23;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  int iVar28;
  ulonglong uVar27;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  ulonglong uVar33;
  undefined1 *puVar34;
  ulonglong uVar35;
  byte bVar37;
  undefined1 *puVar36;
  ulonglong uVar38;
  int iVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  byte *pbVar43;
  byte *pbVar45;
  ulonglong uVar44;
  ulonglong uVar46;
  int iVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  byte *pbVar51;
  int iVar52;
  longlong lVar53;
  double dVar54;
  undefined1 *puStack_140;
  int iStack_110;
  int iStack_10c;
  
  dVar20 = lbl_82052318;
  dVar19 = lbl_82005758;
  dVar18 = lbl_82005730;
  dVar17 = lbl_82005710;
  iStack_10c = 0;
  if (0 < *(int *)(param_5 + 0x5c)) {
    param_2 = param_2 - param_1;
    puVar36 = (undefined1 *)(*(int *)(param_5 + 0x70) + -4);
    puStack_140 = puVar36;
    do {
      dVar54 = dVar17;
      if (*(int *)(param_5 + 0x60) != 0) {
        dVar54 = (param_3 - dVar19) * dVar18;
      }
      dVar54 = dVar54 + (double)(longlong)iStack_10c * param_3 + param_4;
      iVar52 = (int)dVar54;
      iRam832617f4 = iVar52 << 8;
      iVar28 = *(int *)(param_5 + 0x50) * iVar52 * 4 + *(int *)(param_5 + 100);
      iVar1 = (int)(dVar54 * dVar20 - (double)(longlong)iRam832617f4);
      iVar15 = iVar1 * iVar1 >> 8;
      iVar32 = iVar15 * iVar1 >> 8;
      if ((iVar52 < 1) || (*(int *)(param_5 + 0x54) + -2 <= iVar52)) {
        if ((iVar52 < 0) || (*(int *)(param_5 + 0x54) + -1 <= iVar52)) {
          if ((iVar52 < 1) || (*(int *)(param_5 + 0x54) <= iVar52)) {
            iVar52 = 0;
            if (0 < *(int *)(param_5 + 0x58)) {
              do {
                puVar36 = puVar36 + 4;
                *puVar36 = 0;
                iVar52 = iVar52 + 1;
                puStack_140 = puVar36;
              } while (iVar52 < *(int *)(param_5 + 0x58));
            }
          }
          else {
            iVar52 = 0;
            dVar54 = param_2;
            if (0 < *(int *)(param_5 + 0x58)) {
              do {
                dVar54 = dVar54 + param_1;
                iVar15 = (int)dVar54;
                if (iVar15 < 0) {
LAB_82f31c9c:
                  puVar36[4] = 0;
                }
                else if (iVar15 < *(int *)(param_5 + 0x50) + -1) {
                  iRam832617f4 = iVar15 << 8;
                  iVar47 = iVar15 * 4 + iVar28;
                  iVar32 = (int)(dVar54 * dVar20 - (double)(longlong)iRam832617f4);
                  iVar31 = (0x100 - iVar32) - iVar1;
                  puVar36[4] = (char)((iVar31 + iVar1) * (uint)*(byte *)(iVar15 * 4 + iVar28) +
                                      (uint)*(byte *)(iVar47 + 4) * iVar32 >> 8);
                  puVar36[5] = (char)((iVar31 + iVar1) * (uint)*(byte *)(iVar47 + 1) +
                                      (uint)*(byte *)(iVar47 + 5) * iVar32 >> 8);
                  puVar36[6] = (char)((iVar31 + iVar1) * (uint)*(byte *)(iVar47 + 2) +
                                      (uint)*(byte *)(iVar47 + 6) * iVar32 >> 8);
                  puVar36[7] = (char)((iVar31 + iVar1) * (uint)*(byte *)(iVar47 + 3) +
                                      (uint)*(byte *)(iVar47 + 7) * iVar32 >> 8);
                }
                else {
                  if ((iVar15 < 1) || (*(int *)(param_5 + 0x50) <= iVar15)) goto LAB_82f31c9c;
                  iRam832617f4 = iVar15 << 8;
                  puVar34 = (undefined1 *)(iVar15 * 4 + iVar28);
                  puVar36[4] = *puVar34;
                  puVar36[5] = puVar34[1];
                  puVar36[6] = puVar34[2];
                  puVar36[7] = puVar34[3];
                }
                iVar52 = iVar52 + 1;
                puVar36 = puVar36 + 4;
                puStack_140 = puVar36;
              } while (iVar52 < *(int *)(param_5 + 0x58));
            }
          }
        }
        else {
          iVar52 = 0;
          dVar54 = param_2;
          if (0 < *(int *)(param_5 + 0x58)) {
            do {
              dVar54 = dVar54 + param_1;
              iVar15 = (int)dVar54;
              if (iVar15 < 0) {
LAB_82f31b28:
                puVar36[4] = 0;
              }
              else if (iVar15 < *(int *)(param_5 + 0x50) + -1) {
                iRam832617f4 = iVar15 << 8;
                iVar31 = iVar15 * 4 + iVar28;
                bVar2 = *(byte *)(iVar15 * 4 + iVar28);
                pbVar51 = (byte *)(*(int *)(param_5 + 0x50) * 4 + iVar31);
                bVar37 = *pbVar51;
                iVar15 = (int)(dVar54 * dVar20 - (double)(longlong)iRam832617f4);
                iVar47 = (0x100 - iVar15) - iVar1;
                puVar36[4] = (char)(((int)(((((uint)pbVar51[4] - (uint)bVar37) -
                                            (uint)*(byte *)(iVar31 + 4)) + (uint)bVar2) * iVar15 *
                                          iVar1) >> 8) + (uint)*(byte *)(iVar31 + 4) * iVar15 +
                                    iVar47 * (uint)bVar2 + (uint)bVar37 * iVar1 >> 8);
                iVar32 = *(int *)(param_5 + 0x50) * 4 + iVar31;
                bVar37 = *(byte *)(iVar32 + 1);
                puVar36[5] = (char)(((int)(((((uint)*(byte *)(iVar32 + 5) - (uint)bVar37) -
                                            (uint)*(byte *)(iVar31 + 5)) +
                                           (uint)*(byte *)(iVar31 + 1)) * iVar15 * iVar1) >> 8) +
                                    (uint)*(byte *)(iVar31 + 5) * iVar15 +
                                    iVar47 * (uint)*(byte *)(iVar31 + 1) + (uint)bVar37 * iVar1 >> 8
                                   );
                iVar32 = *(int *)(param_5 + 0x50) * 4 + iVar31;
                bVar37 = *(byte *)(iVar32 + 2);
                puVar36[6] = (char)(((int)(((((uint)*(byte *)(iVar32 + 6) - (uint)bVar37) -
                                            (uint)*(byte *)(iVar31 + 6)) +
                                           (uint)*(byte *)(iVar31 + 2)) * iVar15 * iVar1) >> 8) +
                                    (uint)*(byte *)(iVar31 + 6) * iVar15 +
                                    iVar47 * (uint)*(byte *)(iVar31 + 2) + (uint)bVar37 * iVar1 >> 8
                                   );
                iVar32 = *(int *)(param_5 + 0x50) * 4 + iVar31;
                bVar37 = *(byte *)(iVar32 + 3);
                puVar36[7] = (char)(((int)(((((uint)*(byte *)(iVar32 + 7) - (uint)bVar37) -
                                            (uint)*(byte *)(iVar31 + 7)) +
                                           (uint)*(byte *)(iVar31 + 3)) * iVar15 * iVar1) >> 8) +
                                    (uint)*(byte *)(iVar31 + 7) * iVar15 +
                                    iVar47 * (uint)*(byte *)(iVar31 + 3) + (uint)bVar37 * iVar1 >> 8
                                   );
              }
              else {
                if ((iVar15 < 1) || (*(int *)(param_5 + 0x50) <= iVar15)) goto LAB_82f31b28;
                iRam832617f4 = iVar15 << 8;
                iVar47 = iVar15 * 4 + iVar28;
                iVar32 = (int)(dVar54 * dVar20 - (double)(longlong)iRam832617f4);
                iVar31 = (0x100 - iVar32) - iVar1;
                puVar36[4] = (char)((uint)*(byte *)(*(int *)(param_5 + 0x50) * 4 + iVar47) * iVar1 +
                                    (iVar31 + iVar32) * (uint)*(byte *)(iVar15 * 4 + iVar28) >> 8);
                puVar36[5] = (char)((uint)*(byte *)(*(int *)(param_5 + 0x50) * 4 + iVar47 + 1) *
                                    iVar1 + (iVar31 + iVar32) * (uint)*(byte *)(iVar47 + 1) >> 8);
                puVar36[6] = (char)((uint)*(byte *)(*(int *)(param_5 + 0x50) * 4 + iVar47 + 2) *
                                    iVar1 + (iVar31 + iVar32) * (uint)*(byte *)(iVar47 + 2) >> 8);
                puVar36[7] = (char)((uint)*(byte *)(*(int *)(param_5 + 0x50) * 4 + iVar47 + 3) *
                                    iVar1 + (iVar31 + iVar32) * (uint)*(byte *)(iVar47 + 3) >> 8);
              }
              iVar52 = iVar52 + 1;
              puVar36 = puVar36 + 4;
              puStack_140 = puVar36;
            } while (iVar52 < *(int *)(param_5 + 0x58));
          }
        }
      }
      else {
        iStack_110 = 0;
        dVar54 = param_2;
        if (0 < *(int *)(param_5 + 0x58)) {
          do {
            dVar54 = dVar54 + param_1;
            iVar52 = (int)dVar54;
            if ((iVar52 < 1) || (*(int *)(param_5 + 0x50) + -2 <= iVar52)) {
              if ((iVar52 < 0) || (*(int *)(param_5 + 0x50) + -1 <= iVar52)) {
                if ((iVar52 < 1) || (*(int *)(param_5 + 0x50) <= iVar52)) {
                  puVar36[4] = 0;
                }
                else {
                  iRam832617f4 = iVar52 << 8;
                  iVar39 = iVar52 * 4 + iVar28;
                  iVar31 = (int)(dVar54 * dVar20 - (double)(longlong)iRam832617f4);
                  iVar47 = (0x100 - iVar31) - iVar1;
                  puVar36[4] = (char)((uint)*(byte *)(*(int *)(param_5 + 0x50) * 4 + iVar39) * iVar1
                                      + (iVar47 + iVar31) * (uint)*(byte *)(iVar52 * 4 + iVar28) >>
                                     8);
                  puVar36[5] = (char)((uint)*(byte *)(*(int *)(param_5 + 0x50) * 4 + iVar39 + 1) *
                                      iVar1 + (iVar47 + iVar31) * (uint)*(byte *)(iVar39 + 1) >> 8);
                  puVar36[6] = (char)((uint)*(byte *)(*(int *)(param_5 + 0x50) * 4 + iVar39 + 2) *
                                      iVar1 + (iVar47 + iVar31) * (uint)*(byte *)(iVar39 + 2) >> 8);
                  puVar36[7] = (char)((uint)*(byte *)(*(int *)(param_5 + 0x50) * 4 + iVar39 + 3) *
                                      iVar1 + (iVar47 + iVar31) * (uint)*(byte *)(iVar39 + 3) >> 8);
                }
              }
              else {
                iRam832617f4 = iVar52 << 8;
                iVar47 = iVar52 * 4 + iVar28;
                bVar2 = *(byte *)(iVar52 * 4 + iVar28);
                pbVar51 = (byte *)(*(int *)(param_5 + 0x50) * 4 + iVar47);
                bVar37 = *pbVar51;
                iVar52 = (int)(dVar54 * dVar20 - (double)(longlong)iRam832617f4);
                iVar39 = (0x100 - iVar52) - iVar1;
                puVar36[4] = (char)(((int)(((((uint)pbVar51[4] - (uint)bVar37) -
                                            (uint)*(byte *)(iVar47 + 4)) + (uint)bVar2) * iVar52 *
                                          iVar1) >> 8) + (uint)*(byte *)(iVar47 + 4) * iVar52 +
                                    iVar39 * (uint)bVar2 + (uint)bVar37 * iVar1 >> 8);
                iVar31 = *(int *)(param_5 + 0x50) * 4 + iVar47;
                bVar37 = *(byte *)(iVar31 + 1);
                puVar36[5] = (char)(((int)(((((uint)*(byte *)(iVar31 + 5) - (uint)bVar37) -
                                            (uint)*(byte *)(iVar47 + 5)) +
                                           (uint)*(byte *)(iVar47 + 1)) * iVar52 * iVar1) >> 8) +
                                    (uint)*(byte *)(iVar47 + 5) * iVar52 +
                                    iVar39 * (uint)*(byte *)(iVar47 + 1) + (uint)bVar37 * iVar1 >> 8
                                   );
                iVar31 = *(int *)(param_5 + 0x50) * 4 + iVar47;
                bVar37 = *(byte *)(iVar31 + 2);
                puVar36[6] = (char)(((int)(((((uint)*(byte *)(iVar31 + 6) - (uint)bVar37) -
                                            (uint)*(byte *)(iVar47 + 6)) +
                                           (uint)*(byte *)(iVar47 + 2)) * iVar52 * iVar1) >> 8) +
                                    (uint)*(byte *)(iVar47 + 6) * iVar52 +
                                    iVar39 * (uint)*(byte *)(iVar47 + 2) + (uint)bVar37 * iVar1 >> 8
                                   );
                iVar31 = *(int *)(param_5 + 0x50) * 4 + iVar47;
                bVar37 = *(byte *)(iVar31 + 3);
                puVar36[7] = (char)(((int)(((((uint)*(byte *)(iVar31 + 7) - (uint)bVar37) -
                                            (uint)*(byte *)(iVar47 + 7)) +
                                           (uint)*(byte *)(iVar47 + 3)) * iVar52 * iVar1) >> 8) +
                                    (uint)*(byte *)(iVar47 + 7) * iVar52 +
                                    iVar39 * (uint)*(byte *)(iVar47 + 3) + (uint)bVar37 * iVar1 >> 8
                                   );
              }
              puVar36 = puVar36 + 4;
            }
            else {
              iRam832617f4 = iVar52 << 8;
              lVar53 = 4;
              pbVar51 = (byte *)(iVar52 * 4 + iVar28);
              iVar52 = (int)(dVar54 * dVar20 - (double)(longlong)iRam832617f4);
              iVar31 = iVar52 * iVar52 >> 8;
              iVar47 = iVar31 * iVar52 >> 8;
              do {
                iVar39 = *(int *)(param_5 + 0x50);
                bVar37 = *pbVar51;
                uVar35 = (ulonglong)bVar37;
                bVar2 = pbVar51[-4];
                uVar30 = (ulonglong)bVar2;
                bVar3 = pbVar51[8];
                uVar25 = (ulonglong)bVar3;
                pbVar45 = pbVar51 + iVar39 * -4;
                bVar4 = pbVar51[4];
                uVar29 = (ulonglong)bVar4;
                pbVar23 = pbVar51 + iVar39 * 4;
                pbVar43 = pbVar51 + iVar39 * 8;
                bVar5 = *pbVar45;
                uVar33 = (ulonglong)bVar5;
                bVar6 = pbVar45[4];
                uVar48 = (ulonglong)bVar6;
                bVar7 = pbVar23[-4];
                uVar49 = (ulonglong)bVar7;
                bVar8 = pbVar23[4];
                uVar50 = (ulonglong)bVar8;
                bVar9 = *pbVar43;
                uVar24 = (ulonglong)bVar9;
                bVar10 = *pbVar23;
                uVar27 = (ulonglong)bVar10;
                bVar11 = pbVar45[-4];
                uVar26 = (ulonglong)bVar11;
                uVar42 = (ulonglong)pbVar43[4];
                uVar41 = (ulonglong)pbVar51[(iVar39 + 2) * 4];
                bVar12 = pbVar45[8];
                uVar46 = (ulonglong)bVar12;
                bVar13 = pbVar43[-4];
                uVar44 = (ulonglong)bVar13;
                bVar14 = pbVar43[8];
                uVar38 = ((uVar35 * 2 + uVar49 + uVar48) * 2 - uVar42) - uVar41;
                uVar21 = uVar24 + (uVar30 + uVar33) * -2 + uVar25;
                uVar40 = ((uVar27 - uVar50) - uVar25) + uVar30;
                iVar39 = (uint)bVar37 + (uint)bVar37 * 4;
                uVar22 = ((uVar50 - uVar27) - uVar29) + uVar35;
                uVar16 = (uint)bVar4;
                iVar39 = (((int)(((int)((uVar21 & 0xffffffff) << 3) - (int)uVar21) +
                                 ((int)((((uVar50 + uVar26) * 2 - uVar44) - uVar46 & 0xffffffff) <<
                                       1) + (uint)bVar14) * 2 +
                                 (int)uVar38 + (int)((uVar38 & 0xffffffff) << 2) +
                                ((uint)bVar10 + (uint)bVar4) * -0xd) >> 1) * iVar31 +
                          ((int)((int)((((int)(((((uVar33 - uVar48 & 0x7fffffff) * 2 - uVar24) -
                                                uVar26) + uVar42 + uVar46 & 0xffffffff) << 1) -
                                        (uint)bVar14) + uVar44 & 0xffffffff) << 1) +
                                 ((int)((uVar40 & 0xffffffff) << 3) - (int)uVar40) +
                                 (int)(uVar41 - uVar49) + (int)((uVar41 - uVar49 & 0xffffffff) << 2)
                                + ((uint)bVar4 - (uint)bVar37) * 0xb) >> 1) * iVar47 +
                          ((int)((((int)(((((uVar33 - uVar35) - uVar26 & 0x7fffffff) * 2 - uVar24) +
                                          uVar44 + uVar27 & 0xffffffff) << 1) +
                                  (int)(uVar50 - uVar29) +
                                  (int)((uVar50 - uVar29 & 0xffffffff) << 1)) -
                                 ((uint)bVar7 + (uint)bVar7 * 4)) + ((uint)bVar2 * 8 - (uint)bVar2))
                          >> 1) * iVar52 +
                         ((int)((((uint)bVar10 * 2 + (uint)bVar5) * 2 - iVar39) - (uint)bVar9) >> 1)
                         * 0x100) * iVar15 +
                         (((int)((int)(((((((uVar30 - uVar49 & 0x7fffffff) * 2 - uVar25) - uVar26) +
                                          uVar44 + uVar41 & 0x7fffffff) * 2 - (ulonglong)bVar14) +
                                        uVar46 & 0xffffffff) << 1) +
                                 ((((uint)bVar4 - (uint)bVar9) - (uint)bVar8) + (uint)bVar5) * 7 +
                                 ((uint)bVar10 - (uint)bVar37) * 0xb +
                                (int)(uVar42 - uVar48) + (int)((uVar42 - uVar48 & 0xffffffff) << 2))
                          >> 1) * iVar31 +
                          (((((int)((((((uVar24 - uVar42) - uVar41) - uVar30) - uVar33) + uVar49 +
                                     uVar25 + uVar48 & 0xffffffff) << 1) +
                             (int)uVar22 + (int)((uVar22 & 0xffffffff) << 1)) - (uint)bVar13) -
                           (uint)bVar12) + (uint)bVar14 + (uint)bVar11) * iVar47 +
                         ((((((int)((uVar49 - uVar30 & 0xffffffff) << 1) - (uint)bVar13) -
                            (uint)bVar8) - (uint)bVar10) - (uint)bVar5) + (uint)bVar9 + uVar16 +
                          (uint)bVar37 + (uint)bVar11) * iVar52) * iVar32 +
                         (((int)((((int)(((((uVar30 - uVar35) - uVar26 & 0x7fffffff) * 2 - uVar25) +
                                          uVar29 + uVar46 & 0xffffffff) << 1) +
                                  (int)(uVar50 - uVar27) +
                                  (int)((uVar50 - uVar27 & 0xffffffff) << 1)) -
                                 ((uint)bVar6 + (uint)bVar6 * 4)) + ((uint)bVar5 * 8 - (uint)bVar5))
                          >> 1) * iVar31 +
                          ((((((int)((uVar48 - uVar33 & 0xffffffff) << 1) - (uint)bVar8) - uVar16) -
                            (uint)bVar2) - (uint)bVar12) + (uint)bVar10 + (uint)bVar3 + (uint)bVar37
                          + (uint)bVar11) * iVar47 +
                         ((((uint)bVar37 - (uint)bVar2) - (uint)bVar5) + (uint)bVar11) * iVar52) *
                         iVar1 + (int)(((longlong)
                                        ((int)((((uint)bVar4 * 2 + (uint)bVar2) * 2 - iVar39) -
                                              (uint)bVar3) >> 1) * (longlong)iVar31 +
                                        (longlong)
                                        ((int)((((int)(uVar35 - uVar29) +
                                                (int)((uVar35 - uVar29 & 0xffffffff) << 1)) -
                                               (uint)bVar2) + (uint)bVar3) >> 1) * (longlong)iVar47
                                        + (longlong)
                                          ((int)((((int)(uVar35 - uVar27) +
                                                  (int)((uVar35 - uVar27 & 0xffffffff) << 1)) -
                                                 (uint)bVar5) + (uint)bVar9) >> 1) *
                                          (longlong)iVar32 +
                                        (longlong)((int)(uVar16 - bVar2) >> 1) * (longlong)iVar52 +
                                        (longlong)((int)((uint)bVar10 - (uint)bVar5) >> 1) *
                                        (longlong)iVar1 + uVar35 * 0x100 & 0xffffffff) << 8);
                if (iVar39 >> 0x10 < 0x100) {
                  bVar37 = -(char)(iVar39 >> 0x1f) - 1U & (byte)((uint)iVar39 >> 0x10);
                }
                else {
                  bVar37 = 0xff;
                }
                pbVar51 = pbVar51 + 1;
                puStack_140[4] = bVar37;
                puVar36 = puStack_140 + 1;
                lVar53 = lVar53 + -1;
                puStack_140 = puVar36;
              } while (lVar53 != 0);
            }
            iStack_110 = iStack_110 + 1;
            puStack_140 = puVar36;
          } while (iStack_110 < *(int *)(param_5 + 0x58));
        }
      }
      iStack_10c = iStack_10c + 1;
    } while (iStack_10c < *(int *)(param_5 + 0x5c));
  }
  return;
}

