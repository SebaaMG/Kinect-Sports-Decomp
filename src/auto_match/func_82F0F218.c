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
extern int fn_82F230D8();
extern int fn_82F24118();


void fn_82F0F218(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  if (*(int *)(param_1 + 0x8e0) == 0) {
    uVar9 = (longlong)*(int *)(param_1 + 0x2d0) * (longlong)*(int *)(param_2 + 0x108);
    fn_82F230D8(param_1,*(undefined4 *)(param_2 + 0xe8),*(undefined4 *)(param_2 + 0xf0),
                    *(undefined4 *)(param_2 + 0xf8),*(undefined4 *)(param_2 + 0xec),
                    *(undefined4 *)(param_2 + 0xf4),*(undefined4 *)(param_2 + 0xfc),
                    (uVar9 + (uVar9 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
                    (ulonglong)*(uint *)(param_1 + 0x874));
    uVar1 = *(uint *)(param_2 + 0x108);
    lVar10 = (longlong)(*(int *)(param_1 + 0x568) >> 1) * (longlong)*(int *)(param_1 + 0x6de4) +
             ((longlong)(int)uVar1 * (longlong)*(int *)(param_1 + 0x568) & 0x1fffffffU) * 8;
    fn_82F24118(param_1,(longlong)(*(int *)(param_1 + 0x564) >> 1) *
                          (longlong)*(int *)(param_1 + 0x6de4) +
                          ((longlong)(int)uVar1 * (longlong)*(int *)(param_1 + 0x564) & 0xfffffffU)
                          * 0x10 + (ulonglong)*(uint *)(param_1 + 0x4a94) + 8,
                  (ulonglong)*(uint *)(param_1 + 0x4a98) + lVar10 + 8,
                  (ulonglong)*(uint *)(param_1 + 0x4a9c) + lVar10 + 8,
                  ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + -1,
                  ((ulonglong)*(uint *)(param_2 + 0x10c) - (ulonglong)uVar1 & 0xfffffff) << 4,
                  *(undefined4 *)(param_2 + 0xe8),*(undefined4 *)(param_2 + 0xf0));
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x108);
    uVar9 = (ulonglong)uVar1;
    uVar2 = *(uint *)(param_2 + 0x10c);
    uVar14 = uVar9;
    if (uVar9 < uVar2) {
      uVar14 = uVar9 + 1;
    }
    if ((uVar14 & 0xffffffff) < (ulonglong)uVar2) {
      lVar10 = (uVar14 & 0x3fffffff) << 2;
      do {
        if (*(int *)((int)lVar10 + *(int *)(param_1 + 0x8d8)) != 0) break;
        uVar14 = uVar14 + 1;
        lVar10 = lVar10 + 4;
      } while ((uVar14 & 0xffffffff) < (ulonglong)uVar2);
    }
    uVar3 = *(undefined4 *)(param_2 + 0xe8);
    uVar4 = *(undefined4 *)(param_2 + 0xf0);
    uVar5 = *(undefined4 *)(param_2 + 0xf8);
    uVar6 = *(undefined4 *)(param_2 + 0xec);
    uVar7 = *(undefined4 *)(param_2 + 0xf4);
    uVar8 = *(undefined4 *)(param_2 + 0xfc);
    lVar11 = (longlong)(*(int *)(param_1 + 0x568) >> 1) * (longlong)*(int *)(param_1 + 0x6de4) +
             ((longlong)*(int *)(param_1 + 0x568) * (longlong)(int)uVar1 & 0x1fffffffU) * 8;
    lVar10 = (longlong)(*(int *)(param_1 + 0x564) >> 1) * (longlong)*(int *)(param_1 + 0x6de4) +
             ((longlong)*(int *)(param_1 + 0x564) * (longlong)(int)uVar1 & 0xfffffffU) * 0x10 +
             (ulonglong)*(uint *)(param_1 + 0x4a94);
    lVar13 = (ulonglong)*(uint *)(param_1 + 0x4a98) + lVar11;
    lVar11 = (ulonglong)*(uint *)(param_1 + 0x4a9c) + lVar11;
    uVar16 = uVar14 - uVar9;
    while (uVar16 != 0) {
      uVar9 = (longlong)*(int *)(param_1 + 0x2d0) * (longlong)(int)uVar9;
      fn_82F230D8(param_1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,
                      (uVar9 + (uVar9 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
                      (ulonglong)*(uint *)(param_1 + 0x874));
      lVar12 = (uVar16 & 0xfffffff) << 4;
      fn_82F24118(param_1,lVar10 + 8,lVar13 + 8,lVar11 + 8,
                    ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + -1,lVar12,uVar3,uVar4
                   );
      fn_82F24118(param_1,lVar10 + 4,lVar13 + 4,lVar11 + 4,*(int *)(param_1 + 0x2d0) << 1,lVar12,
                    uVar6,uVar7);
      uVar1 = *(uint *)(param_2 + 0x10c);
      lVar12 = ((longlong)*(int *)(param_1 + 0x568) * (longlong)(int)uVar16 & 0x1fffffffU) * 8;
      lVar13 = lVar12 + lVar13;
      lVar10 = ((longlong)*(int *)(param_1 + 0x564) * (longlong)(int)uVar16 & 0xfffffffU) * 0x10 +
               lVar10;
      lVar11 = lVar12 + lVar11;
      uVar15 = uVar14;
      if (((uVar14 & 0xffffffff) < (ulonglong)uVar1) &&
         (uVar15 = uVar14 + 1, (uVar15 & 0xffffffff) < (ulonglong)uVar1)) {
        lVar12 = (uVar15 & 0x3fffffff) << 2;
        do {
          if (*(int *)((int)lVar12 + *(int *)(param_1 + 0x8d8)) != 0) break;
          uVar15 = uVar15 + 1;
          lVar12 = lVar12 + 4;
        } while ((uVar15 & 0xffffffff) < (ulonglong)uVar1);
      }
      uVar16 = uVar15 - uVar14;
      uVar9 = uVar14;
      uVar14 = uVar15;
    }
  }
  return;
}

