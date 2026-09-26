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


void fn_82F27B98(int param_1)

{
  int iVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  byte bVar9;
  byte *pbVar8;
  longlong lVar10;
  byte abStack_200 [256];
  byte abStack_100 [256];
  
  if (*(int *)(param_1 + 0xaf0) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xaf0) == 4) {
    return;
  }
  if (*(int *)(param_1 + 0x8a0) == 0) {
    return;
  }
  if (0x1f < *(int *)(param_1 + 0x8b0)) {
    *(int *)(param_1 + 0x8b0) = *(int *)(param_1 + 0x8b0) + -0x40;
  }
  if (*(uint *)(param_1 + 0x8ac) == 0) {
    uVar3 = 0xffffffffffffffc0;
    lVar7 = ((ulonglong)*(uint *)(param_1 + 0x8b0) & 0x1ffffff) * -0x80 + 0x3fc0;
  }
  else {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x8ac) + 0x20;
    lVar7 = ((ulonglong)*(uint *)(param_1 + 0x8b0) & 0x3ffffff) << 6;
  }
  iVar5 = 0;
  lVar4 = (uVar3 & 0x1ffffff) * -0x80 + 0x2020;
  lVar7 = lVar7 + 0x20;
  lVar10 = 0x100;
  do {
    iVar1 = (int)lVar7 >> 6;
    if (iVar1 < 0x100) {
      bVar9 = -((char)((ulonglong)lVar7 >> 0x18) >> 7) - 1U & (byte)iVar1;
    }
    else {
      bVar9 = 0xff;
    }
    iVar1 = (int)lVar4 >> 6;
    abStack_100[iVar5] = bVar9;
    if (iVar1 < 0x100) {
      bVar9 = -((char)((ulonglong)lVar4 >> 0x18) >> 7) - 1U & (byte)iVar1;
    }
    else {
      bVar9 = 0xff;
    }
    lVar7 = lVar7 + uVar3;
    lVar4 = lVar4 + uVar3;
    abStack_200[iVar5] = bVar9;
    iVar5 = iVar5 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  lVar7 = (longlong)*(int *)(param_1 + 0x56c) * (longlong)*(int *)(param_1 + 0x564);
  iVar5 = *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (0 < lVar7) {
    pbVar8 = (byte *)(*(int *)(param_1 + 0x14) + -1);
    do {
      pbVar6 = pbVar8 + 1;
      pbVar8 = pbVar8 + 1;
      *pbVar8 = abStack_100[*pbVar6];
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x570) * (longlong)*(int *)(param_1 + 0x568);
  if (lVar7 < 1) {
    return;
  }
  pbVar8 = (byte *)(iVar5 + -1);
  pbVar6 = (byte *)(iVar1 + -1);
  do {
    pbVar2 = pbVar8 + 1;
    pbVar8 = pbVar8 + 1;
    *pbVar8 = abStack_200[*pbVar2];
    pbVar2 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    *pbVar6 = abStack_200[*pbVar2];
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

