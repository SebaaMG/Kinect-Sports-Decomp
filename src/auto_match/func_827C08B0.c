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
extern int fn_827C8ED8();
extern unsigned int lbl_82017AD8;
extern unsigned int lbl_82017AE0;


int fn_827C08B0(int *param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
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
  puVar6 = (undefined4 *)0x0;
  puVar3 = *(undefined4 **)(iVar2 + iVar1);
  iVar9 = (int)param_3;
  if (puVar3 != (undefined4 *)0x0) {
    do {
      puVar4 = puVar3;
      puVar3 = puVar4;
      if ((param_3 & 0xffffffff) <= (ulonglong)(uint)puVar4[2]) break;
      puVar3 = (undefined4 *)*puVar4;
      puVar6 = puVar4;
    } while (puVar3 != (undefined4 *)0x0);
    if (puVar3 != (undefined4 *)0x0) goto LAB_827c0a44;
  }
  lVar7 = param_3 + 0x10;
  puVar5 = &lbl_82017AD8;
  if (puVar6 != (undefined4 *)0x0) {
    puVar5 = &lbl_82017AE0;
  }
  uVar8 = (ulonglong)*(uint *)(puVar5 + (int)((param_2 & 0xffffffff) << 2));
  if ((1000000000U - lVar7 & 0xffffffff) <
      (ulonglong)*(uint *)(puVar5 + (int)((param_2 & 0xffffffff) << 2))) {
    uVar8 = 1000000000U - lVar7;
  }
  while( true ) {
    puVar3 = (undefined4 *)fn_827C8ED8(param_1,uVar8 + lVar7);
    if (puVar3 != (undefined4 *)0x0) break;
    uVar8 = (uVar8 & 0xffffffff) >> 1;
    if (uVar8 < 0x32) {
      *(undefined4 *)(*param_1 + 0x14) = 0x36;
      *(undefined4 *)(*param_1 + 0x18) = 2;
      (**(code **)*param_1)(param_1);
    }
  }
  *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + (int)uVar8 + (int)lVar7;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = (int)uVar8 + iVar9;
  if (puVar6 == (undefined4 *)0x0) {
    *(undefined4 **)(iVar2 + iVar1) = puVar3;
  }
  else {
    *puVar6 = puVar3;
  }
LAB_827c0a44:
  iVar1 = puVar3[1];
  puVar3[1] = iVar1 + iVar9;
  puVar3[2] = puVar3[2] - iVar9;
  return (int)puVar3 + iVar1 + 0x10;
}

