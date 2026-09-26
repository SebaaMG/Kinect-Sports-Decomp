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
extern unsigned int *auStack_58;
extern unsigned int *auStack_70;
extern unsigned int *auStack_88;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_d0;
extern int fn_82645CF8();
extern unsigned int uStack_d8;


void fn_829F7D28(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uStack_d8;
  undefined4 auStack_d0 [6];
  undefined4 auStack_b8 [6];
  undefined4 auStack_a0 [6];
  undefined4 auStack_88 [6];
  undefined4 auStack_70 [6];
  undefined4 auStack_58 [6];
  undefined4 auStack_40 [10];
  
  lVar5 = 0x15;
  puVar1 = &uStack_d8;
  do {
    puVar4 = puVar1;
    puVar1 = puVar4 + 1;
    *puVar1 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined4 *)(puVar4 + 2) = 0;
  auStack_d0[0] = 0;
  if (param_2 == 0) {
    puVar3 = auStack_d0;
    lVar5 = 6;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  else {
    puVar2 = auStack_d0;
    puVar3 = (undefined4 *)(param_2 + 0x18);
    lVar5 = 6;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_3 == 0) {
    puVar3 = auStack_b8;
    lVar5 = 6;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  else {
    puVar2 = auStack_b8;
    puVar3 = (undefined4 *)(param_3 + 0x18);
    lVar5 = 6;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_4 == 0) {
    puVar3 = auStack_a0;
    lVar5 = 6;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  else {
    puVar2 = auStack_a0;
    puVar3 = (undefined4 *)(param_4 + 0x18);
    lVar5 = 6;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_5 == 0) {
    puVar3 = auStack_88;
    lVar5 = 6;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  else {
    puVar2 = auStack_88;
    puVar3 = (undefined4 *)(param_5 + 0x18);
    lVar5 = 6;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_6 == 0) {
    puVar3 = auStack_70;
    lVar5 = 6;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  else {
    puVar2 = auStack_70;
    puVar3 = (undefined4 *)(param_6 + 0x18);
    lVar5 = 6;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_7 == 0) {
    puVar3 = auStack_58;
    lVar5 = 6;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  else {
    puVar2 = auStack_58;
    puVar3 = (undefined4 *)(param_7 + 0x18);
    lVar5 = 6;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_8 == 0) {
    puVar3 = auStack_40;
    lVar5 = 6;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  else {
    puVar2 = auStack_40;
    puVar3 = (undefined4 *)(param_8 + 0x18);
    lVar5 = 6;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  fn_82645CF8(param_1,1,auStack_d0,0xac);
  return;
}

