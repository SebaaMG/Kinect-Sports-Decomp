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
extern int fn_830B5DA8();
extern V16 vectorSubtractFloatingPoint();


void fn_830B6200(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  iVar5 = param_1[3];
  uVar1 = *param_1;
  uVar2 = param_1[7];
  puVar3 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  puVar4 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar3 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_000100c0;
  puVar3[1] = in_register_000100c4;
  puVar3[2] = in_register_000100c8;
  puVar3[3] = in_vr12;
  if (iVar5 < 1) {
    iVar5 = 0x80;
  }
  fn_830B5DA8(uVar1,uVar2,auStack_30,auStack_40,param_2,iVar5,0,param_3);
  return;
}

