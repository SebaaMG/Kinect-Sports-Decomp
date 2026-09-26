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


undefined8 fn_82C07F20(int param_1,longlong param_2,undefined4 *param_3,int *param_4)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = (int)param_2;
  uVar1 = 0;
  if (*param_4 != 0) {
    return uVar1;
  }
  if (iVar2 < 0x90061) {
    if (iVar2 == 0x90060) {
      return uVar1;
    }
    if (iVar2 < 0x90031) {
      if (iVar2 == 0x90030) {
        *(short *)(param_1 + 0x36) = (short)param_3;
        return uVar1;
      }
      if (iVar2 == 0x90000) {
        return uVar1;
      }
      if (iVar2 == 0x90010) {
        *param_3 = 0xffffffff;
        return uVar1;
      }
      if (iVar2 != 0x90020) {
        return 0xffffffff805000b2;
      }
      *(undefined4 **)(param_1 + 0x30) = param_3;
      return uVar1;
    }
    uVar3 = param_2 - 0x90040;
    if (uVar3 == 0) {
      *(short *)(param_1 + 0x34) = (short)param_3;
      return uVar1;
    }
  }
  else {
    if (iVar2 < 0x90091) {
      if (iVar2 == 0x90090) {
        return uVar1;
      }
      if (param_2 - 0x90070U == 0) {
        *(undefined4 *)(param_1 + 0x28) = param_3[2] * param_3[1];
        return uVar1;
      }
      if ((param_2 - 0x90070U & 0xffffffff) != 0x10) {
        return 0xffffffff805000b2;
      }
      if (param_3 == *(undefined4 **)(*(int *)(param_1 + 0x48) + 0x228)) {
        *(undefined4 **)(param_1 + 0x2c) = param_3;
        return uVar1;
      }
      return 0xffffffff805000b7;
    }
    uVar3 = param_2 - 0x900a0;
    if (uVar3 == 0) {
      return uVar1;
    }
  }
  if ((uVar3 & 0xffffffff) != 0x10) {
    return 0xffffffff805000b2;
  }
  return uVar1;
}

