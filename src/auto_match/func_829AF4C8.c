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


void fn_829AF4C8(uint *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  bVar1 = *(byte *)((int)param_1 + 9);
  if (7 < bVar1) {
    return;
  }
  uVar2 = *param_1;
  uVar6 = (ulonglong)uVar2;
  if (bVar1 == 1) {
    lVar3 = uVar6 + param_2;
    param_2 = ((uVar6 - 1 & 0xffffffff) >> 3) + param_2;
    uVar5 = 7 - (uVar6 - 1 & 7);
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      lVar3 = lVar3 + -1;
      *(byte *)lVar3 = *(byte *)param_2 >> ((uint)uVar5 & 0x3f) & 1;
      if ((uVar5 & 0xffffffff) == 7) {
        uVar5 = 0;
        param_2 = param_2 + -1;
      }
      else {
        uVar5 = uVar5 + 1;
      }
    }
  }
  else if (bVar1 == 2) {
    lVar3 = uVar6 + param_2;
    param_2 = ((uVar6 - 1 & 0xffffffff) >> 2) + param_2;
    uVar5 = (3 - (uVar6 - 1 & 3) & 0x7fffffff) << 1;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      lVar3 = lVar3 + -1;
      *(byte *)lVar3 = *(byte *)param_2 >> ((uint)uVar5 & 0x3f) & 3;
      if ((uVar5 & 0xffffffff) == 6) {
        uVar5 = 0;
        param_2 = param_2 + -1;
      }
      else {
        uVar5 = uVar5 + 2;
      }
    }
  }
  else if (bVar1 == 4) {
    lVar3 = uVar6 + param_2;
    param_2 = ((uVar6 - 1 & 0xffffffff) >> 1) + param_2;
    lVar4 = (1 - (uVar6 - 1 & 1) & 0x3fffffff) << 2;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      lVar3 = lVar3 + -1;
      *(byte *)lVar3 = *(byte *)param_2 >> ((uint)lVar4 & 0x3f) & 0xf;
      if (lVar4 == 4) {
        lVar4 = 0;
        param_2 = param_2 + -1;
      }
      else {
        lVar4 = 4;
      }
    }
  }
  *(undefined1 *)((int)param_1 + 9) = 8;
  *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 10) << 3;
  param_1[1] = *(byte *)((int)param_1 + 10) * uVar2;
  return;
}

