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


undefined8 fn_82A75588(int param_1,ulonglong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  
  uVar12 = (ulonglong)*(uint *)(param_1 + 0x20);
  uVar2 = 0;
  uVar5 = *(uint *)(param_1 + 0x30);
  uVar10 = *(uint *)(param_1 + 0x28);
  uVar9 = (ulonglong)uVar10;
  uVar7 = *(uint *)(param_1 + 0x24);
  uVar6 = (ulonglong)uVar7;
  pbVar11 = *(byte **)(param_1 + 0x1c);
  if ((((ulonglong)*(uint *)(param_1 + 0x20) & 0x1fffffff) * 8 + (ulonglong)uVar5 + uVar9 &
      0xffffffff) < (param_2 & 0xffffffff)) {
    uVar3 = uVar9;
    if (*(code **)(param_1 + 0x54) == fn_82BA02A8) {
      while (uVar3 < 0x19) {
        uVar10 = (uint)uVar9;
        uVar7 = (uint)uVar6;
        if ((uVar12 & 0xffffffff) == 0) break;
        uVar9 = uVar9 + 8;
        uVar10 = (uint)uVar9;
        uVar6 = (uVar6 & 0xffffff) << 8 | (ulonglong)*pbVar11;
        uVar7 = (uint)uVar6;
        pbVar11 = pbVar11 + 1;
        uVar12 = uVar12 - 1;
        uVar3 = uVar9 & 0xffffffff;
      }
      uVar8 = 0;
      if ((uVar12 & 0xffffffff) != 0) {
        uVar5 = (int)((uVar12 & 0xffffffff) << 3) + uVar5;
        uVar9 = uVar12;
        uVar8 = 0;
        do {
          bVar1 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          uVar8 = uVar8 << 8 | (uint)bVar1;
          uVar12 = uVar12 - 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else {
      while (uVar3 < 0x19) {
        uVar10 = (uint)uVar9;
        uVar7 = (uint)uVar6;
        if ((uVar12 & 0xffffffff) == 0) break;
        uVar3 = (**(code **)(param_1 + 0x54))(*pbVar11);
        uVar9 = uVar9 + 8;
        uVar10 = (uint)uVar9;
        uVar6 = (uVar6 & 0xffffff) << 8 | uVar3 & 0xffffffff000000ff;
        uVar7 = (uint)uVar6;
        pbVar11 = pbVar11 + 1;
        uVar12 = uVar12 - 1;
        uVar3 = uVar9 & 0xffffffff;
      }
      uVar8 = 0;
      if ((uVar12 & 0xffffffff) != 0) {
        uVar5 = (int)((uVar12 & 0xffffffff) << 3) + uVar5;
        uVar9 = uVar12;
        uVar8 = 0;
        do {
          uVar4 = (**(code **)(param_1 + 0x54))(*pbVar11);
          uVar8 = uVar8 << 8 | uVar4 & 0xff;
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          uVar12 = 0;
        } while (uVar9 != 0);
      }
    }
    *(uint *)(param_1 + 0x24) = uVar7;
    *(uint *)(param_1 + 0x28) = uVar10;
    *(int *)(param_1 + 0x20) = (int)uVar12;
    *(byte **)(param_1 + 0x1c) = pbVar11;
    *(uint *)(param_1 + 0x30) = uVar5;
    *(uint *)(param_1 + 0x2c) = uVar8;
    uVar2 = fn_82A6CF00(param_1,0,param_2);
  }
  return uVar2;
}

