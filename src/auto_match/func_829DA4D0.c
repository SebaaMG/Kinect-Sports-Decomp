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
extern int fn_82A1DDC0();
extern int fn_82A1EFC0();


void fn_829DA4D0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs62 [16];
  undefined4 in_register_000103e0;
  undefined4 in_register_000103e4;
  undefined4 in_register_000103e8;
  undefined4 in_vr62;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  
  fn_82A1EFC0(param_4,0,0xae0);
  *param_4 = 5;
  param_4[1] = 0x2dff;
  param_4[0x156] = *param_1;
  *(undefined4 *)((int)param_4 + 0xabc) = param_2[1];
  *(undefined4 *)(param_4 + 0x158) = *param_2;
  *(undefined4 *)((int)param_4 + 0xac4) = param_3[1];
  *(undefined4 *)(param_4 + 0x159) = *param_3;
  altv207_13(in_vs62,in_vs42);
  puVar1 = (undefined4 *)((uint)(param_4 + 2) & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f4;
  puVar1[2] = in_register_000103f8;
  puVar1[3] = in_vr63;
  altv207_13(in_vs62,in_vs43);
  puVar1 = (undefined4 *)((uint)(param_4 + 4) & 0xfffffff0);
  *puVar1 = in_register_000103e0;
  puVar1[1] = in_register_000103e4;
  puVar1[2] = in_register_000103e8;
  puVar1[3] = in_vr62;
  fn_82A1DDC0(param_4 + 6,param_1 + 6,0xa80);
  return;
}

