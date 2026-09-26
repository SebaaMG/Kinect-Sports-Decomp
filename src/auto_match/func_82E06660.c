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
extern int fn_82CEBD78();
extern int fn_82CED2F8();
extern unsigned int lbl_82149120;
extern unsigned int lbl_821AAD20;


undefined4 * fn_82E06660(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_82149120;
  fn_82CED2F8(param_1 + 2);
  fn_82CED2F8(param_1 + 3);
  param_1[4] = lbl_821AAD20;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x80000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x80000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x80000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x80000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x80000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x80000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x80000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x80000000;
  iVar3 = fn_82CEBD78();
  puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)((int)param_1 + in_r0 + 0x80 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar1 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x24) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar1 = (undefined4 *)(iVar3 + 0x20U & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x28) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return param_1;
}

