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
extern unsigned int *auStack_38;
extern unsigned int uStack_3a;


void fn_828D4E48(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined2 uStack_3a;
  undefined2 auStack_38 [28];
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  puVar2 = &uStack_3a;
  lVar5 = 0x15;
  puVar3 = (undefined2 *)(param_1 + 6);
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar4 = 0;
  lVar5 = 0x2a;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  do {
    *(undefined1 *)(param_1 + 8 + iVar4) = *(undefined1 *)(param_2 + 8 + iVar4);
    iVar4 = iVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar4 = 0;
  *(undefined4 *)(param_2 + 4) = uVar1;
  lVar5 = 0x2a;
  do {
    *(undefined1 *)(param_2 + 8 + iVar4) = *(undefined1 *)((int)auStack_38 + iVar4);
    iVar4 = iVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

