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
extern unsigned int iStack_10c;
extern unsigned int iStack_128;
extern unsigned int iStack_130;
extern unsigned int iStack_140;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82052318;
extern unsigned int lbl_820FC3A8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82CCBA50(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  int iVar1;
  uint uVar2;
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
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar28;
  ulonglong uVar27;
  int iVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  byte *pbVar32;
  int in_r8;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined1 *puVar35;
  ulonglong uVar36;
  int iVar37;
  int iVar38;
  ulonglong uVar39;
  byte bVar41;
  undefined1 *puVar40;
  int iVar42;
  int iVar43;
  byte *pbVar44;
  int iVar46;
  ulonglong uVar45;
  byte *pbVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  byte *pbVar52;
  ulonglong uVar51;
  ulonglong uVar53;
  int iVar54;
  int iVar57;
  ulonglong uVar55;
  ulonglong uVar56;
  ulonglong uVar58;
  ulonglong uVar59;
  double dVar60;
  double dVar61;
  undefined1 *puStack_15c;
  undefined1 *puStack_154;
  undefined1 *puStack_148;
  int iStack_140;
  int iStack_130;
  int iStack_128;
  int iStack_10c;
  
  if (in_r8 == 0) {
    iVar28 = *(int *)(param_5 + 100);
    puStack_154 = *(undefined1 **)(param_5 + 0x70);
    puStack_148 = (undefined1 *)((int)puStack_154 + 2);
    *(int *)(param_5 + 100) = iVar28 + 1;
    iVar57 = iVar28 + 2;
    iVar26 = (int)puStack_154 + 1;
  }
  else {
    iVar26 = *(int *)(param_5 + 0x70);
    puStack_154 = (undefined1 *)(iVar26 + 1);
    puStack_148 = (undefined1 *)(iVar26 + 3);
    iVar28 = *(int *)(param_5 + 100) + 1;
    iVar57 = *(int *)(param_5 + 100) + 3;
  }
  dVar21 = lbl_82052318;
  dVar20 = lbl_82005758;
  dVar19 = lbl_82005730;
  dVar18 = lbl_82005710;
  iStack_10c = 0;
  if (0 < *(int *)(param_5 + 0x5c)) {
    puVar35 = (undefined1 *)(iVar26 + -2);
    dVar60 = param_2 - param_1;
    puStack_15c = puVar35;
    do {
      dVar61 = dVar18;
      if (*(int *)(param_5 + 0x60) != 0) {
        dVar61 = (param_3 - dVar20) * dVar19;
      }
      dVar61 = dVar61 + (double)(longlong)iStack_10c * param_3 + param_4;
      iVar26 = (int)dVar61;
      iRam83236bf4 = iVar26 << 8;
      iVar29 = *(int *)(param_5 + 0x50) * iVar26 * 2 + *(int *)(param_5 + 100);
      iVar1 = (int)(dVar61 * dVar21 - (double)(longlong)iRam83236bf4);
      iVar54 = iVar1 * iVar1 >> 8;
      iVar38 = iVar54 * iVar1 >> 8;
      if ((iVar26 < 1) || (*(int *)(param_5 + 0x54) + -2 <= iVar26)) {
        if ((iVar26 < 0) || (*(int *)(param_5 + 0x54) + -1 <= iVar26)) {
          if ((iVar26 < 1) || (*(int *)(param_5 + 0x54) <= iVar26)) {
            iVar26 = 0;
            if (0 < *(int *)(param_5 + 0x58)) {
              do {
                iVar26 = iVar26 + 1;
                puVar35 = puVar35 + 2;
                *puVar35 = 0x10;
                puStack_15c = puVar35;
              } while (iVar26 < *(int *)(param_5 + 0x58));
            }
          }
          else {
            iVar26 = 0;
            dVar61 = dVar60;
            if (0 < *(int *)(param_5 + 0x58)) {
              do {
                dVar61 = dVar61 + param_1;
                iVar1 = (int)dVar61;
                if (iVar1 < 0) {
LAB_82ccc440:
                  puVar35[2] = 0x10;
                }
                else if (iVar1 < *(int *)(param_5 + 0x50) + -1) {
                  iRam83236bf4 = iVar1 << 8;
                  iVar54 = (int)(dVar61 * dVar21 - (double)(longlong)iRam83236bf4);
                  puVar35[2] = (char)((uint)*(byte *)(iVar1 * 2 + iVar29 + 2) * iVar54 +
                                      (0x100 - iVar54) * (uint)*(byte *)(iVar1 * 2 + iVar29) >> 8);
                }
                else {
                  if ((iVar1 < 1) || (*(int *)(param_5 + 0x50) <= iVar1)) goto LAB_82ccc440;
                  puVar35[2] = *(undefined1 *)(iVar1 * 2 + iVar29);
                }
                iVar26 = iVar26 + 1;
                puVar35 = puVar35 + 2;
                puStack_15c = puVar35;
              } while (iVar26 < *(int *)(param_5 + 0x58));
            }
          }
        }
        else {
          iVar26 = 0;
          dVar61 = dVar60;
          if (0 < *(int *)(param_5 + 0x58)) {
            do {
              dVar61 = dVar61 + param_1;
              iVar54 = (int)dVar61;
              if (iVar54 < 0) {
LAB_82ccc35c:
                puVar35[2] = 0x10;
              }
              else if (iVar54 < *(int *)(param_5 + 0x50) + -1) {
                iRam83236bf4 = iVar54 << 8;
                iVar38 = iVar54 * 2 + iVar29;
                bVar4 = *(byte *)(iVar54 * 2 + iVar29);
                pbVar32 = (byte *)(*(int *)(param_5 + 0x50) * 2 + iVar38);
                bVar41 = *(byte *)(iVar38 + 2);
                bVar3 = *pbVar32;
                iVar54 = (int)(dVar61 * dVar21 - (double)(longlong)iRam83236bf4);
                puVar35[2] = (char)(((int)(((((uint)pbVar32[2] - (uint)bVar3) - (uint)bVar41) +
                                           (uint)bVar4) * iVar54 * iVar1) >> 8) +
                                    ((0x100 - iVar54) - iVar1) * (uint)bVar4 + (uint)bVar41 * iVar54
                                    + (uint)bVar3 * iVar1 >> 8);
              }
              else {
                if ((iVar54 < 1) || (*(int *)(param_5 + 0x50) <= iVar54)) goto LAB_82ccc35c;
                iRam83236bf4 = iVar54 << 8;
                puVar35[2] = (char)((uint)*(byte *)(*(int *)(param_5 + 0x50) * 2 +
                                                   iVar54 * 2 + iVar29) * iVar1 +
                                    (0x100 - iVar1) * (uint)*(byte *)(iVar54 * 2 + iVar29) >> 8);
              }
              iVar26 = iVar26 + 1;
              puVar35 = puVar35 + 2;
              puStack_15c = puVar35;
            } while (iVar26 < *(int *)(param_5 + 0x58));
          }
        }
      }
      else {
        iStack_130 = 0;
        dVar61 = dVar60;
        if (0 < *(int *)(param_5 + 0x58)) {
          do {
            dVar61 = dVar61 + param_1;
            iVar26 = (int)dVar61;
            if ((iVar26 < 1) || (uVar17 = *(uint *)(param_5 + 0x50), (int)(uVar17 - 2) <= iVar26)) {
              if ((iVar26 == 0) || (iVar37 = *(int *)(param_5 + 0x50), iVar26 < iVar37 + -1)) {
                iRam83236bf4 = iVar26 << 8;
                iVar37 = iVar26 * 2 + iVar29;
                bVar4 = *(byte *)(iVar26 * 2 + iVar29);
                pbVar32 = (byte *)(*(int *)(param_5 + 0x50) * 2 + iVar37);
                bVar41 = *(byte *)(iVar37 + 2);
                bVar3 = *pbVar32;
                iVar26 = (int)(dVar61 * dVar21 - (double)(longlong)iRam83236bf4);
                puVar35[2] = (char)(((int)(((((uint)pbVar32[2] - (uint)bVar3) - (uint)bVar41) +
                                           (uint)bVar4) * iVar26 * iVar1) >> 8) +
                                    ((0x100 - iVar26) - iVar1) * (uint)bVar4 + (uint)bVar41 * iVar26
                                    + (uint)bVar3 * iVar1 >> 8);
              }
              else if ((iVar26 < 1) || (iVar37 <= iVar26)) {
                puVar35[2] = 0x10;
              }
              else {
                iRam83236bf4 = iVar26 << 8;
                puVar35[2] = (char)((uint)*(byte *)(iVar37 * 2 + iVar26 * 2 + iVar29) * iVar1 +
                                    (0x100 - iVar1) * (uint)*(byte *)(iVar26 * 2 + iVar29) >> 8);
              }
            }
            else {
              iRam83236bf4 = iVar26 << 8;
              pbVar44 = (byte *)(iVar26 * 2 + iVar29);
              pbVar52 = pbVar44 + (uVar17 & 0x7fffffff) * -2;
              pbVar32 = pbVar44 + uVar17 * 4;
              bVar41 = pbVar44[-2];
              uVar34 = (ulonglong)bVar41;
              pbVar47 = pbVar44 + uVar17 * 2;
              bVar3 = *pbVar44;
              uVar39 = (ulonglong)bVar3;
              bVar4 = pbVar44[4];
              uVar27 = (ulonglong)bVar4;
              bVar5 = pbVar52[-2];
              uVar30 = (ulonglong)bVar5;
              bVar6 = *pbVar52;
              uVar36 = (ulonglong)bVar6;
              bVar7 = pbVar32[-2];
              bVar8 = pbVar47[2];
              uVar58 = (ulonglong)bVar8;
              bVar9 = pbVar47[-2];
              uVar55 = (ulonglong)bVar9;
              iVar46 = (uint)bVar3 + (uint)bVar3 * 4;
              bVar10 = pbVar52[2];
              uVar53 = (ulonglong)bVar10;
              bVar11 = *pbVar32;
              uVar25 = (ulonglong)bVar11;
              bVar12 = pbVar52[4];
              uVar51 = (ulonglong)bVar12;
              uVar49 = (ulonglong)pbVar32[2];
              bVar13 = pbVar32[4];
              bVar14 = *pbVar47;
              uVar31 = (ulonglong)bVar14;
              uVar48 = (ulonglong)pbVar44[(uVar17 + 2) * 2];
              uVar22 = uVar25 + (uVar34 + uVar36) * -2 + uVar27;
              bVar15 = pbVar44[2];
              uVar33 = (ulonglong)bVar15;
              uVar50 = ((uVar39 * 2 + uVar55 + uVar53) * 2 - uVar49) - uVar48;
              iVar26 = (int)(dVar61 * dVar21 - (double)(longlong)iRam83236bf4);
              iVar37 = iVar26 * iVar26 >> 8;
              iVar43 = iVar37 * iVar26 >> 8;
              uVar45 = uVar58 - uVar31;
              uVar23 = ((uVar31 - uVar58) - uVar27) + uVar34;
              uVar24 = (uVar45 - uVar33) + uVar39;
              iStack_128 = (int)((uVar55 - uVar34 & 0x7fffffff) << 1);
              iVar26 = (((int)(((int)((uVar22 & 0xffffffff) << 3) - (int)uVar22) +
                               (int)(((((uVar58 + uVar30) * 2 - (ulonglong)bVar7) - uVar51 &
                                      0x7fffffff) * 2 + (ulonglong)bVar13 & 0xffffffff) << 1) +
                               (int)uVar50 + (int)((uVar50 & 0xffffffff) << 2) +
                              ((uint)bVar14 + (uint)bVar15) * -0xd) >> 1) * iVar37 +
                        ((int)((((int)(((((uVar36 - uVar53 & 0x7fffffff) * 2 - uVar25) - uVar30) +
                                        uVar49 + uVar51 & 0xffffffff) << 1) - (uint)bVar13) +
                               (uint)bVar7) * 2 + ((int)((uVar23 & 0xffffffff) << 3) - (int)uVar23)
                               + (int)(uVar48 - uVar55) + (int)((uVar48 - uVar55 & 0xffffffff) << 2)
                              + ((uint)bVar15 - (uint)bVar3) * 0xb) >> 1) * iVar43 +
                        ((int)((((((int)(((uVar36 - uVar39) - uVar30 & 0xffffffff) << 1) -
                                  (uint)bVar11) + (uint)bVar7 + (uint)bVar14) * 2 +
                                (int)(uVar58 - uVar33) + (int)((uVar58 - uVar33 & 0xffffffff) << 1))
                               - ((uint)bVar9 + (uint)bVar9 * 4)) +
                              ((uint)bVar41 * 8 - (uint)bVar41)) >> 1) * iVar26 +
                       ((int)((((uint)bVar14 * 2 + (uint)bVar6) * 2 - iVar46) - (uint)bVar11) >> 1)
                       * 0x100) * iVar54 +
                       (((int)((int)((((int)(((((uVar34 - uVar55 & 0x7fffffff) * 2 - uVar27) -
                                              uVar30) + (ulonglong)bVar7 + uVar48 & 0xffffffff) << 1
                                            ) - (uint)bVar13) + uVar51 & 0xffffffff) << 1) +
                               ((((uint)bVar15 - (uint)bVar11) - (uint)bVar8) + (uint)bVar6) * 7 +
                               ((uint)bVar14 - (uint)bVar3) * 0xb +
                              (int)(uVar49 - uVar53) + (int)((uVar49 - uVar53 & 0xffffffff) << 2))
                        >> 1) * iVar37 +
                        (((((int)((((((uVar25 - uVar49) - uVar48) - uVar34) - uVar36) + uVar55 +
                                   uVar27 + uVar53 & 0xffffffff) << 1) +
                           (int)uVar24 + (int)((uVar24 & 0xffffffff) << 1)) - (uint)bVar7) -
                         (uint)bVar12) + (uint)bVar13 + (uint)bVar5) * iVar43 +
                       (((((iStack_128 - (uint)bVar7) - (uint)bVar8) - (uint)bVar14) - (uint)bVar6)
                        + (uint)bVar11 + (uint)bVar15 + (uint)bVar3 + (uint)bVar5) * iVar26) *
                       iVar38 + (((int)((((int)(((((uVar34 - uVar39) - uVar30 & 0x7fffffff) * 2 -
                                                 uVar27) + uVar33 + uVar51 & 0xffffffff) << 1) +
                                         (int)uVar45 + (int)((uVar45 & 0xffffffff) << 1)) -
                                        ((uint)bVar10 + (uint)bVar10 * 4)) +
                                       ((uint)bVar6 * 8 - (uint)bVar6)) >> 1) * iVar37 +
                                 ((((((int)((uVar53 - uVar36 & 0xffffffff) << 1) - (uint)bVar8) -
                                    (uint)bVar15) - (uint)bVar41) - (uint)bVar12) + (uint)bVar14 +
                                  (uint)bVar4 + (uint)bVar3 + (uint)bVar5) * iVar43 +
                                ((((uint)bVar3 - (uint)bVar41) - (uint)bVar6) + (uint)bVar5) *
                                iVar26) * iVar1 +
                       (int)(((longlong)
                              ((int)((((uint)bVar15 * 2 + (uint)bVar41) * 2 - iVar46) - (uint)bVar4)
                              >> 1) * (longlong)iVar37 +
                              (longlong)
                              ((int)((((int)(uVar39 - uVar33) +
                                      (int)((uVar39 - uVar33 & 0xffffffff) << 1)) - (uint)bVar41) +
                                    (uint)bVar4) >> 1) * (longlong)iVar43 +
                              (longlong)
                              ((int)((((int)(uVar39 - uVar31) +
                                      (int)((uVar39 - uVar31 & 0xffffffff) << 1)) - (uint)bVar6) +
                                    (uint)bVar11) >> 1) * (longlong)iVar38 +
                              (longlong)((int)((uint)bVar15 - (uint)bVar41) >> 1) * (longlong)iVar26
                              + (longlong)((int)((uint)bVar14 - (uint)bVar6) >> 1) * (longlong)iVar1
                              + uVar39 * 0x100 & 0xffffffff) << 8);
              if (iVar26 >> 0x10 < 0x100) {
                bVar41 = -(char)(iVar26 >> 0x1f) - 1U & (byte)((uint)iVar26 >> 0x10);
              }
              else {
                bVar41 = 0xff;
              }
              puStack_15c[2] = bVar41;
              puVar35 = puStack_15c;
            }
            iStack_130 = iStack_130 + 1;
            puVar35 = puVar35 + 2;
            puStack_15c = puVar35;
          } while (iStack_130 < *(int *)(param_5 + 0x58));
        }
      }
      iStack_10c = iStack_10c + 1;
    } while (iStack_10c < *(int *)(param_5 + 0x5c));
  }
  dVar60 = lbl_820FC3A8;
  iStack_10c = 0;
  if (0 < *(int *)(param_5 + 0x5c)) {
    puVar40 = (undefined1 *)((int)puStack_148 + -4);
    puVar35 = (undefined1 *)((int)puStack_154 + -4);
    param_1 = param_1 * lbl_82002C40;
    param_2 = param_2 - param_1;
    puStack_154 = puVar35;
    puStack_148 = puVar40;
    do {
      dVar61 = dVar18;
      if (*(int *)(param_5 + 0x60) != 0) {
        dVar61 = (param_3 - dVar20) * dVar19;
      }
      dVar61 = dVar61 + (double)(longlong)iStack_10c * param_3 + param_4;
      iVar26 = (int)dVar61;
      iRam83236bf4 = iVar26 << 8;
      iVar1 = (int)(dVar61 * dVar21 - (double)(longlong)iRam83236bf4);
      iVar54 = iVar1 * iVar1 >> 8;
      iVar38 = iVar54 * iVar1 >> 8;
      if ((iVar26 < 1) || (*(int *)(param_5 + 0x54) + -2 <= iVar26)) {
        if ((iVar26 < 0) || (*(int *)(param_5 + 0x54) + -1 <= iVar26)) {
          if ((iVar26 < 1) || (*(int *)(param_5 + 0x54) <= iVar26)) {
            iVar26 = 0;
            if (0 < *(int *)(param_5 + 0x58)) {
              do {
                puVar35 = puVar35 + 4;
                *puVar35 = 0x80;
                iVar26 = iVar26 + 2;
                puVar40 = puVar40 + 4;
                *puVar40 = 0x80;
                puStack_154 = puVar35;
                puStack_148 = puVar40;
              } while (iVar26 < *(int *)(param_5 + 0x58));
            }
          }
          else {
            iVar54 = 0;
            dVar61 = param_2;
            if (0 < *(int *)(param_5 + 0x58)) {
              do {
                dVar61 = param_1 + dVar61;
                iVar38 = (int)(dVar61 * dVar19);
                if (iVar38 < 0) {
LAB_82ccd59c:
                  puVar35[4] = 0x80;
                  puVar40[4] = 0x80;
                }
                else {
                  uVar17 = *(uint *)(param_5 + 0x50);
                  if (iVar38 < (int)(((int)uVar17 >> 1) +
                                     (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0) + -1)) {
                    iRam83236bf4 = iVar38 << 8;
                    iVar29 = (uVar17 * iVar26 + iVar38 * 2) * 2;
                    uVar17 = (uint)(dVar61 * dVar60 - (double)(longlong)iRam83236bf4);
                    iVar37 = ((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0);
                    iVar38 = (0x100 - iVar37) - iVar1;
                    puVar35[4] = (char)((uint)*(byte *)(iVar29 + iVar28 + 4) * iVar37 +
                                        (iVar38 + iVar1) * (uint)*(byte *)(iVar29 + iVar28) >> 8);
                    puVar40[4] = (char)((uint)((byte *)(iVar29 + iVar57))[4] * iVar37 +
                                        (iVar38 + iVar1) * (uint)*(byte *)(iVar29 + iVar57) >> 8);
                  }
                  else {
                    if ((iVar38 < 1) ||
                       (uVar17 = *(uint *)(param_5 + 0x50),
                       (int)(((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0)) <=
                       iVar38)) goto LAB_82ccd59c;
                    iRam83236bf4 = iVar38 << 8;
                    iVar38 = (uVar17 * iVar26 + iVar38 * 2) * 2;
                    puVar35[4] = *(undefined1 *)(iVar38 + iVar28);
                    puVar40[4] = *(undefined1 *)(iVar38 + iVar57);
                  }
                }
                iVar54 = iVar54 + 2;
                puVar35 = puVar35 + 4;
                puVar40 = puVar40 + 4;
                puStack_154 = puVar35;
                puStack_148 = puVar40;
              } while (iVar54 < *(int *)(param_5 + 0x58));
            }
          }
        }
        else {
          iVar54 = 0;
          dVar61 = param_2;
          if (0 < *(int *)(param_5 + 0x58)) {
            do {
              dVar61 = param_1 + dVar61;
              iVar38 = (int)(dVar61 * dVar19);
              if (iVar38 < 0) {
LAB_82ccd434:
                puVar35[4] = 0x80;
                puVar40[4] = 0x80;
              }
              else {
                uVar17 = *(uint *)(param_5 + 0x50);
                if (iVar38 < (int)(((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0)
                                  + -1)) {
                  iRam83236bf4 = iVar38 << 8;
                  iVar38 = (uVar17 * iVar26 + iVar38 * 2) * 2;
                  iVar37 = iVar38 + iVar28;
                  bVar41 = *(byte *)(uVar17 * 2 + iVar37);
                  uVar2 = (uint)(dVar61 * dVar60 - (double)(longlong)iRam83236bf4);
                  iVar43 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
                  iVar46 = (0x100 - iVar43) - iVar1;
                  iVar29 = iVar38 + iVar57;
                  puVar35[4] = (char)(((int)(((((uint)*(byte *)((uVar17 + 2) * 2 + iVar37) -
                                               (uint)bVar41) - (uint)*(byte *)(iVar37 + 4)) +
                                             (uint)*(byte *)(iVar38 + iVar28)) * iVar43 * iVar1) >>
                                      8) + iVar46 * (uint)*(byte *)(iVar38 + iVar28) +
                                      (uint)*(byte *)(iVar37 + 4) * iVar43 + (uint)bVar41 * iVar1 >>
                                     8);
                  bVar41 = *(byte *)(*(int *)(param_5 + 0x50) * 2 + iVar29);
                  puVar40[4] = (char)(((int)(((((uint)*(byte *)((*(int *)(param_5 + 0x50) + 2) * 2 +
                                                               iVar29) - (uint)bVar41) -
                                              (uint)*(byte *)(iVar29 + 4)) +
                                             (uint)*(byte *)(iVar38 + iVar57)) * iVar43 * iVar1) >>
                                      8) + iVar46 * (uint)*(byte *)(iVar38 + iVar57) +
                                      (uint)*(byte *)(iVar29 + 4) * iVar43 + (uint)bVar41 * iVar1 >>
                                     8);
                }
                else {
                  if ((iVar38 < 1) ||
                     (uVar17 = *(uint *)(param_5 + 0x50),
                     (int)(((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0)) <=
                     iVar38)) goto LAB_82ccd434;
                  iRam83236bf4 = iVar38 << 8;
                  iVar29 = (uVar17 * iVar26 + iVar38 * 2) * 2;
                  uVar2 = (uint)(dVar61 * dVar60 - (double)(longlong)iRam83236bf4);
                  iVar37 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
                  iVar38 = (0x100 - iVar37) - iVar1;
                  puVar35[4] = (char)((uint)*(byte *)(uVar17 * 2 + iVar29 + iVar28) * iVar1 +
                                      (iVar38 + iVar37) * (uint)*(byte *)(iVar29 + iVar28) >> 8);
                  puVar40[4] = (char)((uint)((byte *)(iVar29 + iVar57))
                                            [*(int *)(param_5 + 0x50) * 2] * iVar1 +
                                      (iVar38 + iVar37) * (uint)*(byte *)(iVar29 + iVar57) >> 8);
                }
              }
              iVar54 = iVar54 + 2;
              puVar35 = puVar35 + 4;
              puVar40 = puVar40 + 4;
              puStack_154 = puVar35;
              puStack_148 = puVar40;
            } while (iVar54 < *(int *)(param_5 + 0x58));
          }
        }
      }
      else {
        iStack_140 = 0;
        dVar61 = param_2;
        if (0 < *(int *)(param_5 + 0x58)) {
          do {
            dVar61 = param_1 + dVar61;
            iVar29 = (int)(dVar61 * dVar19);
            if ((iVar29 < 1) ||
               (uVar17 = *(uint *)(param_5 + 0x50),
               (int)(((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0) + -2) <=
               iVar29)) {
              if ((iVar29 < 0) ||
                 (uVar17 = *(uint *)(param_5 + 0x50),
                 (int)(((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0) + -1) <=
                 iVar29)) {
                if ((iVar29 < 1) ||
                   (uVar17 = *(uint *)(param_5 + 0x50),
                   (int)(((int)uVar17 >> 1) + (uint)((int)uVar17 < 0 && (uVar17 & 1) != 0)) <=
                   iVar29)) {
                  puVar35[4] = 0x80;
                  puVar40[4] = 0x80;
                }
                else {
                  iRam83236bf4 = iVar29 << 8;
                  iVar37 = (uVar17 * iVar26 + iVar29 * 2) * 2;
                  uVar2 = (uint)(dVar61 * dVar60 - (double)(longlong)iRam83236bf4);
                  iVar43 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
                  iVar29 = (0x100 - iVar43) - iVar1;
                  puVar35[4] = (char)((uint)*(byte *)(uVar17 * 2 + iVar37 + iVar28) * iVar1 +
                                      (iVar29 + iVar43) * (uint)*(byte *)(iVar37 + iVar28) >> 8);
                  puVar40[4] = (char)((uint)((byte *)(iVar37 + iVar57))
                                            [*(int *)(param_5 + 0x50) * 2] * iVar1 +
                                      (iVar29 + iVar43) * (uint)*(byte *)(iVar37 + iVar57) >> 8);
                }
              }
              else {
                iRam83236bf4 = iVar29 << 8;
                iVar29 = (uVar17 * iVar26 + iVar29 * 2) * 2;
                iVar37 = iVar29 + iVar28;
                bVar41 = *(byte *)(uVar17 * 2 + iVar37);
                pbVar32 = (byte *)(iVar29 + iVar57);
                uVar2 = (uint)(dVar61 * dVar60 - (double)(longlong)iRam83236bf4);
                iVar43 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
                iVar46 = (0x100 - iVar43) - iVar1;
                puVar35[4] = (char)(((int)(((((uint)*(byte *)((uVar17 + 2) * 2 + iVar37) -
                                             (uint)bVar41) - (uint)*(byte *)(iVar37 + 4)) +
                                           (uint)*(byte *)(iVar29 + iVar28)) * iVar43 * iVar1) >> 8)
                                    + iVar46 * (uint)*(byte *)(iVar29 + iVar28) +
                                    (uint)*(byte *)(iVar37 + 4) * iVar43 + (uint)bVar41 * iVar1 >> 8
                                   );
                puVar40[4] = (char)(((int)(((((uint)pbVar32[(*(int *)(param_5 + 0x50) + 2) * 2] -
                                             (uint)pbVar32[*(int *)(param_5 + 0x50) * 2]) -
                                            (uint)pbVar32[4]) + (uint)*pbVar32) * iVar43 * iVar1) >>
                                    8) + iVar46 * (uint)*pbVar32 + (uint)pbVar32[4] * iVar43 +
                                    (uint)pbVar32[*(int *)(param_5 + 0x50) * 2] * iVar1 >> 8);
              }
            }
            else {
              iRam83236bf4 = iVar29 << 8;
              iVar42 = (uVar17 * iVar26 + iVar29 * 2) * 2;
              iVar29 = iVar42 + iVar28;
              pbVar44 = (byte *)(iVar29 + (uVar17 & 0x7fffffff) * -2);
              bVar11 = *(byte *)(iVar42 + iVar28);
              uVar39 = (ulonglong)bVar11;
              bVar12 = *(byte *)((uVar17 + 2) * 2 + iVar29);
              uVar51 = (ulonglong)bVar12;
              pbVar32 = (byte *)(uVar17 * 4 + iVar29);
              bVar41 = pbVar44[-4];
              uVar30 = (ulonglong)bVar41;
              bVar13 = *(byte *)((uVar17 - 2) * 2 + iVar29);
              uVar53 = (ulonglong)bVar13;
              bVar3 = *(byte *)(iVar29 + -4);
              uVar36 = (ulonglong)bVar3;
              bVar4 = *pbVar44;
              uVar34 = (ulonglong)bVar4;
              bVar5 = pbVar44[4];
              uVar58 = (ulonglong)bVar5;
              bVar6 = pbVar32[-4];
              uVar50 = (ulonglong)bVar6;
              bVar7 = *pbVar32;
              uVar59 = (ulonglong)bVar7;
              bVar8 = pbVar44[8];
              uVar49 = (ulonglong)bVar8;
              uVar45 = (ulonglong)pbVar32[4];
              bVar9 = *(byte *)(iVar29 + 8);
              uVar56 = (ulonglong)bVar9;
              bVar14 = *(byte *)((uVar17 + 2) * 4 + iVar29);
              bVar10 = *(byte *)(iVar29 + 4);
              uVar33 = (ulonglong)bVar10;
              uVar27 = uVar59 + (uVar36 + uVar34) * -2 + uVar56;
              uVar48 = (ulonglong)*(byte *)((uVar17 + 4) * 2 + iVar29);
              uVar2 = (uint)(dVar61 * dVar60 - (double)(longlong)iRam83236bf4);
              uVar22 = ((uVar39 * 2 + uVar53 + uVar58) * 2 - uVar45) - uVar48;
              bVar15 = *(byte *)(uVar17 * 2 + iVar29);
              uVar31 = (ulonglong)bVar15;
              iVar46 = ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
              iVar29 = iVar46 * iVar46 >> 8;
              iVar37 = iVar29 * iVar46 >> 8;
              iVar43 = (uint)bVar11 + (uint)bVar11 * 4;
              uVar23 = ((uVar31 - uVar51) - uVar56) + uVar36;
              iStack_128 = (int)(((((uVar34 - uVar39) - uVar30 & 0x7fffffff) * 2 - uVar59) + uVar50
                                  + uVar31 & 0x7fffffff) << 1);
              uVar24 = (((uint)bVar10 - (uint)bVar7) - (uint)bVar12) + uVar34;
              uVar25 = uVar51 - uVar31;
              uVar55 = (uVar39 - uVar33) + uVar25;
              iVar43 = (((int)(((int)((uVar27 & 0xffffffff) << 3) - (int)uVar27) +
                               (int)(((((uVar51 + uVar30) * 2 - uVar50) - uVar49 & 0x7fffffff) * 2 +
                                      (ulonglong)bVar14 & 0xffffffff) << 1) +
                               (int)uVar22 + (int)((uVar22 & 0xffffffff) << 2) +
                              ((uint)bVar15 + (uint)bVar10) * -0xd) >> 1) * iVar29 +
                        ((int)((int)(((((((uVar34 - uVar58 & 0x7fffffff) * 2 - uVar59) - uVar30) +
                                        uVar45 + uVar49 & 0x7fffffff) * 2 - (ulonglong)bVar14) +
                                      uVar50 & 0xffffffff) << 1) +
                               ((int)((uVar23 & 0xffffffff) << 3) - (int)uVar23) +
                               (int)(uVar48 - uVar53) + (int)((uVar48 - uVar53 & 0xffffffff) << 2) +
                              ((uint)bVar10 - (uint)bVar11) * 0xb) >> 1) * iVar37 +
                        ((int)(((iStack_128 +
                                (int)(uVar51 - uVar33) + (int)((uVar51 - uVar33 & 0xffffffff) << 1))
                               - ((uint)bVar13 + (uint)bVar13 * 4)) +
                              ((uint)bVar3 * 8 - (uint)bVar3)) >> 1) * iVar46 +
                       ((int)((((uint)bVar15 * 2 + (uint)bVar4) * 2 - (uint)bVar7) - iVar43) >> 1) *
                       0x100) * iVar54 +
                       (((int)((((int)(((((uVar36 - uVar53 & 0x7fffffff) * 2 - uVar56) - uVar30) +
                                        uVar50 + uVar48 & 0xffffffff) << 1) - (uint)bVar14) +
                               (uint)bVar8) * 2 + ((int)((uVar24 & 0xffffffff) << 3) - (int)uVar24)
                               + ((uint)bVar15 - (uint)bVar11) * 0xb +
                              (int)(uVar45 - uVar58) + (int)((uVar45 - uVar58 & 0xffffffff) << 2))
                        >> 1) * iVar29 +
                        (((((int)((((((uVar59 - uVar45) - uVar48) - uVar36) - uVar34) + uVar53 +
                                   uVar56 + uVar58 & 0xffffffff) << 1) +
                           (int)uVar55 + (int)((uVar55 & 0xffffffff) << 1)) - (uint)bVar6) -
                         (uint)bVar8) + (uint)bVar14 + (uint)bVar41) * iVar37 +
                       ((((((int)((uVar53 - uVar36 & 0xffffffff) << 1) - (uint)bVar6) - (uint)bVar12
                          ) - (uint)bVar15) - (uint)bVar4) + (uint)bVar7 + (uint)bVar10 +
                        (uint)bVar11 + (uint)bVar41) * iVar46) * iVar38 +
                       (((int)(((int)(((((uVar36 - uVar39) - uVar30 & 0x7fffffff) * 2 - uVar56) +
                                       uVar33 + uVar49 & 0xffffffff) << 1) -
                               ((uint)bVar5 + (uint)bVar5 * 4)) + ((uint)bVar4 * 8 - (uint)bVar4) +
                              (int)uVar25 + (int)((uVar25 & 0xffffffff) << 1)) >> 1) * iVar29 +
                        (((((((uint)bVar5 - (uint)bVar4) * 2 - (uint)bVar12) - (uint)bVar10) -
                          (uint)bVar3) - (uint)bVar8) + (uint)bVar15 + (uint)bVar9 + (uint)bVar11 +
                        (uint)bVar41) * iVar37 +
                       ((((uint)bVar11 - (uint)bVar3) - (uint)bVar4) + (uint)bVar41) * iVar46) *
                       iVar1 + (int)(((longlong)
                                      ((int)((((uint)bVar10 * 2 + (uint)bVar3) * 2 - (uint)bVar9) -
                                            iVar43) >> 1) * (longlong)iVar29 +
                                      (longlong)
                                      ((int)((((int)(uVar39 - uVar33) +
                                              (int)((uVar39 - uVar33 & 0xffffffff) << 1)) -
                                             (uint)bVar3) + (uint)bVar9) >> 1) * (longlong)iVar37 +
                                      (longlong)
                                      ((int)((((int)(uVar39 - uVar31) +
                                              (int)((uVar39 - uVar31 & 0xffffffff) << 1)) -
                                             (uint)bVar4) + (uint)bVar7) >> 1) * (longlong)iVar38 +
                                      (longlong)((int)((uint)bVar15 - (uint)bVar4) >> 1) *
                                      (longlong)iVar1 +
                                      (longlong)((int)((uint)bVar10 - (uint)bVar3) >> 1) *
                                      (longlong)iVar46 + uVar39 * 0x100 & 0xffffffff) << 8);
              if (iVar43 >> 0x10 < 0x100) {
                bVar41 = -(char)(iVar43 >> 0x1f) - 1U & (byte)((uint)iVar43 >> 0x10);
              }
              else {
                bVar41 = 0xff;
              }
              pbVar32 = (byte *)(iVar42 + iVar57);
              puStack_154[4] = bVar41;
              bVar41 = pbVar32[-4];
              uVar33 = (ulonglong)bVar41;
              bVar3 = pbVar32[4];
              uVar27 = (ulonglong)bVar3;
              iVar43 = *(int *)(param_5 + 0x50);
              bVar4 = *pbVar32;
              uVar34 = (ulonglong)bVar4;
              bVar5 = pbVar32[8];
              uVar55 = (ulonglong)bVar5;
              pbVar44 = pbVar32 + iVar43 * -2;
              bVar13 = pbVar32[(iVar43 + 2) * 2];
              uVar50 = (ulonglong)bVar13;
              pbVar47 = pbVar32 + iVar43 * 4;
              bVar14 = pbVar32[(iVar43 + 2) * 4];
              bVar6 = *pbVar44;
              uVar31 = (ulonglong)bVar6;
              bVar15 = pbVar32[(iVar43 + -2) * 2];
              uVar51 = (ulonglong)bVar15;
              bVar7 = pbVar44[-4];
              uVar25 = (ulonglong)bVar7;
              bVar8 = pbVar44[4];
              uVar53 = (ulonglong)bVar8;
              bVar9 = pbVar47[-4];
              uVar49 = (ulonglong)bVar9;
              uVar45 = (ulonglong)pbVar32[(iVar43 + 4) * 2];
              bVar16 = pbVar32[iVar43 * 2];
              uVar30 = (ulonglong)bVar16;
              bVar10 = pbVar44[8];
              uVar48 = (ulonglong)bVar10;
              bVar11 = *pbVar47;
              uVar58 = (ulonglong)bVar11;
              bVar12 = pbVar47[4];
              uVar22 = uVar58 + (uVar33 + uVar31) * -2 + uVar55;
              uVar36 = ((uVar34 * 2 + uVar51 + uVar53) * 2 - (ulonglong)bVar12) - uVar45;
              uVar23 = ((uVar30 - uVar50) - uVar55) + uVar33;
              iVar42 = (uint)bVar4 + (uint)bVar4 * 4;
              uVar39 = uVar50 - uVar30;
              uVar24 = (uVar34 - uVar27) + uVar39;
              iVar29 = (((int)(((int)((uVar22 & 0xffffffff) << 3) - (int)uVar22) +
                               (int)(((((uVar50 + uVar25) * 2 - uVar49) - uVar48 & 0x7fffffff) * 2 +
                                      (ulonglong)bVar14 & 0xffffffff) << 1) +
                               (int)uVar36 + (int)((uVar36 & 0xffffffff) << 2) +
                              ((uint)bVar16 + (uint)bVar3) * -0xd) >> 1) * iVar29 +
                        ((int)((int)(((((((uVar31 - uVar53 & 0x7fffffff) * 2 - uVar58) - uVar25) +
                                        (ulonglong)bVar12 + uVar48 & 0x7fffffff) * 2 -
                                      (ulonglong)bVar14) + uVar49 & 0xffffffff) << 1) +
                               ((int)((uVar23 & 0xffffffff) << 3) - (int)uVar23) +
                               (int)(uVar45 - uVar51) + (int)((uVar45 - uVar51 & 0xffffffff) << 2) +
                              ((uint)bVar3 - (uint)bVar4) * 0xb) >> 1) * iVar37 +
                        ((int)((((int)(((((uVar31 - uVar34) - uVar25 & 0x7fffffff) * 2 - uVar58) +
                                        uVar49 + uVar30 & 0xffffffff) << 1) +
                                (int)(uVar50 - uVar27) + (int)((uVar50 - uVar27 & 0xffffffff) << 1))
                               - ((uint)bVar15 + (uint)bVar15 * 4)) +
                              ((uint)bVar41 * 8 - (uint)bVar41)) >> 1) * iVar46 +
                       ((int)((((uint)bVar16 * 2 + (uint)bVar6) * 2 - (uint)bVar11) - iVar42) >> 1)
                       * 0x100) * iVar54 +
                       (((int)((int)((((int)(((((uVar33 - uVar51 & 0x7fffffff) * 2 - uVar55) -
                                              uVar25) + uVar49 + uVar45 & 0xffffffff) << 1) -
                                      (uint)bVar14) + uVar48 & 0xffffffff) << 1) +
                               ((((uint)bVar3 - (uint)bVar11) - (uint)bVar13) + (uint)bVar6) * 7 +
                               ((uint)bVar16 - (uint)bVar4) * 0xb + ((uint)bVar12 - (uint)bVar8) * 5
                              ) >> 1) * iVar29 +
                        (((((int)((((((((uint)bVar11 - (uint)bVar12) -
                                      (uint)pbVar32[(iVar43 + 4) * 2]) - (uint)bVar41) - (uint)bVar6
                                    ) + (uint)bVar15 + (uint)bVar5) + uVar53 & 0xffffffff) << 1) +
                           (int)uVar24 + (int)((uVar24 & 0xffffffff) << 1)) - (uint)bVar9) -
                         (uint)bVar10) + (uint)bVar14 + (uint)bVar7) * iVar37 +
                       ((((((int)((uVar51 - uVar33 & 0xffffffff) << 1) - (uint)bVar9) - (uint)bVar13
                          ) - (uint)bVar16) - (uint)bVar6) + (uint)bVar11 + (uint)bVar3 +
                        (uint)bVar4 + (uint)bVar7) * iVar46) * iVar38 +
                       (((int)(((int)(((((ulonglong)(((uint)bVar41 - (uint)bVar4) - (uint)bVar7) &
                                        0x7fffffff) * 2 - uVar55) + uVar27 + uVar48 & 0xffffffff) <<
                                     1) - ((uint)bVar8 + (uint)bVar8 * 4)) +
                               ((uint)bVar6 * 8 - (uint)bVar6) +
                              (int)uVar39 + (int)((uVar39 & 0xffffffff) << 1)) >> 1) * iVar29 +
                        ((((((int)((uVar53 - uVar31 & 0xffffffff) << 1) - (uint)bVar13) -
                           (uint)bVar3) - (uint)bVar41) - (uint)bVar10) + (uint)bVar16 + (uint)bVar5
                         + (uint)bVar4 + (uint)bVar7) * iVar37 +
                       ((((uint)bVar4 - (uint)bVar41) - (uint)bVar6) + (uint)bVar7) * iVar46) *
                       iVar1 + (int)(((longlong)
                                      ((int)((((uint)bVar3 * 2 + (uint)bVar41) * 2 - (uint)bVar5) -
                                            iVar42) >> 1) * (longlong)iVar29 +
                                      (longlong)
                                      ((int)((((int)(uVar34 - uVar27) +
                                              (int)((uVar34 - uVar27 & 0xffffffff) << 1)) -
                                             (uint)bVar41) + (uint)bVar5) >> 1) * (longlong)iVar37 +
                                      (longlong)
                                      ((int)((((int)(uVar34 - uVar30) +
                                              (int)((uVar34 - uVar30 & 0xffffffff) << 1)) -
                                             (uint)bVar6) + (uint)bVar11) >> 1) * (longlong)iVar38 +
                                      (longlong)((int)((uint)bVar16 - (uint)bVar6) >> 1) *
                                      (longlong)iVar1 +
                                      (longlong)((int)((uint)bVar3 - (uint)bVar41) >> 1) *
                                      (longlong)iVar46 + uVar34 * 0x100 & 0xffffffff) << 8);
              if (iVar29 >> 0x10 < 0x100) {
                bVar41 = -(char)(iVar29 >> 0x1f) - 1U & (byte)((uint)iVar29 >> 0x10);
              }
              else {
                bVar41 = 0xff;
              }
              puStack_148[4] = bVar41;
              puVar40 = puStack_148;
              puVar35 = puStack_154;
            }
            puVar35 = puVar35 + 4;
            iStack_140 = iStack_140 + 2;
            puVar40 = puVar40 + 4;
            puStack_154 = puVar35;
            puStack_148 = puVar40;
          } while (iStack_140 < *(int *)(param_5 + 0x58));
        }
      }
      iStack_10c = iStack_10c + 1;
    } while (iStack_10c < *(int *)(param_5 + 0x5c));
  }
  return;
}

