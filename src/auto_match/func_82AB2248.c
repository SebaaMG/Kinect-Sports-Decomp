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
extern int fn_82AB18E8();


void fn_82AB2248(undefined8 param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                  int param_7,uint param_8)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = (int)param_2 >> 7 & 1;
  uVar5 = (ulonglong)param_2 & 0x3f;
  fn_82AB18E8(param_1,0xffffffff821aa89c);
  uVar6 = 0xffffffff821ce384;
  if (uVar1 != 0) {
    fn_82AB18E8(param_1,0xffffffff821ce384);
  }
  if ((param_4 != 0) || (bVar3 = true, param_6 == 0)) {
    bVar3 = false;
  }
  iVar7 = (int)uVar5;
  if ((param_3 != 0) || (bVar2 = true, iVar7 == 0x10)) {
    bVar2 = false;
  }
  uVar8 = 0xffffffff821c4da8;
  if (bVar2) {
    fn_82AB18E8(param_1,0xffffffff821aa634);
  }
  else {
    if (param_4 == 0) {
      uVar9 = 0xffffffff821ce348;
    }
    else {
      uVar9 = 0xffffffff821ce344;
    }
    fn_82AB18E8(param_1,0xffffffff821c4da8,uVar9);
  }
  if (bVar3) {
    fn_82AB18E8(param_1,0xffffffff821ce34c);
  }
  if (!bVar2) {
    if (param_4 == 0) {
LAB_82ab2380:
      uVar8 = 0xffffffff821aa66c;
    }
    else if (iVar7 == 0x3e) {
      uVar5 = 0xffffffff82031774;
    }
    else {
      if (iVar7 != 0x3f) goto LAB_82ab2380;
      uVar5 = 0xffffffff82031778;
    }
    fn_82AB18E8(param_1,uVar8,uVar5);
  }
  if ((param_4 == 0) && (param_6 != 0)) {
    fn_82AB18E8(param_1,0xffffffff821ce378);
  }
  if (bVar3) {
    fn_82AB18E8(param_1,0xffffffff821c27b4);
  }
  if (param_4 == 0) {
    if (param_3 == 0xf) goto LAB_82ab25a0;
    fn_82AB18E8(param_1,0xffffffff821c7f2c);
    if ((param_3 & 1) != 0) {
      fn_82AB18E8(param_1,0xffffffff821ce358);
    }
    if ((param_3 & 2) != 0) {
      fn_82AB18E8(param_1,0xffffffff821ce35c);
    }
    if ((param_3 & 4) != 0) {
      fn_82AB18E8(param_1,0xffffffff821ce360);
    }
    if ((param_3 & 8) == 0) goto LAB_82ab25a0;
    uVar8 = 0xffffffff821ce364;
  }
  else {
    fn_82AB18E8(param_1,0xffffffff821c7f2c);
    uVar8 = 0xffffffff821b597c;
    uVar9 = 0xffffffff821c5500;
    if ((param_3 & 1) == 0) {
      if (((param_8 & 1) == 1) || (uVar4 = uVar8, param_7 == 0)) {
        uVar4 = 0xffffffff821ac4b4;
      }
    }
    else {
      uVar4 = uVar9;
      if ((param_8 & 1) == 0) {
        uVar4 = 0xffffffff821ce358;
      }
    }
    fn_82AB18E8(param_1,uVar4);
    if ((param_3 & 2) == 0) {
      if (((param_8 & 2) == 2) || (uVar4 = uVar8, param_7 == 0)) {
        uVar4 = 0xffffffff821ac4b4;
      }
    }
    else {
      uVar4 = uVar9;
      if ((param_8 & 2) == 0) {
        uVar4 = 0xffffffff821ce35c;
      }
    }
    fn_82AB18E8(param_1,uVar4);
    if ((param_3 & 4) == 0) {
      if (((param_8 & 4) == 4) || (uVar4 = uVar8, param_7 == 0)) {
        uVar4 = 0xffffffff821ac4b4;
      }
    }
    else {
      uVar4 = uVar9;
      if ((param_8 & 4) == 0) {
        uVar4 = 0xffffffff821ce360;
      }
    }
    fn_82AB18E8(param_1,uVar4);
    if ((param_3 & 8) == 0) {
      if (((param_8 & 8) == 8) || (param_7 == 0)) {
        uVar8 = 0xffffffff821ac4b4;
      }
    }
    else {
      uVar8 = uVar9;
      if ((param_8 & 8) == 0) {
        uVar8 = 0xffffffff821ce364;
      }
    }
  }
  fn_82AB18E8(param_1,uVar8);
LAB_82ab25a0:
  if (uVar1 == 0) {
    uVar6 = 0xffffffff82196582;
  }
  fn_82AB18E8(param_1,uVar6);
  if (param_5 != 0) {
    fn_82AB18E8(param_1,0xffffffff820d6290);
  }
  return;
}

