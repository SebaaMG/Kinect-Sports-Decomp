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
extern int fn_82AD1978();
extern int fn_82ADCF98();
extern int fn_82B25248();
extern int fn_82B82378();
extern int fn_82B84350();


uint fn_82B255B0(int param_1,uint param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  
  puVar12 = (uint *)(param_2 + 4);
  uVar13 = 0;
  for (puVar10 = *(uint **)(param_2 + 4); puVar10 != (uint *)0x0; puVar10 = (uint *)puVar10[2]) {
    if (puVar10[4] != 0) {
      uVar5 = 0;
      uVar8 = 0;
      uVar15 = *puVar10 >> 0x19 & 7;
      if (uVar15 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar8 + 1;
          uVar18 = uVar9 & 0x3f;
          uVar9 = uVar9 + 2;
          uVar5 = 1 << ((*puVar10 >> 5 & 0xff) >> uVar18 & 3) | uVar5;
        } while (uVar8 < uVar15);
      }
      uVar13 = uVar5 | uVar13;
    }
  }
  if ((*(uint *)(param_1 + 0x28) & 0x4000) != 0) {
    uVar5 = 1;
    uVar15 = *(uint *)(param_2 + 8) >> 0x13;
    uVar19 = (ulonglong)uVar15 & 7;
    if ((uVar15 & 7) != 0) {
      uVar22 = uVar19;
      piVar14 = (int *)(param_2 + 0x2c);
      do {
        if ((uVar5 & uVar13) == 0) {
          uVar8 = 0;
          uVar15 = ((uint *)*piVar14)[3];
          if ((*(uint *)(uVar15 + 8) & 0x3f80) == 0x3880) {
            uVar8 = *(uint *)(uVar15 + 8) >> 1 & 0xf;
          }
          else {
            for (puVar10 = *(uint **)(uVar15 + 4); puVar10 != (uint *)0x0;
                puVar10 = (uint *)puVar10[2]) {
              if ((puVar10[4] != 0) && (puVar10[4] != param_2)) {
                uVar18 = 0;
                uVar20 = 0;
                uVar9 = *puVar10 >> 0x19 & 7;
                if (uVar9 != 0) {
                  uVar21 = 0;
                  do {
                    uVar20 = uVar20 + 1;
                    uVar3 = uVar21 & 0x3f;
                    uVar21 = uVar21 + 2;
                    uVar18 = 1 << ((*puVar10 >> 5 & 0xff) >> uVar3 & 3) | uVar18;
                  } while (uVar20 < uVar9);
                }
                uVar8 = uVar18 | uVar8;
              }
            }
          }
          if ((1 << (*(uint *)*piVar14 >> 5 & 3) & uVar8) != 0) {
            uVar8 = 0;
            piVar7 = (int *)(param_2 + 0x2c);
            for (uVar9 = 0; uVar9 < uVar19; uVar9 = uVar9 + 1) {
              if ((((uint *)*piVar7)[3] == uVar15) && ((1 << (uVar9 & 0x3f) & uVar13) != 0)) {
                uVar8 = 1 << (*(uint *)*piVar7 >> 5 & 3) | uVar8;
              }
              piVar7 = piVar7 + 1;
            }
            if (uVar8 != 0) {
              uVar13 = uVar5 | uVar13;
            }
          }
        }
        piVar14 = piVar14 + 1;
        uVar5 = uVar5 << 1;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (uVar13 == (1 << (*(uint *)(param_2 + 8) >> 0x13 & 7)) - 1U) {
    uVar5 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 0x1c);
    uVar4 = fn_82ADCF98(uVar13);
    uVar5 = fn_82B84350(param_1,uVar6,0,uVar4);
    uVar15 = uVar5 & 0xfffffffe;
    puVar10 = (uint *)((param_2 & 0xfffffffe) + 0x24);
    *(uint *)(uVar15 + 0x24) = *puVar10;
    *(uint *)(*puVar10 & 0xfffffffe) = uVar15;
    *(uint *)(uVar15 + 0x28) = param_2 & 0xfffffffe;
    *puVar10 = uVar15 + 0x28;
    if ((param_3 & 0xffffffff) != 0) {
      fn_82B25248(param_1,uVar5,param_3);
    }
    piVar14 = (int *)0x0;
    if (((~(ulonglong)*(uint *)(param_1 + 0x28) & 0xffffffff) >> 0xe & 1) != 0) {
      for (piVar14 = *(int **)(param_2 + 0x10); (piVar14 != (int *)0x0 && (*piVar14 != 1));
          piVar14 = (int *)piVar14[1]) {
      }
    }
    uVar15 = 0;
    lVar16 = 0;
    uVar8 = 0;
    uVar9 = 1;
    if ((*(uint *)(param_2 + 8) & 0x380000) != 0) {
      uVar18 = 0;
      uVar21 = 0;
      uVar20 = 0;
      piVar7 = piVar14;
      do {
        if ((uVar9 & uVar13) != 0) {
          uVar6 = fn_82AD1978(uVar5,*(undefined4 *)(uVar20 + param_2 + 0x2c));
          *(undefined4 *)(uVar5 + 0x2c + uVar21) = uVar6;
          uVar3 = 0xf << (uVar21 & 0x3f);
          uVar2 = (*(ushort *)(param_2 + 0xe) >> (uVar20 & 0x3f) & 0xf) << (uVar21 & 0x3f);
          if ((uVar3 & *(uint *)(uVar5 + 0xc) & 0xffff) != uVar2) {
            *(ushort *)(uVar5 + 0xe) =
                 (ushort)*(uint *)(uVar5 + 0xc) & ~(ushort)uVar3 | (ushort)uVar2;
          }
          if (piVar14 != (int *)0x0) {
            fn_82B82378(*(undefined8 *)(piVar7 + 2),*(undefined8 *)(piVar7 + 10),uVar5,lVar16)
            ;
          }
          iVar17 = (int)lVar16;
          lVar16 = lVar16 + 1;
          uVar15 = uVar15 & ~(3 << (uVar18 & 0x3f)) | iVar17 << (uVar18 & 0x3f);
          uVar21 = uVar21 + 4;
        }
        uVar8 = uVar8 + 1;
        uVar20 = uVar20 + 4;
        uVar18 = uVar18 + 2;
        uVar9 = uVar9 << 1;
        piVar7 = piVar7 + 2;
      } while (uVar8 < (*(uint *)(param_2 + 8) >> 0x13 & 7));
    }
    while (puVar10 = (uint *)*puVar12, puVar10 != (uint *)0x0) {
      if (puVar10[4] != 0) {
        uVar8 = *puVar10;
        puVar11 = (uint *)(puVar10[3] + 4);
        *puVar10 = ((((uVar15 >> (uVar8 >> 10 & 6) & 3) << 2 | uVar15 >> (uVar8 >> 8 & 6) & 3) << 2
                    | uVar15 >> (uVar8 >> 6 & 6) & 3) << 2 | uVar15 >> (uVar8 >> 4 & 6) & 3) << 5 |
                   uVar8 & 0xffffe01f;
        for (puVar1 = (uint *)*puVar11; puVar1 != puVar10; puVar1 = (uint *)puVar1[2]) {
          puVar11 = puVar1 + 2;
        }
        *puVar11 = puVar10[2];
        puVar10[2] = *(uint *)(uVar5 + 4);
        *(uint **)(uVar5 + 4) = puVar10;
        puVar10[3] = uVar5;
        if ((param_3 & 0xffffffff) != 0) {
          fn_82B25248(param_1,puVar10[4],param_3);
        }
      }
      if ((uint *)*puVar12 == puVar10) {
        puVar12 = puVar10 + 2;
      }
    }
    if ((param_3 & 0xffffffff) != 0) {
      uVar8 = 0;
      uVar15 = 1;
      if ((*(uint *)(param_2 + 8) & 0x380000) != 0) {
        piVar14 = (int *)(param_2 + 0x2c);
        do {
          if ((uVar15 & uVar13) == 0) {
            fn_82B25248(param_1,*(undefined4 *)(*piVar14 + 0xc),param_3);
          }
          uVar8 = uVar8 + 1;
          piVar14 = piVar14 + 1;
          uVar15 = uVar15 << 1;
        } while (uVar8 < (*(uint *)(param_2 + 8) >> 0x13 & 7));
      }
    }
    if ((*(uint *)(param_1 + 0x28) & 0x4000) != 0) {
      *(uint *)(uVar5 + 8) =
           ((1 << (*(uint *)(uVar5 + 8) >> 0xe & 7)) + -1) * 2 & 0x1eU | 0x1000000 |
           *(uint *)(uVar5 + 8) & 0xffffffe1;
    }
  }
  return uVar5;
}

