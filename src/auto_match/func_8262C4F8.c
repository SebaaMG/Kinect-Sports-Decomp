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
extern int fn_8251E4D0();
extern int fn_82A1DD38();


undefined8
fn_8262C4F8(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,
             undefined4 param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  
  *(undefined1 *)(param_2 + 0x23) = param_5;
  *(undefined4 *)(param_2 + 0x24) = param_6;
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  *(undefined2 *)(param_2 + 0x20) = 0;
  puVar1 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  fn_82A1DD38(param_2 + 0x30,param_7,0x40);
  *(undefined4 *)(param_2 + 0x74) = param_4;
  *(undefined1 *)(param_2 + 0x22) = 1;
  *(undefined4 *)(param_2 + 0x28) = param_3;
  iVar2 = fn_8251E4D0(param_1 + 300);
  puVar1 = (undefined4 *)(in_r0 + iVar2 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  puVar1 = (undefined4 *)(iVar2 + 0x10U & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  return 1;
}

