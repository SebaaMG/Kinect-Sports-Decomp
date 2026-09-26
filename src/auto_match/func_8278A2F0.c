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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_118;
extern int fn_827888E8();
extern int fn_82788C30();
extern int fn_82788E48();
extern int fn_82788F20();
extern int fn_82789C08();
extern int fn_82789D68();
extern int fn_82789EF0();
extern int fn_82789FE0();
extern int fn_8278A1E0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_e8;
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_820155B0;
extern unsigned int lbl_820155B4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_8278A2F0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  uint *puVar7;
  char cVar11;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  undefined4 *puVar16;
  uint uVar19;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  float *pfVar25;
  int *piVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  int iVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  double dVar33;
  double extraout_f1;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  uint uStack_120;
  undefined4 uStack_11c;
  uint auStack_118 [2];
  uint uStack_110;
  undefined4 uStack_10c;
  uint uStack_108;
  uint uStack_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  
  puVar7 = (uint *)fn_82F6A548();
  puVar7[0x17] = 0;
  puVar22 = puVar7 + 0x17;
  dVar37 = extraout_f1;
  fn_82789EF0();
  dVar34 = (double)lbl_821AAD20;
  if (dVar37 < dVar34) {
    uVar23 = 0x90ffffff;
    if (param_3 == 0) {
      uVar23 = puVar7[0x1f] | 0x90000000;
      dVar37 = (double)(float)(dVar37 * (double)lbl_82005344);
    }
    uVar21 = 0;
    dVar35 = (double)(float)(ABS(dVar37) * (double)lbl_8200D898);
    if (puVar7[8] != 0) {
      iVar13 = 0;
      do {
        uVar24 = 0;
        puVar27 = (uint *)(*(int *)((uVar21 >> 6 & 0x3fffffc) + puVar7[0xb]) +
                          (uVar21 & 0xff) * 0x3c);
        puVar28 = puVar27;
        do {
          if (((*(byte *)((int)puVar27 + uVar24 + 0x34) & 1) == 0) &&
             ((*(uint *)(*(int *)((*puVar28 >> 6 & 0x3fffffc) + puVar7[3]) + (*puVar28 & 0xff) * 0xc
                        + 8) & 0x20000000) == 0)) {
            cVar11 = fn_82789FE0(puVar7,iVar13 + uVar24);
            if ((puVar7[0xf] != 0) &&
               ((cVar11 == '\0' ||
                (uVar19 = puVar7[0xf] - 1, uVar4 = **(int **)puVar7[0x12] >> 2,
                uVar19 = *(int *)(*(int *)((uVar19 >> 4 & 0xffffffc) + (int)puVar7[0x12]) +
                                 (uVar19 & 0x3f) * 4) >> 2,
                *(int *)(*(int *)((uVar4 >> 6 & 0x3fffffc) + puVar7[0xb]) + (uVar4 & 0xff) * 0x3c +
                        0x38) !=
                *(int *)(*(int *)((uVar19 >> 6 & 0x3fffffc) + puVar7[0xb]) + (uVar19 & 0xff) * 0x3c
                        + 0x38))))) {
              puVar7[0x13] = 0;
              puVar29 = puVar7 + 0x13;
              pfVar25 = (float *)(*(int *)((*puVar28 >> 6 & 0x3fffffc) + puVar7[3]) +
                                 (*puVar28 & 0xff) * 0xc);
              if (cVar11 == '\0') {
                fn_827888E8(-dVar37,dVar35,puVar7);
                uStack_110 = uStack_120;
                uVar4 = *puVar7;
                uStack_10c = uStack_11c;
                auStack_118[0] = uVar4;
                uStack_108 = uVar23;
                fn_82789C08(puVar7,&uStack_110);
                fn_82789D68(puVar29,auStack_118);
                uVar19 = **(uint **)puVar7[0x12];
                *(uint *)(((&lbl_820155B4)[uVar19 & 3] + (uVar19 >> 2 & 0xff) * 0xf + 10) * 4 +
                         *(int *)((uVar19 >> 8 & 0xfffffc) + puVar7[0xb])) = uVar4;
                uVar19 = *(uint *)(*(int *)((puVar7[0xf] - 1 >> 4 & 0xffffffc) + puVar7[0x12]) +
                                  ((puVar7[0xf] - 1) * 4 & 0xfc));
                *(uint *)(((uVar19 >> 2 & 0xff) * 0xf + (uVar19 & 3) + 10) * 4 +
                         *(int *)((uVar19 >> 8 & 0xfffffc) + puVar7[0xb])) = uVar4;
              }
              if (param_3 == 1) {
                uVar32 = 0;
                uVar4 = uVar23;
                if (puVar7[0xf] != 0) {
                  do {
                    uStack_f8 = uVar4;
                    uVar31 = uVar32 + 1;
                    uVar4 = *(int *)(*(int *)(((uint)uVar32 >> 4 & 0xffffffc) + puVar7[0x12]) +
                                    ((uint)((uVar32 & 0xffffffff) << 2) & 0xfc)) >> 2;
                    if ((uVar31 & 0xffffffff) < (ulonglong)puVar7[0xf]) {
                      do {
                        uVar19 = *(int *)(*(int *)(((uint)uVar31 >> 4 & 0xffffffc) + puVar7[0x12]) +
                                         ((uint)((uVar31 & 0xffffffff) << 2) & 0xfc)) >> 2;
                        if (*(int *)(*(int *)((uVar4 >> 6 & 0x3fffffc) + puVar7[0xb]) +
                                     (uVar4 & 0xff) * 0x3c + 0x38) !=
                            *(int *)(*(int *)((uVar19 >> 6 & 0x3fffffc) + puVar7[0xb]) +
                                     (uVar19 & 0xff) * 0x3c + 0x38)) break;
                        uVar31 = uVar31 + 1;
                      } while ((uVar31 & 0xffffffff) < (ulonglong)puVar7[0xf]);
                    }
                    fn_827888E8(dVar37,dVar35,puVar7);
                    uVar4 = *puVar7;
                    uStack_100 = uStack_120;
                    uStack_fc = uStack_11c;
                    auStack_118[0] = uVar4;
                    fn_82789C08(puVar7,&uStack_100);
                    fn_82789D68(puVar29,auStack_118);
                    if ((uVar32 & 0xffffffff) < (uVar31 & 0xffffffff)) {
                      dVar36 = -dVar37;
                      do {
                        uVar19 = *(uint *)(*(int *)(((uint)uVar32 >> 4 & 0xffffffc) + puVar7[0x12])
                                          + ((uint)((uVar32 & 0xffffffff) << 2) & 0xfc));
                        uVar17 = (ulonglong)(uint)(&lbl_820155B4)[uVar19 & 3] |
                                 (ulonglong)uVar19 & 0xfffffffc;
                        uVar18 = (ulonglong)(uint)(&lbl_820155B4)[uVar19 & 3] & 3;
                        lVar12 = (ulonglong)*(uint *)(((uint)uVar17 >> 8 & 0xfffffc) + puVar7[0xb])
                                 + (uVar17 >> 2 & 0xff) * 0x3c;
                        fn_82788C30(dVar36,puVar7,
                                      (ulonglong)*(uint *)((*puVar28 >> 6 & 0x3fffffc) + puVar7[3])
                                      + ((ulonglong)*puVar28 & 0xff) * 0xc,lVar12,uVar18);
                        iVar30 = (int)uVar18;
                        iVar20 = iVar30 + (int)lVar12;
                        uVar32 = uVar32 + 2;
                        *(uint *)((iVar30 + 3) * 4 + (int)lVar12) = uVar4;
                        *(byte *)(iVar20 + 0x34) = *(byte *)(iVar20 + 0x34) | 1;
                      } while ((uVar32 & 0xffffffff) < (uVar31 & 0xffffffff));
                    }
                    uVar32 = uVar31;
                    uVar4 = uStack_f8;
                  } while ((uVar31 & 0xffffffff) < (ulonglong)puVar7[0xf]);
                }
                while (2 < *puVar29) {
                  uVar4 = *puVar29;
                  uVar18 = (ulonglong)uVar4;
                  uVar32 = 0;
                  uVar31 = 0;
                  if (uVar18 != 0) {
                    uVar17 = uVar18;
                    dVar36 = dVar34;
                    do {
                      uVar19 = *(uint *)(*(int *)(((uint)uVar31 >> 4 & 0xffffffc) + puVar7[0x16]) +
                                        ((uint)((uVar31 & 0xffffffff) << 2) & 0xfc));
                      pfVar15 = (float *)(*(int *)((uVar19 >> 6 & 0x3fffffc) + puVar7[3]) +
                                         (uVar19 & 0xff) * 0xc);
                      fVar5 = *pfVar25 - *pfVar15;
                      fVar6 = pfVar25[1] - pfVar15[1];
                      dVar33 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5);
                      if (dVar36 < dVar33) {
                        uVar32 = uVar31;
                        dVar36 = dVar33;
                      }
                      uVar31 = uVar31 + 1;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  uVar19 = puVar7[0x16];
                  uVar17 = (uVar18 + uVar32) - 1;
                  trapWord(6,uVar18,0);
                  trapWord(6,uVar18,0);
                  uVar17 = uVar17 - (longlong)(int)((uVar17 & 0xffffffff) / uVar18) *
                                    (longlong)(int)uVar4;
                  uVar31 = (uVar32 + 1) -
                           (longlong)(int)((uVar32 + 1 & 0xffffffff) / uVar18) *
                           (longlong)(int)uVar4;
                  iStack_f0 = *(int *)(*(int *)(((uint)uVar17 >> 4 & 0xffffffc) + uVar19) +
                                      ((uint)((uVar17 & 0xffffffff) << 2) & 0xfc));
                  iStack_ec = *(int *)(*(int *)(((uint)uVar32 >> 4 & 0xffffffc) + uVar19) +
                                      ((uint)((uVar32 & 0xffffffff) << 2) & 0xfc));
                  iStack_e8 = *(int *)(*(int *)(((uint)((uVar31 & 0xffffffff) >> 4) & 0xffffffc) +
                                               uVar19) + ((uint)((uVar31 & 0xffffffff) << 2) & 0xfc)
                                      );
                  fn_82789C08(puVar22,&iStack_f0);
                  fn_82788E48(puVar29,uVar32);
                }
              }
              iVar20 = *(int *)((*puVar28 >> 6 & 0x3fffffc) + puVar7[3]) + (*puVar28 & 0xff) * 0xc;
              *(uint *)(iVar20 + 8) = *(uint *)(iVar20 + 8) | 0x20000000;
            }
          }
          uVar24 = uVar24 + 1;
          puVar28 = puVar28 + 1;
        } while (uVar24 < 3);
        uVar21 = uVar21 + 1;
        iVar13 = iVar13 + 4;
      } while (uVar21 < puVar7[8]);
    }
    uVar23 = 0;
    if (puVar7[8] != 0) {
      do {
        iVar30 = *(int *)((uVar23 >> 6 & 0x3fffffc) + puVar7[0xb]) + (uVar23 & 0xff) * 0x3c;
        iVar13 = *(int *)(iVar30 + 0xc);
        iVar20 = *(int *)(iVar30 + 0x10);
        if (((iVar13 != iVar20) && (iVar1 = *(int *)(iVar30 + 0x14), iVar20 != iVar1)) &&
           (iVar1 != iVar13)) {
          iStack_f0 = iVar13;
          iStack_ec = iVar20;
          iStack_e8 = iVar1;
          fn_82789C08(puVar22,&iStack_f0);
        }
        uVar32 = 0;
        iVar13 = iVar30 + 0x34;
        puVar28 = (uint *)(iVar30 + 0x1c);
        piVar26 = (int *)&lbl_820155B0;
        do {
          piVar26 = piVar26 + 1;
          *(uint *)(*(int *)((puVar28[-4] >> 6 & 0x3fffffc) + puVar7[3]) +
                    (puVar28[-4] & 0xff) * 0xc + 8) = *(uint *)(iVar30 + 0x38) | 0x10000000;
          uVar21 = (uint)uVar32;
          if ((*(byte *)(iVar13 + uVar21) & 2) == 0) {
            uVar24 = *puVar28;
            if ((int)uVar24 < 0) {
              uVar24 = puVar28[3];
              uVar4 = *(uint *)((*piVar26 + 10) * 4 + iVar30);
              if ((-1 < (int)uVar4) && (-1 < (int)uVar24)) {
                uVar31 = ((ulonglong)uVar23 & 0x3fffffff) << 2;
                uVar19 = (uint)uVar31 | uVar21;
                uVar10 = *(undefined4 *)
                          ((int)(((ulonglong)
                                  *(uint *)((int)&lbl_820155B4 +
                                           ((uint)((uVar32 & 0xffffffff) << 2) & 0xc)) +
                                  ((uVar31 | uVar32 & 0xffffffff) >> 2 & 0xff) * 0xf + 3 &
                                 0xffffffff) << 2) +
                          *(int *)((uVar19 >> 8 & 0xfffffc) + puVar7[0xb]));
                uStack_100 = *(uint *)((((uint)((uVar31 | uVar32 & 0xffffffff) >> 2) & 0xff) * 0xf +
                                        (uVar21 & 3) + 3) * 4 +
                                      *(int *)((uVar19 >> 8 & 0xfffffc) + puVar7[0xb]));
                uStack_fc = uVar10;
                uStack_f8 = uVar24;
                fn_82789C08(puVar22,&uStack_100);
                uStack_110 = uVar24;
                uStack_10c = uVar10;
                uStack_108 = uVar4;
                fn_82789C08(puVar22,&uStack_110);
              }
            }
            else {
              uVar4 = puVar7[0xb];
              iVar20 = *(int *)(((uint)((int)uVar24 >> 2) >> 6 & 0x3fffffc) + uVar4) +
                       ((int)uVar24 >> 2 & 0xffU) * 0x3c;
              if (*(int *)(iVar20 + 0x38) != *(int *)(iVar30 + 0x38)) {
                uVar31 = ((ulonglong)uVar23 & 0x3fffffff) << 2;
                uVar19 = (uint)uVar31 | uVar21;
                iVar14 = (uVar24 >> 2 & 0xff) * 0xf;
                iVar1 = *(int *)((uVar24 >> 8 & 0xfffffc) + uVar4);
                uVar10 = *(undefined4 *)
                          ((int)(((ulonglong)
                                  *(uint *)((int)&lbl_820155B4 +
                                           ((uint)((uVar32 & 0xffffffff) << 2) & 0xc)) +
                                  ((uVar31 | uVar32 & 0xffffffff) >> 2 & 0xff) * 0xf + 3 &
                                 0xffffffff) << 2) + *(int *)((uVar19 >> 8 & 0xfffffc) + uVar4));
                uVar2 = *(undefined4 *)(((&lbl_820155B4)[uVar24 & 3] + iVar14 + 3) * 4 + iVar1);
                uStack_e0 = *(undefined4 *)
                             ((((uint)((uVar31 | uVar32 & 0xffffffff) >> 2) & 0xff) * 0xf +
                               (uVar21 & 3) + 3) * 4 + *(int *)((uVar19 >> 8 & 0xfffffc) + uVar4));
                uVar3 = *(undefined4 *)((iVar14 + (uVar24 & 3) + 3) * 4 + iVar1);
                uStack_dc = uVar10;
                uStack_d8 = uVar2;
                fn_82789C08(puVar22,&uStack_e0);
                uStack_d0 = uVar2;
                uStack_cc = uVar10;
                uStack_c8 = uVar3;
                fn_82789C08(puVar22,&uStack_d0);
                iVar20 = (uVar24 & 3) + iVar20;
                *(byte *)(iVar20 + 0x34) = *(byte *)(iVar20 + 0x34) | 2;
              }
            }
            *(byte *)(iVar13 + uVar21) = *(byte *)(iVar13 + uVar21) | 2;
          }
          uVar32 = uVar32 + 1;
          puVar28 = puVar28 + 1;
        } while ((uVar32 & 0xffffffff) < 3);
        uVar23 = uVar23 + 1;
      } while (uVar23 < puVar7[8]);
    }
    if (param_3 == 1) {
      uVar23 = *puVar7;
      puVar28 = puVar7 + 0x1b;
      fn_82788F20(puVar28,uVar23,0);
      puVar7[0x1c] = uVar23;
      uVar21 = 0;
      uVar23 = 0;
      if (*puVar7 != 0) {
        iVar13 = 0;
        do {
          *(uint *)(iVar13 + *puVar28) = uVar21;
          puVar16 = (undefined4 *)
                    (*(int *)((uVar23 >> 6 & 0x3fffffc) + puVar7[3]) + (uVar23 & 0xff) * 0xc);
          if ((puVar16[2] & 0x10000000) != 0) {
            uVar24 = uVar21 >> 6;
            uVar4 = uVar21 & 0xff;
            uVar21 = uVar21 + 1;
            iVar30 = uVar4 * 0xc;
            iVar20 = *(int *)((uVar24 & 0x3fffffc) + puVar7[3]);
            *(undefined4 *)(iVar20 + iVar30) = *puVar16;
            iVar20 = iVar20 + iVar30;
            *(undefined4 *)(iVar20 + 4) = puVar16[1];
            *(undefined4 *)(iVar20 + 8) = puVar16[2];
          }
          uVar23 = uVar23 + 1;
          iVar13 = iVar13 + 4;
        } while (uVar23 < *puVar7);
      }
      puVar7[0x1e] = uVar21;
      if (uVar21 < *puVar7) {
        *puVar7 = uVar21;
      }
      uVar32 = 0;
      if (*puVar22 != 0) {
        do {
          uVar21 = (uint)((uVar32 & 0xffffffff) >> 6) & 0x3fffffc;
          uVar23 = *puVar28;
          iVar20 = ((uint)uVar32 & 0xff) * 0xc;
          iVar13 = *(int *)(uVar21 + puVar7[0x1a]);
          iVar30 = iVar13 + iVar20;
          uVar10 = *(undefined4 *)(*(int *)(iVar13 + iVar20) * 4 + uVar23);
          uVar2 = *(undefined4 *)(*(int *)(iVar30 + 4) * 4 + uVar23);
          uVar3 = *(undefined4 *)(*(int *)(iVar30 + 8) * 4 + uVar23);
          uVar8 = fn_8278A1E0(puVar7,uVar10,uVar2,uVar3);
          uVar9 = fn_8278A1E0(puVar7,uVar2,uVar3,uVar10);
          uVar10 = fn_8278A1E0(puVar7,uVar3,uVar10,uVar2);
          uVar32 = uVar32 + 1;
          iVar13 = *(int *)(uVar21 + puVar7[0x1a]);
          iVar30 = iVar13 + iVar20;
          *(undefined4 *)(iVar13 + iVar20) = uVar8;
          *(undefined4 *)(iVar30 + 8) = uVar10;
          *(undefined4 *)(iVar30 + 4) = uVar9;
        } while ((uVar32 & 0xffffffff) < (ulonglong)*puVar22);
      }
    }
  }
  fn_82F6A594();
  return;
}

