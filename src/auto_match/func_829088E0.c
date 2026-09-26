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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82902688();
extern int fn_82904258();
extern int fn_82904370();
extern int fn_82906DE8();
extern int fn_82907A18();
extern int fn_82908248();
extern int fn_82913308();
extern int fn_82963860();
extern int fn_829639F0();
extern int fn_829640A0();
extern int fn_82BA02A8();
extern int fn_82F66570();
extern int fn_82F68CC0();
extern unsigned int iStack00000024;
extern unsigned int iStack_100;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int iStack_e0;
extern unsigned int iStack_e8;
extern unsigned int iStack_ec;
extern unsigned int iStack_f8;
extern unsigned int iStack_fc;
extern unsigned int lbl_82005710;
extern unsigned int stack0x00000024;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e4;
extern unsigned int uStack_f0;


/* WARNING: Type propagation algorithm not settling */

longlong fn_829088E0(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                      ulonglong param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar9;
  longlong lVar8;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  ulonglong uVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iStack00000024;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int *piStack_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 *puStack_d4;
  int aiStack_d0 [5];
  undefined4 uStack_bc;
  undefined4 uStack_b4;
  int iStack_b0;
  int *piStack_ac;
  int iStack_a8;
  int iStack_a4;
  
  puStack_d4 = (undefined4 *)(param_1 + 0x2c);
  uStack_dc = *(undefined4 *)(param_1 + 0x30);
  uStack_d8 = *(undefined4 *)(param_1 + 0x34);
  aiStack_d0[4] = *(undefined4 *)(param_1 + 0x3c);
  uStack_bc = *(undefined4 *)(param_1 + 0x40);
  uStack_e4 = *puStack_d4;
  iStack00000024 = (int)param_3;
  lVar22 = 0;
  piVar11 = (int *)0x0;
  piStack_f4 = (int *)0x0;
  aiStack_d0[3] = 0;
  iStack_ec = 0;
  iStack_e8 = 0;
  aiStack_d0[2] = 0;
  iStack_e0 = 0;
  if (param_6 == (int *)0x0) {
    param_6 = *(int **)(param_1 + 0x18);
  }
  iVar9 = fn_82902688(param_1,param_3,&iStack_b0);
  if ((-1 < iVar9) &&
     (((uVar14 = param_4, lbl_82005710 < (double)CONCAT44(iStack_b0,piStack_ac) ||
       ((double)CONCAT44(iStack_a8,iStack_a4) < lbl_82005710)) ||
      (((double)CONCAT44(iStack_b0,piStack_ac) == lbl_82005710 &&
       (uVar14 = param_5, (double)CONCAT44(iStack_a8,iStack_a4) == lbl_82005710)))))) {
    uVar21 = *(undefined4 *)(param_1 + 0x18);
    *(int **)(param_1 + 0x18) = param_6;
    lVar8 = fn_82913308(param_1,uVar14,0);
    *(undefined4 *)(param_1 + 0x18) = uVar21;
    goto LAB_829098e8;
  }
  lVar8 = fn_82908248(param_1,0,&stack0x00000024,1);
  if (lVar8 < 0) goto LAB_829098e8;
  iVar9 = *(int *)(param_1 + 8);
  iStack_fc = 0;
  iStack_f8 = -1;
  puVar3 = *(uint **)(iStack00000024 * 4 + *(int *)(iVar9 + 0x14));
  if ((puVar3[0x12] == 0xffffffff) ||
     (puVar4 = *(uint **)(puVar3[0x12] * 4 + *(int *)(iVar9 + 0x18)),
     (*puVar4 & 0xfff00000) != 0x20300000)) {
LAB_82908bf0:
    uStack_f0 = 0xffffffff;
    iStack_100 = -1;
    iStack_fc = -1;
    if ((*puVar3 & 1) == 0) {
      aiStack_d0[1] = 0xffffffff;
      lVar8 = fn_82907A18(param_1,param_2,aiStack_d0 + 1,&uStack_f0,&stack0x00000024,1);
      if (((lVar8 < 0) ||
          (lVar8 = fn_82904370(param_1,param_2,0x20200001,&iStack_100,&uStack_f0,aiStack_d0 + 1,
                                 0x17), lVar8 < 0)) ||
         (lVar8 = fn_82904370(param_1,param_2,0x20300001,&iStack_fc,&uStack_f0,aiStack_d0 + 1,0x17
                               ), lVar8 < 0)) goto LAB_829098e8;
      iVar9 = 1;
      goto LAB_82908d34;
    }
    lVar8 = fn_82904370(param_1,param_2,0x10100001,&uStack_f0,&stack0x00000024,0,0x10);
    if (((lVar8 < 0) ||
        (lVar8 = fn_82904370(param_1,param_2,0x10000001,&iStack_100,&stack0x00000024,0,0x17),
        lVar8 < 0)) ||
       (lVar8 = fn_82904370(param_1,param_2,0x20300001,&iStack_fc,&uStack_f0,&stack0x00000024,0x17
                             ), lVar8 < 0)) goto LAB_829098e8;
    iVar9 = 1;
    uVar19 = *(uint *)(*(int *)(puVar3[1] * 4 + *(int *)(*(int *)(param_1 + 8) + 0x10)) + 4);
    if (((uVar19 & 0x10) == 0) || ((uVar19 & 0x200) == 0)) goto LAB_82908d34;
    uVar19 = puVar3[2];
LAB_82908be0:
    if (uVar19 != 0xffffffff) goto LAB_82908d34;
    bVar5 = true;
  }
  else {
    uVar14 = (ulonglong)puVar4[3];
    uVar18 = 0;
    if (uVar14 != 0) {
      iVar10 = 0;
      do {
        if (*(int *)(puVar4[4] + iVar10) == iStack00000024) break;
        uVar18 = uVar18 + 1;
        iVar10 = iVar10 + 4;
      } while ((uVar18 & 0xffffffff) < uVar14);
    }
    iVar20 = *(int *)((int)((uVar18 & 0xffffffff) << 2) + puVar4[2]);
    aiStack_d0[0] = *(int *)((int)((uVar14 + uVar18 & 0xffffffff) << 2) + puVar4[2]);
    iVar10 = *(int *)(*(int *)(iVar20 * 4 + *(int *)(iVar9 + 0x14)) + 0x48);
    if (((iVar10 == -1) || ((**(uint **)(aiStack_d0[0] * 4 + *(int *)(iVar9 + 0x14)) & 1) == 0)) ||
       (puVar4 = *(uint **)(iVar10 * 4 + *(int *)(iVar9 + 0x18)),
       (*puVar4 & 0xfff00000) != 0x10100000)) goto LAB_82908bf0;
    uVar19 = 0;
    if (puVar4[3] != 0) {
      iVar9 = 0;
      do {
        if (*(int *)(puVar4[4] + iVar9) == iVar20) break;
        uVar19 = uVar19 + 1;
        iVar9 = iVar9 + 4;
      } while (uVar19 < puVar4[3]);
    }
    if (*(int *)(uVar19 * 4 + puVar4[2]) != aiStack_d0[0]) goto LAB_82908bf0;
    lVar8 = fn_82908248(param_1,0,aiStack_d0,1);
    if (lVar8 < 0) goto LAB_829098e8;
    iStack_100 = -1;
    iStack_fc = -1;
    lVar8 = fn_82904370(param_1,param_2,0x10000001,&iStack_100,aiStack_d0,0,0x17);
    if ((lVar8 < 0) ||
       (lVar8 = fn_82904370(param_1,param_2,0x10000001,&iStack_fc,&stack0x00000024,0,0x17),
       lVar8 < 0)) goto LAB_829098e8;
    iVar9 = 0;
    iVar10 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + aiStack_d0[0] * 4);
    uVar19 = *(uint *)(*(int *)(*(int *)(iVar10 + 4) * 4 + *(int *)(*(int *)(param_1 + 8) + 0x10)) +
                      4);
    if (((uVar19 & 0x10) != 0) && ((uVar19 & 0x200) != 0)) {
      uVar19 = *(uint *)(iVar10 + 8);
      goto LAB_82908be0;
    }
LAB_82908d34:
    bVar5 = false;
  }
  lVar8 = fn_82908248(param_1,0,&iStack_100,1);
  if (lVar8 < 0) goto LAB_829098e8;
  bVar6 = true;
  bVar7 = false;
  puVar16 = *(undefined4 **)
             (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iStack_100 * 4) + 4) * 4 +
             *(int *)(*(int *)(param_1 + 8) + 0x10));
  if (((puVar16[1] & 0x800) == 0) ||
     ((iVar10 = fn_82F66570(*puVar16,0x62), iVar10 == 0 &&
      (iVar10 = fn_82F66570(*puVar16,0x42), iVar10 == 0)))) {
    if (((puVar16[1] & 0x800) == 0) ||
       ((iVar10 = fn_82F66570(*puVar16,99), iVar10 == 0 &&
        (iVar10 = fn_82F66570(*puVar16,0x43), iVar10 == 0)))) {
      iVar10 = *(int *)(param_1 + 8);
      if (((*(int *)(iVar10 + 0x58) != 0) || ((*(int *)(iVar10 + 0x54) != 0 && (bVar5)))) ||
         ((*(int *)(iVar10 + 0x34) != 0 && (*(int *)(param_1 + 0x30) == -1)))) {
        bVar6 = true;
        goto LAB_82908e80;
      }
    }
    else {
      iVar10 = *(int *)(param_1 + 8);
      if ((*(int *)(iVar10 + 0x58) != 0) ||
         ((*(int *)(iVar10 + 0x34) != 0 && (*(int *)(param_1 + 0x30) == -1)))) {
        bVar7 = true;
      }
      bVar6 = true;
      bVar5 = false;
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 8);
    if ((*(int *)(iVar10 + 0x54) != 0) && (bVar5)) {
      bVar6 = false;
LAB_82908e80:
      bVar7 = true;
    }
  }
  if (*(int *)(iVar10 + 0x34) == 0) {
    if (bVar6) {
      if (bVar7) {
        if (bVar5) {
          uVar17 = *(uint *)(param_1 + 0x3c);
          uVar19 = *(uint *)(iVar10 + 0x54);
        }
        else {
          uVar17 = *(uint *)(param_1 + 0x40);
          uVar19 = *(uint *)(iVar10 + 0x58);
        }
        if (uVar19 <= uVar17) {
          bVar7 = false;
        }
      }
      goto LAB_82908ebc;
    }
  }
  else {
LAB_82908ebc:
    if (bVar6) {
      bVar7 = (bool)((*(uint *)(param_1 + 0x14) & 0x200) == 0 & bVar7);
    }
  }
  if (bVar7) {
    bVar6 = (bool)((*(uint *)(param_1 + 0x14) & 0x400) == 0 & bVar6);
  }
  uVar18 = 0;
  uVar19 = *(uint *)(*(int *)(param_1 + 4) + 0x1c);
  uVar14 = (ulonglong)uVar19;
  iVar10 = uVar19 << 2;
  lVar22 = fn_8265C940(iVar10,0x24810000);
  if (((lVar22 == 0) ||
      (piVar11 = (int *)fn_8265C940(iVar10,0x24810000), piVar11 == (int *)0x0)) ||
     (piVar12 = (int *)fn_8265C940(iVar10,0x24810000), piStack_f4 = piVar12,
     piVar12 == (int *)0x0)) {
LAB_829098e0:
    lVar8 = -0x7ff8fff2;
    goto LAB_829098e8;
  }
  fn_82F68CC0(lVar22,*(undefined4 *)(param_1 + 0x18),iVar10);
  if (bVar7) {
    uVar19 = *(uint *)(*(int *)(param_1 + 8) + 0xc);
    if (*(int *)(*(int *)(param_1 + 8) + 0x34) == 0) {
      if (bVar5) {
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      }
      else {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      }
    }
    iStack_f8 = -1;
    lVar8 = fn_82904370(param_1,param_2,0x10f00001,&iStack_f8,&iStack_100,0,0);
    if (lVar8 < 0) goto LAB_829098e8;
    iVar20 = *(int *)(param_1 + 8);
    if (*(int *)(iVar20 + 0x34) == 0) {
      uVar21 = *(undefined4 *)(iVar20 + 0xa0);
    }
    else {
      uVar21 = *(undefined4 *)(iVar20 + 0x90);
    }
    *(undefined4 *)(*(int *)(*(int *)(iVar20 + 0x14) + iStack_f8 * 4) + 4) = uVar21;
    if ((param_4 & 0xffffffff) == 0) {
      fn_82F68CC0(piVar11,param_6,iVar10);
    }
    else {
      *(int *)(param_1 + 0x34) = iVar9;
      *(int *)(param_1 + 0x30) = iStack_f8;
      lVar8 = fn_82913308(param_1,param_4,lVar22);
      if (lVar8 < 0) goto LAB_829098e8;
      fn_82F68CC0(piVar11,*(undefined4 *)(param_1 + 0x18),iVar10);
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x18),lVar22,iVar10);
      *(undefined4 *)(param_1 + 0x30) = uStack_dc;
      *(undefined4 *)(param_1 + 0x34) = uStack_d8;
      iStack_ec = *(int *)(param_1 + 0x50);
      aiStack_d0[2] = *(int *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    piVar12 = piStack_f4;
    if ((param_5 & 0xffffffff) == 0) {
      fn_82F68CC0(piStack_f4,param_6,iVar10);
    }
    else {
      *(uint *)(param_1 + 0x34) = (uint)(iVar9 == 0);
      *(int *)(param_1 + 0x30) = iStack_f8;
      lVar8 = fn_82913308(param_1,param_5,lVar22);
      piVar12 = piStack_f4;
      if (lVar8 < 0) goto LAB_829098e8;
      fn_82F68CC0(piStack_f4,*(undefined4 *)(param_1 + 0x18),iVar10);
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x18),lVar22,iVar10);
      *(undefined4 *)(param_1 + 0x30) = uStack_dc;
      *(undefined4 *)(param_1 + 0x34) = uStack_d8;
      iStack_e8 = *(int *)(param_1 + 0x50);
      iStack_e0 = *(int *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    uVar18 = 0;
    if (uVar14 != 0) {
      iVar20 = (int)param_6 - (int)piVar12;
      iVar13 = (int)piVar11 - (int)piVar12;
      uVar24 = uVar14;
      do {
        if ((*(int *)(iVar20 + (int)piVar12) != -1) && (*(int *)(iVar13 + (int)piVar12) != *piVar12)
           ) {
          uVar18 = uVar18 + 1;
        }
        piVar12 = piVar12 + 1;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    *(int *)(param_1 + 0x3c) = aiStack_d0[4];
    *(undefined4 *)(param_1 + 0x40) = uStack_bc;
    if (bVar6) {
      if ((0x10 < (uVar18 & 0xffffffff)) || (0x20 < *(int *)(*(int *)(param_1 + 8) + 0xc) - uVar19))
      {
        bVar6 = false;
      }
      if (!bVar6) goto code_r0x82909200;
      if (uVar19 < *(uint *)(*(int *)(param_1 + 8) + 0xc)) {
        iVar20 = uVar19 << 2;
        uVar17 = uVar19;
        do {
          if ((**(uint **)(*(int *)(*(int *)(param_1 + 8) + 0x18) + iVar20) & 0xf0000000) ==
              0x60000000) {
            bVar6 = false;
            break;
          }
          uVar17 = uVar17 + 1;
          iVar20 = iVar20 + 4;
        } while (uVar17 < *(uint *)(*(int *)(param_1 + 8) + 0xc));
      }
      if (!bVar6) goto code_r0x82909200;
code_r0x8290926c:
      if (uVar19 < *(uint *)(*(int *)(param_1 + 8) + 0xc)) {
        iVar20 = uVar19 << 2;
        uVar17 = uVar19;
        do {
          iVar13 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + iVar20);
          if (iVar13 != 0) {
            fn_82BA02A8(iVar13);
            fn_829639F0(iVar13);
          }
          uVar17 = uVar17 + 1;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + iVar20) = 0;
          iVar20 = iVar20 + 4;
        } while (uVar17 < *(uint *)(*(int *)(param_1 + 8) + 0xc));
      }
      *(uint *)(*(int *)(param_1 + 8) + 0xc) = uVar19;
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x18),lVar22,iVar10);
      piVar12 = piStack_f4;
      goto LAB_829092e8;
    }
code_r0x82909200:
    if (((!bVar5) && ((*(uint *)(param_1 + 0x14) & 4) != 0)) &&
       (uVar19 < *(uint *)(*(int *)(param_1 + 8) + 0xc))) {
      iVar20 = uVar19 << 2;
      uVar17 = uVar19;
      do {
        iVar13 = fn_82963860(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + iVar20));
        if (iVar13 != 0) {
          bVar6 = true;
          break;
        }
        uVar17 = uVar17 + 1;
        iVar20 = iVar20 + 4;
      } while (uVar17 < *(uint *)(*(int *)(param_1 + 8) + 0xc));
    }
    if (bVar6) goto code_r0x8290926c;
LAB_8290950c:
    if ((uVar18 & 0xffffffff) != 0) {
      *(undefined4 *)(param_1 + 0x68) = 1;
      uVar24 = fn_8265C940(uVar18 * 0x18,0x24810000);
      aiStack_d0[3] = (int)uVar24;
      if ((uVar24 & 0xffffffff) == 0) goto LAB_829098e0;
      puVar16 = &uStack_b4;
      lVar8 = 6;
      do {
        puVar16 = puVar16 + 1;
        *puVar16 = (int)uVar24;
        uVar24 = (uVar18 & 0x3fffffff) * 4 + uVar24;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      uVar18 = 0;
      if (uVar14 != 0) {
        uVar24 = uVar14;
        piVar12 = piStack_ac;
        piVar15 = piVar11;
        do {
          if ((*piVar15 != *(int *)((int)piStack_f4 + ((int)piVar15 - (int)piVar11))) &&
             (*(int *)((int)param_6 + ((int)piVar15 - (int)piVar11)) != -1)) {
            iVar10 = iStack_100;
            if (iVar9 == 0) {
              iVar10 = iStack_fc;
            }
            *(int *)((int)piVar12 + (iStack_b0 - (int)piStack_ac)) = iVar10;
            iVar10 = *piVar15;
            if ((iVar10 == -1) ||
               (*(int *)(*(int *)(param_1 + 8) + 0x74) ==
                *(int *)(*(int *)(iVar10 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14)) + 4))) {
              iVar10 = *(int *)(param_1 + 0x24);
            }
            *piVar12 = iVar10;
            iVar10 = *(int *)((int)piStack_f4 + ((int)piVar15 - (int)piVar11));
            if ((iVar10 == -1) ||
               (*(int *)(*(int *)(param_1 + 8) + 0x74) ==
                *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iVar10 * 4) + 4))) {
              iVar10 = *(int *)(param_1 + 0x24);
            }
            *(int *)((int)piVar12 + (iStack_a8 - (int)piStack_ac)) = iVar10;
            uVar18 = uVar18 + 1;
            piVar12 = piVar12 + 1;
          }
          piVar15 = piVar15 + 1;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      if (bVar6) {
        lVar8 = fn_82906DE8(param_1,param_2,iStack_a4,iStack_a8,piStack_ac,iStack_b0,uVar18);
      }
      else {
        uVar24 = uVar18 & 0xfffff;
        *(int *)(param_1 + 0x34) = iVar9;
        uVar23 = uVar24 | 0x10000000;
        *(int *)(param_1 + 0x30) = iStack_f8;
        lVar8 = fn_82904370(param_1,param_2,uVar23,piStack_ac,piStack_ac,0,0);
        if (lVar8 < 0) goto LAB_829098e8;
        if ((uVar18 & 0xffffffff) != 0) {
          piVar12 = piStack_ac + -1;
          uVar25 = uVar18;
          do {
            piVar12 = piVar12 + 1;
            *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + *piVar12 * 4) + 4) =
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x98);
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
        *(uint *)(param_1 + 0x34) = (uint)(iVar9 == 0);
        *(int *)(param_1 + 0x30) = iStack_f8;
        lVar8 = fn_82904370(param_1,param_2,uVar23,iStack_a8,iStack_a8,0,0);
        if (lVar8 < 0) goto LAB_829098e8;
        if ((uVar18 & 0xffffffff) != 0) {
          piVar12 = (int *)(iStack_a8 + -4);
          uVar23 = uVar18;
          do {
            piVar12 = piVar12 + 1;
            *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + *piVar12 * 4) + 4) =
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x98);
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        *(undefined4 *)(param_1 + 0x30) = uStack_dc;
        *(undefined4 *)(param_1 + 0x34) = uStack_d8;
        if ((uVar18 & 0xffffffff) != 0) {
          puVar16 = (undefined4 *)(iStack_a4 + -4);
          uVar23 = uVar18 & 0xffffffff;
          while (uVar23 != 0) {
            puVar16 = puVar16 + 1;
            *puVar16 = 0xffffffff;
            uVar18 = uVar18 - 1;
            uVar23 = uVar18;
          }
        }
        lVar8 = fn_82904370(param_1,param_2,uVar24 | 0x20700000,iStack_a4,piStack_ac,iStack_a8,0);
      }
      piVar12 = piStack_f4;
      if (lVar8 < 0) goto LAB_829098e8;
      uVar19 = 0;
      if (uVar14 != 0) {
        piVar15 = (int *)(iStack_a4 + -4);
        iVar9 = (int)piVar11 - (int)param_6;
        do {
          if ((*(int *)(iVar9 + (int)param_6) !=
               *(int *)((int)piVar12 + (int)param_6 + (iVar9 - (int)piVar11))) && (*param_6 != -1))
          {
            iVar10 = *(int *)(*(int *)(param_1 + 8) + 0x14);
            iVar20 = *(int *)(piVar15[1] * 4 + iVar10);
            fn_829640A0(iVar20,*(undefined4 *)(*param_6 * 4 + iVar10));
            piVar15 = piVar15 + 1;
            *param_6 = *piVar15;
            *(uint *)(iVar20 + 0x30) = uVar19;
          }
          uVar19 = uVar19 + 1;
          param_6 = param_6 + 1;
        } while (uVar19 < uVar14);
      }
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
  }
  else {
LAB_829092e8:
    puVar16 = puStack_d4;
    if (!bVar6) goto LAB_8290950c;
    if ((param_4 & 0xffffffff) == 0) {
      fn_82F68CC0(piVar11,param_6,iVar10);
      puVar16 = puStack_d4;
    }
    else {
      piVar15 = &iStack_100;
      *puStack_d4 = 0xffffffff;
      if (iVar9 == 0) {
        piVar15 = &iStack_fc;
      }
      lVar8 = fn_82904370(param_1,param_2,0x20500001,puStack_d4,&uStack_e4,piVar15,0x17);
      if ((lVar8 < 0) || (lVar8 = fn_82913308(param_1,param_4,lVar22), lVar8 < 0))
      goto LAB_829098e8;
      fn_82F68CC0(piVar11,*(undefined4 *)(param_1 + 0x18),iVar10);
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x18),lVar22,iVar10);
      iStack_ec = *(int *)(param_1 + 0x50);
      aiStack_d0[2] = *(int *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *puVar16 = uStack_e4;
    }
    if ((param_5 & 0xffffffff) == 0) {
      fn_82F68CC0(piVar12,param_6,iVar10);
    }
    else {
      *puVar16 = 0xffffffff;
      piVar15 = &iStack_fc;
      if (iVar9 == 0) {
        piVar15 = &iStack_100;
      }
      lVar8 = fn_82904370(param_1,param_2,0x20500001,puVar16,&uStack_e4,piVar15,0x17);
      if ((lVar8 < 0) || (lVar8 = fn_82913308(param_1,param_5,lVar22), lVar8 < 0))
      goto LAB_829098e8;
      fn_82F68CC0(piVar12,*(undefined4 *)(param_1 + 0x18),iVar10);
      fn_82F68CC0(*(undefined4 *)(param_1 + 0x18),lVar22,iVar10);
      iStack_e8 = *(int *)(param_1 + 0x50);
      iStack_e0 = *(int *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *puVar16 = uStack_e4;
    }
    uVar18 = 0;
    if (uVar14 != 0) {
      iVar10 = 0;
      uVar24 = uVar14;
      piVar15 = piVar11;
      do {
        iVar20 = *piVar15;
        iVar13 = *(int *)(((int)piVar12 - (int)piVar11) + (int)piVar15);
        if (iVar20 != iVar13) {
          if (iVar20 == -1) {
code_r0x829094e8:
            *piVar15 = iVar13;
            *(int *)(iVar10 + *(int *)(param_1 + 0x18)) = iVar13;
          }
          else {
            iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x14);
            iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x74);
            if (iVar2 == *(int *)(*(int *)(iVar20 * 4 + iVar1) + 4)) goto code_r0x829094e8;
            if ((iVar13 != -1) && (iVar2 != *(int *)(*(int *)(iVar13 * 4 + iVar1) + 4))) {
              uVar18 = uVar18 + 1;
              goto code_r0x82909500;
            }
            *(int *)(((int)piVar12 - (int)piVar11) + (int)piVar15) = iVar20;
            *(int *)(iVar10 + *(int *)(param_1 + 0x18)) = iVar20;
          }
          *(undefined4 *)((int)param_6 + ((int)piVar15 - (int)piVar11)) =
               *(undefined4 *)(iVar10 + *(int *)(param_1 + 0x18));
        }
code_r0x82909500:
        iVar10 = iVar10 + 4;
        piVar15 = piVar15 + 1;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      goto LAB_8290950c;
    }
  }
  if ((aiStack_d0[2] == 0) || (uVar21 = 1, iStack_e0 == 0)) {
    uVar21 = 0;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar21;
  if (((iStack_ec == 0) || ((iStack_e8 == 0 && (iStack_e0 == 0)))) &&
     ((iStack_e8 == 0 || ((iStack_ec == 0 && (aiStack_d0[2] == 0)))))) {
    uVar21 = 0;
  }
  else {
    uVar21 = 1;
  }
  *(undefined4 *)(param_1 + 0x50) = uVar21;
  if (iStack_ec == 0) {
LAB_8290989c:
    if (iStack_e8 != 0) {
LAB_829098a4:
      if ((iStack_ec == 0) && (aiStack_d0[2] == 0)) goto LAB_829098b4;
    }
    lVar8 = 0;
  }
  else {
    if (iStack_e8 != 0) goto LAB_829098a4;
    if (iStack_e0 != 0) goto LAB_8290989c;
LAB_829098b4:
    fn_82904258(param_1,param_2,0xbe2,0xffffffff8202dd40);
    lVar8 = -0x7fffbfff;
  }
LAB_829098e8:
  fn_8265C990(lVar22,0x24810000);
  fn_8265C990(piVar11,0x24810000);
  fn_8265C990(piStack_f4,0x24810000);
  fn_8265C990(aiStack_d0[3],0x24810000);
  *(undefined4 *)(param_1 + 0x30) = uStack_dc;
  *(undefined4 *)(param_1 + 0x34) = uStack_d8;
  *(int *)(param_1 + 0x3c) = aiStack_d0[4];
  *(undefined4 *)(param_1 + 0x40) = uStack_bc;
  *puStack_d4 = uStack_e4;
  return lVar8;
}

