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


void fn_8236B008(int param_1,undefined4 param_2)

{
  int in_r0;
  undefined4 *puVar1;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  *(undefined4 *)(param_1 + 0xed0) = lbl_821CC160;
  puVar1 = (undefined4 *)(in_r0 + param_1 + 0xe90 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  *(undefined4 *)(param_1 + 0xea0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xea8) = 0;
  puVar1 = (undefined4 *)(param_1 + 0xeb0U & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  *(undefined4 *)(param_1 + 0xea4) = 3;
  puVar1 = (undefined4 *)(param_1 + 0xec0U & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  for (puVar1 = (undefined4 *)(param_1 + 0xed4); puVar1 != (undefined4 *)(param_1 + 0xee0);
      puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  puVar1 = (undefined4 *)(in_r0 + param_1 + 0xe90 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  *(undefined4 *)(param_1 + 0xea0) = param_2;
  return;
}

