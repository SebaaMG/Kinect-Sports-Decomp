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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82DCDF98();
extern unsigned int lbl_82014894;
extern unsigned int lbl_82014898;
extern unsigned int lbl_82136AB4;
extern unsigned int lbl_82138878;
extern unsigned int lbl_82138888;


undefined4 * fn_82D4D618(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int in_r0;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined4 auStack_40 [4];
  undefined4 auStack_30 [6];
  
  auStack_30[0] = lbl_82014898;
  auStack_40[0] = lbl_82014894;
  *(undefined2 *)((int)param_1 + 6) = 1;
  puVar1 = (undefined4 *)((int)auStack_40 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  param_1[2] = &lbl_82136AB4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  puVar1 = (undefined4 *)((int)auStack_30 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  param_1[7] = param_3;
  *param_1 = &lbl_82138888;
  param_1[6] = 0;
  param_1[2] = &lbl_82138878;
  fn_82DCDF98(param_2,auStack_40,param_1 + 2);
  param_1[7] = 0;
  return param_1;
}

