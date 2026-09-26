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
extern unsigned int *auStack_44;
extern int fn_822D9E28();
extern unsigned int stack0x00000028;
extern unsigned int uStack00000028;


void fn_822DCA58(int param_1,int param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uStack00000028;
  undefined4 auStack_44 [17];
  
  uStack00000028 = param_4;
  cVar1 = fn_822D9E28(&stack0x00000028,param_2,param_1);
  if (cVar1 != '\0') {
    puVar3 = auStack_44;
    puVar2 = (undefined4 *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar2 = (undefined4 *)(param_1 + -4);
    puVar3 = (undefined4 *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar2 = auStack_44;
    puVar3 = (undefined4 *)(param_1 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  cVar1 = fn_822D9E28(&stack0x00000028,param_3,param_2);
  if (cVar1 != '\0') {
    puVar3 = auStack_44;
    puVar2 = (undefined4 *)(param_3 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar2 = (undefined4 *)(param_2 + -4);
    puVar3 = (undefined4 *)(param_3 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar2 = auStack_44;
    puVar3 = (undefined4 *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  cVar1 = fn_822D9E28(&stack0x00000028,param_2,param_1);
  if (cVar1 != '\0') {
    puVar3 = auStack_44;
    puVar2 = (undefined4 *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar2 = (undefined4 *)(param_1 + -4);
    puVar3 = (undefined4 *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar2 = auStack_44;
    puVar3 = (undefined4 *)(param_1 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

