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
extern unsigned int *auStack_b0;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABE9F0();
extern int fn_82AD6090();
extern int fn_82ADD198();
extern int fn_82ADD590();
extern int fn_82ADD5B8();
extern int fn_82ADD600();
extern int fn_82AEFCD8();
extern int fn_82AF88B0();
extern int fn_82AFA378();
extern int fn_82B0FC78();
extern int fn_82B102D8();
extern int fn_82B103B8();
extern int fn_82B80CD0();
extern int fn_82B80EF8();
extern int fn_82B82D28();
extern int fn_82B86A88();
extern int fn_82B86C90();
extern int fn_82B8AC10();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


/* WARNING: Type propagation algorithm not settling */

ulonglong fn_82B8C058(double param_1,int param_2,uint param_3,undefined8 param_4,ulonglong param_5
                       ,char param_6)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar7;
  int iVar8;
  undefined8 uVar6;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  double *pdVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  double extraout_f1;
  double dVar22;
  double dVar23;
  uint auStack_b0 [4];
  double adStack_a0 [20];
  
  uVar5 = fn_82B86C90(param_3,adStack_a0,auStack_b0);
  uVar17 = *(uint *)(param_3 + 8) >> 1 & uVar5 & 0xf;
  if (uVar17 != 0) {
    uVar16 = 0;
    uVar19 = 0;
    pdVar18 = adStack_a0;
    do {
      if (((uVar17 & (uint)(1 << ((uint)uVar16 & 0x3f))) != 0) &&
         (uVar5 = fn_82B80CD0(*pdVar18,uVar5,
                                ((2 << (uVar19 + 1 & 0x1f)) - 1U &
                                 *(uint *)((int)auStack_b0 + (uVar19 >> 3 & 0x1ffffffc)) &
                                -1 << (uVar19 & 0x1f)) >> (uVar19 & 0x1f),param_5),
         (double)(float)extraout_f1 == param_1)) {
        return uVar16;
      }
      uVar19 = uVar19 + 2;
      uVar16 = uVar16 + 1;
      pdVar18 = pdVar18 + 1;
    } while (uVar19 < 8);
  }
  if ((param_6 == '\0') || ((param_5 & 0xffffffff) != 0)) {
    return 4;
  }
  uVar19 = *(uint *)(param_3 + 8);
  uVar17 = (~(ulonglong)uVar19 & 0xffffffff) >> 1 & 0xf;
  if (uVar17 == 0) {
    return 4;
  }
  dVar23 = (double)lbl_821AAD20;
  if (((param_1 != (double)lbl_82002AE0) && (param_1 != dVar23)) ||
     ((uVar7 = uVar19 >> 7 & 0x7f, uVar7 != 0x61 && (uVar7 != 0x60)))) {
    uVar7 = uVar19 >> 7 & 0x7f;
    if (((uVar7 != 0xd) && (uVar7 != 0xe)) && (uVar7 != 0xf)) {
      return 4;
    }
    if ((uVar19 >> 0x17 & 1) != 0) {
      return 4;
    }
    if ((*(uint *)((*(uint **)(param_3 + 0x30))[3] + 8) & 0x3f80) != 16000) {
      return 4;
    }
    if ((*(uint *)((*(uint **)(param_3 + 0x34))[3] + 8) & 0x3f80) != 16000) {
      return 4;
    }
    if (param_1 < dVar23) {
      if ((**(uint **)(param_3 + 0x30) >> 1 & 1) != 0) {
        return 4;
      }
      if ((**(uint **)(param_3 + 0x34) >> 1 & 1) != 0) {
        return 4;
      }
    }
  }
  for (puVar15 = *(uint **)(param_3 + 4); puVar15 != (uint *)0x0; puVar15 = (uint *)puVar15[2]) {
    uVar19 = puVar15[4];
    if (((uVar19 != 0) && ((*(uint *)(uVar19 + 8) & 0x3f80) == 0x3700)) &&
       ((*puVar15 & 0xe000000) != 0)) goto LAB_82b8c23c;
  }
  uVar19 = 0;
LAB_82b8c23c:
  puVar15 = (uint *)0x0;
  if (uVar19 != 0) {
    piVar20 = (int *)(uVar19 + 0x2c);
    for (uVar7 = 0; uVar7 < (*(uint *)(uVar19 + 8) >> 0x13 & 7); uVar7 = uVar7 + 1) {
      puVar15 = (uint *)*piVar20;
      fn_82B82D28(puVar15,0,auStack_b0,auStack_b0 + 2,auStack_b0 + 1,0,param_3,0);
      if (((*(uint *)(auStack_b0[0] + 8) & 0x3f80) == 16000) &&
         (dVar22 = (double)fn_82B80EF8(auStack_b0[0],auStack_b0[2],auStack_b0[1]),
         param_1 == dVar22)) {
        if (puVar15 != (uint *)0x0) goto LAB_82b8c2e0;
        goto LAB_82b8c2cc;
      }
      piVar20 = piVar20 + 1;
    }
    puVar15 = (uint *)0x0;
LAB_82b8c2cc:
    if ((*(uint *)(uVar19 + 8) & 0x380000) == 0x200000) {
      return 4;
    }
  }
LAB_82b8c2e0:
  uVar7 = *(uint *)(param_3 + 8);
  uVar13 = uVar7 >> 7 & 0x7f;
  if ((uVar13 == 0x61) || (uVar13 == 0x60)) {
    uVar10 = uVar7 >> 0xe & 7;
    uVar17 = uVar17 & ~(uVar17 - 1);
    uVar7 = uVar7 >> 0x13 & 7;
    uVar21 = (uint)uVar17;
    if (param_1 == dVar23) {
      if (uVar13 == 0x61) {
        iVar9 = fn_82ABDD90(param_2,0x61,uVar7,uVar10);
        iVar9 = iVar9 + (param_3 - 0x18);
        uVar7 = (*(uint *)(iVar9 + 0xc) & 0xfffffff0 | uVar21) &
                ((uint)((~uVar17 & 0xffffffff) << 4) & 0xf0 | 0xffffff0f);
      }
      else {
        iVar9 = fn_82ABDD90(param_2,uVar13,uVar7,uVar10);
        iVar9 = iVar9 + (param_3 - 0x14);
        uVar13 = (uint)((~uVar17 & 0xffffffff) << 0xc) & 0xf000 | 0xffff0fff;
        uVar7 = (uint)(uVar17 << 8) | *(uint *)(iVar9 + 0xc) & 0xfffff0ff;
LAB_82b8c580:
        uVar7 = uVar7 & uVar13;
      }
    }
    else {
      if (uVar13 == 0x61) {
        iVar9 = fn_82ABDD90(param_2,0x61,uVar7,uVar10);
        iVar9 = iVar9 + (param_3 - 0x18);
        uVar13 = ~uVar21 | 0xfffffff0;
        uVar7 = (uint)(uVar17 << 4) | *(uint *)(iVar9 + 0xc) & 0xffffff0f;
        goto LAB_82b8c580;
      }
      iVar9 = fn_82ABDD90(param_2,uVar13,uVar7,uVar10);
      iVar9 = iVar9 + (param_3 - 0x14);
      uVar7 = ((uint)(uVar17 << 0xc) | *(uint *)(iVar9 + 0xc) & 0xffff0fff) &
              ((uint)((~uVar17 & 0xffffffff) << 8) & 0xf00 | 0xfffff0ff);
    }
    *(uint *)(iVar9 + 0xc) = uVar7;
    uVar17 = 0x1f - LZCOUNT(uVar21);
    *(uint *)(param_3 + 8) =
         *(uint *)(param_3 + 8) & 0xfffe3fe1 |
         (*(uint *)(param_3 + 8) & 0xffffc000) + 0x4000 & 0x1c000;
  }
  else {
    uVar13 = (uint)uVar17;
    uVar17 = 0x1f - LZCOUNT(uVar13 & ~(uVar13 - 1));
    *(uint *)(param_3 + 8) =
         uVar7 & 0xfffe3fe1 | ((1 << ((uint)uVar17 & 0x3f)) << 1 | uVar7) & 0x1e |
         (uVar7 & 0xffffc000) + 0x4000 & 0x1c000;
    puVar1 = *(uint **)(param_3 + 0x2c);
    puVar14 = *(uint **)(param_3 + 0x30);
    puVar2 = *(uint **)(param_3 + 0x34);
    uVar7 = *puVar1;
    if (((ulonglong)(uVar7 >> 0x19) & 7) <= (uVar17 & 0xffffffff)) {
      *puVar1 = uVar7 & 0xf1ffffff | (uVar7 & 0xfe000000) + 0x2000000 & 0xe000000;
      *puVar14 = *puVar14 & 0xf1ffffff | (*puVar14 & 0xfe000000) + 0x2000000 & 0xe000000;
      *puVar2 = *puVar2 & 0xf1ffffff | (*puVar2 & 0xfe000000) + 0x2000000 & 0xe000000;
    }
    uVar7 = *puVar1;
    uVar10 = (uint)((uVar17 & 0xffffffff) << 1);
    *puVar1 = uVar7 & 0xffffe01f |
              ((((uVar7 >> 5 & 0xff) >>
                 ((uint)((0x1fU - LZCOUNT(~uVar13 & ~(~uVar13 - 1)) & 0xffffffff) << 1) & 0x3e) & 3)
               << (uVar10 & 0x3e)) << 5 | ~(3 << (uVar10 & 0x3e)) << 5 & uVar7) & 0x1fe0;
    auStack_b0[2] = 0;
    fn_82AF88B0(puVar14,adStack_a0);
    uVar13 = auStack_b0[2];
    iVar9 = (int)((uVar17 & 0xffffffff) << 3);
    uVar7 = *puVar14;
    *(double *)((int)adStack_a0 + iVar9) = param_1;
    uVar7 = fn_82B86A88(param_2,uVar7 >> 0x19 & 7,adStack_a0,auStack_b0[2]);
    puVar12 = (uint *)(puVar14[3] + 4);
    for (puVar1 = (uint *)*puVar12; puVar1 != puVar14; puVar1 = (uint *)puVar1[2]) {
      puVar12 = puVar1 + 2;
    }
    *puVar12 = puVar14[2];
    puVar14[2] = *(uint *)(uVar7 + 4);
    *(uint **)(uVar7 + 4) = puVar14;
    puVar14[3] = uVar7;
    *puVar14 = *puVar14 & 0xffffe01b | 0x1c80;
    fn_82AF88B0(puVar2,adStack_a0);
    *(double *)((int)adStack_a0 + iVar9) = param_1;
    uVar7 = fn_82B86A88(param_2,*puVar2 >> 0x19 & 7,adStack_a0,uVar13);
    puVar12 = (uint *)(puVar2[3] + 4);
    for (puVar1 = (uint *)*puVar12; puVar1 != puVar2; puVar1 = (uint *)puVar1[2]) {
      puVar12 = puVar1 + 2;
    }
    *puVar12 = puVar2[2];
    puVar2[2] = *(uint *)(uVar7 + 4);
    *(uint **)(uVar7 + 4) = puVar2;
    puVar2[3] = uVar7;
    *puVar2 = *puVar2 & 0xffffe01b | 0x1c80;
    fn_82AEFCD8(puVar14[3]);
    *(uint *)(puVar14[3] + 8) = *(uint *)(puVar14[3] + 8) | 0x1000000;
    fn_82AEFCD8(puVar2[3]);
    *(uint *)(puVar2[3] + 8) = *(uint *)(puVar2[3] + 8) | 0x1000000;
  }
  if (puVar15 != (uint *)0x0) {
    fn_82AFA378(param_2,puVar15[3]);
    puVar14 = (uint *)(puVar15[3] + 4);
    for (puVar1 = (uint *)*puVar14; puVar1 != puVar15; puVar1 = (uint *)puVar1[2]) {
      puVar14 = puVar1 + 2;
    }
    *puVar14 = puVar15[2];
    puVar15[2] = *(uint *)(param_3 + 4);
    *(uint **)(param_3 + 4) = puVar15;
    puVar15[3] = param_3;
    *puVar15 = (uint)((uVar17 & 0xffffffff) << 5) & 0x360 | 0x1c80 | *puVar15 & 0xfffffc80;
    goto LAB_82b8c754;
  }
  if (uVar19 == 0) goto LAB_82b8c754;
  fn_82B0FC78(param_2,uVar19);
  iVar9 = fn_82B103B8(param_2,uVar19);
  fn_82B0FC78(param_2,iVar9);
  *(uint *)(iVar9 + 8) = *(uint *)(iVar9 + 8) | 0x1000000;
  if ((*(uint *)(uVar19 + 8) >> 0x17 & 1) != 0) {
    puVar15 = *(uint **)(param_2 + 0x294);
    if (puVar15 == (uint *)0x0) {
      fn_82B102D8(param_2,iVar9);
    }
    else {
      if ((puVar15[1] & 1) == 0) {
        uVar7 = *puVar15 & 0xfffffffe;
        iVar8 = uVar7 - 4;
        if ((iVar8 == 0) || (*(uint *)(uVar7 + 8) < *(int *)(uVar7 + 4) + 1U)) goto LAB_82b8c6f8;
      }
      else {
LAB_82b8c6f8:
        iVar8 = fn_82AD6090(puVar15,1);
      }
      iVar3 = *(int *)(iVar8 + 8);
      *(int *)(iVar8 + 8) = iVar3 + 1;
      *(int *)((iVar3 + 4) * 4 + iVar8) = iVar9;
      *(uint *)(iVar9 + 8) = *(uint *)(iVar9 + 8) | 0x800000;
      *(short *)(iVar9 + 0x12) = (short)*(undefined4 *)(uVar19 + 0x10);
    }
  }
  fn_82B8AC10(param_2,uVar19,0,1);
LAB_82b8c754:
  if (*(int *)(param_2 + 0x2c4) == 0) {
    return uVar17;
  }
  if ((*(uint *)(param_3 + 8) >> 0x17 & 1) != 0) {
    iVar9 = 0;
    uVar7 = 0;
    uVar5 = *(ushort *)(param_3 + 0x12) + uVar17;
    *(uint *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(param_2 + 0x2c4)) = param_3;
    uVar19 = *(uint *)(param_3 + 8) >> 1 & 0xf;
    while( true ) {
      if (uVar19 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = ((ulonglong)*(ushort *)(param_3 + 0x12) - LZCOUNT(uVar19 & ~(uVar19 - 1))) + 0x1f;
      }
      if ((uVar16 & 0xffffffff) == 0) break;
      if ((uVar5 & 0xffffffff) != (uVar16 & 0xffffffff)) {
        uVar6 = fn_82ADD198(param_2);
        if (iVar9 == 0) {
          iVar9 = fn_82ADD600(param_2,uVar6);
        }
        uVar10 = fn_82ADD590(param_2,uVar6);
        uVar13 = (uint)((uVar5 & 0xffffffff) >> 3) & 0x1ffffff8;
        iVar8 = *(int *)((uVar10 + 4) * 4 + iVar9);
        uVar7 = 1 << (uVar10 & 0x3f) | uVar7;
        *(ulonglong *)(uVar13 + iVar8) = 1L << (uVar5 & 0x3f) | *(ulonglong *)(uVar13 + iVar8);
      }
      uVar19 = uVar19 - (uVar19 & ~(uVar19 - 1));
    }
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_2,0x12c0);
    }
    lVar4 = -LZCOUNT(~uVar7 & ~(~uVar7 - 1));
    uVar16 = lVar4 + 0x1f;
    if (((ulonglong)*(uint *)(iVar9 + 0xc0) & 7) <= (uVar16 & 0xffffffff)) {
      uVar11 = fn_82ABE9F0(param_2,*(int *)(param_2 + 0x2a0) << 3,0);
      *(undefined4 *)((*(uint *)(iVar9 + 0xc0) & 7) * 4 + iVar9) = uVar11;
      *(uint *)(iVar9 + 0xc0) =
           *(uint *)(iVar9 + 0xc0) & 0xfffffff8 | *(uint *)(iVar9 + 0xc0) + 1 & 7;
    }
    uVar19 = (uint)((uVar5 & 0xffffffff) >> 3) & 0x1ffffff8;
    iVar8 = *(int *)((int)((uVar16 & 0xffffffff) << 2) + iVar9);
    *(ulonglong *)(uVar19 + iVar8) = 1L << (uVar5 & 0x3f) | *(ulonglong *)(uVar19 + iVar8);
    fn_82ADD5B8(param_2,uVar5,iVar9,uVar16);
    uVar19 = *(uint *)(param_3 + 8) >> 1 & 0xf;
    while( true ) {
      if (uVar19 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = ((ulonglong)*(ushort *)(param_3 + 0x12) - LZCOUNT(uVar19 & ~(uVar19 - 1))) + 0x1f;
      }
      if ((uVar16 & 0xffffffff) == 0) break;
      if ((uVar5 & 0xffffffff) != (uVar16 & 0xffffffff)) {
        uVar7 = (uint)((uVar16 & 0xffffffff) >> 3) & 0x1ffffff8;
        iVar8 = *(int *)((int)((lVar4 + 0x23U & 0xffffffff) << 2) + iVar9);
        *(ulonglong *)(uVar7 + iVar8) = 1L << (uVar16 & 0x3f) | *(ulonglong *)(uVar7 + iVar8);
      }
      uVar19 = uVar19 - (uVar19 & ~(uVar19 - 1));
    }
    return uVar17;
  }
  return uVar17;
}

