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
extern unsigned int iStack_c0;
extern unsigned int lbl_820288D0;
extern unsigned int lbl_8202DAC0;
extern unsigned int lbl_8202DCF0;
extern unsigned int lbl_8202DCF8;
extern unsigned int lbl_8202DD00;
extern unsigned int lbl_8202DD08;
extern unsigned int lbl_8202DD10;
extern unsigned int uStack00000024;
extern unsigned int uStack00000034;
extern unsigned int uStack_100;
extern unsigned int uStack_114;
extern unsigned int uStack_120;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
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
extern unsigned int uStack_fc;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong fn_82905E08(int param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5,ulonglong param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar3;
  int *piVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uStack00000024;
  int iStack0000002c;
  uint uStack00000034;
  undefined4 uStack_120;
  undefined4 uStack_114;
  int aiStack_110 [4];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 *puStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  
  uStack00000024 = (undefined4)param_3;
  iStack0000002c = (int)param_4;
  uStack00000034 = (uint)param_5;
  uStack_120 = 0;
  if ((*(uint *)(*(int *)(param_1 + 8) + 0x6c) & 0x200000) == 0) {
    uVar4 = fn_82964628(lbl_8202DD10,*(int *)(param_1 + 8),
                              *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar5 = fn_82964628(lbl_8202DD08,*(int *)(param_1 + 8),
                              *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar6 = fn_82964628(lbl_8202DD00,*(int *)(param_1 + 8),
                              *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar7 = fn_82964628(lbl_8202DCF8,*(int *)(param_1 + 8),
                              *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar8 = fn_82964628(lbl_8202DCF0,*(int *)(param_1 + 8),
                              *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar9 = fn_82964628(lbl_820288D0,*(int *)(param_1 + 8),
                              *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar10 = fn_82964628(lbl_8202DAC0,*(int *)(param_1 + 8),
                               *(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0,0);
    uVar3 = fn_8265C940(param_6 * 0x70,0x24810000);
    uVar1 = uStack00000024;
    uStack_120 = (undefined4)uVar3;
    if ((uVar3 & 0xffffffff) == 0) {
      lVar2 = -0x7ff8fff2;
      goto LAB_82905eb4;
    }
    puVar12 = &uStack_114;
    lVar2 = 0x1c;
    do {
      puVar12 = puVar12 + 1;
      *puVar12 = (int)uVar3;
      uVar3 = (param_6 & 0x3fffffff) * 4 + uVar3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    piVar11 = aiStack_110;
    lVar2 = 0x14;
    do {
      if ((param_6 & 0xffffffff) != 0) {
        puVar12 = (undefined4 *)(*piVar11 + -4);
        uVar3 = param_6;
        uVar13 = param_6 & 0xffffffff;
        while (uVar13 != 0) {
          puVar12 = puVar12 + 1;
          *puVar12 = 0xffffffff;
          uVar3 = uVar3 - 1;
          uVar13 = uVar3;
        }
      }
      lVar2 = lVar2 + -1;
      piVar11 = piVar11 + 1;
    } while (lVar2 != 0);
    if ((param_6 & 0xffffffff) != 0) {
      uVar3 = param_6;
      puVar12 = puStack_bc;
      do {
        *(undefined4 *)((iStack_c0 - (int)puStack_bc) + (int)puVar12) =
             *(undefined4 *)(param_1 + 0x20);
        *puVar12 = uVar4;
        *(undefined4 *)((iStack_b8 - (int)puStack_bc) + (int)puVar12) = uVar5;
        *(undefined4 *)((iStack_b4 - (int)puStack_bc) + (int)puVar12) = uVar6;
        *(undefined4 *)((iStack_b0 - (int)puStack_bc) + (int)puVar12) = uVar7;
        *(undefined4 *)((iStack_ac - (int)puStack_bc) + (int)puVar12) = uVar8;
        *(undefined4 *)((iStack_a8 - (int)puStack_bc) + (int)puVar12) = uVar9;
        *(undefined4 *)((iStack_a4 - (int)puStack_bc) + (int)puVar12) = uVar10;
        puVar12 = puVar12 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_6 = param_6 & 0xfffff;
    uVar3 = param_6 | 0x10100000;
    lVar2 = fn_82904370(param_1,param_2,uVar3,aiStack_110[0],uStack00000024,0,0);
    if (((lVar2 < 0) ||
        (lVar2 = fn_82904370(param_1,param_2,param_6 | 0x20100000,aiStack_110[1],uVar1,
                               aiStack_110[0],4), lVar2 < 0)) ||
       (lVar2 = fn_82904370(param_1,param_2,uVar3,aiStack_110[2],aiStack_110[1],0,8), lVar2 < 0))
    goto LAB_82905eb4;
    uVar13 = param_6 | 0x20400000;
    lVar2 = fn_82904370(param_1,param_2,uVar13,aiStack_110[3],aiStack_110[2],iStack_c0,0);
    if (((lVar2 < 0) ||
        (lVar2 = fn_82904370(param_1,param_2,param_6 | 0x10700000,uStack_100,aiStack_110[3],0,4),
        lVar2 < 0)) ||
       (lVar2 = fn_82904370(param_1,param_2,param_6 | 0x10300000,uStack_fc,uStack_100,0,4),
       lVar2 < 0)) goto LAB_82905eb4;
    uVar14 = param_6 | 0x20500000;
    lVar2 = fn_82904370(param_1,param_2,uVar14,uStack_f8,puStack_bc,aiStack_110[1],0);
    if (((lVar2 < 0) ||
        (lVar2 = fn_82904370(param_1,param_2,uVar13,uStack_f4,uStack_f8,iStack_b8,0), lVar2 < 0))
       || ((((lVar2 = fn_82904370(param_1,param_2,uVar14,uStack_f0,uStack_f4,aiStack_110[1],0),
             lVar2 < 0 ||
             ((((lVar2 = fn_82904370(param_1,param_2,uVar13,uStack_ec,uStack_f0,iStack_b4,0),
                lVar2 < 0 ||
                (lVar2 = fn_82904370(param_1,param_2,uVar14,uStack_e8,uStack_ec,aiStack_110[1],0),
                lVar2 < 0)) ||
               (lVar2 = fn_82904370(param_1,param_2,uVar13,uStack_e4,uStack_e8,iStack_b0,0),
               lVar2 < 0)) ||
              ((lVar2 = fn_82904370(param_1,param_2,uVar14,uStack_e0,uStack_e4,uStack_fc,0),
               lVar2 < 0 ||
               (lVar2 = fn_82904370(param_1,param_2,uVar14,uStack_dc,uStack_e0,iStack_ac,0),
               lVar2 < 0)))))) ||
            (lVar2 = fn_82904370(param_1,param_2,uVar13,uStack_d8,uStack_dc,iStack_a8,0),
            lVar2 < 0)) ||
           ((lVar2 = fn_82904370(param_1,param_2,param_6 | 0x20200000,uStack_d4,uStack00000024,
                                   aiStack_110[0],0x17), lVar2 < 0 ||
            (lVar2 = fn_82904370(param_1,param_2,uVar14,uStack_d0,uStack_d8,uStack_d4,0),
            lVar2 < 0)))))) goto LAB_82905eb4;
    param_3 = (ulonglong)uStack_cc;
    lVar2 = fn_82904370(param_1,param_2,uVar13,param_3,uStack_e0,uStack_d0,4);
    if (((lVar2 < 0) ||
        ((lVar2 = fn_82904370(param_1,param_2,uVar3,uStack_c8,param_3,0,8), lVar2 < 0 ||
         (lVar2 = fn_82904370(param_1,param_2,uVar13,uStack_c4,uStack_c8,iStack_a4,0), lVar2 < 0))
        )) || ((iStack0000002c != 0 &&
               (lVar2 = fn_82904370(param_1,param_2,param_6 | 0x10000000,iStack0000002c,uStack_c4,
                                      0,0), lVar2 < 0)))) goto LAB_82905eb4;
    param_5 = (ulonglong)uStack00000034;
    if (param_5 != 0) {
      param_6 = param_6 | 0x10000000;
      goto code_r0x82905e94;
    }
  }
  else {
    if (((param_4 & 0xffffffff) != 0) &&
       (lVar2 = fn_82904370(param_1,param_2,param_6 & 0xffffffff000fffff | 0x10a00000,param_4,
                              param_3,0,0), lVar2 < 0)) goto LAB_82905eb4;
    if ((param_5 & 0xffffffff) != 0) {
      param_6 = param_6 & 0xffffffff000fffff | 0x10b00000;
code_r0x82905e94:
      lVar2 = fn_82904370(param_1,param_2,param_6,param_5,param_3,0,4);
      if (lVar2 < 0) goto LAB_82905eb4;
    }
  }
  lVar2 = 0;
LAB_82905eb4:
  fn_8265C990(uStack_120,0x24810000);
  return lVar2;
}

