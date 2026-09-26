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
extern int fn_82A1EFC0();
extern int fn_82F53BF0();
extern unsigned int lbl_821C0C28;


undefined4 * fn_824CD4E8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  
  fn_82F53BF0();
  *param_1 = &lbl_821C0C28;
  fn_82A1EFC0(param_1 + 0xc,0,0x1c0);
  fn_82A1EFC0(param_1 + 0x7c,0,8);
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x80) & 0xfffffff0);
  *puVar1 = in_register_00010000;
  puVar1[1] = in_ACC;
  puVar1[2] = in_register_00010008;
  puVar1[3] = in_vr0;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x84) & 0xfffffff0);
  *puVar1 = in_register_00010000;
  puVar1[1] = in_ACC;
  puVar1[2] = in_register_00010008;
  puVar1[3] = in_vr0;
  return param_1;
}

