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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82F23F28();


void fn_82F0EFB8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  
  if (*(int *)(param_1 + 0x8e0) == 0) {
    uVar2 = *(uint *)(param_2 + 0x10c);
    if (*(int *)(param_2 + 4) == 0) {
      uVar4 = *(uint *)(param_1 + 0x4a98);
      lVar5 = (longlong)((int)*(uint *)(param_1 + 0x568) >> 1) *
              (longlong)*(int *)(param_1 + 0x6de4) +
              ((ulonglong)*(uint *)(param_1 + 0x568) & 0x3fffffff) * 4;
      lVar10 = (longlong)((int)*(uint *)(param_1 + 0x564) >> 1) *
               (longlong)*(int *)(param_1 + 0x6de4) + (ulonglong)*(uint *)(param_1 + 0x4a94);
      uVar15 = ((ulonglong)*(uint *)(param_1 + 0x564) & 0x3fffffff) << 2;
      uVar7 = CONCAT44(uVar2,uVar2);
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x108);
      uVar4 = *(uint *)(param_1 + 0x4a98);
      uVar15 = (ulonglong)*(uint *)(param_1 + 0x4a94);
      lVar10 = (longlong)(int)(uVar3 * 0x10 + 4) * (longlong)*(int *)(param_1 + 0x564) +
               (longlong)(*(int *)(param_1 + 0x564) >> 1) * (longlong)*(int *)(param_1 + 0x6de4);
      lVar5 = (longlong)(int)(uVar3 * 8 + 4) * (longlong)*(int *)(param_1 + 0x568) +
              (longlong)(*(int *)(param_1 + 0x568) >> 1) * (longlong)*(int *)(param_1 + 0x6de4);
      uVar7 = (ulonglong)uVar2 - (ulonglong)uVar3 & 0xffffffff;
    }
    fn_82F23F28(param_1,lVar10 + uVar15,(ulonglong)uVar4 + lVar5,
                  (ulonglong)*(uint *)(param_1 + 0x4a9c) + lVar5,(uVar7 & 0x7fffffff) << 1,
                  *(undefined4 *)(param_2 + 0xd4),*(undefined4 *)(param_2 + 0xdc),
                  *(undefined4 *)(param_2 + 0xe4));
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2d0);
    uVar2 = *(uint *)(param_2 + 0x108);
    uVar7 = (ulonglong)uVar2;
    uVar3 = *(uint *)(param_1 + 0x564);
    uVar4 = *(uint *)(param_2 + 0x10c);
    lVar10 = ((ulonglong)*(uint *)(param_1 + 0x568) & 0x3fffffff) * 4;
    uVar15 = uVar7;
    if (uVar7 < uVar4) {
      uVar15 = uVar7 + 1;
    }
    if ((uVar15 & 0xffffffff) < (ulonglong)uVar4) {
      lVar5 = (uVar15 & 0x3fffffff) << 2;
      do {
        if (*(int *)((int)lVar5 + *(int *)(param_1 + 0x8d8)) != 0) break;
        uVar15 = uVar15 + 1;
        lVar5 = lVar5 + 4;
      } while ((uVar15 & 0xffffffff) < (ulonglong)uVar4);
    }
    uVar14 = (ulonglong)*(uint *)(param_2 + 0xd4);
    uVar13 = (ulonglong)*(uint *)(param_2 + 0xdc);
    uVar12 = (ulonglong)*(uint *)(param_2 + 0xe4);
    lVar8 = (longlong)(*(int *)(param_1 + 0x568) >> 1) * (longlong)*(int *)(param_1 + 0x6de4) +
            ((longlong)(int)uVar2 * (longlong)*(int *)(param_1 + 0x568) & 0x1fffffffU) * 8;
    lVar5 = (ulonglong)*(uint *)(param_1 + 0x4a98) + lVar8;
    lVar11 = (longlong)((int)uVar3 >> 1) * (longlong)*(int *)(param_1 + 0x6de4) +
             ((longlong)(int)uVar3 * (longlong)(int)uVar2 & 0xfffffffU) * 0x10 +
             (ulonglong)*(uint *)(param_1 + 0x4a94);
    lVar8 = (ulonglong)*(uint *)(param_1 + 0x4a9c) + lVar8;
    uVar7 = uVar15 - uVar7;
    while (uVar7 != 0) {
      fn_82F23F28(param_1,lVar11 + ((ulonglong)uVar3 & 0x3fffffff) * 4,lVar5 + lVar10,
                    lVar8 + lVar10,(uVar7 & 0x7fffffff) << 1,uVar14,uVar13,uVar12);
      iVar17 = (int)uVar7;
      uVar2 = *(uint *)(param_2 + 0x10c);
      lVar6 = (longlong)iVar17 * (longlong)(int)(iVar1 + 3U >> 2);
      uVar14 = (longlong)iVar17 * (longlong)(int)(iVar1 + 1U & 0xfffffffe) + uVar14;
      lVar9 = ((longlong)iVar17 * (longlong)*(int *)(param_1 + 0x568) & 0x1fffffffU) * 8;
      uVar13 = lVar6 + uVar13;
      uVar12 = lVar6 + uVar12;
      lVar11 = ((longlong)iVar17 * (longlong)*(int *)(param_1 + 0x564) & 0xfffffffU) * 0x10 + lVar11
      ;
      lVar5 = lVar9 + lVar5;
      lVar8 = lVar9 + lVar8;
      uVar16 = uVar15;
      if (((uVar15 & 0xffffffff) < (ulonglong)uVar2) &&
         (uVar16 = uVar15 + 1, (uVar16 & 0xffffffff) < (ulonglong)uVar2)) {
        lVar6 = (uVar16 & 0x3fffffff) << 2;
        do {
          if (*(int *)((int)lVar6 + *(int *)(param_1 + 0x8d8)) != 0) break;
          uVar16 = uVar16 + 1;
          lVar6 = lVar6 + 4;
        } while ((uVar16 & 0xffffffff) < (ulonglong)uVar2);
      }
      uVar7 = uVar16 - uVar15;
      uVar15 = uVar16;
    }
  }
  return;
}

