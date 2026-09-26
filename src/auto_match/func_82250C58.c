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


void fn_82250C58(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  for (puVar1 = param_1 + 2; puVar1 != param_1 + 5; puVar1 = puVar1 + 1) {
    *puVar1 = 0xffffffff;
  }
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 1;
  param_1[0xe] = 0;
  for (puVar1 = param_1 + 0xf; puVar1 != param_1 + 0x16; puVar1 = puVar1 + 1) {
    *puVar1 = 0xffffffff;
  }
  param_1[0x16] = 0;
  puVar1 = param_1 + 0x17;
  if (puVar1 != param_1 + 0x1e) {
    do {
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
    } while (puVar1 != param_1 + 0x1e);
    return;
  }
  return;
}

