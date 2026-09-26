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


void fn_82CA3D88(undefined8 param_1,uint *param_2,byte *param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  
  param_8 = param_8 >> 2;
  pbVar3 = (byte *)(param_5 + 2);
  lVar5 = 4;
  pbVar4 = (byte *)(param_4 + 2);
  do {
    uVar2 = ((uint)pbVar4[(param_5 - param_4) + -2] << 0x10 | (uint)pbVar4[-2]) << 8;
    *param_2 = (uint)param_3[1] << 0x10 | (uint)*param_3 | uVar2;
    param_2[param_8] = (uint)param_3[param_6 + 1] << 0x10 | (uint)param_3[param_6] | uVar2;
    uVar2 = ((uint)pbVar3[-1] << 0x10 | (uint)pbVar4[-1]) << 8;
    param_2[1] = (uint)param_3[3] << 0x10 | (uint)param_3[2] | uVar2;
    param_2[param_8 + 1] = (uint)param_3[param_6 + 3] << 0x10 | (uint)param_3[param_6 + 2] | uVar2;
    uVar2 = ((uint)*pbVar3 << 0x10 | (uint)*pbVar4) << 8;
    param_2[2] = (uint)param_3[5] << 0x10 | (uint)param_3[4] | uVar2;
    param_2[param_8 + 2] = (uint)param_3[param_6 + 5] << 0x10 | (uint)param_3[param_6 + 4] | uVar2;
    pbVar1 = pbVar4 + 1;
    pbVar4 = pbVar4 + param_7;
    uVar2 = ((uint)pbVar3[1] << 0x10 | (uint)*pbVar1) << 8;
    pbVar3 = pbVar3 + param_7;
    param_2[3] = (uint)param_3[7] << 0x10 | (uint)param_3[6] | uVar2;
    param_2[param_8 + 3] = (uint)param_3[param_6 + 7] << 0x10 | (uint)param_3[param_6 + 6] | uVar2;
    lVar5 = lVar5 + -1;
    param_3 = param_3 + param_6 * 2;
    param_2 = param_2 + param_8 * 2;
  } while (lVar5 != 0);
  return;
}

