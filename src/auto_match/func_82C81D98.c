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


void fn_82C81D98(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined1 *)(param_2 + -1);
  puVar2 = (undefined1 *)(param_1 + -1);
  lVar5 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar4 = (undefined1 *)(param_2 + param_3 + -1);
  puVar2 = (undefined1 *)(param_1 + param_4 + -1);
  lVar5 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar3 = param_2 + param_3 + param_3;
  iVar1 = param_1 + param_4 + param_4;
  puVar4 = (undefined1 *)(iVar3 + -1);
  puVar2 = (undefined1 *)(iVar1 + -1);
  lVar5 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar3 = iVar3 + param_3;
  iVar1 = iVar1 + param_4;
  puVar4 = (undefined1 *)(iVar3 + -1);
  puVar2 = (undefined1 *)(iVar1 + -1);
  lVar5 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar3 = iVar3 + param_3;
  iVar1 = iVar1 + param_4;
  puVar4 = (undefined1 *)(iVar3 + -1);
  puVar2 = (undefined1 *)(iVar1 + -1);
  lVar5 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar3 = iVar3 + param_3;
  iVar1 = iVar1 + param_4;
  puVar4 = (undefined1 *)(iVar3 + -1);
  puVar2 = (undefined1 *)(iVar1 + -1);
  lVar5 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar3 = iVar3 + param_3;
  iVar1 = iVar1 + param_4;
  puVar4 = (undefined1 *)(iVar3 + -1);
  puVar2 = (undefined1 *)(iVar1 + -1);
  lVar5 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar4 = (undefined1 *)(iVar3 + param_3 + -1);
  puVar2 = (undefined1 *)(iVar1 + param_4 + -1);
  lVar5 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

