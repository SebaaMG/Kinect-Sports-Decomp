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
extern unsigned int *auStack_f0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_829632F0();
extern int fn_82963958();
extern int fn_829639F0();
extern int fn_82964628();
extern int fn_829646C8();
extern int fn_829658F8();
extern int fn_82965C70();
extern int fn_82969030();
extern int fn_8296CF68();
extern int fn_8296E438();
extern int fn_82971580();
extern int fn_82BA02A8();
extern int fn_82F691F0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_100;
extern unsigned int iStack_f4;
extern unsigned int iStack_f8;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_8200E890;
extern unsigned int uStack_110;


void fn_829768F0(void)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  double *pdVar16;
  double *pdVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  bool bVar25;
  ulonglong uVar26;
  undefined4 uVar28;
  bool bVar29;
  ulonglong uVar27;
  uint uVar30;
  int *piVar31;
  int *piVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar37;
  ulonglong uVar36;
  double *pdVar38;
  uint uVar40;
  ulonglong uVar39;
  double *pdVar42;
  uint uVar43;
  longlong lVar41;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  uint uStack_110;
  double *pdStack_10c;
  double *pdStack_108;
  double *pdStack_104;
  int iStack_100;
  double *pdStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined1 auStack_f0 [16];
  int *apiStack_e0 [4];
  int aiStack_d0 [52];
  
  iVar10 = fn_82F6A548();
  pdStack_104 = (double *)0x0;
  pdStack_108 = (double *)0x0;
  iStack_100 = 0;
  iStack_f8 = -1;
  iStack_f4 = -1;
  fn_8296CF68();
  uVar35 = 0;
  uStack_110 = 0;
  if (*(int *)(iVar10 + 8) != 0) {
    iVar21 = 0;
    do {
      uVar35 = uVar35 + 1;
      piVar31 = (int *)(iVar21 + *(int *)(iVar10 + 0x14));
      iVar21 = iVar21 + 4;
      *(undefined4 *)(*piVar31 + 0x40) = 0xffffffff;
    } while (uVar35 < *(uint *)(iVar10 + 8));
  }
  uVar35 = 0;
  dVar47 = lbl_82005710;
  if (*(int *)(iVar10 + 0xc) != 0) {
    iVar21 = 0;
    do {
      puVar1 = *(uint **)(*(int *)(iVar10 + 0x18) + iVar21);
      uVar40 = *puVar1 & 0xfff00000;
      if (((((*puVar1 & 0xfff00000) != 0) &&
           ((uVar13 = puVar1[3], uVar13 == 0 ||
            ((**(uint **)(*(int *)puVar1[4] * 4 + *(int *)(iVar10 + 0x14)) & 0x40) == 0)))) &&
          ((uVar40 == 0x20400000 || (uVar40 == 0x20500000)))) && (uVar40 = 0, uVar13 != 0)) {
        iVar22 = 0;
        do {
          lVar33 = 0;
          piVar32 = (int *)(puVar1[2] + iVar22);
          piVar31 = (int *)((uVar13 + uVar40) * 4 + puVar1[2]);
          uVar13 = 0;
          apiStack_e0[0] = piVar32;
          apiStack_e0[1] = piVar31;
          do {
            iVar15 = 0;
            pdVar16 = (double *)0xffffffff;
            uVar34 = 1 - lVar33;
            iVar12 = *(int *)(iVar10 + 0x14);
            aiStack_d0[0] = *(int *)(*piVar32 * 4 + iVar12);
            aiStack_d0[1] = *(undefined4 *)(*piVar31 * 4 + iVar12);
            iVar14 = *(int *)((int)aiStack_d0 + uVar13);
            if ((((*(uint *)(*(int *)(*(int *)(iVar14 + 4) * 4 + *(int *)(iVar10 + 0x10)) + 4) & 2)
                  != 0) && (*(int *)(iVar14 + 8) == -1)) &&
               (puVar2 = *(uint **)(*(int *)(iVar14 + 0x48) * 4 + *(int *)(iVar10 + 0x18)),
               ((*puVar2 ^ *puVar1) & 0xfff00000) == 0)) {
              uVar24 = (ulonglong)puVar2[3];
              uVar26 = 0;
              if (uVar24 != 0) {
                iVar14 = 0;
                do {
                  if (*(int *)(iVar14 + puVar2[4]) == **(int **)((int)apiStack_e0 + uVar13)) break;
                  uVar26 = uVar26 + 1;
                  iVar14 = iVar14 + 4;
                } while ((uVar26 & 0xffffffff) < uVar24);
              }
              pdStack_10c = (double *)0xffffffff;
              apiStack_e0[2] = (int *)((int)((uVar26 & 0xffffffff) << 2) + puVar2[2]);
              apiStack_e0[3] = (int *)((int)((uVar24 + uVar26 & 0xffffffff) << 2) + puVar2[2]);
              uVar11 = 0;
              aiStack_d0[2] = *(undefined4 *)(*apiStack_e0[2] * 4 + iVar12);
              aiStack_d0[3] = *(undefined4 *)(*apiStack_e0[3] * 4 + iVar12);
              puVar2 = *(uint **)((int)aiStack_d0 + uVar13);
              if ((puVar2[0x17] == 1) && (*apiStack_e0[2] != *apiStack_e0[3])) {
                fn_829658F8(iVar10,**(undefined4 **)
                                           ((int)apiStack_e0 + (int)((uVar34 & 0xffffffff) << 2)),
                                  &pdStack_10c,auStack_f0);
                pdVar16 = pdStack_10c;
                pdStack_fc = pdStack_10c;
                uVar11 = fn_829658F8(iVar10,**(undefined4 **)((int)apiStack_e0 + uVar13),
                                           &pdStack_fc,auStack_f0);
                uVar11 = uVar11 >> 0x1f ^ 1;
              }
              uVar24 = 2;
              do {
                iVar14 = *(int *)((int)aiStack_d0 + iVar15 + 8);
                iVar12 = *(int *)(iVar10 + 0x10);
                uVar43 = *(uint *)(*(int *)(*(int *)(iVar14 + 4) * 4 + iVar12) + 4);
                if (((uVar43 & 0x100) != 0) && (*(int *)(iVar14 + 8) == -1)) {
                  iVar20 = (int)((uVar34 & 0xffffffff) << 2);
                  iVar19 = *(int *)((int)aiStack_d0 + iVar20);
                  if (((*(uint *)(*(int *)(*(int *)(iVar19 + 4) * 4 + iVar12) + 4) & 0x100) != 0) &&
                     (*(int *)(iVar19 + 8) == -1)) {
                    if ((*puVar1 & 0xfff00000) == 0x20400000) {
                      dVar45 = *(double *)
                                (*(int *)((int)aiStack_d0 + (int)((uVar24 & 0xffffffff) << 2)) +
                                0x20) + *(double *)(iVar19 + 0x20);
                    }
                    else {
                      dVar45 = dVar47;
                      if ((*puVar1 & 0xfff00000) == 0x20500000) {
                        dVar45 = *(double *)
                                  (*(int *)((int)aiStack_d0 + (int)((uVar24 & 0xffffffff) << 2)) +
                                  0x20) * *(double *)(iVar19 + 0x20);
                      }
                    }
                    **(undefined4 **)((int)apiStack_e0 + uVar13) =
                         **(undefined4 **)((int)apiStack_e0 + (int)((5 - uVar24 & 0xffffffff) << 2))
                    ;
                    uVar18 = fn_82964628(dVar45,iVar10,*(undefined4 *)(iVar10 + 0x78),0,0);
                    uStack_110 = 1;
                    **(undefined4 **)((int)apiStack_e0 + iVar20) = uVar18;
                    *(undefined4 *)
                     (*(int *)(*(int *)(puVar1[4] + iVar22) * 4 + *(int *)(iVar10 + 0x14)) + 0x40) =
                         0xffffffff;
                    break;
                  }
                }
                if (puVar2[0x17] == 1) {
                  iVar20 = (int)((uVar34 & 0x3fffffff) << 2);
                  iVar19 = *(int *)((int)aiStack_d0 + iVar20);
                  if (((*(uint *)(iVar19 + 0x48) == 0xffffffff) ||
                      (*(uint *)(iVar19 + 0x48) < puVar2[0x12])) && (*(int *)(iVar19 + 8) == -1)) {
                    if ((((uVar43 & 0x100) != 0) && (*(int *)(iVar14 + 8) == -1)) &&
                       ((*(uint *)(*(int *)(*(int *)(iVar19 + 4) * 4 + iVar12) + 4) & 0x100) == 0))
                    {
                      uStack_110 = 1;
                      puVar9 = *(undefined4 **)
                                ((int)apiStack_e0 + (int)((uVar24 & 0xffffffff) << 2));
                      uVar18 = **(undefined4 **)((int)apiStack_e0 + iVar20);
                      **(undefined4 **)((int)apiStack_e0 + iVar20) = *puVar9;
                      *puVar9 = uVar18;
                      puVar2[0x18] = 0;
                      puVar2[0x19] = 0;
                      *puVar2 = *puVar2 & 0xfffffff0;
                      puVar2[0x10] = 0xffffffff;
                      *(undefined4 *)
                       (*(int *)(*(int *)(puVar1[4] + iVar22) * 4 + *(int *)(iVar10 + 0x14)) + 0x40)
                           = 0xffffffff;
                      break;
                    }
                    piVar3 = *(int **)((int)apiStack_e0 + (int)((5 - uVar24 & 0xffffffff) << 2));
                    piVar4 = *(int **)((int)apiStack_e0 + iVar15 + 8);
                    iVar12 = *piVar4;
                    if ((*piVar3 != iVar12) &&
                       (((uVar11 == 0 &&
                         (pdStack_fc = pdVar16,
                         iVar12 = fn_829658F8(iVar10,iVar12,&pdStack_fc,auStack_f0),
                         -1 < iVar12)) || (**(int **)((int)apiStack_e0 + iVar20) == *piVar4)))) {
                      uStack_110 = 1;
                      iVar12 = **(int **)((int)apiStack_e0 + iVar20);
                      **(int **)((int)apiStack_e0 + iVar20) = *piVar3;
                      *piVar3 = iVar12;
                      puVar2[0x18] = 0;
                      puVar2[0x19] = 0;
                      *puVar2 = *puVar2 & 0xfffffff0;
                      puVar2[0x10] = 0xffffffff;
                      *(undefined4 *)
                       (*(int *)(*(int *)(puVar1[4] + iVar22) * 4 + *(int *)(iVar10 + 0x14)) + 0x40)
                           = 0xffffffff;
                      break;
                    }
                  }
                }
                uVar24 = uVar24 + 1;
                iVar15 = iVar15 + 4;
              } while ((uVar24 & 0xffffffff) < 4);
            }
            uVar13 = uVar13 + 4;
            lVar33 = lVar33 + 1;
          } while (uVar13 < 8);
          uVar13 = puVar1[3];
          uVar40 = uVar40 + 1;
          iVar22 = iVar22 + 4;
        } while (uVar40 < uVar13);
      }
      uVar35 = uVar35 + 1;
      iVar21 = iVar21 + 4;
    } while (uVar35 < *(uint *)(iVar10 + 0xc));
    if (uStack_110 != 0) {
      uStack_110 = 0;
      iStack_100 = 1;
      fn_8296CF68(iVar10);
    }
  }
  uVar35 = 0;
  if (*(int *)(iVar10 + 0xc) != 0) {
    iVar21 = 0;
    do {
      puVar1 = *(uint **)(*(int *)(iVar10 + 0x18) + iVar21);
      uVar40 = *puVar1 & 0xfff00000;
      if (((((*puVar1 & 0xfff00000) != 0) &&
           ((uVar13 = puVar1[3], uVar13 == 0 ||
            ((**(uint **)(*(int *)puVar1[4] * 4 + *(int *)(iVar10 + 0x14)) & 0x40) == 0)))) &&
          ((uVar40 == 0x30000000 || (uVar40 == 0x11000000)))) && (uVar40 = 0, uVar13 != 0)) {
        iVar22 = 0;
        do {
          uVar11 = puVar1[2];
          iVar12 = *(int *)(iVar10 + 0x14);
          iVar14 = *(int *)(iVar10 + 0x10);
          iVar15 = *(int *)(uVar11 + iVar22);
          iVar19 = *(int *)(iVar15 * 4 + iVar12);
          iVar20 = *(int *)(*(int *)(iVar19 + 4) * 4 + iVar14);
          iVar23 = iVar15;
          while (((*(uint *)(iVar20 + 4) & 2) != 0 && (*(int *)(iVar19 + 8) == -1))) {
            uVar43 = puVar1[1];
            uVar30 = uVar13;
            if (uVar13 < uVar43) {
              iVar20 = uVar13 << 2;
              do {
                if (iVar23 == *(int *)(uVar11 + iVar20)) break;
                uVar30 = uVar30 + 1;
                iVar20 = iVar20 + 4;
              } while (uVar30 < uVar43);
            }
            if (uVar30 < uVar43) break;
            uVar30 = 0;
            puVar2 = *(uint **)(*(int *)(iVar19 + 0x48) * 4 + *(int *)(iVar10 + 0x18));
            uVar43 = puVar2[3];
            if (uVar43 != 0) {
              iVar19 = 0;
              do {
                if (*(int *)(puVar2[4] + iVar19) == iVar23) break;
                uVar30 = uVar30 + 1;
                iVar19 = iVar19 + 4;
              } while (uVar30 < uVar43);
            }
            if ((*puVar2 & 0xfff00000) == 0x20400000) {
              iVar20 = *(int *)(uVar30 * 4 + puVar2[2]);
              if (iVar20 != *(int *)((uVar43 + uVar30) * 4 + puVar2[2])) break;
            }
            else {
              if ((*puVar2 & 0xfff00000) != 0x20500000) break;
              iVar19 = *(int *)(uVar30 * 4 + puVar2[2]);
              iVar20 = *(int *)((uVar43 + uVar30) * 4 + puVar2[2]);
              iVar5 = *(int *)(iVar19 * 4 + iVar12);
              if ((((*(uint *)(*(int *)(*(int *)(iVar5 + 4) * 4 + iVar14) + 4) & 0x100) == 0) ||
                  (*(double *)(iVar5 + 0x20) <= dVar47)) &&
                 ((iVar5 = *(int *)(iVar20 * 4 + iVar12),
                  (*(uint *)(*(int *)(*(int *)(iVar5 + 4) * 4 + iVar14) + 4) & 0x100) == 0 ||
                  (iVar20 = iVar19, *(double *)(iVar5 + 0x20) <= dVar47)))) break;
            }
            iVar23 = iVar20;
            iVar19 = *(int *)(iVar23 * 4 + *(int *)(iVar10 + 0x14));
            iVar20 = *(int *)(*(int *)(iVar19 + 4) * 4 + *(int *)(iVar10 + 0x10));
          }
          if (iVar15 != iVar23) {
            *(int *)(uVar11 + iVar22) = iVar23;
            uStack_110 = 1;
          }
          uVar13 = puVar1[3];
          uVar40 = uVar40 + 1;
          iVar22 = iVar22 + 4;
        } while (uVar40 < uVar13);
      }
      uVar35 = uVar35 + 1;
      iVar21 = iVar21 + 4;
    } while (uVar35 < *(uint *)(iVar10 + 0xc));
  }
  iVar21 = iStack_100;
  if (uStack_110 != 0) {
    uStack_110 = 0;
    fn_8296CF68(iVar10);
    iVar21 = 1;
  }
  uVar34 = 0;
  uVar35 = 0;
  if (*(int *)(iVar10 + 0xc) != 0) {
    iVar22 = 0;
    do {
      puVar1 = *(uint **)(*(int *)(iVar10 + 0x18) + iVar22);
      if (((*puVar1 & 0xfff00000) != 0) &&
         ((((uVar24 = (ulonglong)puVar1[3], uVar24 == 0 ||
            ((**(uint **)(*(int *)puVar1[4] * 4 + *(int *)(iVar10 + 0x14)) & 0x40) == 0)) &&
           ((*puVar1 & 0xfff00000) == 0x30000000)) && (uVar26 = 0, uVar24 != 0)))) {
        iVar12 = 0;
        do {
          uVar40 = puVar1[2];
          iVar14 = *(int *)(iVar10 + 0x14);
          iVar15 = *(int *)(iVar10 + 0x10);
          iVar19 = *(int *)(*(int *)(uVar40 + iVar12) * 4 + iVar14);
          if (((*(uint *)(*(int *)(*(int *)(iVar19 + 4) * 4 + iVar15) + 4) & 2) != 0) &&
             (*(int *)(iVar19 + 8) == -1)) {
            uVar11 = 0;
            puVar2 = *(uint **)(*(int *)(iVar19 + 0x48) * 4 + *(int *)(iVar10 + 0x18));
            uVar13 = puVar2[3];
            if (uVar13 != 0) {
              iVar19 = 0;
              do {
                if (*(int *)(puVar2[4] + iVar19) == *(int *)(uVar40 + iVar12)) break;
                uVar11 = uVar11 + 1;
                iVar19 = iVar19 + 4;
              } while (uVar11 < uVar13);
            }
            uVar43 = *puVar2 & 0xfff00000;
            if (uVar43 == 0x10100000) {
              uVar30 = 1;
            }
            else {
              if (uVar43 != 0x20500000) goto LAB_8297754c;
              uVar30 = 2;
            }
            uVar37 = 0;
            if (uVar30 != 0) {
              piVar32 = (int *)(uVar11 * 4 + puVar2[2]);
              piVar31 = (int *)((uVar13 + uVar11) * 4 + puVar2[2]);
              do {
                iVar19 = *piVar32;
                iVar20 = *(int *)(iVar19 * 4 + iVar14);
                if ((uVar43 != 0x20500000) ||
                   (((iVar23 = *(int *)(*piVar31 * 4 + iVar14),
                     (*(uint *)(*(int *)(*(int *)(iVar23 + 4) * 4 + iVar15) + 4) & 0x100) != 0 &&
                     (*(int *)(iVar23 + 8) == -1)) && (*(double *)(iVar23 + 0x20) < dVar47)))) {
                  if (iVar19 == *(int *)((int)(((uVar24 & 0x7fffffff) * 2 + uVar26 & 0xffffffff) <<
                                              2) + uVar40)) {
                    iVar23 = *(int *)((int)((uVar24 + uVar26 & 0xffffffff) << 2) + uVar40);
                    iVar5 = *(int *)(iVar23 * 4 + iVar14);
                    if ((((*(uint *)(*(int *)(*(int *)(iVar5 + 4) * 4 + iVar15) + 4) & 0x100) != 0)
                        && (*(int *)(iVar5 + 8) == -1)) && (*(double *)(iVar5 + 0x20) == dVar47)) {
                      uVar34 = 1;
                      uStack_110 = 1;
                      *(int *)(iVar12 + puVar1[2]) = iVar19;
                      *(int *)((int)((puVar1[3] + uVar26 & 0xffffffff) << 2) + puVar1[2]) = iVar19;
                      *(int *)((int)((((ulonglong)puVar1[3] & 0x7fffffff) * 2 + uVar26 & 0xffffffff)
                                    << 2) + puVar1[2]) = iVar23;
                      goto LAB_8297754c;
                    }
                  }
                  if ((((*(uint *)(*(int *)(*(int *)(iVar20 + 4) * 4 + iVar15) + 4) & 2) != 0) &&
                      (*(int *)(iVar20 + 8) == -1)) &&
                     (puVar2 = *(uint **)(*(int *)(iVar20 + 0x48) * 4 + *(int *)(iVar10 + 0x18)),
                     (*puVar2 & 0xfff00000) == 0x30000000)) {
                    uVar34 = 0;
                    if (puVar2[3] != 0) {
                      iVar20 = 0;
                      do {
                        if (*(int *)(iVar20 + puVar2[4]) == iVar19) break;
                        uVar34 = uVar34 + 1;
                        iVar20 = iVar20 + 4;
                      } while ((uVar34 & 0xffffffff) < (ulonglong)puVar2[3]);
                    }
                    puVar6 = *(uint **)(*(int *)((int)((uVar34 + puVar2[3] & 0xffffffff) << 2) +
                                                puVar2[2]) * 4 + iVar14);
                    puVar7 = *(uint **)(*(int *)((int)((((ulonglong)puVar2[3] & 0x7fffffff) * 2 +
                                                        uVar34 & 0xffffffff) << 2) + puVar2[2]) * 4
                                       + iVar14);
                    if ((*puVar6 & 8) == 0) {
                      if ((((*(uint *)(*(int *)(puVar6[1] * 4 + iVar15) + 4) & 0x100) == 0) ||
                          (puVar6[2] != 0xffffffff)) || (*(double *)(puVar6 + 8) <= dVar47))
                      goto LAB_82977460;
                      bVar25 = true;
                    }
                    else {
                      bVar25 = false;
                    }
                    if ((*puVar7 & 8) == 0) {
                      if ((((*(uint *)(*(int *)(puVar7[1] * 4 + iVar15) + 4) & 0x100) == 0) ||
                          (puVar7[2] != 0xffffffff)) || (*(double *)(puVar7 + 8) <= dVar47))
                      goto LAB_82977460;
                      bVar29 = true;
                    }
                    else {
                      bVar29 = false;
                    }
                    uVar40 = puVar1[2];
                    uVar18 = *(undefined4 *)((int)((uVar26 + puVar1[3] & 0xffffffff) << 2) + uVar40)
                    ;
                    uVar8 = *(undefined4 *)
                             ((int)((((ulonglong)puVar1[3] & 0x7fffffff) * 2 + uVar26 & 0xffffffff)
                                   << 2) + uVar40);
                    *(undefined4 *)(iVar12 + uVar40) =
                         *(undefined4 *)((int)((uVar34 & 0xffffffff) << 2) + puVar2[2]);
                    uVar28 = uVar8;
                    if (!bVar25) {
                      uVar28 = uVar18;
                    }
                    *(undefined4 *)((int)((puVar1[3] + uVar26 & 0xffffffff) << 2) + puVar1[2]) =
                         uVar28;
                    if (bVar29) {
                      uVar18 = uVar8;
                    }
                    uStack_110 = 1;
                    *(undefined4 *)
                     ((int)((((ulonglong)puVar1[3] & 0x7fffffff) * 2 + uVar26 & 0xffffffff) << 2) +
                     puVar1[2]) = uVar18;
                    break;
                  }
                }
LAB_82977460:
                uVar37 = uVar37 + 1;
                piVar32 = piVar32 + uVar13;
                piVar31 = piVar31 + -uVar13;
              } while (uVar37 < uVar30);
              uVar34 = (ulonglong)uStack_110;
            }
          }
LAB_8297754c:
          uVar24 = (ulonglong)puVar1[3];
          uVar26 = uVar26 + 1;
          iVar12 = iVar12 + 4;
        } while ((uVar26 & 0xffffffff) < uVar24);
      }
      uVar35 = uVar35 + 1;
      iVar22 = iVar22 + 4;
    } while (uVar35 < *(uint *)(iVar10 + 0xc));
  }
  if ((int)uVar34 != 0) {
    uVar34 = 0;
    iVar21 = 1;
    uStack_110 = 0;
    fn_8296CF68(iVar10);
  }
  uVar35 = 0;
  if (*(int *)(iVar10 + 0xc) != 0) {
    iVar22 = 0;
    do {
      puVar1 = *(uint **)(*(int *)(iVar10 + 0x18) + iVar22);
      if ((((*puVar1 & 0xfff00000) != 0) &&
          ((puVar1[3] == 0 ||
           ((**(uint **)(*(int *)puVar1[4] * 4 + *(int *)(iVar10 + 0x14)) & 0x40) == 0)))) &&
         ((*puVar1 & 0xfff00000) == 0x10500000)) {
        iVar12 = -1;
        uVar18 = 0xffffffff;
        uVar40 = 0;
        if (puVar1[1] != 0) {
          iVar14 = 0;
          do {
            iVar15 = *(int *)(*(int *)(iVar14 + puVar1[2]) * 4 + *(int *)(iVar10 + 0x14));
            if ((((*(uint *)(*(int *)(*(int *)(iVar15 + 4) * 4 + *(int *)(iVar10 + 0x10)) + 4) & 2)
                  != 0) && (*(int *)(iVar15 + 8) == -1)) &&
               (puVar2 = *(uint **)(*(int *)(iVar15 + 0x48) * 4 + *(int *)(iVar10 + 0x18)),
               (*puVar2 & 0xfff00000) == 0x20500000)) {
              uVar24 = 0;
              if (puVar2[3] != 0) {
                iVar15 = 0;
                do {
                  if (*(int *)(iVar15 + puVar2[4]) == *(int *)(iVar14 + puVar1[2])) break;
                  uVar24 = uVar24 + 1;
                  iVar15 = iVar15 + 4;
                } while ((uVar24 & 0xffffffff) < (ulonglong)puVar2[3]);
              }
              uVar13 = 0;
              iVar15 = 1;
              do {
                iVar19 = *(int *)((int)(((longlong)(int)uVar13 * (longlong)(int)puVar2[3] + uVar24 &
                                        0xffffffff) << 2) + puVar2[2]);
                puVar6 = *(uint **)(iVar19 * 4 + *(int *)(iVar10 + 0x14));
                if ((((*(uint *)(*(int *)(puVar6[1] * 4 + *(int *)(iVar10 + 0x10)) + 4) & 2) != 0)
                    && (puVar6[2] == 0xffffffff)) &&
                   (puVar7 = *(uint **)(puVar6[0x12] * 4 + *(int *)(iVar10 + 0x18)),
                   (*puVar7 & 0xfff00000) == 0x10600000)) {
                  if (puVar6[0x17] == 1) {
                    uVar11 = *puVar6;
                    uVar43 = **(uint **)(*(int *)(puVar1[4] + iVar14) * 4 + *(int *)(iVar10 + 0x14))
                             | uVar11;
                    uVar30 = uVar43 & 0xe000000;
                    if ((uVar43 & 0x8000000) == 0) {
                      if ((uVar43 & 0x4000000) == 0) {
                        if ((uVar43 & 0x2000000) != 0) {
                          uVar30 = 0x2000000;
                        }
                      }
                      else {
                        uVar30 = 0x4000000;
                      }
                    }
                    else {
                      uVar30 = 0x8000000;
                    }
                    if ((uVar11 & 0xe000000) != uVar30) {
                      uVar34 = 1;
                      *puVar6 = uVar11 & 0xf1ffffff | uVar30;
                    }
                  }
                  if ((((*(uint *)(iVar10 + 0x6c) & 0x1000000) != 0) && (puVar1[3] == 1)) &&
                     ((**(uint **)(*(int *)(puVar1[4] + iVar14) * 4 + *(int *)(iVar10 + 0x14)) &
                      0x2000000) != 0)) {
                    uVar11 = 0;
                    if (puVar7[3] != 0) {
                      iVar12 = 0;
                      do {
                        if (*(int *)(puVar7[4] + iVar12) == iVar19) break;
                        uVar11 = uVar11 + 1;
                        iVar12 = iVar12 + 4;
                      } while (uVar11 < puVar7[3]);
                    }
                    iVar12 = *(int *)(uVar11 * 4 + puVar7[2]);
                    uVar18 = *(undefined4 *)
                              ((int)(((longlong)iVar15 * (longlong)(int)puVar2[3] + uVar24 &
                                     0xffffffff) << 2) + puVar2[2]);
                  }
                }
                uVar13 = uVar13 + 1;
                iVar15 = iVar15 + -1;
              } while (uVar13 < 2);
            }
            uVar40 = uVar40 + 1;
            iVar14 = iVar14 + 4;
          } while (uVar40 < puVar1[1]);
          uStack_110 = (uint)uVar34;
          if (iVar12 != -1) {
            iVar14 = fn_829646C8(iVar10,0x50100004,0xffffffffffffffff,0xffffffffffffffff);
            if ((iVar14 == -1) ||
               (iVar15 = fn_829646C8(iVar10,0x10000001,0xffffffffffffffff,0xffffffffffffffff),
               iVar15 == -1)) {
LAB_82977bd0:
              uVar34 = 0xffffffff8007000e;
              goto LAB_82978790;
            }
            iVar14 = *(int *)(iVar14 * 4 + *(int *)(iVar10 + 0x18));
            iVar15 = *(int *)(iVar15 * 4 + *(int *)(iVar10 + 0x18));
            fn_829632F0(iVar14,puVar1);
            fn_829632F0(iVar15,puVar1);
            uVar40 = 0;
            *(int *)(*(int *)(iVar14 + 8) + 4) = iVar12;
            **(int **)(iVar14 + 8) = iVar12;
            *(undefined4 *)(*(int *)(iVar14 + 8) + 0xc) = uVar18;
            *(undefined4 *)(*(int *)(iVar14 + 8) + 8) = uVar18;
            do {
              iVar12 = fn_82964628(dVar47,iVar10,*(undefined4 *)(iVar10 + 0x88),0,0);
              *(int *)(uVar40 + *(int *)(iVar14 + 0x10)) = iVar12;
              if (iVar12 == -1) goto LAB_82977bd0;
              *(undefined4 *)
               (*(int *)(*(int *)(uVar40 + *(int *)(iVar14 + 0x10)) * 4 + *(int *)(iVar10 + 0x14)) +
               0x14) = *(undefined4 *)
                        (*(int *)(*(int *)puVar1[4] * 4 + *(int *)(iVar10 + 0x14)) + 0x14);
              *(undefined4 *)
               (*(int *)(*(int *)(uVar40 + *(int *)(iVar14 + 0x10)) * 4 + *(int *)(iVar10 + 0x14)) +
               0x18) = *(undefined4 *)
                        (*(int *)(*(int *)puVar1[4] * 4 + *(int *)(iVar10 + 0x14)) + 0x18);
              puVar2 = *(uint **)(*(int *)(uVar40 + *(int *)(iVar14 + 0x10)) * 4 +
                                 *(int *)(iVar10 + 0x14));
              uVar40 = uVar40 + 4;
              *puVar2 = **(uint **)(*(int *)puVar1[4] * 4 + *(int *)(iVar10 + 0x14)) & 0xe000000 |
                        *puVar2;
            } while (uVar40 < 0x10);
            **(undefined4 **)(iVar15 + 8) = *(undefined4 *)(*(int *)(iVar14 + 0x10) + 8);
            **(undefined4 **)(iVar15 + 0x10) = *(undefined4 *)puVar1[4];
            fn_82BA02A8(puVar1);
            fn_829639F0(puVar1);
            iVar12 = *(int *)(iVar10 + 0xc);
            *(int *)(iVar10 + 0xc) = iVar12 + -1;
            if (uVar35 < iVar12 - 2U) {
              iVar19 = (iVar12 + -2) - uVar35;
              iVar12 = (iVar12 + -2) * 4;
              do {
                puVar9 = (undefined4 *)(*(int *)(iVar10 + 0x18) + iVar12);
                iVar12 = iVar12 + -4;
                *puVar9 = puVar9[-1];
                iVar19 = iVar19 + -1;
              } while (iVar19 != 0);
            }
            *(int *)(*(int *)(iVar10 + 0x18) + iVar22) = iVar14;
            *(int *)(*(int *)(iVar10 + 0x18) + iVar22 + 4) = iVar15;
            fn_8296CF68(iVar10);
            uVar34 = 1;
            uStack_110 = 1;
          }
        }
      }
      uVar35 = uVar35 + 1;
      iVar22 = iVar22 + 4;
    } while (uVar35 < *(uint *)(iVar10 + 0xc));
  }
  if ((int)uVar34 != 0) {
    uVar34 = 0;
    iVar21 = 1;
    uStack_110 = 0;
    fn_8296CF68(iVar10);
  }
  uVar35 = 0;
  if (*(int *)(iVar10 + 0xc) != 0) {
    iVar22 = 0;
    do {
      puVar1 = *(uint **)(iVar22 + *(int *)(iVar10 + 0x18));
      if (((*puVar1 & 0xfff00000) != 0) &&
         ((((puVar1[3] == 0 ||
            ((**(uint **)(*(int *)puVar1[4] * 4 + *(int *)(iVar10 + 0x14)) & 0x40) == 0)) &&
           ((*puVar1 & 0xfff00000) == 0x10400000)) && (uVar40 = 0, puVar1[1] != 0)))) {
        iVar12 = 0;
        do {
          iVar14 = *(int *)(iVar12 + puVar1[2]);
          iVar15 = *(int *)(iVar14 * 4 + *(int *)(iVar10 + 0x14));
          if ((((*(uint *)(*(int *)(*(int *)(iVar15 + 4) * 4 + *(int *)(iVar10 + 0x10)) + 4) & 2) !=
                0) && (*(int *)(iVar15 + 8) == -1)) &&
             (puVar2 = *(uint **)(*(int *)(iVar15 + 0x48) * 4 + *(int *)(iVar10 + 0x18)),
             (*puVar2 & 0xfff00000) == 0x20400000)) {
            uVar13 = puVar2[3];
            uVar24 = 0;
            if (uVar13 != 0) {
              iVar15 = 0;
              do {
                if (*(int *)(puVar2[4] + iVar15) == iVar14) break;
                uVar24 = uVar24 + 1;
                iVar15 = iVar15 + 4;
              } while ((uVar24 & 0xffffffff) < (ulonglong)uVar13);
            }
            uVar11 = 0;
            do {
              puVar6 = *(uint **)(*(int *)((int)(((longlong)(int)uVar11 * (longlong)(int)uVar13 +
                                                  uVar24 & 0xffffffff) << 2) + puVar2[2]) * 4 +
                                 *(int *)(iVar10 + 0x14));
              if ((((*(uint *)(*(int *)(puVar6[1] * 4 + *(int *)(iVar10 + 0x10)) + 4) & 0x100) != 0)
                  && ((*puVar6 & 2) != 0)) && (puVar6[2] == 0xffffffff)) {
                uVar34 = 1;
                *(undefined4 *)(iVar12 + puVar1[2]) =
                     *(undefined4 *)
                      ((int)(((longlong)(int)(1 - uVar11) * (longlong)(int)uVar13 + uVar24 &
                             0xffffffff) << 2) + puVar2[2]);
                break;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < 2);
          }
          uVar40 = uVar40 + 1;
          iVar12 = iVar12 + 4;
        } while (uVar40 < puVar1[1]);
      }
      uVar35 = uVar35 + 1;
      iVar22 = iVar22 + 4;
    } while (uVar35 < *(uint *)(iVar10 + 0xc));
    uStack_110 = (uint)uVar34;
  }
  pdVar16 = pdStack_104;
  pdVar17 = pdStack_108;
  if (((int)uVar34 != 0) || (iVar21 != 0)) {
    uVar34 = 0;
    goto LAB_82978774;
  }
  uVar24 = (ulonglong)*(uint *)(iVar10 + 0xc);
  dVar45 = lbl_82002C40;
  dVar46 = lbl_8200E890;
  dVar48 = lbl_82005758;
  uVar35 = uStack_110;
  iVar21 = iStack_f8;
  iVar22 = iStack_f4;
  if (uVar24 == 0) {
LAB_82978720:
    uVar34 = fn_8296E438(iVar10);
    if ((((longlong)uVar34 < 0) || (uVar34 = fn_82969030(iVar10), (longlong)uVar34 < 0)) ||
       (uVar34 = fn_82971580(iVar10), (longlong)uVar34 < 0)) goto LAB_82978774;
  }
  else {
    do {
      uVar26 = uVar24 - 1;
      iVar12 = (int)((uVar26 & 0xffffffff) << 2);
      puVar1 = *(uint **)(iVar12 + *(int *)(iVar10 + 0x18));
      uVar40 = puVar1[3];
      uVar39 = (ulonglong)uVar40;
      if ((uVar39 == 0) ||
         ((**(uint **)(*(int *)puVar1[4] * 4 + *(int *)(iVar10 + 0x14)) & 0x40) == 0)) {
        if (((*puVar1 & 0xfff00000) == 0x20400000) || ((*puVar1 & 0xfff00000) == 0x20500000)) {
          if (uVar39 <= uVar34) {
LAB_82977d24:
            uVar36 = 0;
            if (uVar39 != 0) {
              iVar14 = 0;
              pdVar42 = pdVar16;
              pdVar38 = pdVar17;
              do {
                *(int *)pdVar42 = -1;
                *pdVar38 = dVar48;
                iVar15 = fn_829658F8(iVar10,*(undefined4 *)(iVar14 + puVar1[4]),pdVar42,
                                           pdVar38);
                if ((iVar15 < 0) || (*(int *)pdVar42 == *(int *)(iVar14 + puVar1[4]))) break;
                uVar36 = uVar36 + 1;
                pdVar38 = pdVar38 + 1;
                iVar14 = iVar14 + 4;
                pdVar42 = (double *)((int)pdVar42 + 4);
              } while ((uVar36 & 0xffffffff) < uVar39);
            }
            if ((uVar36 & 0xffffffff) != uVar39) goto LAB_8297810c;
            iVar14 = 0;
            bVar25 = true;
            bVar29 = true;
            uVar36 = uVar39;
            pdVar42 = pdVar17;
            if (uVar39 == 0) {
LAB_82977e00:
              dVar44 = *pdVar17;
              if (dVar44 == dVar45) {
                uVar13 = uVar40 & 0xfffff | 0x20400000;
                if (*puVar1 != uVar13) {
                  uVar36 = ((ulonglong)uVar40 & 0x7fffffff) << 1;
                  *puVar1 = uVar13;
                  uVar35 = 1;
                  if (puVar1[1] < uVar36) {
                    uVar34 = fn_82963958(uVar36);
                    puVar1[2] = (uint)uVar34;
                    if ((uVar34 & 0xffffffff) != 0) {
                      puVar1[1] = (uint)uVar36;
                    /* WARNING: Subroutine does not return */
                      fn_82F691F0(uVar34,0xff,((ulonglong)uVar40 & 0x1fffffff) << 3);
                    }
                    goto LAB_8297875c;
                  }
                }
                if (uVar39 != 0) {
                  iVar15 = 0;
                  iVar14 = uVar40 << 2;
                  do {
                    if (*(int *)(iVar15 + puVar1[2]) != *(int *)(iVar15 + (int)pdVar16)) {
                      *(int *)(iVar15 + puVar1[2]) = *(int *)(iVar15 + (int)pdVar16);
                      uVar35 = 1;
                    }
                    if (*(int *)(iVar14 + puVar1[2]) != *(int *)(iVar15 + (int)pdVar16)) {
                      *(int *)(iVar14 + puVar1[2]) = *(int *)(iVar15 + (int)pdVar16);
                      uVar35 = 1;
                    }
                    iVar15 = iVar15 + 4;
                    iVar14 = iVar14 + 4;
                    uVar39 = uVar39 - 1;
                  } while (uVar39 != 0);
                }
                goto LAB_8297810c;
              }
              if (dVar44 == dVar48) {
                puVar1[1] = uVar40;
                *puVar1 = uVar40 & 0xfffff | 0x10000000;
                if (uVar40 != 0) {
                  iVar14 = 0;
                  do {
                    *(undefined4 *)(iVar14 + puVar1[2]) = *(undefined4 *)(iVar14 + (int)pdVar16);
                    iVar14 = iVar14 + 4;
                    uVar39 = uVar39 - 1;
                  } while (uVar39 != 0);
                }
              }
              else {
                if (dVar44 != dVar47) {
                  if (dVar44 == dVar46) {
                    uVar13 = uVar40 & 0xfffff | 0x10100000;
                    if (*puVar1 != uVar13) {
                      *puVar1 = uVar13;
                      uVar35 = 1;
                      puVar1[1] = uVar40;
                    }
                    if (uVar39 != 0) {
                      iVar14 = 0;
                      do {
                        if (*(int *)(iVar14 + puVar1[2]) != *(int *)(iVar14 + (int)pdVar16)) {
                          *(int *)(iVar14 + puVar1[2]) = *(int *)(iVar14 + (int)pdVar16);
                          uVar35 = 1;
                        }
                        iVar14 = iVar14 + 4;
                        uVar39 = uVar39 - 1;
                      } while (uVar39 != 0);
                    }
                    goto LAB_8297810c;
                  }
                  goto LAB_82977fc4;
                }
                puVar1[1] = uVar40;
                *puVar1 = uVar40 & 0xfffff | 0x10000000;
                if ((iVar22 == -1) &&
                   (iVar22 = fn_82964628(dVar47,iVar10,*(undefined4 *)(iVar10 + 0x78),0,0),
                   iVar22 == -1)) goto LAB_8297875c;
                if (uVar39 != 0) {
                  iVar14 = 0;
                  do {
                    *(int *)(iVar14 + puVar1[2]) = iVar22;
                    iVar14 = iVar14 + 4;
                    uVar39 = uVar39 - 1;
                  } while (uVar39 != 0);
                }
              }
              uVar35 = 1;
            }
            else {
              do {
                if ((iVar14 != 0) && (*pdVar42 != pdVar42[-1])) {
                  bVar29 = false;
                }
                if ((*pdVar42 < dVar46) || (dVar48 < *pdVar42)) {
                  bVar25 = false;
                }
                iVar14 = iVar14 + 1;
                uVar36 = uVar36 - 1;
                pdVar42 = pdVar42 + 1;
              } while (uVar36 != 0);
              if (bVar29) goto LAB_82977e00;
LAB_82977fc4:
              if (((*(uint *)(iVar10 + 0x6c) & 0x400) == 0) || (bVar25)) {
                uVar13 = uVar40 & 0xfffff | 0x20500000;
                if (*puVar1 != uVar13) {
                  uVar36 = ((ulonglong)uVar40 & 0x7fffffff) << 1;
                  *puVar1 = uVar13;
                  uVar35 = 1;
                  if (puVar1[1] < uVar36) {
                    uVar34 = fn_82963958(uVar36);
                    puVar1[2] = (uint)uVar34;
                    if ((uVar34 & 0xffffffff) != 0) {
                      puVar1[1] = (uint)uVar36;
                    /* WARNING: Subroutine does not return */
                      fn_82F691F0(uVar34,0xff,((ulonglong)uVar40 & 0x1fffffff) << 3);
                    }
                    goto LAB_8297875c;
                  }
                }
                uVar36 = 0;
                if (uVar39 != 0) {
                  iVar15 = 0;
                  iVar14 = uVar40 << 2;
                  pdVar42 = pdVar17;
                  do {
                    if (*(int *)(iVar15 + puVar1[2]) != *(int *)(iVar15 + (int)pdVar16)) {
                      *(int *)(iVar15 + puVar1[2]) = *(int *)(iVar15 + (int)pdVar16);
                      uVar35 = 1;
                    }
                    if (*(int *)(iVar14 + puVar1[2]) == -1) {
                      iVar19 = 0;
                    }
                    else {
                      iVar19 = *(int *)(*(int *)(iVar14 + puVar1[2]) * 4 + *(int *)(iVar10 + 0x14));
                    }
                    if ((((iVar19 == 0) ||
                         ((*(uint *)(*(int *)(*(int *)(iVar19 + 4) * 4 + *(int *)(iVar10 + 0x10)) +
                                    4) & 0x100) == 0)) || (*(int *)(iVar19 + 8) != -1)) ||
                       (*(double *)(iVar19 + 0x20) != *pdVar42)) {
                      uVar18 = fn_82964628(*pdVar42,iVar10,*(undefined4 *)(iVar10 + 0x78),0,0)
                      ;
                      *(undefined4 *)(iVar14 + puVar1[2]) = uVar18;
                      if (*(int *)(iVar14 + puVar1[2]) == -1) goto LAB_8297875c;
                      uVar35 = 1;
                    }
                    uVar36 = uVar36 + 1;
                    iVar15 = iVar15 + 4;
                    iVar14 = iVar14 + 4;
                    pdVar42 = pdVar42 + 1;
                  } while ((uVar36 & 0xffffffff) < uVar39);
                }
              }
            }
            goto LAB_8297810c;
          }
          uVar34 = uVar39;
          if (uVar39 < 0x11) {
            uVar34 = 0x10;
          }
          fn_8265C990(pdVar16,0x24810000);
          pdVar16 = (double *)fn_8265C940((uVar34 & 0x3fffffff) << 2,0x24810000);
          if (pdVar16 != (double *)0x0) {
            fn_8265C990(pdVar17,0x24810000);
            pdVar17 = (double *)fn_8265C940((uVar34 & 0x1fffffff) << 3,0x24810000);
            if (pdVar17 != (double *)0x0) goto LAB_82977d24;
          }
          goto LAB_8297875c;
        }
LAB_8297810c:
        if ((*puVar1 & 0xfff00000) == 0x20500000) {
          uVar40 = puVar1[3];
          uVar39 = (ulonglong)uVar40;
          uVar11 = 0;
          uVar43 = 0;
          uVar13 = 0;
          iVar14 = 0;
          if (uVar39 != 0) {
            while( true ) {
              uVar11 = uVar13;
              iVar15 = uVar43 * 4;
              uStack_110 = 0xffffffff;
              pdStack_104 = (double *)0xffffffff;
              pdStack_108 = (double *)0xffffffff;
              pdStack_10c = (double *)0xffffffff;
              *(int *)(iVar15 + (int)pdVar16) = -1;
              iVar15 = fn_82965C70(iVar10,*(undefined4 *)(iVar15 + puVar1[4]),
                                         (int *)(iVar15 + (int)pdVar16),&pdStack_108,&uStack_110,
                                         &pdStack_10c,&pdStack_104);
              if (iVar15 < 0) break;
              if ((pdStack_108 != (double *)0xffffffff) && (uStack_110 != 0xffffffff)) {
                if (*(double *)(*(int *)((int)pdStack_108 * 4 + *(int *)(iVar10 + 0x14)) + 0x20) <
                    *(double *)(*(int *)(uStack_110 * 4 + *(int *)(iVar10 + 0x14)) + 0x20)) {
                  pdStack_108 = (double *)0xffffffff;
                }
                else {
                  uStack_110 = 0xffffffff;
                }
              }
              if (pdStack_104 == (double *)0xffffffff) {
LAB_82978224:
                if ((pdStack_10c == (double *)0xffffffff) && (pdStack_108 != (double *)0xffffffff))
                {
                  iVar15 = 1;
                  pdVar42 = pdStack_108;
                  goto LAB_829782a8;
                }
                if (((pdStack_104 != (double *)0xffffffff) || (pdStack_10c != (double *)0xffffffff))
                   || (uStack_110 == 0xffffffff)) goto LAB_82978270;
                uVar13 = 0x20300000;
                iVar15 = 0;
                iVar19 = *(int *)(uStack_110 * 4 + *(int *)(iVar10 + 0x14));
              }
              else {
                if (pdStack_10c != (double *)0xffffffff) {
                  if (*(double *)(*(int *)((int)pdStack_10c * 4 + *(int *)(iVar10 + 0x14)) + 0x20) <
                      *(double *)(*(int *)((int)pdStack_104 * 4 + *(int *)(iVar10 + 0x14)) + 0x20))
                  {
                    pdStack_104 = (double *)0xffffffff;
                  }
                  else {
                    pdStack_10c = (double *)0xffffffff;
                  }
                }
                if (pdStack_104 == (double *)0xffffffff) goto LAB_82978224;
LAB_82978270:
                if ((pdStack_108 != (double *)0xffffffff) || (uStack_110 != 0xffffffff)) break;
                if (pdStack_10c == (double *)0xffffffff) {
                  if (pdStack_104 == (double *)0xffffffff) break;
                  iVar15 = 0;
                  pdVar42 = pdStack_104;
LAB_829782a8:
                  uVar13 = 0x20200000;
                }
                else {
                  uVar13 = 0x20300000;
                  iVar15 = 1;
                  pdVar42 = pdStack_10c;
                }
                iVar19 = *(int *)((int)pdVar42 * 4 + *(int *)(iVar10 + 0x14));
              }
              pdVar17[uVar43] = *(double *)(iVar19 + 0x20);
              if (((uVar43 != 0) &&
                  ((uVar13 != uVar11 ||
                   (bVar25 = iVar15 != iVar14, uVar13 = uVar11, iVar15 = iVar14, bVar25)))) ||
                 (uVar11 = uVar13, uVar43 = uVar43 + 1, uVar13 = uVar11, iVar14 = iVar15,
                 uVar39 <= uVar43)) break;
            }
          }
          if (uVar43 == uVar39) {
            if ((*(uint *)(iVar10 + 0x6c) & 0x800000) != 0) {
              uVar35 = uVar40 & 0xfffff;
              iVar15 = fn_829646C8(iVar10,uVar35 | 0x10100000,uVar39,uVar39);
              lVar33 = ((ulonglong)uVar40 & 0x7fffffff) * 2;
              iVar19 = fn_829646C8(iVar10,uVar35 | 0x20400000,lVar33,uVar39);
              iVar20 = fn_829646C8(iVar10,uVar35 | 0x30000000,uVar39 * 3,uVar39);
              if (((iVar15 != -1) && (iVar19 != -1)) && (iVar20 != -1)) {
                iVar23 = *(int *)(iVar10 + 0x18);
                iVar15 = *(int *)(iVar15 * 4 + iVar23);
                iVar20 = *(int *)(iVar20 * 4 + iVar23);
                iVar19 = *(int *)(iVar19 * 4 + iVar23);
                fn_829632F0(iVar15,puVar1);
                fn_829632F0(iVar19,puVar1);
                fn_829632F0(iVar20,puVar1);
                uVar36 = 0;
                if (iVar14 == 0) {
                  if (uVar39 != 0) {
                    iVar14 = 0;
                    pdVar42 = pdVar17;
                    do {
                      uVar18 = fn_82964628(*pdVar42,iVar10,*(undefined4 *)(iVar10 + 0x78),0,0)
                      ;
                      *(undefined4 *)(iVar14 + *(int *)(iVar15 + 8)) = uVar18;
                      *(undefined4 *)(iVar14 + *(int *)(iVar19 + 8)) =
                           *(undefined4 *)(iVar14 + (int)pdVar16);
                      if (*(int *)(iVar14 + *(int *)(iVar15 + 8)) == -1) goto LAB_8297875c;
                      uVar36 = uVar36 + 1;
                      pdVar42 = pdVar42 + 1;
                      iVar14 = iVar14 + 4;
                    } while ((uVar36 & 0xffffffff) < uVar39);
                  }
                }
                else if (uVar39 != 0) {
                  iVar14 = 0;
                  pdVar42 = pdVar17;
                  do {
                    *(undefined4 *)(iVar14 + *(int *)(iVar15 + 8)) =
                         *(undefined4 *)(iVar14 + (int)pdVar16);
                    uVar18 = fn_82964628(*pdVar42,iVar10,*(undefined4 *)(iVar10 + 0x78),0,0);
                    *(undefined4 *)(iVar14 + *(int *)(iVar19 + 8)) = uVar18;
                    if (*(int *)(iVar14 + *(int *)(iVar19 + 8)) == -1) goto LAB_8297875c;
                    uVar36 = uVar36 + 1;
                    pdVar42 = pdVar42 + 1;
                    iVar14 = iVar14 + 4;
                  } while ((uVar36 & 0xffffffff) < uVar39);
                }
                if (((iVar21 != -1) ||
                    (iVar21 = fn_82964628(dVar48,iVar10,*(undefined4 *)(iVar10 + 0x78),0,0),
                    iVar21 != -1)) &&
                   ((iVar22 != -1 ||
                    (iVar22 = fn_82964628(dVar47,iVar10,*(undefined4 *)(iVar10 + 0x78),0,0),
                    iVar22 != -1)))) {
                  lVar41 = 0;
                  if (uVar11 == 0x20300000) {
                    if (uVar39 != 0) {
                      iVar14 = uVar40 << 2;
                      uVar36 = uVar39;
                      do {
                        uVar27 = lVar41 + lVar33;
                        lVar41 = lVar41 + 1;
                        *(int *)(*(int *)(iVar20 + 8) + iVar14) = iVar21;
                        iVar14 = iVar14 + 4;
                        *(int *)((int)((uVar27 & 0xffffffff) << 2) + *(int *)(iVar20 + 8)) = iVar22;
                        uVar36 = uVar36 - 1;
                      } while (uVar36 != 0);
                    }
                  }
                  else if (uVar39 != 0) {
                    iVar14 = uVar40 << 2;
                    uVar36 = uVar39;
                    do {
                      uVar27 = lVar41 + lVar33;
                      lVar41 = lVar41 + 1;
                      *(int *)(*(int *)(iVar20 + 8) + iVar14) = iVar22;
                      iVar14 = iVar14 + 4;
                      *(int *)((int)((uVar27 & 0xffffffff) << 2) + *(int *)(iVar20 + 8)) = iVar21;
                      uVar36 = uVar36 - 1;
                    } while (uVar36 != 0);
                  }
                  uVar36 = 0;
                  if (uVar39 != 0) {
                    iVar23 = 0;
                    iVar14 = uVar40 << 2;
                    do {
                      uVar18 = fn_82964628(dVar47,iVar10,*(undefined4 *)(iVar10 + 0x88),0,0);
                      *(undefined4 *)(iVar23 + *(int *)(iVar15 + 0x10)) = uVar18;
                      uVar18 = fn_82964628(dVar47,iVar10,*(undefined4 *)(iVar10 + 0x88),0,0);
                      *(undefined4 *)(*(int *)(iVar19 + 0x10) + iVar23) = uVar18;
                      *(undefined4 *)(*(int *)(iVar20 + 0x10) + iVar23) =
                           *(undefined4 *)(iVar23 + puVar1[4]);
                      iVar5 = *(int *)(iVar23 + *(int *)(iVar15 + 0x10));
                      if ((iVar5 == -1) || (*(int *)(*(int *)(iVar19 + 0x10) + iVar23) == -1))
                      goto LAB_8297875c;
                      uVar36 = uVar36 + 1;
                      *(int *)(*(int *)(iVar19 + 8) + iVar14) = iVar5;
                      iVar14 = iVar14 + 4;
                      *(undefined4 *)(*(int *)(iVar20 + 8) + iVar23) =
                           *(undefined4 *)(*(int *)(iVar19 + 0x10) + iVar23);
                      iVar23 = iVar23 + 4;
                    } while ((uVar36 & 0xffffffff) < uVar39);
                  }
                  uVar39 = (ulonglong)*(uint *)(iVar10 + 0xc) - 3;
                  if ((uVar26 & 0xffffffff) < (uVar39 & 0xffffffff)) {
                    lVar33 = uVar39 - uVar26;
                    lVar41 = (uVar39 & 0x3fffffff) << 2;
                    do {
                      lVar41 = lVar41 + -4;
                      *(undefined4 *)(*(int *)(iVar10 + 0x18) + (int)lVar41 + 0xc) =
                           *(undefined4 *)(*(int *)(iVar10 + 0x18) + (int)lVar41);
                      lVar33 = lVar33 + -1;
                    } while (lVar33 != 0);
                  }
                  uStack_110 = 1;
                  *(int *)(iVar12 + *(int *)(iVar10 + 0x18) + 4) = iVar15;
                  uVar35 = 1;
                  *(int *)((int)((uVar24 + 1 & 0xffffffff) << 2) + *(int *)(iVar10 + 0x18)) = iVar19
                  ;
                  *(int *)((int)((uVar24 + 2 & 0xffffffff) << 2) + *(int *)(iVar10 + 0x18)) = iVar20
                  ;
                  *puVar1 = 0;
                  goto LAB_82978710;
                }
              }
LAB_8297875c:
              uVar34 = 0xffffffff8007000e;
              goto LAB_82978774;
            }
            *puVar1 = uVar40 & 0xfffff | uVar11;
            uVar24 = 0;
            if (uVar39 != 0) {
              lVar33 = (-(ulonglong)(iVar14 != 0) & uVar39 & 0x3fffffff) << 2;
              uVar35 = puVar1[2];
              lVar41 = (-(ulonglong)(iVar14 == 0) & uVar39 & 0x3fffffff) << 2;
              pdVar42 = pdVar16;
              pdVar38 = pdVar17;
              do {
                *(int *)((int)lVar33 + uVar35) = *(int *)pdVar42;
                uVar18 = fn_82964628(*pdVar38,iVar10,*(undefined4 *)(iVar10 + 0x78),0,0);
                *(undefined4 *)((int)lVar41 + puVar1[2]) = uVar18;
                uVar35 = puVar1[2];
                if (*(int *)((int)lVar41 + uVar35) == -1) goto LAB_8297875c;
                uVar24 = uVar24 + 1;
                pdVar42 = (double *)((int)pdVar42 + 4);
                lVar33 = lVar33 + 4;
                lVar41 = lVar41 + 4;
                pdVar38 = pdVar38 + 1;
              } while ((uVar24 & 0xffffffff) < uVar39);
            }
            uVar35 = 1;
          }
        }
      }
LAB_82978710:
      uVar24 = uVar26;
    } while ((uVar26 & 0xffffffff) != 0);
    if (uVar35 == 0) goto LAB_82978720;
  }
  uVar34 = (ulonglong)(uVar35 == 0);
LAB_82978774:
  fn_8265C990(pdVar16,0x24810000);
  fn_8265C990(pdVar17,0x24810000);
LAB_82978790:
  fn_82F6A594(uVar34);
  return;
}

