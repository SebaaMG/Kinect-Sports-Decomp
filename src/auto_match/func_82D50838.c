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
extern int fn_82D465A8();
extern unsigned int lbl_82137144;


undefined4 * fn_82D50838(undefined4 *param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint *puVar10;
  int aiStack_40 [16];
  
  fn_82D465A8(param_1,param_2,0);
  *param_1 = &lbl_82137144;
  puVar10 = param_1 + 0x18;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x80000000;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  iVar4 = fn_82CE5410();
  uVar5 = param_1[0x1a] & 0x3fffffff;
  piVar1 = *(int **)(iVar4 + 0x10);
  if ((int)uVar5 < param_3[1]) {
    if ((param_1[0x1a] & 0x80000000) == 0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*puVar10,uVar5,4);
    }
    aiStack_40[0] = param_3[1];
    uVar5 = (**(code **)(*piVar1 + 0xc))(piVar1,aiStack_40,4);
    *puVar10 = uVar5;
    param_1[0x1a] = aiStack_40[0];
  }
  uVar5 = param_3[1];
  uVar6 = 0;
  uVar2 = *puVar10;
  param_1[0x19] = uVar5;
  iVar4 = *param_3;
  if (3 < (int)uVar5) {
    puVar8 = (undefined4 *)(iVar4 + -4);
    lVar9 = (ulonglong)uVar2 + 4;
    lVar7 = (((ulonglong)uVar5 - 4 & 0xffffffff) >> 2) + 1;
    uVar6 = lVar7 * 4 & 0xfffffffc;
    do {
      puVar3 = (undefined4 *)lVar9;
      puVar3[-1] = puVar8[1];
      *puVar3 = *(undefined4 *)((iVar4 - uVar2) + (int)puVar3);
      puVar3[1] = puVar8[3];
      puVar8 = puVar8 + 4;
      puVar3[2] = *puVar8;
      lVar9 = lVar9 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((int)uVar6 < (int)uVar5) {
    lVar7 = uVar5 - uVar6;
    lVar9 = (uVar6 & 0x3fffffff) * 4 + (ulonglong)uVar2;
    do {
      *(undefined4 *)lVar9 = *(undefined4 *)((int)(undefined4 *)lVar9 + (iVar4 - uVar2));
      lVar9 = lVar9 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return param_1;
}

