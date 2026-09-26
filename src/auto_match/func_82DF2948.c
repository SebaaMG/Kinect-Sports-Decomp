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
extern int fn_82CED628();
extern int fn_82D955B0();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82021538;
extern unsigned int lbl_82089F0C;
extern unsigned int lbl_821440C4;
extern unsigned int lbl_82186E74;


undefined4 * fn_82DF2948(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_r0;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  fn_82D955B0(param_1,param_2,0);
  uVar4 = lbl_82186E74;
  uVar3 = lbl_82089F0C;
  uVar2 = lbl_82021538;
  param_1[0x10] = lbl_82002C5C;
  *param_1 = &lbl_821440C4;
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar2;
  param_1[0x17] = 0x80000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
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
  param_1[0x14] = 0xffffffff;
  fn_82CED628(param_1 + 5,0xffffffff83185ac0);
  return param_1;
}

