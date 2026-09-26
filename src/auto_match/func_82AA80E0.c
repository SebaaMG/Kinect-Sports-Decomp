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
extern unsigned int *auStack_11c;
extern unsigned int *auStack_120;
extern unsigned int *auStack_1a8;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_e8;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_829206B8();
extern int fn_82A28568();
extern int fn_82A28E60();
extern int fn_82A2A360();
extern int fn_82A94F88();
extern int fn_82A976B8();
extern int fn_82AA8040();
extern int fn_82B63658();
extern int fn_82B63DA8();
extern int fn_82B63EC8();
extern int fn_82B67470();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int iStack_108;
extern unsigned int iStack_110;
extern unsigned int iStack_15c;
extern unsigned int iStack_160;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821A7F10;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831604FC;
extern unsigned int lbl_83223534;
extern unsigned int stack0x00000000;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_10c;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_164;
extern unsigned int uStack_168;
extern unsigned int uStack_16c;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_184;
extern unsigned int uStack_188;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


undefined8
fn_82AA80E0(double param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,ulonglong param_5
             ,ulonglong param_6,uint *param_7,longlong param_8,longlong param_9)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  int iVar9;
  undefined8 uVar8;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  int iVar26;
  longlong lVar25;
  ulonglong uVar27;
  int *piVar28;
  ulonglong uVar29;
  undefined1 *puVar30;
  double dVar31;
  uint uStack00000014;
  uint uStack0000001c;
  uint uStack00000024;
  uint uStack0000002c;
  uint uStack00000034;
  uint in_stack_00000054;
  uint *in_stack_0000005c;
  uint in_stack_00000064;
  uint auStack_1d0 [4];
  int aiStack_1c0 [4];
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 auStack_1a8 [24];
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint uStack_178;
  uint uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint uStack_168;
  uint uStack_164;
  int iStack_160;
  int iStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint uStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [12];
  int iStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [32];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_b0 [176];
  
  uVar18 = (uint)param_3;
  uVar12 = (uint)param_4;
  uVar13 = (uint)param_5;
  uStack00000014 = (uint)param_2;
  uStack0000001c = uVar18;
  uStack00000024 = uVar12;
  uStack0000002c = uVar13;
  uStack00000034 = (uint)param_6;
  fn_829206B8(&stack0x00000000 + -0x1a8);
  uVar11 = 4;
  iVar9 = 0;
  auStack_1d0[0] = 4;
  if (in_stack_0000005c == (uint *)0x0) {
    in_stack_0000005c = &uStack_130;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_128 = uVar12;
    uStack_124 = uVar13;
  }
  uVar29 = (ulonglong)in_stack_0000005c[2] - (ulonglong)*in_stack_0000005c;
  uVar27 = (ulonglong)in_stack_0000005c[3] - (ulonglong)in_stack_0000005c[1];
  if (param_7 == (uint *)0x0) {
    uStack_1b0 = 0;
    param_7 = &uStack_1b0;
    uStack_1ac = 0;
  }
  if ((in_stack_00000064 & 0x10) == 0) {
    uVar11 = 0x80004;
    auStack_1d0[0] = 0x80004;
  }
  uVar3 = param_6 & 0x3f;
  uVar4 = in_stack_00000054 & 0x3f;
  if ((in_stack_00000054 & 0x600) == 0x600) {
    uVar11 = uVar11 | 0x200000;
    auStack_1d0[0] = uVar11;
  }
  if (((uint)param_6 & 0x600) == 0x600) {
    uVar11 = uVar11 | 0x400000;
    auStack_1d0[0] = uVar11;
  }
  if ((uVar3 == 0x31) || (uVar3 == 0x3c)) {
    uVar11 = *param_7;
    uVar12 = param_7[1];
    iVar9 = (int)uVar12 >> 2;
    bVar1 = (&lbl_821A7F10)[(int)uVar3];
    lVar17 = (ulonglong)uVar11 +
             ((longlong)((int)uVar11 >> 2) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 3) != 0) &
             0x3fffffff) * -4;
    uVar22 = (longlong)(int)(uint)((byte)(&lbl_821A7F10)[uVar4] >> 3) *
             (longlong)(int)*in_stack_0000005c +
             (longlong)(int)in_stack_0000005c[1] * (longlong)(int)param_9 + param_8;
    lVar19 = (longlong)(int)(iVar9 + (uint)((int)uVar12 < 0 && (uVar12 & 3) != 0)) *
             (longlong)(int)uVar18 +
             (longlong)(int)(((int)uVar11 >> 2) + (uint)((int)uVar11 < 0 && (uVar11 & 3) != 0)) *
             (longlong)(int)((uint)bVar1 << 1) + param_2;
    if ((lVar17 != 0) ||
       ((((ulonglong)uVar12 !=
          ((longlong)iVar9 + (ulonglong)((int)uVar12 < 0 && (uVar12 & 3) != 0) & 0x3fffffff) << 2 ||
         ((uVar29 & 3) != 0)) || (bVar5 = false, (uVar27 & 3) != 0)))) {
      bVar5 = true;
    }
    lVar20 = 0;
    lVar21 = 0;
    if ((in_stack_00000054 == 0x2d22aaa5) && (uVar16 = 0, lVar25 = param_9, !bVar5)) {
LAB_82aa88ac:
      trapWord(6,(ulonglong)bVar1 << 1,0);
      uVar14 = (ulonglong)uStack0000001c / ((ulonglong)bVar1 << 1);
      if (uVar3 == 0x31) {
        fn_82B63658(uVar29,uVar27,uVar22,lVar25,lVar19,uVar14,lVar20,lVar21);
      }
      else if (uVar3 == 0x3c) {
        fn_82B63DA8(uVar29,uVar27,uVar22,lVar25,lVar19,uVar14,lVar20,lVar21);
      }
      if ((uVar16 & 0xffffffff) != 0) {
        fn_8265C990(uVar16,0x24870000);
      }
      uVar11 = (int)uStack00000034 >> 6 & 3;
      if (uVar11 != 1) {
        if (((int)uStack00000034 >> 6 & 3U) == 0) {
          uVar11 = uStack00000034 & 0xffffff3f | 0x40;
        }
        else if (uVar11 == 2) {
          uVar11 = uStack00000034 | 0xc0;
        }
        else {
          uVar11 = uStack00000034 & 0xffffff3f | 0x80;
        }
        fn_82AA8040(lVar19,uStack0000001c,lVar19,uStack0000001c,uVar29,uVar27,uVar11);
      }
      fn_82B63EC8(&stack0x00000000 + -0x1a8);
      return 0;
    }
    uVar16 = lVar17 + uVar29 + 3;
    uVar29 = uVar16 & 0xfffffffc;
    uVar27 = (ulonglong)uVar12 +
             ((longlong)iVar9 + (ulonglong)((int)uVar12 < 0 && (uVar12 & 3) != 0) & 0x3fffffff) * -4
             + uVar27 + 3 & 0xfffffffc;
    uVar22 = fn_8265C940(((longlong)(int)uVar27 * (longlong)(int)uVar29 & 0x1fffffffU) << 3,
                               0x24870000);
    if (uVar22 != 0) {
      dVar31 = (double)lbl_821AAD20;
      lVar25 = (uVar16 & 0x1ffffffc) << 3;
      if (bVar5) {
        uVar11 = *param_7;
        uVar18 = param_7[1];
        uVar11 = (((int)uVar11 >> 2) + (uint)((int)uVar11 < 0 && (uVar11 & 3) != 0)) * 4 +
                 (int)uVar29;
        uVar18 = (((int)uVar18 >> 2) + (uint)((int)uVar18 < 0 && (uVar18 & 3) != 0)) * 4 +
                 (int)uVar27;
        fn_82A976B8(dVar31,uVar22,lVar25,uVar29,uVar27,0x2d22aaa5,0,uStack00000014,
                          uStack0000001c);
        if ((int)uStack00000024 < (int)uVar11) {
          lVar20 = (ulonglong)uVar11 - (ulonglong)uStack00000024;
        }
        if ((int)uStack0000002c < (int)uVar18) {
          lVar21 = (ulonglong)uVar18 - (ulonglong)uStack0000002c;
        }
      }
      fn_82A976B8(dVar31,uVar22,lVar25,uVar29,uVar27,0x2d22aaa5,&stack0x00000000 + -0x1d0,
                        param_8,param_9);
      uVar16 = uVar22;
      goto LAB_82aa88ac;
    }
    goto LAB_82aa877c;
  }
  fn_82A94F88(uVar3,&stack0x00000000 + -0x11c,&stack0x00000000 + -0x120);
  uStack_168 = *param_7;
  uStack_164 = param_7[1];
  iStack_160 = uStack_168 + (int)uVar29;
  iStack_15c = uStack_164 + (int)uVar27;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_170 = 0;
  uStack_16c = 1;
  uStack_158 = 0;
  uStack_154 = 1;
  uStack_150 = 1;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  if ((uVar3 == 0x12) || (uVar3 == 0x33)) {
    uStack_18c = 0x1a200052;
  }
  else if ((uVar3 == 0x13) || (uVar3 == 0x34)) {
    uStack_18c = 0x1a200053;
  }
  else if ((uVar3 == 0x14) || (uVar3 == 0x35)) {
    uStack_18c = 0x1a200054;
  }
  else if (uVar3 == 0x3a) {
    uStack_18c = 0x1a20007a;
  }
  else if (uVar3 == 0x3b) {
    uStack_18c = 0x1a20007b;
  }
  else if (uVar3 == 0xb) {
    if ((in_stack_00000064 & 4) == 0) {
      uStack_18c = 0x18280000;
    }
    else {
      uStack_18c = 0x1a200000;
    }
    uStack_18c = uStack_18c | 0x4b;
  }
  else if (uVar3 == 0xc) {
    if ((in_stack_00000064 & 4) == 0) {
      uStack_18c = 0x18280000;
    }
    else {
      uStack_18c = 0x1a200000;
    }
    uStack_18c = uStack_18c | 0x4c;
  }
  uStack_100 = *in_stack_0000005c;
  uStack_fc = in_stack_0000005c[1];
  uStack_f8 = in_stack_0000005c[2];
  uStack_f4 = in_stack_0000005c[3];
  iStack_110 = (int)param_8;
  uStack_104 = 0;
  uStack_f0 = 0;
  uStack_ec = 1;
  uStack_190 = (uint)param_2;
  uStack_188 = uVar18;
  uStack_178 = uVar12;
  uStack_174 = uVar13;
  iStack_108 = (int)param_9;
  fn_82F68CC0(&stack0x00000000 + -0xe8,&stack0x00000000 + -0x100,0x18);
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  if (uVar4 == 6) {
    uStack_10c = 0x18280086;
  }
  else {
    uStack_10c = 0x1a22aaa6;
  }
  uVar18 = in_stack_00000054 >> 6 & 3;
  bVar15 = false;
  bVar5 = false;
  uVar29 = CONCAT44(in_stack_00000054,in_stack_00000054) & 0xffffffffffffff3f;
  if (uVar18 != 2) {
    if (uVar18 == 0) {
      lVar17 = 2;
    }
    else {
      lVar17 = 3;
      if (uVar18 != 1) {
        lVar17 = 1;
      }
    }
    bVar15 = true;
    uVar29 = uVar29 << 0x20 | (ulonglong)in_stack_00000054 & 0xffffff3f | lVar17 << 6;
  }
  uVar18 = in_stack_00000054 >> 0x12 & 0xfff;
  if (uVar4 == 6) {
    if (uVar18 != 0x60a) {
      uStack_1b0 = 0xffffffff;
LAB_82aa844c:
      bVar5 = true;
    }
  }
  else if (uVar18 != 0x688) {
    uStack_1b0 = lbl_82002AE0;
    goto LAB_82aa844c;
  }
  if ((bVar15) || (bVar5)) {
    bVar1 = (byte)(&lbl_821A7F10)[uVar4] >> 3;
    bVar6 = (byte)(&lbl_821A7F10)[uVar4] >> 5;
    iVar24 = bVar1 * uVar12;
    uVar7 = fn_82A2A360();
    iVar9 = fn_82A28568(uVar7,0,(longlong)iVar24 * (longlong)(int)uVar13);
    if (iVar9 == 0) {
LAB_82aa877c:
      fn_82B63EC8(&stack0x00000000 + -0x1a8);
      return 0xffffffff8007000e;
    }
    fn_82AA8040(iVar9,iVar24,param_8,param_9,param_4,param_5,uVar29);
    if ((bVar5) && (uStack0000002c != 0)) {
      uVar29 = (ulonglong)uStack0000002c;
      iVar23 = iVar9;
      do {
        uVar27 = param_4;
        iVar26 = iVar23;
        uVar22 = param_4 & 0xffffffff;
        while (uVar22 != 0) {
          puVar30 = &stack0x00000000 + -0xb0;
          piVar28 = (int *)(&stack0x00000000 + -0x1c0);
          lVar17 = 4;
          do {
            iVar2 = *piVar28;
            if (iVar2 == 4) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(puVar30,0);
            }
            if (iVar2 == 5) {
              puVar10 = &stack0x00000000 + -0x1b0;
            }
            else {
              puVar10 = (undefined1 *)((3 - iVar2) * (uint)bVar6 + iVar26);
            }
            fn_82F68CC0(puVar30,puVar10,(uint)bVar6);
            lVar17 = lVar17 + -1;
            piVar28 = piVar28 + 1;
            puVar30 = puVar30 + bVar6;
          } while (lVar17 != 0);
          fn_82F68CC0(iVar26,&stack0x00000000 + -0xb0,(uint)bVar1);
          iVar26 = iVar26 + (uint)bVar1;
          uVar27 = uVar27 - 1;
          uVar22 = uVar27;
        }
        uVar29 = uVar29 - 1;
        iVar23 = iVar23 + iVar24;
      } while (uVar29 != 0);
    }
    param_6 = (ulonglong)uStack00000034;
    param_5 = (ulonglong)uStack0000002c;
    param_2 = (ulonglong)uStack00000014;
    param_3 = (ulonglong)uStack0000001c;
    uVar11 = auStack_1d0[0];
    iStack_110 = iVar9;
    iStack_108 = iVar24;
  }
  lbl_83223534 = in_stack_00000064 & 1;
  lbl_831604FC = (float)param_1;
  uVar7 = fn_82B67470(&stack0x00000000 + -0x1a8,&stack0x00000000 + -400,
                            &stack0x00000000 + -0x110,uVar11);
  if (iVar9 != 0) {
    uVar8 = fn_82A2A360();
    fn_82A28E60(uVar8,0,iVar9);
  }
  uVar29 = (param_6 & 0xffffffff) >> 6 & 3;
  if ((((((((uVar3 == 0x12) || (uVar3 == 0x33)) || (uVar3 == 0x13)) ||
         ((uVar3 == 0x34 || (uVar3 == 0x3a)))) ||
        ((uVar3 == 0x14 || ((uVar3 == 0x35 || (uVar3 == 0x3b)))))) || (uVar3 == 0xb)) ||
      (uVar3 == 0xc)) && (uVar29 != 1)) {
    if (uVar29 == 0) {
      lVar17 = 1;
    }
    else {
      lVar17 = (ulonglong)((int)uVar29 == 2) + 2;
    }
    fn_82AA8040(param_2,param_3,param_2,param_3,param_4,param_5,
                  lVar17 << 6 | param_6 << 0x20 | param_6 & 0xffffff3f);
  }
  fn_82B63EC8(&stack0x00000000 + -0x1a8);
  return uVar7;
}

