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
extern V16 vectorAddFloatingPoint();


void fn_82D06828(int param_1)

{
  undefined4 *puVar1;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010030;
  undefined4 in_register_00010034;
  undefined4 in_register_00010038;
  undefined4 in_vr3;
  undefined4 in_register_00010060;
  undefined4 in_register_00010064;
  undefined4 in_register_00010068;
  undefined4 in_vr6;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  
  vectorAddFloatingPoint(in_vs45,in_vs32);
  puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  vectorAddFloatingPoint(in_vs42,in_vs43);
  puVar1 = (undefined4 *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  vectorAddFloatingPoint(in_vs39,in_vs40);
  puVar1 = (undefined4 *)(in_r0 + param_1 + 0x20 & 0xfffffff0);
  *puVar1 = in_register_00010060;
  puVar1[1] = in_register_00010064;
  puVar1[2] = in_register_00010068;
  puVar1[3] = in_vr6;
  vectorAddFloatingPoint(in_vs36,in_vs37);
  puVar1 = (undefined4 *)(in_r0 + param_1 + 0x30 & 0xfffffff0);
  *puVar1 = in_register_00010030;
  puVar1[1] = in_register_00010034;
  puVar1[2] = in_register_00010038;
  puVar1[3] = in_vr3;
  return;
}

