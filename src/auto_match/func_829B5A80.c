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
extern int fn_829BAA90();
extern unsigned int lbl_820548A8;
extern unsigned int lbl_820548B0;


int fn_829B5A80(int *param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  longlong lVar7;
  int iVar9;
  ulonglong uVar8;
  
  iVar1 = param_1[1];
  if (0x3b9ac9f0 < (uint)param_3) {
    *(undefined4 *)(*param_1 + 0x14) = 0x36;
    *(undefined4 *)(*param_1 + 0x18) = 1;
    (**(code **)*param_1)();
  }
  if ((param_3 & 7) != 0) {
    param_3 = (param_3 - (param_3 & 7)) + 8;
  }
  iVar9 = (int)param_2;
  if ((iVar9 < 0) || (1 < iVar9)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xe;
    *(int *)(*param_1 + 0x18) = iVar9;
    (**(code **)*param_1)(param_1);
  }
  iVar2 = (int)((param_2 + 0xd & 0xffffffff) << 2);
  iVar9 = (int)param_3;
  puVar4 = *(undefined4 **)(iVar2 + iVar1);
  puVar3 = (undefined4 *)0x0;
  while (puVar5 = puVar4, puVar5 != (undefined4 *)0x0) {
    if ((param_3 & 0xffffffff) <= (ulonglong)(uint)puVar5[2]) goto LAB_829b5c30;
    puVar3 = puVar5;
    puVar4 = (undefined4 *)*puVar5;
  }
  lVar7 = param_3 + 0x10;
  if (puVar3 == (undefined4 *)0x0) {
    puVar6 = &lbl_820548A8;
  }
  else {
    puVar6 = &lbl_820548B0;
  }
  uVar8 = (ulonglong)*(uint *)(puVar6 + (int)((param_2 & 0xffffffff) << 2));
  if ((1000000000U - lVar7 & 0xffffffff) <
      (ulonglong)*(uint *)(puVar6 + (int)((param_2 & 0xffffffff) << 2))) {
    uVar8 = 1000000000U - lVar7;
  }
  puVar5 = (undefined4 *)fn_829BAA90(param_1,uVar8 + lVar7);
  while (puVar5 == (undefined4 *)0x0) {
    uVar8 = (uVar8 & 0xffffffff) >> 1;
    if (uVar8 < 0x32) {
      *(undefined4 *)(*param_1 + 0x14) = 0x36;
      *(undefined4 *)(*param_1 + 0x18) = 2;
      (**(code **)*param_1)(param_1);
    }
    puVar5 = (undefined4 *)fn_829BAA90(param_1,uVar8 + lVar7);
  }
  *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + (int)uVar8 + (int)lVar7;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = (int)uVar8 + iVar9;
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 **)(iVar2 + iVar1) = puVar5;
  }
  else {
    *puVar3 = puVar5;
  }
LAB_829b5c30:
  iVar1 = puVar5[1];
  puVar5[1] = iVar1 + iVar9;
  puVar5[2] = puVar5[2] - iVar9;
  return (int)puVar5 + iVar1 + 0x10;
}

