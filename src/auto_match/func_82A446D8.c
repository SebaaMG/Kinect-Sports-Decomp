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


longlong fn_82A446D8(int *param_1,int param_2,byte *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  
  (**(code **)(*(int *)(param_1[0xc] + 0x2c) + 8))(param_1[0xc] + 0x2c);
  param_2 = param_2 * 4;
  pbVar3 = (byte *)param_1[0x13];
  lVar5 = 0;
  lVar2 = 0;
  if (param_2 != 0) {
    pbVar4 = param_3;
    do {
      lVar2 = (ulonglong)*pbVar4 - (ulonglong)*pbVar3;
      if (lVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
    } while (pbVar4 != param_3 + param_2);
  }
  if ((int)lVar2 != 0) {
    if ((int *)param_1[0xd] == (int *)0x0) {
      iVar1 = param_1[0xf];
    }
    else {
      iVar1 = *(int *)param_1[0xd];
    }
    lVar5 = (**(code **)(*param_1 + 0x60))(param_1,iVar1,param_3,param_4);
    if (-1 < lVar5) {
      fn_82F68CC0(param_1[0x13],param_3,param_2);
    }
  }
  (**(code **)(*(int *)(param_1[0xc] + 0x2c) + 0x14))(param_1[0xc] + 0x2c);
  return lVar5;
}

