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
extern unsigned int *auStack_20;
extern int fn_82CE5458();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82139F9C;


undefined4 * fn_82D96728(undefined4 *param_1)

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
  undefined4 auStack_20 [4];
  
  *param_1 = &lbl_82139F9C;
  param_1[2] = 0;
  *(undefined2 *)((int)param_1 + 6) = 1;
  auStack_20[0] = lbl_82002AE0;
  *(undefined2 *)(param_1 + 4) = 3;
  *(undefined2 *)(param_1 + 0x10) = 5;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  fn_82CE5458((int)param_1 + 0x43,auStack_20);
  param_1[0x11] = lbl_82134508;
  puVar1 = (undefined4 *)((int)param_1 + in_r0 + 0x20 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (undefined4 *)((int)param_1 + in_r0 + 0x30 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  return param_1;
}

