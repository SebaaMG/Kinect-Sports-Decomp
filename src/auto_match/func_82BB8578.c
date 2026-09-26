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
extern int fn_82AB15D0();
extern int fn_82BA0450();
extern int fn_82BB53C0();
extern int fn_82BC0088();
extern unsigned int lbl_820E7F9C;


void fn_82BB8578(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x34) + 4);
  uVar11 = 0;
  if (0 < iVar1) {
    iVar8 = 0;
    do {
      iVar2 = *(int *)(param_2 + 0x34);
      if ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 4)) {
        piVar6 = (int *)(*(int *)(iVar2 + 8) + iVar8);
      }
      else {
        piVar6 = (int *)fn_82BC0088(iVar2,uVar11);
      }
      if (*(int *)(*piVar6 + 8) == 0) {
        iVar2 = *(int *)(param_2 + 0x34);
        if ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 4)) {
          puVar7 = (undefined4 *)(*(int *)(iVar2 + 8) + iVar8);
        }
        else {
          puVar7 = (undefined4 *)fn_82BC0088(iVar2,uVar11);
        }
        iVar2 = *(int *)*puVar7;
        lVar10 = (ulonglong)*(uint *)(iVar2 + 0x3c) - 1;
        *(int *)(iVar2 + 0x3c) = (int)lVar10;
        if ((lVar10 == 0) && ((*(uint *)(*(int *)(iVar2 + 0x28) + 0xe4) >> 6 & 1) != 0)) {
          uVar9 = *(uint *)(*(int *)(iVar2 + 0x28) + 0x38);
          uVar4 = uVar9 & 0x1f;
          iVar2 = ((uVar9 >> 5) + 2) * 4;
          if ((*(uint *)(iVar2 + param_1[0x1d]) >> uVar4 & 1) == 0) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e05fc,0xffffffff820e0168,0x770);
          }
          *(uint *)(iVar2 + param_1[0x1d]) = *(uint *)(iVar2 + param_1[0x1d]) & ~(1 << uVar4);
        }
      }
      uVar11 = uVar11 + 1;
      iVar8 = iVar8 + 4;
    } while ((int)uVar11 < iVar1);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if ((*(uint *)(iVar1 + 0xe4) >> 9 & 1) != 0) {
    param_1[0x21] = param_1[0x21] + 1;
  }
  if ((*(char *)(param_2 + 0x38) != '\0') && (0 < *(int *)(param_2 + 0x3c))) {
    if (((*(uint *)(iVar1 + 0xe4) >> 9 & 1) == 0) ||
       (iVar8 = fn_82BA0450(iVar1), (*(uint *)(iVar8 + 0xe4) >> 5 & 1) != 0)) {
      uVar9 = fn_82BB53C0(param_1[0x1d]);
    }
    else {
      uVar9 = *(uint *)(iVar8 + 0x38);
      if ((*(uint *)(((uVar9 >> 5) + 2) * 4 + param_1[0x1d]) >> (uVar9 & 0x1f) & 1) != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0658,0xffffffff820e0168,0x782);
      }
    }
    if (((int)uVar9 < 0) ||
       (*(int *)(*(int *)(*(int *)(param_1[1] + 0xc) + 0x550) + 4) <= (int)uVar9)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0618,0xffffffff820e0168,0x787);
    }
    iVar8 = ((uVar9 >> 5) + 2) * 4;
    *(uint *)(iVar8 + param_1[0x1d]) = 1 << (uVar9 & 0x1f) | *(uint *)(iVar8 + param_1[0x1d]);
    *(uint *)(iVar1 + 0x38) = uVar9;
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
    *(uint *)(iVar1 + 0xe4) = *(uint *)(iVar1 + 0xe4) | 0x40;
    if (param_1[0x20] < (int)uVar9) {
      param_1[0x20] = uVar9;
    }
    return;
  }
  if ((*(int *)(iVar1 + 0x10) == 0) ||
     (((*(uint *)(iVar1 + 0xe4) >> 1 & 1) != 0 ||
      (bVar5 = true, (&lbl_820E7F9C)[*(int *)(iVar1 + 0x50) * 0xc] == '\0')))) {
    bVar5 = false;
  }
  if (!bVar5) {
    return;
  }
  if ((*(uint *)(iVar1 + 0xe4) >> 6 & 1) == 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x50);
    iVar8 = *(int *)(*param_1 + 0x5f4) + 1;
    *(int *)(*param_1 + 0x5f4) = iVar8;
    *(int *)(iVar1 + 0x38) = iVar8;
    *(undefined4 *)(iVar1 + 0x50) = uVar3;
    return;
  }
  iVar8 = ((*(uint *)(iVar1 + 0x38) >> 5) + 2) * 4;
  *(uint *)(iVar8 + param_1[0x1d]) =
       1 << (*(uint *)(iVar1 + 0x38) & 0x1f) | *(uint *)(iVar8 + param_1[0x1d]);
  return;
}

