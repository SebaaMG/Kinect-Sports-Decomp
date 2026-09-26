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


void fn_82E16698(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar7;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar8;
  
  iVar2 = fn_82CE5410();
  uVar1 = *(uint *)(param_1 + 0x5c);
  uVar8 = (ulonglong)uVar1;
  uVar6 = (ulonglong)param_2[1];
  if ((int)uVar1 <= (int)param_2[1]) {
    uVar6 = uVar8;
  }
  if ((int)(param_2[2] & 0x3fffffff) < (int)uVar1) {
    uVar3 = ((ulonglong)param_2[2] & 0x3fffffff) << 1;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar8;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),param_2,uVar3,8);
  }
  puVar7 = (undefined4 *)*param_2;
  if (0 < (int)uVar6) {
    iVar2 = *(int *)(param_1 + 0x58) - (int)puVar7;
    uVar3 = uVar6;
    do {
      uVar3 = uVar3 - 1;
      *puVar7 = *(undefined4 *)(iVar2 + (int)puVar7);
      puVar7[1] = *(undefined4 *)((int)puVar7 + iVar2 + 4);
      puVar7 = puVar7 + 2;
    } while (uVar3 != 0);
  }
  lVar5 = (uVar6 & 0x1fffffff) * 8;
  lVar4 = uVar8 - uVar6;
  uVar6 = (ulonglong)*param_2 + lVar5;
  if (0 < lVar4) {
    iVar2 = (*(int *)(param_1 + 0x58) + (int)lVar5) - (int)uVar6;
    do {
      if ((uVar6 & 0xffffffff) != 0) {
        puVar7 = (undefined4 *)uVar6;
        *puVar7 = *(undefined4 *)(iVar2 + (int)puVar7);
        puVar7[1] = *(undefined4 *)((int)puVar7 + iVar2 + 4);
      }
      lVar4 = lVar4 + -1;
      uVar6 = uVar6 + 8;
    } while (lVar4 != 0);
  }
  param_2[1] = uVar1;
  iVar2 = fn_82CE5410();
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar8 = (ulonglong)uVar1;
  uVar6 = (ulonglong)param_3[1];
  if ((int)uVar1 <= (int)param_3[1]) {
    uVar6 = uVar8;
  }
  if ((int)(param_3[2] & 0x3fffffff) < (int)uVar1) {
    uVar3 = ((ulonglong)param_3[2] & 0x3fffffff) << 1;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar8;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),param_3,uVar3,8);
  }
  puVar7 = (undefined4 *)*param_3;
  if (0 < (int)uVar6) {
    iVar2 = *(int *)(param_1 + 0x4c) - (int)puVar7;
    uVar3 = uVar6;
    do {
      uVar3 = uVar3 - 1;
      *puVar7 = *(undefined4 *)(iVar2 + (int)puVar7);
      puVar7[1] = *(undefined4 *)((int)puVar7 + iVar2 + 4);
      puVar7 = puVar7 + 2;
    } while (uVar3 != 0);
  }
  lVar5 = (uVar6 & 0x1fffffff) * 8;
  lVar4 = uVar8 - uVar6;
  uVar6 = lVar5 + (ulonglong)*param_3;
  if (0 < lVar4) {
    iVar2 = (*(int *)(param_1 + 0x4c) + (int)lVar5) - (int)uVar6;
    do {
      if ((uVar6 & 0xffffffff) != 0) {
        puVar7 = (undefined4 *)uVar6;
        *puVar7 = *(undefined4 *)(iVar2 + (int)puVar7);
        puVar7[1] = *(undefined4 *)((int)puVar7 + iVar2 + 4);
      }
      lVar4 = lVar4 + -1;
      uVar6 = uVar6 + 8;
    } while (lVar4 != 0);
  }
  param_3[1] = uVar1;
  return;
}

