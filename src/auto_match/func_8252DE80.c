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


void fn_8252DE80(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  uVar1 = lbl_821CC160;
  puVar2 = (undefined4 *)(param_1 + 0x94);
  lVar3 = 2;
  do {
    puVar2[-0x14] = uVar1;
    *(undefined1 *)(puVar2 + -0x15) = 0;
    puVar2[-0x13] = uVar1;
    puVar2[-0xd] = 0;
    puVar2[-0x12] = uVar1;
    puVar2[2] = 0;
    puVar2[-0x11] = uVar1;
    puVar2[1] = 0;
    puVar2[-0x10] = uVar1;
    puVar2[-0xf] = uVar1;
    puVar2[-0xe] = uVar1;
    puVar2[-0xc] = uVar1;
    puVar2[-0xb] = uVar1;
    puVar2[7] = uVar1;
    puVar2[8] = uVar1;
    puVar2[4] = uVar1;
    puVar2[5] = uVar1;
    puVar2 = puVar2 + 0xb;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x10c) = uVar1;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  *(undefined4 *)(param_1 + 0x114) = uVar1;
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  return;
}

