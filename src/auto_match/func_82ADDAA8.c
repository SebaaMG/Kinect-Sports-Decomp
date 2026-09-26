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
extern int fn_82AC8910();
extern int fn_82ADD198();


void fn_82ADDAA8(int param_1,longlong param_2,ulonglong param_3,int param_4,ulonglong param_5,
                  char param_6)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint uVar10;
  longlong lVar9;
  ulonglong *puVar12;
  longlong lVar11;
  uint uVar13;
  longlong lVar14;
  
  iVar1 = (int)param_2;
  uVar13 = *(uint *)((int)((param_3 & 0xffffffff) << 2) + iVar1);
  iVar2 = (int)((param_5 & 0x3fffffff) << 2);
  uVar10 = *(int *)(param_1 + 0x2a0) * 8 + uVar13;
  if (uVar13 < uVar10) {
    puVar12 = (ulonglong *)(uVar13 - 8);
    puVar8 = (ulonglong *)(*(int *)(iVar2 + param_4) + -8);
    lVar9 = (ulonglong)((uVar10 - uVar13) - 1 >> 3) + 1;
    do {
      puVar3 = puVar12 + 1;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
      *puVar12 = *puVar8 | *puVar3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  uVar13 = *(uint *)((int)((param_3 + 4 & 0xffffffff) << 2) + iVar1);
  uVar10 = *(int *)(param_1 + 0x2a0) * 8 + uVar13;
  if (uVar13 < uVar10) {
    puVar12 = (ulonglong *)(uVar13 - 8);
    puVar8 = (ulonglong *)(*(int *)((int)((param_5 + 4 & 0xffffffff) << 2) + param_4) + -8);
    lVar9 = (ulonglong)((uVar10 - uVar13) - 1 >> 3) + 1;
    do {
      puVar3 = puVar12 + 1;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
      *puVar12 = *puVar3 | *puVar8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if ((*(uint *)(param_4 + 0xc0) & 0x40000000) != 0) {
    lVar14 = 4;
    lVar11 = 0;
    lVar9 = (param_3 + 1) * 0x28 + param_2 + -8;
    do {
      uVar6 = (param_5 + 1) * 5 + lVar11;
      iVar4 = (int)lVar9;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 8;
      *(ulonglong *)lVar9 =
           *(ulonglong *)((int)((uVar6 & 0xffffffff) << 3) + param_4) | *(ulonglong *)(iVar4 + 8);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    *(uint *)(iVar1 + 0xc0) = *(uint *)(iVar1 + 0xc0) | 0x40000000;
  }
  if ((param_6 == '\0') &&
     (uVar6 = fn_82AC8910(*(undefined4 *)(iVar2 + param_4),0,*(undefined4 *)(param_1 + 0x2a0)),
     (uVar6 & 0xffffffff) <= (ulonglong)(*(int *)(param_1 + 0x29c) - 1))) {
    do {
      uVar5 = fn_82ADD198(param_1,uVar6);
      uVar13 = (uint)((uVar5 & 0xffffffff) >> 2) & 0x1ffffff8;
      uVar7 = (uVar5 & 0x7fffffff) * 2 + (uVar5 & 0x7fffffe0) * -2;
      *(ulonglong *)(uVar13 + *(int *)(param_1 + 0x2b4)) =
           *(ulonglong *)(uVar13 + *(int *)(param_1 + 0x2b4)) & ~(3L << (uVar7 & 0x7f)) |
           ((longlong)(int)param_3 & 3U) << (uVar7 & 0x7f);
      *(int *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(param_1 + 0x2b0)) = iVar1;
      uVar13 = *(int *)(param_1 + 0x29c) - 1;
      if ((uVar6 & 0xffffffff) == (ulonglong)uVar13) {
        uVar6 = 0xffffffffffffffff;
      }
      else {
        uVar6 = fn_82AC8910(*(undefined4 *)(iVar2 + param_4),uVar6 + 1,
                             *(undefined4 *)(param_1 + 0x2a0));
      }
    } while ((uVar6 & 0xffffffff) <= (ulonglong)uVar13);
  }
  return;
}

