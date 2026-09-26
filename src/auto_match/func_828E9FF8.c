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


uint fn_828E9FF8(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  uVar4 = 0;
  if (param_2 == 0) {
    return uVar3;
  }
  uVar2 = *param_1;
  if ((uVar2 != 0) && (7 < uVar2 + param_2)) {
    uVar4 = 8 - uVar2;
    param_2 = param_2 - uVar4;
    bVar1 = *(byte *)(param_1[2] + param_1[1]);
    param_1[1] = param_1[1] + 1;
    uVar3 = (uint)(bVar1 >> (uVar2 & 0x3f));
    *param_1 = 0;
  }
  if (7 < (int)param_2) {
    uVar5 = (ulonglong)(param_2 >> 3);
    param_2 = param_2 - (param_2 & 0xfffffff8);
    do {
      bVar1 = *(byte *)(param_1[1] + param_1[2]);
      param_1[1] = param_1[1] + 1;
      uVar3 = (uint)bVar1 << (uVar4 & 0x3f) | uVar3;
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if ((int)param_2 < 1) {
    return uVar3;
  }
  uVar2 = *param_1;
  bVar1 = *(byte *)(param_1[2] + param_1[1]);
  *param_1 = uVar2 + param_2;
  return ((uint)(bVar1 >> (uVar2 & 0x3f)) & ~(-1 << (param_2 & 0x3f))) << (uVar4 & 0x3f) | uVar3;
}

