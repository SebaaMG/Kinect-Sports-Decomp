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
extern int fn_82262618();
extern int fn_82262708();
extern int fn_822B17A8();
extern int fn_82414950();
extern int fn_82417F58();
extern int fn_8241F440();
extern int fn_82424C80();
extern int fn_82508078();
extern int fn_82536590();
extern int fn_82F622E0();
extern unsigned int lbl_821CC160;


void fn_82423DD8(int *param_1,int param_2,int param_3,undefined8 param_4,undefined4 *param_5,
                  undefined4 *param_6,int *param_7,undefined4 *param_8)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  uVar6 = (**(code **)(*param_1 + 0x6c))();
  *param_5 = uVar6;
  *param_6 = 1;
  *param_7 = param_1[0x14];
  *param_8 = lbl_821CC160;
  if ((*(int *)(param_2 + 0x20) == 0) && (*(int *)(param_2 + 0x24) == 0)) {
    if (*(int *)(param_3 + 4) == 0) {
      iVar7 = param_1[2];
      if (param_1[1] == *(int *)(iVar7 + 0x2b20)) {
        if (param_1[7] == param_1[8]) {
          uVar6 = *(undefined4 *)(param_1[1] + 0x40c);
          uVar3 = *(undefined4 *)(param_1[1] + 0x18);
          if ((*(int *)(iVar7 + 0xa0) == 0) ||
             (uVar5 = 1, *(int *)(*(int *)(iVar7 + 0xa0) + 0x40) != 1)) {
            uVar5 = 0;
          }
          uVar4 = *(undefined4 *)(param_2 + 0x40);
          iVar10 = 0;
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(param_2 + 0x44);
          iVar10 = *(int *)(iVar9 * 0x10 + param_1[7]);
          iVar11 = iVar10 * 0x10 + param_1[0xb];
          piVar1 = *(int **)(iVar11 + 0xc);
          uVar2 = *(uint *)(iVar11 + 8);
          iVar11 = *piVar1;
          if ((uint)(piVar1[1] - iVar11 >> 2) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            fn_82F622E0(0xffffffff821ae698);
          }
          uVar6 = *(undefined4 *)(param_1[1] + 0x40c);
          uVar3 = *(undefined4 *)(param_1[1] + 0x18);
          if ((*(int *)(iVar7 + 0xa0) == 0) ||
             (uVar5 = 1, *(int *)(*(int *)(iVar7 + 0xa0) + 0x40) != 1)) {
            uVar5 = 0;
          }
          uVar4 = *(undefined4 *)(uVar2 * 4 + iVar11);
        }
        fn_82262708(*(undefined4 *)(param_1[1] + 0x408),uVar5,uVar3,uVar6,
                        *(undefined4 *)(param_2 + 0x30),iVar9,iVar10,uVar4);
      }
      *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
      fn_82536590((ulonglong)(uint)param_1[2] + 0x1580,0);
      if ((((9 < *(uint *)(param_2 + 0x30)) && (iVar7 = fn_82417F58(param_1[1]), iVar7 != 0)) &&
          (*(int *)(iVar7 + 0x24) != 0)) &&
         (iVar7 = *(int *)(*(int *)(iVar7 + 0x24) + 0x34), iVar7 != 0)) {
        fn_822B17A8(iVar7,0x10,0);
      }
      iVar7 = param_1[1];
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      fn_8241F440(iVar7,param_2);
      iVar7 = *(int *)(param_2 + 0x14);
      if (iVar7 == 1) {
        uVar8 = 9;
      }
      else if (iVar7 == 2) {
        uVar8 = 10;
      }
      else if (iVar7 == 3) {
        uVar8 = 0xb;
      }
      else {
        uVar8 = 0xc;
      }
      fn_82414950(*(undefined4 *)(param_1[2] + 0x2b50),iVar7,uVar8);
      if ((param_1[0x10] == 0) || (*(uint *)(param_2 + 0x30) < (uint)param_1[0x11])) {
        if ((*(int *)(param_1[2] + 0xa0) == 0) ||
           (*(int *)(*(int *)(param_1[2] + 0xa0) + 0x40) != 1)) {
          if ((*(int *)(param_2 + 0x170) == 0) ||
             (*(int *)(param_2 + 0x30) != *(int *)(param_2 + 0x170))) {
            *(undefined4 *)(param_2 + 0x1c) = 0;
            if (param_1[1] == *(int *)(param_1[2] + 0x2b20)) {
              fn_82508078(*(undefined4 *)(param_1[2] + 0xa4),0xffffffff821b8664,0);
            }
          }
          else {
            *(undefined4 *)(param_2 + 0x1c) = 1;
          }
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x20) = 1;
        if (*(uint *)(param_2 + 0x170) < *(uint *)(param_2 + 0x30)) {
          *(undefined4 *)(param_2 + 0x28) = 1;
          *(undefined4 *)(param_2 + 0x2c) = 1;
        }
        *(undefined4 *)(param_2 + 0x40) = 0;
      }
    }
    if ((param_1[0x13] != 0) || (*(int *)(param_3 + 4) != 0)) {
      iVar7 = param_1[2];
      if (param_1[1] == *(int *)(iVar7 + 0x2b20)) {
        if (param_1[7] == param_1[8]) {
          uVar6 = *(undefined4 *)(param_1[1] + 0x40c);
          uVar3 = *(undefined4 *)(param_1[1] + 0x18);
          if ((*(int *)(iVar7 + 0xa0) == 0) ||
             (uVar5 = 1, *(int *)(*(int *)(iVar7 + 0xa0) + 0x40) != 1)) {
            uVar5 = 0;
          }
          uVar4 = *(undefined4 *)(param_2 + 0x40);
          iVar10 = 0;
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(param_2 + 0x44);
          iVar10 = *(int *)(iVar9 * 0x10 + param_1[7]);
          iVar11 = iVar10 * 0x10 + param_1[0xb];
          piVar1 = *(int **)(iVar11 + 0xc);
          uVar2 = *(uint *)(iVar11 + 8);
          iVar11 = *piVar1;
          if ((uint)(piVar1[1] - iVar11 >> 2) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            fn_82F622E0(0xffffffff821ae698);
          }
          uVar6 = *(undefined4 *)(param_1[1] + 0x40c);
          uVar3 = *(undefined4 *)(param_1[1] + 0x18);
          if ((*(int *)(iVar7 + 0xa0) == 0) ||
             (uVar5 = 1, *(int *)(*(int *)(iVar7 + 0xa0) + 0x40) != 1)) {
            uVar5 = 0;
          }
          uVar4 = *(undefined4 *)(uVar2 * 4 + iVar11);
        }
        fn_82262618(*(undefined4 *)(param_1[1] + 0x408),uVar5,uVar3,uVar6,
                          *(undefined4 *)(param_2 + 0x30),iVar9,iVar10,uVar4);
      }
    }
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    iVar7 = param_1[7];
    if (iVar7 != param_1[8]) {
      iVar10 = *(int *)(param_2 + 0x44) * 0x10;
      iVar11 = *(int *)(iVar10 + iVar7) * 0x10 + param_1[0xb];
      iVar9 = *(int *)(iVar11 + 8);
      piVar1 = *(int **)(iVar11 + 4);
      *(int *)(iVar11 + 8) = iVar9 + 1;
      if ((uint)((piVar1[1] - *piVar1) / 0x1f0) <= iVar9 + 1U) {
        *(undefined4 *)(iVar11 + 8) = 0;
        if (*piVar1 != piVar1[1]) {
          fn_82424C80();
        }
      }
      if (*(uint *)(iVar10 + iVar7 + 4) <= *(uint *)(param_2 + 0x40)) {
        iVar7 = *(int *)(param_2 + 0x44) * 0x10 + param_1[7];
        if (*(int *)(iVar7 + 8) == 0) {
          uVar12 = *(int *)(param_2 + 0x44) + 1;
          uVar2 = param_1[8] - param_1[7] >> 4;
          iVar7 = uVar12 - (uVar12 / uVar2) * uVar2;
        }
        else {
          iVar7 = *(int *)(iVar7 + 0xc);
        }
        *(int *)(param_2 + 0x44) = iVar7;
        *(undefined4 *)(param_2 + 0x40) = 0;
        *(int *)(param_2 + 0x1a8) = *(int *)(param_2 + 0x1a8) + 1;
      }
    }
    *(int *)(param_2 + 0xd0) = *(int *)(param_2 + 0xd0) + 1;
    if ((param_1[0x13] != 0) || (*(int *)(param_3 + 4) != 0)) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + -1;
      if (*(int *)(param_3 + 4) != 0) {
        fn_82536590((ulonglong)(uint)param_1[2] + 0xe20,0);
        iVar7 = param_1[1];
        *(undefined4 *)(param_2 + 0x14) = 0;
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
        fn_8241F440(iVar7,param_2);
        fn_82536590((ulonglong)(uint)param_1[2] + 0x157c,0);
      }
      if (*(int *)(param_2 + 0x3c) == 0) {
        *(undefined4 *)(param_2 + 0x20) = 1;
        if (*(uint *)(param_2 + 0x170) < *(uint *)(param_2 + 0x30)) {
          *(undefined4 *)(param_2 + 0x28) = 1;
          *(undefined4 *)(param_2 + 0x2c) = 1;
        }
        *(undefined4 *)(param_2 + 0x40) = 0;
      }
      else if (*(int *)(param_3 + 4) != 0) {
        fn_82414950(*(undefined4 *)(param_1[2] + 0x2b50),0,0x16);
        if (param_1[1] == *(int *)(param_1[2] + 0x2b20)) {
          fn_82508078(*(undefined4 *)(param_1[2] + 0xa4),0xffffffff821b867c,0);
        }
      }
    }
    if (param_1[0x12] != 0) {
      *(undefined4 *)(param_2 + 0x20) = 0;
      *(undefined4 *)(param_2 + 0x24) = 1;
    }
  }
  return;
}

