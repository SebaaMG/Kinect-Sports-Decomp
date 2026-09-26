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


void fn_82D3C580(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  int in_r0;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  if (-1 < param_3 + -1) {
    do {
      puVar1 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
      *puVar1 = in_register_000100d0;
      puVar1[1] = in_register_000100d4;
      puVar1[2] = in_register_000100d8;
      puVar1[3] = in_vr13;
      param_4 = param_4 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return;
  }
  return;
}

