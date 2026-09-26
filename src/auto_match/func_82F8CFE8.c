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
extern unsigned int lbl_831BC604;
extern unsigned int lbl_831BC618;
extern unsigned int lbl_831BC62C;


void fn_82F8CFE8(int param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  *(undefined ***)(param_1 + 0xb20) = &lbl_831BC604;
  *(int *)(param_1 + 0xb18) = param_1 + 0x94;
  *(undefined ***)(param_1 + 0xb2c) = &lbl_831BC618;
  *(undefined **)(param_1 + 0xb38) = &lbl_831BC62C;
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *(int *)(param_1 + 0xb24) = param_1 + 0x988;
  *(int *)(param_1 + 0xb30) = param_1 + 0xa7c;
  puVar1 = (undefined2 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  lVar2 = 0x11e;
  *(undefined4 *)(param_1 + 0x16b4) = 8;
  do {
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = (undefined2 *)(param_1 + 0x984);
  lVar2 = 0x1e;
  do {
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = (undefined2 *)(param_1 + 0xa78);
  lVar2 = 0x13;
  do {
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x16ac) = 0;
  *(undefined4 *)(param_1 + 0x16a8) = 0;
  *(undefined2 *)(param_1 + 0x494) = 1;
  *(undefined4 *)(param_1 + 0x16b0) = 0;
  *(undefined4 *)(param_1 + 0x16a0) = 0;
  return;
}

