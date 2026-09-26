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


undefined8 fn_82F41510(int *param_1,short *param_2,undefined8 param_3,int *param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  short *psVar3;
  ulonglong uVar4;
  short *psStack_40;
  int aiStack_3c [15];
  
  if (param_2 == (short *)0x0) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    uVar4 = 0x400;
    psVar3 = param_2;
    do {
      if (*psVar3 == 0) break;
      uVar4 = uVar4 - 1;
      psVar3 = psVar3 + 1;
    } while (uVar4 != 0);
    iVar2 = 0;
    if ((uVar4 & 0xffffffff) == 0) {
      iVar2 = -0x7ff8ffa9;
    }
  }
  if (iVar2 < 0) {
    return 0xffffffff80070057;
  }
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if ((int)uVar1 != 0) {
    return 0xffffffff80070057;
  }
  aiStack_3c[0] = 2;
  psStack_40 = param_2;
  uVar1 = (**(code **)(*param_1 + 0x2c))(param_1,param_2,&psStack_40,param_3,aiStack_3c,0);
  iVar2 = (int)uVar1;
  if (iVar2 == -0x3ff2c171) {
    if (param_5 == 0) {
      return uVar1;
    }
LAB_82f41608:
    if (param_5 == 0) {
      uVar1 = (**(code **)(*param_1 + 0x30))(param_1,psStack_40,param_3);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if ((int)uVar1 != 0) {
        return 0xffffffff80070057;
      }
    }
    return 0;
  }
  if (iVar2 < 0) {
    return uVar1;
  }
  if (iVar2 != 0) goto LAB_82f41608;
  if (param_4 != (int *)0x0) {
    if (param_5 != 0) {
      return uVar1;
    }
    if (aiStack_3c[0] == *param_4) goto LAB_82f416b0;
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1,psStack_40,0x1000);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if ((int)uVar1 == 0) {
      return 0xffffffff80070057;
    }
    uVar1 = 0;
  }
  if (param_5 != 0) {
    return uVar1;
  }
LAB_82f416b0:
  uVar1 = (**(code **)(*param_1 + 0x34))(param_1,psStack_40,param_3);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if ((int)uVar1 == 0) {
    return 0xffffffffc00d3e8e;
  }
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1,psStack_40,0x40);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if (param_1[1] == 1) {
    return 0;
  }
  if ((int)uVar1 != 0) {
    return 0;
  }
  return 0xffffffffc00d3e8e;
}

