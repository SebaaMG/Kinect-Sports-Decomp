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


void fn_83029C18(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  uVar2 = 0;
  if (*(short *)(param_1 + 0x16) == 0) {
    return;
  }
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0xc) + -1);
  do {
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
  } while (uVar2 < *(ushort *)(param_1 + 0x16));
  return;
}

