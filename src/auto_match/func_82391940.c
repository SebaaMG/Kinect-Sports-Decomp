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
extern unsigned int *auStack_160;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_1f0;
extern unsigned int *auStack_210;
extern unsigned int *auStack_230;
extern unsigned int *auStack_250;
extern unsigned int *auStack_270;
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_2b0;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_290;
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_823927F0();
extern unsigned int uStack_280;


undefined8
fn_82391940(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined4 *puVar1;
  int in_r0;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_00010030;
  undefined4 in_register_00010034;
  undefined4 in_register_00010038;
  undefined4 in_vr3;
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2b0 [16];
  undefined1 auStack_2a0 [16];
  float fStack_290;
  undefined4 uStack_280;
  undefined1 auStack_270 [32];
  undefined1 auStack_250 [32];
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [112];
  undefined1 auStack_160 [112];
  undefined1 auStack_f0 [240];
  
  uVar2 = fn_822C5B18(auStack_210);
  uVar3 = fn_822C5B18(auStack_250,uVar2);
  uVar4 = fn_822C5B18(auStack_230,uVar3);
  uVar5 = fn_822C5B18(auStack_1f0,uVar4);
  uVar6 = fn_822C5B18(auStack_270,uVar5);
  fn_822C5B18(auStack_2e0,uVar6);
  puVar1 = (undefined4 *)((uint)(auStack_2c0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_82359C18(uVar6);
  puVar1 = (undefined4 *)((uint)(auStack_2b0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  fn_82359C18(uVar5);
  puVar1 = (undefined4 *)((uint)(auStack_2a0 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010030;
  puVar1[1] = in_register_00010034;
  puVar1[2] = in_register_00010038;
  puVar1[3] = in_vr3;
  fn_82359C18(uVar4);
  fStack_290 = (float)param_1;
  fn_82359C18(uVar3);
  uStack_280 = param_5;
  fn_82359C18(uVar2);
  uVar2 = fn_823927F0(auStack_160,auStack_2e0);
  uVar3 = fn_823927F0(auStack_f0,uVar2);
  fn_823927F0(auStack_1d0,uVar3);
  fn_82359C18(uVar3);
  fn_82359C18(uVar2);
  fn_823927F0(param_2,auStack_1d0);
  fn_82359C18(auStack_1d0);
  fn_82359C18(auStack_2e0);
  fn_82359C18(param_3);
  return param_2;
}

