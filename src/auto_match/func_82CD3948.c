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


void fn_82CD3948(longlong param_1,int param_2,int param_3,longlong param_4,int param_5,int param_6
                  ,longlong param_7,longlong param_8)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int in_stack_00000054;
  
  param_8 = param_8 - param_7;
  uVar3 = (longlong)*(int *)(in_stack_00000054 + 0x38fc) * (longlong)(int)param_7;
  uVar2 = (longlong)*(int *)(in_stack_00000054 + 0x3904) * (longlong)(int)param_7;
  iVar5 = ((int)uVar3 >> 2) + (uint)((int)uVar3 < 0 && (uVar3 & 3) != 0);
  iVar4 = ((int)uVar2 >> 2) + (uint)((int)uVar2 < 0 && (uVar2 & 3) != 0);
  param_1 = *(uint *)(in_stack_00000054 + 0x38cc) + uVar3 + param_1;
  param_4 = *(uint *)(in_stack_00000054 + 0x38a8) + uVar2 + param_4;
  param_2 = *(int *)(in_stack_00000054 + 0x38d0) + iVar5 + param_2;
  param_3 = *(int *)(in_stack_00000054 + 0x38d4) + iVar5 + param_3;
  param_5 = *(int *)(in_stack_00000054 + 0x38ac) + iVar4 + param_5;
  param_6 = *(int *)(in_stack_00000054 + 0x38b0) + iVar4 + param_6;
  lVar6 = param_8;
  if (0 < param_8) {
    do {
      fn_82F68CC0(param_4,param_1,*(undefined4 *)(in_stack_00000054 + 0x3890));
      lVar6 = lVar6 + -1;
      param_4 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3904) + param_4;
      param_1 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38fc) + param_1;
    } while (lVar6 != 0);
  }
  if (0 < (int)param_8) {
    iVar4 = *(int *)(in_stack_00000054 + 0x3898);
    lVar6 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
    do {
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          uVar1 = *(undefined1 *)((iVar5 >> 1) + param_2);
          *(undefined1 *)(param_5 + 1 + iVar5) = uVar1;
          *(undefined1 *)(param_5 + iVar5) = uVar1;
          uVar1 = *(undefined1 *)((iVar5 >> 1) + param_3);
          *(undefined1 *)(param_6 + 1 + iVar5) = uVar1;
          *(undefined1 *)(iVar5 + param_6) = uVar1;
          iVar5 = iVar5 + 2;
          iVar4 = *(int *)(in_stack_00000054 + 0x3898);
        } while (iVar5 < iVar4);
      }
      iVar5 = *(int *)(in_stack_00000054 + 0x3934) * 2;
      param_5 = *(int *)(in_stack_00000054 + 0x3938) + param_5;
      param_6 = *(int *)(in_stack_00000054 + 0x3938) + param_6;
      param_2 = iVar5 + param_2;
      param_3 = iVar5 + param_3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

