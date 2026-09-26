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
extern int fn_82F68CC0();


undefined8
fn_82C6FD68(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,ulonglong param_5,
             ulonglong param_6,ulonglong param_7,ulonglong param_8)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  
  if (((((((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) ||
        ((param_4 & 0xffffffff) == 0)) ||
       (((param_5 & 0xffffffff) == 0 || ((param_6 & 0xffffffff) == 0)))) ||
      (((param_7 & 0xffffffff) == 0 ||
       (((param_8 & 0xffffffff) == 0 || (uVar11 = (ulonglong)in_stack_00000054, uVar11 == 0)))))) ||
     (uVar12 = (ulonglong)in_stack_0000005c, uVar12 == 0)) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    uVar7 = param_1[1];
    lVar19 = 0;
    iVar13 = 0;
    if (0 < (int)uVar7) {
      iVar15 = 0;
      do {
        uVar7 = *(uint *)(iVar15 + param_1[5]);
        uVar18 = (ulonglong)uVar7;
        uVar10 = *(uint *)(iVar15 + param_1[6]);
        uVar17 = (ulonglong)uVar10;
        uVar1 = *(uint *)(iVar15 + param_1[7]);
        uVar16 = (ulonglong)uVar1;
        uVar9 = *(uint *)(iVar15 + param_1[8]);
        uVar14 = (ulonglong)uVar9;
        uVar5 = (ulonglong)*param_1;
        if ((int)uVar7 < (int)*param_1) {
          uVar5 = uVar18;
        }
        if (0 < (int)uVar5) {
          fn_82F68CC0(lVar19 + param_8,lVar19 + param_2,uVar5);
        }
        uVar5 = ((ulonglong)(uVar1 >> 0x1f) - 1) + (ulonglong)(uVar16 == 0) & uVar16;
        if (0 < (longlong)((*param_1 - uVar5) + -1)) {
          lVar6 = uVar5 + lVar19;
          fn_82F68CC0(lVar6 + param_8 + 1,lVar6 + param_2 + 1);
        }
        lVar6 = uVar17 + 1;
        if ((int)uVar10 < 0) {
          lVar6 = 0;
        }
        uVar5 = (ulonglong)*param_1;
        if ((int)uVar9 < (int)*param_1) {
          uVar5 = uVar14;
        }
        if (0 < (longlong)(uVar5 - lVar6)) {
          fn_82F68CC0(lVar6 + lVar19 + param_8,lVar6 + lVar19 + param_2);
        }
        uVar18 = ((ulonglong)(uVar7 >> 0x1f) - 1) + (ulonglong)(uVar18 == 0) & uVar18;
        if ((int)*param_1 <= (int)uVar10) {
          uVar17 = (ulonglong)*param_1 - 1;
        }
        if (0 < (longlong)((uVar17 - uVar18) + 1)) {
          lVar6 = uVar18 + lVar19;
          fn_82F68CC0(lVar6 + param_8,lVar6 + param_5);
        }
        if ((int)*param_1 <= (int)uVar1) {
          uVar16 = (ulonglong)*param_1 - 1;
        }
        uVar14 = ((ulonglong)(uVar9 >> 0x1f) - 1) + (ulonglong)(uVar14 == 0) & uVar14;
        if (0 < (longlong)((uVar16 - uVar14) + 1)) {
          lVar6 = uVar14 + lVar19;
          fn_82F68CC0(lVar6 + param_8,lVar6 + param_5);
        }
        iVar13 = iVar13 + 1;
        uVar7 = param_1[1];
        iVar15 = iVar15 + 4;
        lVar19 = (ulonglong)*param_1 + lVar19;
      } while (iVar13 < (int)uVar7);
    }
    lVar19 = 0;
    iVar13 = 0;
    if (0 < (int)uVar7) {
      iVar15 = 0;
      do {
        uVar7 = *(uint *)(iVar15 + param_1[5]);
        iVar4 = *(int *)(iVar15 + param_1[6]);
        uVar10 = *(uint *)(iVar15 + param_1[7]);
        uVar1 = *(uint *)(iVar15 + param_1[8]);
        uVar9 = *param_1;
        if ((int)uVar7 < (int)*param_1) {
          uVar9 = uVar7;
        }
        iVar8 = (int)(uVar9 + 1) >> 1;
        if (0 < iVar8) {
          fn_82F68CC0(lVar19 + uVar11,lVar19 + param_3,iVar8);
          fn_82F68CC0(lVar19 + uVar12,lVar19 + param_4,iVar8);
        }
        uVar9 = *param_1;
        if ((uVar9 & 1) == 0) {
          iVar8 = uVar9 - 2;
        }
        else {
          iVar8 = uVar9 - 1;
        }
        lVar6 = (longlong)
                ((int)((iVar8 - ((-1 - ((int)uVar10 >> 0x1f)) + (uint)(uVar10 == 0) & uVar10)) + 1)
                >> 1);
        if (0 < lVar6) {
          lVar20 = ((iVar8 >> 1) - lVar6) + 1 + lVar19;
          fn_82F68CC0(lVar20 + uVar11,lVar20 + param_3,lVar6);
          fn_82F68CC0(lVar20 + uVar12,lVar20 + param_4,lVar6);
        }
        uVar9 = iVar4 + 1;
        if (iVar4 < 0) {
          uVar9 = 0;
        }
        if ((uVar9 & 1) != 0) {
          uVar9 = uVar9 + 1;
        }
        uVar3 = *param_1;
        if ((int)uVar1 < (int)*param_1) {
          uVar3 = uVar1;
        }
        iVar8 = (int)((uVar3 - uVar9) + 1) >> 1;
        if (0 < iVar8) {
          lVar6 = ((int)uVar9 >> 1) + lVar19;
          fn_82F68CC0(lVar6 + uVar11,lVar6 + param_3,iVar8);
          fn_82F68CC0(lVar6 + uVar12,lVar6 + param_4,iVar8);
        }
        uVar7 = (-1 - ((int)uVar7 >> 0x1f)) + (uint)(uVar7 == 0) & uVar7;
        if ((uVar7 & 1) != 0) {
          uVar7 = uVar7 + 1;
        }
        if ((int)*param_1 <= iVar4) {
          iVar4 = *param_1 - 1;
        }
        iVar4 = (int)((iVar4 - uVar7) + 2) >> 1;
        if (0 < iVar4) {
          lVar6 = ((int)uVar7 >> 1) + lVar19;
          fn_82F68CC0(lVar6 + uVar11,lVar6 + param_6,iVar4);
          fn_82F68CC0(lVar6 + uVar12,lVar6 + param_7,iVar4);
        }
        if ((int)*param_1 <= (int)uVar10) {
          uVar10 = *param_1 - 1;
        }
        if ((uVar10 & 1) != 0) {
          uVar10 = uVar10 - 1;
        }
        lVar6 = (longlong)
                ((int)((uVar10 - ((-1 - ((int)uVar1 >> 0x1f)) + (uint)(uVar1 == 0) & uVar1)) + 2) >>
                1);
        if (0 < lVar6) {
          lVar20 = (((int)uVar10 >> 1) - lVar6) + 1 + lVar19;
          fn_82F68CC0(lVar20 + uVar11,lVar20 + param_6,lVar6);
          fn_82F68CC0(lVar20 + uVar12,lVar20 + param_7,lVar6);
        }
        iVar13 = iVar13 + 2;
        iVar15 = iVar15 + 8;
        lVar19 = ((int)*param_1 >> 1) + lVar19;
      } while (iVar13 < (int)param_1[1]);
    }
    uVar2 = 0;
  }
  return uVar2;
}

