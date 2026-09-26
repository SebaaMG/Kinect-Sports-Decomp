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
extern int fn_8265CA20();
extern int fn_82E21DB0();
extern int fn_82F622A8();
extern int fn_82F63CA0();


void fn_82E21E18(int param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar4;
  longlong lVar3;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  
  uVar7 = (ulonglong)*(uint *)(param_1 + 8);
  if ((0x9249249 - uVar7 & 0xffffffff) < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff821a8018);
  }
  uVar6 = (ulonglong)(*(uint *)(param_1 + 8) >> 1);
  if (uVar6 < 8) {
    uVar6 = 8;
  }
  if (((param_2 & 0xffffffff) < uVar6) && (uVar7 <= (0x9249249 - uVar6 & 0xffffffff))) {
    param_2 = uVar6;
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar6 = (ulonglong)uVar1;
  iVar4 = fn_82E21DB0(uVar7 + param_2,0);
  iVar10 = uVar1 * 4;
  iVar5 = *(int *)(param_1 + 4) + iVar10;
  lVar9 = ((ulonglong)(uint)((*(int *)(param_1 + 8) * 4 - iVar5) + *(int *)(param_1 + 4) >> 2) &
          0x3fffffff) * 4;
  lVar3 = fn_82F63CA0(iVar10 + iVar4,iVar5,lVar9);
  lVar3 = lVar3 + lVar9;
  if ((param_2 & 0xffffffff) < uVar6) {
    lVar9 = (param_2 & 0x3fffffff) * 4;
    fn_82F63CA0(lVar3,*(undefined4 *)(param_1 + 4),((int)lVar9 >> 2) << 2);
    lVar9 = lVar9 + (ulonglong)*(uint *)(param_1 + 4);
    iVar10 = ((int)((*(uint *)(param_1 + 4) - (int)lVar9) + iVar10) >> 2) * 4;
    iVar5 = fn_82F63CA0(iVar4,lVar9,iVar10);
    if ((param_2 & 0xffffffff) != 0) {
      puVar8 = (undefined4 *)(iVar5 + iVar10 + -4);
      uVar7 = param_2;
      uVar6 = param_2 & 0xffffffff;
      while (uVar6 != 0) {
        puVar8 = puVar8 + 1;
        *puVar8 = 0;
        uVar7 = uVar7 - 1;
        uVar6 = uVar7;
      }
    }
  }
  else {
    uVar7 = param_2 - uVar6;
    iVar10 = (iVar10 >> 2) * 4;
    iVar5 = fn_82F63CA0(lVar3,*(undefined4 *)(param_1 + 4),iVar10);
    if ((uVar7 & 0xffffffff) != 0) {
      puVar8 = (undefined4 *)(iVar5 + iVar10 + -4);
      uVar2 = uVar7 & 0xffffffff;
      while (uVar2 != 0) {
        puVar8 = puVar8 + 1;
        *puVar8 = 0;
        uVar7 = uVar7 - 1;
        uVar2 = uVar7;
      }
    }
    if (uVar6 != 0) {
      puVar8 = (undefined4 *)(iVar4 + -4);
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        puVar8 = puVar8 + 1;
        *puVar8 = 0;
      }
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    fn_8265CA20();
  }
  *(int *)(param_1 + 4) = iVar4;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)param_2;
  return;
}

