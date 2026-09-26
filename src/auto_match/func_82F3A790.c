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
extern unsigned int lbl_82162C1C;
extern unsigned int lbl_82162C24;


void fn_82F3A790(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  *param_1 = &lbl_82162C24;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  lVar1 = 0x13;
  puVar2 = param_1 + 0x42;
  param_1[8] = &lbl_82162C1C;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  do {
    puVar2[-1] = 0;
    lVar1 = lVar1 + -1;
    *puVar2 = 0;
    *(undefined2 *)(puVar2 + 3) = 0;
    *(undefined1 *)((int)puVar2 + 0xe) = 0;
    puVar2[0x2c] = 0;
    puVar2[-2] = &lbl_82162C1C;
    puVar2[0x2d] = 0;
    puVar2 = puVar2 + 0x37;
  } while (-1 < lVar1);
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((int)param_1 + 0xea) = 0;
  param_1[0x487] = 0;
  return;
}

