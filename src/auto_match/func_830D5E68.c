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
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_830D9228();
extern unsigned int lbl_820FDD78;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_d0;
extern unsigned int uStack_ec;


undefined8 fn_830D5E68(int *param_1,uint *param_2,uint param_3,uint param_4,int *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  short sVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  ulonglong *puVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  byte *pbVar19;
  ushort uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  short sVar27;
  uint uVar26;
  short sVar30;
  uint uVar29;
  ulonglong uVar28;
  short *psVar31;
  ulonglong uVar32;
  longlong lVar33;
  short *psVar34;
  ulonglong uVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  longlong lVar39;
  uint uVar40;
  uint uVar41;
  short *psVar42;
  ulonglong uVar43;
  short sVar44;
  short *psVar45;
  uint *puStack0000001c;
  uint uStack00000024;
  uint uStack0000002c;
  int *piStack00000034;
  int *piStack_f4;
  int *piStack_f0;
  uint uStack_ec;
  ulonglong uStack_d0;
  short asStack_c6 [2];
  short sStack_c2;
  short asStack_c0 [8];
  short asStack_b0 [88];
  
  bVar1 = *(byte *)(param_2 + 1);
  uVar26 = *param_2;
  iVar38 = param_5[1];
  iVar11 = param_1[0x61];
  uVar8 = *(ushort *)((int)param_1 + 0x32);
  iVar12 = *param_5;
  uStack_ec = (uint)*(byte *)((int)param_2 + 5);
  iVar23 = iVar38 * 8 + param_1[0x148];
  uVar35 = 0;
  iVar21 = param_1[0x58];
  uVar25 = -(param_4 & 1) & (uint)uVar8;
  iVar22 = uVar8 * param_4;
  uStack_d0 = 0;
  uVar37 = *(int *)(param_1[0x146] + param_4 * 4) - 1U & param_4;
  if (*(char *)(param_1 + 7) == '\0') {
    piStack_f0 = param_1 + 0x65;
    piStack_f4 = param_1 + 0x68;
  }
  else {
    uVar36 = uVar26 >> 0x14 & 0xc;
    piStack_f0 = (int *)(param_1[99] + uVar36);
    piStack_f4 = (int *)(param_1[100] + uVar36);
  }
  puVar18 = (undefined4 *)(iVar12 * 4 + param_1[0x57]);
  puVar17 = (undefined4 *)((iVar12 + (uint)uVar8) * 4 + param_1[0x57]);
  puVar17[1] = 0x4000;
  *puVar17 = 0x4000;
  puVar18[1] = 0x4000;
  *puVar18 = 0x4000;
  *(undefined4 *)(iVar38 * 4 + iVar21) = 0x4000;
  puStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  piStack00000034 = param_5;
  uVar43 = uStack_d0;
  do {
    uStack_d0 = uVar43;
    uVar36 = (uint)uVar35;
    if ((int)uVar36 >> 2 == 0) {
      piVar13 = (int *)param_1[0x132];
      uVar10 = *(ushort *)((int)((uVar35 + 0x12 & 0xffffffff) << 1) + (int)param_1);
      sVar27 = *(short *)((((uStack0000002c & 1) << 1 | (int)uVar36 >> 1) + 0xb8) * 2 + (int)param_1
                         );
      iVar38 = ((iVar22 + uStack00000024) * 2 + (uint)uVar10) * 4 + param_1[0x57];
      psVar45 = (short *)(param_1[0x6c] + ((uVar25 + uStack00000024) * 2 + (uint)uVar10) * 0x20);
      piVar14 = piStack_f4;
      uVar29 = ((int)uVar36 >> 1) + uVar37;
      uVar40 = (uVar36 & 1) + uStack00000024;
    }
    else {
      piVar13 = (int *)param_1[0x133];
      sVar27 = *(short *)(((uStack0000002c & 1) + 0xb6) * 2 + (int)param_1);
      iVar38 = ((iVar22 >> 1) + uStack00000024) * 4 + param_1[0x58];
      psVar45 = (short *)(*(int *)((int)((uVar35 + 0x69 & 0xffffffff) << 2) + (int)param_1) +
                         (((int)uVar25 >> 1) + uStack00000024) * 0x20);
      piVar14 = piStack_f0;
      uVar29 = uVar37;
      uVar40 = uStack00000024;
    }
    iVar21 = *(int *)((uint)bVar1 * 0x14 + iVar11 + 0x10);
    lVar39 = (ulonglong)(uint)piStack00000034[7] - 0x80;
    piStack00000034[7] = (int)(short *)lVar39;
    dataCacheBlockClearToZero(lVar39);
    sVar30 = 0;
    puVar15 = (ulonglong *)*param_1;
    if (piVar13 == (int *)0x0) {
      uVar43 = 0;
      *(undefined4 *)((int)puVar15 + 0x14) = 3;
    }
    else {
      iVar24 = *piVar13;
      sVar44 = *(short *)((int)((*puVar15 >> (0x40 - (ulonglong)*(byte *)(piVar13 + 2) & 0x7f) &
                                0xffffffff) << 1) + iVar24);
      uVar43 = (ulonglong)sVar44;
      if (sVar44 < 0) {
        fn_82C4E470(puVar15);
        do {
          uVar32 = *puVar15;
          fn_82C4E470(puVar15,1);
          sVar44 = *(short *)((int)(((uVar43 - ((longlong)uVar32 >> 0x3f)) + 0x8000 & 0xffffffff) <<
                                   1) + iVar24);
          uVar43 = (ulonglong)sVar44;
        } while (sVar44 < 0);
      }
      else {
        iVar24 = *(int *)(puVar15 + 1);
        iVar16 = (int)(uVar43 & 0xf);
        *puVar15 = *puVar15 << (uVar43 & 0xf);
        *(int *)(puVar15 + 1) = iVar24 - iVar16;
        if (iVar24 < iVar16) {
          do {
            pbVar19 = *(byte **)((int)puVar15 + 0xc);
            if (pbVar19 < (byte *)(*(int *)(puVar15 + 2) - 4U)) {
              bVar2 = *pbVar19;
              bVar3 = pbVar19[1];
              bVar4 = pbVar19[2];
              bVar5 = pbVar19[4];
              bVar6 = pbVar19[3];
              bVar7 = pbVar19[5];
              iVar24 = *(int *)(puVar15 + 1);
              *(byte **)((int)puVar15 + 0xc) = pbVar19 + 6;
              *(int *)(puVar15 + 1) = iVar24 + 0x30;
              *puVar15 = ((((((ulonglong)bVar2 * 0x100 + (ulonglong)bVar3) * 0x100 +
                            (ulonglong)bVar4) * 0x100 + (ulonglong)bVar6) * 0x100 + (ulonglong)bVar5
                          ) * 0x100 + (ulonglong)bVar7 << ((longlong)-iVar24 & 0x7fU)) + *puVar15;
              goto LAB_830d6198;
            }
            iVar24 = fn_82C4E3B0(puVar15);
          } while (iVar24 == 1);
          uVar43 = (ulonglong)((int)sVar44 >> 4);
        }
        else {
LAB_830d6198:
          uVar43 = (ulonglong)((int)sVar44 >> 4);
        }
      }
    }
    sVar44 = (short)uVar43;
    if ((int)(uVar43 & 0xffff) == 0x77) {
      if (iVar21 < 5) {
        lVar33 = 3 - (longlong)(iVar21 >> 1);
      }
      else {
        lVar33 = 0;
      }
      uVar43 = (ulonglong)*(uint *)(puVar15 + 1);
      uVar28 = lVar33 + 8;
      iVar21 = 0;
      sVar44 = 0;
      uVar32 = uVar43 + 0x10;
      if ((uVar28 & 0xffffffff) < 0x21) {
        if ((uVar28 & 0xffffffff) == 0) {
          sVar44 = 0;
        }
        else {
          if ((uVar32 & 0xffffffff) < (uVar28 & 0xffffffff)) {
            do {
              sVar44 = (short)iVar21;
              if ((uVar32 & 0xffffffff) == 0) break;
              uVar28 = uVar28 - uVar32;
              *(int *)(puVar15 + 1) = (int)(uVar43 - uVar32);
              iVar21 = ((int)(*puVar15 >> (0x40 - uVar32 & 0x7f)) << ((uint)uVar28 & 0x3f)) + iVar21
              ;
              sVar44 = (short)iVar21;
              *puVar15 = *puVar15 << (uVar32 & 0x7f);
              if ((longlong)(uVar43 - uVar32) < 0) {
                fn_82C4E5E8(puVar15);
              }
              uVar43 = (ulonglong)*(uint *)(puVar15 + 1);
              uVar32 = uVar43 + 0x10;
            } while ((uVar32 & 0xffffffff) < (uVar28 & 0xffffffff));
          }
          *(int *)(puVar15 + 1) = (int)(uVar43 - uVar28);
          sVar44 = (short)(*puVar15 >> (0x40 - uVar28 & 0x7f)) + sVar44;
          *puVar15 = *puVar15 << (uVar28 & 0x7f);
          if ((longlong)(uVar43 - uVar28) < 0) {
            fn_82C4E5E8(puVar15);
          }
        }
      }
      else {
        sVar44 = 0;
      }
LAB_830d63e8:
      uVar43 = *puVar15;
      uVar41 = *(uint *)(puVar15 + 1);
      *puVar15 = uVar43 << 1;
      *(int *)(puVar15 + 1) = (int)((ulonglong)uVar41 - 1);
      if ((longlong)((ulonglong)uVar41 - 1) < 0) {
        fn_82C4E5E8(puVar15);
      }
      sVar30 = (1 - (short)((uVar43 >> 0x3f) << 1)) * sVar44;
    }
    else if ((uVar43 & 0xffff) != 0) {
      if (iVar21 == 4) {
        uVar43 = *puVar15;
        uVar41 = *(uint *)(puVar15 + 1);
        *puVar15 = uVar43 << 1;
        *(int *)(puVar15 + 1) = (int)((ulonglong)uVar41 - 1);
        if ((longlong)((ulonglong)uVar41 - 1) < 0) {
          fn_82C4E5E8(puVar15);
        }
        sVar44 = (sVar44 * 2 - (short)((longlong)uVar43 >> 0x3f)) + -1;
      }
      else if (iVar21 == 2) {
        uVar43 = (ulonglong)*(uint *)(puVar15 + 1);
        uVar28 = 2;
        iVar21 = 0;
        sVar30 = 0;
        uVar32 = uVar43 + 0x10;
        if ((uVar32 & 0xffffffff) < 2) {
          do {
            sVar30 = (short)iVar21;
            if ((uVar32 & 0xffffffff) == 0) break;
            uVar28 = uVar28 - uVar32;
            *(int *)(puVar15 + 1) = (int)(uVar43 - uVar32);
            iVar21 = ((int)(*puVar15 >> (0x40 - uVar32 & 0x7f)) << ((uint)uVar28 & 0x3f)) + iVar21;
            sVar30 = (short)iVar21;
            *puVar15 = *puVar15 << (uVar32 & 0x7f);
            if ((longlong)(uVar43 - uVar32) < 0) {
              fn_82C4E5E8(puVar15);
            }
            uVar43 = (ulonglong)*(uint *)(puVar15 + 1);
            uVar32 = uVar43 + 0x10;
          } while ((uVar32 & 0xffffffff) < (uVar28 & 0xffffffff));
        }
        uVar32 = *puVar15;
        *(int *)(puVar15 + 1) = (int)(uVar43 - uVar28);
        *puVar15 = uVar32 << (uVar28 & 0x7f);
        if ((longlong)(uVar43 - uVar28) < 0) {
          fn_82C4E5E8(puVar15);
        }
        sVar44 = sVar44 * 4 + (short)(uVar32 >> (0x40 - uVar28 & 0x7f)) + sVar30 + -3;
      }
      goto LAB_830d63e8;
    }
    iVar21 = *param_1;
    *(short *)lVar39 = sVar30;
    if ((*(int *)(iVar21 + 0x14) != 0) ||
       (((uStack_ec & 1) != 0 &&
        (iVar21 = fn_830D9228(param_1,*piVar14,lVar39,param_1[0x6f]), iVar21 < 0)))) {
      return 1;
    }
    uVar10 = *(ushort *)((int)param_1 + 0x32);
    uVar41 = 1;
    psVar34 = (short *)0x0;
    uVar20 = uVar10 >> ((int)uVar36 >> 2 & 0x3fU);
    psVar42 = (short *)0x0;
    if ((uVar29 != 0) && (*(int *)(iVar38 + (uint)uVar20 * -4) == 0x4000)) {
      uVar41 = 8;
      psVar34 = psVar45 + ((int)sVar27 & 0x7ffffffU) * -0x10;
    }
    psVar31 = psVar34;
    if ((uVar40 == 0) || (*(int *)(iVar38 + -4) != 0x4000)) {
LAB_830d6714:
      if (psVar31 != (short *)0x0) {
        uVar41 = -(uint)((uVar26 & 0x18) == 0) | uVar41;
        if (*(char *)((int)param_1 + 0x1b) == '\0') {
          if (psVar31 == psVar34) {
            psVar31 = psVar31 + 8;
          }
        }
        else if (psVar31 == psVar42) {
          if (((uVar36 == 0) || (uVar36 == 2)) || ((uVar36 == 4 || (uVar36 == 5)))) {
            uVar36 = *(byte *)(iVar23 + -8) & 0x3f;
            iVar38 = *(int *)(&lbl_820FDD78 + (bVar1 & 0x3f) * 4);
            psVar42 = asStack_c6;
            lVar39 = 3;
            psVar34 = psVar31 + 3;
            asStack_c0[0] =
                 (short)(*(int *)(&lbl_820FDD78 +
                                 (*(uint *)((uint)bVar1 * 0x14 + param_1[0x61] + 0x10) & 0x3f) * 4)
                         * *(int *)((uVar36 + (*(byte *)(iVar23 + -8) & 0x3f) * 4) * 4 +
                                    param_1[0x61] + 0x10) * (int)*psVar31 + 0x20000 >> 0x12);
            do {
              sVar27 = psVar34[-1];
              sVar30 = *psVar34;
              sVar44 = psVar34[1];
              sVar9 = psVar34[2];
              psVar42[4] = (short)((int)(psVar34[-2] * iVar38 * uVar36 + 0x20000) >> 0x12);
              psVar42 = psVar42 + 5;
              *psVar42 = (short)((int)(sVar27 * iVar38 * uVar36 + 0x20000) >> 0x12);
              *(short *)(((int)asStack_c0 - (int)psVar31) + (int)psVar34) =
                   (short)((int)(sVar30 * iVar38 * uVar36 + 0x20000) >> 0x12);
              *(short *)((int)asStack_c0 + (2 - (int)psVar31) + (int)psVar34) =
                   (short)((int)(sVar44 * iVar38 * uVar36 + 0x20000) >> 0x12);
              *(short *)((int)asStack_c0 + (4 - (int)psVar31) + (int)psVar34) =
                   (short)((int)(iVar38 * (int)sVar9 * uVar36 + 0x20000) >> 0x12);
              psVar34 = psVar34 + 5;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            psVar31 = asStack_c0;
            asStack_b0[0] = asStack_c0[0];
          }
          else {
            psVar31 = psVar31 + -1;
            psVar42 = &sStack_c2;
            lVar39 = 0x10;
            do {
              psVar31 = psVar31 + 1;
              psVar42 = psVar42 + 1;
              *psVar42 = *psVar31;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            psVar31 = asStack_c0;
          }
        }
        else if (((uVar36 == 0) || (uVar36 == 1)) || ((uVar36 == 4 || (uVar36 == 5)))) {
          uVar29 = (uint)*(byte *)(iVar23 + (uVar10 & 0x3ffffffe) * -4);
          uVar36 = uVar29 & 0x3f;
          lVar39 = 3;
          iVar38 = *(int *)(&lbl_820FDD78 + (bVar1 & 0x3f) * 4);
          psVar42 = asStack_c6;
          psVar34 = psVar31 + 3;
          asStack_c0[0] =
               (short)(*(int *)(&lbl_820FDD78 +
                               (*(uint *)((uint)bVar1 * 0x14 + param_1[0x61] + 0x10) & 0x3f) * 4) *
                       *(int *)((uVar36 + (uVar29 & 0x3f) * 4) * 4 + param_1[0x61] + 0x10) *
                       (int)*psVar31 + 0x20000 >> 0x12);
          do {
            sVar27 = psVar34[-1];
            sVar30 = *psVar34;
            sVar44 = psVar34[1];
            sVar9 = psVar34[2];
            psVar42[4] = (short)((int)(psVar34[-2] * iVar38 * uVar36 + 0x20000) >> 0x12);
            psVar42 = psVar42 + 5;
            *psVar42 = (short)((int)(sVar27 * iVar38 * uVar36 + 0x20000) >> 0x12);
            *(short *)((int)psVar34 + ((int)asStack_c0 - (int)psVar31)) =
                 (short)((int)(sVar30 * iVar38 * uVar36 + 0x20000) >> 0x12);
            *(short *)((int)psVar34 + (int)asStack_c0 + (2 - (int)psVar31)) =
                 (short)((int)(sVar44 * iVar38 * uVar36 + 0x20000) >> 0x12);
            *(short *)((int)psVar34 + (int)asStack_c0 + (4 - (int)psVar31)) =
                 (short)((int)(iVar38 * (int)sVar9 * uVar36 + 0x20000) >> 0x12);
            psVar34 = psVar34 + 5;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          psVar31 = asStack_b0;
          asStack_b0[0] = asStack_c0[0];
        }
        else {
          psVar31 = psVar31 + -1;
          psVar42 = &sStack_c2;
          lVar39 = 0x10;
          do {
            psVar31 = psVar31 + 1;
            psVar42 = psVar42 + 1;
            *psVar42 = *psVar31;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          psVar31 = asStack_b0;
        }
      }
    }
    else {
      psVar42 = psVar45 + -0x10;
      uVar41 = 1;
      psVar31 = psVar42;
      if (psVar42 != (short *)0x0) {
        uVar41 = 1;
        if (psVar34 != (short *)0x0) {
          iVar21 = 0;
          if (*(int *)(iVar38 + (uVar20 + 1) * -4) == 0x4000) {
            iVar21 = (int)psVar34[-8];
          }
          sVar27 = psVar34[8];
          sVar30 = *psVar42;
          iVar38 = (int)sVar27;
          iVar24 = (int)sVar30;
          if (*(char *)((int)param_1 + 0x1b) != '\0') {
            if (((uVar36 == 0) || (uVar36 == 4)) || (uVar36 == 5)) {
              iVar24 = param_1[0x61];
              pbVar19 = (byte *)(iVar23 + (uVar10 & 0x3ffffffe) * -4);
              uVar29 = (uint)pbVar19[-8];
              uVar40 = (uint)*pbVar19;
              iVar16 = *(int *)(&lbl_820FDD78 +
                               (*(uint *)((uint)bVar1 * 0x14 + iVar24 + 0x10) & 0x3f) * 4);
              iVar21 = iVar16 * *(int *)(((uVar29 & 0x3f) + (uVar29 & 0x3f) * 4) * 4 + iVar24 + 0x10
                                        ) * iVar21 + 0x20000 >> 0x12;
              iVar38 = iVar16 * *(int *)(((uVar40 & 0x3f) + (uVar40 & 0x3f) * 4) * 4 + iVar24 + 0x10
                                        ) * (int)sVar27 + 0x20000 >> 0x12;
              iVar24 = iVar16 * *(int *)(((*(byte *)(iVar23 + -8) & 0x3f) +
                                         (*(byte *)(iVar23 + -8) & 0x3f) * 4) * 4 + iVar24 + 0x10) *
                                (int)sVar30 + 0x20000 >> 0x12;
            }
            else if (uVar36 == 1) {
              uVar29 = (uint)*(byte *)(iVar23 + (uVar10 & 0x3ffffffe) * -4);
              iVar38 = *(int *)(((uVar29 & 0x3f) + (uVar29 & 0x3f) * 4) * 4 + param_1[0x61] + 0x10);
              iVar21 = iVar38 * *(int *)(&lbl_820FDD78 +
                                        (*(uint *)((uint)bVar1 * 0x14 + param_1[0x61] + 0x10) & 0x3f
                                        ) * 4) * iVar21 + 0x20000 >> 0x12;
              iVar38 = iVar38 * sVar27 *
                       *(int *)(&lbl_820FDD78 +
                               (*(uint *)((uint)bVar1 * 0x14 + param_1[0x61] + 0x10) & 0x3f) * 4) +
                       0x20000 >> 0x12;
            }
            else if (uVar36 == 2) {
              iVar24 = *(int *)(((*(byte *)(iVar23 + -8) & 0x3f) +
                                (*(byte *)(iVar23 + -8) & 0x3f) * 4) * 4 + param_1[0x61] + 0x10);
              iVar21 = *(int *)(&lbl_820FDD78 +
                               (*(uint *)((uint)bVar1 * 0x14 + param_1[0x61] + 0x10) & 0x3f) * 4) *
                       iVar24 * iVar21 + 0x20000 >> 0x12;
              iVar24 = *(int *)(&lbl_820FDD78 +
                               (*(uint *)((uint)bVar1 * 0x14 + param_1[0x61] + 0x10) & 0x3f) * 4) *
                       iVar24 * sVar30 + 0x20000 >> 0x12;
            }
          }
          uVar29 = iVar21 - iVar38 >> 0x1f;
          uVar40 = iVar21 - iVar24 >> 0x1f;
          uVar41 = 1;
          if ((int)((iVar21 - iVar24 ^ uVar40) - uVar40) <
              (int)((iVar21 - iVar38 ^ uVar29) - uVar29)) {
            uVar41 = 8;
            psVar31 = psVar34;
          }
        }
        goto LAB_830d6714;
      }
    }
    psVar42 = (short *)piStack00000034[7];
    if (psVar31 == (short *)0x0) {
      sVar27 = *psVar42;
      *psVar45 = sVar27;
      psVar45[8] = sVar27;
LAB_830d6c2c:
      psVar45[1] = psVar42[1];
      *(undefined4 *)(psVar45 + 2) = *(undefined4 *)(psVar42 + 2);
      *(undefined8 *)(psVar45 + 4) = *(undefined8 *)(psVar42 + 4);
      psVar45[9] = psVar42[8];
      psVar45[10] = psVar42[0x10];
      psVar45[0xb] = psVar42[0x18];
      psVar45[0xc] = psVar42[0x20];
      psVar45[0xd] = psVar42[0x28];
      psVar45[0xe] = psVar42[0x30];
      psVar45[0xf] = psVar42[0x38];
    }
    else {
      sVar27 = *psVar42 + *psVar31;
      *psVar42 = sVar27;
      *psVar45 = sVar27;
      psVar45[8] = sVar27;
      if (uVar41 == 1) {
        sVar27 = psVar31[1];
        sVar30 = psVar42[1];
        psVar42[1] = sVar27 + sVar30;
        psVar45[1] = sVar27 + sVar30;
        sVar27 = psVar31[2];
        sVar30 = psVar42[2];
        psVar42[2] = sVar27 + sVar30;
        psVar45[2] = sVar27 + sVar30;
        sVar27 = psVar31[3];
        sVar30 = psVar42[3];
        psVar42[3] = sVar27 + sVar30;
        psVar45[3] = sVar27 + sVar30;
        sVar27 = psVar31[4];
        sVar30 = psVar42[4];
        psVar42[4] = sVar27 + sVar30;
        psVar45[4] = sVar27 + sVar30;
        sVar27 = psVar31[5];
        sVar30 = psVar42[5];
        psVar42[5] = sVar27 + sVar30;
        psVar45[5] = sVar27 + sVar30;
        sVar27 = psVar31[6];
        sVar30 = psVar42[6];
        psVar42[6] = sVar27 + sVar30;
        psVar45[6] = sVar27 + sVar30;
        sVar27 = psVar42[7];
        sVar30 = psVar31[7];
        psVar42[7] = sVar30 + sVar27;
        psVar45[7] = sVar30 + sVar27;
        psVar45[9] = psVar42[8];
        psVar45[10] = psVar42[0x10];
        psVar45[0xb] = psVar42[0x18];
        psVar45[0xc] = psVar42[0x20];
        psVar45[0xd] = psVar42[0x28];
        psVar45[0xe] = psVar42[0x30];
        psVar45[0xf] = psVar42[0x38];
      }
      else {
        if (uVar41 != 8) goto LAB_830d6c2c;
        psVar45[1] = psVar42[1];
        *(undefined4 *)(psVar45 + 2) = *(undefined4 *)(psVar42 + 2);
        *(undefined8 *)(psVar45 + 4) = *(undefined8 *)(psVar42 + 4);
        sVar27 = psVar31[1];
        sVar30 = psVar42[8];
        psVar42[8] = sVar27 + sVar30;
        psVar45[9] = sVar27 + sVar30;
        sVar27 = psVar31[2];
        sVar30 = psVar42[0x10];
        psVar42[0x10] = sVar27 + sVar30;
        psVar45[10] = sVar27 + sVar30;
        sVar27 = psVar42[0x18];
        sVar30 = psVar31[3];
        psVar42[0x18] = sVar30 + sVar27;
        psVar45[0xb] = sVar30 + sVar27;
        sVar27 = psVar31[4];
        sVar30 = psVar42[0x20];
        psVar42[0x20] = sVar27 + sVar30;
        psVar45[0xc] = sVar27 + sVar30;
        sVar27 = psVar42[0x28];
        sVar30 = psVar31[5];
        psVar42[0x28] = sVar30 + sVar27;
        psVar45[0xd] = sVar30 + sVar27;
        sVar27 = psVar42[0x30];
        sVar30 = psVar31[6];
        psVar42[0x30] = sVar30 + sVar27;
        psVar45[0xe] = sVar30 + sVar27;
        sVar27 = psVar31[7];
        sVar30 = psVar42[0x38];
        psVar42[0x38] = sVar27 + sVar30;
        psVar45[0xf] = sVar27 + sVar30;
      }
    }
    uVar43 = (ulonglong)uStack_ec;
    uVar36 = uStack_ec & 1;
    uStack_ec = (int)uStack_ec >> 1;
    uVar28 = (longlong)(int)uVar36 | 0x80;
    uVar32 = uVar35 & 0xfffff;
    uVar35 = uVar35 + 1;
    *(uint *)piStack00000034[8] =
         (uint)((((uVar43 & 1) << 3 | uVar32) << 0xc | (ulonglong)uStack0000002c) << 0x10) |
         uStack00000024;
    piStack00000034[8] = piStack00000034[8] + 4;
    uVar43 = (uVar28 | uStack_d0) << 8;
    if (5 < (int)uVar35) {
      iVar38 = param_1[0x1ab];
      uVar26 = (*puStack0000001c >> 8 & 7) - (uint)*(byte *)(param_1 + 0x14b);
      iVar11 = param_1[0x1ad];
      iVar21 = (iVar12 + (uint)uVar8) * 2;
      iVar12 = iVar12 * 2;
      *(ulonglong *)(piStack00000034[1] * 8 + param_1[0x148]) =
           ((ulonglong)*(byte *)(puStack0000001c + 1) << 8 |
           ((longlong)((int)(-uVar26 ^ uVar26) >> 0x1f) + 1U & 3) << 6 |
           (ulonglong)*(byte *)((int)puStack0000001c + 5)) << 0x30 |
           uVar28 | uStack_d0 & 0xffffffffffffff;
      *(undefined2 *)(iVar38 + iVar21 + 2) = 0x4000;
      *(undefined2 *)(iVar38 + iVar21) = 0x4000;
      *(undefined2 *)(iVar12 + iVar38 + 2) = 0x4000;
      *(undefined2 *)(iVar12 + iVar38) = 0x4000;
      *(undefined2 *)(iVar11 + iVar21 + 2) = 0x4000;
      *(undefined2 *)(iVar11 + iVar21) = 0x4000;
      *(undefined2 *)(iVar11 + iVar12 + 2) = 0x4000;
      *(undefined2 *)(iVar11 + iVar12) = 0x4000;
      return 0;
    }
  } while( true );
}

