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


undefined8
fn_82CB9530(int param_1,ulonglong param_2,ulonglong param_3,uint param_4,ulonglong param_5,
             int param_6,int param_7,int param_8)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *in_stack_00000054;
  uint *in_stack_0000005c;
  int in_stack_00000064;
  
  iVar6 = (int)param_2;
  uVar13 = ((longlong)(int)param_3 * (longlong)(int)param_5 + param_2) - 1;
  if (in_stack_00000064 == 0) {
    if (iVar6 == 0) {
      if ((*(int *)(param_1 + 0x88) == 1) && (0 < (int)param_4)) {
        uVar13 = (uVar13 - param_5) + 1;
        goto LAB_82cb9594;
      }
      uVar16 = 0;
      uVar18 = 0;
    }
    else {
      iVar11 = (int)((uVar13 & 0xffffffff) << 1);
      uVar18 = (uint)*(short *)(iVar11 + param_7);
      uVar16 = (uint)*(short *)(iVar11 + param_8);
    }
    uVar13 = (uVar13 - param_5) + 1;
    iVar11 = (int)((uVar13 & 0xffffffff) << 1);
    sVar1 = *(short *)(iVar11 + param_7);
    uVar19 = (uint)sVar1;
    uVar17 = (uint)*(short *)(iVar11 + param_8);
    if (param_4 == 0) {
      if ((*(int *)(param_1 + 0xd48) != 0) || (iVar6 != 0)) {
        if ((((param_2 ^ param_3) & 1) == 0) || (lVar4 = 0, (int)param_5 + -1 <= iVar6)) {
          lVar4 = 1;
        }
        uVar13 = uVar13 + lVar4 * -2;
      }
      uVar13 = uVar13 + 1;
    }
    else if (param_4 == 1) {
      uVar13 = ((((~(param_5 - 2 ^ param_2) & 0xffffffff) >> 0x1f) +
                 (ulonglong)(param_5 - 2 <= param_2) & 1) * 3 + uVar13) - 1;
    }
    else if (param_4 < 3) {
      uVar13 = (((((~(param_5 - 1 ^ param_2) & 0xffffffff) >> 0x1f) +
                 (ulonglong)(param_5 - 1 <= param_2)) * 2 & 2) + uVar13) - 1;
    }
    iVar11 = (int)((uVar13 & 0xffffffff) << 1);
    sVar2 = *(short *)(iVar11 + param_7);
    uVar14 = (uint)sVar2;
    uVar12 = (uint)*(short *)(iVar11 + param_8);
    uVar9 = ((uint)LZCOUNT(sVar2 + -0x4000) >> 5) + ((uint)LZCOUNT(sVar1 + -0x4000) >> 5) +
            ((uint)LZCOUNT(uVar18 - 0x4000) >> 5);
    if (1 < uVar9) goto LAB_82cb95b0;
    if (uVar9 == 1) {
      if (sVar1 == 0x4000) {
        uVar17 = 0;
        uVar19 = 0;
      }
      else if (sVar2 == 0x4000) {
        uVar12 = 0;
        uVar14 = 0;
      }
      else if (uVar18 == 0x4000) {
        uVar16 = 0;
        uVar18 = 0;
      }
    }
    uVar5 = uVar14 - uVar18 ^ uVar14 - uVar19;
    uVar3 = uVar18 - uVar19 ^ uVar14 - uVar19;
    uVar15 = uVar12 - uVar16 ^ uVar12 - uVar17;
    uVar9 = uVar16 - uVar17 ^ uVar12 - uVar17;
    uVar18 = uVar18 & ~((int)(uVar5 | uVar3) >> 0x1f) | (int)uVar5 >> 0x1f & uVar14 |
             (int)uVar3 >> 0x1f & uVar19;
    uVar16 = uVar16 & ~((int)(uVar15 | uVar9) >> 0x1f) | (int)uVar15 >> 0x1f & uVar12 |
             (int)uVar9 >> 0x1f & uVar17;
LAB_82cb95a8:
    if (uVar18 == 0x4000) {
LAB_82cb95b0:
      *in_stack_0000005c = 0;
      *in_stack_00000054 = 0;
      return 1;
    }
  }
  else {
    if (0 < iVar6) {
LAB_82cb9594:
      iVar11 = (int)((uVar13 & 0xffffffff) << 1);
      uVar16 = (uint)*(short *)(iVar11 + param_8);
      uVar18 = (uint)*(short *)(iVar11 + param_7);
      goto LAB_82cb95a8;
    }
    uVar16 = 0;
    uVar18 = 0;
  }
  iVar10 = uVar18 + iVar6 * 0x20;
  iVar6 = uVar16 + (int)param_3 * 0x20;
  iVar11 = -0x3c;
  if (param_4 != 1) {
    iVar11 = -0x1c;
  }
  iVar7 = (int)((param_5 & 0xffffffff) << 5) + -4;
  iVar8 = param_6 * 0x20 + -4;
  if (iVar10 < iVar11) {
    iVar10 = iVar11 - iVar10;
LAB_82cb97e0:
    uVar18 = iVar10 + uVar18;
  }
  else if (iVar7 < iVar10) {
    iVar10 = iVar7 - iVar10;
    goto LAB_82cb97e0;
  }
  if (iVar6 < iVar11) {
    iVar11 = iVar11 - iVar6;
  }
  else {
    if (iVar6 <= iVar8) goto LAB_82cb9804;
    iVar11 = iVar8 - iVar6;
  }
  uVar16 = iVar11 + uVar16;
LAB_82cb9804:
  *in_stack_00000054 = uVar18;
  *in_stack_0000005c = uVar16;
  return 0;
}

