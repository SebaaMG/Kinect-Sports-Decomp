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


void fn_82EDF428(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int in_stack_00000054;
  
  param_8 = param_8 - param_7;
  uVar2 = (longlong)*(int *)(in_stack_00000054 + 0x391c) * (longlong)(int)param_7;
  uVar1 = (longlong)*(int *)(in_stack_00000054 + 0x3924) * (longlong)(int)param_7;
  lVar4 = (longlong)((int)uVar2 >> 2) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 3) != 0);
  lVar3 = (longlong)((int)uVar1 >> 2) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 3) != 0);
  param_1 = *(uint *)(in_stack_00000054 + 0x38c8) + uVar2 + param_1;
  param_3 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38d0) + lVar4 + param_3;
  param_2 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38cc) + lVar4 + param_2;
  param_4 = *(uint *)(in_stack_00000054 + 0x38a4) + uVar1 + param_4;
  param_5 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38a8) + lVar3 + param_5;
  param_6 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38ac) + lVar3 + param_6;
  lVar3 = param_8;
  if (0 < param_8) {
    do {
      fn_82F68CC0(param_4,param_1,*(undefined4 *)(in_stack_00000054 + 0x388c));
      lVar3 = lVar3 + -1;
      param_4 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3924) + param_4;
      param_1 = (ulonglong)*(uint *)(in_stack_00000054 + 0x391c) + param_1;
    } while (lVar3 != 0);
  }
  if (0 < (int)param_8) {
    lVar3 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
    do {
      fn_82F68CC0(param_5,param_2,*(undefined4 *)(in_stack_00000054 + 0x3894));
      lVar3 = lVar3 + -1;
      param_5 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3958) + param_5;
      param_2 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3954) + param_2;
    } while (lVar3 != 0);
    if (0 < (int)param_8) {
      lVar3 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
      do {
        fn_82F68CC0(param_6,param_3,*(undefined4 *)(in_stack_00000054 + 0x3894));
        lVar3 = lVar3 + -1;
        param_6 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3958) + param_6;
        param_3 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3954) + param_3;
      } while (lVar3 != 0);
    }
  }
  return;
}

