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


void fn_8275FA28(int param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  byte bVar5;
  
  bVar1 = *(byte *)(param_1 + 0x34);
  *(uint *)(param_1 + 0x14) = param_2;
  *(uint *)(param_1 + 0xc) = param_2;
  *(uint *)(param_1 + 0x18) = param_3;
  *(uint *)(param_1 + 0x10) = param_3;
  if (bVar1 < param_4) {
    *(char *)(param_1 + 0x34) = (char)param_4;
    return;
  }
  if (param_4 != 0) {
    return;
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (((ulonglong)param_2 ^ (longlong)((int)param_2 >> 0x1f)) -
             (longlong)((int)param_2 >> 0x1f) & 0x7fffffff) << 1;
  }
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (((ulonglong)param_3 ^ (longlong)((int)param_3 >> 0x1f)) -
             (longlong)((int)param_3 >> 0x1f) & 0x7fffffff) << 1;
  }
  uVar3 = uVar3 | uVar2;
  if (uVar3 < 0x8000) {
    if (uVar3 < 0x80) {
      if (uVar3 < 8) {
        if (uVar3 < 2) {
          uVar4 = -((uVar3 == 0) - 1);
        }
        else {
          uVar4 = 3 - (uVar3 < 4);
        }
      }
      else if (uVar3 < 0x20) {
        uVar4 = 5 - (uVar3 < 0x10);
      }
      else {
        uVar4 = 7 - (uVar3 < 0x40);
      }
    }
    else if (uVar3 < 0x800) {
      if (uVar3 < 0x200) {
        uVar4 = 9 - (uVar3 < 0x100);
      }
      else {
        uVar4 = 0xb - (uVar3 < 0x400);
      }
    }
    else if (uVar3 < 0x2000) {
      uVar4 = 0xd - (uVar3 < 0x1000);
    }
    else {
      uVar4 = 0xf - (uVar3 < 0x4000);
    }
  }
  else if (uVar3 < 0x800000) {
    if (uVar3 < 0x80000) {
      if (uVar3 < 0x20000) {
        uVar4 = 0x11 - (uVar3 < 0x10000);
      }
      else {
        uVar4 = 0x13 - (uVar3 < 0x40000);
      }
    }
    else if (uVar3 < 0x200000) {
      uVar4 = 0x15 - (uVar3 < 0x100000);
    }
    else {
      uVar4 = 0x17 - (uVar3 < 0x400000);
    }
  }
  else if (uVar3 < 0x8000000) {
    if (uVar3 < 0x2000000) {
      uVar4 = 0x19 - (uVar3 < 0x1000000);
    }
    else {
      uVar4 = 0x1b - (uVar3 < 0x4000000);
    }
  }
  else if (uVar3 < 0x20000000) {
    uVar4 = 0x1d - (uVar3 < 0x10000000);
  }
  else if (uVar3 < 0x40000000) {
    uVar4 = 0x1e;
  }
  else {
    uVar4 = 0x20 - (uVar3 < 0xffffffff80000000);
  }
  bVar5 = (byte)uVar4;
  if ((uVar4 & 0xff) <= (uint)bVar1) {
    bVar5 = bVar1;
  }
  *(byte *)(param_1 + 0x34) = bVar5;
  return;
}

