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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82904370();
extern int fn_82964628();
extern unsigned int iStack0000002c;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int iStack_bc;
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int lbl_8202DAB8;
extern unsigned int lbl_8202DAC0;
extern unsigned int lbl_8202DCF0;
extern unsigned int lbl_8202DD18;
extern unsigned int lbl_8202DD20;
extern unsigned int lbl_8202DD28;
extern unsigned int lbl_8202DD30;
extern unsigned int lbl_8202DD38;
extern unsigned int uStack00000024;
extern unsigned int uStack00000034;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_164;
extern unsigned int uStack_170;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong fn_82906490(int param_1,undefined8 param_2,ulonglong param_3,int param_4,
                      ulonglong param_5,ulonglong param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar13;
  int *piVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uStack00000024;
  int iStack0000002c;
  uint uStack00000034;
  undefined4 uStack_170;
  undefined4 uStack_164;
  int aiStack_160 [4];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 *puStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  
  uStack00000024 = (uint)param_3;
  uStack00000034 = (uint)param_5;
  uStack_170 = 0;
  iStack0000002c = param_4;
  if ((*(uint *)(*(int *)(param_1 + 8) + 0x6c) & 0x200000) == 0) {
    uVar5 = fn_82964628(lbl_8202DD38,*(int *)(param_1 + 8),
                              *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar6 = fn_82964628(lbl_8202DD30,*(int *)(param_1 + 8),
                              *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar7 = fn_82964628(lbl_8202DD28,*(int *)(param_1 + 8),
                              *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar8 = fn_82964628(lbl_8202DD20,*(int *)(param_1 + 8),
                              *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar9 = fn_82964628(lbl_8202DD18,*(int *)(param_1 + 8),
                              *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar10 = fn_82964628(lbl_8202DCF0,*(int *)(param_1 + 8),
                               *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar11 = fn_82964628(lbl_8202DAC0,*(int *)(param_1 + 8),
                               *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar12 = fn_82964628(lbl_8202DAB8,*(int *)(param_1 + 8),
                               *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar3 = fn_8265C940(param_6 * 0xc0,0x24810000);
    uStack_170 = (undefined4)uVar3;
    if ((uVar3 & 0xffffffff) == 0) {
      lVar4 = -0x7ff8fff2;
      goto LAB_82906dd0;
    }
    puVar15 = &uStack_164;
    lVar4 = 0x30;
    do {
      puVar15 = puVar15 + 1;
      *puVar15 = (int)uVar3;
      uVar3 = (param_6 & 0x3fffffff) * 4 + uVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    piVar14 = aiStack_160;
    lVar4 = 0x27;
    do {
      if ((param_6 & 0xffffffff) != 0) {
        puVar15 = (undefined4 *)(*piVar14 + -4);
        uVar3 = param_6;
        uVar17 = param_6 & 0xffffffff;
        while (uVar17 != 0) {
          puVar15 = puVar15 + 1;
          *puVar15 = 0xffffffff;
          uVar3 = uVar3 - 1;
          uVar17 = uVar3;
        }
      }
      lVar4 = lVar4 + -1;
      piVar14 = piVar14 + 1;
    } while (lVar4 != 0);
    if ((param_6 & 0xffffffff) != 0) {
      uVar3 = param_6;
      puVar15 = puStack_c0;
      do {
        *(undefined4 *)((iStack_c4 - (int)puStack_c0) + (int)puVar15) = uVar5;
        *puVar15 = uVar6;
        *(undefined4 *)((iStack_bc - (int)puStack_c0) + (int)puVar15) = uVar7;
        *(undefined4 *)((iStack_b8 - (int)puStack_c0) + (int)puVar15) = uVar8;
        *(undefined4 *)((iStack_b4 - (int)puStack_c0) + (int)puVar15) = uVar9;
        *(undefined4 *)((iStack_b0 - (int)puStack_c0) + (int)puVar15) = uVar10;
        *(undefined4 *)((iStack_ac - (int)puStack_c0) + (int)puVar15) = uVar11;
        *(undefined4 *)((iStack_a8 - (int)puStack_c0) + (int)puVar15) = uVar12;
        *(undefined4 *)((iStack_a4 - (int)puStack_c0) + (int)puVar15) =
             *(undefined4 *)(param_1 + 0x20);
        puVar15 = puVar15 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      param_3 = (ulonglong)uStack00000024;
    }
    if (iStack0000002c == 0) {
      iStack0000002c = iStack_a4;
    }
    param_6 = param_6 & 0xfffff;
    uVar3 = param_6 | 0x10100000;
    lVar4 = fn_82904370(param_1,param_2,uVar3,aiStack_160[0],param_3,0,0);
    if (lVar4 < 0) goto LAB_82906dd0;
    uVar17 = param_6 | 0x20100000;
    lVar4 = fn_82904370(param_1,param_2,uVar17,aiStack_160[1],param_3,aiStack_160[0],4);
    iVar2 = iStack0000002c;
    if (((lVar4 < 0) ||
        (lVar4 = fn_82904370(param_1,param_2,uVar3,aiStack_160[2],iStack0000002c,0,0), lVar4 < 0))
       || (lVar4 = fn_82904370(param_1,param_2,uVar17,aiStack_160[3],iVar2,aiStack_160[2],4),
          lVar4 < 0)) goto LAB_82906dd0;
    uStack_164 = (undefined4)(param_6 | 0x20000000);
    lVar4 = fn_82904370(param_1,param_2,param_6 | 0x20000000,uStack_150,aiStack_160[1],
                          aiStack_160[3],4);
    if (((lVar4 < 0) ||
        (lVar4 = fn_82904370(param_1,param_2,uVar17,uStack_14c,aiStack_160[1],aiStack_160[3],4),
        lVar4 < 0)) ||
       (lVar4 = fn_82904370(param_1,param_2,param_6 | 0x10300000,uStack_148,uStack_14c,0,4),
       lVar4 < 0)) goto LAB_82906dd0;
    uVar18 = param_6 | 0x20500000;
    lVar4 = fn_82904370(param_1,param_2,uVar18,uStack_144,uStack_150,uStack_148,0x14);
    if (((lVar4 < 0) ||
        (lVar4 = fn_82904370(param_1,param_2,uVar18,uStack_140,uStack_144,uStack_144,0x14),
        lVar4 < 0)) ||
       (lVar4 = fn_82904370(param_1,param_2,uVar18,uStack_13c,uStack_140,iStack_c4,0), lVar4 < 0))
    goto LAB_82906dd0;
    uVar13 = param_6 | 0x20400000;
    lVar4 = fn_82904370(param_1,param_2,uVar13,uStack_138,uStack_13c,puStack_c0,0);
    if ((((((lVar4 < 0) ||
           (lVar4 = fn_82904370(param_1,param_2,uVar18,uStack_134,uStack_140,uStack_138,0),
           lVar4 < 0)) ||
          (lVar4 = fn_82904370(param_1,param_2,uVar13,uStack_130,uStack_134,iStack_bc,0),
          lVar4 < 0)) ||
         ((lVar4 = fn_82904370(param_1,param_2,uVar18,uStack_12c,uStack_140,uStack_130,0),
          lVar4 < 0 ||
          (lVar4 = fn_82904370(param_1,param_2,uVar13,uStack_128,uStack_12c,iStack_b8,0),
          lVar4 < 0)))) ||
        (lVar4 = fn_82904370(param_1,param_2,uVar18,uStack_124,uStack_140,uStack_128,0), lVar4 < 0
        )) || ((lVar4 = fn_82904370(param_1,param_2,uVar13,uStack_120,uStack_124,iStack_b4,0),
               lVar4 < 0 ||
               (lVar4 = fn_82904370(param_1,param_2,uVar18,uStack_11c,uStack_144,uStack_120,0),
               lVar4 < 0)))) goto LAB_82906dd0;
    uVar16 = param_6 | 0x20200000;
    lVar4 = fn_82904370(param_1,param_2,uVar16,uStack_118,aiStack_160[3],aiStack_160[1],0x17);
    if (((lVar4 < 0) ||
        (((lVar4 = fn_82904370(param_1,param_2,uVar18,uStack_114,uStack_11c,iStack_b0,0),
          lVar4 < 0 ||
          (lVar4 = fn_82904370(param_1,param_2,uVar13,uStack_110,uStack_114,iStack_ac,0),
          lVar4 < 0)) ||
         (lVar4 = fn_82904370(param_1,param_2,uVar18,uStack_10c,uStack_110,uStack_118,0),
         lVar4 < 0)))) ||
       (((lVar4 = fn_82904370(param_1,param_2,uVar13,uStack_108,uStack_10c,uStack_11c,0),
         iVar2 = iStack0000002c, lVar4 < 0 ||
         (lVar4 = fn_82904370(param_1,param_2,uVar16,uStack_f8,iStack0000002c,aiStack_160[2],0x17)
         , lVar4 < 0)) ||
        (lVar4 = fn_82904370(param_1,param_2,uVar18,uStack_f4,uStack_f8,iStack_a8,0), lVar4 < 0)))
       ) goto LAB_82906dd0;
    param_3 = (ulonglong)uStack_f0;
    lVar4 = fn_82904370(param_1,param_2,uVar13,param_3,uStack_108,uStack_f4,0);
    uVar1 = uStack00000024;
    if (((((lVar4 < 0) ||
          (lVar4 = fn_82904370(param_1,param_2,uStack_164,uStack_ec,uStack00000024,iVar2,0),
          lVar4 < 0)) ||
         ((lVar4 = fn_82904370(param_1,param_2,uVar17,uStack_e8,uVar1,iVar2,0), lVar4 < 0 ||
          (((lVar4 = fn_82904370(param_1,param_2,uVar3,uStack_e4,uStack_ec,0,0), lVar4 < 0 ||
            (lVar4 = fn_82904370(param_1,param_2,uVar16,uStack_e0,uStack_ec,uStack_e4,0x17),
            lVar4 < 0)) ||
           (lVar4 = fn_82904370(param_1,param_2,uVar3,uStack_dc,uStack_e8,0,0), lVar4 < 0)))))) ||
        ((lVar4 = fn_82904370(param_1,param_2,param_6 | 0x20300000,uStack_d8,uStack_e8,uStack_dc,
                                0x17), lVar4 < 0 ||
         (lVar4 = fn_82904370(param_1,param_2,uVar18,uStack_d4,uStack_e0,uStack_d8,0x17),
         lVar4 < 0)))) ||
       ((lVar4 = fn_82904370(param_1,param_2,uVar13,uStack_d0,param_3,param_3,0), lVar4 < 0 ||
        ((lVar4 = fn_82904370(param_1,param_2,uVar3,uStack_cc,uStack_d0,0,0), lVar4 < 0 ||
         (lVar4 = fn_82904370(param_1,param_2,uVar18,iStack_c8,uStack_d4,uStack_cc,0), lVar4 < 0))
        )))) goto LAB_82906dd0;
    param_5 = (ulonglong)uStack00000034;
  }
  else if (param_4 == 0) {
    iStack_c8 = 0;
    uVar13 = param_6 & 0xffffffff000fffff | 0x10c00000;
  }
  else {
    uVar13 = param_6 & 0xffffffff000fffff | 0x20600000;
    iStack_c8 = param_4;
  }
  lVar4 = fn_82904370(param_1,param_2,uVar13,param_5,param_3,iStack_c8,0);
  if (-1 < lVar4) {
    lVar4 = 0;
  }
LAB_82906dd0:
  fn_8265C990(uStack_170,0x24810000);
  return lVar4;
}

