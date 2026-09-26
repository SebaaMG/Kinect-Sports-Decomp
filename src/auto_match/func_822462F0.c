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


/* WARNING: Removing unreachable block (ram,0x8260d438) */

ulonglong fn_822462F0(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (0xf < *(uint *)(param_2 + 0x14)) {
    param_2 = *(byte **)param_2;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x10)) {
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  uVar3 = uVar2;
  if (uVar1 <= uVar2) {
    uVar3 = uVar1;
  }
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(byte **)param_1;
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    pbVar4 = param_1 + uVar3;
    do {
      uVar5 = (ulonglong)*param_1 - (ulonglong)*param_2;
      if (uVar5 != 0) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_1 != pbVar4);
  }
  if ((uVar5 & 0xffffffff) == 0) {
    if (uVar2 < uVar1) {
      uVar5 = 0xffffffffffffffff;
    }
    else {
      uVar5 = (ulonglong)(uVar1 != uVar2);
    }
  }
  return uVar5;
}

