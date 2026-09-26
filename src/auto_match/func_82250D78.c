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


void fn_82250D78(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  uVar1 = lbl_821CC160;
  param_1[10] = lbl_821CC160;
  param_1[0xc] = uVar1;
  *param_1 = 0xffffffff;
  puVar2 = (undefined4 *)((uint)(param_1 + 4) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0xffffffff;
  puVar2 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  param_1[0xb] = 0xffffffff;
  param_1[0x14] = 0;
  for (puVar2 = param_1 + 0x15; puVar2 != param_1 + 0x1c; puVar2 = puVar2 + 1) {
    *puVar2 = 0xffffffff;
  }
  param_1[0x1c] = 0;
  for (puVar2 = param_1 + 0x1d; puVar2 != param_1 + 0x24; puVar2 = puVar2 + 1) {
    *puVar2 = 0xffffffff;
  }
  return;
}

