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
extern int fn_82B7BD28();
extern int fn_82BA08F8();
extern int fn_82BC4DC8();
extern int fn_82BC5030();
extern int fn_82BC5080();
extern int fn_82BC5B00();


void fn_82BC51D8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  
  iVar1 = *(int *)(param_1[8] + 0xa4);
  if (*(int *)(iVar1 + 0x48) == 0) {
    for (iVar10 = *(int *)(param_1[8] + 0x88); *(int *)(iVar10 + 8) != 0;
        iVar10 = *(int *)(iVar10 + 8)) {
      *(undefined4 *)(iVar10 + 0x4c) = *(undefined4 *)(iVar10 + 0x48);
    }
  }
  fn_82BC5080(param_1,iVar1);
  fn_82BA08F8(param_1[8],param_1[6],param_1[7]);
  uVar12 = param_1[7];
  if (1 < uVar12) {
    iVar10 = uVar12 << 2;
    do {
      iVar9 = 0;
      iVar4 = *(int *)(iVar10 + param_1[6]);
      for (uVar13 = 1; iVar7 = *(int *)(iVar4 + 0x3c), uVar13 <= *(uint *)(iVar7 + 4);
          uVar13 = uVar13 + 1) {
        iVar2 = param_1[1];
        iVar7 = fn_82BC5030(param_1,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 8) + iVar9) + 0x48))
        ;
        uVar5 = *(uint *)(iVar7 * 4 + iVar2);
        if (uVar5 < *(uint *)(iVar10 + iVar2)) {
          *(uint *)(iVar10 + iVar2) = uVar5;
        }
        iVar9 = iVar9 + 4;
      }
      uVar3 = *(undefined4 *)(param_1[9] + 0x5b0);
      puVar8 = (undefined4 *)fn_82B7BD28(uVar3,0xc);
      puVar11 = puVar8 + 1;
      *puVar8 = uVar3;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)0x0;
      }
      else {
        *puVar11 = 0;
        puVar8[2] = 0;
      }
      *puVar11 = uVar12;
      puVar11[1] = *(uint *)(*(int *)(iVar10 + param_1[1]) * 4 + param_1[5]);
      *(uint **)(*(int *)(iVar10 + param_1[1]) * 4 + param_1[5]) = puVar11;
      *(undefined4 *)(iVar10 + param_1[3]) = *(undefined4 *)(iVar10 + *param_1);
      for (piVar6 = *(int **)(*(int *)(iVar10 + *param_1) * 4 + param_1[5]); piVar6 != (int *)0x0;
          piVar6 = (int *)piVar6[1]) {
        iVar4 = *piVar6;
        iVar9 = fn_82BC5030(param_1,iVar4);
        iVar4 = iVar4 * 4;
        if (*(int *)(iVar4 + param_1[1]) == *(int *)(iVar9 * 4 + param_1[1])) {
          *(undefined4 *)(param_1[2] + iVar4) = *(undefined4 *)(iVar4 + param_1[1]);
        }
        else {
          *(int *)(param_1[2] + iVar4) = iVar9;
        }
      }
      uVar12 = uVar12 - 1;
      iVar10 = iVar10 + -4;
    } while (1 < uVar12);
  }
  uVar13 = 2;
  *(undefined4 *)(param_1[2] + 4) = 0;
  uVar12 = param_1[7];
  if (1 < uVar12) {
    iVar10 = 8;
    do {
      if (*(int *)(param_1[2] + iVar10) != *(int *)(iVar10 + param_1[1])) {
        iVar4 = param_1[2];
        *(undefined4 *)(iVar10 + iVar4) = *(undefined4 *)(*(int *)(iVar10 + iVar4) * 4 + iVar4);
      }
      uVar12 = param_1[7];
      uVar13 = uVar13 + 1;
      iVar10 = iVar10 + 4;
    } while (uVar13 <= uVar12);
  }
  uVar13 = 1;
  if (uVar12 != 0) {
    do {
      if (uVar13 == 1) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(*(int *)(uVar13 * 4 + param_1[2]) * 4 + param_1[6]);
      }
      *(int *)(*(int *)(uVar13 * 4 + param_1[6]) + 0x54) = iVar10;
      if (iVar10 != 0) {
        fn_82BC5B00();
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 <= (uint)param_1[7]);
  }
  fn_82BC4DC8(param_1);
  if (*(int *)(iVar1 + 0x4c) == 0) {
    for (iVar1 = *(int *)(param_1[8] + 0x88); *(int *)(iVar1 + 8) != 0; iVar1 = *(int *)(iVar1 + 8))
    {
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + 0x4c);
    }
  }
  return;
}

