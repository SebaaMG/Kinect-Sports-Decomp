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


void fn_82CBB2B8(int param_1,int param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  short *psVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  psVar6 = (short *)(param_3 + 4);
  pbVar5 = (byte *)(param_2 + 2);
  puVar4 = (undefined1 *)(param_1 + 2);
  lVar8 = 8;
  do {
    uVar3 = (ulonglong)(byte)puVar4[(param_2 - param_1) + -2] + (longlong)psVar6[-2];
    uVar7 = (ulonglong)pbVar5[-1] + (longlong)psVar6[-1];
    uVar1 = (ulonglong)*pbVar5 + (longlong)*psVar6;
    uVar2 = (ulonglong)pbVar5[1] + (longlong)psVar6[1];
    if (0xff < (uVar3 & 0xffffffff)) {
      uVar3 = ((uVar3 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar7 & 0xffffffff)) {
      uVar7 = ((uVar7 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar1 & 0xffffffff)) {
      uVar1 = ((uVar1 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar2 & 0xffffffff)) {
      uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    puVar4[1] = (char)uVar2;
    puVar4[-2] = (char)uVar3;
    *puVar4 = (char)uVar1;
    puVar4[-1] = (char)uVar7;
    uVar3 = (ulonglong)pbVar5[2] + (longlong)psVar6[2];
    uVar7 = (ulonglong)pbVar5[3] + (longlong)psVar6[3];
    uVar1 = (ulonglong)pbVar5[4] + (longlong)psVar6[4];
    uVar2 = (ulonglong)pbVar5[5] + (longlong)psVar6[5];
    if (0xff < (uVar3 & 0xffffffff)) {
      uVar3 = ((uVar3 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar7 & 0xffffffff)) {
      uVar7 = ((uVar7 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar1 & 0xffffffff)) {
      uVar1 = ((uVar1 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar2 & 0xffffffff)) {
      uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    puVar4[2] = (char)uVar3;
    pbVar5 = pbVar5 + param_4;
    puVar4[3] = (char)uVar7;
    psVar6 = psVar6 + 8;
    puVar4[4] = (char)uVar1;
    puVar4[5] = (char)uVar2;
    puVar4 = puVar4 + param_4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

