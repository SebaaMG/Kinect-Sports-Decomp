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
extern int fn_829664A0();
extern int fn_82969030();
extern int fn_8296BD78();
extern int fn_8296C2D8();
extern int fn_8296C4F8();
extern int fn_8296CF68();


undefined8 fn_82971B58(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  uint uVar9;
  longlong lVar8;
  int iVar11;
  longlong lVar10;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  
  fn_8296CF68();
  uVar9 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar11 = 0;
    do {
      iVar17 = *(int *)(iVar11 + *(int *)(param_1 + 0x14));
      iVar12 = *(int *)(*(int *)(iVar17 + 4) * 4 + *(int *)(param_1 + 0x10));
      *(undefined4 *)(iVar17 + 0x40) = 0;
      if ((*(uint *)(iVar12 + 4) & 0x40) == 0) {
        *(undefined4 *)(iVar17 + 0xc) = 0xffffffff;
        *(undefined4 *)(iVar17 + 0x10) = 0xffffffff;
      }
      uVar9 = uVar9 + 1;
      iVar11 = iVar11 + 4;
    } while (uVar9 < *(uint *)(param_1 + 8));
  }
  uVar9 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar11 = 0;
    do {
      uVar9 = uVar9 + 1;
      *(undefined4 *)(*(int *)(iVar11 + *(int *)(param_1 + 0x18)) + 0x24) = 0;
      piVar5 = (int *)(iVar11 + *(int *)(param_1 + 0x18));
      iVar11 = iVar11 + 4;
      *(undefined4 *)(*piVar5 + 0x28) = 0;
    } while (uVar9 < *(uint *)(param_1 + 0xc));
  }
  fn_8296CF68(param_1);
  uVar9 = *(uint *)(param_1 + 0xc);
  uVar14 = (ulonglong)uVar9;
  if (uVar14 != 0) {
    iVar11 = uVar9 << 2;
    uVar15 = uVar14;
    do {
      iVar11 = iVar11 + -4;
      uVar15 = uVar15 - 1;
      uVar13 = **(uint **)(iVar11 + *(int *)(param_1 + 0x18));
      if ((uVar13 & 0xfff00000) != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        if (((uVar13 & 0xf0000000) < 0x10000000) || (0x40000000 < (uVar13 & 0xf0000000))) {
          if ((uVar13 & 0xfff00000) == 0x50000000) {
            uVar7 = fn_829664A0();
          }
          else {
            uVar7 = fn_8296C2D8(param_1);
          }
        }
        else {
          uVar7 = fn_8296BD78(param_1);
        }
        if ((int)uVar7 < 0) {
          return uVar7;
        }
        uVar13 = *(uint *)(param_1 + 0xc);
        if (uVar1 < uVar13) {
          iVar17 = uVar1 << 2;
          uVar16 = uVar1;
          do {
            uVar7 = fn_8296C4F8(param_1,*(undefined4 *)(iVar17 + *(int *)(param_1 + 0x18)));
            if ((int)uVar7 < 0) {
              return uVar7;
            }
            uVar16 = uVar16 + 1;
            iVar17 = iVar17 + 4;
          } while (uVar16 < uVar13);
        }
        uVar18 = (ulonglong)(uVar13 - uVar1 >> 1);
        if (uVar18 != 0) {
          iVar17 = uVar1 << 2;
          iVar12 = uVar13 << 2;
          do {
            iVar2 = *(int *)(param_1 + 0x18);
            uVar3 = *(undefined4 *)(iVar17 + iVar2);
            *(undefined4 *)(iVar17 + iVar2) = *(undefined4 *)(iVar12 + iVar2 + -4);
            iVar17 = iVar17 + 4;
            iVar2 = iVar12 + *(int *)(param_1 + 0x18);
            iVar12 = iVar12 + -4;
            *(undefined4 *)(iVar2 + -4) = uVar3;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
    } while ((uVar15 & 0xffffffff) != 0);
  }
  lVar10 = 0;
  uVar15 = (*(uint *)(param_1 + 0xc) - uVar14 & 0xffffffff) >> 1;
  if (uVar15 != 0) {
    iVar11 = uVar9 << 2;
    do {
      iVar17 = *(int *)(param_1 + 0x18);
      uVar3 = *(undefined4 *)(iVar17 + iVar11);
      *(undefined4 *)(iVar17 + iVar11) =
           *(undefined4 *)
            ((int)((((ulonglong)*(uint *)(param_1 + 0xc) - lVar10) - 1 & 0xffffffff) << 2) + iVar17)
      ;
      iVar11 = iVar11 + 4;
      lVar8 = (ulonglong)*(uint *)(param_1 + 0xc) - lVar10;
      lVar10 = lVar10 + 1;
      *(undefined4 *)((int)((lVar8 - 1U & 0xffffffff) << 2) + *(int *)(param_1 + 0x18)) = uVar3;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  if (uVar14 != 0) {
    iVar11 = 0;
    do {
      puVar6 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar11);
      iVar11 = iVar11 + 4;
      *(undefined4 *)*puVar6 = 0;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar7 = fn_82969030(param_1);
  if (((int)uVar7 == 0) || (-1 < (int)uVar7)) {
    uVar9 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      iVar11 = 0;
      do {
        iVar17 = *(int *)(*(int *)(param_1 + 0x10) + iVar11);
        if ((*(uint *)(iVar17 + 4) & 0x40) == 0) {
          *(undefined4 *)(iVar17 + 0x10) = 0;
        }
        uVar9 = uVar9 + 1;
        iVar11 = iVar11 + 4;
      } while (uVar9 < *(uint *)(param_1 + 4));
    }
    uVar9 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar11 = 0;
      do {
        puVar4 = *(uint **)(*(int *)(param_1 + 0x18) + iVar11);
        if ((((*puVar4 & 0xfff00000) != 0) && (puVar4[3] != 0)) &&
           (iVar17 = *(int *)(*(int *)(*(int *)(*(int *)puVar4[4] * 4 + *(int *)(param_1 + 0x14)) +
                                      4) * 4 + *(int *)(param_1 + 0x10)),
           (*(uint *)(iVar17 + 4) & 0x40) == 0)) {
          uVar13 = 0;
          if (puVar4[3] != 0) {
            iVar12 = 0;
            do {
              uVar3 = *(undefined4 *)(iVar17 + 0x10);
              piVar5 = (int *)(iVar12 + puVar4[4]);
              iVar12 = iVar12 + 4;
              iVar2 = *(int *)(*piVar5 * 4 + *(int *)(param_1 + 0x14));
              *(uint *)(iVar2 + 0x10) = uVar13;
              uVar13 = uVar13 + 1;
              *(undefined4 *)(iVar2 + 0xc) = uVar3;
            } while (uVar13 < puVar4[3]);
          }
          *(int *)(iVar17 + 0x10) = *(int *)(iVar17 + 0x10) + 1;
        }
        uVar9 = uVar9 + 1;
        iVar11 = iVar11 + 4;
      } while (uVar9 < *(uint *)(param_1 + 0xc));
    }
    uVar7 = 0;
  }
  return uVar7;
}

