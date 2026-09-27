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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82E182B0(int *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  struct { uint first; uint second; } stack_pair_40;

  uint uStack_38;
  uint uStack_34;
  
  uVar3 = (**(code **)(*param_1 + 0x20))();
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  uStack_38 = 0x80000000;
  puVar4 = (uint *)fn_82CE5410();
  uVar1 = (uint)param_2;
  stack_pair_40.first = *puVar4;
  uStack_38 = uVar1 | 0x80000000;
  *puVar4 = (uVar1 + 0x7f & 0xffffff80) + stack_pair_40.first;
  uStack_34 = stack_pair_40.first;
  iVar5 = fn_82CE5410();
  if ((int)(uStack_38 & 0x3fffffff) < (int)uVar1) {
    lVar6 = ((ulonglong)uStack_38 & 0x3fffffff) << 1;
    if ((int)lVar6 <= (int)uVar1) {
      lVar6 = param_2;
    }
    fn_82CE6310(*(undefined4 *)(iVar5 + 0x10),&stack_pair_40.first,lVar6);
  }
  uVar7 = param_2 - (ulonglong)stack_pair_40.second;
  if (0 < (longlong)uVar7) {
    lVar6 = (ulonglong)stack_pair_40.first + (ulonglong)stack_pair_40.second + -1;
    uVar2 = uVar7 & 0xffffffff;
    while (uVar2 != 0) {
      lVar6 = lVar6 + 1;
      *(undefined1 *)lVar6 = 0;
      uVar7 = uVar7 - 1;
      uVar2 = uVar7;
    }
  }
  uVar3 = param_2 - 1U & uVar3;
  stack_pair_40.second = uVar1;
  if ((int)uVar3 != 0) {
    (**(code **)(*param_1 + 0x10))(param_1,stack_pair_40.first,param_2 - uVar3);
  }
  uVar1 = uStack_34;
  stack_pair_40.second = -(uint)(stack_pair_40.first != uStack_34) & stack_pair_40.second;
  puVar4 = (uint *)fn_82CE5410();
  *puVar4 = uVar1;
  iVar5 = fn_82CE5410();
  stack_pair_40.second = 0;
  if ((uStack_38 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
              (*(int **)(iVar5 + 0x10),stack_pair_40.first,uStack_38 & 0x3fffffff,1);
  }
  return;
}

