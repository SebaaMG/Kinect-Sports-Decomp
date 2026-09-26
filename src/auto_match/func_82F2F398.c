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
extern unsigned int iStack_108;
extern unsigned int iStack_11c;
extern unsigned int iStack_158;
extern unsigned int iStack_170;
extern unsigned int iStack_f0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82052318;
extern unsigned int lbl_820FC3A8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F2F398(double param_1,double param_2,double param_3,double param_4,int param_5)

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
  bool bVar25;
  bool bVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  int iVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  int iVar38;
  ulonglong uVar39;
  undefined1 *puVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  byte *pbVar43;
  int iVar44;
  int iVar46;
  ulonglong uVar45;
  ulonglong uVar47;
  int iVar48;
  int iVar49;
  byte bVar50;
  int iVar51;
  int iVar52;
  undefined1 *puVar53;
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
  int iStack_170;
  undefined1 *puStack_160;
  int iStack_158;
  undefined1 *puStack_148;
  undefined1 *puStack_138;
  int iStack_11c;
  int iStack_108;
  int iStack_f0;
  
  dVar31 = lbl_820FC3A8;
  dVar30 = lbl_82052318;
  dVar29 = lbl_82005758;
  dVar28 = lbl_82005730;
  dVar27 = lbl_82005710;
  iVar18 = *(int *)(param_5 + 0x68);
  iVar19 = *(int *)(param_5 + 0x6c);
  iVar20 = *(int *)(param_5 + 0x50) >> 1;
  iStack_108 = 0;
  if (0 < *(int *)(param_5 + 0x5c)) {
    puVar65 = (undefined1 *)(*(int *)(param_5 + 0x78) + -1);
    param_2 = param_2 - param_1;
    puVar53 = (undefined1 *)(*(int *)(param_5 + 0x74) + -1);
    puVar40 = (undefined1 *)(*(int *)(param_5 + 0x70) + -1);
    puStack_160 = puVar40;
    puStack_148 = puVar53;
    puStack_138 = puVar65;
    do {
      dVar68 = dVar27;
      if (*(int *)(param_5 + 0x60) != 0) {
        dVar68 = (param_3 - dVar29) * dVar28;
      }
      dVar68 = dVar68 + (double)(longlong)iStack_108 * param_3 + param_4;
      bVar26 = true;
      bVar25 = true;
      iVar35 = (int)dVar68;
      iVar1 = (int)(dVar68 * dVar28);
      iVar46 = *(int *)(param_5 + 0x50) * iVar35 + *(int *)(param_5 + 100);
      iVar2 = (int)(dVar68 * dVar30 - (double)(longlong)(iVar35 << 8));
      iVar44 = iVar2 * iVar2 >> 8;
      iVar21 = iVar44 * iVar2 >> 8;
      iVar38 = (int)(dVar68 * dVar31 - (double)(longlong)(iVar1 << 8));
      iVar22 = iVar38 * iVar38 >> 8;
      iVar23 = iVar22 * iVar38 >> 8;
      if ((iVar35 < 2) || (*(int *)(param_5 + 0x54) + -4 <= iVar35)) {
        if (iVar35 < *(int *)(param_5 + 0x54)) {
          iVar38 = 0;
          iVar49 = *(int *)(param_5 + 0x58);
          if (iVar35 < *(int *)(param_5 + 0x54) + -1) {
            dVar68 = param_2;
            if (0 < iVar49) {
              do {
                dVar68 = dVar68 + param_1;
                iVar35 = (int)dVar68;
                if ((iVar35 < 0) || (*(int *)(param_5 + 0x50) <= iVar35)) {
                  puVar40[1] = 0x10;
                  if (!bVar26) goto LAB_82f30670;
                  puVar53[1] = 0x80;
                  bVar26 = false;
                  puVar65[1] = 0x80;
                  puVar65 = puVar65 + 1;
                  puVar53 = puVar53 + 1;
                }
                else {
                  puVar40[1] = (char)((ulonglong)
                                      ((longlong)(int)(uint)*(byte *)(iVar35 + iVar46) *
                                       (longlong)(0x100 - iVar2) +
                                      (longlong)
                                      (int)(uint)*(byte *)(*(int *)(param_5 + 0x50) + iVar35 +
                                                          iVar46) * (longlong)iVar2) >> 8);
                  if (bVar26) {
                    bVar26 = false;
                    iVar35 = iVar1 * iVar20 + (iVar35 >> 1);
                    puVar53[1] = *(undefined1 *)(iVar35 + iVar18);
                    puVar53 = puVar53 + 1;
                    puVar65[1] = *(undefined1 *)(iVar35 + iVar19);
                    puVar65 = puVar65 + 1;
                  }
                  else {
LAB_82f30670:
                    bVar26 = true;
                  }
                }
                puVar40 = puVar40 + 1;
                iVar49 = *(int *)(param_5 + 0x58);
                iVar38 = iVar38 + 1;
                puStack_160 = puVar40;
                puStack_148 = puVar53;
                puStack_138 = puVar65;
              } while (iVar38 < iVar49);
            }
          }
          else {
            dVar68 = param_2;
            if (0 < iVar49) {
              do {
                dVar68 = dVar68 + param_1;
                iVar35 = (int)dVar68;
                if ((iVar35 < 0) || (*(int *)(param_5 + 0x50) <= iVar35)) {
                  puVar40[1] = 0x10;
                  if (!bVar26) goto LAB_82f30720;
                  puVar53[1] = 0x80;
                  bVar26 = false;
                  puVar65[1] = 0x80;
                  puVar65 = puVar65 + 1;
                  puVar53 = puVar53 + 1;
                }
                else {
                  puVar40[1] = *(undefined1 *)(iVar35 + iVar46);
                  if (bVar26) {
                    bVar26 = false;
                    iVar35 = iVar1 * iVar20 + (iVar35 >> 1);
                    puVar53[1] = *(undefined1 *)(iVar35 + iVar18);
                    puVar53 = puVar53 + 1;
                    puVar65[1] = *(undefined1 *)(iVar35 + iVar19);
                    puVar65 = puVar65 + 1;
                  }
                  else {
LAB_82f30720:
                    bVar26 = true;
                  }
                }
                puVar40 = puVar40 + 1;
                iVar49 = *(int *)(param_5 + 0x58);
                iVar38 = iVar38 + 1;
                puStack_160 = puVar40;
                puStack_148 = puVar53;
                puStack_138 = puVar65;
              } while (iVar38 < iVar49);
            }
          }
        }
        else {
          iVar49 = *(int *)(param_5 + 0x58);
          iVar35 = 0;
          if (0 < iVar49) {
            do {
              puVar40[1] = 0x10;
              bVar26 = !bVar26;
              puVar40 = puVar40 + 1;
              if (!bVar26) {
                puVar53 = puVar53 + 1;
                *puVar53 = 0x80;
                puVar65 = puVar65 + 1;
                *puVar65 = 0x80;
              }
              iVar49 = *(int *)(param_5 + 0x58);
              iVar35 = iVar35 + 1;
              puStack_160 = puVar40;
              puStack_148 = puVar53;
              puStack_138 = puVar65;
            } while (iVar35 < iVar49);
          }
        }
      }
      else {
        iVar49 = *(int *)(param_5 + 0x58);
        iStack_11c = 0;
        dVar68 = param_2;
        if (0 < iVar49) {
          do {
            dVar68 = dVar68 + param_1;
            iVar35 = (int)dVar68;
            iVar49 = (int)(dVar68 * dVar30 - (double)(longlong)(iVar35 << 8));
            if ((iVar35 < 2) || (*(int *)(param_5 + 0x50) + -4 <= iVar35)) {
              iVar24 = *(int *)(param_5 + 0x50);
              if (iVar35 < iVar24) {
                if (iVar35 < iVar24 + -1) {
                  pbVar43 = (byte *)(iVar24 + iVar35 + iVar46);
                  bVar50 = *(byte *)(iVar35 + iVar46 + 1);
                  bVar3 = *pbVar43;
                  puVar40[1] = (char)(((int)(((((uint)pbVar43[1] - (uint)bVar50) - (uint)bVar3) +
                                             (uint)*(byte *)(iVar35 + iVar46)) * iVar49 * iVar2) >>
                                      8) + ((0x100 - iVar49) - iVar2) *
                                           (uint)*(byte *)(iVar35 + iVar46) + (uint)bVar50 * iVar49
                                      + (uint)bVar3 * iVar2 >> 8);
                }
                else {
                  puVar40[1] = (char)((ulonglong)
                                      ((longlong)(int)(uint)*(byte *)(iVar35 + iVar46) *
                                       (longlong)(0x100 - iVar2) +
                                      (longlong)(int)(uint)*(byte *)(iVar24 + iVar35 + iVar46) *
                                      (longlong)iVar2) >> 8);
                }
                puStack_160 = puVar40 + 1;
                if (bVar25) {
                  bVar25 = false;
                  iVar35 = iVar1 * iVar20 + (iVar35 >> 1);
                  puVar53[1] = *(undefined1 *)(iVar35 + iVar18);
                  puVar53 = puVar53 + 1;
                  puVar65[1] = *(undefined1 *)(iVar35 + iVar19);
                  puVar65 = puVar65 + 1;
                  puStack_148 = puVar53;
                  puStack_138 = puVar65;
                }
                else {
LAB_82f3044c:
                  bVar25 = true;
                }
              }
              else {
                puVar40[1] = 0x10;
                puStack_160 = puVar40 + 1;
                if (!bVar25) goto LAB_82f3044c;
                puVar53[1] = 0x80;
                puVar53 = puVar53 + 1;
                puVar65[1] = 0x80;
                puVar65 = puVar65 + 1;
                bVar25 = false;
                puStack_148 = puVar53;
                puStack_138 = puVar65;
              }
            }
            else {
              pbVar43 = (byte *)(iVar35 + iVar46);
              iVar35 = *(int *)(param_5 + 0x50);
              bVar16 = pbVar43[iVar35];
              uVar39 = (ulonglong)bVar16;
              bVar50 = *pbVar43;
              uVar47 = (ulonglong)bVar50;
              bVar3 = pbVar43[-1];
              uVar42 = (ulonglong)bVar3;
              bVar4 = pbVar43[2];
              uVar36 = (ulonglong)bVar4;
              bVar5 = pbVar43[1];
              uVar41 = (ulonglong)bVar5;
              pbVar62 = pbVar43 + -iVar35;
              iVar24 = iVar49 * iVar49 >> 8;
              pbVar59 = pbVar43 + iVar35 * 2;
              bVar6 = pbVar43[iVar35 + 1];
              uVar66 = (ulonglong)bVar6;
              bVar7 = pbVar62[-1];
              uVar37 = (ulonglong)bVar7;
              bVar8 = *pbVar62;
              uVar45 = (ulonglong)bVar8;
              bVar9 = pbVar62[1];
              uVar63 = (ulonglong)bVar9;
              bVar10 = pbVar43[iVar35 + -1];
              uVar64 = (ulonglong)bVar10;
              bVar11 = pbVar59[-1];
              uVar60 = (ulonglong)bVar11;
              uVar55 = (ulonglong)pbVar59[1];
              bVar12 = pbVar59[2];
              bVar13 = *pbVar59;
              uVar34 = (ulonglong)bVar13;
              bVar14 = pbVar62[2];
              uVar61 = (ulonglong)bVar14;
              uVar32 = (ulonglong)pbVar43[iVar35 + 2];
              uVar57 = uVar34 + (uVar42 + uVar45) * -2 + uVar36;
              uVar54 = ((uVar47 * 2 + uVar64 + uVar63) * 2 - uVar55) - uVar32;
              uVar58 = ((uVar39 - uVar66) - uVar36) + uVar42;
              iVar35 = iVar24 * iVar49 >> 8;
              iVar51 = (uint)bVar50 + (uint)bVar50 * 4;
              uVar33 = ((uVar66 - uVar39) - uVar41) + uVar47;
              iStack_f0 = (int)((((((uVar34 - uVar55) - uVar32) - uVar42) - uVar45) + uVar64 +
                                 uVar36 + uVar63 & 0x7fffffff) << 1);
              iVar35 = (((int)(((int)((uVar57 & 0xffffffff) << 3) - (int)uVar57) +
                               ((int)((((uVar66 + uVar37) * 2 - uVar60) - uVar61 & 0xffffffff) << 1)
                               + (uint)bVar12) * 2 + (int)uVar54 + (int)((uVar54 & 0xffffffff) << 2)
                              + ((uint)bVar16 + (uint)bVar5) * -0xd) >> 1) * iVar24 +
                        ((int)((int)(((((((uVar45 - uVar63 & 0x7fffffff) * 2 - uVar34) - uVar37) +
                                        uVar55 + uVar61 & 0x7fffffff) * 2 - (ulonglong)bVar12) +
                                      uVar60 & 0xffffffff) << 1) +
                               ((int)((uVar58 & 0xffffffff) << 3) - (int)uVar58) +
                               (int)(uVar32 - uVar64) + (int)((uVar32 - uVar64 & 0xffffffff) << 2) +
                              ((uint)bVar5 - (uint)bVar50) * 0xb) >> 1) * iVar35 +
                        ((int)((((((int)(((uVar45 - uVar47) - uVar37 & 0xffffffff) << 1) -
                                  (uint)bVar13) + (uint)bVar11 + (uint)bVar16) * 2 +
                                (int)(uVar66 - uVar41) + (int)((uVar66 - uVar41 & 0xffffffff) << 1))
                               - ((uint)bVar10 + (uint)bVar10 * 4)) +
                              ((uint)bVar3 * 8 - (uint)bVar3)) >> 1) * iVar49 +
                       ((int)((((uint)bVar16 * 2 + (uint)bVar8) * 2 - iVar51) - (uint)bVar13) >> 1)
                       * 0x100) * iVar44 +
                       (((int)((int)(((((((uVar42 - uVar64 & 0x7fffffff) * 2 - uVar36) - uVar37) +
                                        uVar60 + uVar32 & 0x7fffffff) * 2 - (ulonglong)bVar12) +
                                      uVar61 & 0xffffffff) << 1) +
                               ((((uint)bVar5 - (uint)bVar13) - (uint)bVar6) + (uint)bVar8) * 7 +
                               ((uint)bVar16 - (uint)bVar50) * 0xb +
                              (int)(uVar55 - uVar63) + (int)((uVar55 - uVar63 & 0xffffffff) << 2))
                        >> 1) * iVar24 +
                        ((((iStack_f0 + (int)uVar33 + (int)((uVar33 & 0xffffffff) << 1)) -
                          (uint)bVar11) - (uint)bVar14) + (uint)bVar12 + (uint)bVar7) * iVar35 +
                       ((((((int)((uVar64 - uVar42 & 0xffffffff) << 1) - (uint)bVar11) - (uint)bVar6
                          ) - (uint)bVar16) - (uint)bVar8) + (uint)bVar13 + (uint)bVar5 +
                        (uint)bVar50 + (uint)bVar7) * iVar49) * iVar21 +
                       (((int)((((int)(((((uVar42 - uVar47) - uVar37 & 0x7fffffff) * 2 - uVar36) +
                                        uVar41 + uVar61 & 0xffffffff) << 1) +
                                (int)(uVar66 - uVar39) + (int)((uVar66 - uVar39 & 0xffffffff) << 1))
                               - ((uint)bVar9 + (uint)bVar9 * 4)) + ((uint)bVar8 * 8 - (uint)bVar8))
                        >> 1) * iVar24 +
                        ((((((int)((uVar63 - uVar45 & 0xffffffff) << 1) - (uint)bVar6) - (uint)bVar5
                           ) - (uint)bVar3) - (uint)bVar14) + (uint)bVar16 + (uint)bVar4 +
                         (uint)bVar50 + (uint)bVar7) * iVar35 +
                       ((((uint)bVar50 - (uint)bVar3) - (uint)bVar8) + (uint)bVar7) * iVar49) *
                       iVar2 + (int)(((longlong)
                                      ((int)((((uint)bVar5 * 2 + (uint)bVar3) * 2 - iVar51) -
                                            (uint)bVar4) >> 1) * (longlong)iVar24 +
                                      (longlong)
                                      ((int)((((int)(uVar47 - uVar41) +
                                              (int)((uVar47 - uVar41 & 0xffffffff) << 1)) -
                                             (uint)bVar3) + (uint)bVar4) >> 1) * (longlong)iVar35 +
                                      (longlong)
                                      ((int)((((int)(uVar47 - uVar39) +
                                              (int)((uVar47 - uVar39 & 0xffffffff) << 1)) -
                                             (uint)bVar8) + (uint)bVar13) >> 1) * (longlong)iVar21 +
                                      (longlong)((int)((uint)bVar5 - (uint)bVar3) >> 1) *
                                      (longlong)iVar49 +
                                      (longlong)((int)((uint)bVar16 - (uint)bVar8) >> 1) *
                                      (longlong)iVar2 + uVar47 * 0x100 & 0xffffffff) << 8);
              if (iVar35 >> 0x10 < 0x100) {
                bVar50 = -(char)(iVar35 >> 0x1f) - 1U & (byte)((uint)iVar35 >> 0x10);
              }
              else {
                bVar50 = 0xff;
              }
              puVar40 = puStack_160 + 1;
              puStack_160[1] = bVar50;
              puVar53 = puStack_148;
              puVar65 = puStack_138;
              puStack_160 = puVar40;
              if (!bVar25) goto LAB_82f3044c;
              iVar48 = iVar1 * iVar20 + (int)(dVar68 * dVar28);
              pbVar43 = (byte *)(iVar48 + iVar18);
              iVar56 = iVar20 * 2;
              pbVar59 = pbVar43 + -iVar20;
              bVar50 = *pbVar43;
              uVar47 = (ulonglong)bVar50;
              bVar10 = pbVar43[iVar20 + 1];
              uVar60 = (ulonglong)bVar10;
              bVar3 = pbVar59[-1];
              uVar36 = (ulonglong)bVar3;
              bVar11 = pbVar43[iVar20 + -1];
              uVar61 = (ulonglong)bVar11;
              bVar4 = *pbVar59;
              uVar41 = (ulonglong)bVar4;
              bVar5 = pbVar43[-1];
              uVar42 = (ulonglong)bVar5;
              iVar52 = (uint)bVar50 + (uint)bVar50 * 4;
              bVar12 = pbVar43[iVar56 + -1];
              uVar58 = (ulonglong)bVar12;
              bVar6 = pbVar59[1];
              uVar64 = (ulonglong)bVar6;
              bVar13 = pbVar43[iVar56];
              uVar67 = (ulonglong)bVar13;
              bVar7 = pbVar59[2];
              uVar57 = (ulonglong)bVar7;
              uVar54 = (ulonglong)pbVar43[iVar56 + 1];
              bVar8 = pbVar43[2];
              uVar66 = (ulonglong)bVar8;
              bVar14 = pbVar43[iVar56 + 2];
              bVar16 = pbVar43[iVar20];
              uVar37 = (ulonglong)bVar16;
              uVar39 = uVar67 + (uVar42 + uVar41) * -2 + uVar66;
              uVar55 = (ulonglong)pbVar43[iVar20 + 2];
              bVar9 = pbVar43[1];
              uVar45 = (ulonglong)bVar9;
              uVar34 = ((uVar47 * 2 + uVar61 + uVar64) * 2 - uVar54) - uVar55;
              iVar35 = (int)(dVar68 * dVar31 - (double)(longlong)((int)(dVar68 * dVar28) << 8));
              iVar49 = iVar35 * iVar35 >> 8;
              iVar24 = iVar49 * iVar35 >> 8;
              iStack_158 = (int)(((((uVar41 - uVar64 & 0x7fffffff) * 2 - uVar67) - uVar36) + uVar54
                                  + uVar57 & 0x7fffffff) << 1);
              iVar51 = iStack_158 - (uint)bVar14;
              uVar32 = ((uVar37 - uVar60) - uVar66) + uVar42;
              iStack_158 = (int)((uVar54 - uVar64 & 0x3fffffff) << 2);
              uVar33 = uVar60 - uVar37;
              uVar63 = (uVar33 - uVar45) + uVar47;
              iVar51 = (((int)(((int)((uVar39 & 0xffffffff) << 3) - (int)uVar39) +
                               (int)(((((uVar60 + uVar36) * 2 - uVar58) - uVar57 & 0x7fffffff) * 2 +
                                      (ulonglong)bVar14 & 0xffffffff) << 1) +
                               (int)uVar34 + (int)((uVar34 & 0xffffffff) << 2) +
                              ((uint)bVar16 + (uint)bVar9) * -0xd) >> 1) * iVar49 +
                        ((int)((iVar51 + (uint)bVar12) * 2 +
                               ((int)((uVar32 & 0xffffffff) << 3) - (int)uVar32) +
                               ((uint)pbVar43[iVar20 + 2] - (uint)bVar11) * 5 +
                              ((uint)bVar9 - (uint)bVar50) * 0xb) >> 1) * iVar24 +
                        ((int)((((int)(((((uVar41 - uVar47) - uVar36 & 0x7fffffff) * 2 - uVar67) +
                                        uVar58 + uVar37 & 0xffffffff) << 1) +
                                (int)(uVar60 - uVar45) + (int)((uVar60 - uVar45 & 0xffffffff) << 1))
                               - ((uint)bVar11 + (uint)bVar11 * 4)) +
                              ((uint)bVar5 * 8 - (uint)bVar5)) >> 1) * iVar35 +
                       ((int)((((uint)bVar16 * 2 + (uint)bVar4) * 2 - iVar52) - (uint)bVar13) >> 1)
                       * 0x100) * iVar22 +
                       (((int)((int)((((int)(((((uVar42 - uVar61 & 0x7fffffff) * 2 - uVar66) -
                                              uVar36) + uVar58 + uVar55 & 0xffffffff) << 1) -
                                      (uint)bVar14) + uVar57 & 0xffffffff) << 1) +
                               ((((uint)bVar9 - (uint)bVar13) - (uint)bVar10) + (uint)bVar4) * 7 +
                               ((uint)bVar16 - (uint)bVar50) * 0xb +
                              (int)(uVar54 - uVar64) + iStack_158) >> 1) * iVar49 +
                        (((((int)((((((uVar67 - uVar54) - uVar55) - uVar42) - uVar41) + uVar61 +
                                   uVar66 + uVar64 & 0xffffffff) << 1) +
                           (int)uVar63 + (int)((uVar63 & 0xffffffff) << 1)) - (uint)bVar12) -
                         (uint)bVar7) + (uint)bVar14 + (uint)bVar3) * iVar24 +
                       ((((((int)((uVar61 - uVar42 & 0xffffffff) << 1) - (uint)bVar12) -
                          (uint)bVar10) - (uint)bVar16) - (uint)bVar4) + (uint)bVar13 + (uint)bVar9
                        + (uint)bVar50 + (uint)bVar3) * iVar35) * iVar23 +
                       (((int)((((int)(((((uVar42 - uVar47) - uVar36 & 0x7fffffff) * 2 - uVar66) +
                                        uVar45 + uVar57 & 0xffffffff) << 1) +
                                (int)uVar33 + (int)((uVar33 & 0xffffffff) << 1)) -
                               ((uint)bVar6 + (uint)bVar6 * 4)) + ((uint)bVar4 * 8 - (uint)bVar4))
                        >> 1) * iVar49 +
                        ((((((int)((uVar64 - uVar41 & 0xffffffff) << 1) - (uint)bVar10) -
                           (uint)bVar9) - (uint)bVar5) - (uint)bVar7) + (uint)bVar16 + (uint)bVar8 +
                         (uint)bVar50 + (uint)bVar3) * iVar24 +
                       ((((uint)bVar50 - (uint)bVar5) - (uint)bVar4) + (uint)bVar3) * iVar35) *
                       iVar38 + (int)(((longlong)
                                       ((int)((((uint)bVar9 * 2 + (uint)bVar5) * 2 - iVar52) -
                                             (uint)bVar8) >> 1) * (longlong)iVar49 +
                                       (longlong)
                                       ((int)((((int)(uVar47 - uVar37) +
                                               (int)((uVar47 - uVar37 & 0xffffffff) << 1)) -
                                              (uint)bVar4) + (uint)bVar13) >> 1) * (longlong)iVar23
                                       + (longlong)
                                         ((int)((((int)(uVar47 - uVar45) +
                                                 (int)((uVar47 - uVar45 & 0xffffffff) << 1)) -
                                                (uint)bVar5) + (uint)bVar8) >> 1) * (longlong)iVar24
                                       + (longlong)((int)((uint)bVar9 - (uint)bVar5) >> 1) *
                                         (longlong)iVar35 +
                                       (longlong)((int)((uint)bVar16 - (uint)bVar4) >> 1) *
                                       (longlong)iVar38 + uVar47 * 0x100 & 0xffffffff) << 8);
              if (iVar51 >> 0x10 < 0x100) {
                bVar50 = -(char)(iVar51 >> 0x1f) - 1U & (byte)((uint)iVar51 >> 0x10);
              }
              else {
                bVar50 = 0xff;
              }
              pbVar43 = (byte *)(iVar48 + iVar19);
              puStack_148[1] = bVar50;
              puVar53 = puStack_148 + 1;
              pbVar59 = pbVar43 + -iVar20;
              bVar10 = pbVar43[iVar56 + -1];
              uVar58 = (ulonglong)bVar10;
              bVar50 = pbVar43[2];
              uVar64 = (ulonglong)bVar50;
              bVar3 = pbVar59[-1];
              uVar67 = (ulonglong)bVar3;
              uVar32 = (ulonglong)pbVar43[iVar56 + 2];
              bVar4 = pbVar59[1];
              uVar61 = (ulonglong)bVar4;
              bVar11 = pbVar43[iVar56];
              uVar66 = (ulonglong)bVar11;
              uVar55 = (ulonglong)pbVar43[iVar56 + 1];
              bVar12 = pbVar43[iVar20];
              uVar33 = (ulonglong)bVar12;
              bVar13 = pbVar43[iVar20 + 1];
              uVar63 = (ulonglong)bVar13;
              bVar5 = pbVar59[2];
              uVar57 = (ulonglong)bVar5;
              bVar6 = *pbVar43;
              uVar42 = (ulonglong)bVar6;
              bVar14 = pbVar43[iVar20 + -1];
              uVar60 = (ulonglong)bVar14;
              bVar7 = pbVar43[-1];
              uVar37 = (ulonglong)bVar7;
              bVar8 = *pbVar59;
              uVar36 = (ulonglong)bVar8;
              uVar45 = ((uVar33 - uVar63) - uVar64) + uVar37;
              bVar9 = pbVar43[1];
              uVar34 = (ulonglong)bVar9;
              uVar39 = (ulonglong)pbVar43[iVar20 + 2];
              iStack_170 = (int)(((((uVar63 + uVar67) * 2 - uVar58) - uVar57 & 0x7fffffff) * 2 +
                                  uVar32 & 0x7fffffff) << 1);
              uVar54 = ((uint)bVar11 + ((uint)bVar7 + (uint)bVar8) * -2) + uVar64;
              iStack_158 = (int)((uVar39 - uVar60 & 0x3fffffff) << 2);
              iVar51 = (uint)bVar6 + (uint)bVar6 * 4;
              uVar41 = ((uVar63 - uVar33) - uVar34) + uVar42;
              uVar47 = ((uVar34 - uVar66) - uVar63) + uVar36;
              iVar35 = (((int)(((int)((uVar54 & 0xffffffff) << 3) - (int)uVar54) + iStack_170 +
                               ((((uint)bVar6 * 2 + (uint)bVar14 + (uint)bVar4) * 2 -
                                (uint)pbVar43[iVar56 + 1]) - (uint)pbVar43[iVar20 + 2]) * 5 +
                              ((uint)bVar12 + (uint)bVar9) * -0xd) >> 1) * iVar49 +
                        ((int)((int)(((((((uVar36 - uVar61 & 0x7fffffff) * 2 - uVar66) - uVar67) +
                                        uVar55 + uVar57 & 0x7fffffff) * 2 - uVar32) + uVar58 &
                                     0xffffffff) << 1) +
                               ((int)((uVar45 & 0xffffffff) << 3) - (int)uVar45) +
                               (int)(uVar39 - uVar60) + iStack_158 +
                              ((uint)bVar9 - (uint)bVar6) * 0xb) >> 1) * iVar24 +
                        ((int)((((int)(((((uVar36 - uVar42) - uVar67 & 0x7fffffff) * 2 - uVar66) +
                                        uVar58 + uVar33 & 0xffffffff) << 1) +
                                (int)(uVar63 - uVar34) + (int)((uVar63 - uVar34 & 0xffffffff) << 1))
                               - ((uint)bVar14 + (uint)bVar14 * 4)) +
                              ((uint)bVar7 * 8 - (uint)bVar7)) >> 1) * iVar35 +
                       ((int)((((uint)bVar12 * 2 + (uint)bVar8) * 2 - iVar51) - (uint)bVar11) >> 1)
                       * 0x100) * iVar22 +
                       (((int)((int)(((((((uVar37 - uVar60 & 0x7fffffff) * 2 - uVar64) - uVar67) +
                                        uVar58 + uVar39 & 0x7fffffff) * 2 - uVar32) + uVar57 &
                                     0xffffffff) << 1) +
                               ((int)((uVar47 & 0xffffffff) << 3) - (int)uVar47) +
                               ((uint)bVar12 - (uint)bVar6) * 0xb +
                              (int)(uVar55 - uVar61) + (int)((uVar55 - uVar61 & 0xffffffff) << 2))
                        >> 1) * iVar49 +
                        (((((int)((((((uVar66 - uVar55) - uVar39) - uVar37) - uVar36) + uVar60 +
                                   uVar64 + uVar61 & 0xffffffff) << 1) +
                           (int)uVar41 + (int)((uVar41 & 0xffffffff) << 1)) - (uint)bVar10) -
                         (uint)bVar5) + (uint)pbVar43[iVar56 + 2] + (uint)bVar3) * iVar24 +
                       ((((((int)((uVar60 - uVar37 & 0xffffffff) << 1) - (uint)bVar10) -
                          (uint)bVar13) - (uint)bVar12) - (uint)bVar8) + (uint)bVar11 + (uint)bVar9
                        + (uint)bVar6 + (uint)bVar3) * iVar35) * iVar23 +
                       (((int)((((int)(((((uVar37 - uVar42) - uVar67 & 0x7fffffff) * 2 - uVar64) +
                                        uVar34 + uVar57 & 0xffffffff) << 1) +
                                (int)(uVar63 - uVar33) + (int)((uVar63 - uVar33 & 0xffffffff) << 1))
                               - ((uint)bVar4 + (uint)bVar4 * 4)) + ((uint)bVar8 * 8 - (uint)bVar8))
                        >> 1) * iVar49 +
                        ((((((int)((uVar61 - uVar36 & 0xffffffff) << 1) - (uint)bVar13) -
                           (uint)bVar9) - (uint)bVar7) - (uint)bVar5) + (uint)bVar12 + (uint)bVar50
                         + (uint)bVar6 + (uint)bVar3) * iVar24 +
                       ((((uint)bVar6 - (uint)bVar7) - (uint)bVar8) + (uint)bVar3) * iVar35) *
                       iVar38 + (int)(((longlong)
                                       ((int)((((uint)bVar9 * 2 + (uint)bVar7) * 2 - iVar51) -
                                             (uint)bVar50) >> 1) * (longlong)iVar49 +
                                       (longlong)
                                       ((int)((((int)(uVar42 - uVar33) +
                                               (int)((uVar42 - uVar33 & 0xffffffff) << 1)) -
                                              (uint)bVar8) + (uint)bVar11) >> 1) * (longlong)iVar23
                                       + (longlong)
                                         ((int)((((int)(uVar42 - uVar34) +
                                                 (int)((uVar42 - uVar34 & 0xffffffff) << 1)) -
                                                (uint)bVar7) + (uint)bVar50) >> 1) *
                                         (longlong)iVar24 +
                                       (longlong)((int)((uint)bVar9 - (uint)bVar7) >> 1) *
                                       (longlong)iVar35 +
                                       (longlong)((int)((uint)bVar12 - (uint)bVar8) >> 1) *
                                       (longlong)iVar38 + uVar42 * 0x100 & 0xffffffff) << 8);
              if (iVar35 >> 0x10 < 0x100) {
                bVar50 = -(char)(iVar35 >> 0x1f) - 1U & (byte)((uint)iVar35 >> 0x10);
              }
              else {
                bVar50 = 0xff;
              }
              bVar25 = false;
              puVar65 = puStack_138 + 1;
              puStack_138[1] = bVar50;
              puStack_148 = puVar53;
              puStack_138 = puVar65;
            }
            iVar49 = *(int *)(param_5 + 0x58);
            iStack_11c = iStack_11c + 1;
            puVar40 = puStack_160;
          } while (iStack_11c < iVar49);
        }
      }
      dVar68 = (double)(longlong)(iStack_108 + 1) * param_3 + param_4;
      iVar35 = (int)dVar68;
      iRam832617f4 = iVar35 << 8;
      iVar44 = *(int *)(param_5 + 0x50) * iVar35 + *(int *)(param_5 + 100);
      iVar1 = (int)(dVar68 * dVar30 - (double)(longlong)iRam832617f4);
      iVar2 = iVar1 * iVar1 >> 8;
      iVar38 = iVar2 * iVar1 >> 8;
      if ((iVar35 < 2) || (*(int *)(param_5 + 0x54) + -4 <= iVar35)) {
        if (iVar35 < *(int *)(param_5 + 0x54)) {
          if (iVar35 < *(int *)(param_5 + 0x54) + -1) {
            iVar35 = 0;
            dVar68 = param_2;
            if (0 < iVar49) {
              do {
                dVar68 = dVar68 + param_1;
                iVar2 = (int)dVar68;
                if ((iVar2 < 0) || (*(int *)(param_5 + 0x50) <= iVar2)) {
                  puVar40[1] = 0x10;
                }
                else {
                  puVar40[1] = (char)((ulonglong)
                                      ((longlong)(int)(uint)*(byte *)(iVar2 + iVar44) *
                                       (longlong)(0x100 - iVar1) +
                                      (longlong)
                                      (int)(uint)*(byte *)(iVar2 + *(int *)(param_5 + 0x50) + iVar44
                                                          ) * (longlong)iVar1) >> 8);
                }
                iVar35 = iVar35 + 1;
                puVar40 = puVar40 + 1;
                puStack_160 = puVar40;
              } while (iVar35 < *(int *)(param_5 + 0x58));
            }
          }
          else {
            iVar35 = 0;
            dVar68 = param_2;
            if (0 < iVar49) {
              do {
                dVar68 = dVar68 + param_1;
                iVar1 = (int)dVar68;
                if ((iVar1 < 0) || (*(int *)(param_5 + 0x50) <= iVar1)) {
                  puVar40[1] = 0x10;
                }
                else {
                  puVar40[1] = *(undefined1 *)(iVar1 + iVar44);
                }
                iVar35 = iVar35 + 1;
                puVar40 = puVar40 + 1;
                puStack_160 = puVar40;
              } while (iVar35 < *(int *)(param_5 + 0x58));
            }
          }
        }
        else {
          iVar35 = 0;
          if (0 < iVar49) {
            do {
              puVar40 = puVar40 + 1;
              *puVar40 = 0x10;
              iVar35 = iVar35 + 1;
              puStack_160 = puVar40;
            } while (iVar35 < *(int *)(param_5 + 0x58));
          }
        }
      }
      else {
        iStack_11c = 0;
        dVar68 = param_2;
        if (0 < iVar49) {
          do {
            dVar68 = dVar68 + param_1;
            iVar35 = (int)dVar68;
            if ((iVar35 < 2) || (*(int *)(param_5 + 0x50) + -4 <= iVar35)) {
              if (iVar35 < *(int *)(param_5 + 0x50)) {
                puVar40[1] = *(undefined1 *)(iVar35 + iVar44);
              }
              else {
                puVar40[1] = 0x10;
              }
            }
            else {
              pbVar43 = (byte *)(iVar35 + iVar44);
              iVar21 = *(int *)(param_5 + 0x50);
              iRam832617f4 = iVar35 << 8;
              pbVar62 = pbVar43 + -iVar21;
              bVar50 = pbVar43[2];
              bVar3 = pbVar62[-1];
              uVar36 = (ulonglong)bVar3;
              bVar4 = pbVar43[iVar21 + 1];
              uVar58 = (ulonglong)bVar4;
              pbVar59 = pbVar43 + iVar21 * 2;
              bVar5 = *pbVar43;
              uVar45 = (ulonglong)bVar5;
              bVar6 = pbVar43[iVar21 + -1];
              uVar60 = (ulonglong)bVar6;
              bVar7 = pbVar43[-1];
              uVar42 = (ulonglong)bVar7;
              bVar8 = *pbVar62;
              uVar41 = (ulonglong)bVar8;
              bVar9 = pbVar59[-1];
              uVar55 = (ulonglong)bVar9;
              bVar10 = pbVar62[1];
              uVar61 = (ulonglong)bVar10;
              bVar11 = pbVar62[2];
              uVar57 = (ulonglong)bVar11;
              bVar12 = *pbVar59;
              uVar34 = (ulonglong)bVar12;
              bVar13 = pbVar59[2];
              bVar14 = pbVar59[1];
              bVar16 = pbVar43[1];
              uVar39 = (ulonglong)bVar16;
              bVar17 = pbVar43[iVar21];
              uVar37 = (ulonglong)bVar17;
              bVar15 = pbVar43[iVar21 + 2];
              uVar32 = uVar34 + (uVar42 + uVar41) * -2 + (ulonglong)bVar50;
              uVar54 = ((uVar45 * 2 + uVar60 + uVar61) * 2 - (ulonglong)bVar14) - (ulonglong)bVar15;
              iVar35 = (int)(dVar68 * dVar30 - (double)(longlong)iRam832617f4);
              uVar33 = ((uVar39 - uVar34) - uVar58) + uVar41;
              iVar21 = iVar35 * iVar35 >> 8;
              iVar22 = (int)(uVar58 - uVar37);
              uVar47 = (iVar22 - (uint)bVar16) + uVar45;
              iVar35 = (((int)(((int)((uVar32 & 0xffffffff) << 3) - (int)uVar32) +
                               (int)(((((uVar58 + uVar36) * 2 - uVar55) - uVar57 & 0x7fffffff) * 2 +
                                      (ulonglong)bVar13 & 0xffffffff) << 1) +
                               (int)uVar54 + (int)((uVar54 & 0xffffffff) << 2) +
                              ((uint)bVar17 + (uint)bVar16) * -0xd) >> 1) * iVar2 +
                        ((int)((((int)(((((uVar42 - uVar60 & 0x7fffffff) * 2 - (ulonglong)bVar50) -
                                        uVar36) + uVar55 + (ulonglong)bVar15 & 0xffffffff) << 1) -
                                (uint)bVar13) + (uint)bVar11) * 2 +
                               ((int)((uVar33 & 0xffffffff) << 3) - (int)uVar33) +
                               ((uint)bVar17 - (uint)bVar5) * 0xb +
                              ((uint)bVar14 - (uint)bVar10) * 5) >> 1) * iVar38 +
                       ((int)((((int)(((((int)(((uVar42 - uVar45) - uVar36 & 0xffffffff) << 1) -
                                        (uint)bVar50) + (uint)bVar16) + uVar57 & 0xffffffff) << 1) +
                               iVar22 + (int)((uVar58 - uVar37 & 0xffffffff) << 1)) -
                              ((uint)bVar10 + (uint)bVar10 * 4)) + ((uint)bVar8 * 8 - (uint)bVar8))
                       >> 1) * iVar1) * iVar21 +
                       (((int)((int)((((int)(((((uVar41 - uVar61 & 0x7fffffff) * 2 - uVar34) -
                                              uVar36) + (ulonglong)bVar14 + uVar57 & 0xffffffff) <<
                                            1) - (uint)bVar13) + uVar55 & 0xffffffff) << 1) +
                               ((((uint)bVar17 - (uint)bVar4) - (uint)bVar50) + (uint)bVar7) * 7 +
                               ((uint)bVar15 - (uint)bVar6) * 5 + ((uint)bVar16 - (uint)bVar5) * 0xb
                              ) >> 1) * iVar2 +
                        (((((int)((((((((uint)bVar12 - (uint)bVar14) - (uint)bVar15) - (uint)bVar7)
                                    - (uint)bVar8) + (uint)bVar6 + (uint)bVar50) + uVar61 &
                                  0xffffffff) << 1) +
                           (int)uVar47 + (int)((uVar47 & 0xffffffff) << 1)) - (uint)bVar9) -
                         (uint)bVar11) + (uint)bVar13 + (uint)bVar3) * iVar38 +
                        ((((((int)((uVar61 - uVar41 & 0xffffffff) << 1) - (uint)bVar4) -
                           (uint)bVar16) - (uint)bVar7) - (uint)bVar11) + (uint)bVar17 +
                         (uint)bVar50 + (uint)bVar5 + (uint)bVar3) * iVar1 +
                       ((int)((((int)(uVar45 - uVar39) + (int)((uVar45 - uVar39 & 0xffffffff) << 1))
                              - (uint)bVar7) + (uint)bVar50) >> 1) * 0x100) * (iVar21 * iVar35 >> 8)
                       + (((int)((((int)(((((ulonglong)(((uint)bVar8 - (uint)bVar5) - (uint)bVar3) &
                                           0x7fffffff) * 2 - uVar34) + uVar55 + uVar37 & 0xffffffff)
                                        << 1) +
                                  (int)(uVar58 - uVar39) +
                                  (int)((uVar58 - uVar39 & 0xffffffff) << 1)) -
                                 ((uint)bVar6 + (uint)bVar6 * 4)) + ((uint)bVar7 * 8 - (uint)bVar7))
                          >> 1) * iVar2 +
                          ((((((int)((uVar60 - uVar42 & 0xffffffff) << 1) - (uint)bVar9) -
                             (uint)bVar4) - (uint)bVar17) - (uint)bVar8) + (uint)bVar12 +
                           (uint)bVar16 + (uint)bVar5 + (uint)bVar3) * iVar38 +
                          ((((uint)bVar5 - (uint)bVar7) - (uint)bVar8) + (uint)bVar3) * iVar1 +
                         ((int)((uint)bVar16 - (uint)bVar7) >> 1) * 0x100) * iVar35 +
                       (int)(((longlong)
                              ((int)((((uint)bVar17 * 2 + (uint)bVar8) * 2 - (uint)bVar12) +
                                    (uint)bVar5 * -5) >> 1) * (longlong)iVar2 +
                              (longlong)
                              ((int)((((uint)bVar16 * 2 + (uint)bVar7) * 2 - (uint)bVar50) +
                                    (uint)bVar5 * -5) >> 1) * (longlong)iVar21 +
                              (longlong)
                              ((int)((((int)(uVar45 - uVar37) +
                                      (int)((uVar45 - uVar37 & 0xffffffff) << 1)) - (uint)bVar8) +
                                    (uint)bVar12) >> 1) * (longlong)iVar38 +
                              (longlong)((int)((uint)bVar17 - (uint)bVar8) >> 1) * (longlong)iVar1 +
                              uVar45 * 0x100 & 0xffffffff) << 8);
              if (iVar35 >> 0x10 < 0x100) {
                bVar50 = -(char)(iVar35 >> 0x1f) - 1U & (byte)((uint)iVar35 >> 0x10);
              }
              else {
                bVar50 = 0xff;
              }
              puStack_160[1] = bVar50;
              puVar53 = puStack_148;
              puVar65 = puStack_138;
              puVar40 = puStack_160;
            }
            puVar40 = puVar40 + 1;
            iStack_11c = iStack_11c + 1;
            puStack_160 = puVar40;
          } while (iStack_11c < *(int *)(param_5 + 0x58));
        }
      }
      iStack_108 = iStack_108 + 2;
    } while (iStack_108 < *(int *)(param_5 + 0x5c));
  }
  return;
}

