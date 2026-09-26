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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_82CE50D8();
extern V16 vectorAddFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();


void fn_83080B40(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_register_00010060;
  undefined4 in_register_00010064;
  undefined4 in_register_00010068;
  undefined4 in_vr6;
  undefined4 in_register_00010080;
  undefined4 in_register_00010084;
  undefined4 in_register_00010088;
  undefined4 in_vr8;
  undefined1 in_vr11 [16];
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  puVar1 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  puVar2 = (undefined4 *)(in_r0 + param_2 + 0x80 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  fn_82CE50D8(auStack_20,param_2,auStack_30);
  vectorRotateLeftImmediateMaskInsert128
            (*(undefined1 (*) [16])((uint)(auStack_20 + in_r0) & 0xfffffff0),in_vr11,1,0);
  vectorAddFloatingPoint(in_vs41,in_vs42);
  puVar1 = (undefined4 *)(in_r0 + param_2 + 0x40 & 0xfffffff0);
  *puVar1 = in_register_00010080;
  puVar1[1] = in_register_00010084;
  puVar1[2] = in_register_00010088;
  puVar1[3] = in_vr8;
  vectorAddFloatingPoint(in_vs39,in_vs42);
  puVar1 = (undefined4 *)(in_r0 + param_2 + 0x50 & 0xfffffff0);
  *puVar1 = in_register_00010060;
  puVar1[1] = in_register_00010064;
  puVar1[2] = in_register_00010068;
  puVar1[3] = in_vr6;
  return;
}

