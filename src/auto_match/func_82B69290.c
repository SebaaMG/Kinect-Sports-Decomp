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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82B690E8();


void fn_82B69290(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 auStack_70 [4];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  puVar3 = auStack_70;
  lVar5 = 4;
  puVar2 = (undefined4 *)(param_1 + -0x10);
  do {
    puVar2 = puVar2 + 4;
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar2 = (undefined4 *)(param_2 + -0x10);
  lVar5 = 4;
  do {
    puVar2 = puVar2 + 4;
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar2 = (undefined4 *)(param_3 + -0x10);
  lVar5 = 4;
  do {
    puVar4 = puVar3;
    puVar2 = puVar2 + 4;
    *puVar4 = *puVar2;
    lVar5 = lVar5 + -1;
    puVar3 = puVar4 + 1;
  } while (lVar5 != 0);
  puVar2 = (undefined4 *)(param_4 + -0x10);
  lVar5 = 4;
  do {
    puVar2 = puVar2 + 4;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  fn_82B690E8(auStack_70,auStack_60,auStack_50,auStack_40);
  puVar3 = auStack_70;
  puVar2 = (undefined4 *)(param_1 + -0x10);
  lVar5 = 4;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 4;
    *puVar2 = uVar1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar2 = (undefined4 *)(param_2 + -0x10);
  lVar5 = 4;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 4;
    *puVar2 = uVar1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar2 = (undefined4 *)(param_3 + -0x10);
  lVar5 = 4;
  do {
    puVar4 = puVar3;
    puVar2 = puVar2 + 4;
    *puVar2 = *puVar4;
    lVar5 = lVar5 + -1;
    puVar3 = puVar4 + 1;
  } while (lVar5 != 0);
  puVar2 = (undefined4 *)(param_4 + -0x10);
  lVar5 = 4;
  do {
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 4;
    *puVar2 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

