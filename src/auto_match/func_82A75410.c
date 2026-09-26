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
extern int fn_82A6CF00();
extern int fn_82BA02A8();


undefined8 fn_82A75410(int param_1,ulonglong param_2,int *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x28);
  uVar7 = *(uint *)(param_1 + 0x24);
  iVar5 = *(int *)(param_1 + 0x20);
  pbVar8 = *(byte **)(param_1 + 0x1c);
  uVar2 = 0;
  uVar4 = *(uint *)(param_1 + 0x30);
  uVar6 = (ulonglong)uVar4;
  uVar3 = *(uint *)(param_1 + 0x2c);
  if (uVar9 < (param_2 & 0xffffffff)) {
    if (uVar6 != 0) {
      uVar1 = 0x20 - uVar9;
      if (uVar6 <= (0x20 - uVar9 & 0xffffffff)) {
        uVar1 = uVar6;
      }
      uVar4 = uVar4 - (uint)uVar1;
      uVar7 = uVar7 << ((uint)uVar1 & 0x3f) | uVar3 >> (uVar4 & 0x3f);
      uVar3 = (1 << (uVar4 & 0x3f)) - 1U & uVar3;
      uVar9 = uVar1 + uVar9;
    }
    uVar6 = (ulonglong)uVar7;
    if (*(code **)(param_1 + 0x54) == fn_82BA02A8) {
      for (; ((uVar9 & 0xffffffff) < 0x19 && (uVar7 = (uint)uVar6, iVar5 != 0)); iVar5 = iVar5 + -1)
      {
        uVar9 = uVar9 + 8;
        uVar6 = (uVar6 & 0xffffff) << 8 | (ulonglong)*pbVar8;
        uVar7 = (uint)uVar6;
        pbVar8 = pbVar8 + 1;
      }
    }
    else {
      for (; ((uVar9 & 0xffffffff) < 0x19 && (uVar7 = (uint)uVar6, iVar5 != 0)); iVar5 = iVar5 + -1)
      {
        uVar1 = (**(code **)(param_1 + 0x54))(*pbVar8);
        uVar9 = uVar9 + 8;
        uVar6 = (uVar6 & 0xffffff) << 8 | uVar1 & 0xffffffff000000ff;
        pbVar8 = pbVar8 + 1;
        uVar7 = (uint)uVar6;
      }
    }
    *(uint *)(param_1 + 0x24) = uVar7;
    *(int *)(param_1 + 0x28) = (int)uVar9;
    *(int *)(param_1 + 0x20) = iVar5;
    *(byte **)(param_1 + 0x1c) = pbVar8;
    *(uint *)(param_1 + 0x30) = uVar4;
    *(uint *)(param_1 + 0x2c) = uVar3;
    if ((uVar9 & 0xffffffff) < (param_2 & 0xffffffff)) {
      uVar2 = fn_82A6CF00(param_1,1,param_2);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if ((ulonglong)*(uint *)(param_1 + 0x28) < (param_2 & 0xffffffff)) {
        param_2 = (ulonglong)*(uint *)(param_1 + 0x28);
      }
    }
  }
  *param_3 = (*(uint *)(param_1 + 0x24) >>
             ((int)(short)((short)*(undefined4 *)(param_1 + 0x28) - (short)param_2) & 0x3fU)) <<
             (0x20U - (int)param_2 & 0x3f);
  return uVar2;
}

