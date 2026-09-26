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


void fn_827A2550(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  uVar2 = 0;
  puVar3 = (undefined1 *)(param_2 + 0xc);
  puVar4 = (undefined4 *)(param_1 + 4);
  lVar5 = 5;
  do {
    uVar1 = 1 << (uVar2 & 0x3f);
    if ((*(byte *)(param_2 + 0x50) & uVar1) != 0) {
      *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | (byte)uVar1;
      puVar4[-1] = *(undefined4 *)(puVar3 + -0xc);
      *puVar4 = *(undefined4 *)((param_2 - param_1) + (int)puVar4);
      puVar4[1] = *(undefined4 *)(puVar3 + -4);
      *(undefined1 *)(puVar4 + 2) = *puVar3;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 0x10;
    puVar4 = puVar4 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

