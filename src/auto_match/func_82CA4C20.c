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
extern int fn_82CA3A98();
extern int fn_82CA3B20();
extern int fn_82CA3D88();
extern int fn_82CA3EE0();
extern int fn_82CA3F80();
extern int fn_82CA4078();
extern int fn_82CA4458();
extern int fn_82CA48A8();
extern int fn_82CA4970();
extern int fn_82CA4B10();
extern int fn_82CA4B98();
extern int fn_82CD9F48();


undefined8 fn_82CA4C20(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  code *pcVar8;
  
  iVar3 = *(int *)(param_1 + 0x3cc0);
  *(undefined4 *)(param_1 + 0x3d10) = 0;
  *(undefined4 *)(param_1 + 0x3e54) = 0;
  *(undefined4 *)(param_1 + 0x3e58) = 0;
  if ((iVar3 == 0) || (iVar3 == 3)) {
    *(undefined4 *)(param_1 + 0x3d14) = 0;
    return 0xfffffffffffffffb;
  }
  if (iVar3 == 0x32595559) {
    if (*(int *)(param_1 + 0xf8c) == 0) {
      *(undefined4 *)(param_1 + 0x3d14) = 1;
      *(code **)(param_1 + 0x3e40) = fn_82CA3B20;
      *(code **)(param_1 + 0x3e44) = fn_82CA4B10;
      *(code **)(param_1 + 0x3e48) = fn_82CA3D88;
      *(code **)(param_1 + 0x3e54) = fn_82CA4970;
    }
    else {
      *(undefined4 *)(param_1 + 0x3d14) = 1;
      *(code **)(param_1 + 0x3e40) = fn_82CA3A98;
      *(code **)(param_1 + 0x3e44) = fn_82CA4B98;
    }
  }
  else {
    if ((((iVar3 != 0x30323449) && (iVar3 != 0x56555949)) && (iVar3 != 0x32315659)) &&
       (iVar3 != 0x3231564e)) {
      return 0xfffffffffffffffb;
    }
    *(undefined4 *)(param_1 + 0x3d14) = 1;
    *(undefined4 *)(param_1 + 0x3d10) = 1;
    *(undefined2 *)(param_1 + 0x3cc4) = 8;
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x98) == 0) {
        pcVar8 = fn_82CA4078;
      }
      else if (*(int *)(param_1 + 0x5680) == 1) {
        pcVar8 = fn_82CA4458;
      }
      else {
        pcVar8 = fn_82CA4078;
      }
      *(code **)(param_1 + 0x3e4c) = pcVar8;
      if (*(int *)(param_1 + 0x5680) == 1) {
        pcVar8 = fn_82CA48A8;
      }
      else {
        pcVar8 = fn_82CA3F80;
      }
      *(code **)(param_1 + 0x3e50) = pcVar8;
      if (((iVar3 == 0x32315659) || (iVar3 == 0x30323449)) || (iVar3 == 0x3231564e)) {
        if ((*(int *)(param_1 + 0x98) == 0) || ((*(uint *)(param_1 + 0x58) & 0x1f) != 0)) {
          pcVar8 = fn_82CA3EE0;
        }
        else {
          pcVar8 = fn_82CD9F48;
        }
        *(code **)(param_1 + 0x3e58) = pcVar8;
      }
    }
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    sVar1 = *(short *)(param_1 + 0x3cc4);
    if (((sVar1 == 0xc) || (sVar1 == 4)) || (sVar1 == 0xf)) {
      *(undefined2 *)(param_1 + 0x3cc4) = 0x10;
    }
    uVar2 = *(ushort *)(param_1 + 0x3cc4);
    uVar4 = *(uint *)(param_1 + 0x3cc8);
    *(undefined4 *)(param_1 + 0x3d4c) = 0;
    uVar6 = ((longlong)(int)uVar4 * (longlong)(int)(uint)uVar2 & 0xffffffffU) >> 3;
    *(int *)(param_1 + 0x3d50) = (int)((uint)uVar2 << 4) >> 3;
    iVar7 = (int)(uVar6 << 4);
    *(int *)(param_1 + 0x3d44) = (int)uVar6;
    *(int *)(param_1 + 0x3d54) = (int)((uint)uVar2 << 3) >> 3;
    *(int *)(param_1 + 0x3d5c) = iVar7;
    *(int *)(param_1 + 0x3d60) = (int)(uVar6 << 3);
    if (*(int *)(param_1 + 0x3d10) == 1) {
      if (((uVar4 & 1) != 0) || (uVar5 = *(uint *)(param_1 + 0x5c), (uVar5 & 1) != 0)) {
        return 0xfffffffffffffffb;
      }
      *(int *)(param_1 + 0x3d48) = (int)uVar6 >> 1;
      iVar7 = iVar7 >> 2;
      if (iVar3 != 0x32315659) {
        iVar3 = *(int *)(param_1 + 0x6070);
        if ((*(int *)(iVar3 + 0x2c8) != 0) && (*(int *)(iVar3 + 0x481c) != 0)) {
          *(undefined4 *)(param_1 + 0x3d18) = *(undefined4 *)(iVar3 + 0x90);
          *(int *)(param_1 + 0x3d1c) = *(int *)(iVar3 + 0x94) + *(int *)(iVar3 + 0x90);
          *(undefined4 *)(param_1 + 0x3d44) = *(undefined4 *)(iVar3 + 0x88);
          *(undefined4 *)(param_1 + 0x3d48) = *(undefined4 *)(iVar3 + 0x8c);
          *(int *)(param_1 + 0x3d64) = iVar7;
          return 0;
        }
        *(uint *)(param_1 + 0x3d18) = uVar5 * uVar4;
        *(uint *)(param_1 + 0x3d1c) = uVar5 * uVar4 * 5 >> 2;
        *(int *)(param_1 + 0x3d64) = iVar7;
        return 0;
      }
      *(uint *)(param_1 + 0x3d1c) = uVar5 * uVar4;
      *(uint *)(param_1 + 0x3d18) = uVar5 * uVar4 * 5 >> 2;
      *(int *)(param_1 + 0x3d64) = iVar7;
    }
  }
  return 0;
}

