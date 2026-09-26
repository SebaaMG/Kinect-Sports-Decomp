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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_830A5FF8();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;
extern V16 vectorSubtractFloatingPoint();


void fn_82D9D858(undefined8 param_1,int *param_2,undefined4 *param_3,undefined8 param_4,
                  int param_5,int param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  int iStack_2c;
  
  iVar1 = *param_2;
  iStack_2c = *(int *)(param_6 + 0x4c);
  *param_2 = iVar1 + 4;
  puVar2 = (undefined4 *)*param_3;
  puVar3 = (undefined4 *)((*(int *)(iVar1 + 4) + 2) * 0x10 + param_5 & 0xfffffff0);
  uVar4 = *puVar3;
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  *param_3 = puVar2 + 4;
  iVar1 = *(int *)(param_5 + 0xb8);
  puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = uVar4;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  iStack_2c = iVar1 * 8 + iStack_2c;
  puVar3 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_000100c0;
  puVar3[1] = in_register_000100c4;
  puVar3[2] = in_register_000100c8;
  puVar3[3] = in_vr12;
  uStack_30 = *puVar2;
  fn_830A5FF8(auStack_50,param_6,param_7);
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 1;
  return;
}

