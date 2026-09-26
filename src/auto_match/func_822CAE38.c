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
extern int fn_82230040();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern int fn_82F63CA0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_3c;


void fn_822CAE38(int param_1)

{
  int iVar2;
  longlong lVar1;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  uVar5 = *(uint *)(param_1 + 8);
  if (uVar5 == 0xfffffff) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff821a8018);
  }
  uVar10 = uVar5 >> 1;
  if (uVar10 < 8) {
    uVar10 = 8;
  }
  uVar8 = 1;
  if ((1 < uVar10) && (uVar5 <= 0xfffffff - uVar10)) {
    uVar8 = uVar10;
  }
  uVar5 = uVar5 + uVar8;
  iVar2 = 0;
  uVar10 = *(uint *)(param_1 + 0xc) >> 1;
  if ((uVar5 != 0) &&
     ((0x3fffffff < uVar5 || (iVar2 = fn_8265C9E0(uVar5 & 0x3fffffff), iVar2 == 0)))) {
    uStack_3c = 0;
    ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_40);
  }
  iVar3 = uVar10 * 4;
  iVar4 = *(int *)(param_1 + 4) + iVar3;
  lVar7 = ((ulonglong)(uint)((*(int *)(param_1 + 8) * 4 - iVar4) + *(int *)(param_1 + 4) >> 2) &
          0x3fffffff) * 4;
  lVar1 = fn_82F63CA0(iVar3 + iVar2,iVar4,lVar7);
  lVar1 = lVar1 + lVar7;
  if (uVar8 < uVar10) {
    fn_82F63CA0(lVar1,*(undefined4 *)(param_1 + 4),((int)(uVar8 * 4) >> 2) << 2);
    iVar4 = uVar8 * 4 + *(int *)(param_1 + 4);
    iVar3 = ((*(int *)(param_1 + 4) - iVar4) + iVar3 >> 2) * 4;
    iVar4 = fn_82F63CA0(iVar2,iVar4,iVar3);
    if (uVar8 != 0) {
      puVar6 = (undefined4 *)(iVar4 + iVar3 + -4);
      for (uVar5 = uVar8; uVar5 != 0; uVar5 = uVar5 - 1) {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
      }
    }
  }
  else {
    iVar4 = uVar8 - uVar10;
    iVar9 = (iVar3 >> 2) * 4;
    iVar3 = fn_82F63CA0(lVar1,*(undefined4 *)(param_1 + 4),iVar9);
    if (iVar4 != 0) {
      puVar6 = (undefined4 *)(iVar3 + iVar9 + -4);
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
      }
    }
    if (uVar10 != 0) {
      puVar6 = (undefined4 *)(iVar2 + -4);
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
      }
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    fn_8265CA20();
  }
  *(int *)(param_1 + 4) = iVar2;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar8;
  return;
}

