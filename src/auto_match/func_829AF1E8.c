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


void fn_829AF1E8(uint *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  bVar1 = *(byte *)(param_1 + 2);
  if ((bVar1 & 2) == 0) {
    return;
  }
  uVar5 = (ulonglong)*param_1;
  if (*(char *)((int)param_1 + 9) == '\b') {
    if (bVar1 == 2) {
      if (uVar5 == 0) {
        return;
      }
      puVar4 = (undefined1 *)(param_2 + -1);
      do {
        uVar2 = puVar4[1];
        puVar4[1] = puVar4[3];
        puVar4 = puVar4 + 3;
        *puVar4 = uVar2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return;
    }
    if (bVar1 != 6) {
      return;
    }
    if (uVar5 == 0) {
      return;
    }
    puVar4 = (undefined1 *)(param_2 + -2);
    do {
      uVar2 = puVar4[2];
      puVar4[2] = puVar4[4];
      puVar4 = puVar4 + 4;
      *puVar4 = uVar2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    return;
  }
  if (*(char *)((int)param_1 + 9) != '\x10') {
    return;
  }
  if (bVar1 == 2) {
    if (uVar5 == 0) {
      return;
    }
    puVar4 = (undefined1 *)(param_2 + -1);
    do {
      uVar2 = puVar4[5];
      uVar3 = puVar4[2];
      puVar4[5] = puVar4[1];
      puVar4[1] = uVar2;
      puVar4[2] = puVar4[6];
      puVar4 = puVar4 + 6;
      *puVar4 = uVar3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    return;
  }
  if (bVar1 != 6) {
    return;
  }
  if (uVar5 == 0) {
    return;
  }
  puVar4 = (undefined1 *)(param_2 + -3);
  do {
    uVar2 = puVar4[7];
    uVar3 = puVar4[4];
    puVar4[7] = puVar4[3];
    puVar4[3] = uVar2;
    puVar4[4] = puVar4[8];
    puVar4 = puVar4 + 8;
    *puVar4 = uVar3;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  return;
}

