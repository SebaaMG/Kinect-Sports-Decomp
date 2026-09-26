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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))


void fn_82F27988(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  short *psVar7;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  psVar7 = (short *)(param_3 + 4);
  pbVar8 = (byte *)(param_2 + 2);
  lVar10 = 8;
  do {
    uVar6 = (ulonglong)pbVar8[-2] + (longlong)psVar7[-2];
    uVar9 = (ulonglong)pbVar8[-1] + (longlong)psVar7[-1];
    uVar3 = (longlong)*psVar7 + (ulonglong)*pbVar8;
    uVar4 = (ulonglong)pbVar8[1] + (longlong)psVar7[1];
    if (0xff < (uVar6 & 0xffffffff)) {
      uVar6 = ((uVar6 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar9 & 0xffffffff)) {
      uVar9 = ((uVar9 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar3 & 0xffffffff)) {
      uVar3 = ((uVar3 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar4 & 0xffffffff)) {
      uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    uVar1 = (uVar4 & 0xffff) << 0x10;
    uVar2 = (uVar3 & 0xffff) << 0x10 | uVar6;
    if (((uVar1 | uVar9 | uVar2) & 0xff00ff00) == 0) {
      uVar5 = (uint)((uVar1 | uVar9 & 0xffffffff) << 8) | (uint)uVar2;
    }
    else {
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)uVar6 + param_5),
                                         *(undefined1 *)((int)uVar9 + param_5)),
                                *(undefined1 *)((int)uVar3 + param_5)),
                       *(undefined1 *)((int)uVar4 + param_5));
    }
    *param_1 = uVar5;
    uVar6 = (ulonglong)pbVar8[2] + (longlong)psVar7[2];
    uVar9 = (ulonglong)pbVar8[3] + (longlong)psVar7[3];
    uVar3 = (ulonglong)pbVar8[4] + (longlong)psVar7[4];
    uVar4 = (ulonglong)pbVar8[5] + (longlong)psVar7[5];
    if (0xff < (uVar6 & 0xffffffff)) {
      uVar6 = ((uVar6 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar9 & 0xffffffff)) {
      uVar9 = ((uVar9 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar3 & 0xffffffff)) {
      uVar3 = ((uVar3 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar4 & 0xffffffff)) {
      uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    uVar1 = (uVar4 & 0xffff) << 0x10;
    uVar2 = (uVar3 & 0xffff) << 0x10 | uVar6;
    if (((uVar1 | uVar9 | uVar2) & 0xff00ff00) == 0) {
      uVar5 = (uint)((uVar1 | uVar9 & 0xffffffff) << 8) | (uint)uVar2;
    }
    else {
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)uVar6 + param_5),
                                         *(undefined1 *)((int)uVar9 + param_5)),
                                *(undefined1 *)((int)uVar3 + param_5)),
                       *(undefined1 *)((int)uVar4 + param_5));
    }
    param_1[1] = uVar5;
    pbVar8 = pbVar8 + param_4;
    param_1 = (uint *)((int)param_1 + param_4);
    psVar7 = psVar7 + 8;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}

