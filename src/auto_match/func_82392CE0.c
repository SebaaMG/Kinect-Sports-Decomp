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
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_160;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_822C5B18();
extern int fn_82359C18();


int fn_82392CE0(double param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [192];
  
  uVar2 = fn_822C5B18(auStack_e0);
  uVar3 = fn_822C5B18(auStack_120,uVar2);
  uVar4 = fn_822C5B18(auStack_160,uVar3);
  uVar5 = fn_822C5B18(auStack_140,uVar4);
  uVar6 = fn_822C5B18(auStack_100,uVar5);
  uVar7 = fn_822C5B18(auStack_c0,uVar6);
  fn_822C5B18(param_2,uVar7);
  puVar1 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_82359C18(uVar7);
  puVar1 = (undefined4 *)(param_2 + 0x30U & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  fn_82359C18(uVar6);
  puVar1 = (undefined4 *)(param_2 + 0x40U & 0xfffffff0);
  *puVar1 = in_register_00010030;
  puVar1[1] = in_register_00010034;
  puVar1[2] = in_register_00010038;
  puVar1[3] = in_vr3;
  fn_82359C18(uVar5);
  *(float *)(param_2 + 0x50) = (float)param_1;
  fn_82359C18(uVar4);
  *(undefined4 *)(param_2 + 0x60) = param_5;
  fn_82359C18(uVar3);
  *(undefined4 *)(param_2 + 0x70) = param_6;
  fn_82359C18(uVar2);
  *(undefined4 *)(param_2 + 0x80) = param_7;
  fn_82359C18(param_3);
  return param_2;
}

