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


void fn_82DF89C8(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  lVar3 = 4;
  puVar2 = (undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  do {
    uVar1 = puVar2[2];
    puVar2[2] = puVar2[5];
    puVar2[5] = uVar1;
    uVar1 = puVar2[3];
    puVar2[3] = puVar2[4];
    puVar2 = puVar2 + 4;
    *puVar2 = uVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

