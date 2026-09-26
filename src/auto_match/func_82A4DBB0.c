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
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82A4DBB0(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 *param_5,int param_6)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar6;
  ulonglong uVar5;
  code *pcVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  
  iVar4 = *(int *)(param_1 + 0xbc);
  if (iVar4 != 0) {
    sync(1);
    *(undefined4 *)(param_1 + 0xe8) = 1;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(int *)(param_1 + 0xb8) = iVar4;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  pcVar7 = *(code **)(param_1 + 0xe0);
  if (param_3[1] == 0) {
    if (*(int *)(param_1 + 0x104) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x54),0,*(int *)(param_1 + 0x60) << 2);
    }
    if (*(int *)(param_1 + 0xfc) != 0) {
      param_5[1] = 0;
    }
  }
  else {
    piVar9 = (int *)(param_1 + 0x24);
    dVar12 = (double)lbl_82002AE0;
    *(undefined4 *)(param_1 + 0x24) = *param_3;
    if (*(int *)(param_1 + 0x104) != 0) {
      if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(undefined4 *)(param_1 + 0x54),0,*(int *)(param_1 + 0x60) << 2);
      }
      iVar4 = *(int *)(param_1 + 0xa0);
      dVar11 = (double)*(float *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0xa8);
      *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0xa4);
      *(int *)(param_1 + 100) = iVar4;
      if (iVar4 == 0) {
        if (dVar11 == (double)lbl_821AAD20) goto LAB_82a4dcbc;
      }
      if ((iVar4 == 2) && (dVar11 == dVar12)) {
LAB_82a4dcbc:
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(undefined4 *)(param_1 + 0x54),0,*(int *)(param_1 + 0x60) << 2);
      }
      *(undefined4 *)(param_1 + 0x4c) = *param_3;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0xd8);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x60) * param_3[2];
      (**(code **)(param_1 + 0xe4))(param_1 + 0x4c);
      *piVar9 = *(int *)(param_1 + 0xd8);
    }
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x28) = *param_5;
    uVar8 = param_3[2] * *(int *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 0xf0) == 0) {
      fn_82F68CC0(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xb0),
                   ((longlong)*(int *)(param_1 + 0x40) * (longlong)*(int *)(param_1 + 0x3c) &
                   0x3fffffffU) << 2);
      *(undefined4 *)(param_1 + 0xf4) = 0;
      *(undefined4 *)(param_1 + 0xf0) = 1;
    }
    if ((*(int *)(param_1 + 0xf4) != 0) && (uVar8 != 0)) {
      uVar1 = *(uint *)(param_1 + 0xcc);
      uVar10 = uVar1 * *(int *)(param_1 + 0x3c);
      if (uVar8 < uVar10) {
        uVar10 = uVar8;
      }
      uVar8 = uVar8 - uVar10;
      uVar3 = 0;
      if (*(int *)(param_1 + 0x40) != 0) {
        do {
          uVar6 = 0;
          if (*(int *)(param_1 + 0x3c) != 0) {
            do {
              iVar4 = uVar3 * *(int *)(param_1 + 0x3c) + uVar6;
              uVar6 = uVar6 + 1;
              iVar4 = iVar4 * 4;
              *(float *)(iVar4 + *(int *)(param_1 + 0xd4)) =
                   (*(float *)(iVar4 + *(int *)(param_1 + 0xb0)) -
                   *(float *)(iVar4 + *(int *)(param_1 + 0xd0))) * (float)(dVar12 / (double)uVar1);
            } while (uVar6 < *(uint *)(param_1 + 0x3c));
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 0x40));
      }
      pcVar2 = *(code **)(param_1 + 0xdc);
      if (((*(code **)(param_1 + 0xac) == pcVar2) &&
          (pcVar7 = pcVar2, (*(uint *)(param_1 + 0xb4) & 1) != 0)) &&
         (*(uint *)(param_1 + 0xb4) == *(uint *)(param_1 + 0xec))) {
        uVar1 = *(uint *)(param_1 + 0x3c);
        if (uVar1 == 1) {
          *(undefined4 *)(param_1 + 0x48) = 1;
        }
        else if ((4 < uVar1) || (uVar1 == 3)) {
          pcVar7 = *(code **)(param_1 + 0xe0);
        }
      }
      *(uint *)(param_1 + 0x38) = uVar10;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xd0);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0xd4);
    }
    if ((*(int *)(param_1 + 0xfc) == 0) && (param_5[1] != 0)) {
      *(undefined4 *)(param_1 + 0x44) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0;
      param_5[1] = 1;
    }
    if (uVar10 != 0) {
      (*pcVar7)(piVar9);
      iVar4 = *(int *)(param_1 + 0xc4);
      if (iVar4 == 4) {
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x38);
        iVar4 = *(uint *)(param_1 + 0x38) * 4 + *piVar9;
      }
      else if (iVar4 == 3) {
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x38);
        iVar4 = *(uint *)(param_1 + 0x38) * 3 + *piVar9;
      }
      else {
        uVar10 = *(uint *)(param_1 + 0x38);
        uVar5 = (ulonglong)uVar10;
        if (iVar4 == 2) {
          iVar4 = uVar10 * 2 + *piVar9;
        }
        else {
          iVar4 = uVar10 + *piVar9;
        }
      }
      uVar10 = *(uint *)(param_1 + 0x3c);
      *piVar9 = iVar4;
      trapWord(6,(ulonglong)uVar10,0);
      *(int *)(param_1 + 0x28) =
           (int)(uVar5 / uVar10) * *(int *)(param_1 + 0x40) * 4 + *(int *)(param_1 + 0x28);
      fn_82F68CC0(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xb0),
                   ((longlong)*(int *)(param_1 + 0x40) * (longlong)(int)uVar10 & 0x3fffffffU) << 2);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    if (uVar8 != 0) {
      if ((*(uint *)(param_1 + 0xb4) & 1) != 0) {
        *(undefined4 *)(param_1 + 0x48) = 1;
      }
      *(uint *)(param_1 + 0x38) = uVar8;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xb0);
      (**(code **)(param_1 + 0xac))(piVar9);
    }
  }
  param_5[2] = param_3[2];
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xac);
  return;
}

