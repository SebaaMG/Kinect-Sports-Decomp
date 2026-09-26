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
fn_82F262C8(int param_1,ulonglong param_2,ulonglong param_3,uint param_4,ulonglong param_5,
             int param_6,int param_7,int param_8)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *in_stack_00000054;
  int *in_stack_0000005c;
  int in_stack_00000064;
  
  iVar3 = (int)param_2;
  uVar6 = ((longlong)(int)param_3 * (longlong)(int)param_5 + param_2) - 1;
  if (in_stack_00000064 == 0) {
    if (iVar3 == 0) {
      if ((*(int *)(param_1 + 0x2d0) == 1) && (0 < (int)param_4)) {
        uVar6 = (uVar6 - param_5) + 1;
        goto LAB_82f26338;
      }
      iVar9 = 0;
      iVar11 = 0;
    }
    else {
      iVar10 = (int)((uVar6 & 0xffffffff) << 1);
      iVar11 = (int)*(short *)(iVar10 + param_7);
      iVar9 = (int)*(short *)(iVar10 + param_8);
    }
    uVar6 = (uVar6 - param_5) + 1;
    iVar10 = (int)((uVar6 & 0xffffffff) << 1);
    sVar1 = *(short *)(iVar10 + param_7);
    iVar12 = (int)sVar1;
    iVar10 = (int)*(short *)(iVar10 + param_8);
    if (param_4 == 0) {
      if ((*(int *)(param_1 + 0x87c) != 0) || (iVar3 != 0)) {
        if ((((param_2 ^ param_3) & 1) == 0) || (lVar4 = 0, (int)param_5 + -1 <= iVar3)) {
          lVar4 = 1;
        }
        uVar6 = uVar6 + lVar4 * -2;
      }
      uVar6 = uVar6 + 1;
    }
    else if (param_4 == 1) {
      uVar6 = ((((~(param_5 - 2 ^ param_2) & 0xffffffff) >> 0x1f) +
                (ulonglong)(param_5 - 2 <= param_2) & 1) * 3 + uVar6) - 1;
    }
    else if (param_4 < 3) {
      uVar6 = (((((~(param_5 - 1 ^ param_2) & 0xffffffff) >> 0x1f) +
                (ulonglong)(param_5 - 1 <= param_2)) * 2 & 2) + uVar6) - 1;
    }
    iVar2 = (int)((uVar6 & 0xffffffff) << 1);
    iVar7 = (int)*(short *)(iVar2 + param_7);
    iVar2 = (int)*(short *)(iVar2 + param_8);
    uVar5 = ((uint)LZCOUNT(iVar7 + -0x4000) >> 5) + ((uint)LZCOUNT(sVar1 + -0x4000) >> 5) +
            ((uint)LZCOUNT(iVar11 + -0x4000) >> 5);
    if (1 < uVar5) {
      *in_stack_00000054 = 0x4000;
      *in_stack_0000005c = 0;
      *in_stack_00000054 = 0;
      return 1;
    }
    if (uVar5 == 1) {
      if (iVar12 == 0x4000) {
        iVar10 = 0;
        iVar12 = 0;
      }
      else if (iVar7 == 0x4000) {
        iVar2 = 0;
        iVar7 = 0;
      }
      else if (iVar11 == 0x4000) {
        iVar9 = 0;
        iVar11 = 0;
      }
    }
    iVar8 = iVar12;
    if (iVar7 < iVar12) {
      iVar8 = iVar7;
      iVar7 = iVar12;
    }
    if ((iVar8 <= iVar11) && (iVar8 = iVar7, iVar11 < iVar7)) {
      iVar8 = iVar11;
    }
    *in_stack_00000054 = iVar8;
    if (iVar2 < iVar10) {
      if (iVar9 < iVar2) {
LAB_82f2655c:
        iVar10 = iVar2;
      }
      else if (iVar9 < iVar10) {
        iVar10 = iVar9;
      }
    }
    else if ((iVar10 <= iVar9) && (iVar10 = iVar9, iVar2 <= iVar9)) goto LAB_82f2655c;
LAB_82f26350:
    *in_stack_0000005c = iVar10;
    if (*in_stack_00000054 == 0x4000) {
      *in_stack_0000005c = 0;
      *in_stack_00000054 = 0;
      return 1;
    }
  }
  else {
    if (0 < iVar3) {
LAB_82f26338:
      iVar10 = (int)((uVar6 & 0xffffffff) << 1);
      *in_stack_00000054 = (int)*(short *)(iVar10 + param_7);
      iVar10 = (int)*(short *)(iVar10 + param_8);
      goto LAB_82f26350;
    }
    *in_stack_0000005c = 0;
    *in_stack_00000054 = 0;
  }
  iVar10 = *in_stack_00000054;
  iVar9 = -0x3c;
  iVar11 = iVar10 + iVar3 * 0x20;
  iVar3 = *in_stack_0000005c + (int)param_3 * 0x20;
  if (param_4 != 1) {
    iVar9 = -0x1c;
  }
  iVar2 = param_6 * 0x20 + -4;
  iVar12 = (int)((param_5 & 0xffffffff) << 5) + -4;
  if (iVar11 < iVar9) {
    iVar12 = (iVar10 - iVar11) + iVar9;
  }
  else {
    if (iVar11 <= iVar12) goto LAB_82f265d8;
    iVar12 = (iVar10 - iVar11) + iVar12;
  }
  *in_stack_00000054 = iVar12;
LAB_82f265d8:
  if (iVar3 < iVar9) {
    *in_stack_0000005c = (*in_stack_0000005c - iVar3) + iVar9;
  }
  else if (iVar2 < iVar3) {
    *in_stack_0000005c = (*in_stack_0000005c - iVar3) + iVar2;
  }
  return 0;
}

