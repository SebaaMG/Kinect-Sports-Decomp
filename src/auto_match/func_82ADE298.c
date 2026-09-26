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
extern int fn_82ABE9F0();
extern int fn_82AC6808();


void fn_82ADE298(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  
  lVar8 = param_3 * 0x28 + (ulonglong)*(uint *)(param_1 + 0x2a4);
  lVar12 = 4;
  lVar9 = param_2 * 0x28 + (ulonglong)*(uint *)(param_1 + 0x2a4);
  do {
    lVar9 = lVar9 + 8;
    iVar1 = (int)lVar8;
    lVar8 = lVar8 + 8;
    *(ulonglong *)lVar8 = *(ulonglong *)lVar9 | *(ulonglong *)(iVar1 + 8);
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  iVar1 = *(int *)(param_1 + 0x2ac);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x2a0);
    uVar10 = iVar2 * (int)param_3 * 8 + iVar1;
    uVar6 = iVar2 * 8 + uVar10;
    if (uVar10 < uVar6) {
      puVar11 = (ulonglong *)(uVar10 - 8);
      puVar7 = (ulonglong *)(iVar2 * (int)param_2 * 8 + iVar1 + -8);
      lVar9 = (ulonglong)((uVar6 - uVar10) - 1 >> 3) + 1;
      do {
        puVar3 = puVar11 + 1;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
        *puVar11 = *puVar3 | *puVar7;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  iVar1 = (int)((param_3 & 0x3fffffff) << 2);
  if (*(int *)(*(int *)(param_1 + 0x2a8) + iVar1) == 0) {
    iVar2 = (int)((param_2 & 0x3fffffff) << 2);
    if (*(uint *)(iVar2 + *(int *)(param_1 + 0x2a8)) < 0x10000) {
      uVar5 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x2a0) << 3,0);
      *(undefined4 *)(*(int *)(param_1 + 0x2a8) + iVar1) = uVar5;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x2a8) + iVar1) =
           *(undefined4 *)(*(int *)(param_1 + 0x2a8) + iVar2);
      *(undefined4 *)(*(int *)(param_1 + 0x2a8) + iVar2) = 0;
    }
    uVar6 = (uint)((param_3 & 0xffffffff) >> 3) & 0x1ffffff8;
    iVar2 = *(int *)(*(int *)(param_1 + 0x2a8) + iVar1);
    *(ulonglong *)(uVar6 + iVar2) = 1L << (param_3 & 0x3f) | *(ulonglong *)(uVar6 + iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x2a8);
  iVar4 = (int)((param_2 & 0x3fffffff) << 2);
  if (*(uint *)(iVar4 + iVar2) < 0x10000) {
    uVar6 = (uint)((param_2 & 0xffffffff) >> 3) & 0x1ffffff8;
    *(ulonglong *)(uVar6 + *(int *)(iVar2 + iVar1)) =
         1L << (param_2 & 0x3f) | *(ulonglong *)(uVar6 + *(int *)(iVar2 + iVar1));
  }
  else {
    uVar6 = *(uint *)(iVar2 + iVar1);
    uVar10 = *(int *)(param_1 + 0x2a0) * 8 + uVar6;
    if (uVar6 < uVar10) {
      puVar11 = (ulonglong *)(uVar6 - 8);
      puVar7 = (ulonglong *)(*(int *)(iVar2 + iVar4) + -8);
      lVar9 = (ulonglong)((uVar10 - uVar6) - 1 >> 3) + 1;
      do {
        puVar3 = puVar11 + 1;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
        *puVar11 = *puVar3 | *puVar7;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    fn_82AC6808(param_1,*(undefined4 *)(*(int *)(param_1 + 0x2a8) + iVar4),
                 *(int *)(param_1 + 0x2a0) << 3,0);
  }
  *(int *)(*(int *)(param_1 + 0x2a8) + iVar4) = (int)param_3;
  return;
}

