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
extern unsigned int *auStack_24;
extern unsigned int uStack_10;
extern unsigned int uStack_28;


void fn_82496ED8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uStack_28;
  undefined4 auStack_24 [5];
  undefined4 uStack_10;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar2 = *(undefined4 *)(iVar1 + 0x100);
  if (*(int *)(iVar1 + 0x188) == 0) {
    uStack_10 = 0;
  }
  else {
    puVar3 = &uStack_28;
    puVar4 = (undefined4 *)(iVar1 + 0x188);
    lVar5 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uStack_10 = 1;
    *(undefined4 *)(iVar1 + 0x188) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  puVar4 = &uStack_28;
  puVar3 = (undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  lVar5 = 5;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined4 *)(param_1 + 0x24) = uStack_10;
  return;
}

