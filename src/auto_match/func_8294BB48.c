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
extern int fn_829646C8();
extern int fn_829647E8();


ulonglong fn_8294BB48(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  
  uVar1 = **(uint **)(param_1 + 0x104);
  uVar7 = (ulonglong)uVar1 & 0xfffff;
  if ((uVar1 & 0xfff00000) == 0x20800000) {
    bVar6 = false;
    uVar11 = 0;
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((uVar1 & 0xfffff) != 0) {
        iVar10 = 0;
        do {
          iVar15 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar10) * 4 +
                           *(int *)(param_1 + 0x14));
          iVar2 = *(int *)(*(int *)((int)((lVar12 + uVar9 & 0xffffffff) << 2) +
                                   *(int *)(*(int *)(param_1 + 0x104) + 8)) * 4 +
                          *(int *)(param_1 + 0x14));
          if ((((*(int *)(iVar2 + 4) != *(int *)(iVar15 + 4)) ||
               (*(int *)(iVar2 + 8) != *(int *)(iVar15 + 8))) ||
              (*(int *)(iVar2 + 0xc) != *(int *)(iVar15 + 0xc))) ||
             (*(int *)(iVar2 + 0x10) != *(int *)(iVar15 + 0x10))) break;
          uVar9 = uVar9 + 1;
          iVar10 = iVar10 + 4;
        } while ((uVar9 & 0xffffffff) < uVar7);
      }
      if ((uVar9 & 0xffffffff) != uVar7) {
        uVar9 = fn_829646C8(param_1,uVar7 | 0x10000000,uVar7,uVar7);
        if ((int)uVar9 == -1) {
          return 0xffffffff8007000e;
        }
        lVar13 = (uVar9 & 0x3fffffff) << 2;
        uVar14 = 0;
        iVar10 = *(int *)((int)lVar13 + *(int *)(param_1 + 0x18));
        if ((uVar1 & 0xfffff) != 0) {
          iVar15 = 0;
          do {
            iVar2 = (int)((lVar12 + uVar14 & 0xffffffff) << 2);
            *(undefined4 *)(iVar15 + *(int *)(iVar10 + 8)) =
                 *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar2);
            uVar8 = fn_829647E8(param_1,*(undefined4 *)
                                               (*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10)
                                                        + iVar15) * 4 + *(int *)(param_1 + 0x14)));
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar2) = uVar8;
            *(undefined4 *)(*(int *)(iVar10 + 0x10) + iVar15) = uVar8;
            if (*(int *)(*(int *)(iVar10 + 0x10) + iVar15) == -1) {
              return 0xffffffff8007000e;
            }
            uVar14 = uVar14 + 1;
            *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(iVar10 + 0x10) + iVar15) * 4 + *(int *)(param_1 + 0x14)) +
             0x14) = *(undefined4 *)
                      (*(int *)(*(int *)(iVar15 + *(int *)(iVar10 + 8)) * 4 +
                               *(int *)(param_1 + 0x14)) + 0x14);
            piVar3 = (int *)(*(int *)(iVar10 + 0x10) + iVar15);
            piVar4 = (int *)(iVar15 + *(int *)(iVar10 + 8));
            iVar15 = iVar15 + 4;
            *(undefined4 *)(*(int *)(*piVar3 * 4 + *(int *)(param_1 + 0x14)) + 0x18) =
                 *(undefined4 *)(*(int *)(*piVar4 * 4 + *(int *)(param_1 + 0x14)) + 0x18);
          } while ((uVar14 & 0xffffffff) < uVar7);
        }
        while (((ulonglong)*(uint *)(param_1 + 0x100) < (uVar9 & 0xffffffff) ||
               (((uVar9 & 0xffffffff) != 0 &&
                ((**(uint **)((int)lVar13 + *(int *)(param_1 + 0x18) + -4) & 0xfff00000) ==
                 0x20800000))))) {
          uVar9 = uVar9 - 1;
          puVar5 = (undefined4 *)((int)lVar13 + *(int *)(param_1 + 0x18));
          lVar13 = lVar13 + -4;
          *puVar5 = puVar5[-1];
        }
        bVar6 = true;
        *(int *)((int)((uVar9 & 0xffffffff) << 2) + *(int *)(param_1 + 0x18)) = iVar10;
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + uVar7;
    } while (uVar11 < 2);
    uVar7 = (ulonglong)!bVar6;
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}

