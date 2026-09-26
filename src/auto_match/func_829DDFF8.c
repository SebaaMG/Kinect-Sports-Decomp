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


void fn_829DDFF8(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  uVar3 = param_3 & 0xff;
  uVar4 = param_4 & 0xff;
  uVar5 = param_2 & 0xff;
  uVar7 = param_3;
  if (uVar3 <= uVar4) {
    uVar7 = param_4;
  }
  uVar8 = param_2;
  if ((uVar5 <= (uVar7 & 0xff)) && (uVar8 = param_3, uVar3 <= uVar4)) {
    uVar8 = param_4;
  }
  uVar7 = param_3;
  if (uVar4 <= uVar3) {
    uVar7 = param_4;
  }
  if (((uVar7 & 0xff) <= uVar5) && (param_2 = param_3, uVar4 <= uVar3)) {
    param_2 = param_4;
  }
  iVar1 = (int)(uVar8 & 0xff);
  lVar9 = (uVar8 & 0xff) - (param_2 & 0xff);
  iVar2 = (int)lVar9;
  if (lVar9 != 0) {
    iVar6 = (int)uVar5;
    iVar11 = (int)uVar3;
    if (iVar6 == iVar1) {
      lVar10 = (longlong)(((iVar11 - (int)uVar4) * 0x3c) / iVar2);
      lVar9 = lVar10 + 0x2d;
      if (lVar9 < 0) {
        lVar9 = lVar10 + 0x195;
      }
    }
    else if (iVar11 == iVar1) {
      lVar9 = (longlong)((((int)uVar4 - iVar6) * 0x3c) / iVar2) + 0xa5;
    }
    else {
      lVar9 = (longlong)(((iVar6 - iVar11) * 0x3c) / iVar2) + 0x11d;
    }
    iVar11 = (int)lVar9;
    if ((iVar11 < 0x13c) && (0x13 < iVar11)) {
      if (iVar11 < 0x32) {
        iVar11 = 1;
      }
      else if (iVar11 < 0x4b) {
        iVar11 = 2;
      }
      else if (iVar11 < 0x9b) {
        iVar11 = 3;
      }
      else if (iVar11 < 0xc3) {
        iVar11 = 4;
      }
      else if (iVar11 < 0x113) {
        iVar11 = 5;
      }
      else {
        iVar11 = 6;
      }
      goto LAB_829de148;
    }
  }
  iVar11 = 0;
LAB_829de148:
  *(longlong *)(param_1 + 0x578) = *(longlong *)(param_1 + 0x578) + 1;
  iVar1 = ((iVar11 * 5 + (iVar2 * 5) / (iVar1 + 1)) * 5 + (iVar1 * 5 >> 8)) * 8;
  *(longlong *)(iVar1 + param_1) = *(longlong *)(iVar1 + param_1) + 1;
  return;
}

