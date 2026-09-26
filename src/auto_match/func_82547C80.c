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


void fn_82547C80(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = (param_2 & 0xff) * 4;
  iVar1 = iVar4 >> 3;
  uVar2 = iVar4 + iVar1 * -8;
  puVar3 = (undefined4 *)(param_1 + 0x40);
  iVar4 = 0;
  lVar6 = 2;
  do {
    iVar5 = iVar4 + iVar1;
    iVar4 = iVar4 + 0x20;
    iVar5 = iVar5 + param_1;
    *(byte *)(iVar5 + 4) =
         *(byte *)(iVar5 + 4) & ~(byte)(0xf << (uVar2 & 0x3f)) |
         (byte)((param_3 & 0xff) << (uVar2 & 0x3f));
    puVar3 = puVar3 + 1;
    *puVar3 = 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

