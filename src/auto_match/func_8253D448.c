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


void fn_8253D448(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  
  uVar2 = 0;
  lVar4 = 0x20;
  puVar3 = (uint *)(*(int *)(param_1 + 0x1c) + 0x34);
  do {
    uVar1 = 1 << (uVar2 & 0x3f);
    if ((uVar1 & 0x4000) != 0) {
      *puVar3 = *puVar3 & 1;
    }
    if ((uVar1 & 0xfffffffe) != 0) {
      *puVar3 = *puVar3 & 0xffffbfff;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uVar2 = 0;
  puVar3 = (uint *)(*(int *)(param_1 + 0x1c) + 0x34);
  lVar4 = 0x20;
  do {
    uVar1 = 1 << (uVar2 & 0x3f);
    if ((uVar1 & 0x4000) != 0) {
      *puVar3 = *puVar3 | param_2;
    }
    if ((uVar1 & param_2) != 0) {
      *puVar3 = *puVar3 | 0x4000;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

