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
extern unsigned int *auStack_1b30;
extern unsigned int *auStack_1b50;
extern unsigned int *auStack_1b60;
extern int fn_82A86BE8();
extern int fn_82A8F440();
extern int fn_82F68CC0();


void fn_82A906B8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_r0;
  longlong lVar2;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined4 in_register_000103d0;
  undefined4 in_register_000103d4;
  undefined4 in_register_000103d8;
  undefined4 in_vr61;
  undefined4 in_register_000103e0;
  undefined4 in_register_000103e4;
  undefined4 in_register_000103e8;
  undefined4 in_vr62;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  undefined1 auStack_1b60 [16];
  undefined1 auStack_1b50 [32];
  undefined1 auStack_1b30 [6936];
  
  lVar2 = fn_82A8F440();
  if ((ulonglong)*(uint *)(param_1 + 0x5988) < (lVar2 + 0x40U & 0xffffffff)) {
    fn_82A86BE8(auStack_1b30);
    altv207_13(in_vs40,in_vs42);
    puVar1 = (undefined4 *)((uint)(auStack_1b50 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000103e0;
    puVar1[1] = in_register_000103e4;
    puVar1[2] = in_register_000103e8;
    puVar1[3] = in_vr62;
    altv207_13(in_vs32,in_vs38);
    altv207_13(in_vs32,in_vs40);
    puVar1 = (undefined4 *)((uint)(auStack_1b60 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    altv207_13(in_vs32,in_vs39);
    puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    altv207_13(in_vs32,in_vs41);
    puVar1 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
    *puVar1 = in_register_000103d0;
    puVar1[1] = in_register_000103d4;
    puVar1[2] = in_register_000103d8;
    puVar1[3] = in_vr61;
    puVar1 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
    *puVar1 = in_register_000103e0;
    puVar1[1] = in_register_000103e4;
    puVar1[2] = in_register_000103e8;
    puVar1[3] = in_vr62;
    puVar1 = (undefined4 *)(param_2 + 0x30U & 0xfffffff0);
    *puVar1 = in_register_000103d0;
    puVar1[1] = in_register_000103d4;
    puVar1[2] = in_register_000103d8;
    puVar1[3] = in_vr61;
  }
  else {
    fn_82F68CC0(param_2,(ulonglong)*(uint *)(param_1 + 0x598c) + lVar2,0x40);
  }
  return;
}

