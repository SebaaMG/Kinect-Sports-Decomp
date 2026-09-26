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
extern unsigned int *auStack_1f0;
extern int fn_82F68CC0();
extern unsigned int lbl_8218D7E0;
extern unsigned int lbl_821CC3B8;
extern unsigned int uStack_1f1;
extern unsigned int uStack_200;


void fn_82642048(int param_1,int param_2,int param_3,byte *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  ushort *puVar11;
  uint uVar12;
  longlong lVar10;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  ushort uStack_200;
  undefined1 uStack_1f1;
  uint auStack_1f0 [124];
  
  iVar19 = *(int *)((param_5 + 0x70) * 8 + param_1) + param_1;
  uVar1 = *(uint *)(iVar19 + 900);
  uVar21 = (ulonglong)uVar1;
  if (uVar21 != 0) {
    uVar13 = *(uint *)(param_3 + 0x18);
    puVar24 = (uint *)((*(int *)(iVar19 + 0x380) + 9) * 4 + iVar19 + 0x368);
    if (uVar21 != 0) {
      iVar19 = (param_5 * 0x1a0 + param_1 + 0x44) - (int)auStack_1f0;
      uVar14 = (ulonglong)uStack_200;
      puVar25 = auStack_1f0;
      puVar20 = puVar24;
      do {
        uVar17 = 0;
        uVar12 = *(uint *)((int)puVar25 + iVar19 + 4);
        uVar23 = *(uint *)((int)puVar25 + iVar19 + 8);
        if (uVar13 == 0) {
LAB_82642120:
          uVar17 = *(uint *)(iVar19 + (int)puVar25) & 0xc00fffff | 0x5f00000;
          uVar15 = uVar14 & 0xf | 0x9250;
          uVar18 = uVar12 & 0xbfc6cfff | 0x60000;
          uVar12 = uVar23 & 0x80000000 | (uint)*param_4;
        }
        else {
          puVar11 = (ushort *)(param_3 + 0x34);
          do {
            if (((uint)*(byte *)((int)puVar11 + 9) == (*puVar20 >> 0xc & 0xf)) &&
               ((uint)*(byte *)(puVar11 + 5) == (*puVar20 >> 0x10 & 0xf))) break;
            uVar17 = uVar17 + 1;
            puVar11 = puVar11 + 6;
          } while (uVar17 < uVar13);
          if (uVar13 <= uVar17) goto LAB_82642120;
          uVar18 = *(uint *)(puVar11 + 2);
          uVar4 = (ulonglong)uVar18;
          uVar5 = ((ulonglong)(uVar18 >> 10) & 0x38 | (ulonglong)(uVar18 >> 0x10) & 7) << 3 |
                  (ulonglong)(uVar18 >> 0x13) & 7;
          uVar15 = (uVar5 << 1 | uVar4 & 0x1c00) << 3 | uVar14 & 0xf;
          if ((uVar18 & 0xc0) == 0x40) {
            if ((uVar4 & 0x1c00) << 3 < 0x6001) {
              uVar15 = (uVar4 & 0x1c00) << 3 ^ 0x2000 | uVar5 << 4 | uVar14 & 0xf;
            }
            if ((uVar15 & 0x1c00) < 0xc01) {
              uVar15 = uVar15 & 0x1c00 ^ 0x400 | uVar15 & 0xe3ff;
            }
            if ((uVar15 & 0x380) < 0x181) {
              uVar15 = uVar15 & 0x380 ^ 0x80 | uVar15 & 0xfc7f;
            }
            if ((uVar15 & 0x70) < 0x31) {
              uVar15 = uVar15 & 0x70 ^ 0x10 | uVar15 & 0xff8f;
            }
          }
          uVar17 = (0x5f - (uint)*puVar11) * 0x1560056;
          uVar17 = ((uVar17 & 0x1f00) << 0xb | uVar17 & 0x3000000) << 1 |
                   *(uint *)(iVar19 + (int)puVar25) & 0xc00fffff;
          uVar18 = ((uVar18 & 0x3f) << 0xc | uVar18 & 0x300) << 4 | uVar12 & 0xbfc0cfff;
          uVar12 = (puVar11[1] & 0x1fffffc) << 6 | (uint)param_4[*puVar11] | uVar23 & 0x80000000;
        }
        *puVar25 = uVar17;
        puVar25[2] = uVar12;
        uVar21 = uVar21 - 1;
        uVar14 = uVar15 | 0xe;
        puVar20 = puVar20 + 1;
        uVar15 = uVar14 & *(ushort *)(&lbl_8218D7E0 + (uVar18 & 7) * 2);
        uVar4 = uVar14 & *(ushort *)(&lbl_8218D7E0 + ((uVar18 & 0xfffffff8) >> 2 & 0xe));
        uVar5 = uVar14 & *(ushort *)(&lbl_8218D7E0 + ((uVar18 & 0xffffffc0) >> 5 & 0xe));
        uVar6 = uVar14 & *(ushort *)(&lbl_8218D7E0 + ((uVar18 & 0xfffffe00) >> 8 & 0xe));
        puVar25[1] = (uint)(((((uVar15 >> 3 | uVar15) >> 3 | uVar15) >> 3 | uVar15) >> 3 | uVar15)
                           >> 1) & 7 | uVar18 & 0xfffff000 |
                     ((uint)((((uVar4 >> 3 | uVar4) >> 3 | uVar4) >> 3 | uVar4) >> 1) |
                     (uint)(uVar4 << 2)) & 0x38 |
                     ((uint)(((uVar5 >> 3 | uVar5) >> 3 | uVar5) >> 1) |
                     (uint)((uVar5 << 3 | uVar5) << 2)) & 0x1c0 |
                     ((uint)(((uVar6 << 3 | uVar6) << 3 | uVar6) << 2) |
                     ((uint)(uVar6 >> 3) | (uint)uVar6) >> 1) & 0xe00;
        puVar25 = puVar25 + 3;
      } while (uVar21 != 0);
    }
    puVar20 = puVar24 + uVar1;
    puVar25 = puVar24;
    if (puVar24 < puVar20) {
      while (puVar25 < puVar20) {
        do {
          if ((*puVar25 & 0x300000) != 0) break;
          puVar25 = puVar25 + 1;
        } while (puVar25 < puVar20);
        if ((puVar20 <= puVar25) || (puVar8 = puVar25 + 1, puVar20 <= puVar8)) break;
        do {
          if ((*puVar8 & 0x300000) != 0) break;
          puVar8 = puVar8 + 1;
        } while (puVar8 < puVar20);
        if (puVar20 <= puVar8) break;
        uVar1 = (int)puVar8 - (int)puVar25 >> 2;
        iVar19 = (int)puVar25 - (int)puVar24 >> 2;
        puVar9 = auStack_1f0 + iVar19 * 3;
        puVar25 = puVar8 + 1;
        uVar23 = 0xffffffff;
        uVar13 = uVar1 + 1;
        uVar12 = uVar1;
        if ((*puVar8 & 0x300000) == 0x300000) {
          uVar12 = uVar1 - 1;
          uVar23 = auStack_1f0[((int)puVar8 - (int)puVar24 >> 2) * 3] >> 0x12 & 0x7c |
                   auStack_1f0[((int)puVar8 - (int)puVar24 >> 2) * 3] >> 0x19 & 3;
          uVar13 = uVar1;
        }
        if (uVar12 != 0) {
          uVar17 = 1;
          puVar8 = puVar9;
          do {
            if (uVar17 < uVar13) {
              iVar22 = uVar13 - uVar17;
              puVar7 = puVar8;
              do {
                puVar16 = puVar7 + 3;
                uVar14 = (ulonglong)(*puVar8 >> 0x12) & 0x7c | (ulonglong)(*puVar8 >> 0x19) & 3;
                uVar21 = (ulonglong)(*puVar16 >> 0x12) & 0x7c | (ulonglong)(*puVar16 >> 0x19) & 3;
                lVar10 = uVar21 - uVar14;
                if (lVar10 == 0) {
                  lVar10 = (longlong)((int)(puVar8[2] << 1 | puVar8[2] >> 0x1f) >> 9) -
                           (longlong)((int)(puVar7[5] << 1 | puVar7[5] >> 0x1f) >> 9);
                  if (lVar10 == 0) {
                    lVar10 = (ulonglong)(byte)(&lbl_821CC3B8)[*(ushort *)(puVar8 + 1) & 0x3f] -
                             (ulonglong)(byte)(&lbl_821CC3B8)[*(ushort *)(puVar7 + 4) & 0x3f];
                  }
LAB_82642504:
                  if (0 < (int)lVar10) goto LAB_8264250c;
                }
                else {
                  if (uVar23 != (uint)uVar14) {
                    if (uVar23 == (uint)uVar21) {
                      lVar10 = -1;
                    }
                    goto LAB_82642504;
                  }
LAB_8264250c:
                  uVar18 = *puVar8;
                  uVar2 = puVar8[1];
                  uVar3 = puVar8[2];
                  *puVar8 = *puVar16;
                  puVar8[1] = puVar7[4];
                  puVar8[2] = puVar7[5];
                  *puVar16 = uVar18;
                  puVar7[4] = uVar2;
                  puVar7[5] = uVar3;
                }
                iVar22 = iVar22 + -1;
                puVar7 = puVar16;
              } while (iVar22 != 0);
            }
            uVar12 = uVar12 - 1;
            puVar8 = puVar8 + 3;
            uVar17 = uVar17 + 1;
          } while (uVar12 != 0);
        }
        puVar8 = auStack_1f0 + iVar19 * 3 + 3;
        if (puVar8 < puVar9 + (uVar1 + 1) * 3) {
          iVar19 = (uint)((int)(puVar9 + (uVar1 + 1) * 3) + (-1 - (int)puVar8)) / 0xc + 1;
          do {
            uVar1 = *puVar9;
            puVar7 = puVar8;
            if ((uVar1 >> 7 & 0xc0000 | uVar1 & 0x1f00000) ==
                (*puVar8 >> 7 & 0xc0000 | *puVar8 & 0x1f00000)) {
              uVar13 = (int)(puVar9[2] << 1 | puVar9[2] >> 0x1f) >> 9;
              uVar12 = (int)(puVar8[2] << 1 | puVar8[2] >> 0x1f) >> 9;
              if ((uVar13 <= uVar12) &&
                 (uVar12 = ((byte)(&lbl_821CC3B8)[*(ushort *)(puVar8 + 1) & 0x3f] - uVar13) + uVar12
                 , uVar12 < 9)) {
                uVar13 = uVar1 >> 0x1b & 7;
                uVar12 = uVar12 - 1;
                if (uVar12 < uVar13) {
                  uVar12 = uVar13;
                }
                *puVar9 = (uVar12 & 7) << 0x1b | uVar1 & 0xc7ffffff;
                puVar8[1] = puVar8[1] | 0x40000000;
                puVar7 = puVar9;
              }
            }
            puVar9 = puVar7;
            puVar8 = puVar8 + 3;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
      }
    }
    puVar25 = auStack_1f0;
    for (; puVar24 < puVar20; puVar24 = puVar24 + 1) {
      puVar8 = (uint *)((*puVar24 & 0xfff) * 0xc + param_2);
      if (puVar8 != puVar25) {
        fn_82F68CC0(puVar8,puVar25,0xc);
      }
      puVar25 = puVar25 + 3;
    }
  }
  return;
}

