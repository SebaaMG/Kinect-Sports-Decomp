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
extern unsigned int *auStack_20;
extern unsigned int uStack_24;


void fn_8250BD30(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uStack_24;
  undefined4 auStack_20 [8];
  
  if (*(float *)(param_2 + 8) < *(float *)(param_1 + 8)) {
    puVar2 = &uStack_24;
    puVar1 = (undefined4 *)(param_2 + -4);
    lVar3 = 5;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    puVar1 = (undefined4 *)(param_1 + -4);
    puVar2 = (undefined4 *)(param_2 + -4);
    lVar3 = 5;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    puVar1 = &uStack_24;
    puVar2 = (undefined4 *)(param_1 + -4);
    lVar3 = 5;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(float *)(param_3 + 8) < *(float *)(param_2 + 8)) {
    puVar2 = &uStack_24;
    puVar1 = (undefined4 *)(param_3 + -4);
    lVar3 = 5;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    puVar1 = (undefined4 *)(param_2 + -4);
    puVar2 = (undefined4 *)(param_3 + -4);
    lVar3 = 5;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    puVar1 = &uStack_24;
    puVar2 = (undefined4 *)(param_2 + -4);
    lVar3 = 5;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(float *)(param_1 + 8) <= *(float *)(param_2 + 8)) {
    return;
  }
  puVar2 = &uStack_24;
  puVar1 = (undefined4 *)(param_2 + -4);
  lVar3 = 5;
  do {
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar1 = (undefined4 *)(param_1 + -4);
  puVar2 = (undefined4 *)(param_2 + -4);
  lVar3 = 5;
  do {
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar1 = &uStack_24;
  puVar2 = (undefined4 *)(param_1 + -4);
  lVar3 = 5;
  do {
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

