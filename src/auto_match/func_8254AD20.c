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
extern int fn_82230300();
extern int fn_822980B0();
extern int fn_8243DD58();
extern int fn_824C5B78();
extern int fn_8251FA58();
extern int fn_8254AA50();
extern int fn_82550320();
extern int fn_82550380();
extern int fn_825529B0();
extern int fn_82552B50();
extern int fn_8262FEC8();
extern int fn_8265CA20();
extern int fn_8265CAA0();


/* WARNING: Removing unreachable block (ram,0x8254ae30) */
/* WARNING: Removing unreachable block (ram,0x8254adcc) */
/* WARNING: Removing unreachable block (ram,0x8254aee4) */

void fn_8254AD20(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar8;
  ulonglong uVar7;
  int *piVar9;
  uint uVar10;
  
  piVar9 = (int *)(param_1 + 0x18);
  uVar10 = 0;
  if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 3 != 0) {
    iVar6 = 0;
    do {
      (**(code **)(**(int **)(iVar6 + *piVar9) + 8))();
      puVar5 = *(undefined4 **)(iVar6 + *piVar9);
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      uVar10 = uVar10 + 1;
      iVar6 = iVar6 + 8;
    } while (uVar10 < (uint)(*(int *)(param_1 + 0x1c) - *piVar9 >> 3));
  }
  iVar6 = *piVar9;
  if (iVar6 != *(int *)(param_1 + 0x1c)) {
    for (iVar8 = iVar6; iVar8 != *(int *)(param_1 + 0x1c); iVar8 = iVar8 + 8) {
    }
    *(int *)(param_1 + 0x1c) = iVar6;
  }
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 != *(int *)(param_1 + 0x2c)) {
    for (iVar8 = iVar6; iVar8 != *(int *)(param_1 + 0x2c); iVar8 = iVar8 + 0x18) {
    }
    *(int *)(param_1 + 0x2c) = iVar6;
  }
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x3c) + 4);
  while (*(char *)((int)puVar5 + 0x15) == '\0') {
    fn_8243DD58(param_1 + 0x38,puVar5[2]);
    puVar4 = (undefined4 *)*puVar5;
    fn_8265CA20(puVar5);
    puVar5 = puVar4;
  }
  *(int *)(*(int *)(param_1 + 0x3c) + 4) = *(int *)(param_1 + 0x3c);
  *(undefined4 *)*(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(int *)(*(int *)(param_1 + 0x3c) + 8) = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 != *(int *)(param_1 + 0xc)) {
    for (iVar8 = iVar6; iVar8 != *(int *)(param_1 + 0xc); iVar8 = iVar8 + 0x60) {
    }
    *(int *)(param_1 + 0xc) = iVar6;
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if (*(int *)(param_1 + 0xf8) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    fn_8265CAA0();
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    fn_8265CAA0();
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    fn_8265CAA0();
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  if (*(int *)(param_1 + 200) != 0) {
    fn_8254AA50();
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  iVar6 = fn_825529B0(param_1 + 0x1a0);
  if (iVar6 != 0) {
    fn_82552B50(param_1 + 0x1a0,1);
  }
  iVar6 = *(int *)(param_1 + 0xb4);
  if (iVar6 != 0) {
    for (; iVar6 != *(int *)(param_1 + 0xb8); iVar6 = iVar6 + 0x54) {
    }
    fn_8265CA20();
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  piVar2 = *(int **)(*(int *)(param_1 + 0xa8) + 4);
  cVar1 = *(char *)((int)piVar2 + 0x2d);
  while (cVar1 == '\0') {
    fn_82550380(param_1 + 0xa4,piVar2[2]);
    piVar3 = (int *)*piVar2;
    fn_82230300(piVar2 + 3,1,0);
    fn_8265CA20(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x2d);
  }
  *(int *)(*(int *)(param_1 + 0xa8) + 4) = *(int *)(param_1 + 0xa8);
  *(undefined4 *)*(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(int *)(*(int *)(param_1 + 0xa8) + 8) = *(int *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = 0;
  fn_8265CA20(*(undefined4 *)(param_1 + 0xa8));
  iVar6 = *(int *)(param_1 + 0x94);
  if (iVar6 != 0) {
    for (; iVar6 != *(int *)(param_1 + 0x98); iVar6 = iVar6 + 0x10) {
    }
    fn_8265CA20();
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    fn_8265CA20();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  fn_822980B0(param_1 + 0x68);
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x5c) + 4);
  while (*(char *)((int)puVar5 + 0x29) == '\0') {
    fn_82550320(param_1 + 0x58,puVar5[2]);
    puVar4 = (undefined4 *)*puVar5;
    fn_8265CA20(puVar5);
    puVar5 = puVar4;
  }
  *(int *)(*(int *)(param_1 + 0x5c) + 4) = *(int *)(param_1 + 0x5c);
  *(undefined4 *)*(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(int *)(*(int *)(param_1 + 0x5c) + 8) = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = 0;
  fn_8265CA20(*(undefined4 *)(param_1 + 0x5c));
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x48);
  if (uVar7 != 0) {
    uVar10 = *(uint *)(param_1 + 0x4c);
    if (uVar7 != uVar10) {
      do {
        fn_824C5B78(uVar7);
        uVar7 = uVar7 + 0x10;
      } while ((uVar7 & 0xffffffff) != (ulonglong)uVar10);
    }
    fn_8265CA20(*(undefined4 *)(param_1 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  fn_822980B0(param_1 + 0x38);
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 != 0) {
    for (; iVar6 != *(int *)(param_1 + 0x2c); iVar6 = iVar6 + 0x18) {
    }
    fn_8265CA20();
  }
  *(int *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar6 = *piVar9;
  if (iVar6 != 0) {
    for (; iVar6 != *(int *)(param_1 + 0x1c); iVar6 = iVar6 + 8) {
    }
    fn_8265CA20();
  }
  *piVar9 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 != 0) {
    for (; iVar6 != *(int *)(param_1 + 0xc); iVar6 = iVar6 + 0x60) {
    }
    fn_8265CA20();
  }
  *(int *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

