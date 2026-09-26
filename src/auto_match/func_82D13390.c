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
extern int fn_82CE63B0();


int fn_82D13390(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  
  iVar4 = fn_82CE5410();
  iVar4 = (**(code **)(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x808);
  lVar9 = 0x20;
  piVar3 = (int *)(iVar4 + 0x7c0);
  piVar8 = (int *)0;
  do {
    piVar7 = piVar3;
    *piVar7 = (int)piVar8;
    lVar9 = lVar9 + -1;
    piVar3 = piVar7 + -0x10;
    piVar8 = piVar7;
  } while (lVar9 != 0);
  *(int **)(iVar4 + 0x800) = piVar7;
  *(undefined4 *)(iVar4 + 0x804) = 0;
  iVar5 = fn_82CE5410();
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),param_1,4);
  }
  *(int *)(param_1[1] * 4 + *param_1) = iVar4;
  iVar5 = param_1[1];
  iVar6 = iVar5 + 1;
  param_1[1] = iVar6;
  if (1 < iVar6) {
    puVar1 = (undefined4 *)*param_1;
    uVar2 = *puVar1;
    *puVar1 = puVar1[iVar5];
    *(undefined4 *)(param_1[1] * 4 + *param_1 + -4) = uVar2;
  }
  return iVar4;
}

