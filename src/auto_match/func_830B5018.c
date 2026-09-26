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
extern unsigned int *auStack_80;
extern int fn_82CEC688();
extern V16 vectorAddFloatingPoint();


void fn_830B5018(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 in_r0;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010060;
  undefined4 in_register_00010064;
  undefined4 in_register_00010068;
  undefined4 in_vr6;
  undefined4 in_register_00010080;
  undefined4 in_register_00010084;
  undefined4 in_register_00010088;
  undefined4 in_vr8;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined1 auStack_80 [128];
  
  param_1 = param_1 + 0x20;
  lVar2 = 2;
  do {
    lVar3 = 2;
    lVar4 = param_3;
    do {
      fn_82CEC688(auStack_80,param_2,lVar4);
      fn_82CEC688(param_1 + -0x20,param_2 + 0x30,lVar4 + 0x60);
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + 0x30;
      vectorAddFloatingPoint(in_vs32,in_vs45);
      puVar1 = (undefined4 *)((int)in_r0 + (int)(param_1 + -0x20) & 0xfffffff0);
      *puVar1 = in_register_000100c0;
      puVar1[1] = in_register_000100c4;
      puVar1[2] = in_register_000100c8;
      puVar1[3] = in_vr12;
      vectorAddFloatingPoint(in_vs41,in_vs43);
      puVar1 = (undefined4 *)((int)param_1 - 0x10U & 0xfffffff0);
      *puVar1 = in_register_00010080;
      puVar1[1] = in_register_00010084;
      puVar1[2] = in_register_00010088;
      puVar1[3] = in_vr8;
      vectorAddFloatingPoint(in_vs39,in_vs42);
      puVar1 = (undefined4 *)((int)in_r0 + (int)param_1 & 0xfffffff0);
      *puVar1 = in_register_00010060;
      puVar1[1] = in_register_00010064;
      puVar1[2] = in_register_00010068;
      puVar1[3] = in_vr6;
      param_1 = param_1 + 0x30;
    } while (lVar3 != 0);
    lVar2 = lVar2 + -1;
    param_2 = param_2 + 0x60;
  } while (lVar2 != 0);
  return;
}

