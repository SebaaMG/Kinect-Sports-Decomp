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
extern unsigned int lbl_8208949C;


ulonglong fn_82A3BF58(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  ushort *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar4 = 0x4b0;
  iVar5 = 0;
  puVar3 = (ushort *)(param_1 + 0x28e6);
  lVar6 = 0x100;
  do {
    pbVar1 = (byte *)(param_1 + 0x2530 + iVar5);
    iVar5 = iVar5 + 1;
    puVar3 = puVar3 + 1;
    lVar4 = (longlong)(int)(uint)*pbVar1 * (longlong)(int)(uint)*puVar3 + lVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if (*(uint *)(param_1 + 0x868) != 0) {
    uVar2 = 0;
    do {
      iVar5 = (uVar2 + 0x20) * 8;
      lVar6 = 8;
      puVar3 = (ushort *)((iVar5 + 0x1473) * 2 + param_1);
      do {
        pbVar1 = (byte *)(param_1 + 0x2530 + iVar5);
        iVar5 = iVar5 + 1;
        puVar3 = puVar3 + 1;
        lVar4 = (longlong)(int)((uint)*pbVar1 + (uint)(byte)(&lbl_8208949C)[uVar2]) *
                (longlong)(int)(uint)*puVar3 + lVar4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(uint *)(param_1 + 0x868));
  }
  iVar5 = 0;
  puVar3 = (ushort *)(param_1 + 0x3c0c);
  lVar6 = 0xf9;
  do {
    pbVar1 = (byte *)(param_1 + 0x27ed + iVar5);
    iVar5 = iVar5 + 1;
    puVar3 = puVar3 + 1;
    lVar4 = (longlong)(int)(uint)*pbVar1 * (longlong)(int)(uint)*puVar3 + lVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return (lVar4 + 7U & 0xffffffff) >> 3;
}

