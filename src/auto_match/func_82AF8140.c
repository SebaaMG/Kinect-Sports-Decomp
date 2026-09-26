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
extern int fn_82AC8910();
extern int fn_82ADD198();
extern int fn_82B8B280();


void fn_82AF8140(int param_1,char param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char cVar13;
  ulonglong *puVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar21;
  ulonglong uVar20;
  
  uVar3 = *(uint *)(param_1 + 4);
  do {
    if (((uVar3 & 1) != 0) || (uVar3 == 0)) {
      return;
    }
    if (param_2 == '\0') {
      *(undefined4 *)(uVar3 + 0x54) = *(undefined4 *)(uVar3 + 0x58);
    }
    uVar11 = fn_82AC8910(*(undefined4 *)(uVar3 + 0x58),0,*(undefined4 *)(param_1 + 0x2a0));
    if ((uVar11 & 0xffffffff) <= (ulonglong)(*(int *)(param_1 + 0x29c) - 1)) {
      do {
        uVar16 = *(int *)(param_1 + 0x2a0) * (int)uVar11 * 8 + *(int *)(param_1 + 0x2ac);
        uVar21 = *(int *)(param_1 + 0x2a0) * 8 + uVar16;
        if (uVar16 < uVar21) {
          puVar14 = (ulonglong *)(*(int *)(uVar3 + 0x58) + -8);
          puVar17 = (ulonglong *)(uVar16 - 8);
          lVar15 = (ulonglong)((uVar21 - uVar16) - 1 >> 3) + 1;
          do {
            puVar14 = puVar14 + 1;
            puVar4 = puVar17 + 1;
            puVar17 = puVar17 + 1;
            *puVar17 = *puVar14 | *puVar4;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        uVar21 = (uint)((uVar11 & 0xffffffff) >> 3) & 0x1ffffff8;
        iVar5 = *(int *)(param_1 + 0x2a0) * (int)uVar11 * 8 + *(int *)(param_1 + 0x2ac);
        *(longlong *)(uVar21 + iVar5) = *(longlong *)(uVar21 + iVar5) - (1L << (uVar11 & 0x3f));
        uVar21 = *(int *)(param_1 + 0x29c) - 1;
        if ((uVar11 & 0xffffffff) == (ulonglong)uVar21) {
          uVar11 = 0xffffffffffffffff;
        }
        else {
          uVar11 = fn_82AC8910(*(undefined4 *)(uVar3 + 0x58),uVar11 + 1,
                                *(undefined4 *)(param_1 + 0x2a0));
        }
      } while ((uVar11 & 0xffffffff) <= (ulonglong)uVar21);
    }
    for (uVar21 = *(uint *)(uVar3 + 0x14); ((uVar21 & 1) == 0 && (uVar21 != 0));
        uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 0x28)) {
      if ((*(uint *)(uVar21 + 8) & 0x3f80) == 0x3800) {
        uVar1 = *(ushort *)(uVar21 + 0x12);
        for (uVar16 = *(uint *)(uVar3 + 0x14); ((uVar16 & 1) == 0 && (uVar16 != 0));
            uVar16 = *(uint *)((uVar16 & 0xfffffffe) + 0x28)) {
          if (((*(uint *)(uVar16 + 8) & 0x3f80) == 0x3800) &&
             (uVar2 = *(ushort *)(uVar16 + 0x12), uVar1 != uVar2)) {
            uVar6 = uVar2 >> 3 & 0x1ffffff8;
            iVar5 = *(int *)(param_1 + 0x2a0) * (uint)uVar1 * 8 + *(int *)(param_1 + 0x2ac);
            uVar7 = uVar1 >> 3 & 0x1ffffff8;
            *(ulonglong *)(uVar6 + iVar5) = 1L << (uVar2 & 0x3f) | *(ulonglong *)(uVar6 + iVar5);
            iVar5 = *(int *)(param_1 + 0x2a0) * (uint)uVar2 * 8 + *(int *)(param_1 + 0x2ac);
            *(ulonglong *)(uVar7 + iVar5) = 1L << (uVar1 & 0x3f) | *(ulonglong *)(uVar7 + iVar5);
          }
        }
      }
    }
    if ((*(uint *)(uVar3 + 0x1c) & 1) == 0) {
      uVar21 = -(uint)((*(uint *)(uVar3 + 0x1c) & 1) == 0) & *(uint *)(uVar3 + 0x1c);
      iVar5 = uVar3 + 0x18;
    }
    else {
      uVar21 = -(uint)((*(uint *)(uVar3 + 0x24) & 1) == 0) & *(uint *)(uVar3 + 0x24);
      iVar5 = uVar3 + 0x20;
    }
    while (uVar21 != 0) {
      do {
        if ((*(uint *)(uVar21 + 8) >> 0x17 & 1) != 0) {
          uVar10 = (ulonglong)*(uint *)(uVar21 + 0x10) & 0xffff;
          uVar19 = uVar10 + ((ulonglong)(*(uint *)(uVar21 + 0x10) >> 0x10) & 7);
          uVar18 = uVar10;
          uVar11 = uVar10;
          while (uVar11 < uVar19) {
            uVar11 = fn_82ADD198(param_1,uVar18);
            uVar18 = uVar18 + 1;
            if ((uVar18 & 0xffffffff) < uVar19) {
              uVar16 = (uint)((uVar11 & 0xffffffff) >> 3) & 0x1ffffff8;
              uVar20 = uVar18;
              do {
                uVar12 = fn_82ADD198(param_1,uVar20);
                uVar6 = (uint)((uVar12 & 0xffffffff) >> 3) & 0x1ffffff8;
                uVar20 = uVar20 + 1;
                iVar8 = *(int *)(param_1 + 0x2a0) * (int)uVar11 * 8 + *(int *)(param_1 + 0x2ac);
                *(ulonglong *)(uVar6 + iVar8) =
                     1L << (uVar12 & 0x3f) | *(ulonglong *)(uVar6 + iVar8);
                iVar8 = *(int *)(param_1 + 0x2a0) * (int)uVar12 * 8 + *(int *)(param_1 + 0x2ac);
                *(ulonglong *)(iVar8 + uVar16) =
                     *(ulonglong *)(iVar8 + uVar16) | 1L << (uVar11 & 0x3f);
              } while ((uVar20 & 0xffffffff) < uVar19);
            }
            uVar11 = uVar18 & 0xffffffff;
          }
          for (uVar16 = *(uint *)(uVar3 + 0x14); ((uVar16 & 1) == 0 && (uVar16 != 0));
              uVar16 = *(uint *)((uVar16 & 0xfffffffe) + 0x28)) {
            if (((*(uint *)(uVar16 + 8) & 0x3f80) == 0x3800) && (uVar16 != uVar21)) {
              for (iVar8 = *(int *)(uVar16 + 4); iVar8 != 0; iVar8 = *(int *)(iVar8 + 8)) {
                uVar6 = *(uint *)(iVar8 + 0x10);
                if ((((uVar6 != 0) && (*(uint *)(uVar6 + 0x1c) == uVar3)) && (uVar6 != uVar21)) &&
                   ((cVar13 = fn_82B8B280(uVar6,uVar21,0,1,param_1), cVar13 != '\0' &&
                    (uVar11 = fn_82ADD198(param_1,*(undefined2 *)(uVar16 + 0x12)), uVar10 < uVar19)
                    ))) {
                  uVar6 = (uint)((uVar11 & 0xffffffff) >> 3) & 0x1ffffff8;
                  uVar18 = uVar10;
                  do {
                    uVar20 = fn_82ADD198(param_1,uVar18);
                    uVar7 = (uint)((uVar20 & 0xffffffff) >> 3) & 0x1ffffff8;
                    uVar18 = uVar18 + 1;
                    iVar9 = *(int *)(param_1 + 0x2a0) * (int)uVar20 * 8 + *(int *)(param_1 + 0x2ac);
                    *(ulonglong *)(uVar6 + iVar9) =
                         1L << (uVar11 & 0x3f) | *(ulonglong *)(uVar6 + iVar9);
                    iVar9 = *(int *)(param_1 + 0x2a0) * (int)uVar11 * 8 + *(int *)(param_1 + 0x2ac);
                    *(ulonglong *)(uVar7 + iVar9) =
                         1L << (uVar20 & 0x3f) | *(ulonglong *)(uVar7 + iVar9);
                  } while ((uVar18 & 0xffffffff) < uVar19);
                }
              }
            }
          }
        }
        uVar21 = *(uint *)((uVar21 & 0xfffffffe) + 0x28);
      } while (((uVar21 & 1) == 0) && (uVar21 != 0));
      if ((iVar5 == uVar3 + 0x20) ||
         (uVar21 = *(uint *)(uVar3 + 0x24), iVar5 = uVar3 + 0x20, (uVar21 & 1) != 0)) break;
    }
    uVar3 = *(uint *)((uVar3 & 0xfffffffe) + 4);
  } while( true );
}

