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
extern unsigned int lbl_821CC160;


void fn_8260DDC8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  uVar1 = lbl_821CC160;
  puVar4 = (undefined4 *)(param_1 + 0x18);
  lVar3 = 2;
  do {
    puVar4[2] = 0;
    puVar4[-1] = 0;
    *puVar4 = 0;
    puVar2 = puVar4 + 1;
    puVar4[1] = 0;
    lVar5 = 2;
    do {
      puVar2[3] = uVar1;
      puVar2 = puVar2 + 2;
      *puVar2 = uVar1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    puVar4[7] = 0;
    lVar3 = lVar3 + -1;
    puVar4[8] = 0;
    puVar4 = puVar4 + 10;
  } while (lVar3 != 0);
  puVar4 = (undefined4 *)(param_1 + 0xe0);
  lVar3 = 0x20;
  do {
    puVar4[-0x1f] = uVar1;
    puVar4 = puVar4 + 1;
    *puVar4 = uVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

