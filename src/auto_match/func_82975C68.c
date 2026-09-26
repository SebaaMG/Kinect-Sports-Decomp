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
extern int fn_82968730();
extern int fn_82975B00();


undefined8 fn_82975C68(int param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar6;
  undefined8 uVar5;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  
  bVar2 = false;
  uVar11 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar8 = 0;
    do {
      uVar11 = uVar11 + 1;
      iVar7 = *(int *)(iVar8 + *(int *)(param_1 + 0x10));
      iVar8 = iVar8 + 4;
      *(undefined4 *)(iVar7 + 0x28) = 0xffffffff;
      *(undefined4 *)(iVar7 + 0x24) = 0xffffffff;
    } while (uVar11 < *(uint *)(param_1 + 4));
  }
  uVar11 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar8 = 0;
    do {
      uVar11 = uVar11 + 1;
      iVar7 = *(int *)(iVar8 + *(int *)(param_1 + 0x14));
      iVar8 = iVar8 + 4;
      *(undefined4 *)(iVar7 + 0x54) = 0xffffffff;
      *(undefined4 *)(iVar7 + 0x48) = 0xffffffff;
    } while (uVar11 < *(uint *)(param_1 + 8));
  }
  uVar11 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar8 = 0;
    do {
      puVar1 = *(uint **)(iVar8 + *(int *)(param_1 + 0x18));
      if ((*puVar1 & 0xfff00000) != 0) {
        uVar6 = 0;
        if (puVar1[1] != 0) {
          iVar7 = 0;
          do {
            iVar4 = *(int *)(*(int *)(iVar7 + puVar1[2]) * 4 + *(int *)(param_1 + 0x14));
            if (uVar11 < *(uint *)(iVar4 + 0x54)) {
              *(uint *)(iVar4 + 0x54) = uVar11;
            }
            piVar9 = (int *)(iVar4 + 8);
            iVar3 = *piVar9;
            iVar10 = iVar4;
            while (iVar3 != -1) {
              iVar3 = *(int *)(*(int *)(iVar10 + 4) * 4 + *(int *)(param_1 + 0x10));
              if (uVar11 < *(uint *)(iVar3 + 0x28)) {
                *(uint *)(iVar3 + 0x28) = uVar11;
              }
              iVar10 = *(int *)(*piVar9 * 4 + *(int *)(param_1 + 0x14));
              if (uVar11 < *(uint *)(iVar10 + 0x54)) {
                *(uint *)(iVar10 + 0x54) = uVar11;
              }
              piVar9 = (int *)(iVar10 + 8);
              iVar3 = *(int *)(iVar10 + 8);
            }
            piVar9 = (int *)(iVar4 + 0x14);
            iVar4 = *(int *)(iVar4 + 0x14);
            while (iVar4 != -1) {
              iVar4 = *(int *)(*piVar9 * 4 + *(int *)(param_1 + 0x14));
              if (uVar11 < *(uint *)(iVar4 + 0x54)) {
                *(uint *)(iVar4 + 0x54) = uVar11;
              }
              piVar9 = (int *)(iVar4 + 0x14);
              iVar4 = *piVar9;
            }
            uVar6 = uVar6 + 1;
            iVar7 = iVar7 + 4;
          } while (uVar6 < puVar1[1]);
        }
        uVar6 = 0;
        if (puVar1[3] != 0) {
          iVar7 = 0;
          do {
            iVar4 = *(int *)(*(int *)(iVar7 + puVar1[4]) * 4 + *(int *)(param_1 + 0x14));
            if (uVar11 < *(uint *)(iVar4 + 0x48)) {
              *(uint *)(iVar4 + 0x48) = uVar11;
            }
            iVar3 = iVar4;
            if (*(int *)(iVar4 + 8) == -1) goto LAB_82975eb0;
            iVar3 = *(int *)(*(int *)(iVar4 + 4) * 4 + *(int *)(param_1 + 0x10));
            if (uVar11 < *(uint *)(iVar3 + 0x24)) {
              *(uint *)(iVar3 + 0x24) = uVar11;
            }
            iVar3 = *(int *)(iVar4 + 8);
            while( true ) {
              iVar3 = *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x14));
              if (uVar11 < *(uint *)(iVar3 + 0x54)) {
                *(uint *)(iVar3 + 0x54) = uVar11;
              }
LAB_82975eb0:
              if (*(int *)(iVar3 + 8) == -1) break;
              iVar10 = *(int *)(*(int *)(iVar3 + 4) * 4 + *(int *)(param_1 + 0x10));
              if (uVar11 < *(uint *)(iVar10 + 0x28)) {
                *(uint *)(iVar10 + 0x28) = uVar11;
              }
              iVar3 = *(int *)(iVar3 + 8);
            }
            piVar9 = (int *)(iVar4 + 0x14);
            iVar4 = *(int *)(iVar4 + 0x14);
            while (iVar4 != -1) {
              iVar4 = *(int *)(*piVar9 * 4 + *(int *)(param_1 + 0x14));
              if (uVar11 < *(uint *)(iVar4 + 0x54)) {
                *(uint *)(iVar4 + 0x54) = uVar11;
              }
              piVar9 = (int *)(iVar4 + 0x14);
              iVar4 = *piVar9;
            }
            uVar6 = uVar6 + 1;
            iVar7 = iVar7 + 4;
          } while (uVar6 < puVar1[3]);
        }
      }
      uVar11 = uVar11 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar11 < *(uint *)(param_1 + 0xc));
  }
  fn_82968730(param_1);
  uVar13 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar8 = 0;
    uVar12 = 0xffffffff82038830;
    do {
      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + iVar8);
      iVar4 = *(int *)(*(int *)(iVar7 + 4) * 4 + *(int *)(param_1 + 0x10));
      if (*(uint *)(iVar4 + 0x28) < *(uint *)(iVar7 + 0x54)) {
        *(uint *)(iVar7 + 0x54) = *(uint *)(iVar4 + 0x28);
      }
      if (*(uint *)(iVar4 + 0x24) < *(uint *)(iVar7 + 0x48)) {
        *(uint *)(iVar7 + 0x48) = *(uint *)(iVar4 + 0x24);
      }
      uVar11 = *(uint *)(iVar4 + 4);
      if ((((uVar11 & 0x10) == 0) && (uVar6 = *(uint *)(iVar7 + 0x54), uVar6 != 0xffffffff)) &&
         (uVar6 <= *(uint *)(iVar7 + 0x48))) {
        iVar7 = *(int *)(iVar7 + 0x60);
        uVar5 = uVar12;
        if (((iVar7 == 0) || (*(int *)(iVar7 + 4) != 6)) ||
           ((iVar4 = *(int *)(iVar7 + 0x14), iVar4 == 0 || (*(int *)(iVar4 + 4) != 3)))) {
LAB_8297612c:
          fn_82975B00(param_1,0,0,uVar5,uVar13);
        }
        else if (*(int *)(iVar7 + 0x2c) == 0) {
          fn_82975B00(param_1,*(undefined4 *)
                                 (*(int *)(uVar6 * 4 + *(int *)(param_1 + 0x18)) + 0x3c),4000,
                        0xffffffff820387f0,*(undefined4 *)(iVar4 + 0x18));
          *(undefined4 *)(iVar7 + 0x2c) = 1;
        }
LAB_8297615c:
        bVar2 = true;
      }
      else {
        if (((uVar11 & 0x20) != 0) && (uVar5 = 0xffffffff8203887c, *(int *)(iVar7 + 0x48) == -1))
        goto LAB_82976148;
        if (((uVar11 & 2) == 0) && (*(int *)(iVar7 + 0x48) != -1)) {
          uVar5 = 0xffffffff820388b8;
          goto LAB_8297612c;
        }
        if (((uVar11 & 0xd) == 0) && (*(int *)(iVar7 + 0x54) != -1)) {
          uVar5 = 0xffffffff820388f4;
LAB_82976148:
          fn_82975B00(param_1,0,0,uVar5,uVar13);
          goto LAB_8297615c;
        }
        if ((((*(int *)(param_1 + 0xd8) != 0) && ((uVar11 & 0x10320) == 0)) &&
            (*(int *)(iVar7 + 0x54) == -1)) &&
           (((uVar11 & 0x10) != 0 ||
            (((*(int *)(iVar7 + 0x48) != -1 &&
              (iVar4 = fn_82963370(*(undefined4 *)
                                     (*(int *)(iVar7 + 0x48) * 4 + *(int *)(param_1 + 0x18))),
              iVar4 == 0)) &&
             ((**(uint **)(*(int *)(iVar7 + 0x48) * 4 + *(int *)(param_1 + 0x18)) & 0xfff00000) !=
              0x20900000)))))) {
          if (*(int *)(iVar7 + 0x48) != -1) {
            uVar5 = 0xffffffff8203892c;
            goto LAB_8297612c;
          }
          uVar5 = 0xffffffff82038960;
          goto LAB_82976148;
        }
      }
      uVar13 = uVar13 + 1;
      iVar8 = iVar8 + 4;
    } while ((uVar13 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 8));
    if (bVar2) {
      return 0xffffffff80004005;
    }
  }
  return 0;
}

