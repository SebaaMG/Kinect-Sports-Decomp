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
extern int fn_826957D0();
extern int fn_82696958();
extern int fn_826972E0();
extern int fn_82799DA8();
extern int fn_82799E00();
extern unsigned int lbl_82005710;


void fn_82722D30(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar4 = (**(code **)(**(int **)(param_1 + 8) + 8))(), iVar4 == 4)) {
    piVar8 = (int *)(*(int *)(param_1 + 8) + -0x68);
    if (*(int *)(param_1 + 8) == 0) {
      piVar8 = (int *)0x0;
    }
    if (((int *)piVar8[0x34] == (int *)0x0) || (bVar2 = true, *(int *)piVar8[0x34] == 0)) {
      bVar2 = false;
    }
    if (!bVar2) {
      iVar4 = *(int *)(param_1 + 0x1c);
      if (iVar4 == 1) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        iVar4 = fn_82696958(uVar3,uVar1);
        if (iVar4 == 0) {
          return;
        }
        iVar5 = (**(code **)(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10);
        if (iVar5 != 0x1e) {
          return;
        }
        fn_82799DA8(piVar8[0x28],iVar4 + 0x30,0,0xffffffffffffffff);
        uVar7 = 0xffffffffffffffff;
        uVar6 = 0;
      }
      else if (iVar4 == 2) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,1);
        iVar4 = fn_82696958(uVar3,uVar1);
        if (iVar4 == 0) {
          return;
        }
        iVar5 = (**(code **)(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10);
        if (iVar5 != 0x1e) {
          return;
        }
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        dVar9 = (double)fn_826972E0(uVar3,uVar1);
        if (dVar9 < lbl_82005710) {
          return;
        }
        uVar6 = (longlong)dVar9 & 0xffffffff;
        uVar7 = uVar6 + 1;
        fn_82799DA8(piVar8[0x28],iVar4 + 0x30,uVar6,uVar7);
      }
      else {
        if (iVar4 < 3) {
          return;
        }
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,2);
        iVar4 = fn_82696958(uVar3,uVar1);
        if (iVar4 == 0) {
          return;
        }
        iVar5 = (**(code **)(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10);
        if (iVar5 != 0x1e) {
          return;
        }
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        dVar9 = (double)fn_826972E0(uVar3,uVar1);
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        if (dVar9 < 0.0) {
          dVar9 = lbl_82005710;
        }
        dVar11 = lbl_82005710;
        uVar3 = fn_826957D0(param_1,1);
        dVar10 = (double)fn_826972E0(uVar3,uVar1);
        if (dVar10 < 0.0) {
          dVar10 = dVar11;
        }
        if (dVar10 < dVar9) {
          return;
        }
        uVar6 = (longlong)dVar9 & 0xffffffff;
        uVar7 = (longlong)dVar10 & 0xffffffff;
        fn_82799DA8(piVar8[0x28],iVar4 + 0x30,uVar6,uVar7);
      }
      fn_82799E00(piVar8[0x28],iVar4 + 0x5c,uVar6,uVar7);
      iVar4 = (**(code **)(*piVar8 + 0x40))(piVar8);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 0xb00) = *(uint *)(iVar4 + 0xb00) | 0x400;
      }
    }
  }
  return;
}

