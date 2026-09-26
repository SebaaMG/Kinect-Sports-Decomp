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
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ACA638();
extern unsigned int lbl_820D7B2B;


void fn_82B81D80(uint param_1,ulonglong param_2,uint param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  
  uVar18 = *(uint *)(param_1 + 8);
  uVar17 = uVar18 >> 1 & 0xf;
  uVar16 = uVar18 >> 7 & 0x7f;
  uVar6 = param_2 & 0xf;
  bVar1 = "SV_Depth"[uVar17 + 0xb];
  uVar20 = (((param_3 >> (bVar1 >> 5 & 0x3e) & 3) << 2 | param_3 >> (bVar1 >> 3 & 6) & 3) << 2 |
           param_3 >> (bVar1 >> 1 & 6) & 3) << 2 | param_3 >> ((bVar1 & 3) << 1) & 3;
  if ((uVar16 < 0x60) || (bVar8 = true, 0x66 < uVar16)) {
    bVar8 = false;
  }
  if (bVar8) {
    uVar12 = 0;
    uVar11 = 0;
    uVar14 = 0xe4;
    if (uVar16 == 0x60) {
      iVar9 = fn_82ABDD90(*(undefined4 *)(*(int *)(param_1 & 0xfffff000) + 0x94),0x60,
                           uVar18 >> 0x13 & 7,uVar18 >> 0xe & 7);
      uVar14 = *(uint *)(iVar9 + param_1 + -8);
      uVar12 = uVar14 >> 0xc & 0xf;
      uVar11 = uVar14 >> 8 & 0xf;
      uVar14 = uVar14 >> 0x11 & 0xff;
    }
    else {
      if (((uVar16 == 0x61) || (uVar16 == 99)) || (bVar8 = false, uVar16 == 100)) {
        bVar8 = true;
      }
      if (bVar8) {
        iVar9 = fn_82ABDD90(*(undefined4 *)(*(int *)(param_1 & 0xfffff000) + 0x94),uVar16,
                             uVar18 >> 0x13 & 7,uVar18 >> 0xe & 7);
        iVar9 = iVar9 + (param_1 - 0x18);
        uVar11 = *(uint *)(iVar9 + 0xc);
        uVar14 = (uint)*(byte *)(iVar9 + 0xe);
        uVar12 = uVar11 >> 4 & 0xf;
        uVar11 = uVar11 & 0xf;
      }
    }
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    for (; uVar17 != 0; uVar17 = uVar17 - (uVar17 & ~(uVar17 - 1))) {
      uVar19 = 0x1f - LZCOUNT(uVar17 & ~(uVar17 - 1));
      uVar5 = (uint)((uVar19 & 0xffffffff) << 1);
      uVar4 = 1 << ((uint)uVar19 & 0x3f);
      uVar7 = uVar20 >> (uVar5 & 0x3e) & 3;
      uVar23 = (uVar14 >> (uVar5 & 0x3e) & 3) << (uVar7 << 1) | uVar23 & ~(3 << (uVar7 << 1));
      if ((uVar4 & uVar12) != 0) {
        uVar21 = (ulonglong)(uint)(1 << uVar7);
      }
      if ((uVar4 & uVar11) != 0) {
        uVar22 = (ulonglong)(uint)(1 << uVar7);
      }
    }
    if (uVar16 == 0x60) {
      iVar9 = fn_82ABDD90(*(undefined4 *)(*(int *)(param_1 & 0xfffff000) + 0x94),0x60,
                           uVar18 >> 0x13 & 7,uVar18 >> 0xe & 7);
      iVar9 = iVar9 + (param_1 - 0x14);
      uVar18 = (uint)(((((ulonglong)uVar23 & 0xff) << 5 | uVar21 & 0xf) << 4 |
                      uVar22 & 0xffffffff0000000f) << 8) | *(uint *)(iVar9 + 0xc) & 0xfe0100ff;
    }
    else {
      if (((uVar16 == 0x61) || (uVar16 == 99)) || (bVar8 = false, uVar16 == 100)) {
        bVar8 = true;
      }
      uVar2 = *(undefined4 *)(*(int *)(param_1 & 0xfffff000) + 0x94);
      if (!bVar8) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(uVar2,0xdac,0xffffffff820dbec8);
      }
      iVar9 = fn_82ABDD90(uVar2,uVar16,uVar18 >> 0x13 & 7,uVar18 >> 0xe & 7);
      iVar9 = iVar9 + (param_1 - 0x18);
      *(char *)(iVar9 + 0xe) = (char)uVar23;
      uVar18 = (uint)uVar22 & 0xf | (uint)(uVar21 << 4) & 0xf0 | *(uint *)(iVar9 + 0xc) & 0xffffff00
      ;
    }
    *(uint *)(iVar9 + 0xc) = uVar18;
  }
  else if (uVar20 != 0xe4) {
    cVar10 = fn_82ACA638(param_1);
    if (cVar10 != '\0') {
      bVar1 = "SV_Depth"[(int)uVar6 + 0xb];
      uVar22 = ((0x8da691691448U >> uVar6) >> uVar6) >> uVar6;
      uVar21 = uVar22 & 7;
      uVar18 = 0;
      iVar9 = 0;
      if (uVar21 != 0) {
        uVar16 = 0;
        do {
          iVar13 = (((((bVar1 >> (param_3 >> 5 & 6) & 3) << 2 | bVar1 >> (param_3 >> 3 & 6) & 3) <<
                      2 | bVar1 >> (param_3 >> 1 & 6) & 3) << 2 | bVar1 >> ((param_3 & 3) << 1) & 3)
                    >> (uVar16 & 0x3f) & 3) << 1;
          uVar16 = uVar16 + 2;
          uVar11 = iVar9 << iVar13;
          iVar9 = iVar9 + 1;
          uVar18 = uVar18 & ~(3 << iVar13) | uVar11;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      puVar15 = (undefined4 *)(param_1 + 0x2c);
      bVar1 = (&lbl_820D7B2B)[uVar17];
      for (uVar17 = 0; uVar17 < (*(uint *)(param_1 + 8) >> 0x13 & 7); uVar17 = uVar17 + 1) {
        puVar3 = (uint *)*puVar15;
        if ((*puVar3 & 0xe000000) != 0) {
          uVar16 = *puVar3 >> 5 & 0xff;
          *puVar3 = (uint)((((((ulonglong)(uVar16 >> ((bVar1 >> (uVar18 >> 5 & 6) & 3) << 1)) & 3 |
                              (uVar22 & 7) << 0xe) << 2 |
                             (ulonglong)(uVar16 >> ((bVar1 >> (uVar18 >> 3 & 6) & 3) << 1)) &
                             0xffffffff00000003) << 2 |
                            (ulonglong)(uVar16 >> ((bVar1 >> (uVar18 >> 1 & 6) & 3) << 1)) &
                            0xffffffff00000003) << 2 |
                           (ulonglong)(uVar16 >> ((bVar1 >> ((uVar18 & 3) << 1) & 3) << 1)) &
                           0xffffffff00000003) << 5) | *puVar3 & 0xf1ffe01f;
        }
        puVar15 = puVar15 + 1;
      }
    }
  }
  for (puVar3 = *(uint **)(param_1 + 4); puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[2]) {
    uVar18 = *puVar3;
    if ((uVar18 & 0xe000000) != 0) {
      if (uVar20 != 0xe4) {
        *puVar3 = ((((uVar20 >> (uVar18 >> 10 & 6) & 3) << 2 | uVar20 >> (uVar18 >> 8 & 6) & 3) << 2
                   | uVar20 >> (uVar18 >> 6 & 6) & 3) << 2 | uVar20 >> (uVar18 >> 4 & 6) & 3) << 5 |
                  uVar18 & 0xffffe01f;
      }
      *puVar3 = (uint)((param_2 & 0xffffffff) << 0xd) & 0x1ffe000 | 0x40000000 |
                *puVar3 & 0xfe001fff;
    }
  }
  *(uint *)(param_1 + 8) = (uint)(uVar6 << 1) | *(uint *)(param_1 + 8) & 0xffffffe1;
  return;
}

