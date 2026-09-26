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
extern int fn_82A1F248();
extern int fn_82CAEDF0();
extern int fn_82CAF0C0();


void fn_82CD9CA0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int in_stack_00000054;
  
  param_8 = param_8 - param_7;
  uVar12 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3904);
  lVar3 = (longlong)*(int *)(in_stack_00000054 + 0x38fc) * (longlong)(int)param_7;
  lVar13 = (longlong)(int)*(uint *)(in_stack_00000054 + 0x3904) * (longlong)(int)param_7;
  lVar5 = (longlong)((int)lVar3 >> 2);
  lVar4 = (longlong)((int)lVar13 >> 2);
  uVar11 = *(uint *)(in_stack_00000054 + 0x3890);
  param_3 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38d4) + lVar5 + param_3;
  param_1 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38cc) + lVar3 + param_1;
  param_2 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38d0) + lVar5 + param_2;
  param_4 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38a8) + lVar13 + param_4;
  param_5 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38ac) + lVar4 + param_5;
  param_6 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38b0) + lVar4 + param_6;
  if (*(int *)(in_stack_00000054 + 0x34) == 0) {
    uVar6 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3938);
    uVar7 = *(uint *)(in_stack_00000054 + 0x3898);
    uVar9 = uVar6;
    uVar10 = uVar7;
  }
  else {
    uVar7 = *(uint *)(in_stack_00000054 + 0x3920);
    uVar12 = (ulonglong)uVar7;
    if ((int)uVar7 <= (int)uVar11) {
      uVar11 = uVar7;
    }
    uVar7 = *(uint *)(in_stack_00000054 + 0x3898);
    uVar1 = *(uint *)(in_stack_00000054 + 0x3924);
    uVar9 = (ulonglong)uVar1;
    uVar10 = uVar7;
    if ((int)uVar1 <= (int)uVar7) {
      uVar10 = uVar1;
    }
    uVar6 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3928);
    if ((int)*(uint *)(in_stack_00000054 + 0x3928) <= (int)uVar7) {
      uVar7 = *(uint *)(in_stack_00000054 + 0x3928);
    }
  }
  uVar2 = fn_82A1F248(param_4);
  iVar8 = (int)param_8;
  if (((~uVar2 & 0x400) == 0) || ((~uVar2 & 0x200) == 0)) {
    lVar3 = param_8;
    if (0 < iVar8) {
      do {
        fn_82CAF0C0(param_4,param_1,uVar11);
        lVar3 = lVar3 + -1;
        param_4 = uVar12 + param_4;
        param_1 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38fc) + param_1;
      } while (lVar3 != 0);
    }
  }
  else {
    lVar3 = param_8;
    if (0 < iVar8) {
      do {
        fn_82CAEDF0(param_4,param_1,uVar11);
        lVar3 = lVar3 + -1;
        param_4 = uVar12 + param_4;
        param_1 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38fc) + param_1;
      } while (lVar3 != 0);
    }
  }
  uVar12 = fn_82A1F248(param_5);
  if (((~uVar12 & 0x400) == 0) || ((~uVar12 & 0x200) == 0)) {
    if (0 < iVar8) {
      lVar3 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
      do {
        fn_82CAF0C0(param_5,param_2,uVar10);
        lVar3 = lVar3 + -1;
        param_5 = uVar9 + param_5;
        param_2 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3934) + param_2;
      } while (lVar3 != 0);
    }
  }
  else if (0 < iVar8) {
    lVar3 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
    do {
      fn_82CAEDF0(param_5,param_2,uVar10);
      lVar3 = lVar3 + -1;
      param_5 = uVar9 + param_5;
      param_2 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3934) + param_2;
    } while (lVar3 != 0);
  }
  uVar12 = fn_82A1F248(param_6);
  if (((~uVar12 & 0x400) == 0) || ((~uVar12 & 0x200) == 0)) {
    if (0 < iVar8) {
      lVar3 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
      do {
        fn_82CAF0C0(param_6,param_3,uVar7);
        lVar3 = lVar3 + -1;
        param_6 = uVar6 + param_6;
        param_3 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3934) + param_3;
      } while (lVar3 != 0);
    }
  }
  else if (0 < iVar8) {
    lVar3 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
    do {
      fn_82CAEDF0(param_6,param_3,uVar7);
      lVar3 = lVar3 + -1;
      param_6 = uVar6 + param_6;
      param_3 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3934) + param_3;
    } while (lVar3 != 0);
  }
  return;
}

