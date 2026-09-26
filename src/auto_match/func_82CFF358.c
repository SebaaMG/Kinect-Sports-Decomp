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
extern int fn_82CFF040();
extern int fn_82CFF298();


void fn_82CFF358(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  uVar1 = param_2[3];
  lVar7 = (ulonglong)uVar1 - 1;
  if (0 < lVar7) {
    iVar6 = 0;
    do {
      uVar4 = *(undefined4 *)(param_2[2] + iVar6);
      fn_82CFF040(param_1,uVar4,*param_2);
      uVar2 = *param_2;
      iVar5 = fn_82CE5410();
      (**(code **)(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10),uVar4,uVar2);
      lVar7 = lVar7 + -1;
      iVar6 = iVar6 + 4;
    } while (lVar7 != 0);
  }
  if (uVar1 != 0) {
    uVar2 = *(undefined4 *)(uVar1 * 4 + param_2[2] + -4);
    fn_82CFF040(param_1,uVar2,param_2[1]);
    uVar4 = *param_2;
    iVar6 = fn_82CE5410();
    (**(code **)(**(int **)(iVar6 + 0x10) + 8))(*(int **)(iVar6 + 0x10),uVar2,uVar4);
  }
  iVar6 = fn_82CE5410();
  piVar3 = *(int **)(iVar6 + 0x10);
  param_2[3] = 0;
  if ((param_2[4] & 0x80000000) == 0) {
    (**(code **)(*piVar3 + 0x10))(piVar3,param_2[2],param_2[4] & 0x3fffffff,4);
  }
  param_2[2] = 0;
  param_2[4] = 0x80000000;
  fn_82CFF298(param_2);
  return;
}

