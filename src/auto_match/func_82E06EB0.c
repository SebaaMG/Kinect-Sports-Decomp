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


void fn_82E06EB0(int param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  
  *(int *)(param_1 + 0x3c) = param_2;
  lVar5 = (longlong)*(int *)(param_1 + 0x50) * (longlong)param_2;
  iVar2 = fn_82CE5410();
  iVar6 = (int)lVar5;
  if ((int)(*(uint *)(param_1 + 0x38) & 0x3fffffff) < iVar6) {
    lVar4 = ((ulonglong)*(uint *)(param_1 + 0x38) & 0x3fffffff) << 1;
    if ((int)lVar4 <= iVar6) {
      lVar4 = lVar5;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),param_1 + 0x30,lVar4,1);
  }
  *(int *)(param_1 + 0x34) = iVar6;
  uVar1 = ((longlong)*(int *)(param_1 + 0x4c) * (longlong)param_2 & 0xffffffffU) >> 1;
  iVar2 = fn_82CE5410();
  uVar7 = (uint)uVar1;
  if ((*(uint *)(param_1 + 0x2c) & 0x3fffffff) < uVar7) {
    uVar3 = ((ulonglong)*(uint *)(param_1 + 0x2c) & 0x3fffffff) << 1;
    if ((uint)uVar3 <= uVar7) {
      uVar3 = uVar1;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),param_1 + 0x24,uVar3,2);
  }
  *(uint *)(param_1 + 0x28) = uVar7;
  uVar1 = ((longlong)*(int *)(param_1 + 0x48) * (longlong)param_2 & 0xffffffffU) >> 2;
  iVar2 = fn_82CE5410();
  uVar7 = (uint)uVar1;
  if ((*(uint *)(param_1 + 0x20) & 0x3fffffff) < uVar7) {
    uVar3 = ((ulonglong)*(uint *)(param_1 + 0x20) & 0x3fffffff) << 1;
    if ((uint)uVar3 <= uVar7) {
      uVar3 = uVar1;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),param_1 + 0x18,uVar3,4);
  }
  *(uint *)(param_1 + 0x1c) = uVar7;
  uVar1 = ((longlong)*(int *)(param_1 + 0x44) * (longlong)param_2 & 0xffffffffU) >> 2;
  iVar2 = fn_82CE5410();
  uVar7 = (uint)uVar1;
  if ((*(uint *)(param_1 + 0x14) & 0x3fffffff) < uVar7) {
    uVar3 = ((ulonglong)*(uint *)(param_1 + 0x14) & 0x3fffffff) << 1;
    if ((uint)uVar3 <= uVar7) {
      uVar3 = uVar1;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),param_1 + 0xc,uVar3,4);
  }
  *(uint *)(param_1 + 0x10) = uVar7;
  uVar1 = ((longlong)*(int *)(param_1 + 0x40) * (longlong)param_2 & 0xffffffffU) >> 4;
  iVar2 = fn_82CE5410();
  uVar7 = (uint)uVar1;
  if ((*(uint *)(param_1 + 8) & 0x3fffffff) < uVar7) {
    uVar3 = ((ulonglong)*(uint *)(param_1 + 8) & 0x3fffffff) << 1;
    if ((uint)uVar3 <= uVar7) {
      uVar3 = uVar1;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),param_1,uVar3,0x10);
  }
  *(uint *)(param_1 + 4) = uVar7;
  return;
}

