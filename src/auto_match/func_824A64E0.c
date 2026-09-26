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
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern int fn_82230040();
extern int fn_824A6728();
extern int fn_8265C9E0();
extern unsigned int lbl_821CC160;
extern unsigned int uRam831c54e0;
extern unsigned int uStack_50;


void fn_824A64E0(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar10;
  int *piVar11;
  ulonglong uVar9;
  uint uVar12;
  uint uStack_50;
  undefined1 auStack_4c [4];
  undefined4 auStack_48 [2];
  undefined8 auStack_40 [8];
  
  (**(code **)*param_2)(param_2,auStack_4c,&uStack_50);
  (**(code **)(*param_2 + 4))(param_2,(ulonglong)uStack_50,auStack_48);
  (**(code **)(*param_2 + 4))(param_2,(ulonglong)uStack_50 - 1,auStack_48);
  uVar7 = (ulonglong)uRam831c54e0;
  uVar8 = uVar7;
  if ((*(uint *)(param_1 + 0x48) & 3) == 0) {
    if ((ulonglong)*(uint *)(param_1 + 0x44) <=
        ((ulonglong)*(uint *)(param_1 + 0x4c) + 4 & 0xffffffff) >> 2) {
      fn_824A6728((int *)(param_1 + 0x3c));
      uVar8 = (ulonglong)uRam831c54e0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x48);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x44) << 2;
  }
  uVar12 = iVar4 - 1;
  uVar1 = uVar12 & 0xfffffffc;
  if (*(int *)(uVar1 + *(int *)(param_1 + 0x40)) == 0) {
    iVar4 = fn_8265C9E0(0x10);
    if (iVar4 == 0) {
      auStack_40[0] = 0x82002b0400000000;
                    /* WARNING: Subroutine does not return */
      fn_82230040(auStack_40);
    }
    uVar8 = (ulonglong)uRam831c54e0;
    *(int *)(uVar1 + *(int *)(param_1 + 0x40)) = iVar4;
  }
  puVar10 = (undefined4 *)(*(int *)(uVar1 + *(int *)(param_1 + 0x40)) + (uVar12 & 3) * 4);
  if (puVar10 != (undefined4 *)0x0) {
    *puVar10 = auStack_48[0];
  }
  *(uint *)(param_1 + 0x48) = uVar12;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  while (uVar1 = *(uint *)(param_1 + 0x4c), uVar7 < uVar1) {
    if ((ulonglong)*(uint *)(param_1 + 0x4c) != 0) {
      lVar5 = (ulonglong)*(uint *)(param_1 + 0x4c) - 1;
      *(int *)(param_1 + 0x4c) = (int)lVar5;
      if (lVar5 == 0) {
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
    }
  }
  if (uVar1 <= uVar8) {
    uVar8 = (ulonglong)uVar1;
  }
  lVar5 = 0;
  fVar3 = lbl_821CC160;
  if (uVar8 != 0) {
    piVar2 = *(int **)(param_1 + 0x3c);
    uVar7 = uVar8;
    do {
      piVar11 = (int *)0x0;
      if ((piVar2 != (int *)0x0) && (puVar10 = (undefined4 *)*piVar2, puVar10 != (undefined4 *)0x0))
      {
        piVar11 = (int *)*puVar10;
      }
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x48) + lVar5;
      if (((piVar11 == (int *)0x0) || ((int *)*piVar11 == (int *)0x0)) ||
         (piVar11 = *(int **)*piVar11, piVar11 == (int *)0x0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar11;
      }
      uVar9 = (uVar6 & 0xffffffff) >> 2;
      if (*(uint *)(iVar4 + 8) <= uVar9) {
        uVar9 = uVar9 - *(uint *)(iVar4 + 8);
      }
      lVar5 = lVar5 + 1;
      fVar3 = *(float *)(*(int *)((int)((uVar9 & 0xffffffff) << 2) + *(int *)(iVar4 + 4)) +
                        (int)((uVar6 & 3) << 2)) + fVar3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  *(float *)(param_1 + 0x54) = fVar3 / (float)uVar8;
  return;
}

