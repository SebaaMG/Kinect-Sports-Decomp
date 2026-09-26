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
extern int fn_82A4F4E0();
extern int fn_82F68CC0();


ulonglong fn_82A77E00(int param_1,ulonglong param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  puVar1 = *(uint **)(param_1 + 0xb8);
  uVar2 = *(uint *)(param_1 + 0xbc);
  uVar6 = (((ulonglong)puVar1[5] + (ulonglong)puVar1[4]) - (ulonglong)uVar2) + (ulonglong)*puVar1;
  if ((uVar6 & 0xffffffff) < (param_2 & 0xffffffff)) {
    if (*param_3 == 0) {
      *param_3 = *(uint *)(*(int *)(param_1 + 4) + 0x214);
    }
    fn_82F68CC0(*param_3,*(undefined4 *)(param_1 + 0xbc),uVar6);
    uVar5 = *(uint *)(param_1 + 0xbc) + uVar6;
    param_2 = uVar6;
  }
  else {
    if (*param_3 == 0) {
      *param_3 = uVar2;
    }
    else {
      fn_82F68CC0(*param_3,(ulonglong)uVar2,param_2);
    }
    uVar5 = *(uint *)(param_1 + 0xbc) + param_2;
  }
  puVar1 = *(uint **)(param_1 + 0xb8);
  *(int *)(param_1 + 0xbc) = (int)uVar5;
  *(ulonglong *)(param_1 + 200) = (param_2 & 0xffffffff) + *(longlong *)(param_1 + 200);
  if ((uVar5 & 0xffffffff) ==
      ((ulonglong)puVar1[5] + (ulonglong)puVar1[4] + (ulonglong)*puVar1 & 0xffffffff)) {
    if (*(int *)(param_1 + 0x108) != 0) {
      if ((*param_3 + param_2 & 0xffffffff) == (uVar5 & 0xffffffff)) {
        fn_82F68CC0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x214),(ulonglong)*param_3,param_2);
        *param_3 = *(uint *)(*(int *)(param_1 + 4) + 0x214);
      }
      piVar3 = *(int **)(param_1 + 0x108);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x28))
                  (piVar3,*(undefined4 *)(*(int *)(param_1 + 0xb8) + 4),
                   *(undefined4 *)(*(int *)(param_1 + 0xb8) + 8));
      }
      if ((*(uint *)(*(int *)(param_1 + 0xb8) + 8) & 0x80) != 0) {
        if (*(int **)(param_1 + 0x108) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x108) + 0xc))();
        }
      }
    }
    iVar4 = *(int *)(param_1 + 0xb8);
    if ((*(uint *)(iVar4 + 8) & 0x40) != 0) {
      *(undefined8 *)(param_1 + 200) = 0;
    }
    if (*(int *)(iVar4 + 0x24) == 0) {
      fn_82A4F4E0();
    }
    else {
      *(undefined4 *)(iVar4 + 0x24) = 0;
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  return param_2;
}

