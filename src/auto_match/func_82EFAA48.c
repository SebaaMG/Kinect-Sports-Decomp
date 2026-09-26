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


void fn_82EFAA48(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar2 = param_1 + -2 >> 2;
  lVar8 = 8;
  iVar6 = (param_2 >> 2) * param_4 + iVar2 + param_3;
  iVar1 = param_5;
  do {
    iVar7 = 0;
    lVar9 = 3;
    do {
      iVar3 = (int)((((uint)*(byte *)(iVar6 + iVar7 + 1) + (uint)*(byte *)(iVar6 + iVar7)) - param_6
                    ) + 1) >> 1;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      *(char *)(iVar1 + iVar7) = (char)iVar3;
      iVar3 = (int)((((uint)*(byte *)(iVar6 + iVar7 + 2) + (uint)*(byte *)(iVar6 + iVar7 + 1)) -
                    param_6) + 1) >> 1;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      *(char *)(iVar1 + iVar7 + 1) = (char)iVar3;
      iVar3 = (int)((((uint)*(byte *)(iVar6 + 2 + iVar7 + 1) + (uint)*(byte *)(iVar6 + 2 + iVar7)) -
                    param_6) + 1) >> 1;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      *(char *)(iVar1 + 2 + iVar7) = (char)iVar3;
      iVar7 = iVar7 + 3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar8 = lVar8 + -1;
    iVar6 = iVar6 + param_4;
    iVar1 = iVar1 + 0x20;
  } while (lVar8 != 0);
  iVar6 = param_5 + 0x280;
  iVar7 = (param_2 + -2 >> 2) * param_4;
  lVar8 = 9;
  iVar1 = (param_1 >> 2) + iVar7 + param_3;
  do {
    iVar3 = 0;
    lVar9 = 2;
    do {
      iVar4 = (int)((((uint)*(byte *)(iVar1 + iVar3 + param_4) + (uint)*(byte *)(iVar1 + iVar3)) -
                    param_6) + 1) >> 1;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      *(char *)(iVar6 + iVar3) = (char)iVar4;
      pbVar5 = (byte *)(iVar1 + iVar3 + 1);
      iVar4 = (int)((((uint)pbVar5[param_4] + (uint)*pbVar5) - param_6) + 1) >> 1;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      pbVar5 = (byte *)(iVar1 + iVar3 + 2);
      *(char *)(iVar6 + iVar3 + 1) = (char)iVar4;
      iVar4 = (int)((((uint)pbVar5[param_4] + (uint)*pbVar5) - param_6) + 1) >> 1;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      *(char *)(iVar6 + iVar3 + 2) = (char)iVar4;
      iVar4 = (int)((((uint)*(byte *)(iVar1 + 3 + iVar3 + param_4) +
                     (uint)*(byte *)(iVar1 + 3 + iVar3)) - param_6) + 1) >> 1;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      *(char *)(iVar6 + 3 + iVar3) = (char)iVar4;
      iVar3 = iVar3 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar8 = lVar8 + -1;
    iVar1 = iVar1 + param_4;
    iVar6 = iVar6 + 0x20;
  } while (lVar8 != 0);
  param_5 = param_5 + 0x500;
  param_3 = iVar7 + iVar2 + param_3;
  iVar2 = param_4 + 1;
  lVar8 = 9;
  do {
    iVar1 = 0;
    lVar9 = 3;
    do {
      iVar6 = param_3 + iVar1;
      iVar6 = (int)((((uint)*(byte *)(iVar2 + iVar6) + (uint)*(byte *)(iVar6 + param_4) +
                      (uint)*(byte *)(iVar6 + 1) + (uint)*(byte *)(param_3 + iVar1)) - param_6) + 2)
              >> 2;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      *(char *)(iVar1 + param_5) = (char)iVar6;
      pbVar5 = (byte *)(param_3 + iVar1 + 1);
      iVar6 = (int)((((uint)pbVar5[iVar2] + (uint)pbVar5[param_4] +
                      (uint)*(byte *)(param_3 + iVar1 + 2) + (uint)*pbVar5) - param_6) + 2) >> 2;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      iVar7 = param_3 + 2 + iVar1;
      *(char *)(param_5 + 1 + iVar1) = (char)iVar6;
      iVar6 = (int)((((uint)*(byte *)(iVar2 + iVar7) + (uint)*(byte *)(iVar7 + param_4) +
                      (uint)*(byte *)(iVar7 + 1) + (uint)*(byte *)(param_3 + 2 + iVar1)) - param_6)
                   + 2) >> 2;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      *(char *)(param_5 + 2 + iVar1) = (char)iVar6;
      iVar1 = iVar1 + 3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar8 = lVar8 + -1;
    param_5 = param_5 + 0x20;
    param_3 = param_3 + param_4;
  } while (lVar8 != 0);
  return;
}

