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


longlong fn_82A47500(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5,ulonglong param_6,undefined8 param_7,longlong param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong in_r11;
  
  iVar2 = (int)in_r11;
  uVar6 = (((param_6 & 3) << 8 | (ulonglong)*(byte *)(iVar2 + 1)) << 5 |
          (ulonglong)(*(byte *)(iVar2 + 2) >> 3)) + 0x20;
  for (param_4 = param_4 - param_8; param_4 != 0; param_4 = param_4 + -1) {
    iVar3 = (int)((uVar6 & 0xffffffff) >> 3);
    uVar5 = (uint)*(byte *)(iVar3 + iVar2);
    iVar4 = (int)(uVar6 & 7);
    if ((uVar6 & 7) < 2) {
      bVar1 = *(byte *)(iVar2 + 1 + iVar3);
      uVar7 = 1 - iVar4;
    }
    else {
      uVar7 = 9 - iVar4;
      bVar1 = *(byte *)(iVar2 + 2 + iVar3);
      uVar5 = (uint)CONCAT11(*(byte *)(iVar3 + iVar2),*(undefined1 *)(iVar2 + 1 + iVar3));
    }
    uVar6 = ((ulonglong)((uVar5 << 8 | (uint)bVar1) >> (uVar7 & 0x3f)) & 0x7fff) + uVar6;
  }
  return (in_r11 - param_1 & 0x1fffffffU) * 8 + uVar6;
}

