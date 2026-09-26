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
extern unsigned int *auStack_11c;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82902688();
extern int fn_82904070();
extern int fn_82904138();
extern int fn_82904370();
extern int fn_829083F0();
extern int fn_82913308();
extern int fn_82914750();
extern int fn_82963860();
extern int fn_82964628();
extern int fn_82F68CC0();
extern unsigned int iStack0000002c;
extern unsigned int iStack_128;
extern unsigned int iStack_144;
extern unsigned int iStack_14c;
extern unsigned int iStack_150;
extern unsigned int iStack_158;
extern unsigned int iStack_168;
extern unsigned int iStack_e0;
extern unsigned int iStack_e4;
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int uStack0000001c;
extern unsigned int uStack_108;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;


longlong fn_82909950(int param_1,undefined4 param_2,longlong param_3,int param_4,ulonglong param_5
                      ,int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  int iVar9;
  int iVar10;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  longlong lVar8;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  double *pdVar23;
  uint uVar24;
  int *piVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined4 uStack0000001c;
  int iStack0000002c;
  undefined4 uStack_170;
  uint uStack_16c;
  int iStack_168;
  uint uStack_164;
  uint uStack_160;
  double *pdStack_15c;
  int iStack_158;
  double *pdStack_154;
  int iStack_150;
  int iStack_14c;
  int *piStack_148;
  int iStack_144;
  double dStack_140;
  uint uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 auStack_11c [3];
  double dStack_110;
  undefined8 uStack_108;
  int *piStack_100;
  undefined4 *puStack_fc;
  int *piStack_f8;
  undefined4 *puStack_f4;
  int iStack_f0;
  int iStack_ec;
  int *piStack_e8;
  int iStack_e4;
  int iStack_e0;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  
  iVar16 = *(int *)(param_1 + 8);
  uStack_130 = *(undefined4 *)(param_1 + 0x34);
  uStack_134 = *(undefined4 *)(param_1 + 0x30);
  uStack_120 = *(undefined4 *)(param_1 + 0x6c);
  uStack_160 = (uint)(param_3 != 0);
  uStack_124 = *(undefined4 *)(param_1 + 0x70);
  iStack_128 = 0;
  iStack_150 = 0;
  iStack_144 = 0;
  pdStack_154 = (double *)0x0;
  pdStack_15c = (double *)0x0;
  if (*(uint *)(iVar16 + 0x5c) <= *(uint *)(param_1 + 0x44)) {
    return -0x7fffbffb;
  }
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) + 1;
  uVar1 = *(undefined4 *)(iVar16 + 8);
  uVar2 = *(uint *)(iVar16 + 0xc);
  uVar19 = *(uint *)(*(int *)(param_1 + 4) + 0x1c);
  uVar20 = (ulonglong)uVar19;
  iVar16 = uVar19 << 2;
  uStack0000001c = param_2;
  iStack0000002c = param_4;
  piStack_148 = (int *)fn_8265C940(iVar16,0x24810000);
  if (((piStack_148 != (int *)0x0) &&
      (iVar9 = fn_8265C940(iVar16,0x24810000), iStack_150 = iVar9, iVar9 != 0)) &&
     (iVar10 = fn_8265C940(iVar16,0x24810000), iStack_144 = iVar10, iVar10 != 0)) {
    iVar14 = uVar19 << 4;
    pdVar11 = (double *)fn_8265C940(iVar14,0x24810000);
    pdStack_154 = pdVar11;
    if ((pdVar11 != (double *)0x0) &&
       (pdVar12 = (double *)fn_8265C940(iVar14,0x24810000), pdStack_15c = pdVar12,
       pdVar12 != (double *)0x0)) {
      if (uVar20 != 0) {
        iVar15 = 0;
        uVar21 = uVar20;
        pdVar23 = pdVar11;
        do {
          iVar13 = *(int *)(iVar15 + *(int *)(param_1 + 0x18));
          if ((iVar13 == -1) || (iVar13 = fn_82902688(param_1,iVar13,pdVar23), iVar13 < 0)) {
            *pdVar23 = *(double *)(param_1 + 0xa8);
            pdVar23[1] = *(double *)(param_1 + 0xb0);
          }
          iVar13 = *(int *)(iVar15 + *(int *)(param_1 + 0x18));
          if ((iVar13 == -1) ||
             (puVar3 = *(uint **)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iVar13 * 4),
             *(uint *)(*(int *)(param_1 + 8) + 0x74) == puVar3[1])) {
            uVar19 = 0x1f;
          }
          else {
            uVar19 = *puVar3 & 0x1f;
          }
          *(uint *)(iVar15 + iVar9) = uVar19;
          uVar21 = uVar21 - 1;
          pdVar23 = pdVar23 + 2;
          iVar15 = iVar15 + 4;
        } while (uVar21 != 0);
      }
      fn_82F68CC0(iVar10,iVar9,iVar16);
      fn_82F68CC0(pdVar12,pdVar11,iVar14);
      uStack_138 = 0xffffffff;
      uStack_12c = 0xffffffff;
      bVar7 = true;
      uStack_164 = 1;
      dStack_140 = lbl_82005758;
      uStack_170 = *(undefined4 *)(param_1 + 0x20);
      uVar19 = *(uint *)(*(int *)(param_1 + 8) + 0x68);
      if (uVar19 == 0) {
        uVar19 = 0xff;
      }
      uStack_16c = 0;
      dVar28 = lbl_82005758;
      dVar29 = lbl_82005710;
      if (uVar19 != 0) {
        do {
          iVar9 = iStack0000002c;
          uVar22 = uStack_16c + 1;
          *(uint *)(param_1 + 0x6c) = uStack_16c;
          *(uint *)(param_1 + 0x70) = uVar22;
          if (((param_5 & 0xffffffff) != 0) && (uStack_160 != 0)) {
            lVar8 = fn_82913308(param_1,param_5,0);
            if (lVar8 < 0) goto LAB_8290aa54;
            if (*(int *)(param_1 + 0x5c) != 0) break;
            if ((*(int *)(param_1 + 0x50) != 0) || (*(int *)(param_1 + 0x54) != 0))
            goto LAB_8290aa38;
          }
          fn_82F68CC0(piStack_148,*(undefined4 *)(param_1 + 0x18),iVar16);
          iStack_168 = -1;
          if (iVar9 != 0) {
            iStack_168 = -1;
            lVar8 = fn_82914750(param_1,iVar9,&iStack_168,0);
            if ((lVar8 < 0) ||
               (lVar8 = fn_82904370(param_1,iVar9,0x20500001,&uStack_170,&uStack_170,&iStack_168,
                                      0x17), lVar8 < 0)) goto LAB_8290aa54;
            if (*(int *)(param_1 + 0x5c) != 0) break;
            if ((*(int *)(param_1 + 0x50) != 0) || (*(int *)(param_1 + 0x54) != 0))
            goto LAB_8290aa38;
          }
          iVar9 = fn_82904070(param_1,uStack_170,&dStack_140);
          if ((iVar9 < 0) || (dStack_140 == dVar29)) {
            if (uVar20 != 0) {
              iVar9 = 0;
              uVar21 = uVar20;
              pdVar11 = pdStack_15c;
              do {
                puVar3 = (uint *)(iVar9 + iVar10);
                iVar14 = *(int *)(iVar9 + *(int *)(param_1 + 0x18));
                if (*(int *)((int)puVar3 + (param_6 - iVar10)) != iVar14) {
                  if ((*(double *)(param_1 + 0xb0) < *pdVar11) ||
                     (pdVar11[1] < *(double *)(param_1 + 0xa8))) {
                    iVar14 = fn_82902688(param_1,iVar14,&dStack_d0);
                    if (iVar14 < 0) {
                      *pdVar11 = *(double *)(param_1 + 0xa8);
                      dVar27 = *(double *)(param_1 + 0xb0);
                    }
                    else {
                      if (dStack_d0 < *pdVar11) {
                        *pdVar11 = dStack_d0;
                      }
                      dVar27 = dStack_c8;
                      if (dStack_c8 <= pdVar11[1]) goto code_r0x82909dcc;
                    }
                    pdVar11[1] = dVar27;
                  }
code_r0x82909dcc:
                  if (*pdVar11 != pdVar11[1]) {
                    puVar4 = *(uint **)(*(int *)(iVar9 + *(int *)(param_1 + 0x18)) * 4 +
                                       *(int *)(*(int *)(param_1 + 8) + 0x14));
                    *puVar4 = *puVar4 & 0xffffff7f;
                  }
                  *puVar3 = **(uint **)(*(int *)(iVar9 + *(int *)(param_1 + 0x18)) * 4 +
                                       *(int *)(*(int *)(param_1 + 8) + 0x14)) & *puVar3;
                }
                uVar21 = uVar21 - 1;
                pdVar11 = pdVar11 + 2;
                iVar9 = iVar9 + 4;
              } while (uVar21 != 0);
            }
          }
          else if (uVar20 != 0) {
            iVar9 = 0;
            uVar21 = uVar20;
            pdVar11 = pdStack_15c;
            do {
              iVar14 = *(int *)(iVar9 + *(int *)(param_1 + 0x18));
              if (*(int *)((param_6 - iVar10) + iVar9 + iVar10) != iVar14) {
                iVar14 = fn_82902688(param_1,iVar14,pdVar11);
                if (iVar14 < 0) {
                  *pdVar11 = *(double *)(param_1 + 0xa8);
                  pdVar11[1] = *(double *)(param_1 + 0xb0);
                }
                *(undefined4 *)(iVar9 + iVar10) =
                     **(undefined4 **)
                       (*(int *)(iVar9 + *(int *)(param_1 + 0x18)) * 4 +
                       *(int *)(*(int *)(param_1 + 8) + 0x14));
              }
              uVar21 = uVar21 - 1;
              pdVar11 = pdVar11 + 2;
              iVar9 = iVar9 + 4;
            } while (uVar21 != 0);
          }
          if (iStack_168 != -1) {
            iVar9 = fn_82902688(param_1,iStack_168,&dStack_c0);
            if (-1 < iVar9) {
              if ((dStack_c0 == dVar29) && (dStack_b8 == dVar29)) break;
              if ((dStack_c0 <= dVar29) && (dVar29 <= dStack_b8)) {
                bVar7 = false;
              }
            }
            *(double *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iStack_168 * 4) + 0x20) =
                 dVar28;
            *(double *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iStack_168 * 4) + 0x28) =
                 dVar28;
          }
          if (uVar20 != 0) {
            iVar9 = param_6 - (int)piStack_148;
            iVar14 = iStack_150 - (int)piStack_148;
            uVar21 = uVar20;
            piVar25 = piStack_148;
            pdVar11 = pdStack_154;
            do {
              if (*(int *)(iVar9 + (int)piVar25) != *piVar25) {
                if ((*(double *)(param_1 + 0xb0) < *pdVar11) ||
                   (pdVar11[1] < *(double *)(param_1 + 0xa8))) {
                  iVar15 = fn_82902688(param_1,*piVar25,&dStack_110);
                  if (iVar15 < 0) {
                    *pdVar11 = *(double *)(param_1 + 0xa8);
                    dVar27 = *(double *)(param_1 + 0xb0);
                  }
                  else {
                    if (dStack_110 < *pdVar11) {
                      *pdVar11 = dStack_110;
                    }
                    dVar27 = uStack_108;
                    if (uStack_108 <= pdVar11[1]) goto code_r0x82909f50;
                  }
                  pdVar11[1] = dVar27;
                }
code_r0x82909f50:
                *(uint *)(iVar14 + (int)piVar25) =
                     **(uint **)(*(int *)(*(int *)(param_1 + 8) + 0x14) + *piVar25 * 4) &
                     *(uint *)(iVar14 + (int)piVar25);
              }
              uVar21 = uVar21 - 1;
              pdVar11 = pdVar11 + 2;
              piVar25 = piVar25 + 1;
            } while (uVar21 != 0);
          }
          if (uStack_164 != 0) {
            if ((bVar7) ||
               (iVar9 = fn_829083F0(param_1,iStack_168,uStack_16c,&uStack_138,&uStack_12c),
               iVar9 == 0)) {
              uStack_164 = 0;
            }
            else {
              uStack_164 = 1;
            }
          }
          if (((param_5 & 0xffffffff) != 0) && (uStack_160 == 0)) {
            lVar8 = fn_82913308(param_1,param_5,0);
            if (lVar8 < 0) goto LAB_8290aa54;
            if (*(int *)(param_1 + 0x5c) != 0) break;
            if ((*(int *)(param_1 + 0x50) != 0) || (*(int *)(param_1 + 0x54) != 0))
            goto LAB_8290aa38;
          }
          uStack_16c = uVar22;
        } while (uVar22 < uVar19);
        uVar22 = uStack_16c;
        if (1 < uStack_16c) {
          if (uStack_16c < uVar19) {
            if ((*(int *)(param_1 + 0x60) != 0) || ((*(uint *)(param_1 + 0x14) & 0x200) != 0))
            goto LAB_8290aa38;
            uStack_164 = -(uint)(*(int *)(param_1 + 0x5c) != 0) & uStack_164;
          }
          if ((!bVar7) && (uStack_164 == 0)) {
            if ((*(uint *)(*(int *)(param_1 + 8) + 0x70) & 0x10000000) == 0) goto LAB_8290aa38;
            if (uVar2 < *(uint *)(*(int *)(param_1 + 8) + 0xc)) {
              iVar16 = uVar2 << 2;
              uVar24 = uVar2;
              do {
                iVar9 = fn_82963860(*(undefined4 *)
                                      (*(int *)(*(int *)(param_1 + 8) + 0x18) + iVar16));
                if (iVar9 != 0) goto LAB_8290aa38;
                uVar24 = uVar24 + 1;
                iVar16 = iVar16 + 4;
              } while (uVar24 < *(uint *)(*(int *)(param_1 + 8) + 0xc));
            }
          }
          if (*(int *)(param_1 + 0x5c) != 0) {
            *(undefined4 *)(param_1 + 0x5c) = 0;
            uVar22 = uVar19;
            uStack_16c = uVar19;
          }
          if (((uVar22 != uVar19) ||
              (iVar16 = fn_82904070(param_1,uStack_170,&dStack_140), iVar16 < 0)) ||
             (dStack_140 == dVar29)) {
            if (((uVar22 < uVar19) && (bVar7)) && ((*(uint *)(param_1 + 0x14) & 0x400) == 0)) {
              uVar22 = *(uint *)(*(int *)(param_1 + 8) + 0xc);
              uVar24 = uVar2;
              if (uVar2 < uVar22) {
                iVar16 = uVar2 << 2;
                do {
                  uVar17 = **(uint **)(*(int *)(*(int *)(param_1 + 8) + 0x18) + iVar16);
                  uVar6 = uVar17 & 0xfff00000;
                  if (uVar6 < 0x20100001) {
                    if (((((uVar6 != 0x20100000) && ((uVar17 & 0xfff00000) != 0)) &&
                         (uVar6 != 0x10000000)) && ((uVar6 != 0x10100000 && (uVar6 != 0x10200000))))
                       && (uVar6 != 0x10400000)) {
                      uVar17 = 0x20000000;
LAB_8290a1e0:
                      if (uVar6 != uVar17) break;
                    }
                  }
                  else if (((uVar6 != 0x20200000) && (uVar6 != 0x20300000)) &&
                          ((uVar6 != 0x20400000 && (uVar6 != 0x20500000)))) {
                    uVar17 = 0x30000000;
                    goto LAB_8290a1e0;
                  }
                  uVar24 = uVar24 + 1;
                  iVar16 = iVar16 + 4;
                } while (uVar24 < *(uint *)(*(int *)(param_1 + 8) + 0xc));
              }
              if (uVar24 == uVar22) goto LAB_8290aa38;
            }
            iVar16 = 0;
            if (uVar20 != 0) {
              iVar9 = 0;
              uVar21 = uVar20;
              do {
                if ((*(int *)(iVar9 + param_6) != -1) &&
                   (*(int *)(*(int *)(param_1 + 0x18) + iVar9) != *(int *)(iVar9 + param_6))) {
                  iVar16 = iVar16 + 1;
                }
                iVar9 = iVar9 + 4;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
            iStack_128 = fn_8265C940(iVar16 * 0x24,0x24810000);
            if (iStack_128 == 0) goto LAB_8290aa4c;
            uVar22 = 0;
            if (iVar16 * 9 != 0) {
              puVar18 = (undefined4 *)(iStack_128 + -4);
              do {
                uVar22 = uVar22 + 1;
                puVar18 = puVar18 + 1;
                *puVar18 = 0xffffffff;
              } while (uVar22 < (uint)(iVar16 * 9));
            }
            piVar25 = (int *)((int)&uStack_108 + 4);
            lVar8 = 9;
            iVar9 = iStack_128;
            do {
              piVar25 = piVar25 + 1;
              *piVar25 = iVar9;
              iVar9 = iVar9 + iVar16 * 4;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            uVar21 = 0;
            iVar16 = 0;
            if (uVar20 != 0) {
              iVar9 = 0;
              puVar18 = puStack_fc;
              do {
                if ((*(int *)(iVar9 + param_6) != -1) &&
                   (*(int *)(*(int *)(param_1 + 0x18) + iVar9) != *(int *)(iVar9 + param_6))) {
                  *(int *)((int)piStack_100 +
                          (int)puVar18 + (((int)piStack_f8 - (int)puStack_fc) - (int)piStack_f8)) =
                       iVar16;
                  *puVar18 = *(undefined4 *)(iVar9 + param_6);
                  *(undefined4 *)(((int)piStack_f8 - (int)puStack_fc) + (int)puVar18) =
                       *(undefined4 *)(iVar9 + param_6);
                  if ((*(int *)(iVar9 + param_6) == -1) ||
                     (*(int *)(*(int *)(param_1 + 8) + 0x74) ==
                      *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) +
                                       *(int *)(iVar9 + param_6) * 4) + 4))) {
                    *puVar18 = *(undefined4 *)(param_1 + 0x24);
                  }
                  uVar21 = uVar21 + 1;
                  puVar18 = puVar18 + 1;
                }
                iVar16 = iVar16 + 1;
                iVar9 = iVar9 + 4;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            fn_82904138(param_1,uVar1,uVar2,param_6);
            dStack_140 = (double)(ulonglong)uStack_16c;
            *(undefined4 *)(param_1 + 0x6c) = 0;
            *(uint *)(param_1 + 0x70) = uStack_16c;
            auStack_11c[0] =
                 fn_82964628((double)(longlong)dStack_140,*(int *)(param_1 + 8),
                                   *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
            iStack_14c = -1;
            lVar8 = fn_82904370(param_1,uStack0000001c,0x11100001,&iStack_14c,auStack_11c,0,0);
            if (lVar8 < 0) goto LAB_8290aa54;
            uVar20 = uVar21 & 0xfffff;
            *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iStack_14c * 4) + 4) =
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0xa4);
            *(undefined4 *)(param_1 + 0x34) = 1;
            *(int *)(param_1 + 0x30) = iStack_14c;
            lVar8 = fn_82904370(param_1,uStack0000001c,uVar20 | 0x11200000,piStack_f8,puStack_fc,0
                                  ,0);
            if ((lVar8 < 0) ||
               (lVar8 = fn_82904370(param_1,uStack0000001c,uVar20 | 0x11300000,iStack_e0,
                                      piStack_f8,0,0), lVar8 < 0)) goto LAB_8290aa54;
            if ((uVar21 & 0xffffffff) != 0) {
              uVar26 = uVar21;
              piVar25 = piStack_f8;
              do {
                pdVar11 = pdStack_154 +
                          *(int *)((int)piVar25 + ((int)piStack_100 - (int)piStack_f8)) * 2;
                puVar3 = *(uint **)(*(int *)(*(int *)(param_1 + 8) + 0x14) + *piVar25 * 4);
                if (*pdVar11 <= pdVar11[1]) {
                  *(double *)(puVar3 + 8) = *pdVar11;
                  uVar2 = *puVar3;
                  dVar28 = pdVar11[1];
                  *puVar3 = uVar2 & 0xfffffe7f | 0x100;
                  *(double *)(puVar3 + 10) = dVar28;
                  if (*pdVar11 == pdVar11[1]) {
                    *puVar3 = uVar2 & 0xfffffe7f | 0x180;
                  }
                }
                *puVar3 = *(uint *)(*(int *)((int)piVar25 + ((int)piStack_100 - (int)piStack_f8)) *
                                    4 + iStack_150) | *puVar3;
                *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + *piVar25 * 4) + 4)
                     = *(undefined4 *)(*(int *)(param_1 + 8) + 0x98);
                piVar5 = (int *)((iStack_e0 - (int)piStack_f8) + (int)piVar25);
                piVar25 = piVar25 + 1;
                *(undefined4 *)(*(int *)(*piVar5 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14)) + 4)
                     = *(undefined4 *)(*(int *)(param_1 + 8) + 0xac);
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
            if ((((param_5 & 0xffffffff) != 0) && (uStack_160 != 0)) &&
               (lVar8 = fn_82913308(param_1,param_5,0), lVar8 < 0)) goto LAB_8290aa54;
            uStack_170 = 0xffffffff;
            lVar8 = fn_82914750(param_1,iStack0000002c,&uStack_170,0);
            if (lVar8 < 0) goto LAB_8290aa54;
            if ((uVar21 & 0xffffffff) != 0) {
              uVar26 = uVar21;
              piVar25 = piStack_f8;
              do {
                *piVar25 = *(int *)(*(int *)((int)piVar25 + ((int)piStack_100 - (int)piStack_f8)) *
                                    4 + *(int *)(param_1 + 0x18));
                piVar25 = piVar25 + 1;
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
            iVar16 = fn_82902688(param_1,uStack_170,&dStack_110);
            if ((iVar16 < 0) || ((dStack_110 <= dVar29 && (dVar29 <= uStack_108)))) {
              if ((uStack_16c < uVar19) &&
                 ((*(uint *)(*(int *)(param_1 + 8) + 0x70) & 0x10000000) == 0)) goto LAB_8290aa38;
              iStack_158 = -1;
              lVar8 = fn_82904370(param_1,uStack0000001c,0x11400001,&iStack_158,&uStack_170,0,0);
              if (lVar8 < 0) goto LAB_8290aa54;
              *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iStack_158 * 4) + 4)
                   = *(undefined4 *)(*(int *)(param_1 + 8) + 0xa0);
              *(undefined4 *)(param_1 + 0x34) = 1;
              *(int *)(param_1 + 0x30) = iStack_158;
              if ((((param_5 & 0xffffffff) != 0) && (uStack_160 == 0)) &&
                 (lVar8 = fn_82913308(param_1,param_5,0), lVar8 < 0)) goto LAB_8290aa54;
              if ((uVar21 & 0xffffffff) != 0) {
                uVar26 = uVar21;
                puVar18 = puStack_f4;
                do {
                  *puVar18 = *(undefined4 *)
                              (*(int *)(((int)piStack_100 - (int)puStack_f4) + (int)puVar18) * 4 +
                              *(int *)(param_1 + 0x18));
                  puVar18 = puVar18 + 1;
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
              lVar8 = fn_82904370(param_1,uStack0000001c,uVar20 | 0x10000000,iStack_f0,puStack_f4,
                                    0,0);
              if (lVar8 < 0) goto LAB_8290aa54;
              if ((uVar21 & 0xffffffff) != 0) {
                piVar25 = (int *)(iStack_f0 + -4);
                uVar26 = uVar21;
                do {
                  piVar25 = piVar25 + 1;
                  *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + *piVar25 * 4) + 4) =
                       *(undefined4 *)(*(int *)(param_1 + 8) + 0x98);
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
              *(undefined4 *)(param_1 + 0x34) = 0;
              *(int *)(param_1 + 0x30) = iStack_158;
              lVar8 = fn_82904370(param_1,uStack0000001c,uVar20 | 0x10000000,iStack_ec,piStack_f8,
                                    0,0);
              if (lVar8 < 0) goto LAB_8290aa54;
              if ((uVar21 & 0xffffffff) != 0) {
                piVar25 = (int *)(iStack_ec + -4);
                uVar26 = uVar21;
                do {
                  piVar25 = piVar25 + 1;
                  *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + *piVar25 * 4) + 4) =
                       *(undefined4 *)(*(int *)(param_1 + 8) + 0x98);
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
              *(undefined4 *)(param_1 + 0x34) = 1;
              *(int *)(param_1 + 0x30) = iStack_14c;
              lVar8 = fn_82904370(param_1,uStack0000001c,uVar20 | 0x20800000,piStack_e8,iStack_f0,
                                    iStack_ec,0);
              if (lVar8 < 0) goto LAB_8290aa54;
              if ((uVar21 & 0xffffffff) != 0) {
                piVar25 = piStack_e8 + -1;
                uVar26 = uVar21;
                do {
                  piVar25 = piVar25 + 1;
                  *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + *piVar25 * 4) + 4) =
                       *(undefined4 *)(*(int *)(param_1 + 8) + 0x98);
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
            }
            else {
              if ((((param_5 & 0xffffffff) != 0) && (uStack_160 == 0)) &&
                 (lVar8 = fn_82913308(param_1,param_5,0), lVar8 < 0)) goto LAB_8290aa54;
              if ((uVar21 & 0xffffffff) != 0) {
                uVar26 = uVar21;
                piVar25 = piStack_e8;
                do {
                  iVar16 = *(int *)(*(int *)(((int)piStack_100 - (int)piStack_e8) + (int)piVar25) *
                                    4 + *(int *)(param_1 + 0x18));
                  *piVar25 = iVar16;
                  if (iVar16 == -1) {
                    *piVar25 = *(int *)(param_1 + 0x24);
                  }
                  piVar25 = piVar25 + 1;
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
            }
            lVar8 = fn_82904370(param_1,uStack0000001c,uVar20 | 0x10000000,piStack_e8,piStack_e8,0
                                  ,0);
            if (lVar8 < 0) goto LAB_8290aa54;
            if ((uVar21 & 0xffffffff) != 0) {
              piVar25 = piStack_e8 + -1;
              uVar26 = uVar21;
              do {
                piVar25 = piVar25 + 1;
                *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + *piVar25 * 4) + 4)
                     = *(undefined4 *)(*(int *)(param_1 + 8) + 0x98);
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
            lVar8 = fn_82904370(param_1,uStack0000001c,uVar20 | 0x20900000,iStack_e4,piStack_e8,
                                  iStack_e0,0);
            if (lVar8 < 0) goto LAB_8290aa54;
            if ((uVar21 & 0xffffffff) != 0) {
              piVar25 = (int *)(iStack_e4 + -4);
              uVar26 = uVar21;
              do {
                piVar25 = piVar25 + 1;
                *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + *piVar25 * 4) + 4)
                     = *(undefined4 *)(*(int *)(param_1 + 8) + 0x98);
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
            *(undefined4 *)(param_1 + 0x30) = uStack_134;
            *(undefined4 *)(param_1 + 0x34) = uStack_130;
            lVar8 = fn_82904370(param_1,uStack0000001c,uVar20 | 0x11500000,piStack_f8,iStack_e4,0,
                                  0);
            if (lVar8 < 0) goto LAB_8290aa54;
            if ((uVar21 & 0xffffffff) != 0) {
              iVar16 = (int)piStack_f8 - (int)piStack_100;
              do {
                pdVar11 = pdStack_15c + *piStack_100 * 2;
                puVar3 = *(uint **)(*(int *)(iVar16 + (int)piStack_100) * 4 +
                                   *(int *)(*(int *)(param_1 + 8) + 0x14));
                if (*pdVar11 <= pdVar11[1]) {
                  uVar2 = *puVar3;
                  *(double *)(puVar3 + 8) = *pdVar11;
                  *(double *)(puVar3 + 10) = pdVar11[1];
                  *puVar3 = uVar2 | 0x100;
                  if (*pdVar11 == pdVar11[1]) {
                    *puVar3 = uVar2 | 0x180;
                  }
                }
                iVar9 = *piStack_100;
                piStack_100 = piStack_100 + 1;
                *puVar3 = *(uint *)(iVar9 * 4 + iStack_144) | *puVar3;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
            if (((uStack_16c == 0) || (uStack_164 == 0)) ||
               ((*(int *)(param_1 + 0x50) != 0 ||
                ((*(int *)(param_1 + 0x54) != 0 ||
                 (iVar16 = fn_82904370(param_1,iStack0000002c,0x10000001,
                                         ((ulonglong)uStack_138 & 0x3fffffff) * 4 +
                                         (ulonglong)*(uint *)(param_1 + 0x18),&uStack_12c,0,0),
                 -1 < iVar16)))))) {
              lVar8 = 0;
              goto LAB_8290aa54;
            }
          }
        }
      }
LAB_8290aa38:
      lVar8 = -0x7fffbffb;
      goto LAB_8290aa54;
    }
  }
LAB_8290aa4c:
  lVar8 = -0x7ff8fff2;
LAB_8290aa54:
  fn_8265C990(piStack_148,0x24810000);
  fn_8265C990(iStack_150,0x24810000);
  fn_8265C990(iStack_144,0x24810000);
  fn_8265C990(pdStack_154,0x24810000);
  fn_8265C990(pdStack_15c,0x24810000);
  fn_8265C990(iStack_128,0x24810000);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
  *(undefined4 *)(param_1 + 0x30) = uStack_134;
  *(undefined4 *)(param_1 + 0x34) = uStack_130;
  *(undefined4 *)(param_1 + 0x6c) = uStack_120;
  *(undefined4 *)(param_1 + 0x70) = uStack_124;
  return lVar8;
}

