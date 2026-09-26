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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82963958();
extern int fn_82965280();
extern int fn_82968878();
extern int fn_8296CF68();


undefined8 fn_8296D430(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  
  fn_8296CF68();
  uVar8 = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar6 = 0;
    do {
      uVar8 = uVar8 + 1;
      iVar12 = *(int *)(iVar6 + *(int *)(param_1 + 0x18));
      iVar6 = iVar6 + 4;
      *(undefined4 *)(iVar12 + 0x18) = 0;
      *(undefined4 *)(iVar12 + 0x20) = 0;
      *(undefined4 *)(iVar12 + 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x1c) = 0;
      uVar9 = *(uint *)(param_1 + 0xc);
    } while (uVar8 < uVar9);
  }
  uVar10 = 0;
  uVar8 = 0;
  if (uVar9 != 0) {
    iVar6 = 0;
    do {
      puVar2 = *(uint **)(iVar6 + *(int *)(param_1 + 0x18));
      uVar4 = ZEXT48(puVar2);
      if ((*puVar2 & 0xfff00000) != 0) {
        uVar9 = 0;
        if (puVar2[3] != 0) {
          iVar12 = 0;
          do {
            fn_82968878(param_1,*(undefined4 *)(*(int *)((int)uVar4 + 0x10) + iVar12),uVar10,0);
            uVar9 = uVar9 + 1;
            iVar12 = iVar12 + 4;
          } while (uVar9 < *(uint *)((int)uVar4 + 0xc));
        }
        uVar9 = 0;
        if (*(int *)((int)uVar4 + 4) != 0) {
          iVar12 = 0;
          do {
            iVar3 = *(int *)(iVar12 + *(int *)((int)uVar4 + 8));
            if ((iVar3 != -1) &&
               (iVar5 = *(int *)(*(int *)(iVar3 * 4 + *(int *)(param_1 + 0x14)) + 0x38), iVar5 != -1
               )) {
              iVar3 = iVar5;
            }
            fn_82968878(param_1,iVar3,uVar10,1);
            uVar9 = uVar9 + 1;
            iVar12 = iVar12 + 4;
          } while (uVar9 < *(uint *)((int)uVar4 + 4));
        }
      }
      uVar8 = *(uint *)(param_1 + 0xc);
      uVar10 = uVar10 + 1;
      iVar6 = iVar6 + 4;
    } while ((uVar10 & 0xffffffff) < (ulonglong)uVar8);
  }
  uVar11 = 0;
  uVar9 = 0;
  if (uVar8 != 0) {
    iVar6 = 0;
    do {
      iVar12 = *(int *)(iVar6 + *(int *)(param_1 + 0x18));
      if (*(int *)(iVar12 + 0x14) != 0) {
        iVar3 = fn_82963958();
        *(int *)(iVar12 + 0x18) = iVar3;
        if (iVar3 == 0) {
          return 0xffffffff8007000e;
        }
      }
      if (*(int *)(iVar12 + 0x1c) != 0) {
        iVar3 = fn_82963958();
        *(int *)(iVar12 + 0x20) = iVar3;
        if (iVar3 == 0) {
          return 0xffffffff8007000e;
        }
      }
      uVar11 = uVar11 + 1;
      *(undefined4 *)(iVar12 + 0x14) = 0;
      *(undefined4 *)(iVar12 + 0x1c) = 0;
      iVar6 = iVar6 + 4;
      uVar9 = *(uint *)(param_1 + 0xc);
    } while (uVar11 < uVar9);
  }
  uVar10 = 0;
  uVar8 = 0;
  if (uVar9 != 0) {
    iVar6 = 0;
    do {
      puVar2 = *(uint **)(iVar6 + *(int *)(param_1 + 0x18));
      uVar4 = ZEXT48(puVar2);
      if ((*puVar2 & 0xfff00000) != 0) {
        uVar9 = 0;
        if (puVar2[3] != 0) {
          iVar12 = 0;
          do {
            fn_82968878(param_1,*(undefined4 *)(iVar12 + *(int *)((int)uVar4 + 0x10)),uVar10,0);
            uVar9 = uVar9 + 1;
            iVar12 = iVar12 + 4;
          } while (uVar9 < *(uint *)((int)uVar4 + 0xc));
        }
        uVar9 = 0;
        if (*(int *)((int)uVar4 + 4) != 0) {
          iVar12 = 0;
          do {
            iVar3 = *(int *)(iVar12 + *(int *)((int)uVar4 + 8));
            if ((iVar3 != -1) &&
               (iVar5 = *(int *)(*(int *)(iVar3 * 4 + *(int *)(param_1 + 0x14)) + 0x38), iVar5 != -1
               )) {
              iVar3 = iVar5;
            }
            fn_82968878(param_1,iVar3,uVar10,1);
            uVar9 = uVar9 + 1;
            iVar12 = iVar12 + 4;
          } while (uVar9 < *(uint *)((int)uVar4 + 4));
        }
      }
      uVar8 = *(uint *)(param_1 + 0xc);
      uVar10 = uVar10 + 1;
      iVar6 = iVar6 + 4;
    } while ((uVar10 & 0xffffffff) < (ulonglong)uVar8);
  }
  uVar9 = 0;
  if (uVar8 != 0) {
    iVar6 = 0;
    do {
      iVar12 = *(int *)(iVar6 + *(int *)(param_1 + 0x18));
      if (*(int *)(iVar12 + 0x14) != 0) {
        fn_82965280(0xffffffff829b3a00,*(undefined4 *)(iVar12 + 0x18),*(int *)(iVar12 + 0x14),0);
        iVar3 = 1;
        uVar8 = 1;
        if (1 < *(uint *)(iVar12 + 0x14)) {
          iVar5 = 4;
          iVar7 = 4;
          iVar3 = 1;
          do {
            iVar1 = *(int *)(iVar12 + 0x18);
            if (*(int *)(iVar7 + iVar1) != ((undefined4 *)(iVar7 + iVar1))[-1]) {
              iVar3 = iVar3 + 1;
              *(undefined4 *)(iVar5 + iVar1) = *(undefined4 *)(iVar7 + iVar1);
              iVar5 = iVar5 + 4;
            }
            uVar8 = uVar8 + 1;
            iVar7 = iVar7 + 4;
          } while (uVar8 < *(uint *)(iVar12 + 0x14));
        }
        *(int *)(iVar12 + 0x14) = iVar3;
      }
      if (*(int *)(iVar12 + 0x1c) != 0) {
        fn_82965280(0xffffffff829b3a00,*(undefined4 *)(iVar12 + 0x20),*(int *)(iVar12 + 0x1c),0);
        iVar3 = 1;
        uVar8 = 1;
        if (1 < *(uint *)(iVar12 + 0x1c)) {
          iVar5 = 4;
          iVar7 = 4;
          iVar3 = 1;
          do {
            iVar1 = *(int *)(iVar12 + 0x20);
            if (*(int *)(iVar7 + iVar1) != ((undefined4 *)(iVar7 + iVar1))[-1]) {
              iVar3 = iVar3 + 1;
              *(undefined4 *)(iVar5 + iVar1) = *(undefined4 *)(iVar7 + iVar1);
              iVar5 = iVar5 + 4;
            }
            uVar8 = uVar8 + 1;
            iVar7 = iVar7 + 4;
          } while (uVar8 < *(uint *)(iVar12 + 0x1c));
        }
        *(int *)(iVar12 + 0x1c) = iVar3;
      }
      uVar9 = uVar9 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar9 < *(uint *)(param_1 + 0xc));
  }
  return 0;
}

