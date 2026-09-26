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
extern int fn_83148440();
extern unsigned int iStack_a0;


void fn_82F447B0(int param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iStack_a0;
  
  if (*(int *)(param_1 + 0x5c8) == 0) {
    iVar2 = (int)param_2;
    lVar13 = ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x3fffffff) * 4;
    uVar12 = lVar13 + 0x10;
    uVar19 = ((ulonglong)*(uint *)(param_1 + 0x2d0) + 4 & 0x3fffffff) << 2;
    lVar5 = ((longlong)iVar2 * (longlong)*(int *)(param_1 + 0x564) & 0xfffffffU) * 0x10;
    lVar4 = ((longlong)(int)uVar12 * (longlong)iVar2 & 0x3fffffffU) * 4;
    lVar7 = ((longlong)*(int *)(param_1 + 0x568) * (longlong)iVar2 & 0x1fffffffU) * 8;
    lVar6 = ((longlong)(int)uVar19 * (longlong)iVar2 & 0x1fffffffU) * 8;
    lVar10 = (ulonglong)*(uint *)(param_1 + 0x1c) + lVar7;
    lVar9 = (ulonglong)*(uint *)(param_1 + 0x1e80) + lVar7;
    lVar11 = (ulonglong)*(uint *)(param_1 + 0x18) + lVar7;
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x14) + lVar5;
    lVar5 = (ulonglong)*(uint *)(param_1 + 0x1e7c) + lVar5;
    lVar7 = (ulonglong)*(uint *)(param_1 + 0x1e84) + lVar7;
    iStack_a0 = *(int *)(param_1 + 0x1a98) + (int)lVar4;
    lVar16 = (ulonglong)*(uint *)(param_1 + 0x1aa4) + lVar6;
    lVar15 = (ulonglong)*(uint *)(param_1 + 0x1aa8) + lVar6;
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x1a94) + lVar4;
    lVar14 = (ulonglong)*(uint *)(param_1 + 0x1ab4) + lVar6;
    lVar6 = (ulonglong)*(uint *)(param_1 + 0x1ab8) + lVar6;
    lVar17 = ((ulonglong)(uint)((int)param_3 - iVar2) & 0xfffffff) * 0x10;
    if (iVar2 == 0) {
      lVar17 = lVar17 + 0x20;
    }
    else {
      lVar18 = (uVar12 & 0x1fffffff) * 8;
      lVar8 = ((ulonglong)*(uint *)(param_1 + 0x564) & 0x7ffffff) * 0x20;
      iStack_a0 = (int)lVar18 + iStack_a0;
      lVar4 = lVar18 + lVar4;
      lVar3 = lVar8 + lVar3;
      lVar5 = lVar8 + lVar5;
      if (*(int *)(param_1 + 0x6d8c) != 0) {
        lVar18 = (uVar19 & 0xfffffff) * 0x10;
        lVar8 = ((ulonglong)*(uint *)(param_1 + 0x568) & 0xfffffff) * 0x10;
        lVar16 = lVar18 + lVar16;
        lVar11 = lVar8 + lVar11;
        lVar10 = lVar8 + lVar10;
        lVar9 = lVar8 + lVar9;
        lVar7 = lVar8 + lVar7;
        lVar15 = lVar18 + lVar15;
        lVar14 = lVar18 + lVar14;
        lVar6 = lVar18 + lVar6;
      }
    }
    lVar18 = lVar17;
    if (((param_3 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 0x2d4)) &&
       (lVar18 = lVar17 + 0x20, *(int *)(param_1 + 800) < (int)((param_3 & 0xffffffff) << 4))) {
      param_3 = param_3 - 1;
      lVar18 = lVar17 + 0x10;
    }
    (**(code **)(param_1 + 0x1bac))
              (lVar3,*(undefined4 *)(param_1 + 0x564),*(undefined4 *)(param_1 + 0x564),lVar4,uVar12,
               lVar18);
    iVar1 = *(int *)(param_1 + 0x31c);
    (**(code **)(param_1 + 0x1bac))
              (((longlong)iVar1 * (longlong)iVar2 & 0xfffffffU) * 0x10 +
               (ulonglong)*(uint *)(param_1 + 0x1abc),iVar1,iVar1,
               ((longlong)(int)lVar13 * (longlong)iVar2 & 0x3fffffffU) * 4 +
               (ulonglong)*(uint *)(param_1 + 0x1a90),lVar13,(param_3 - param_2 & 0xfffffff) << 4);
    iVar2 = (int)lVar18 >> 1;
    if (*(int *)(param_1 + 0x6d8c) != 0) {
      (**(code **)(param_1 + 0x1bb0))
                (lVar11,*(undefined4 *)(param_1 + 0x568),*(undefined4 *)(param_1 + 0x568),lVar16,
                 uVar19,iVar2);
      (**(code **)(param_1 + 0x1bb0))
                (lVar10,*(undefined4 *)(param_1 + 0x568),*(undefined4 *)(param_1 + 0x568),lVar15,
                 uVar19,iVar2);
    }
    if ((*(int *)(param_1 + 0xaf0) == 2) &&
       ((**(code **)(param_1 + 0x1bac))
                  (lVar5,*(undefined4 *)(param_1 + 0x564),*(undefined4 *)(param_1 + 0x564),iStack_a0
                   ,uVar12,lVar18), *(int *)(param_1 + 0x6d8c) != 0)) {
      (**(code **)(param_1 + 0x1bb0))
                (lVar9,*(undefined4 *)(param_1 + 0x568),*(undefined4 *)(param_1 + 0x568),lVar14,
                 uVar19,iVar2);
      (**(code **)(param_1 + 0x1bb0))
                (lVar7,*(undefined4 *)(param_1 + 0x568),*(undefined4 *)(param_1 + 0x568),lVar6,
                 uVar19,iVar2);
    }
  }
  else {
    fn_83148440(*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x564),
                      *(undefined4 *)(param_1 + 0x56c),*(undefined4 *)(param_1 + 0x5d0),
                      *(undefined4 *)(param_1 + 0x5d4),*(undefined4 *)(param_1 + 0x5d8),
                      *(int *)(param_1 + 0x564) >> 1);
  }
  return;
}

