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
extern int fn_82D48E38();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82138784;
extern unsigned int lbl_821387A4;


undefined4 * fn_82D4B040(double param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_r0;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  fn_82D48E38(param_2,0x18,5);
  *param_2 = &lbl_821387A4;
  param_2[4] = &lbl_82138784;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  uVar2 = lbl_82002AE0;
  param_2[0xf] = 0x80000000;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0x80000000;
  param_2[8] = uVar2;
  puVar1 = (undefined4 *)((int)param_2 + in_r0 + 0x20 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  *(undefined1 *)(param_2 + 0x13) = 6;
  param_2[0x14] = (float)param_1;
  param_2[0xc] = param_4;
  return param_2;
}

