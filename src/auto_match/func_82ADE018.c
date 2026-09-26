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


void fn_82ADE018(int param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5,char param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  uint uVar11;
  longlong lVar9;
  longlong lVar10;
  int *piVar12;
  ulonglong *puVar14;
  ulonglong uVar13;
  longlong lVar15;
  
  iVar3 = (int)param_2;
  uVar1 = *(uint *)(iVar3 + 0xc0);
  if ((param_5 & 0xffffffff) == ((ulonglong)uVar1 & 7)) {
    *(uint *)(iVar3 + 0xc0) = uVar1 & 0xfffffff8 | uVar1 + 1 & 7;
    if ((param_6 == '\0') &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x2a8) + (int)((param_4 & 0xffffffff) << 2)), iVar2 != 0
       )) {
      *(int *)((int)((param_5 & 0xffffffff) << 2) + iVar3) = iVar2;
    }
    else {
      uVar7 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x2a0) << 3,0);
      *(undefined4 *)((int)((param_5 & 0xffffffff) << 2) + iVar3) = uVar7;
    }
  }
  if (param_6 == '\0') {
    iVar2 = (int)((param_4 & 0xffffffff) << 2);
    if (*(int *)(*(int *)(param_1 + 0x2a8) + iVar2) != 0) {
      iVar6 = (int)param_5 * 4;
      piVar12 = (int *)(iVar6 + iVar3);
      uVar1 = *(uint *)(iVar6 + iVar3);
      uVar11 = *(int *)(param_1 + 0x2a0) * 8 + uVar1;
      if (uVar1 < uVar11) {
        puVar14 = (ulonglong *)(uVar1 - 8);
        puVar8 = (ulonglong *)(*(int *)(*(int *)(param_1 + 0x2a8) + iVar2) + -8);
        lVar9 = (ulonglong)((uVar11 - uVar1) - 1 >> 3) + 1;
        do {
          puVar4 = puVar14 + 1;
          puVar8 = puVar8 + 1;
          puVar14 = puVar14 + 1;
          *puVar14 = *puVar4 | *puVar8;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      goto LAB_82ade13c;
    }
  }
  iVar2 = (int)param_5 * 4;
  uVar1 = (uint)((param_3 & 0xffffffff) >> 3) & 0x1ffffff8;
  piVar12 = (int *)(iVar2 + iVar3);
  iVar2 = *(int *)(iVar2 + iVar3);
  *(ulonglong *)(uVar1 + iVar2) = 1L << (param_3 & 0x3f) | *(ulonglong *)(uVar1 + iVar2);
LAB_82ade13c:
  uVar1 = (uint)((param_4 & 0xffffffff) >> 3) & 0x1ffffff8;
  *(ulonglong *)(uVar1 + *piVar12) = 1L << (param_4 & 0x3f) | *(ulonglong *)(uVar1 + *piVar12);
  uVar1 = *(uint *)((int)((param_5 + 4 & 0xffffffff) << 2) + iVar3);
  uVar11 = *(int *)(param_1 + 0x2a0) * 8 + uVar1;
  if (uVar1 < uVar11) {
    puVar14 = (ulonglong *)(uVar1 - 8);
    puVar8 = (ulonglong *)
             (*(int *)(param_1 + 0x2a0) * (int)param_4 * 8 + *(int *)(param_1 + 0x2ac) + -8);
    lVar9 = (ulonglong)((uVar11 - uVar1) - 1 >> 3) + 1;
    do {
      puVar4 = puVar14 + 1;
      puVar8 = puVar8 + 1;
      puVar14 = puVar14 + 1;
      *puVar14 = *puVar4 | *puVar8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  uVar13 = 0;
  do {
    if (*(longlong *)
         ((int)((param_4 * 5 + uVar13 + 1 & 0xffffffff) << 3) + *(int *)(param_1 + 0x2a4)) != 0) {
      bVar5 = true;
      goto LAB_82ade1ec;
    }
    uVar13 = uVar13 + 1;
  } while ((uVar13 & 0xffffffff) < 4);
  bVar5 = false;
LAB_82ade1ec:
  if (bVar5) {
    *(uint *)(iVar3 + 0xc0) = *(uint *)(iVar3 + 0xc0) | 0x40000000;
    lVar9 = param_4 * 0x28 + (ulonglong)*(uint *)(param_1 + 0x2a4);
    lVar15 = 4;
    lVar10 = (param_5 + 1) * 0x28 + param_2 + -8;
    do {
      lVar9 = lVar9 + 8;
      iVar2 = (int)lVar10;
      lVar10 = lVar10 + 8;
      *(ulonglong *)lVar10 = *(ulonglong *)lVar9 | *(ulonglong *)(iVar2 + 8);
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  if (param_6 == '\0') {
    uVar1 = (uint)((param_4 & 0xffffffff) >> 2) & 0x1ffffff8;
    uVar13 = (param_4 & 0x7fffffff) * 2 + (param_4 & 0x7fffffe0) * -2;
    *(ulonglong *)(uVar1 + *(int *)(param_1 + 0x2b4)) =
         (param_5 & 3) << (uVar13 & 0x7f) |
         *(ulonglong *)(uVar1 + *(int *)(param_1 + 0x2b4)) & ~(3L << (uVar13 & 0x7f));
    *(int *)(*(int *)(param_1 + 0x2b0) + (int)((param_4 & 0xffffffff) << 2)) = iVar3;
  }
  return;
}

