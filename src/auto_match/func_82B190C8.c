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
extern int fn_82ACA920();
extern int fn_82AD1978();
extern int fn_82AD2020();
extern int fn_82B10120();
extern int fn_82B111F0();


void fn_82B190C8(int param_1,int param_2,ulonglong param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  
  piVar1 = *(int **)(param_2 + 4);
  do {
    if ((((uint)piVar1 & 1) != 0) || (piVar1 == (int *)0x0)) {
      return;
    }
    if ((param_4 == '\0') || (((uint)piVar1[2] >> 0x1a & 1) != 0)) {
      iVar2 = piVar1[8];
      puVar19 = (uint *)*piVar1;
LAB_82b19118:
      if (puVar19 != (uint *)0x0) {
        uVar11 = puVar19[3];
        if (((param_4 == '\0') || ((*(uint *)(uVar11 + 8) >> 0x1a & 1) != 0)) &&
           ((ulonglong)*(uint *)(*(int *)(uVar11 + 0x1c) + 0x2c) == (param_3 & 0xffffffff))) {
          uVar11 = *(uint *)(uVar11 + 0x20);
        }
        if (((*puVar19 & 0xe000000) != 0) || (*(int *)(uVar11 + 0x1c) == *(int *)(iVar2 + 0x1c))) {
          uVar7 = fn_82ACA920(param_1,puVar19);
          uVar8 = fn_82AD1978(iVar2,uVar7);
          uVar11 = *(uint *)(iVar2 + 8) >> 7 & 0x7f;
          if (uVar11 == 0x77) {
            iVar9 = fn_82ABDD90(param_1,0x77,0,0);
            uVar13 = 0;
            uVar11 = *(uint *)((int)piVar1 + iVar9 + -8);
            if (uVar11 != 0) {
              iVar10 = 0;
              do {
                if (*(uint **)(iVar10 + *(int *)((int)piVar1 + iVar9 + -4)) == puVar19) break;
                uVar13 = uVar13 + 1;
                iVar10 = iVar10 + 4;
              } while (uVar13 < uVar11);
            }
            *(undefined4 *)(uVar13 * 4 + *(int *)(iVar9 + iVar2 + -4)) = uVar8;
          }
          else {
            iVar9 = 0;
            piVar15 = piVar1 + 0xb;
            for (uVar13 = 0; uVar13 < ((uint)piVar1[2] >> 0x13 & 7); uVar13 = uVar13 + 1) {
              if ((uint *)*piVar15 == puVar19) {
                if ((uint *)*piVar15 != (uint *)0x0) {
                  *(undefined4 *)((iVar9 + 0xb) * 4 + iVar2) = uVar8;
                  goto LAB_82b1940c;
                }
                break;
              }
              iVar9 = iVar9 + 1;
              piVar15 = piVar15 + 1;
            }
            if (((uVar11 == 0x61) || (uVar11 == 99)) || (bVar6 = false, uVar11 == 100)) {
              bVar6 = true;
            }
            if (bVar6) {
              uVar11 = *(uint *)(iVar2 + 8);
              iVar9 = fn_82ABDD90(param_1,uVar11 >> 7 & 0x7f,uVar11 >> 0x13 & 7,uVar11 >> 0xe & 7);
              iVar9 = *(int *)(iVar9 + iVar2 + -4);
              if (iVar9 != 0) {
                uVar11 = piVar1[2];
                iVar10 = fn_82ABDD90(param_1,uVar11 >> 7 & 0x7f,uVar11 >> 0x13 & 7,
                                      uVar11 >> 0xe & 7);
                uVar13 = 0;
                iVar10 = *(int *)((int)piVar1 + iVar10 + -4);
                uVar11 = *(uint *)(iVar10 + 4);
                if (uVar11 != 0) {
                  puVar14 = (undefined4 *)(iVar10 + 8);
                  do {
                    if ((uint *)*puVar14 == puVar19) goto LAB_82b19374;
                    uVar13 = uVar13 + 1;
                    puVar14 = puVar14 + 1;
                  } while (uVar13 < uVar11);
                }
              }
            }
            else if (uVar11 == 0x60) {
              uVar11 = *(uint *)(iVar2 + 8);
              iVar9 = fn_82ABDD90(param_1,uVar11 >> 7 & 0x7f,uVar11 >> 0x13 & 7,uVar11 >> 0xe & 7);
              iVar9 = *(int *)(iVar9 + iVar2 + -4);
              if (iVar9 != 0) {
                uVar11 = piVar1[2];
                iVar10 = fn_82ABDD90(param_1,uVar11 >> 7 & 0x7f,uVar11 >> 0x13 & 7,
                                      uVar11 >> 0xe & 7);
                uVar13 = 0;
                iVar10 = *(int *)((int)piVar1 + iVar10 + -4);
                uVar11 = *(uint *)(iVar10 + 4);
                if (uVar11 != 0) {
                  puVar14 = (undefined4 *)(iVar10 + 8);
                  do {
                    if ((uint *)*puVar14 == puVar19) goto LAB_82b19374;
                    uVar13 = uVar13 + 1;
                    puVar14 = puVar14 + 1;
                  } while (uVar13 < uVar11);
                }
              }
            }
            else {
              if (((((uVar11 == 0x56) || (uVar11 == 0x57)) || (uVar11 == 0x59)) ||
                  ((uVar11 == 0x5a || (uVar11 == 0x54)))) || (bVar6 = false, uVar11 == 0x55)) {
                bVar6 = true;
              }
              if (bVar6) {
                uVar11 = *(uint *)(iVar2 + 8);
                iVar9 = fn_82ABDD90(param_1,uVar11 >> 7 & 0x7f,uVar11 >> 0x13 & 7,uVar11 >> 0xe & 7
                                    );
                iVar9 = iVar9 + iVar2 + -0x10;
                if (((*(uint *)(iVar9 + 8) & 3) != 0) &&
                   (puVar19 == (uint *)(*(uint *)(iVar9 + 4) & 0xfffffffc))) {
                  *(undefined4 *)(iVar9 + 4) = uVar8;
                  *(uint *)(iVar9 + 8) = *(uint *)(iVar9 + 8) & 0xfffffffc | 1;
                }
              }
            }
          }
        }
        goto LAB_82b1940c;
      }
      puVar17 = (uint *)(piVar1 + 1);
      puVar19 = puVar17;
      while (uVar11 = *puVar19, puVar18 = puVar17, uVar11 != 0) {
        iVar9 = *(int *)(uVar11 + 0x10);
        if (((iVar9 != 0) &&
            ((ulonglong)*(uint *)(*(int *)(iVar9 + 0x1c) + 0x2c) != (param_3 & 0xffffffff))) &&
           ((*(uint *)(iVar9 + 8) & 0x3f80) != 0x3800)) {
          fn_82B111F0(param_1,uVar11);
        }
        if (*puVar19 == uVar11) {
          puVar19 = (uint *)(uVar11 + 8);
        }
      }
      while (puVar19 = (uint *)*puVar18, puVar19 != (uint *)0x0) {
        uVar11 = puVar19[4];
        if (((uVar11 != 0) &&
            (uVar13 = *(uint *)(uVar11 + 0x1c),
            (ulonglong)*(uint *)(uVar13 + 0x2c) != (param_3 & 0xffffffff))) &&
           ((*(uint *)(uVar11 + 8) & 0x3f80) == 0x3800)) {
          uVar11 = *(uint *)(uVar13 + 0x34);
          uVar12 = uVar13;
          while (((uVar3 = uVar11, uVar3 != 0 &&
                  ((ulonglong)*(uint *)(uVar3 + 0x2c) != (param_3 & 0xffffffff))) &&
                 (uVar5 = (ulonglong)*(uint *)(piVar1[7] + 0x30) & 0x7ffff,
                 (*(uint *)(((int)(uVar5 >> 5) + 1) * 4 + *(int *)(uVar3 + 0x28)) &
                 1 << ((uint)uVar5 & 0x1f)) != 0))) {
            uVar11 = *(uint *)(uVar3 + 0x34);
            uVar12 = uVar3;
          }
          if ((uVar12 != (-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4))) &&
             (uVar12 != uVar13)) {
            uVar13 = *puVar19 & 0x19;
            uVar11 = fn_82B10120(param_1,uVar12,piVar1,*puVar19 >> 5 & 3,uVar13,
                                   *(uint *)(param_1 + 0x28) >> 0xe & 1);
            puVar16 = (uint *)(puVar19[3] + 4);
            for (puVar4 = (uint *)*puVar16; puVar4 != puVar19; puVar4 = (uint *)puVar4[2]) {
              puVar16 = puVar4 + 2;
            }
            *puVar16 = puVar19[2];
            puVar19[2] = *(uint *)(uVar11 + 4);
            *(uint **)(uVar11 + 4) = puVar19;
            puVar19[3] = uVar11;
            *puVar19 = *puVar19 & 0xffffe000 | 0x1c80 | (*puVar19 & 0xffffe01f) - uVar13 & 0x1f;
          }
        }
        if ((uint *)*puVar18 == puVar19) {
          puVar18 = puVar19 + 2;
        }
      }
      for (uVar11 = *puVar17; uVar11 != 0; uVar11 = *(uint *)(uVar11 + 8)) {
        iVar9 = *(int *)(uVar11 + 0x10);
        if (iVar9 != 0) {
          uVar13 = (uint)(param_3 != *(uint *)(*(int *)(iVar9 + 0x1c) + 0x2c));
          if (((uVar13 != 0) && (param_4 != '\0')) &&
             (uVar12 = *(uint *)(*(int *)(iVar9 + 0x1c) + 0x30) >> 0x13, uVar13 = uVar12 & 1,
             (uVar12 & 1) != 0)) {
            iVar10 = fn_82AD2020(param_1,piVar1[7]);
            if (iVar10 == 0) {
LAB_82b196e4:
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            uVar13 = *(uint *)(iVar10 + 8) >> 7 & 0x7f;
            if ((uVar13 == 0x56) || (bVar6 = false, uVar13 == 0x57)) {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_82b196e4;
            uVar13 = *(uint *)(iVar10 + 8) >> 0x1a & 1;
          }
          if (uVar13 != 0) {
            uVar7 = fn_82ACA920(param_1,uVar11,iVar2);
            fn_82AD1978(iVar9,uVar7);
          }
        }
      }
      if ((*(uint *)(iVar2 + 8) & 0x3f80) == 0x2a80) {
        iVar10 = fn_82ABDD90(param_1,0x55,0,0);
        iVar9 = *(int *)(iVar10 + -0x14 + (int)piVar1);
        if (((param_4 == '\0') || ((*(uint *)(iVar9 + 8) >> 0x1a & 1) != 0)) &&
           ((ulonglong)*(uint *)(*(int *)(iVar9 + 0x1c) + 0x2c) == (param_3 & 0xffffffff))) {
          *(undefined4 *)(iVar10 + -0x14 + iVar2) = *(undefined4 *)(iVar9 + 0x20);
        }
      }
    }
    piVar1 = *(int **)(((uint)piVar1 & 0xfffffffe) + 0x28);
  } while( true );
LAB_82b19374:
  *(undefined4 *)((uVar13 + 2) * 4 + iVar9) = uVar8;
LAB_82b1940c:
  puVar19 = (uint *)puVar19[1];
  goto LAB_82b19118;
}

