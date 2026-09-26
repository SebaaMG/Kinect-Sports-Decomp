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
extern unsigned int *auStack_a0;
extern int fn_82AC8910();
extern int fn_82ADD198();
extern int fn_82F68CC0();
extern unsigned int uStack_a4;


void fn_82ADE8E8(int param_1,int param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong *puVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uStack_a4;
  uint auStack_a0 [40];
  
  uVar1 = *(uint *)(param_1 + 4);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      return;
    }
    if (param_4 == '\0') {
      *(undefined4 *)(uVar1 + 0x54) = *(undefined4 *)(uVar1 + 0x58);
    }
    fn_82F68CC0(param_2,*(undefined4 *)(uVar1 + 0x58),param_3);
    uVar6 = fn_82AC8910(param_2,0,*(undefined4 *)(param_1 + 0x2a0));
    if ((uVar6 & 0xffffffff) <= (ulonglong)(*(int *)(param_1 + 0x29c) - 1)) {
      do {
        uVar13 = *(int *)(param_1 + 0x2a0) * (int)uVar6 * 8 + *(int *)(param_1 + 0x2ac);
        uVar19 = *(int *)(param_1 + 0x2a0) * 8 + uVar13;
        if (uVar13 < uVar19) {
          puVar12 = (ulonglong *)(uVar13 - 8);
          puVar10 = (ulonglong *)(param_2 + -8);
          lVar11 = (ulonglong)((uVar19 - uVar13) - 1 >> 3) + 1;
          do {
            puVar3 = puVar12 + 1;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
            *puVar12 = *puVar3 | *puVar10;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        uVar19 = (uint)((uVar6 & 0xffffffff) >> 3) & 0x1ffffff8;
        iVar4 = *(int *)(param_1 + 0x2a0) * (int)uVar6 * 8 + *(int *)(param_1 + 0x2ac);
        *(longlong *)(uVar19 + iVar4) = *(longlong *)(uVar19 + iVar4) - (1L << (uVar6 & 0x3f));
        uVar19 = *(int *)(param_1 + 0x29c) - 1;
        if ((uVar6 & 0xffffffff) == (ulonglong)uVar19) {
          uVar6 = 0xffffffffffffffff;
        }
        else {
          uVar6 = fn_82AC8910(param_2,uVar6 + 1,*(undefined4 *)(param_1 + 0x2a0));
        }
      } while ((uVar6 & 0xffffffff) <= (ulonglong)uVar19);
    }
    if ((*(uint *)(uVar1 + 0x1c) & 1) == 0) {
      uVar19 = *(uint *)(uVar1 + 0x18);
      do {
        uVar19 = uVar19 & 0xfffffffe;
        if ((int *)(uVar19 - 0x28) == (int *)0x0) break;
        if ((*(uint *)(uVar19 - 0x20) >> 0x17 & 1) != 0) {
          uVar13 = *(uint *)(uVar19 - 0x20) >> 1 & 0xf;
          while( true ) {
            if (uVar13 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = ((ulonglong)*(ushort *)(uVar19 - 0x16) - LZCOUNT(uVar13 & ~(uVar13 - 1))) +
                      0x1f;
            }
            if ((uVar6 & 0xffffffff) == 0) break;
            uVar7 = fn_82ADD198(param_1,uVar6);
            uVar14 = (uint)((uVar7 & 0xffffffff) >> 3) & 0x1ffffff8;
            uVar15 = 1L << (uVar7 & 0x3f);
            *(ulonglong *)(uVar14 + param_2) = *(ulonglong *)(uVar14 + param_2) & ~uVar15;
            uVar16 = *(uint *)(uVar19 - 0x20) >> 1 & 0xf;
            while( true ) {
              if (uVar16 == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = ((ulonglong)*(ushort *)(uVar19 - 0x16) - LZCOUNT(uVar16 & ~(uVar16 - 1))) +
                        0x1f;
              }
              if ((uVar9 & 0xffffffff) == 0) break;
              if ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff)) {
                uVar9 = fn_82ADD198(param_1);
                uVar5 = (uint)((uVar9 & 0xffffffff) >> 3) & 0x1ffffff8;
                iVar4 = *(int *)(param_1 + 0x2a0) * (int)uVar7 * 8 + *(int *)(param_1 + 0x2ac);
                *(ulonglong *)(uVar5 + iVar4) = 1L << (uVar9 & 0x3f) | *(ulonglong *)(uVar5 + iVar4)
                ;
                iVar4 = *(int *)(param_1 + 0x2a0) * (int)uVar9 * 8 + *(int *)(param_1 + 0x2ac);
                *(ulonglong *)(uVar14 + iVar4) = uVar15 | *(ulonglong *)(uVar14 + iVar4);
              }
              uVar16 = uVar16 - (uVar16 & ~(uVar16 - 1));
            }
            uVar6 = fn_82AC8910(param_2,0,*(undefined4 *)(param_1 + 0x2a0));
            if ((uVar6 & 0xffffffff) <= (ulonglong)(*(int *)(param_1 + 0x29c) - 1)) {
              do {
                uVar16 = (uint)((uVar6 & 0xffffffff) >> 3) & 0x1ffffff8;
                iVar4 = *(int *)(param_1 + 0x2a0) * (int)uVar7 * 8 + *(int *)(param_1 + 0x2ac);
                *(ulonglong *)(uVar16 + iVar4) =
                     1L << (uVar6 & 0x3f) | *(ulonglong *)(uVar16 + iVar4);
                iVar4 = *(int *)(param_1 + 0x2a0) * (int)uVar6 * 8 + *(int *)(param_1 + 0x2ac);
                *(ulonglong *)(uVar14 + iVar4) = uVar15 | *(ulonglong *)(uVar14 + iVar4);
                uVar16 = *(int *)(param_1 + 0x29c) - 1;
                if ((uVar6 & 0xffffffff) == (ulonglong)uVar16) {
                  uVar6 = 0xffffffffffffffff;
                }
                else {
                  uVar6 = fn_82AC8910(param_2,uVar6 + 1,*(undefined4 *)(param_1 + 0x2a0));
                }
              } while ((uVar6 & 0xffffffff) <= (ulonglong)uVar16);
            }
            uVar13 = uVar13 - (uVar13 & ~(uVar13 - 1));
          }
        }
        for (puVar2 = *(uint **)(uVar19 - 0x28); puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[1])
        {
          if (((*puVar2 & 0xe000000) != 0) && ((*(uint *)(puVar2[3] + 8) >> 0x17 & 1) != 0)) {
            uVar13 = *(uint *)(puVar2[3] + 0x10);
            uVar6 = (ulonglong)uVar13 & 0xffff;
            uVar7 = ((ulonglong)(uVar13 >> 0x10) & 7) + uVar6;
            if (uVar6 < uVar7) {
              puVar17 = &uStack_a4;
              do {
                uVar8 = fn_82ADD198(param_1,uVar6);
                uVar6 = uVar6 + 1;
                puVar17 = puVar17 + 1;
                *puVar17 = uVar8;
              } while ((uVar6 & 0xffffffff) < uVar7);
            }
            uVar13 = *puVar2;
            uVar14 = uVar13 >> 0x19;
            uVar6 = (ulonglong)uVar14 & 7;
            if ((uVar14 & 7) != 0) {
              uVar14 = 0;
              do {
                uVar16 = auStack_a0[(uVar13 >> 5 & 0xff) >> (uVar14 & 0x3f) & 3];
                uVar5 = uVar16 >> 3 & 0x1ffffff8;
                uVar7 = 1L << ((ulonglong)uVar16 & 0x3f);
                if ((*(ulonglong *)(uVar5 + param_2) & uVar7) == 0) {
                  uVar15 = fn_82AC8910(param_2,0,*(undefined4 *)(param_1 + 0x2a0));
                  if ((uVar15 & 0xffffffff) <= (ulonglong)(*(int *)(param_1 + 0x29c) - 1)) {
                    do {
                      uVar18 = (uint)((uVar15 & 0xffffffff) >> 3) & 0x1ffffff8;
                      iVar4 = *(int *)(param_1 + 0x2a0) * uVar16 * 8 + *(int *)(param_1 + 0x2ac);
                      *(ulonglong *)(uVar18 + iVar4) =
                           1L << (uVar15 & 0x3f) | *(ulonglong *)(uVar18 + iVar4);
                      iVar4 = *(int *)(param_1 + 0x2a0) * (int)uVar15 * 8 +
                              *(int *)(param_1 + 0x2ac);
                      *(ulonglong *)(iVar4 + uVar5) = *(ulonglong *)(iVar4 + uVar5) | uVar7;
                      uVar18 = *(int *)(param_1 + 0x29c) - 1;
                      if ((uVar15 & 0xffffffff) == (ulonglong)uVar18) {
                        uVar15 = 0xffffffffffffffff;
                      }
                      else {
                        uVar15 = fn_82AC8910(param_2,uVar15 + 1,*(undefined4 *)(param_1 + 0x2a0));
                      }
                    } while ((uVar15 & 0xffffffff) <= (ulonglong)uVar18);
                  }
                  *(ulonglong *)(uVar5 + param_2) = *(ulonglong *)(uVar5 + param_2) | uVar7;
                }
                uVar6 = uVar6 - 1;
                uVar14 = uVar14 + 2;
              } while (uVar6 != 0);
            }
          }
        }
        uVar19 = *(uint *)(uVar19 - 4);
      } while ((uVar19 & 1) == 0);
    }
    uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4);
  } while( true );
}

