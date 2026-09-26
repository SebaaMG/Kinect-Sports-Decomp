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
extern unsigned int *auStack_10c;
extern unsigned int *auStack_110;
extern unsigned int *auStack_d0;
extern int fn_8263AB38();
extern int fn_8263AC58();
extern int fn_8263AD78();
extern int fn_8263B190();
extern int fn_8263B958();
extern int fn_82A94B08();
extern int fn_82A94CC0();
extern int fn_82A94DD0();
extern int fn_82A98BA8();
extern int fn_82AA5F58();
extern int fn_82F68CC0();
extern unsigned int iStack00000014;
extern unsigned int iStack0000002c;
extern unsigned int iStack0000003c;
extern unsigned int iStack_100;
extern unsigned int iStack_118;
extern unsigned int iStack_11c;
extern unsigned int iStack_120;
extern unsigned int iStack_124;
extern unsigned int iStack_128;
extern unsigned int *iStack_140;
extern unsigned int iStack_158;
extern unsigned int iStack_168;
extern unsigned int iStack_16c;
extern unsigned int iStack_180;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int iStack_e4;
extern unsigned int iStack_e8;
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int iStack_f4;
extern unsigned int iStack_f8;
extern unsigned int iStack_fc;
extern unsigned int lbl_821CBFB1;
extern unsigned int stack0x0000002c;
extern unsigned int stack0x00000034;
extern unsigned int stack0x0000003c;
extern unsigned int stack0x00000054;
extern unsigned int stack0x0000005c;
extern unsigned int stack0x00000064;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_15c;
extern unsigned int uStack_164;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int *uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_a0;
extern unsigned int uStack_b0;
extern unsigned int uStack_d8;


void fn_82A94FE8(int param_1,uint *param_2,uint *param_3,int param_4,uint *param_5,int param_6,
                  uint *param_7,uint *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int *piVar15;
  ulonglong uVar13;
  uint uVar16;
  ulonglong uVar14;
  uint *puVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iStack00000014;
  int iStack0000002c;
  uint *puStack00000034;
  int iStack0000003c;
  uint *in_stack_0000005c;
  int iStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  int iStack_16c;
  int iStack_168;
  uint uStack_164;
  uint *puStack_160;
  uint uStack_15c;
  int iStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  int iStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  uint *puStack_114;
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [4];
  uint uStack_108;
  uint uStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  ulonglong uStack_d8;
  undefined1 auStack_d0 [32];
  uint uStack_b0;
  uint uStack_a0;
  
  if (param_2 != (uint *)0x0) {
    *param_2 = *(uint *)(param_1 + 0x20) & 0xfffff000;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = *(uint *)(param_1 + 0x30) & 0xfffff000;
  }
  uVar26 = 0;
  if (param_5 == (uint *)0x0) {
    uStack_12c = 0;
  }
  else {
    uStack_12c = *param_5;
  }
  if (in_stack_0000005c == (uint *)0x0) {
    uStack_130 = 0;
  }
  else {
    uStack_130 = *in_stack_0000005c;
  }
  uVar19 = ((ulonglong)(*(uint *)(param_1 + 0x2c) >> 6) & 0xf) + 1;
  uStack_134 = (uint)uVar19;
  iVar20 = 1;
  if (((*(uint *)(param_1 + 0x30) & 0x600) == 0x600) || ((*(uint *)(param_1 + 0x20) & 0x400) != 0))
  {
    uStack_154 = (*(uint *)(param_1 + 0x24) >> 0x1a) + 1;
  }
  else {
    uStack_154 = 1;
  }
  iStack00000014 = param_1;
  iStack0000002c = param_4;
  puStack00000034 = param_5;
  iStack0000003c = param_6;
  fn_8263B190(param_1 + 0x1c,&iStack_16c,&iStack_168,&iStack_11c);
  uVar22 = *(uint *)(param_1 + 0x20);
  uVar2 = uVar22 & 0x3f;
  uVar16 = *(uint *)(param_1 + 0x30) >> 9 & 3;
  uVar27 = *(uint *)(param_1 + 0x30) >> 0xb & 1;
  uVar18 = *(uint *)(param_1 + 0x28);
  iVar3 = -(*(int *)(param_1 + 0x1c) >> 0x1f);
  uVar4 = -((int)uVar18 >> 0x1f);
  uVar13 = (ulonglong)uVar4;
  uStack_170 = uVar16;
  fn_8263AB38(uVar2,&uStack_164,&uStack_17c);
  iVar29 = iStack_168;
  iVar23 = iStack_16c;
  uVar24 = (ulonglong)(uVar18 >> 0x1e) & 2;
  iVar1 = (int)uVar24;
  uStack_108 = (uint)(byte)(&lbl_821CBFB1)[(uVar22 & 0x3f) * 2];
  uStack_178 = uStack_108 * uStack_164 * uStack_17c >> 3;
  if (((0x10 < (uint)(1 << ((uVar4 - (int)LZCOUNT((iStack_16c - iVar1) + -1)) + 0x20 & 0x3f))) &&
      (0x10 < (uint)(1 << ((uVar4 - (int)LZCOUNT((iStack_168 - iVar1) + -1)) + 0x20 & 0x3f)))) ||
     (uVar27 == 0)) {
    iVar20 = 0;
  }
  iStack_158 = iVar20;
  fn_82F68CC0(auStack_d0,param_1,0x34);
  uStack_b0 = uStack_b0 & 0xfff;
  uStack_a0 = uStack_a0 & 0xfff;
  if ((param_3 != (uint *)0x0) || (param_8 != (uint *)0x0)) {
    fn_8263AD78(iVar23,iVar29,iStack_11c,uVar19,uVar2,uVar16,iVar3,uVar27);
    if (param_3 != (uint *)0x0) {
      if (((*(uint *)(param_1 + 0x2c) & 0x3c) == 0) || (iVar20 != 0)) {
        *param_3 = uStack_15c;
      }
      else {
        *param_3 = 0;
      }
    }
    iVar23 = iStack_16c;
    iVar29 = iStack_168;
    if (param_8 != (uint *)0x0) {
      *param_8 = uStack_150;
    }
  }
  if (uVar27 != 0) {
    lVar11 = (uVar13 - LZCOUNT((iVar23 - iVar1) + -1)) + 0x20;
    lVar8 = (uVar13 - LZCOUNT((iVar29 - iVar1) + -1)) + 0x20;
    if ((int)lVar8 <= (int)lVar11) {
      lVar11 = lVar8;
    }
    uVar12 = lVar11 - 4;
    if (((((uVar12 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(uVar12 == 0) & uVar12 & 0xffffffff) <
        uVar19) {
      lVar11 = (uVar13 - LZCOUNT((iVar23 - iVar1) + -1)) + 0x20;
      lVar8 = (uVar13 - LZCOUNT((iVar29 - iVar1) + -1)) + 0x20;
      if ((int)lVar8 <= (int)lVar11) {
        lVar11 = lVar8;
      }
      uVar19 = lVar11 - 4;
      uVar19 = (((uVar19 & 0xffffffff) >> 0x1f) - 1) + (ulonglong)(uVar19 == 0) & uVar19;
    }
  }
  puStack_160 = &uStack_12c;
  uStack_144 = 0;
  piVar15 = &stack0x0000002c;
  piVar9 = (int *)&stack0x00000034;
  piVar21 = &stack0x0000003c;
  do {
    iVar20 = *piVar15;
    if ((iVar20 != 0) && (puStack_114 = (uint *)*piVar9, puStack_114 != (uint *)0x0)) {
      uVar27 = 0;
      uVar22 = 0;
      uVar18 = 0;
      uVar16 = 0;
      if ((uVar26 & 0xffffffff) == 0) {
LAB_82a95370:
        uVar13 = (ulonglong)(*(uint *)(param_1 + 0x2c) >> 2) & 0xf;
        if (uVar13 <= (uVar26 & 0xffffffff)) {
          uVar13 = uVar26;
        }
        if (((uVar26 & 0xffffffff) == 1) || (uVar22 = uVar27, iStack_158 == 0)) {
          uVar12 = 1;
          if ((uVar26 & 0xffffffff) != 0) {
            uVar12 = uVar19;
          }
          for (; uVar22 = uVar27, (uVar13 & 0xffffffff) < (uVar12 & 0xffffffff); uVar13 = uVar13 + 1
              ) {
            uVar14 = 0;
            if (uStack_154 != 0) {
              iVar23 = *piVar21;
              iVar29 = uVar27 << 3;
              uVar22 = uVar16;
              uVar28 = uVar18;
              do {
                fn_8263B958(auStack_d0,uVar14,uVar13,&iStack_140,auStack_110,auStack_10c,
                                  &iStack_118,&uStack_138);
                uVar18 = uStack_14c;
                if (iVar3 == 0) {
                  if (uStack_170 == 2) {
                    uVar16 = ((uStack_17c * 0x20 + uStack_174) - 1 & ~(uStack_17c * 0x20 - 1)) *
                             iStack_140;
                    iVar6 = iStack_180;
                  }
                  else {
                    uVar16 = (uStack_174 + uStack_17c) - 1 & ~(uStack_17c - 1);
                    iVar6 = iStack_140;
                  }
                  iVar6 = uVar16 * iVar6;
                }
                else {
                  trapWord(6,(ulonglong)uStack_164,0);
                  trapWord(6,(ulonglong)uStack_17c,0);
                  uVar5 = (ulonglong)uStack_138 / (ulonglong)uStack_164;
                  uVar7 = (ulonglong)uStack_174 / (ulonglong)uStack_17c;
                  if (uStack_170 == 2) {
                    iVar6 = fn_82AA5F58(uVar5,uVar7,iStack_180,uStack_178);
                  }
                  else {
                    iVar6 = fn_82A98BA8(uVar5,uVar7,uStack_178);
                  }
                  iVar6 = (iVar6 + 1) * uStack_178;
                }
                uVar25 = uVar18 & ~(iVar23 - 1U);
                uVar16 = (iVar23 + iVar6 + uVar18) - 1 & ~(iVar23 - 1U);
                uVar18 = uVar28;
                if ((uVar22 < uVar25) && (uVar18 = uVar25, uVar22 != 0)) {
                  if (uVar27 < *puStack_160) {
                    *(uint *)(iVar20 + iVar29) = uVar28;
                    *(uint *)(iVar20 + iVar29 + 4) = uVar22;
                  }
                  uVar27 = uVar27 + 1;
                  iVar29 = iVar29 + 8;
                }
                uVar14 = uVar14 + 1;
                uVar22 = uVar16;
                uVar28 = uVar18;
              } while ((uVar14 & 0xffffffff) < (ulonglong)uStack_154);
            }
          }
        }
        if ((((uVar26 & 0xffffffff) == 1) || (iStack_158 != 0)) &&
           ((uVar13 & 0xffffffff) < (ulonglong)uStack_134)) {
          iVar23 = uVar4 - (int)uVar19;
          iStack_180 = 1;
          uStack_150 = 1 << ((iVar23 - (int)LZCOUNT((iStack_16c - iVar1) + -1)) + 0x20U & 0x3f);
          uStack_15c = 1 << ((iVar23 - (int)LZCOUNT((iStack_168 - iVar1) + -1)) + 0x20U & 0x3f);
          uVar27 = 0xffffffff;
          uVar28 = 0;
          fn_8263AC58(&uStack_150,&uStack_15c,&iStack_180,uStack_108,uVar2,uStack_170,iVar3);
          trapWord(6,(ulonglong)uStack_164,0);
          trapWord(6,(ulonglong)uStack_17c,0);
          uVar26 = (ulonglong)uStack_150 / (ulonglong)uStack_164;
          uVar12 = (ulonglong)uStack_15c / (ulonglong)uStack_17c;
          do {
            uVar25 = (uint)uVar13;
            uStack_138 = (uint)(iStack_16c - iVar1) >> (uVar25 & 0x3f);
            if (uStack_138 < 2) {
              uStack_138 = 1;
            }
            uStack_138 = uStack_138 + iVar1;
            uVar14 = (ulonglong)((uint)(iStack_168 - iVar1) >> (uVar25 & 0x3f));
            if (uVar14 < 2) {
              uVar14 = 1;
            }
            lVar11 = uVar14 + uVar24;
            uStack_174 = (uint)lVar11;
            if (uStack_170 == 2) {
              uVar25 = (uint)(iStack_11c - iVar1) >> (uVar25 & 0x3f);
              if (uVar25 < 2) {
                uVar25 = 1;
              }
              iStack_180 = uVar25 + iVar1;
            }
            else {
              iStack_180 = 1;
            }
            uVar14 = (ulonglong)uStack_17c;
            uStack_104 = (uStack_138 + uStack_164) - 1;
            trapWord(6,(ulonglong)uStack_164,0);
            trapWord(6,uVar14,0);
            uVar25 = uStack_104 / uStack_164;
            uStack_d8 = uVar26;
            fn_82A94B08();
            uVar26 = uStack_d8;
            iVar23 = (int)(((lVar11 + uVar14) - 1 & 0xffffffff) / uVar14);
            if (iVar3 == 0) {
              iVar29 = (int)uVar12;
              uStack_148 = (iStack_120 * iVar29 + iStack_124) * (int)uStack_d8 + iStack_128;
              uStack_13c = (((iStack_120 + iStack_180 + -1) * iVar29 + iStack_124 + iVar23 + -1) *
                            (int)uStack_d8 + iStack_128 + uVar25) - 1;
            }
            else if (uStack_170 == 2) {
              iStack_e8 = iStack_128 + uVar25;
              iStack_e4 = iStack_124 + iVar23;
              iStack_dc = iStack_120 + iStack_180;
              iStack_f0 = iStack_128;
              iStack_ec = iStack_124;
              iStack_e0 = iStack_120;
              fn_82A94DD0(uStack_d8,uVar12,&iStack_f0,uStack_178,&uStack_148,&uStack_13c);
            }
            else {
              iStack_f8 = iStack_128 + uVar25;
              iStack_100 = iStack_128;
              iStack_f4 = iStack_124 + iVar23;
              iStack_fc = iStack_124;
              fn_82A94CC0(uStack_d8,&iStack_100,uStack_178,&uStack_148,&uStack_13c);
            }
            uVar25 = uStack_154;
            puVar17 = puStack_160;
            if (uStack_148 < uVar27) {
              uVar27 = uStack_148;
            }
            if (uVar28 < uStack_13c) {
              uVar28 = uStack_13c;
            }
            uVar13 = uVar13 + 1;
          } while ((uVar13 & 0xffffffff) < (ulonglong)uStack_134);
          uVar26 = 0;
          if (uStack_154 != 0) {
            iVar23 = *piVar21;
            iVar29 = uVar22 << 3;
            iVar6 = uVar27 * uStack_178;
            iVar30 = (uVar28 + 1) * uStack_178;
            uVar27 = uVar16;
            do {
              fn_8263B958(auStack_d0,uVar26,uVar19,&iStack_140,auStack_110,auStack_10c,
                                &iStack_118,&uStack_138);
              uVar10 = (uStack_14c - iStack_118) + iVar6 & ~(iVar23 - 1U);
              uVar16 = (iVar23 + (uStack_14c - iStack_118) + iVar30) - 1 & ~(iVar23 - 1U);
              uVar28 = uVar18;
              if ((uVar27 < uVar10) && (uVar28 = uVar10, uVar27 != 0)) {
                if (uVar22 < *puVar17) {
                  *(uint *)(iVar20 + iVar29) = uVar18;
                  *(uint *)(iVar20 + iVar29 + 4) = uVar27;
                }
                uVar22 = uVar22 + 1;
                iVar29 = iVar29 + 8;
              }
              uVar18 = uVar28;
              uVar26 = uVar26 + 1;
              uVar27 = uVar16;
            } while ((uVar26 & 0xffffffff) < (ulonglong)uVar25);
          }
        }
        if (uVar16 != 0) {
          if (uVar22 < *puStack_160) {
            puVar17 = (uint *)(uVar22 * 8 + iVar20);
            *puVar17 = uVar18;
            puVar17[1] = uVar16;
          }
          uVar22 = uVar22 + 1;
        }
      }
      else if ((iStack_158 == 0) && (1 < uStack_134)) {
        uVar26 = (ulonglong)uStack_144;
        param_1 = iStack00000014;
        goto LAB_82a95370;
      }
      uVar26 = (ulonglong)uStack_144;
      *puStack_114 = uVar22;
      param_1 = iStack00000014;
    }
    uVar26 = uVar26 + 1;
    puStack_160 = &uStack_130;
    uStack_144 = (uint)uVar26;
    piVar15 = (int *)&stack0x00000054;
    piVar9 = (int *)&stack0x0000005c;
    piVar21 = (int *)&stack0x00000064;
    if (1 < (uVar26 & 0xffffffff)) {
      return;
    }
  } while( true );
}

