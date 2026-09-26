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


longlong fn_82A474B0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  
  lVar9 = (param_3 & 0x1fffff) * 0x800 + param_1;
  uVar7 = 0;
  while( true ) {
    if ((param_1 + param_2 & 0xffffffffU) < (lVar9 + 0x800U & 0xffffffff)) {
      return 0;
    }
    pbVar10 = (byte *)lVar9;
    uVar6 = (*pbVar10 >> 2) + uVar7;
    if ((param_4 & 0xffffffff) < (uVar6 & 0xffffffff)) break;
    lVar9 = ((ulonglong)pbVar10[3] + 1) * 0x800 + lVar9;
    uVar7 = uVar6;
  }
  uVar6 = ((((ulonglong)*pbVar10 & 3) << 8 | (ulonglong)pbVar10[1]) << 5 |
          (ulonglong)(pbVar10[2] >> 3)) + 0x20;
  for (lVar8 = param_4 - uVar7; lVar8 != 0; lVar8 = lVar8 + -1) {
    iVar2 = (int)((uVar6 & 0xffffffff) >> 3);
    uVar4 = (uint)pbVar10[iVar2];
    iVar3 = (int)(uVar6 & 7);
    if ((uVar6 & 7) < 2) {
      bVar1 = pbVar10[iVar2 + 1];
      uVar5 = 1 - iVar3;
    }
    else {
      uVar5 = 9 - iVar3;
      bVar1 = pbVar10[iVar2 + 2];
      uVar4 = (uint)CONCAT11(pbVar10[iVar2],pbVar10[iVar2 + 1]);
    }
    uVar6 = ((ulonglong)((uVar4 << 8 | (uint)bVar1) >> (uVar5 & 0x3f)) & 0x7fff) + uVar6;
  }
  return (lVar9 - param_1 & 0x1fffffffU) * 8 + uVar6;
}

