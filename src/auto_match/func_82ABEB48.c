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
extern unsigned int *auStack_80;
extern int fn_82ABDBE8();
extern int fn_82ABDD90();
extern int fn_82ABE2E0();
extern int fn_82ABE650();
extern int fn_82AD20C0();
extern int fn_82B841E8();
extern int fn_82B8AC10();
extern int fn_82B8AE98();


void fn_82ABEB48(int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  char cVar10;
  uint uVar9;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar16;
  uint uVar20;
  int *piVar22;
  longlong lVar21;
  uint uVar23;
  uint auStack_80 [32];
  
  if ((((*(uint *)(param_1 + 0x2c) & 0x800000) == 0) || (*(uint **)(param_1 + 0x38) == (uint *)0x0))
     || (bVar7 = true, (**(uint **)(param_1 + 0x38) & 0x400) == 0)) {
    bVar7 = false;
  }
  if ((*(uint *)(param_1 + 0x2c) & 0x1000000) != 0) {
    if ((*(uint **)(param_1 + 0x38) == (uint *)0x0) ||
       (bVar5 = true, (**(uint **)(param_1 + 0x38) & 0x800) == 0)) {
      bVar5 = false;
    }
    bVar6 = true;
    if (bVar5) goto LAB_82abebc8;
  }
  bVar6 = false;
LAB_82abebc8:
  if ((bVar7) || (bVar7 = false, bVar6)) {
    bVar7 = true;
  }
LAB_82abebe4:
  do {
    uVar20 = *(uint *)(param_1 + 4);
    while( true ) {
      uVar20 = -(uint)((uVar20 & 1) == 0) & uVar20;
      if (uVar20 == 0) {
        return;
      }
      piVar11 = *(int **)(uVar20 + 0x1c);
      if ((((uint)piVar11 & 1) == 0) && (piVar11 != (int *)0x0)) break;
LAB_82abf1a0:
      uVar20 = *(uint *)((uVar20 & 0xfffffffe) + 4);
    }
LAB_82abec18:
    uVar18 = piVar11[2];
    uVar23 = uVar18 >> 7 & 0x7f;
    if (uVar23 != 0x75) {
LAB_82abec60:
      if ((!bVar7) || ((uVar18 >> 5 & 1) == 0)) {
        cVar10 = fn_82ABE2E0(piVar11);
        if (cVar10 != '\0') goto LAB_82abf1b8;
        if (uVar23 == 0x68) {
          puVar17 = (uint *)piVar11[1];
          if (puVar17 == (uint *)0x0) goto LAB_82abf1ac;
          uVar23 = 0;
          for (; puVar17 != (uint *)0x0; puVar17 = (uint *)puVar17[2]) {
            if (puVar17[4] != 0) {
              uVar15 = *puVar17 >> 0x19 & 7;
              if (uVar15 != 0) {
                uVar9 = 0;
                uVar13 = 0;
                if (uVar15 != 0) {
                  uVar14 = 0;
                  do {
                    uVar13 = uVar13 + 1;
                    uVar4 = uVar14 & 0x3f;
                    uVar14 = uVar14 + 2;
                    uVar9 = 1 << ((*puVar17 >> 5 & 0xff) >> uVar4 & 3) | uVar9;
                  } while (uVar13 < uVar15);
                }
                uVar23 = uVar9 | uVar23;
              }
            }
          }
          if ((uVar23 != (uVar18 >> 1 & 0xf)) ||
             (((*(uint *)piVar11[0xb] >> 0xb ^ uVar18) & 0x1c000) != 0)) {
            piVar12 = (int *)((uint *)piVar11[0xb])[3];
            piVar22 = piVar11;
            while( true ) {
              piVar2 = piVar12;
              uVar18 = piVar2[2];
              uVar15 = uVar18 >> 7 & 0x7f;
              if (uVar15 != 3) break;
              puVar17 = (uint *)piVar2[0xb];
              cVar10 = fn_82ABDBE8(puVar17,piVar2[0xc]);
              if (cVar10 == '\0') break;
              for (iVar8 = piVar2[1]; iVar8 != 0; iVar8 = *(int *)(iVar8 + 8)) {
                if ((*(int **)(iVar8 + 0x10) != (int *)0x0) && (*(int **)(iVar8 + 0x10) != piVar22))
                {
                  bVar5 = true;
                  goto LAB_82abee3c;
                }
              }
              bVar5 = false;
LAB_82abee3c:
              if (bVar5) break;
              uVar9 = 0;
              uVar15 = 0;
              uVar13 = 0;
              for (uVar18 = uVar18 >> 1 & 0xf; uVar18 != 0;
                  uVar18 = uVar18 - (uVar18 & ~(uVar18 - 1))) {
                if ((1 << (0x1fU - (int)LZCOUNT(uVar18 & ~(uVar18 - 1)) & 0x3f) & uVar23) != 0) {
                  uVar15 = 1 << ((*puVar17 >> 5 & 0xff) >> (uVar13 & 0x3f) & 3) | uVar15;
                }
                uVar9 = uVar9 + 1;
                uVar13 = uVar13 + 2;
                if ((*puVar17 >> 0x19 & 7) <= uVar9) break;
              }
              uVar23 = uVar15;
              piVar12 = (int *)puVar17[3];
              piVar22 = piVar2;
            }
            if (uVar15 == 0x6e) {
              for (iVar8 = piVar2[1]; iVar8 != 0; iVar8 = *(int *)(iVar8 + 8)) {
                if ((*(int **)(iVar8 + 0x10) != (int *)0x0) && (*(int **)(iVar8 + 0x10) != piVar22))
                {
                  bVar5 = true;
                  goto LAB_82abef0c;
                }
              }
              bVar5 = false;
LAB_82abef0c:
              if ((!bVar5) && (uVar23 != (uVar18 >> 1 & 0xf))) {
                puVar17 = auStack_80;
                piVar12 = piVar2 + 0xb;
                auStack_80[0] = 0;
                auStack_80[1] = 0;
                auStack_80[2] = 0;
                auStack_80[3] = 0;
                for (uVar18 = 0; uVar18 < ((uint)piVar2[2] >> 0x13 & 7); uVar18 = uVar18 + 1) {
                  puVar1 = (uint *)*piVar12;
                  uVar15 = 1 << (*puVar1 >> 5 & 3);
                  if (((uVar15 & uVar23) == 0) &&
                     (uVar9 = puVar1[3], (*(uint *)(uVar9 + 8) & 0x3f80) != 0x3c00)) {
                    for (iVar8 = *(int *)(uVar9 + 4); iVar8 != 0; iVar8 = *(int *)(iVar8 + 8)) {
                      if ((*(int **)(iVar8 + 0x10) != (int *)0x0) &&
                         (*(int **)(iVar8 + 0x10) != piVar2)) {
                        bVar5 = true;
                        goto LAB_82abefa8;
                      }
                    }
                    bVar5 = false;
LAB_82abefa8:
                    if (!bVar5) {
                      *puVar17 = uVar9;
                      uVar9 = fn_82B841E8(param_1,uVar20,uVar20 + 0x10,0x78,0,1);
                      *(uint *)(uVar9 + 8) =
                           (uVar15 & 0xf) << 1 | 0x1000000 | *(uint *)(uVar9 + 8) & 0xffffffe1;
                      puVar19 = (uint *)(puVar1[3] + 4);
                      for (puVar3 = (uint *)*puVar19; puVar3 != puVar1; puVar3 = (uint *)puVar3[2])
                      {
                        puVar19 = puVar3 + 2;
                      }
                      *puVar19 = puVar1[2];
                      puVar1[2] = *(uint *)(uVar9 + 4);
                      *(uint **)(uVar9 + 4) = puVar1;
                      puVar1[3] = uVar9;
                      *puVar1 = *puVar1 & 0xffffffe0;
                    }
                  }
                  piVar12 = piVar12 + 1;
                  puVar17 = puVar17 + 1;
                }
                uVar18 = *(uint *)(param_1 + 0x28);
                bVar5 = false;
                puVar17 = auStack_80;
                *(uint *)(param_1 + 0x28) = uVar18 | 0x1000;
                lVar21 = 4;
                do {
                  uVar23 = *puVar17;
                  if (((uVar23 != 0) && ((*(uint *)(uVar23 + 8) & 0x3f80) != 0x3980)) &&
                     (cVar10 = fn_82ABE2E0(uVar23), cVar10 != '\0')) {
                    fn_82B8AE98(param_1,uVar23);
                    bVar5 = true;
                  }
                  lVar21 = lVar21 + -1;
                  puVar17 = puVar17 + 1;
                } while (lVar21 != 0);
                uVar23 = -(uint)((piVar2[2] & 0x3f80U) != 0x3980) & (uint)piVar2;
                fn_82ABE650(param_1,uVar18 >> 0xc & 1);
                if (uVar23 != 0) {
                  piVar12 = (int *)(uVar23 + 0x2c);
                  for (uVar18 = 0; uVar15 = *(uint *)(uVar23 + 8) >> 0x13 & 7, uVar18 < uVar15;
                      uVar18 = uVar18 + 1) {
                    uVar16 = 0;
                    piVar22 = (int *)(uVar23 + 0x2c);
                    for (uVar9 = 0; uVar9 < uVar15; uVar9 = uVar9 + 1) {
                      if (((uint *)*piVar22)[3] == *(uint *)(*piVar12 + 0xc)) {
                        uVar16 = (uint)(1 << (*(uint *)*piVar22 >> 5 & 3)) | uVar16;
                      }
                      piVar22 = piVar22 + 1;
                    }
                    iVar8 = *(int *)(*piVar12 + 0xc);
                    piVar12 = piVar12 + 1;
                    uVar16 = (((0x8da691691448U >> (uVar16 & 0x7f)) >> (uVar16 & 0x7f)) >>
                              (uVar16 & 0x7f) & 7) << 0xd | uVar16 & 0xffffffffffff1fff;
                    *(uint *)(iVar8 + 8) =
                         (uint)(uVar16 << 1) & 0x1c000 |
                         (uint)(uVar16 << 1) & 0x1e | *(uint *)(iVar8 + 8) & 0xfffe3fe1;
                  }
                }
                if (bVar5) goto LAB_82abebe4;
              }
            }
          }
        }
LAB_82abf184:
        piVar11 = *(int **)(((uint)piVar11 & 0xfffffffe) + 0x28);
        if ((((uint)piVar11 & 1) != 0) || (piVar11 == (int *)0x0)) goto LAB_82abf1a0;
        goto LAB_82abec18;
      }
      iVar8 = *piVar11;
LAB_82abec74:
      if (iVar8 == 0) goto LAB_82abf184;
      piVar12 = *(int **)(iVar8 + 0xc);
      if ((piVar12[2] & 0x3f80U) != 0x2f00) break;
      iVar8 = fn_82ABDD90(param_1,0x5e,0,0);
      if ((*(uint *)((int)piVar12 + iVar8 + -0xc) & 8) != 0) goto LAB_82abf184;
      puVar17 = (uint *)(piVar11 + 1);
      while (puVar1 = (uint *)*puVar17, puVar1 != (uint *)0x0) {
        uVar20 = puVar1[4];
        if ((uVar20 != 0) && ((*puVar1 & 0xe000000) != 0)) {
          fn_82AD20C0(uVar20,puVar1,param_1);
          cVar10 = fn_82ABE2E0(uVar20);
          if (cVar10 != '\0') {
            fn_82B8AC10(param_1,uVar20,0,1);
          }
        }
        if ((uint *)*puVar17 == puVar1) {
          puVar17 = puVar1 + 2;
        }
      }
      fn_82B8AE98(param_1,piVar11);
      puVar17 = (uint *)piVar12[1];
      do {
        piVar11 = piVar12;
        if (puVar17 == (uint *)0x0) goto LAB_82abf1b8;
        if (puVar17[4] != 0) {
          if (((*puVar17 & 0x40000000) != 0) || (bVar5 = false, (*puVar17 & 0xe000000) != 0)) {
            bVar5 = true;
          }
          if (bVar5) goto LAB_82abebe4;
        }
        puVar17 = (uint *)puVar17[2];
      } while( true );
    }
    iVar8 = fn_82ABDD90(param_1,0x75,0,0);
    puVar17 = (uint *)((int)piVar11 + iVar8 + -0x10);
    if (((*puVar17 & 7) != 7) || (puVar17[1] != 1)) goto LAB_82abec60;
LAB_82abf1ac:
    piVar11[2] = uVar18 & 0xfdffffff;
LAB_82abf1b8:
    fn_82B8AE98(param_1,piVar11);
  } while( true );
  iVar8 = *(int *)(iVar8 + 4);
  goto LAB_82abec74;
}

