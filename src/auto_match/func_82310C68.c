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
extern int fn_82310D68();
extern unsigned int lbl_821CC160;


void fn_82310C68(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_r0;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  uVar2 = lbl_821CC160;
  puVar1 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  *(undefined4 *)(param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  *(undefined4 *)(param_2 + 0x34) = uVar2;
  *(undefined4 *)(param_2 + 0x40) = uVar2;
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  *(undefined4 *)(param_2 + 0x44) = uVar2;
  *(undefined4 *)(param_2 + 0x48) = uVar2;
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  *(undefined4 *)(param_2 + 0x4c) = uVar2;
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  *(undefined4 *)(param_2 + 0x50) = uVar2;
  *(undefined4 *)(param_2 + 0x30) = uVar2;
  *(undefined4 *)(param_2 + 0x54) = uVar2;
  *(undefined4 *)(param_2 + 0x58) = uVar2;
  puVar1 = (undefined4 *)(param_1 + 0x3e0U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  *(undefined4 *)(param_2 + 0x290) = uVar2;
  *(undefined4 *)(param_2 + 0x294) = uVar2;
  *(undefined4 *)(param_2 + 0x298) = uVar2;
  *(undefined4 *)(param_2 + 0x29c) = uVar2;
  puVar1 = (undefined4 *)(param_2 + 0x270U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_82310D68(param_1,param_2 + 0x60,0,*(int *)(param_1 + 0x48c) == 0);
  fn_82310D68(param_1,param_2 + 0x110,1,*(int *)(param_1 + 0x48c) == 0);
  fn_82310D68(param_1,param_2 + 0x1c0,2,*(undefined4 *)(param_1 + 0x48c));
  return;
}

