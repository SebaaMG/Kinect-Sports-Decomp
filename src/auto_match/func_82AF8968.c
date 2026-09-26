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
extern unsigned int *auStack_a8;
extern int fn_82B80EE0();


undefined8 fn_82AF8968(undefined8 param_1,int param_2,int param_3,ulonglong *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int *piVar9;
  ulonglong uVar8;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar18;
  ulonglong uVar17;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  ulonglong *puStack0000002c;
  ulonglong auStack_a8 [21];
  
  uVar18 = 0;
  uVar10 = *(uint *)(param_3 + 8) >> 0xe & 7;
  uVar7 = 0;
  uVar12 = *(uint *)(param_2 + 8) >> 0xe;
  uVar11 = uVar12 & 7;
  piVar9 = (int *)(param_3 + 0x2c);
  do {
    if ((*(uint *)(param_2 + 8) >> 0x13 & 7) <= uVar7) {
      puVar1 = *(uint **)(param_2 + 0x2c);
      puVar2 = *(uint **)(param_3 + 0x2c);
      if (((*puVar1 >> 0x19 & 7) == uVar11) && ((*puVar2 >> 0x19 & 7) == uVar10)) {
        uVar7 = 0;
        uVar14 = 0;
        for (puVar3 = *(uint **)(param_2 + 4); puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[2]) {
          piVar9 = (int *)puVar3[4];
          if (((piVar9 != (int *)0x0) && ((*puVar3 & 0xe000000) != 0)) &&
             ((piVar9[2] & 0x3f80U) == 0x3800)) {
            if ((*piVar9 == 0) || (bVar23 = true, *(int *)(*piVar9 + 4) == 0)) {
              bVar23 = false;
            }
            if ((bVar23) ||
               (((*(uint *)(piVar9[7] + 0x4c) ^ *(uint *)(*(int *)(param_2 + 0x1c) + 0x4c)) &
                0x7ffff) != 0)) {
              uVar7 = 1 << (*puVar3 >> 5 & 3) | uVar7;
            }
          }
        }
        for (puVar3 = *(uint **)(param_3 + 4); puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[2]) {
          piVar9 = (int *)puVar3[4];
          if (((piVar9 != (int *)0x0) && ((*puVar3 & 0xe000000) != 0)) &&
             ((piVar9[2] & 0x3f80U) == 0x3800)) {
            if ((*piVar9 == 0) || (bVar23 = true, *(int *)(*piVar9 + 4) == 0)) {
              bVar23 = false;
            }
            if ((bVar23) ||
               (((*(uint *)(piVar9[7] + 0x4c) ^ *(uint *)(*(int *)(param_3 + 0x1c) + 0x4c)) &
                0x7ffff) != 0)) {
              uVar14 = 1 << (*puVar3 >> 5 & 3) | uVar14;
            }
          }
        }
        uVar13 = 0;
        uVar16 = 0;
        auStack_a8[0] = 0;
        puStack0000002c = param_4;
        if ((uVar12 & 7) != 0) {
          iVar15 = 0;
          do {
            if ((1 << (uVar16 & 0x3f) & uVar7) == 0) {
              uVar22 = 0;
              uVar12 = (*puVar1 >> 5 & 0xff) >> (uVar18 & 0x3f) & 3;
              if (param_2 == param_3) {
                uVar22 = uVar16 + 1;
              }
              if (uVar22 < uVar10) {
                uVar21 = ((ulonglong)uVar13 & 0x3fffffff) << 2;
                uVar20 = uVar22 << 1;
                do {
                  if ((1 << (uVar22 & 0x3f) & uVar14) == 0) {
                    uVar5 = (*puVar2 >> 5 & 0xff) >> (uVar20 & 0x3f) & 3;
                    bVar23 = uVar5 == uVar12;
                    if ((*(uint *)(puVar1[3] + 8) & 0x3f80) == 16000) {
                      dVar24 = (double)fn_82B80EE0(puVar1[3],uVar12,*puVar1 & 0x1f);
                      dVar25 = (double)fn_82B80EE0(puVar2[3],uVar5,*puVar2 & 0x1f);
                      bVar23 = dVar24 == dVar25;
                      param_4 = puStack0000002c;
                    }
                    if (bVar23) {
                      uVar5 = (uint)((uVar21 & 0xffffffff) >> 3) & 0x1ffffff8;
                      uVar19 = uVar21 & 0x3f;
                      uVar13 = uVar13 + 1;
                      uVar21 = uVar21 + 4;
                      *(ulonglong *)((int)auStack_a8 + uVar5) =
                           (ulonglong)(iVar15 + uVar22) << uVar19 |
                           *(ulonglong *)((int)auStack_a8 + uVar5);
                    }
                  }
                  uVar22 = uVar22 + 1;
                  uVar20 = uVar20 + 2;
                } while (uVar22 < uVar10);
              }
            }
            uVar16 = uVar16 + 1;
            uVar18 = uVar18 + 2;
            iVar15 = iVar15 + 4;
          } while (uVar16 < uVar11);
        }
        uVar12 = 1;
        if (0x80000 < (*(uint *)(param_2 + 8) & 0x380000)) {
          piVar9 = (int *)(param_3 + 0x30);
          do {
            puVar2 = *(uint **)((int)piVar9 + (param_2 - param_3));
            uVar7 = 0;
            puVar1 = (uint *)*piVar9;
            if (uVar13 != 0) {
              uVar19 = 0;
              uVar21 = ((ulonglong)uVar13 & 0x3fffffff) * 4 - 4;
              do {
                uVar10 = *puVar2;
                uVar6 = uVar19 & 0x3f;
                uVar11 = puVar2[3];
                uVar18 = (uint)((uVar19 & 0xffffffff) >> 3) & 0x1ffffff8;
                uVar17 = (2L << (uVar19 + 3 & 0x3f)) - 1U & -1L << uVar6;
                uVar4 = (*(ulonglong *)((int)auStack_a8 + uVar18) & uVar17) >> uVar6 & 0xffffffff;
                uVar14 = (uVar10 >> 5 & 0xff) >> ((uint)(uVar4 >> 1) & 0x3e) & 3;
                uVar16 = (*puVar1 >> 5 & 0xff) >> ((uint)(uVar4 << 1) & 6) & 3;
                bVar23 = uVar16 == uVar14;
                if ((*(uint *)(uVar11 + 8) & 0x3f80) == 16000) {
                  dVar24 = (double)fn_82B80EE0(uVar11,uVar14,uVar10 & 0x1f);
                  dVar25 = (double)fn_82B80EE0(puVar1[3],uVar16,*puVar1 & 0x1f);
                  bVar23 = dVar24 == dVar25;
                }
                if (bVar23) {
                  uVar7 = uVar7 + 1;
                  uVar19 = uVar19 + 4;
                }
                else {
                  uVar8 = uVar21 + 3;
                  uVar10 = (uint)uVar21;
                  uVar4 = uVar21 & 0x3f;
                  uVar13 = uVar13 - 1;
                  uVar21 = uVar21 - 4;
                  *(ulonglong *)((int)auStack_a8 + uVar18) =
                       *(ulonglong *)((int)auStack_a8 + uVar18) & ~uVar17 |
                       (((2L << (uVar8 & 0x3f)) - 1U &
                         *(ulonglong *)((int)auStack_a8 + (uVar10 >> 3 & 0x1ffffff8)) & -1L << uVar4
                        ) >> uVar4 & 0xffffffff) << uVar6;
                }
                param_4 = puStack0000002c;
              } while (uVar7 < uVar13);
            }
            uVar12 = uVar12 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar12 < (*(uint *)(param_2 + 8) >> 0x13 & 7));
        }
        if (uVar13 != 0) {
          *(uint *)(param_4 + 1) = uVar13 & 0x1f | *(uint *)(param_4 + 1) & 0xffffffe0;
          *param_4 = auStack_a8[0];
          return 1;
        }
      }
      return 0;
    }
    iVar15 = *(int *)(*(int *)((param_2 - param_3) + (int)piVar9) + 0xc);
    if (iVar15 != *(int *)(*piVar9 + 0xc)) {
      if ((*(uint *)(iVar15 + 8) & 0x3f80) != 16000) {
        return 0;
      }
      if ((*(uint *)(*(int *)(*piVar9 + 0xc) + 8) & 0x3f80) != 16000) {
        return 0;
      }
    }
    uVar7 = uVar7 + 1;
    piVar9 = piVar9 + 1;
  } while( true );
}

