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


void fn_82DF8B08(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  puVar2 = (undefined1 *)(param_1 + -1);
  puVar3 = (undefined1 *)(param_1 + 6);
  lVar4 = 3;
  do {
    uVar1 = puVar2[1];
    puVar2[1] = puVar2[2];
    puVar2 = puVar2 + 2;
    *puVar2 = uVar1;
    uVar1 = puVar3[2];
    puVar3[2] = puVar3[5];
    puVar3[5] = uVar1;
    uVar1 = puVar3[3];
    puVar3[3] = puVar3[4];
    puVar3 = puVar3 + 4;
    *puVar3 = uVar1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  uVar1 = *(undefined1 *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0x17) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x15);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x16) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x1b) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined1 *)(param_1 + 0x1a) = uVar1;
  return;
}

