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


longlong fn_82B41560(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5,ulonglong param_6,ulonglong param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  uint in_stack_00000054;
  
  uVar6 = (ulonglong)in_stack_00000054;
  if (((in_stack_00000054 == 0x19 || in_stack_00000054 == 0x12) || in_stack_00000054 == 0x11) ||
      (((~uVar6 & 0xffffffff) >> 0x1f) + (ulonglong)(8 < uVar6) & 1) != 0) {
    iVar9 = -1;
    iVar10 = -1;
  }
  else {
    if ((in_stack_00000054 == 0x16 || in_stack_00000054 == 0x13) ||
        (((~uVar6 & 0xffffffff) >> 0x1f) + (ulonglong)(0xc < uVar6) & 1) != 0) {
      iVar9 = 1;
      iVar12 = -1;
      iVar10 = 1;
      goto LAB_82b41648;
    }
    if (in_stack_00000054 == 0x17) {
      iVar9 = 1;
      iVar12 = -1;
      iVar10 = -1;
      goto LAB_82b41648;
    }
    iVar10 = 1;
    if (in_stack_00000054 == 0x18) {
      iVar9 = -1;
      iVar12 = -1;
      goto LAB_82b41648;
    }
    iVar9 = 1;
    iVar10 = 1;
  }
  iVar12 = 1;
LAB_82b41648:
  uVar1 = *(uint *)(param_8 + 0x54);
  lVar5 = (param_2 & 0xffffffff) * (param_5 & 0xffffffff);
  if ((int)uVar1 < 0) {
    uVar11 = lVar5 << ((longlong)(int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) & 0x7fU)
    ;
  }
  else {
    uVar11 = lVar5 >> ((longlong)(int)uVar1 & 0x7fU);
  }
  if ((((((in_stack_00000054 == 0xc || in_stack_00000054 == 0xb) || in_stack_00000054 == 8) ||
        in_stack_00000054 == 7) || in_stack_00000054 == 4) || in_stack_00000054 == 3) ||
      (((~uVar6 & 0xffffffff) >> 0x1f) + (ulonglong)(uVar6 < 0xf) & 1) != 0) {
    lVar5 = (param_6 & 0xffffffff) * (param_6 & 0xffffffff);
    uVar6 = lVar5 >> ((longlong)(*(int *)(param_8 + 0x48) + -1) & 0x7fU);
    uVar6 = (longlong)iVar12 * (param_3 & 0xffffffff) * ((longlong)uVar6 >> 1 | uVar6 & 1);
    if (0x10 < (int)in_stack_00000054) {
      uVar1 = *(uint *)(param_8 + 0x5c);
      uVar2 = *(uint *)(param_8 + 0x58);
      uVar7 = lVar5 >> ((longlong)(*(int *)(param_8 + 0x4c) + -1) & 0x7fU);
      uVar4 = (longlong)((longlong)iVar10 * (param_4 & 0xffffffff) * (param_7 & 0xffffffff)) >>
              ((longlong)(*(int *)(param_8 + 0x50) + -1) & 0x7fU);
      lVar5 = ((longlong)uVar4 >> 1 | uVar4 & 1) * ((longlong)uVar7 >> 1 | uVar7 & 1);
      uVar8 = (uint)((ulonglong)uVar1 - (ulonglong)uVar2);
      if ((longlong)((ulonglong)uVar1 - (ulonglong)uVar2) < 0) {
        lVar5 = lVar5 << ((longlong)(int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) &
                         0x7fU);
      }
      else {
        uVar3 = (int)(uVar2 - uVar1) >> 0x1f;
        uVar6 = uVar6 << ((longlong)(int)((uVar2 - uVar1 ^ uVar3) - uVar3) & 0x7fU);
      }
      if (-1 < (int)uVar8) {
        uVar2 = uVar1;
      }
      return ((param_1 & 0xffffffff) << ((longlong)(0x28 - *(int *)(param_8 + 0x20)) & 0x7fU)) +
             (*(ulonglong *)(param_8 + 0x70) & uVar11) * (longlong)iVar9 +
             (*(ulonglong *)(param_8 + 0x70) &
             (longlong)(lVar5 + uVar6) >> ((longlong)(int)uVar2 & 0x7fU));
    }
    lVar5 = ((param_1 & 0xffffffff) << ((longlong)(0x28 - *(int *)(param_8 + 0x20)) & 0x7fU)) +
            (*(ulonglong *)(param_8 + 0x70) & uVar11) * (longlong)iVar9;
    uVar6 = *(ulonglong *)(param_8 + 0x70) & uVar6;
  }
  else {
    uVar6 = (*(ulonglong *)(param_8 + 0x70) & uVar11) * (longlong)iVar9;
    lVar5 = (param_1 & 0xffffffff) << ((longlong)(0x28 - *(int *)(param_8 + 0x20)) & 0x7fU);
  }
  return lVar5 + uVar6;
}

