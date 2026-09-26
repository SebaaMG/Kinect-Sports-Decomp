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


void fn_82C779E0(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar5 = 0;
  lVar7 = 0x200;
  do {
    iVar6 = (int)uVar5;
    uVar1 = (ulonglong)(uint)(iVar6 >> 7) & 1;
    uVar3 = (ulonglong)(uint)(iVar6 >> 6) & 1;
    uVar2 = (ulonglong)(uint)(iVar6 >> 8) & 1;
    uVar4 = uVar3;
    if (((ulonglong)(uint)(iVar6 >> 4) & 1) != uVar1) {
      uVar4 = uVar1;
    }
    uVar4 = uVar5 & 1 ^ uVar4;
    if (uVar1 == uVar2) {
      uVar2 = uVar4;
    }
    uVar2 = (ulonglong)(uint)(iVar6 >> 1) & 1 ^ uVar2;
    uVar1 = (ulonglong)(uint)(iVar6 >> 5) & 1;
    if (uVar3 != uVar4) {
      uVar1 = uVar4;
    }
    uVar1 = (ulonglong)(uint)(iVar6 >> 2) & 1 ^ uVar1;
    uVar3 = uVar1;
    if (uVar4 != uVar2) {
      uVar3 = uVar2;
    }
    uVar4 = ((((ulonglong)(uint)(iVar6 >> 3) & 1 ^ uVar3) << 1 | uVar1) << 1 | uVar2) << 1 | uVar4;
    if (iVar6 < 0x100) {
      *(char *)(iVar6 + param_1 + 0x5db0) = (char)uVar4;
    }
    else {
      iVar6 = iVar6 + param_1 + 0x5db0;
      *(byte *)(iVar6 + -0x100) = (byte)(uVar4 << 4) | *(byte *)(iVar6 + -0x100);
    }
    uVar5 = uVar5 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uVar5 = 0;
  lVar7 = 0x40;
  do {
    uVar1 = uVar5 & 0xffffffff;
    *(byte *)((int)uVar5 + param_1 + 0x5eb0) =
         (byte)((((((uVar5 & 1) << 1 | (uVar5 & 0xffffffff) >> 1 & 1) << 1 | uVar1 >> 2 & 1) << 1 |
                 uVar1 >> 3 & 1) << 1 | uVar1 >> 4 & 1) << 1) | (byte)(uVar1 >> 5) & 1;
    uVar5 = uVar5 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

