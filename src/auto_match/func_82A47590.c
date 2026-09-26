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


longlong fn_82A47590(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  byte *pbVar12;
  
  lVar11 = (param_3 & 0x1fffff) * 0x800 + param_1;
  lVar8 = ((ulonglong)*(byte *)((int)lVar11 + 3) + 1) * 0x800;
  lVar6 = lVar8 + lVar11;
  while (lVar10 = lVar6, (lVar10 + 0x800U & 0xffffffff) <= (param_1 + param_2 & 0xffffffffU)) {
    lVar8 = ((ulonglong)*(byte *)((int)lVar10 + 3) + 1) * 0x800;
    lVar11 = lVar10;
    lVar6 = lVar8 + lVar10;
  }
  if ((*(byte *)lVar11 & 0xfc) == 0) {
    lVar11 = lVar11 - lVar8;
  }
  pbVar12 = (byte *)lVar11;
  uVar2 = (ulonglong)(*pbVar12 >> 2);
  uVar7 = ((((ulonglong)*pbVar12 & 3) << 8 | (ulonglong)pbVar12[1]) << 5 |
          (ulonglong)(pbVar12[2] >> 3)) + 0x20;
  while (uVar2 = uVar2 - 1, uVar2 != 0) {
    iVar3 = (int)((uVar7 & 0xffffffff) >> 3);
    uVar5 = (uint)pbVar12[iVar3];
    iVar4 = (int)(uVar7 & 7);
    if ((uVar7 & 7) < 2) {
      bVar1 = pbVar12[iVar3 + 1];
      uVar9 = 1 - iVar4;
    }
    else {
      uVar9 = 9 - iVar4;
      bVar1 = pbVar12[iVar3 + 2];
      uVar5 = (uint)CONCAT11(pbVar12[iVar3],pbVar12[iVar3 + 1]);
    }
    uVar7 = ((ulonglong)((uVar5 << 8 | (uint)bVar1) >> (uVar9 & 0x3f)) & 0x7fff) + uVar7;
  }
  return (lVar11 - param_1 & 0x1fffffffU) * 8 + uVar7;
}

