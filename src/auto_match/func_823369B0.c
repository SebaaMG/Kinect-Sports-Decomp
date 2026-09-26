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
extern int fn_82340138();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82192480;
extern unsigned int lbl_821CC160;


undefined4 * fn_823369B0(undefined4 *param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  uVar4 = lbl_821CC160;
  uVar3 = lbl_82192480;
  uVar2 = lbl_8218E8E8;
  param_1[4] = 0;
  *param_1 = uVar4;
  param_1[5] = 0;
  param_1[1] = uVar4;
  param_1[6] = 0;
  param_1[0x12] = uVar3;
  param_1[7] = 0;
  param_1[0x13] = uVar2;
  param_1[8] = 0;
  param_1[100] = uVar4;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar1 = (undefined4 *)((uint)(param_1 + 0x14) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 1;
  param_1[99] = 0;
  fn_82340138(param_1 + 0x65);
  param_1[0x66] = 0;
  param_1[0xc] = *(undefined4 *)(param_3 + 0x4c);
  param_1[0xd] = *(undefined4 *)(param_3 + 0x50);
  param_1[0xe] = *(undefined4 *)(param_3 + 0x54);
  return param_1;
}

