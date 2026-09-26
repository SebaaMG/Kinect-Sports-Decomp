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
extern int fn_82F68918();
extern int fn_82F68CC0();
extern int fn_82F6B2A8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_820D8088;
extern unsigned int uStack_ec;


undefined8 fn_82C696B8(double param_1,double param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  byte *pbVar31;
  int iVar32;
  byte *pbVar33;
  undefined1 *puVar34;
  uint uVar37;
  int iVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  byte *pbVar42;
  ulonglong uVar35;
  longlong lVar36;
  undefined1 *puVar43;
  byte *pbVar44;
  int iVar45;
  int iVar46;
  ulonglong uVar47;
  byte *pbVar48;
  longlong lVar49;
  uint uVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 *puStack_10c;
  undefined1 *puStack_108;
  uint uStack_ec;
  
  if (param_3 == 0) {
    uVar21 = 0xfffffffffffffffd;
  }
  else {
    iVar4 = *(int *)(param_3 + 0x3c30);
    iVar5 = *(int *)(param_3 + 0x3c34);
    iVar6 = *(int *)(param_3 + 0x14) >> 1;
    iVar7 = *(int *)(param_3 + 0x3c20) >> 1;
    dVar51 = -param_1;
    if (-param_1 < 0.0) {
      dVar51 = lbl_82005710;
    }
    dVar56 = lbl_82005710;
    dVar52 = (double)fn_82F6B2A8(dVar51);
    dVar51 = (double)(longlong)(int)dVar52;
    if ((double)(longlong)*(int *)(param_3 + 0x3c20) < (double)(longlong)(int)dVar52) {
      dVar51 = (double)(longlong)*(int *)(param_3 + 0x3c20);
    }
    dVar52 = (double)fn_82F68918(dVar51);
    dVar55 = (double)(longlong)*(int *)(param_3 + 0x14) - param_1;
    dVar51 = (double)(longlong)*(int *)(param_3 + 0x3c20);
    if (dVar55 <= (double)(longlong)*(int *)(param_3 + 0x3c20)) {
      dVar51 = dVar55;
    }
    dVar55 = (double)fn_82F68918(dVar51);
    dVar51 = (double)(longlong)(int)dVar55;
    if ((double)(longlong)(int)dVar55 < 0.0) {
      dVar51 = dVar56;
    }
    dVar55 = (double)fn_82F6B2A8(dVar51);
    dVar51 = -param_2;
    if (-param_2 < 0.0) {
      dVar51 = dVar56;
    }
    dVar53 = (double)fn_82F6B2A8(dVar51);
    dVar51 = (double)(longlong)*(int *)(param_3 + 0x3c24);
    if ((double)(longlong)(int)dVar53 <= (double)(longlong)*(int *)(param_3 + 0x3c24)) {
      dVar51 = (double)(longlong)(int)dVar53;
    }
    dVar53 = (double)fn_82F68918(dVar51);
    dVar51 = (double)(longlong)*(int *)(param_3 + 0x3c1c) - param_2;
    if ((double)(longlong)*(int *)(param_3 + 0x3c24) < dVar51) {
      dVar51 = (double)(longlong)*(int *)(param_3 + 0x3c24);
    }
    dVar54 = (double)fn_82F68918(dVar51);
    uVar37 = (int)dVar52 + 1;
    uVar16 = uVar37 & 0xfffffffe;
    uVar17 = (int)dVar55 & 0xfffffffe;
    uVar18 = (ulonglong)(uint)(int)dVar53 + 1 & 0xfffffffe;
    dVar51 = (double)(longlong)(int)dVar54;
    if ((double)(longlong)(int)dVar54 < 0.0) {
      dVar51 = dVar56;
    }
    dVar51 = (double)fn_82F6B2A8(dVar51);
    uVar47 = (ulonglong)(uint)(int)dVar51 & 0xfffffffe;
    uStack_ec = (uint)uVar47;
    if ((int)uStack_ec < 2) {
      uVar47 = 2;
      uStack_ec = 2;
    }
    puStack_10c = *(undefined1 **)(param_3 + 0x3c3c);
    puStack_108 = *(undefined1 **)(param_3 + 0x3c40);
    uVar8 = (int)uVar37 >> 1;
    pbVar44 = *(byte **)(param_3 + 0x3c38);
    iVar24 = (int)dVar55 >> 1;
    uVar22 = -((int)(uVar17 - 2) >> 0x1f) - 1U & uVar17 - 2;
    iVar38 = (uVar17 - uVar16) + -2;
    iVar29 = (int)uVar18;
    uVar27 = (uVar37 & 0x1fffffe) * 0x80 - (int)(param_1 * lbl_820D8088);
    iVar9 = (int)uVar27 >> 7;
    uVar14 = uVar27 & 0x7f;
    uVar25 = ((ulonglong)(uint)(int)dVar53 + 1 & 0x1fffffe) * 0x80 -
             (ulonglong)(uint)(int)(param_2 * lbl_820D8088);
    uVar25 = ((uVar25 & 0xffffffff) >> 0x1f) - 1 & uVar25;
    uVar26 = (uint)uVar25;
    uVar37 = (int)uVar26 >> 7;
    iVar10 = (int)uVar27 >> 8;
    uVar15 = uVar26 & 0x7f;
    uVar19 = (int)uVar27 >> 1 & 0x7f;
    uVar39 = -((int)(iVar24 - 1U) >> 0x1f) - 1U & iVar24 - 1U;
    uVar20 = (int)uVar26 >> 1 & 0x7f;
    iVar30 = (iVar24 - uVar8) + -1;
    iVar45 = (0x80 - uVar15) - uVar14;
    iVar46 = (0x80 - uVar19) - uVar20;
    iVar28 = 0;
    if (0 < iVar29) {
      do {
        iVar40 = 0;
        if (0 < *(int *)(param_3 + 0x3c20)) {
          pbVar31 = pbVar44 + -1;
          do {
            iVar40 = iVar40 + 1;
            pbVar31 = pbVar31 + 1;
            *pbVar31 = 0;
          } while (iVar40 < *(int *)(param_3 + 0x3c20));
        }
        if (0 < iVar7) {
          puVar34 = puStack_108;
          iVar40 = iVar7;
          do {
            puVar34[(int)puStack_10c - (int)puStack_108] = 0x80;
            *puVar34 = 0x80;
            puVar34 = puVar34 + 1;
            iVar40 = iVar40 + -1;
          } while (iVar40 != 0);
        }
        iVar40 = *(int *)(param_3 + 0x3c20);
        puStack_10c = puStack_10c + iVar7;
        puStack_108 = puStack_108 + iVar7;
        iVar32 = 0;
        iVar41 = iVar40;
        if (0 < iVar40) {
          pbVar31 = pbVar44 + iVar40 + -1;
          do {
            pbVar31 = pbVar31 + 1;
            *pbVar31 = 0;
            iVar32 = iVar32 + 1;
            iVar41 = *(int *)(param_3 + 0x3c20);
          } while (iVar32 < iVar41);
        }
        iVar28 = iVar28 + 2;
        pbVar44 = pbVar44 + iVar41 + iVar40;
      } while (iVar28 < iVar29);
    }
    lVar49 = uVar47 - 2;
    uVar47 = uVar18;
    if (iVar29 < (int)lVar49) {
      do {
        iVar28 = (int)uVar47 - iVar29;
        pbVar48 = (byte *)((iVar28 + uVar37) * *(int *)(param_3 + 0x14) + *(int *)(param_3 + 0x3c2c)
                          + iVar9);
        pbVar31 = pbVar44;
        if (0 < (int)uVar16) {
          pbVar31 = pbVar44 + -1;
          for (uVar50 = uVar16; uVar50 != 0; uVar50 = uVar50 - 1) {
            pbVar31 = pbVar31 + 1;
            *pbVar31 = 0x10;
          }
          pbVar31 = pbVar44 + uVar16;
        }
        pbVar33 = pbVar48 + *(int *)(param_3 + 0x14);
        if (0 < iVar38) {
          if ((uVar27 & 0x7f) == 0) {
            if ((uVar25 & 0x7f) == 0) {
              fn_82F68CC0(pbVar31,pbVar48,iVar38);
              pbVar31 = pbVar31 + iVar38;
            }
            else {
              iVar40 = (int)pbVar48 - (int)pbVar31;
              pbVar33 = pbVar33 + -1;
              iVar41 = iVar38;
              do {
                pbVar33 = pbVar33 + 1;
                *pbVar31 = (byte)((int)((uint)pbVar31[iVar40] * iVar45 + *pbVar33 * uVar15) >> 7);
                pbVar31 = pbVar31 + 1;
                iVar41 = iVar41 + -1;
              } while (iVar41 != 0);
            }
          }
          else {
            iVar40 = iVar38;
            pbVar42 = pbVar48;
            if ((uVar25 & 0x7f) == 0) {
              do {
                bVar1 = *pbVar42;
                pbVar42 = pbVar42 + 1;
                *pbVar31 = (byte)((int)(*pbVar42 * uVar14 + (uint)bVar1 * iVar45) >> 7);
                pbVar31 = pbVar31 + 1;
                iVar40 = iVar40 + -1;
              } while (iVar40 != 0);
            }
            else {
              do {
                bVar1 = *pbVar33;
                pbVar33 = pbVar33 + 1;
                bVar3 = *pbVar42;
                pbVar42 = pbVar42 + 1;
                *pbVar31 = (byte)((int)(((int)(((((uint)*pbVar33 - (uint)bVar1) - (uint)*pbVar42) +
                                               (uint)bVar3) * uVar15 * uVar14) >> 7) +
                                        (uint)bVar3 * iVar45 + bVar1 * uVar15 + *pbVar42 * uVar14)
                                 >> 7);
                pbVar31 = pbVar31 + 1;
                iVar40 = iVar40 + -1;
              } while (iVar40 != 0);
            }
          }
        }
        if (((int)uVar16 <= (int)uVar22) && ((int)uVar22 < (int)uVar17)) {
          iVar40 = uVar17 - uVar22;
          uVar50 = uVar22;
          do {
            iVar41 = uVar50 - uVar16;
            uVar50 = uVar50 + 1;
            *pbVar31 = pbVar48[iVar41];
            pbVar31 = pbVar31 + 1;
            iVar40 = iVar40 + -1;
          } while (iVar40 != 0);
        }
        if ((int)uVar17 < *(int *)(param_3 + 0x3c20)) {
          pbVar31 = pbVar31 + -1;
          uVar50 = uVar17;
          do {
            uVar50 = uVar50 + 1;
            pbVar31 = pbVar31 + 1;
            *pbVar31 = 0x10;
          } while ((int)uVar50 < *(int *)(param_3 + 0x3c20));
        }
        iVar28 = ((iVar28 >> 1) + ((int)uVar26 >> 8)) * iVar6 + iVar10;
        uVar35 = (ulonglong)uVar8;
        puVar34 = puStack_10c;
        puVar43 = puStack_108;
        if (0 < (int)uVar8) {
          do {
            *puVar34 = 0x80;
            puVar34 = puVar34 + 1;
            *puVar43 = 0x80;
            puVar43 = puVar43 + 1;
            uVar35 = uVar35 - 1;
          } while (uVar35 != 0);
        }
        pbVar31 = (byte *)(iVar28 + iVar5);
        pbVar48 = (byte *)(iVar28 + iVar4);
        if (uVar19 == 0) {
          if (uVar20 == 0) {
            if (0 < iVar30) {
              fn_82F68CC0(puVar34,pbVar48,iVar30);
              fn_82F68CC0(puVar43,pbVar31,iVar30);
              puVar34 = puVar34 + iVar30;
              puVar43 = puVar43 + iVar30;
            }
          }
          else if (0 < iVar30) {
            iVar40 = (int)pbVar48 - (int)puVar43;
            pbVar31 = pbVar48 + iVar6;
            pbVar48 = pbVar48 + (iVar5 - iVar4) + -1;
            iVar41 = iVar30;
            do {
              bVar3 = pbVar31[iVar5 - iVar4];
              pbVar48 = pbVar48 + 1;
              bVar1 = *pbVar48;
              *puVar34 = (char)((int)((uint)(byte)puVar43[iVar40] * iVar46 + *pbVar31 * uVar20) >> 7
                               );
              pbVar31 = pbVar31 + 1;
              *puVar43 = (char)((int)((uint)bVar1 * iVar46 + bVar3 * uVar20) >> 7);
              puVar34 = puVar34 + 1;
              puVar43 = puVar43 + 1;
              iVar41 = iVar41 + -1;
            } while (iVar41 != 0);
          }
        }
        else if (uVar20 == 0) {
          iVar40 = iVar30;
          if (0 < iVar30) {
            do {
              bVar1 = *pbVar48;
              bVar3 = *pbVar31;
              pbVar48 = pbVar48 + 1;
              pbVar31 = pbVar31 + 1;
              bVar2 = *pbVar31;
              *puVar34 = (char)((int)(*pbVar48 * uVar19 + (uint)bVar1 * iVar46) >> 7);
              puVar34 = puVar34 + 1;
              *puVar43 = (char)((int)((uint)bVar3 * iVar46 + bVar2 * uVar19) >> 7);
              puVar43 = puVar43 + 1;
              iVar40 = iVar40 + -1;
            } while (iVar40 != 0);
          }
        }
        else if (0 < iVar30) {
          pbVar33 = pbVar31 + iVar6;
          pbVar42 = pbVar48 + iVar6;
          iVar40 = iVar30;
          do {
            bVar1 = *pbVar42;
            pbVar11 = pbVar48 + iVar6 + 1;
            pbVar12 = pbVar42 + (1 - iVar6);
            bVar3 = *pbVar48;
            pbVar48 = pbVar48 + 1;
            pbVar42 = pbVar42 + 1;
            *puVar34 = (char)((int)(((int)(((((uint)*pbVar11 - (uint)bVar1) - (uint)*pbVar12) +
                                           (uint)bVar3) * uVar19 * uVar20) >> 7) +
                                    (uint)bVar3 * iVar46 + *pbVar12 * uVar19 + bVar1 * uVar20) >> 7)
            ;
            puVar34 = puVar34 + 1;
            bVar1 = *pbVar31;
            pbVar11 = pbVar31 + iVar6 + 1;
            pbVar31 = pbVar31 + 1;
            bVar3 = *pbVar33;
            pbVar12 = pbVar33 + (1 - iVar6);
            pbVar33 = pbVar33 + 1;
            *puVar43 = (char)((int)(((int)(((((uint)*pbVar11 - (uint)bVar3) - (uint)*pbVar12) +
                                           (uint)bVar1) * uVar19 * uVar20) >> 7) +
                                    (uint)bVar1 * iVar46 + *pbVar12 * uVar19 + bVar3 * uVar20) >> 7)
            ;
            puVar43 = puVar43 + 1;
            iVar40 = iVar40 + -1;
          } while (iVar40 != 0);
        }
        if (((int)uVar8 <= (int)uVar39) && ((int)uVar39 < iVar24)) {
          iVar40 = iVar24 - uVar39;
          uVar50 = uVar39;
          do {
            *puVar34 = *(undefined1 *)(uVar50 + (iVar28 - uVar8) + iVar4);
            puVar34 = puVar34 + 1;
            puVar13 = (undefined1 *)(uVar50 + (iVar28 - uVar8) + iVar5);
            uVar50 = uVar50 + 1;
            *puVar43 = *puVar13;
            puVar43 = puVar43 + 1;
            iVar40 = iVar40 + -1;
          } while (iVar40 != 0);
        }
        if (iVar24 < iVar7) {
          iVar40 = iVar7 - iVar24;
          iVar28 = iVar24;
          do {
            puVar34[iVar28 - iVar24] = 0x80;
            puVar43[iVar28 - iVar24] = 0x80;
            iVar28 = iVar28 + 1;
            iVar40 = iVar40 + -1;
          } while (iVar40 != 0);
        }
        pbVar44 = pbVar44 + *(int *)(param_3 + 0x3c20);
        puStack_10c = puStack_10c + iVar7;
        puStack_108 = puStack_108 + iVar7;
        pbVar48 = (byte *)(((((int)uVar47 + 1) - iVar29) + uVar37) * *(int *)(param_3 + 0x14) +
                           *(int *)(param_3 + 0x3c2c) + iVar9);
        pbVar31 = pbVar44;
        if (0 < (int)uVar16) {
          pbVar31 = pbVar44 + -1;
          for (uVar50 = uVar16; uVar50 != 0; uVar50 = uVar50 - 1) {
            pbVar31 = pbVar31 + 1;
            *pbVar31 = 0x10;
          }
          pbVar31 = pbVar44 + uVar16;
        }
        pbVar33 = pbVar48 + *(int *)(param_3 + 0x14);
        if ((uVar27 & 0x7f) == 0) {
          if ((uVar25 & 0x7f) == 0) {
            if (0 < iVar38) {
              fn_82F68CC0(pbVar31,pbVar48,iVar38);
              pbVar31 = pbVar31 + iVar38;
            }
          }
          else if (iVar38 != 0) {
            pbVar33 = pbVar33 + -1;
            pbVar42 = pbVar48 + -1;
            iVar28 = iVar38;
            do {
              pbVar42 = pbVar42 + 1;
              pbVar33 = pbVar33 + 1;
              *pbVar31 = (byte)((int)((uint)*pbVar42 * iVar45 + *pbVar33 * uVar15) >> 7);
              pbVar31 = pbVar31 + 1;
              iVar28 = iVar28 + -1;
            } while (iVar28 != 0);
          }
        }
        else {
          iVar28 = iVar38;
          pbVar42 = pbVar48;
          if ((uVar25 & 0x7f) == 0) {
            for (; iVar28 != 0; iVar28 = iVar28 + -1) {
              *pbVar31 = (byte)((int)(pbVar42[1] * uVar14 + (uint)*pbVar42 * iVar45) >> 7);
              pbVar31 = pbVar31 + 1;
              pbVar42 = pbVar42 + 1;
            }
          }
          else {
            for (; iVar28 != 0; iVar28 = iVar28 + -1) {
              bVar1 = *pbVar33;
              pbVar33 = pbVar33 + 1;
              bVar3 = pbVar42[1];
              *pbVar31 = (byte)((int)(((int)(((((uint)*pbVar33 - (uint)bVar1) - (uint)bVar3) +
                                             (uint)*pbVar42) * uVar15 * uVar14) >> 7) +
                                      (uint)*pbVar42 * iVar45 + bVar1 * uVar15 + bVar3 * uVar14) >>
                               7);
              pbVar31 = pbVar31 + 1;
              pbVar42 = pbVar42 + 1;
            }
          }
        }
        if (((int)uVar16 <= (int)uVar22) && ((int)uVar22 < (int)uVar17)) {
          iVar28 = uVar17 - uVar22;
          uVar50 = uVar22;
          do {
            iVar40 = uVar50 - uVar16;
            uVar50 = uVar50 + 1;
            *pbVar31 = pbVar48[iVar40];
            pbVar31 = pbVar31 + 1;
            iVar28 = iVar28 + -1;
          } while (iVar28 != 0);
        }
        iVar28 = *(int *)(param_3 + 0x3c20);
        if ((int)uVar17 < iVar28) {
          pbVar31 = pbVar31 + -1;
          uVar50 = uVar17;
          do {
            uVar50 = uVar50 + 1;
            pbVar31 = pbVar31 + 1;
            *pbVar31 = 0x10;
            iVar28 = *(int *)(param_3 + 0x3c20);
          } while ((int)uVar50 < iVar28);
        }
        uVar47 = uVar47 + 2;
        pbVar44 = pbVar44 + iVar28;
        lVar49 = (ulonglong)uStack_ec - 2;
      } while ((int)uVar47 < (int)lVar49);
    }
    if ((iVar29 + 2 <= (int)uStack_ec) && ((int)lVar49 < *(int *)(param_3 + 0x3c24))) {
      lVar36 = lVar49 - uVar18;
      lVar23 = lVar36 + (ulonglong)uVar37;
      do {
        iVar24 = *(int *)(param_3 + 0x14);
        iVar28 = *(int *)(param_3 + 0x3c2c);
        iVar30 = (int)lVar23;
        if (0 < *(int *)(param_3 + 0x3c20)) {
          pbVar31 = pbVar44 + -1;
          iVar38 = iVar9 - uVar16;
          do {
            if (((iVar30 < *(int *)(param_3 + 0x3c1c)) && (iVar38 < *(int *)(param_3 + 0x14))) &&
               (-1 < iVar38)) {
              pbVar31[1] = *(byte *)(iVar24 * iVar30 + iVar28 + iVar38);
            }
            else {
              pbVar31[1] = 0x10;
            }
            pbVar31 = pbVar31 + 1;
            iVar38 = iVar38 + 1;
          } while ((int)((uVar16 - iVar9) + iVar38) < *(int *)(param_3 + 0x3c20));
        }
        iVar28 = 0;
        iVar24 = ((int)lVar36 >> 1) + ((int)uVar26 >> 8);
        if (0 < iVar7) {
          puVar34 = puStack_108 + -1;
          puVar43 = puStack_10c + -1;
          iVar38 = iVar7;
          do {
            if (((iVar24 < *(int *)(param_3 + 0x3c1c) >> 1) &&
                (iVar29 = (iVar10 - uVar8) + iVar28, iVar29 < iVar6)) && (-1 < iVar29)) {
              iVar29 = (iVar24 * iVar6 + iVar10) - uVar8;
              puVar43[1] = *(undefined1 *)(iVar29 + iVar28 + iVar4);
              puVar34[1] = *(undefined1 *)(iVar29 + iVar28 + iVar5);
            }
            else {
              puVar43[1] = 0x80;
              puVar34[1] = 0x80;
            }
            puVar34 = puVar34 + 1;
            puVar43 = puVar43 + 1;
            iVar28 = iVar28 + 1;
            iVar38 = iVar38 + -1;
          } while (iVar38 != 0);
        }
        iVar24 = *(int *)(param_3 + 0x14);
        iVar28 = *(int *)(param_3 + 0x3c2c);
        iVar38 = *(int *)(param_3 + 0x3c20);
        puStack_10c = puStack_10c + iVar7;
        puStack_108 = puStack_108 + iVar7;
        iVar29 = iVar38;
        if (0 < iVar38) {
          pbVar31 = pbVar44 + iVar38 + -1;
          iVar45 = iVar9 - uVar16;
          do {
            if (((iVar30 + 1 < *(int *)(param_3 + 0x3c1c)) && (iVar45 < *(int *)(param_3 + 0x14)))
               && (-1 < iVar45)) {
              pbVar31[1] = *(byte *)(iVar45 + iVar24 * (iVar30 + 1) + iVar28);
            }
            else {
              pbVar31[1] = 0x10;
            }
            pbVar31 = pbVar31 + 1;
            iVar45 = iVar45 + 1;
            iVar29 = *(int *)(param_3 + 0x3c20);
          } while ((int)(iVar45 + (uVar16 - iVar9)) < iVar29);
        }
        lVar49 = lVar49 + 2;
        pbVar44 = pbVar44 + iVar29 + iVar38;
        lVar36 = lVar36 + 2;
        lVar23 = lVar23 + 2;
      } while ((int)lVar49 < *(int *)(param_3 + 0x3c24));
    }
    uVar21 = 0;
  }
  return uVar21;
}

