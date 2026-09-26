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
extern int fn_82437EC8();
extern int fn_8243B890();
extern unsigned int lbl_821CC160;


void fn_8243A0B0(int param_1,ulonglong param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  double dVar10;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 0x40) + 0x1ec);
  *(int *)(*(int *)(param_1 + 0x40) + 0x1ec) = (int)param_2;
  if (((int)param_2 == 0) && (*(int *)(*(int *)(param_1 + 0x40) + 0x2b0) == 0)) {
    fn_8243B890();
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2b0) = 1;
  }
  fVar2 = lbl_821CC160;
  iVar6 = *(int *)(param_1 + 0x40);
  dVar10 = (double)lbl_821CC160;
  if (*(int *)(iVar6 + 0x1d4) == -1) {
    *(undefined4 *)(iVar6 + 0x1d4) = 0;
LAB_8243a224:
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x1d4) == -1) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(*(int *)(*(int *)(param_1 + 0x40) + 0x1d4) * 4 +
                        *(int *)(*(int *)(param_1 + 0x40) + 0x1c4));
    }
  }
  else {
    if (*(int *)(param_1 + 0x14) == 7) {
      return;
    }
    piVar8 = *(int **)(*(int *)(*(int *)(param_1 + 0x40) + 0x1d4) * 4 +
                      *(int *)(*(int *)(param_1 + 0x40) + 0x1c4));
    if (param_2 != uVar3) {
      if (*(int *)(piVar8[0x10] + 0x14c) + 1U < *(uint *)(piVar8[0x10] + 0x158)) {
        bVar9 = true;
      }
      else {
        bVar9 = (ulonglong)*(uint *)(piVar8[0x10] + 0x148) + 1 <
                (ulonglong)*(uint *)(piVar8[0x10] + 0x154);
      }
      if ((!bVar9) || (*(char *)(iVar6 + 0x214) != '\0')) {
        *(undefined1 *)(*(int *)(param_1 + 0x40) + 0x214) = 0;
        *(int *)(*(int *)(param_1 + 0x40) + 0x1d4) = *(int *)(*(int *)(param_1 + 0x40) + 0x1d4) + 1;
        goto LAB_8243a224;
      }
      iVar6 = piVar8[0x10];
      if ((*(int *)(iVar6 + 0xf8) == 0) && (*(int *)(iVar6 + 0x14c) + 1U < *(uint *)(iVar6 + 0x158))
         ) {
        *(int *)(iVar6 + 0x14c) = *(int *)(iVar6 + 0x14c) + 1;
      }
      else {
        *(undefined4 *)(piVar8[0x10] + 0x14c) = 0;
        *(int *)(piVar8[0x10] + 0x148) = *(int *)(piVar8[0x10] + 0x148) + 1;
      }
      *(float *)(piVar8[0x10] + 0x18c) = fVar2;
      *(undefined4 *)(piVar8[0x10] + 0x168) = *(undefined4 *)(piVar8[0x10] + 0x164);
    }
  }
  (**(code **)(*piVar8 + 0x10))();
  iVar6 = *(int *)(param_1 + 0x40);
  if (*(int *)(iVar6 + 0x1d4) == -1) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x1d4) * 4 +
                    *(int *)(*(int *)(param_1 + 0x40) + 0x1c4));
  }
  if (*(int *)(*(int *)(iVar7 + 0x40) + 0xf8) == 0) {
    if (*(int *)(iVar6 + 0x1d4) == -1) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x1d4) * 4 +
                      *(int *)(*(int *)(param_1 + 0x40) + 0x1c4));
    }
    iVar4 = 1;
    if (*(int *)(*(int *)(iVar7 + 0x40) + 0x114) != 5) goto LAB_8243a2d8;
  }
  iVar4 = 0;
LAB_8243a2d8:
  piVar8 = (int *)(iVar6 + 0x350);
  uVar3 = 0;
  if (*(int *)(iVar6 + 0x354) - *(int *)(iVar6 + 0x350) >> 3 != 0) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(iVar6 + *piVar8);
      iVar7 = **(int **)(iVar1 + 4);
      if (iVar7 != 0) {
        iVar7 = *(int *)(iVar7 + 400);
        if (iVar4 == 0) {
          if (iVar7 != 0) {
            *(undefined4 *)(**(int **)(iVar7 + 400) + 0x118) = 1;
          }
        }
        else if (iVar7 != 0) {
          *(undefined4 *)(**(int **)(iVar7 + 400) + 0x118) = 0;
        }
      }
      *(int *)(*(int *)(iVar1 + 4) + 0x28) = iVar4;
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x350) + iVar6);
      iVar7 = **(int **)(iVar1 + 4);
      if ((iVar7 != 0) && (iVar5 = *(int *)(iVar7 + 0x1d0), iVar5 == iVar4)) {
        if (iVar4 == 0) {
          iVar5 = iVar5 + 1;
        }
        else {
          iVar5 = iVar5 + -1;
        }
        *(int *)(iVar7 + 0x1d0) = iVar5;
      }
      uVar3 = uVar3 + 1;
      iVar6 = iVar6 + 8;
      *(int *)(*(int *)(iVar1 + 4) + 0x2c) = iVar4;
      piVar8 = (int *)(*(int *)(param_1 + 0x40) + 0x350);
    } while (uVar3 < (uint)(*(int *)(*(int *)(param_1 + 0x40) + 0x354) - *piVar8 >> 3));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2e0) = 0;
  *(float *)(*(int *)(param_1 + 0x40) + 0x2e8) = (float)dVar10;
  *(float *)(*(int *)(param_1 + 0x40) + 0x2ec) = (float)dVar10;
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x340) = 0xffffffff;
  fn_82437EC8(param_1,2);
  return;
}

