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


void fn_82EFA7F8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar3 = param_1 + -2 >> 2;
  lVar7 = 0x10;
  iVar8 = (param_2 >> 2) * param_4 + iVar3 + param_3;
  iVar5 = param_5;
  do {
    iVar6 = 0;
    lVar9 = 0x11;
    do {
      iVar4 = (int)((((uint)*(byte *)(iVar8 + iVar6 + 1) + (uint)*(byte *)(iVar8 + iVar6)) - param_6
                    ) + 1) >> 1;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      *(char *)(iVar5 + iVar6) = (char)iVar4;
      iVar6 = iVar6 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar7 = lVar7 + -1;
    iVar8 = iVar8 + param_4;
    iVar5 = iVar5 + 0x20;
  } while (lVar7 != 0);
  iVar8 = param_5 + 0x280;
  iVar6 = (param_2 + -2 >> 2) * param_4;
  lVar7 = 0x11;
  iVar5 = (param_1 >> 2) + iVar6 + param_3;
  do {
    iVar4 = 0;
    lVar9 = 4;
    do {
      iVar1 = (int)((((uint)*(byte *)(iVar5 + iVar4 + param_4) + (uint)*(byte *)(iVar5 + iVar4)) -
                    param_6) + 1) >> 1;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      pbVar2 = (byte *)(iVar5 + iVar4 + 1);
      *(char *)(iVar8 + iVar4) = (char)iVar1;
      iVar1 = (int)((((uint)pbVar2[param_4] + (uint)*pbVar2) - param_6) + 1) >> 1;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      pbVar2 = (byte *)(iVar5 + iVar4 + 2);
      *(char *)(iVar8 + iVar4 + 1) = (char)iVar1;
      iVar1 = (int)((((uint)pbVar2[param_4] + (uint)*pbVar2) - param_6) + 1) >> 1;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      *(char *)(iVar8 + iVar4 + 2) = (char)iVar1;
      iVar1 = (int)((((uint)*(byte *)(iVar5 + 3 + iVar4 + param_4) +
                     (uint)*(byte *)(iVar5 + 3 + iVar4)) - param_6) + 1) >> 1;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      *(char *)(iVar8 + 3 + iVar4) = (char)iVar1;
      iVar4 = iVar4 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar7 = lVar7 + -1;
    iVar5 = iVar5 + param_4;
    iVar8 = iVar8 + 0x20;
  } while (lVar7 != 0);
  param_5 = param_5 + 0x500;
  param_3 = iVar6 + iVar3 + param_3;
  lVar7 = 0x11;
  do {
    iVar3 = 0;
    lVar9 = 0x11;
    do {
      iVar5 = param_3 + iVar3;
      iVar5 = (int)((((uint)*(byte *)(param_4 + 1 + iVar5) + (uint)*(byte *)(iVar5 + param_4) +
                      (uint)*(byte *)(iVar5 + 1) + (uint)*(byte *)(param_3 + iVar3)) - param_6) + 2)
              >> 2;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0xff < iVar5) {
        iVar5 = 0xff;
      }
      *(char *)(iVar3 + param_5) = (char)iVar5;
      iVar3 = iVar3 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar7 = lVar7 + -1;
    param_5 = param_5 + 0x20;
    param_3 = param_3 + param_4;
  } while (lVar7 != 0);
  return;
}

