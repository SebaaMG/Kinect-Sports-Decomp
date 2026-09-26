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
extern int fn_82F68CC0();


ulonglong fn_829C50F0(int param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x30);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x34);
  uVar1 = *(uint *)(param_2 + 0xc);
  if (uVar4 < uVar7) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x2c);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar8 = uVar4 - uVar7;
  if ((ulonglong)uVar2 < (uVar4 - uVar7 & 0xffffffff)) {
    uVar8 = (ulonglong)uVar2;
  }
  if ((uVar8 & 0xffffffff) != 0) {
    param_3 = -(ulonglong)(param_3 != 0xfffffffffffffffb) & param_3;
  }
  *(uint *)(param_2 + 0x10) = uVar2 - (int)uVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + (int)uVar8;
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    uVar3 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),uVar7,uVar8);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    *(undefined4 *)(param_2 + 0x30) = uVar3;
  }
  fn_82F68CC0((ulonglong)uVar1,uVar7,uVar8);
  iVar5 = (int)(uVar8 + uVar7);
  lVar6 = uVar8 + uVar1;
  if ((uVar8 + uVar7 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 0x2c)) {
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar4 = (ulonglong)uVar1;
    if (*(uint *)(param_1 + 0x34) == *(uint *)(param_1 + 0x2c)) {
      *(uint *)(param_1 + 0x34) = uVar1;
    }
    uVar2 = *(uint *)(param_2 + 0x10);
    uVar7 = *(uint *)(param_1 + 0x34) - uVar4;
    if ((ulonglong)uVar2 < (uVar7 & 0xffffffff)) {
      uVar7 = (ulonglong)uVar2;
    }
    if ((uVar7 & 0xffffffff) != 0) {
      param_3 = -(ulonglong)(param_3 != 0xfffffffffffffffb) & param_3;
    }
    iVar5 = (int)uVar7;
    *(uint *)(param_2 + 0x10) = uVar2 - iVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + iVar5;
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      uVar3 = (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),uVar4,uVar7);
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      *(undefined4 *)(param_2 + 0x30) = uVar3;
    }
    fn_82F68CC0(lVar6,uVar4,uVar7);
    lVar6 = uVar7 + lVar6;
    iVar5 = iVar5 + uVar1;
  }
  *(int *)(param_2 + 0xc) = (int)lVar6;
  *(int *)(param_1 + 0x30) = iVar5;
  return param_3;
}

