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
extern int fn_8265C9E0();
extern int fn_82F53CA0();
extern unsigned int lbl_821915FC;
extern unsigned int lbl_821CC160;


undefined4 * fn_824E10D0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = lbl_821915FC;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar3 = lbl_821CC160;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
  param_1[0xd] = *(undefined4 *)(param_2 + 0x48);
  param_1[0xe] = *(undefined4 *)(param_2 + 0x4c);
  param_1[0xf] = *(undefined4 *)(param_2 + 0x34);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x38);
  param_1[0x11] = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x12] = *(undefined4 *)(param_2 + 0x40);
  param_1[0x13] = *(undefined4 *)(param_2 + 0x44);
  param_1[0x14] = *(undefined4 *)(param_2 + 0x50);
  param_1[0x15] = *(undefined4 *)(param_2 + 0x54);
  param_1[0x16] = *(undefined4 *)(param_2 + 0x5c);
  uVar5 = *(undefined4 *)(param_2 + 0x58);
  param_1[0x18] = uVar3;
  param_1[0x1a] = uVar2;
  param_1[0x17] = uVar5;
  param_1[0x19] = 2;
  param_1[0x20] = 0;
  iVar4 = fn_8265C9E0(0xae0);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_82F53CA0();
  }
  param_1[0x22] = uVar5;
  param_1[0x23] = 0;
  param_1[0x2c] = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x24) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x28) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  return param_1;
}

