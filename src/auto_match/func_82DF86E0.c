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
extern unsigned int lbl_82144818;


void fn_82DF86E0(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_82144818;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0x16;
  *(undefined2 *)(param_1 + 0xc) = 0;
  puVar1 = param_1 + 0xc;
  *(undefined2 *)((int)param_1 + 0x32) = 3;
  lVar2 = 7;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x80000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x80000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x80000000;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x80000000;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0x80000000;
  param_1[0x43] = 0x103;
  param_1[0x44] = 1;
  return;
}

