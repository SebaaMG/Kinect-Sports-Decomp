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
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_82CECC38();
extern unsigned int lbl_82002AE0;
extern V16 vectorMaximumFloatingPoint();


void fn_82D9B6F8(longlong param_1,float *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs44 [16];
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  fVar2 = lbl_82002AE0;
  vectorMaximumFloatingPoint(in_vs44,in_vs32);
  puVar1 = (undefined4 *)(in_r0 + (int)param_2 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (undefined4 *)((uint)(param_2 + 4) & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (undefined4 *)((uint)(param_2 + 8) & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (undefined4 *)((int)&fStack_20 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  param_2[5] = fVar2 / fStack_1c;
  *param_2 = fVar2 / fStack_20;
  param_2[10] = fVar2 / fStack_18;
  fn_82CECC38(param_2,param_1 + 0x10);
  return;
}

