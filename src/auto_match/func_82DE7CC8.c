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
extern int fn_82DE7A20();
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_82DE7CC8(undefined8 param_1,int param_2,ulonglong param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  struct { int first; uint second; } stack_pair_50;

  uint uStack_48;
  int iStack_44;
  
  stack_pair_50.first = 0;
  stack_pair_50.second = 0;
  uStack_48 = 0x80000000;
  piVar1 = (int *)fn_82CE5410();
  uStack_48 = (uint)param_3 | 0x80000000;
  stack_pair_50.first = *piVar1;
  *piVar1 = ((int)((param_3 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + stack_pair_50.first;
  if (0 < (int)(uint)param_3) {
    puVar3 = (undefined4 *)(param_2 + -4);
    do {
      puVar3 = puVar3 + 1;
      *(undefined4 *)(stack_pair_50.second * 4 + stack_pair_50.first) = *puVar3;
      stack_pair_50.second = stack_pair_50.second + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  iStack_44 = stack_pair_50.first;
  fn_82DE7A20(param_1,&stack_pair_50.first,param_4);
  iVar2 = iStack_44;
  stack_pair_50.second = -(uint)(stack_pair_50.first != iStack_44) & stack_pair_50.second;
  piVar1 = (int *)fn_82CE5410();
  *piVar1 = iVar2;
  iVar2 = fn_82CE5410();
  stack_pair_50.second = 0;
  if ((uStack_48 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),stack_pair_50.first,uStack_48 & 0x3fffffff,4);
  }
  return;
}

