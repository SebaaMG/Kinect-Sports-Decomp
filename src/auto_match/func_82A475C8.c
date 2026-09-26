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


longlong fn_82A475C8(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong in_r7;
  ulonglong uVar6;
  ulonglong in_r8;
  longlong in_r9;
  uint uVar7;
  longlong in_r10;
  longlong lVar8;
  longlong in_r11;
  byte *pbVar9;
  
  while (lVar8 = in_r10, (in_r7 & 0xffffffff) <= (in_r8 & 0xffffffff)) {
    in_r9 = ((ulonglong)*(byte *)((int)lVar8 + 3) + 1) * 0x800;
    in_r10 = in_r9 + lVar8;
    in_r11 = lVar8;
    in_r7 = in_r9 + lVar8 + 0x800;
  }
  if ((*(byte *)in_r11 & 0xfc) == 0) {
    in_r11 = in_r11 - in_r9;
  }
  pbVar9 = (byte *)in_r11;
  uVar2 = (ulonglong)(*pbVar9 >> 2);
  uVar6 = ((((ulonglong)*pbVar9 & 3) << 8 | (ulonglong)pbVar9[1]) << 5 | (ulonglong)(pbVar9[2] >> 3)
          ) + 0x20;
  while (uVar2 = uVar2 - 1, uVar2 != 0) {
    iVar3 = (int)((uVar6 & 0xffffffff) >> 3);
    uVar5 = (uint)pbVar9[iVar3];
    iVar4 = (int)(uVar6 & 7);
    if ((uVar6 & 7) < 2) {
      bVar1 = pbVar9[iVar3 + 1];
      uVar7 = 1 - iVar4;
    }
    else {
      uVar7 = 9 - iVar4;
      bVar1 = pbVar9[iVar3 + 2];
      uVar5 = (uint)CONCAT11(pbVar9[iVar3],pbVar9[iVar3 + 1]);
    }
    uVar6 = ((ulonglong)((uVar5 << 8 | (uint)bVar1) >> (uVar7 & 0x3f)) & 0x7fff) + uVar6;
  }
  return (in_r11 - param_1 & 0x1fffffffU) * 8 + uVar6;
}

