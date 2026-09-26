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
extern int fn_82963370();
extern int fn_8296CF68();


undefined8 fn_82971180(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar12;
  uint uVar11;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  
  if ((*(uint *)(param_1 + 0x6c) & 0x40000000) == 0) {
    bVar6 = false;
    fn_8296CF68(param_1);
    iVar18 = *(int *)(param_1 + 0xc);
    if (iVar18 != 0) {
      iVar17 = iVar18 << 2;
      do {
        iVar17 = iVar17 + -4;
        iVar18 = iVar18 + -1;
        puVar1 = *(uint **)(iVar17 + *(int *)(param_1 + 0x18));
        uVar8 = *puVar1;
        if (((uVar8 & 0xfff00000) == 0x10000000) || ((uVar8 & 0xfff00000) == 0x20700000)) {
          uVar9 = 0;
          if (puVar1[3] != 0) {
            iVar15 = 0;
            do {
              if ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar15 + puVar1[4]) * 4 +
                                                       *(int *)(param_1 + 0x14)) + 4) * 4 +
                                     *(int *)(param_1 + 0x10)) + 4) & 0x20) == 0) break;
              uVar9 = uVar9 + 1;
              iVar15 = iVar15 + 4;
            } while (uVar9 < puVar1[3]);
          }
          if (puVar1[3] <= uVar9) {
            uVar9 = puVar1[1];
            uVar10 = 0;
            if (uVar9 != 0) {
              iVar15 = 0;
              do {
                if ((*(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar15 + puVar1[2]) * 4 +
                                                         *(int *)(param_1 + 0x14)) + 4) * 4 +
                                       *(int *)(param_1 + 0x10)) + 4) & 2) == 0) break;
                uVar10 = uVar10 + 1;
                iVar15 = iVar15 + 4;
              } while (uVar10 < puVar1[1]);
            }
            if (uVar9 <= uVar10) {
              uVar5 = (ulonglong)uVar8;
              uVar24 = uVar5 & 0xfffff;
              uVar20 = 0;
              uVar19 = uVar9 / uVar24;
              trapWord(6,uVar24,0);
              if ((int)uVar19 != 0) {
                lVar21 = 0;
                do {
                  uVar22 = 0;
                  if ((uVar8 & 0xfffff) != 0) {
                    iVar15 = 0;
                    lVar23 = lVar21;
                    do {
                      puVar2 = *(uint **)(*(int *)(*(int *)(*(int *)((int)lVar23 + puVar1[2]) * 4 +
                                                           *(int *)(param_1 + 0x14)) + 0x48) * 4 +
                                         *(int *)(param_1 + 0x18));
                      iVar7 = fn_82963370(puVar2);
                      uVar9 = *puVar2 & 0xfff00000;
                      if (((uVar9 == 0x60400000) || (uVar9 == 0x60900000)) ||
                         (bVar12 = false, uVar9 == 0x60e00000)) {
                        bVar12 = true;
                      }
                      iVar3 = *(int *)(*(int *)puVar1[4] * 4 + *(int *)(param_1 + 0x14));
                      iVar14 = *(int *)(*(int *)puVar2[4] * 4 + *(int *)(param_1 + 0x14));
                      iVar16 = *(int *)(iVar14 + 0x14);
                      iVar14 = *(int *)(iVar14 + 0x18);
                      while( true ) {
                        if ((iVar16 == *(int *)(iVar3 + 0x14)) && (iVar14 == *(int *)(iVar3 + 0x18))
                           ) goto LAB_829713ac;
                        if (iVar16 == -1) break;
                        iVar16 = *(int *)(iVar16 * 4 + *(int *)(param_1 + 0x14));
                        iVar14 = *(int *)(iVar16 + 0x18);
                        iVar16 = *(int *)(iVar16 + 0x14);
                      }
                      bVar12 = true;
LAB_829713ac:
                      if (bVar12) break;
                      uVar9 = puVar2[3];
                      uVar10 = 0;
                      if (uVar9 != 0) {
                        iVar16 = 0;
                        do {
                          iVar14 = *(int *)(*(int *)(iVar16 + puVar2[4]) * 4 +
                                           *(int *)(param_1 + 0x14));
                          if (((1 < *(uint *)(iVar14 + 0x5c)) || (*(int *)(iVar14 + 0x54) != iVar18)
                              ) || ((iVar7 != 0 &&
                                    (uVar10 != *(uint *)(*(int *)(*(int *)(iVar15 + (int)puVar1[4])
                                                                  * 4 + *(int *)(param_1 + 0x14)) +
                                                        0x10))))) break;
                          uVar10 = uVar10 + 1;
                          iVar16 = iVar16 + 4;
                        } while (uVar10 < uVar9);
                      }
                      if (uVar10 < uVar9) break;
                      uVar22 = uVar22 + 1;
                      iVar15 = iVar15 + 4;
                      lVar23 = lVar23 + 4;
                    } while ((uVar22 & 0xffffffff) < uVar24);
                    if ((uVar22 & 0xffffffff) < uVar24) break;
                  }
                  uVar20 = uVar20 + 1;
                  lVar21 = (uVar5 & 0xfffff) * 4 + lVar21;
                } while ((uVar20 & 0xffffffff) < uVar19);
                if ((uVar20 & 0xffffffff) < uVar19) goto LAB_82971564;
              }
              uVar8 = 0;
              if (puVar1[3] != 0) {
                lVar21 = 0;
                do {
                  puVar2 = *(uint **)(*(int *)(puVar1[4] + (int)lVar21) * 4 +
                                     *(int *)(param_1 + 0x14));
                  if (uVar19 != 0) {
                    lVar23 = lVar21;
                    uVar24 = uVar19;
                    do {
                      uVar9 = *puVar2;
                      puVar4 = *(uint **)(*(int *)(puVar1[2] + (int)lVar23) * 4 +
                                         *(int *)(param_1 + 0x14));
                      uVar10 = *puVar4 & 0xe000000;
                      uVar11 = *puVar4 & 0xf1ffffff;
                      *puVar4 = uVar11;
                      uVar13 = uVar9 & 0xe000000;
                      if ((uVar9 & 0xe000000) <= uVar10) {
                        uVar13 = uVar10;
                      }
                      *puVar4 = uVar11 | uVar13;
                      puVar4[1] = puVar2[1];
                      puVar4[2] = puVar2[2];
                      puVar4[3] = puVar2[3];
                      puVar4[4] = puVar2[4];
                      if (puVar4[0x18] == 0) {
                        puVar4[0x18] = puVar2[0x18];
                        puVar4[0x19] = puVar2[0x19];
                      }
                      lVar23 = lVar23 + (uVar5 & 0xfffff) * 4;
                      puVar4[0x1a] = puVar2[0x1a];
                      puVar4[0x1b] = puVar2[0x1b];
                      puVar4[0x1c] = puVar2[0x1c];
                      uVar24 = uVar24 - 1;
                    } while (uVar24 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  lVar21 = lVar21 + 4;
                  puVar2[1] = *(uint *)(param_1 + 0x74);
                } while (uVar8 < puVar1[3]);
              }
              *puVar1 = 0;
              bVar6 = true;
              puVar1[1] = 0;
              puVar1[3] = 0;
            }
          }
        }
LAB_82971564:;} while (iVar18 != 0);
      if (bVar6) {
        return 0;
      }
    }
  }
  return 1;
}

