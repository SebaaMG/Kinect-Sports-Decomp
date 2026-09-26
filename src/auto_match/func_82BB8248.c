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
extern int fn_82BB5C08();
extern int fn_82BB7F78();
extern int fn_82BC0088();
extern int fn_82BD31A8();


void fn_82BB8248(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x34) + 4);
  uVar11 = 0;
  if (0 < iVar1) {
    iVar10 = 0;
    do {
      iVar12 = *(int *)(param_2 + 0x34);
      if ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(iVar12 + 4)) {
        piVar7 = (int *)(*(int *)(iVar12 + 8) + iVar10);
      }
      else {
        piVar7 = (int *)fn_82BC0088(iVar12,uVar11);
      }
      if (*(int *)(*piVar7 + 8) == 0) {
        iVar12 = *(int *)(param_2 + 0x34);
        if ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(iVar12 + 4)) {
          puVar6 = (undefined4 *)(*(int *)(iVar12 + 8) + iVar10);
        }
        else {
          puVar6 = (undefined4 *)fn_82BC0088(iVar12,uVar11);
        }
        iVar12 = *(int *)*puVar6;
        lVar8 = (ulonglong)*(uint *)(iVar12 + 0x3c) - 1;
        *(int *)(iVar12 + 0x3c) = (int)lVar8;
        if (lVar8 == 0) {
          if ((*(uint *)(*(int *)(iVar12 + 0x28) + 0xe4) >> 6 & 1) != 0) {
            uVar2 = *(uint *)(*(int *)(iVar12 + 0x28) + 0x38);
            uVar5 = uVar2 & 0x1f;
            iVar12 = ((uVar2 >> 5) + 2) * 4;
            if ((*(uint *)(iVar12 + *(int *)(param_1 + 0x74)) >> uVar5 & 1) == 0) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e05fc,0xffffffff820e0168,0x72d);
            }
            *(uint *)(iVar12 + *(int *)(param_1 + 0x74)) =
                 *(uint *)(iVar12 + *(int *)(param_1 + 0x74)) & ~(1 << uVar5);
          }
        }
      }
      uVar11 = uVar11 + 1;
      iVar10 = iVar10 + 4;
    } while ((int)uVar11 < iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x78);
  while( true ) {
    piVar7 = (int *)(iVar1 + 0x40);
    if (*piVar7 == 0) break;
    iVar1 = *piVar7;
  }
  *piVar7 = param_2;
  fn_82BD31A8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 0x28));
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x1c);
  *(undefined4 *)(param_2 + 0x20) = uVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar3;
  iVar1 = *(int *)(*(int *)(param_2 + 0x28) + 0xac);
  if (iVar1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e05f0,0xffffffff820e0168,0x73e);
  }
  iVar10 = *(int *)(*(int *)(*(int *)(param_1 + 0x78) + 0x28) + 0xac);
  uVar2 = *(uint *)(iVar10 + 0x38);
  uVar3 = *(undefined4 *)(iVar10 + 0x50);
  *(uint *)(iVar1 + 0x38) = uVar2;
  *(undefined4 *)(iVar1 + 0x50) = uVar3;
  if ((*(uint *)(iVar10 + 0xe4) >> 6 & 1) != 0) {
    iVar10 = ((uVar2 >> 5) + 2) * 4;
    *(uint *)(iVar10 + *(int *)(param_1 + 0x74)) =
         1 << (uVar2 & 0x1f) | *(uint *)(iVar10 + *(int *)(param_1 + 0x74));
    *(uint *)(iVar1 + 0xe4) = *(uint *)(iVar1 + 0xe4) | 0x40;
  }
  uVar11 = 0;
  iVar10 = *(int *)(*(int *)(param_2 + 0x30) + 4);
  if (0 < iVar10) {
    iVar12 = 0;
    do {
      iVar4 = *(int *)(param_2 + 0x30);
      if ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(iVar4 + 4)) {
        piVar7 = (int *)(*(int *)(iVar4 + 8) + iVar12);
      }
      else {
        piVar7 = (int *)fn_82BC0088(iVar4,uVar11);
      }
      iVar4 = *(int *)(*piVar7 + 4);
      *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + -1;
      iVar9 = *(int *)(param_2 + 0x30);
      if ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(iVar9 + 4)) {
        piVar7 = (int *)(*(int *)(iVar9 + 8) + iVar12);
      }
      else {
        piVar7 = (int *)fn_82BC0088(iVar9,uVar11);
      }
      iVar9 = *(int *)(iVar4 + 0x20);
      if (iVar9 < *(int *)(*piVar7 + 0xc) + *(int *)(param_2 + 0x1c)) {
        iVar9 = *(int *)(param_2 + 0x30);
        if ((uVar11 & 0xffffffff) < (ulonglong)*(uint *)(iVar9 + 4)) {
          piVar7 = (int *)(*(int *)(iVar9 + 8) + iVar12);
        }
        else {
          piVar7 = (int *)fn_82BC0088(iVar9,uVar11);
        }
        iVar9 = *(int *)(*piVar7 + 0xc) + *(int *)(param_2 + 0x1c);
      }
      *(int *)(iVar4 + 0x20) = iVar9;
      if (*(int *)(iVar4 + 0x24) == 0) {
        if (*(int *)(iVar4 + 0x28) == iVar1) {
          *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + -1;
          fn_82BD31A8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(iVar4 + 0x28));
          iVar9 = *(int *)(*(int *)(param_1 + 0x78) + 0x1c) + 1;
          *(int *)(iVar4 + 0x20) = iVar9;
          *(int *)(iVar4 + 0x1c) = iVar9;
          fn_82BB7F78(param_1,iVar4);
        }
        else {
          fn_82BB5C08(param_1,iVar4);
        }
      }
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 4;
    } while ((int)uVar11 < iVar10);
  }
  return;
}

