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
extern int fn_82BD6378();
extern int fn_82BD7EF8();
extern int fn_82BDA7C0();
extern int fn_82BDC1F0();
extern int fn_8314309C();


longlong fn_82BD6D20(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  
  fn_82BD6378();
  if (*(int *)(param_1 + 4) == 1) {
    lVar3 = 0;
  }
  else {
    piVar8 = (int *)(param_1 + 0x58);
    piVar1 = *(int **)(param_1 + 0x58);
    while ((piVar1 != (int *)0x0 && (*(int *)*piVar1 != 0x103))) {
      iVar5 = *piVar8;
      if (iVar5 != 0) {
        if (iVar5 == *(int *)(param_1 + 0x5c)) {
          *(undefined4 *)(param_1 + 0x5c) = 0;
        }
        *piVar8 = *(int *)(iVar5 + 4);
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      iVar5 = *piVar1;
      if (*(int *)(iVar5 + 0x14) == 1) {
        *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) << 2;
        *(undefined4 *)(*piVar1 + 0x14) = 0;
      }
      *(undefined4 *)(*piVar1 + 4) = 0;
      uVar4 = KfAcquireSpinLock(param_1 + 0x50);
      piVar1[1] = 0;
      if (*(int *)(param_1 + 0x44) == 0) {
        *(int **)(param_1 + 0x40) = piVar1;
      }
      else {
        *(int **)(*(int *)(param_1 + 0x44) + 4) = piVar1;
      }
      *(int **)(param_1 + 0x44) = piVar1;
      KfReleaseSpinLock(param_1 + 0x50,uVar4);
      piVar1 = (int *)*piVar8;
    }
    piVar1 = *(int **)(param_1 + 0x48);
    piVar7 = (int *)(param_1 + 0x48);
    while( true ) {
      if ((piVar1 == (int *)0x0) || (*(int *)(*piVar1 + 0xc) != *(int *)(*piVar1 + 4)))
      goto LAB_82bd6f24;
      iVar9 = param_1 + 0x50;
      uVar4 = KfAcquireSpinLock(iVar9);
      iVar5 = fn_82BD7EF8(piVar8);
      if ((iVar5 == 0) && (uVar6 = fn_82BD7EF8(piVar7), uVar6 < 2)) break;
      iVar5 = *piVar7;
      if (iVar5 != 0) {
        if (iVar5 == *(int *)(param_1 + 0x4c)) {
          *(undefined4 *)(param_1 + 0x4c) = 0;
        }
        *piVar7 = *(int *)(iVar5 + 4);
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      KfReleaseSpinLock(iVar9,uVar4);
      piVar1[1] = 0;
      if (*(int *)(param_1 + 0x5c) == 0) {
        *piVar8 = (int)piVar1;
      }
      else {
        *(int **)(*(int *)(param_1 + 0x5c) + 4) = piVar1;
      }
      *(int **)(param_1 + 0x5c) = piVar1;
      uVar2 = *(undefined4 *)(*piVar1 + 8);
      fn_82BDA7C0(0,uVar2,uVar2,*(uint *)(*piVar1 + 0xc) >> 1,param_1 + 0x60);
      *(uint *)(*piVar1 + 0xc) = *(uint *)(*piVar1 + 0xc) >> 2;
      *(undefined4 *)(*piVar1 + 0x14) = 1;
      iVar5 = fn_8314309C(*(undefined4 *)(param_1 + 0xc),0,*piVar1);
      if (iVar5 < 0) {
        *(undefined4 *)*piVar1 = 0;
        goto LAB_82bd6f24;
      }
      piVar1 = (int *)*piVar7;
    }
    KfReleaseSpinLock(iVar9,uVar4);
LAB_82bd6f24:
    lVar3 = fn_82BDC1F0(*(undefined4 *)(param_1 + 8));
    if ((-1 < lVar3) && (uVar6 = 0, *(int *)(param_1 + 0x2c) != 0)) {
      puVar10 = (undefined4 *)(param_1 + 0xc);
      do {
        puVar10 = puVar10 + 1;
        (**(code **)(*(int *)*puVar10 + 0x10))();
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x2c));
    }
  }
  return lVar3;
}

