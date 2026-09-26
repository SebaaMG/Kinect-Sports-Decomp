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


void fn_82634C38(int param_1,ulonglong param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_4;
  uVar2 = uVar1 & 0x1f;
  if (uVar2 < 0x13) {
    if (uVar2 == 0x12) {
      lVar4 = (param_2 & 0x3fffffff) * 4;
      uVar3 = ((ulonglong)(uVar1 >> 0x1a) & 3) + lVar4;
      uVar1 = (uint)(uVar3 >> 3) & 0x1ffffffc;
      *(uint *)(uVar1 + param_1) = 1 << ((uint)uVar3 & 0x1f) | *(uint *)(uVar1 + param_1);
      uVar3 = ((ulonglong)(*param_4 >> 0x1c) & 3) + lVar4;
      goto code_r0x82634ce4;
    }
    if ((uVar1 & 0x1f) == 0) {
      if ((param_3 != 0) && ((param_4[1] & 0x40000000) != 0)) {
        return;
      }
      uVar3 = (ulonglong)(uVar1 >> 0x1e) + (param_2 & 0x3fffffff) * 4;
code_r0x82634d20:
      uVar1 = (uint)(uVar3 >> 3) & 0x1ffffffc;
      *(uint *)(uVar1 + param_1) = 1 << ((uint)uVar3 & 0x1f) | *(uint *)(uVar1 + param_1);
      return;
    }
    if (uVar2 != 1) {
      if (uVar2 < 0x10) {
        return;
      }
      if (0x11 < uVar2) {
        return;
      }
    }
code_r0x82634c6c:
    lVar4 = (param_2 & 0x3fffffff) * 4;
    uVar3 = ((ulonglong)(uVar1 >> 0x1a) & 3) + lVar4;
    uVar1 = (uint)(uVar3 >> 3) & 0x1ffffffc;
    *(uint *)(uVar1 + param_1) = 1 << ((uint)uVar3 & 0x1f) | *(uint *)(uVar1 + param_1);
    if (0x3fff < (param_4[2] & 0xc000)) {
      uVar3 = ((ulonglong)(*param_4 >> 0x1c) & 3) + lVar4;
      uVar1 = (uint)(uVar3 >> 3) & 0x1ffffffc;
      *(uint *)(uVar1 + param_1) = 1 << ((uint)uVar3 & 0x1f) | *(uint *)(uVar1 + param_1);
    }
    if ((param_4[2] & 0xc000) < 0x8000) {
      return;
    }
  }
  else {
    if (uVar2 == 0x13) goto code_r0x82634c6c;
    if (uVar2 == 0x18) {
      uVar3 = ((ulonglong)(uVar1 >> 0x1a) & 3) + (param_2 & 0x3fffffff) * 4;
      goto code_r0x82634d20;
    }
    if (uVar2 < 0x19) {
      return;
    }
    if (0x1a < uVar2) {
      return;
    }
    lVar4 = (param_2 & 0x3fffffff) * 4;
    uVar3 = ((ulonglong)(uVar1 >> 0x1a) & 3) + lVar4;
    uVar1 = (uint)(uVar3 >> 3) & 0x1ffffffc;
    *(uint *)(uVar1 + param_1) = 1 << ((uint)uVar3 & 0x1f) | *(uint *)(uVar1 + param_1);
    uVar3 = ((ulonglong)(*param_4 >> 0x1c) & 3) + lVar4;
    uVar1 = (uint)(uVar3 >> 3) & 0x1ffffffc;
    *(uint *)(uVar1 + param_1) = 1 << ((uint)uVar3 & 0x1f) | *(uint *)(uVar1 + param_1);
  }
  uVar3 = (ulonglong)(*param_4 >> 0x1e) + lVar4;
code_r0x82634ce4:
  uVar1 = (uint)(uVar3 >> 3) & 0x1ffffffc;
  *(uint *)(uVar1 + param_1) = 1 << ((uint)uVar3 & 0x1f) | *(uint *)(uVar1 + param_1);
  return;
}

