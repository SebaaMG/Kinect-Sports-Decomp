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
extern int fn_82415090();
extern int fn_82427540();


undefined8 fn_824276D0(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar9;
  ulonglong uVar7;
  undefined8 uVar8;
  bool bVar10;
  
  iVar1 = *param_1;
  uVar6 = fn_82427540(param_1,iVar1);
  iVar5 = *(int *)((iVar1 + -1) * 4 + param_1[1]);
  piVar2 = *(int **)(iVar5 + 4);
  if ((piVar2 == (int *)0x0) || (bVar10 = true, *piVar2 != 10)) {
    bVar10 = false;
  }
  if (!bVar10) {
    if (piVar2 == (int *)0x0) {
LAB_82427764:
      bVar10 = false;
    }
    else {
      piVar3 = *(int **)(iVar5 + 8);
      if (piVar3 == (int *)0x0) goto LAB_82427764;
      bVar10 = true;
      if (*piVar3 + *piVar2 != 10) goto LAB_82427764;
    }
    if (!bVar10) {
      uVar9 = fn_82415090();
      goto LAB_82427780;
    }
  }
  uVar9 = 10;
LAB_82427780:
  bVar10 = true;
  puVar4 = (undefined4 *)param_2[1];
  for (param_2 = (undefined4 *)*param_2; param_2 != puVar4; param_2 = param_2 + 1) {
    uVar7 = fn_82427540(*param_2,iVar1);
    bVar10 = (bool)(uVar6 < uVar7 & bVar10);
  }
  if ((!bVar10) || (uVar8 = 1, param_3 < uVar9)) {
    uVar8 = 0;
  }
  return uVar8;
}

