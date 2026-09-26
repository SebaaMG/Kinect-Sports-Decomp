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
extern unsigned int lbl_821917D4;
extern unsigned int lbl_821962C0;
extern unsigned int lbl_82196750;
extern unsigned int lbl_821B0B38;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


undefined4 *
fn_82334110(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  param_1[2] = param_2;
  param_1[3] = param_4;
  param_1[5] = 0;
  *param_1 = &lbl_821B0B38;
  param_1[1] = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x78) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar6;
  puVar1 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x7c) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar6;
  puVar1 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar4 = *puVar1;
  uVar6 = puVar1[1];
  uVar5 = puVar1[2];
  uVar7 = puVar1[3];
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  uVar3 = lbl_821CC160;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x80) & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar6;
  puVar1[2] = uVar5;
  puVar1[3] = uVar7;
  param_1[0x8a] = uVar3;
  param_1[0x8b] = uVar3;
  param_1[0x87] = 0;
  param_1[0x8d] = uVar3;
  param_1[0x88] = 0;
  param_1[0x8e] = uVar3;
  param_1[0x89] = 0;
  param_1[0x8f] = uVar3;
  param_1[0x8c] = param_3;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[0x88] =
       (uint)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460 < lbl_821917D4);
  fn_82A1EFC0(param_1 + 8,0,0xd4);
  fn_82A1EFC0(param_1 + 0x3d,0,0xa0);
  fn_82A1EFC0(param_1 + 0x65,0,0x48);
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  return param_1;
}

