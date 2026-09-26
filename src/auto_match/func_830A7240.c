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


void fn_830A7240(byte *param_1,int param_2)

{
  undefined4 *puVar1;
  int in_r0;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  if (*param_1 == 0) {
    return;
  }
  if ((*param_1 & 3) != 0) {
    puVar1 = (undefined4 *)(in_r0 + param_2 + 0x30 & 0xfffffff0);
    *puVar1 = in_register_000100d0;
    puVar1[1] = in_register_000100d4;
    puVar1[2] = in_register_000100d8;
    puVar1[3] = in_vr13;
    puVar1 = (undefined4 *)(in_r0 + param_2 + 0x90 & 0xfffffff0);
    *puVar1 = in_register_000100b0;
    puVar1[1] = in_register_000100b4;
    puVar1[2] = in_register_000100b8;
    puVar1[3] = in_vr11;
  }
  if ((*param_1 & 0xc) != 0) {
    puVar1 = (undefined4 *)(in_r0 + param_2 + 0x40 & 0xfffffff0);
    *puVar1 = in_register_000100d0;
    puVar1[1] = in_register_000100d4;
    puVar1[2] = in_register_000100d8;
    puVar1[3] = in_vr13;
    puVar1 = (undefined4 *)(in_r0 + param_2 + 0xa0 & 0xfffffff0);
    *puVar1 = in_register_000100b0;
    puVar1[1] = in_register_000100b4;
    puVar1[2] = in_register_000100b8;
    puVar1[3] = in_vr11;
  }
  if ((*param_1 & 0x30) == 0) {
    return;
  }
  puVar1 = (undefined4 *)(in_r0 + param_2 + 0x50 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (undefined4 *)(in_r0 + param_2 + 0xb0 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  return;
}

