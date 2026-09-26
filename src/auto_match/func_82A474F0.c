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


longlong fn_82A474F0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                      ulonglong param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong in_r11;
  
  while( true ) {
    if ((param_5 & 0xffffffff) < (param_7 & 0xffffffff)) {
      return 0;
    }
    pbVar8 = (byte *)in_r11;
    uVar6 = (*pbVar8 >> 2) + param_8;
    if ((param_4 & 0xffffffff) < (uVar6 & 0xffffffff)) break;
    in_r11 = ((ulonglong)pbVar8[3] + 1) * 0x800 + in_r11;
    param_7 = in_r11 + 0x800;
    param_8 = uVar6;
  }
  uVar6 = ((((ulonglong)*pbVar8 & 3) << 8 | (ulonglong)pbVar8[1]) << 5 | (ulonglong)(pbVar8[2] >> 3)
          ) + 0x20;
  for (lVar7 = param_4 - param_8; lVar7 != 0; lVar7 = lVar7 + -1) {
    iVar2 = (int)((uVar6 & 0xffffffff) >> 3);
    uVar4 = (uint)pbVar8[iVar2];
    iVar3 = (int)(uVar6 & 7);
    if ((uVar6 & 7) < 2) {
      bVar1 = pbVar8[iVar2 + 1];
      uVar5 = 1 - iVar3;
    }
    else {
      uVar5 = 9 - iVar3;
      bVar1 = pbVar8[iVar2 + 2];
      uVar4 = (uint)CONCAT11(pbVar8[iVar2],pbVar8[iVar2 + 1]);
    }
    uVar6 = ((ulonglong)((uVar4 << 8 | (uint)bVar1) >> (uVar5 & 0x3f)) & 0x7fff) + uVar6;
  }
  return (in_r11 - param_1 & 0x1fffffffU) * 8 + uVar6;
}

