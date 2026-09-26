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


void fn_82F26F98(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                  uint param_7,int param_8)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong lVar5;
  
  param_2 = ((int)param_7 >> 2) * param_3 + ((int)param_6 >> 2) + param_2;
  if (((param_6 & 3) == 0) && ((param_7 & 3) == 0)) {
    puVar3 = (undefined1 *)(param_2 + -1);
    puVar2 = (undefined1 *)(param_4 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    param_2 = param_2 + param_3;
    puVar2 = (undefined1 *)(param_4 + param_5 + -1);
    puVar3 = (undefined1 *)(param_2 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar4 = param_4 + param_5 + param_5;
    param_2 = param_2 + param_3;
    puVar2 = (undefined1 *)(iVar4 + -1);
    puVar3 = (undefined1 *)(param_2 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar4 = iVar4 + param_5;
    param_2 = param_2 + param_3;
    puVar2 = (undefined1 *)(iVar4 + -1);
    puVar3 = (undefined1 *)(param_2 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar4 = iVar4 + param_5;
    param_2 = param_2 + param_3;
    puVar2 = (undefined1 *)(iVar4 + -1);
    puVar3 = (undefined1 *)(param_2 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar4 = iVar4 + param_5;
    param_2 = param_2 + param_3;
    puVar2 = (undefined1 *)(iVar4 + -1);
    puVar3 = (undefined1 *)(param_2 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar4 = iVar4 + param_5;
    param_2 = param_2 + param_3;
    puVar2 = (undefined1 *)(iVar4 + -1);
    puVar3 = (undefined1 *)(param_2 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    puVar3 = (undefined1 *)(param_2 + param_3 + -1);
    puVar2 = (undefined1 *)(iVar4 + param_5 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return;
  }
  if (param_8 == 1) {
    pcVar1 = *(code **)(param_1 + 0xa5c);
  }
  else {
    pcVar1 = *(code **)(param_1 + 0xa60);
  }
  (*pcVar1)();
  return;
}

