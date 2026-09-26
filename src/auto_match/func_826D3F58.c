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
extern int fn_826D0280();
extern int fn_826D0310();
extern unsigned int lbl_8200C1CC;


undefined4 * fn_826D3F58(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  *param_1 = &lbl_8200C1CC;
  fn_826D0280(param_1 + 2);
  puVar1 = param_1 + 6;
  lVar2 = 4;
  do {
    puVar1 = puVar1 + 4;
    *(undefined1 *)puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  fn_826D0310(param_1 + 0x20);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 10;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  *(byte *)((int)param_1 + 0xc6) = *(byte *)((int)param_1 + 0xc6) & 0x3f;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}

