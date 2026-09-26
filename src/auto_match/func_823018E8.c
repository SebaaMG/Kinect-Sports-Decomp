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
extern int fn_822C70F0();
extern int fn_82301BE8();
extern unsigned int lbl_821AEDD8;
extern unsigned int lbl_821CC160;


undefined4 *
fn_823018E8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  fn_822C70F0();
  param_1[0x15] = param_5;
  param_1[0x17] = 0;
  puVar2 = param_1 + 0x17;
  *param_1 = &lbl_821AEDD8;
  param_1[0x18] = 0;
  lVar3 = 4;
  do {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar2 = param_1 + 0x28;
  lVar3 = 4;
  do {
    puVar2 = puVar2 + 0x11;
    *puVar2 = 0;
    uVar1 = lbl_821CC160;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x74] = lbl_821CC160;
  param_1[0x75] = uVar1;
  param_1[0x76] = uVar1;
  param_1[0x77] = uVar1;
  puVar2 = (undefined4 *)((uint)(param_1 + 0x70) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  fn_82301BE8(param_1,(ulonglong)*(uint *)(param_5 + 0x118) + 0x24,param_4);
  return param_1;
}

