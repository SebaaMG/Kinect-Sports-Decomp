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
extern unsigned int *auStack_d0;
extern int fn_82ADF288();
extern int fn_82AE5AC8();
extern unsigned int iStack0000001c;
extern unsigned int stack0x00000034;
extern unsigned int uStack00000034;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;


uint * fn_82ADF910(uint *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                    uint param_6,ulonglong param_7,undefined4 param_8)

{
  int iVar1;
  ulonglong *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar23;
  uint uVar24;
  ulonglong uVar22;
  int iStack0000001c;
  undefined4 uStack00000034;
  undefined4 uStack00000044;
  undefined4 uStack0000004c;
  uint auStack_d0 [2];
  ulonglong uStack_c8;
  int aiStack_c0 [2];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  *param_1 = 0;
  uStack00000044 = (undefined4)param_7;
  uVar19 = 0;
  uVar16 = *(uint *)(param_4 + 0xc0);
  uVar8 = *(uint *)(param_3 + 0xc0);
  uVar13 = (ulonglong)uVar8 & 7;
  uVar22 = (ulonglong)uVar16 & 7;
  uVar17 = param_7;
  if ((uVar16 & 7) != 0) {
    uVar10 = 0;
    iVar6 = 5;
    do {
      if (((uint)(1 << (uVar19 & 0x3f)) & uVar17) == 0) {
        uVar21 = 0;
        uVar20 = (uint)uVar10;
        if ((uVar8 & 7) != 0) {
          iVar1 = *(int *)(param_2 + 0x2a0);
          iVar5 = 5;
          puVar7 = (uint *)(param_3 + 0x10);
          puVar2 = (ulonglong *)((int *)(uVar20 + param_4))[4];
          do {
            if (puVar2 < puVar2 + iVar1) {
              puVar14 = puVar2;
              do {
                if ((*(ulonglong *)((puVar7[-4] - (int)puVar2) + (int)puVar14) & *puVar14) != 0) {
                  bVar3 = true;
                  goto LAB_82adf9f8;
                }
                puVar14 = puVar14 + 1;
              } while (puVar14 < puVar2 + iVar1);
            }
            bVar3 = false;
LAB_82adf9f8:
            if (bVar3) {
LAB_82adfa98:
              uVar9 = (uint)((uVar10 & 0xffffffff) >> 3) & 0x1ffffffc;
              *(uint *)((int)auStack_d0 + uVar9) =
                   (1 << (uVar21 & 0x3f)) << (uVar20 & 0x1f) | *(uint *)((int)auStack_d0 + uVar9);
              uStack_c8 = uVar10;
            }
            else {
              puVar14 = (ulonglong *)*puVar7;
              puVar11 = puVar14 + iVar1;
              if (puVar14 < puVar11) {
                iVar15 = *(int *)(uVar20 + param_4) - (int)puVar14;
                do {
                  if ((*(ulonglong *)(iVar15 + (int)puVar14) & *puVar14) != 0) {
                    bVar3 = true;
                    goto LAB_82adfa40;
                  }
                  puVar14 = puVar14 + 1;
                } while (puVar14 < puVar11);
              }
              bVar3 = false;
LAB_82adfa40:
              if (bVar3) goto LAB_82adfa98;
              if (((uVar16 & 0x40000000) != 0) && ((uVar8 & 0x40000000) != 0)) {
                iVar15 = 0;
                do {
                  if ((*(ulonglong *)((iVar6 + iVar15) * 8 + param_4) |
                      *(ulonglong *)((iVar5 + iVar15) * 8 + param_3)) != 0xffffffffffffffff) {
                    bVar3 = true;
                    goto LAB_82adfa90;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < 4);
                bVar3 = false;
LAB_82adfa90:
                if (!bVar3) goto LAB_82adfa98;
              }
            }
            uVar21 = uVar21 + 1;
            puVar7 = puVar7 + 1;
            iVar5 = iVar5 + 5;
          } while (uVar21 < uVar13);
          uVar17 = param_7 & 0xffffffff;
        }
        uVar21 = (uint)((uVar10 & 0xffffffff) >> 3) & 0x1ffffffc;
        uVar9 = uVar20 & 0x1f;
        uVar12 = (ulonglong)
                 (((2 << (uVar20 + 3 & 0x1f)) - 1U & *(uint *)((int)auStack_d0 + uVar21) &
                  -1 << uVar9) >> uVar9);
        *(uint *)((int)auStack_d0 + uVar21 + 4) =
             4 - ((uint)(((0x8da691691448U >> (uVar12 & 0x7f)) >> (uVar12 & 0x7f)) >>
                        (uVar12 & 0x7f)) & 7) << uVar9 | *(uint *)((int)auStack_d0 + uVar21 + 4);
      }
      uVar19 = uVar19 + 1;
      iVar6 = iVar6 + 5;
      uVar10 = uVar10 + 4;
    } while (uVar19 < uVar22);
  }
  uVar8 = 0;
  if (param_6 != 0) {
    uVar19 = 4;
    do {
      uVar21 = ((2 << (uVar19 + 3 & 0x1f)) - 1U &
                *(uint *)((int)&stack0x00000034 + (uVar19 >> 3 & 0x1ffffffc)) &
               -1 << (uVar19 & 0x1f)) >> (uVar19 & 0x1f);
      uVar20 = uVar19 - 4 & 0x1f;
      iVar6 = (uVar21 & 7) << 2;
      uVar20 = 1 << (((2 << (uVar19 - 1 & 0x1f)) - 1U &
                      *(uint *)((int)&stack0x00000034 + (uVar19 - 4 >> 3 & 0x1ffffffc)) &
                     -1 << uVar20) >> uVar20 & 0x3f);
      if ((((2 << (uVar21 * 4 + 3 & 0x1f)) - 1U &
            *(uint *)((int)auStack_d0 + (uVar21 >> 1 & 0x1ffffffc)) & -1 << iVar6) >> iVar6 & uVar20
          ) != 0) {
        return param_1;
      }
      uVar9 = 0;
      if ((uVar16 & 7) != 0) {
        uVar24 = 0;
        uVar10 = uVar22;
        do {
          uVar4 = uVar24 >> 3 & 0x1ffffffc;
          uVar18 = uVar24 & 0x1f;
          if (uVar9 == uVar21) {
            uVar23 = ~((2 << (uVar24 + 3 & 0x1f)) - 1U & -1 << uVar18);
            *(uint *)((int)auStack_d0 + uVar4 + 4) =
                 uVar23 & *(uint *)((int)auStack_d0 + uVar4 + 4) | 1 << uVar18;
            *(uint *)((int)auStack_d0 + uVar4) =
                 0xf - uVar20 << uVar18 | uVar23 & *(uint *)((int)auStack_d0 + uVar4);
          }
          else {
            uVar23 = *(uint *)((int)auStack_d0 + uVar4 + 4);
            uVar18 = (2 << (uVar24 + 3 & 0x1f)) - 1U & -1 << uVar18;
            *(uint *)((int)auStack_d0 + uVar4 + 4) =
                 uVar23 & ~uVar18 | ((uVar18 & uVar23) >> (uVar24 & 0x1f)) + 1 << (uVar24 & 0x1f);
            *(uint *)((int)auStack_d0 + uVar4) =
                 uVar20 << (uVar24 & 0x1f) | *(uint *)((int)auStack_d0 + uVar4);
          }
          uVar9 = uVar9 + 1;
          uVar24 = uVar24 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar8 = uVar8 + 1;
      uVar19 = uVar19 + 8;
    } while (uVar8 < param_6);
  }
  uVar21 = 0xf;
  uVar20 = 0;
  uVar19 = 0;
  uVar8 = 0;
  if ((uVar16 & 7) != 0) {
    do {
      uVar20 = uVar8;
      if (((uint)(1 << (uVar19 & 0x3f)) & uVar17) == 0) {
        uVar16 = 0xffffffff;
        uVar8 = 0xf;
        uVar9 = 0;
        uVar24 = 0;
        do {
          if ((((uint)(1 << (uVar9 & 0x3f)) & uVar17) == 0) &&
             (uVar18 = ((2 << (uVar24 + 3 & 0x1f)) - 1U &
                        *(uint *)((int)auStack_d0 + (uVar24 >> 3 & 0x1ffffffc) + 4) &
                       -1 << (uVar24 & 0x1f)) >> (uVar24 & 0x1f), uVar18 < 9)) {
            if (uVar18 == 0) {
              return param_1;
            }
            if (uVar18 < uVar8) {
              uVar16 = uVar9;
              uVar8 = uVar18;
            }
          }
          uVar9 = uVar9 + 1;
          uVar24 = uVar24 + 4;
        } while (uVar9 < uVar22);
        uVar8 = uVar16 >> 1 & 0x1ffffffc;
        iVar6 = (uVar16 & 7) << 2;
        uVar16 = ((2 << (uVar16 * 4 + 3 & 0x1f)) - 1U & *(uint *)((int)auStack_d0 + uVar8) &
                 -1 << iVar6) >> iVar6;
        if (uVar16 == 0xf) {
          return param_1;
        }
        uVar9 = uVar21 & ~uVar16;
        uVar24 = 0;
        uVar16 = 0;
        uVar9 = uVar9 & ~(uVar9 - 1);
        uVar21 = uVar21 - uVar9;
        uVar20 = uVar9 | uVar20;
        uVar10 = uVar22;
        do {
          if (((uint)(1 << (uVar24 & 0x3f)) & uVar17) == 0) {
            uVar18 = uVar16 & 0x1f;
            uVar4 = uVar16 >> 3 & 0x1ffffffc;
            if ((((2 << (uVar16 + 3 & 0x1f)) - 1U & -1 << uVar18 &
                 *(uint *)((int)auStack_d0 + uVar4)) >> uVar18 & uVar9) == 0) {
              *(int *)((int)auStack_d0 + uVar4 + 4) =
                   *(int *)((int)auStack_d0 + uVar4 + 4) - (1 << uVar18);
              *(uint *)((int)auStack_d0 + uVar4) =
                   uVar9 << uVar18 | *(uint *)((int)auStack_d0 + uVar4);
            }
          }
          uVar24 = uVar24 + 1;
          uVar16 = uVar16 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        uVar16 = *(uint *)(uVar8 + (int)param_1);
        *(uint *)((int)auStack_d0 + uVar8 + 4) =
             0xf << iVar6 | *(uint *)((int)auStack_d0 + uVar8 + 4);
        *(uint *)(uVar8 + (int)param_1) = 0x1f - (int)LZCOUNT(uVar9) << iVar6 | uVar16;
      }
      uVar19 = uVar19 + 1;
      uVar8 = uVar20;
    } while (uVar19 < uVar22);
  }
  uVar12 = 0x20 - LZCOUNT(uVar20);
  uVar10 = uVar13;
  if (uVar13 <= (uVar12 & 0xffffffff)) {
    uVar10 = uVar12;
  }
  if ((uVar22 < (uVar10 & 0xffffffff)) && (uVar22 = uVar12, (uVar12 & 0xffffffff) < uVar13)) {
    uVar22 = uVar13;
  }
  if (((*(uint *)(param_4 + 0xc0) & 0x40000000) != 0) &&
     ((*(uint *)(param_3 + 0xc0) & 0x40000000) != 0)) {
    uVar13 = (ulonglong)*(uint *)(param_2 + 0x318);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    if (uVar13 == 0) {
      uVar13 = 0x20;
    }
    iStack0000001c = param_2;
    uStack00000034 = param_5;
    uStack0000004c = param_8;
    aiStack_c0[0] = param_2;
    if (uVar13 < 0x40) {
      fn_82AE5AC8(aiStack_c0,uVar13,0x40 - uVar13);
    }
    iVar6 = fn_82ADF288(param_2,param_3,param_4,*param_1,uVar22,uVar17,uStack0000004c,aiStack_c0);
    if (iVar6 == -1) {
      return param_1;
    }
  }
  *param_1 = (uint)((uVar22 & 0xffffffff) << 0x10) | *param_1;
  return param_1;
}

