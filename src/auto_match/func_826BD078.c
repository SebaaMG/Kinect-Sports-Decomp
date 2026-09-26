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


ulonglong fn_826BD078(undefined4 *param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  
  pbVar7 = (byte *)*param_1;
  bVar2 = *pbVar7;
  uVar8 = (ulonglong)(char)bVar2;
  if (uVar8 == 0) {
    return 0;
  }
  pbVar10 = pbVar7 + 1;
  *param_1 = pbVar10;
  if ((bVar2 & 0x80) == 0) {
    return uVar8;
  }
  if ((bVar2 & 0xe0) == 0xc0) {
    bVar2 = *pbVar10;
    if ((longlong)(char)bVar2 == 0) {
      return 0;
    }
    if ((bVar2 & 0xc0) != 0x80) {
      return 0xfffd;
    }
    uVar8 = (longlong)(char)bVar2 & 0x3fU | (uVar8 & 0x1f) << 6;
    bVar1 = uVar8 < 0x80;
  }
  else {
    if ((bVar2 & 0xf0) == 0xe0) {
      bVar2 = *pbVar10;
      if ((longlong)(char)bVar2 == 0) {
        return 0;
      }
      if ((bVar2 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar7 + 2;
      bVar3 = pbVar7[2];
      if ((longlong)(char)bVar3 == 0) {
        return 0;
      }
      if ((bVar3 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      uVar8 = (longlong)(char)bVar3 & 0x3fU |
              ((longlong)(char)bVar2 & 0x3fU) << 6 | (uVar8 & 0xf) << 0xc;
      *param_1 = pbVar7 + 3;
      if (uVar8 < 0x800) {
        return 0xfffd;
      }
      if ((0xd7ff < uVar8) && (uVar8 < 0xe000)) {
        return 0xfffd;
      }
      if (uVar8 == 0xfffe) {
        return 0xfffd;
      }
      if (uVar8 == 0xffff) {
        return 0xfffd;
      }
      return uVar8;
    }
    if ((bVar2 & 0xf8) == 0xf0) {
      bVar2 = *pbVar10;
      if ((longlong)(char)bVar2 == 0) {
        return 0;
      }
      if ((bVar2 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar7 + 2;
      bVar3 = pbVar7[2];
      if ((longlong)(char)bVar3 == 0) {
        return 0;
      }
      if ((bVar3 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      pbVar10 = pbVar7 + 3;
      *param_1 = pbVar10;
      bVar4 = *pbVar10;
      if ((longlong)(char)bVar4 == 0) {
        return 0;
      }
      if ((bVar4 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      uVar8 = (longlong)(char)bVar4 & 0x3fU |
              ((longlong)(char)bVar3 & 0x3fU) << 6 |
              ((longlong)(char)bVar2 & 0x3fU) << 0xc | (uVar8 & 7) << 0x12;
      uVar9 = 0x10000;
    }
    else if ((bVar2 & 0xfc) == 0xf8) {
      bVar2 = *pbVar10;
      if ((longlong)(char)bVar2 == 0) {
        return 0;
      }
      if ((bVar2 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar7 + 2;
      bVar3 = pbVar7[2];
      if ((longlong)(char)bVar3 == 0) {
        return 0;
      }
      if ((bVar3 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar7 + 3;
      bVar4 = pbVar7[3];
      if ((longlong)(char)bVar4 == 0) {
        return 0;
      }
      if ((bVar4 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      pbVar10 = pbVar7 + 4;
      *param_1 = pbVar10;
      bVar5 = *pbVar10;
      if ((longlong)(char)bVar5 == 0) {
        return 0;
      }
      if ((bVar5 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      uVar8 = (longlong)(char)bVar5 & 0x3fU |
              ((longlong)(char)bVar4 & 0x3fU) << 6 |
              ((longlong)(char)bVar3 & 0x3fU) << 0xc |
              ((longlong)(char)bVar2 & 0x3fU) << 0x12 | (uVar8 & 3) << 0x18;
      uVar9 = 0x200000;
    }
    else {
      if ((bVar2 & 0xfe) != 0xfc) {
        return 0xfffd;
      }
      bVar2 = *pbVar10;
      if ((longlong)(char)bVar2 == 0) {
        return 0;
      }
      if ((bVar2 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar7 + 2;
      bVar3 = pbVar7[2];
      if ((longlong)(char)bVar3 == 0) {
        return 0;
      }
      if ((bVar3 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar7 + 3;
      bVar4 = pbVar7[3];
      if ((longlong)(char)bVar4 == 0) {
        return 0;
      }
      if ((bVar4 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar7 + 4;
      bVar5 = pbVar7[4];
      if ((longlong)(char)bVar5 == 0) {
        return 0;
      }
      if ((bVar5 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      pbVar10 = pbVar7 + 5;
      *param_1 = pbVar10;
      bVar6 = *pbVar10;
      if ((longlong)(char)bVar6 == 0) {
        return 0;
      }
      if ((bVar6 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      uVar8 = (longlong)(char)bVar6 & 0x3fU |
              ((longlong)(char)bVar5 & 0x3fU) << 6 |
              ((longlong)(char)bVar4 & 0x3fU) << 0xc |
              ((longlong)(char)bVar3 & 0x3fU) << 0x12 |
              ((longlong)(char)bVar2 & 0x3fU) << 0x18 | (uVar8 & 1) << 0x1e;
      uVar9 = 0x4000000;
    }
    bVar1 = uVar8 < uVar9;
  }
  *param_1 = pbVar10 + 1;
  if (bVar1) {
    return 0xfffd;
  }
  return uVar8;
}

