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
extern int fn_8266F628();
extern int fn_8266F640();


void fn_8229EFF0(undefined4 *param_1,byte *param_2,undefined8 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (uint)*param_2;
  uVar5 = uVar1;
  uVar4 = 0x68;
  if (uVar1 == 0x68) {
    param_5 = (int)"hasBeenActivated" - (int)param_2;
    uVar5 = 0x68;
    pbVar3 = param_2;
    do {
      pbVar3 = pbVar3 + 1;
      if (uVar5 == 0) goto LAB_8229f054;
      param_4 = (uint)pbVar3[param_5];
      uVar5 = (uint)*pbVar3;
      uVar4 = param_4;
    } while (uVar5 == param_4);
  }
  if (uVar5 == uVar4) {
LAB_8229f054:
    param_1[2] = param_1[2] + 1;
  }
  else {
    uVar4 = 0x68;
    uVar5 = uVar1;
    if (uVar1 == 0x68) {
      param_5 = (int)"hasReachedHoldPosition" - (int)param_2;
      uVar5 = 0x68;
      pbVar3 = param_2;
      do {
        pbVar3 = pbVar3 + 1;
        if (uVar5 == 0) {
          return;
        }
        uVar4 = (uint)pbVar3[param_5];
        uVar5 = (uint)*pbVar3;
        param_4 = uVar4;
      } while (uVar5 == uVar4);
    }
    if (uVar5 != uVar4) {
      uVar5 = 0x68;
      if (uVar1 == 0x68) {
        iVar2 = (int)"hasReachedEnd" - (int)param_2;
        uVar1 = 0x68;
        do {
          param_2 = param_2 + 1;
          if (uVar1 == 0) goto LAB_8229f0fc;
          param_5 = (uint)param_2[iVar2];
          uVar1 = (uint)*param_2;
          uVar5 = param_5;
        } while (uVar1 == param_5);
      }
      if (uVar1 == uVar5) {
LAB_8229f0fc:
        uVar5 = param_1[2];
        param_1[2] = (int)((ulonglong)uVar5 - 1);
        if ((longlong)((ulonglong)uVar5 - 1) < 1) {
          fn_8266F640(*param_1,1,param_3,param_4,param_5);
          fn_8266F628(*param_1,1);
          param_1[3] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
        }
      }
    }
  }
  return;
}

