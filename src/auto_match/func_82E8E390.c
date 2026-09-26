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
extern int fn_82E83E90();
extern int fn_82E89640();
extern int fn_82E8D780();
extern int fn_82F02A98();
extern int fn_82F03028();
extern int fn_82F03248();
extern int fn_82F03E00();
extern int fn_82F07248();
extern int fn_82F0F9A0();
extern int fn_82F1DDA0();
extern int fn_82F65350();
extern int fn_82F691F0();


void fn_82E8E390(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar4 = fn_82E8D780();
  fn_82E83E90(iVar4,*(undefined4 *)(iVar4 + 0x2a0));
  if ((*(int *)(param_1 + 0x62c) == 0) || (uVar8 = 1, *(int *)(param_1 + 0x588) < 7)) {
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0x630) = uVar8;
  fn_82F1DDA0(param_1,*(undefined4 *)(param_1 + 0x588));
  if ((*(int *)(param_1 + 0xa0c) != 0) && (*(int *)(param_1 + 0x978) != 0)) {
    fn_82F07248(param_1);
  }
  if (*(int *)(param_1 + 0x7b38) == 0) {
    *(undefined4 *)(param_1 + 0xa44) = 0;
  }
  else if (*(int *)(param_1 + 0x6de4) == 0) {
    *(undefined4 *)(param_1 + 0xa48) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xa4c) = 0;
  }
  if ((*(int *)(param_1 + 0x1a74) != 0) && (*(int *)(param_1 + 0x64c) != 0)) {
    uVar5 = fn_82F65350();
    *(undefined4 *)(param_1 + 0x1c2c) = 0;
    *(uint *)(param_1 + 0x10) = uVar5 & 3;
    fn_82F03028(param_1);
    fn_82F02A98(param_1,*(undefined4 *)(param_1 + 0x10));
    fn_82F03248(param_1);
    fn_82F03E00(param_1);
  }
  if ((*(int *)(param_1 + 0x6d54) != 0) && (*(int *)(param_1 + 0x7b38) == 0)) {
    if (*(int *)(param_1 + 0x924) == 7) {
      *(undefined4 *)(param_1 + 0x924) = 2;
    }
    if ((*(int *)(param_1 + 0x924) == 0) || (*(int *)(param_1 + 0x924) == 2)) {
      uVar5 = 0;
      if (*(int *)(param_1 + 0x2d8) != 0) {
        iVar4 = 0;
        do {
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x1e54) + 0x54) = 3;
          *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x1e54) + 0x7c) = 0;
          iVar4 = iVar4 + 0x114;
        } while (uVar5 < *(uint *)(param_1 + 0x2d8));
      }
    }
    else {
      uVar5 = 0;
      if (*(int *)(param_1 + 0x2d8) != 0) {
        iVar4 = 0;
        do {
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x1e54) + 0x54) = 3;
          *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x1e54) + 0x7c) = 1;
          iVar4 = iVar4 + 0x114;
        } while (uVar5 < *(uint *)(param_1 + 0x2d8));
      }
    }
  }
  fn_82F0F9A0(param_1,1);
  fn_82E89640(param_1,*(undefined4 *)(param_1 + 0x2a0));
  if (*(int *)(param_1 + 0x6f90) != 0) {
    *(int *)(param_1 + 0x6f94) =
         (int)((*(double *)(*(int *)(param_1 + 0x75fc) + *(int *)(param_1 + 0x588) * 8 + -8) *
               (double)(longlong)*(int *)(param_1 + 0x75f8)) / (double)*(uint *)(param_1 + 0x2d8));
  }
  if (((5 < *(int *)(param_1 + 4)) && (0 < *(int *)(param_1 + 0x84c))) &&
     (*(int *)(param_1 + 0xaf0) != 4)) {
    if (*(int *)(param_1 + 0x7b38) == 0) {
      iVar4 = *(int *)(param_1 + 0x990);
      iVar1 = *(int *)(param_1 + 0x994);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x1ea8);
      iVar1 = *(int *)(param_1 + 0x1eac);
    }
    lVar10 = 0;
    if ((*(int *)(param_1 + 0x7b38) != 0) && (*(int *)(param_1 + 0x6de4) == 1)) {
      lVar10 = ((longlong)*(int *)(param_1 + 0x2d4) * (longlong)*(int *)(param_1 + 0x2d0) &
               0x3fffffffU) << 2;
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0x2d4) != 0) {
      do {
        uVar7 = 0;
        if (*(int *)(param_1 + 0x2d0) != 0) {
          do {
            uVar6 = ((longlong)(int)*(uint *)(param_1 + 0x2d0) * (longlong)(int)uVar5 & 0x7fffffffU)
                    * 2 + uVar7;
            uVar7 = uVar7 + 1;
            uVar6 = (uVar6 & 0x7fffffff) * 2 + lVar10;
            iVar2 = (int)((uVar6 & 0xffffffff) << 1);
            iVar3 = (int)((((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + uVar6 &
                          0xffffffff) << 1);
            *(undefined2 *)(iVar2 + iVar4) = 0x4000;
            *(undefined2 *)(iVar2 + iVar4 + 2) = 0x4000;
            *(undefined2 *)(iVar3 + iVar4) = 0x4000;
            *(undefined2 *)(iVar3 + iVar4 + 2) = 0x4000;
            *(undefined2 *)(iVar2 + iVar1) = 0x4000;
            *(undefined2 *)(iVar2 + iVar1 + 2) = 0x4000;
            *(undefined2 *)(iVar3 + iVar1) = 0x4000;
            *(undefined2 *)(iVar3 + iVar1 + 2) = 0x4000;
          } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x2d0));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x2d4));
    }
  }
  if (((0 < *(int *)(param_1 + 0x84c)) && (*(int *)(param_1 + 0xaf0) != 4)) &&
     (uVar5 = 0, *(int *)(param_1 + 0x2d4) != 0)) {
    do {
      uVar9 = 0;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        do {
          iVar4 = *(int *)(param_1 + 0x2d0) * uVar5 + uVar9;
          uVar9 = uVar9 + 1;
          *(undefined4 *)(iVar4 * 0x114 + *(int *)(param_1 + 0x1e6c) + 0x54) = 3;
        } while (uVar9 < *(uint *)(param_1 + 0x2d0));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x2d4));
  }
  if (*(int *)(param_1 + 0x5c8) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(undefined4 *)(param_1 + 0x5dc),0xff,
                 ((longlong)*(int *)(param_1 + 0x2d0) * (longlong)*(int *)(param_1 + 0x2d4) &
                 0x7fffffffU) << 1);
  }
  return;
}

