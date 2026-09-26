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
extern int fn_82248C08();
extern int fn_8240D928();


ulonglong fn_8224A980(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  ulonglong uVar2;
  uint uVar5;
  uint *puVar6;
  
  if (*(int **)(param_1 + 0x20) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
  }
  piVar1 = *(int **)(param_1 + 0x20);
  if (iVar3 == 0) {
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
    }
    if (iVar3 == 0) {
      uVar2 = fn_82248C08(param_1);
      return uVar2;
    }
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
    }
    iVar4 = fn_8240D928(param_2);
    uVar5 = *(uint *)(iVar3 + 0x24);
    iVar3 = iVar3 + 0xc;
  }
  else {
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(*piVar1 + 0x10))();
    }
    iVar4 = fn_8240D928(param_2);
    uVar5 = *(uint *)(iVar3 + 0x20);
    iVar3 = iVar3 + 8;
  }
  iVar4 = (iVar4 + 2) * 4;
  if (uVar5 < 5) {
    puVar6 = (uint *)(iVar4 + iVar3);
  }
  else {
    puVar6 = *(uint **)(iVar4 + iVar3);
  }
  return (ulonglong)*puVar6;
}

