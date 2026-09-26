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
extern int fn_82E9C450();
extern int fn_82E9DB40();
extern int fn_82EA0AC0();
extern int fn_82EA1A40();
extern int fn_82EA31D0();
extern int fn_82EA5D28();
extern int fn_82EA6C00();
extern int fn_82EA8268();
extern int fn_82F691F0();


void fn_82E97EA0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(param_1 + 0x684);
  if ((iVar1 == *(int *)(param_1 + 0x688)) || (*(int *)(param_1 + 0x4f20) == 0)) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (param_2 == 0) {
      uVar6 = 0xf;
    }
    else if (param_2 == 1) {
      uVar6 = 2;
    }
    else {
      uVar6 = 1;
      if (param_2 != 2) {
        uVar6 = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x688) = uVar6;
    *(undefined4 *)(param_1 + 0x68c) = 7;
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x6d5c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x6d5c) = 1;
    }
    if (*(int *)(param_1 + 0x6d5c) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_1 + 0x690),0xffffffffffffffff,
                   ((longlong)
                    (int)(((ulonglong)*(uint *)(param_1 + 0x2d0) + 0x1f & 0xffffffff) >> 5) *
                    (longlong)*(int *)(param_1 + 0x2d4) & 0x3fffffffU) << 2);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x89c);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x6d5c) = 1;
      *(undefined4 *)(param_1 + 0x68c) = 1;
      *(int *)(param_1 + 0x684) = iVar1 + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x6d5c) = 0;
      if (iVar2 == 1) {
        *(undefined4 *)(param_1 + 0x68c) = 1;
        *(int *)(param_1 + 0x684) = iVar1 + 1;
      }
      else if (iVar2 == 2) {
        *(undefined4 *)(param_1 + 0x68c) = 2;
        *(int *)(param_1 + 0x684) = iVar1 + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x68c) = 4;
        *(int *)(param_1 + 0x684) = iVar1 + 1;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x680) = 1;
  if (*(int *)(param_1 + 0x76e0) == 0) {
    *(undefined4 *)(param_1 + 0x5264) = 1;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x6dd0) = 2;
    *(undefined4 *)(param_1 + 0x6d74) = 0;
    *(undefined4 *)(param_1 + 0x6d88) = 1;
    *(undefined4 *)(param_1 + 0x6d98) = 1;
    pcVar5 = fn_82EA0AC0;
    pcVar4 = fn_82EA5D28;
    *(undefined4 *)(param_1 + 0x6dd8) = 0x40;
    pcVar3 = fn_82E9C450;
  }
  else if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x6dd0) = 4;
    *(undefined4 *)(param_1 + 0x6d74) = 0;
    *(undefined4 *)(param_1 + 0x6d88) = 1;
    *(undefined4 *)(param_1 + 0x6d98) = 1;
    pcVar5 = fn_82EA1A40;
    pcVar4 = fn_82EA6C00;
    *(undefined4 *)(param_1 + 0x6dd8) = 0x20;
    pcVar3 = fn_82E9C450;
  }
  else {
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0x6d74) = 0;
      *(undefined4 *)(param_1 + 0x6d88) = 1;
      *(undefined4 *)(param_1 + 0x6d98) = 1;
      *(undefined4 *)(param_1 + 0x6dd4) = 2;
      *(undefined4 *)(param_1 + 0x6dd0) = 6;
      *(undefined4 *)(param_1 + 0x6dd8) = 0x20;
      *(code **)(param_1 + 0x6f28) = fn_82EA1A40;
      *(code **)(param_1 + 0x6f2c) = fn_82EA6C00;
      *(code **)(param_1 + 0x6f30) = fn_82E9C450;
      return;
    }
    *(undefined4 *)(param_1 + 0x6d74) = 1;
    *(undefined4 *)(param_1 + 0x6d98) = 0;
    if (param_2 == 3) {
      *(undefined4 *)(param_1 + 0x6d88) = 1;
      *(undefined4 *)(param_1 + 0x6dd4) = 2;
      *(undefined4 *)(param_1 + 0x6dd0) = 8;
      *(undefined4 *)(param_1 + 0x6dd8) = 0x20;
      *(code **)(param_1 + 0x6f28) = fn_82EA1A40;
      *(code **)(param_1 + 0x6f2c) = fn_82EA6C00;
      *(code **)(param_1 + 0x6f30) = fn_82E9DB40;
      return;
    }
    *(undefined4 *)(param_1 + 0x6dd8) = 4;
    *(undefined4 *)(param_1 + 0x6d88) = 0;
    pcVar5 = fn_82EA31D0;
    pcVar4 = fn_82EA8268;
    *(undefined4 *)(param_1 + 0x6dd0) = 0x10;
    pcVar3 = fn_82E9DB40;
  }
  *(code **)(param_1 + 0x6f28) = pcVar5;
  *(code **)(param_1 + 0x6f2c) = pcVar4;
  *(code **)(param_1 + 0x6f30) = pcVar3;
  *(undefined4 *)(param_1 + 0x6dd4) = 2;
  return;
}

