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
extern int fn_8250A688();
extern unsigned int uStack_44;


void fn_8250BFE0(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uStack_44;
  undefined4 auStack_40 [16];
  
  cVar1 = fn_8250A688(param_2,param_1);
  if (cVar1 != '\0') {
    puVar2 = &uStack_44;
    puVar3 = (undefined4 *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (undefined4 *)(param_1 + -4);
    puVar2 = (undefined4 *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = &uStack_44;
    puVar2 = (undefined4 *)(param_1 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  cVar1 = fn_8250A688(param_3,param_2);
  if (cVar1 != '\0') {
    puVar2 = &uStack_44;
    puVar3 = (undefined4 *)(param_3 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (undefined4 *)(param_2 + -4);
    puVar2 = (undefined4 *)(param_3 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = &uStack_44;
    puVar2 = (undefined4 *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  cVar1 = fn_8250A688(param_2,param_1);
  if (cVar1 != '\0') {
    puVar2 = &uStack_44;
    puVar3 = (undefined4 *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (undefined4 *)(param_1 + -4);
    puVar2 = (undefined4 *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = &uStack_44;
    puVar2 = (undefined4 *)(param_1 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

