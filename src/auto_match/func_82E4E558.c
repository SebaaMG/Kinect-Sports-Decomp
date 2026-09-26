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


void fn_82E4E558(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,uint param_7,uint param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int in_stack_00000054;
  
  uVar6 = (longlong)(int)param_7 * (longlong)*(int *)(in_stack_00000054 + 0x388c);
  uVar2 = (longlong)*(int *)(in_stack_00000054 + 0x38b0) * (longlong)(int)param_7;
  lVar5 = (longlong)((int)uVar6 >> 2) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 3) != 0);
  param_1 = uVar2 + param_1;
  lVar3 = (longlong)((int)uVar2 >> 2) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 3) != 0);
  param_2 = lVar3 + param_2;
  lVar1 = (longlong)((int)param_7 >> 1) + (ulonglong)((int)param_7 < 0 && (param_7 & 1) != 0);
  lVar3 = lVar3 + param_3;
  lVar4 = (longlong)((int)param_8 >> 1) + (ulonglong)((int)param_8 < 0 && (param_8 & 1) != 0);
  param_4 = uVar6 + param_4;
  param_5 = lVar5 + param_5;
  lVar5 = lVar5 + param_6;
  if ((int)lVar1 < (int)lVar4) {
    lVar4 = lVar4 - lVar1;
    do {
      fn_82F68CC0(param_4,param_1,*(undefined4 *)(in_stack_00000054 + 0x388c));
      param_4 = (ulonglong)*(uint *)(in_stack_00000054 + 0x388c) + param_4;
      param_1 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38b0) + param_1;
      fn_82F68CC0(param_4,param_1);
      param_1 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38b0) + param_1;
      param_4 = param_4 + (ulonglong)*(uint *)(in_stack_00000054 + 0x388c);
      fn_82F68CC0(param_5,param_2,*(undefined4 *)(in_stack_00000054 + 0x3894));
      fn_82F68CC0(lVar5,lVar3,*(undefined4 *)(in_stack_00000054 + 0x3894));
      lVar4 = lVar4 + -1;
      param_2 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38b8) + param_2;
      lVar3 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38b8) + lVar3;
      param_5 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3894) + param_5;
      lVar5 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3894) + lVar5;
    } while (lVar4 != 0);
  }
  return;
}

