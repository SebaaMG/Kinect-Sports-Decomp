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
extern int fn_82313630();
extern unsigned int lbl_821AF4E8;
extern unsigned int lbl_821AF508;
extern unsigned int lbl_821AF518;
extern unsigned int lbl_821AF538;
extern unsigned int lbl_821CC160;


undefined4 *
fn_82314208(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  uVar1 = *(undefined4 *)(param_3 + 0x114);
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[1] = param_2;
  param_1[2] = uVar1;
  *param_1 = &lbl_821AF4E8;
  uVar1 = lbl_821CC160;
  param_1[5] = &lbl_821AF508;
  param_1[0x12] = uVar1;
  param_1[8] = &lbl_821AF518;
  param_1[0x10] = param_5;
  puVar2 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  param_1[0x11] = 0;
  fn_82313630(param_1 + 0x14);
  param_1[0x4c] = &lbl_821AF538;
  param_1[0x4d] = param_6;
  param_1[0x52] = param_6;
  param_1[0x53] = 0xffffffff;
  param_1[0x4e] = param_1 + 5;
  param_1[0x4f] = param_1 + 8;
  param_1[0x50] = param_1 + 0x14;
  param_1[0x51] = param_1 + 0x4c;
  return param_1;
}

