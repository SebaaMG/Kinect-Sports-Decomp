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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_82DDC940();
extern unsigned int stack0x00000000;
extern unsigned int uStack_40;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_82DDCD40(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  float *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  ulonglong uVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs43 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined4 uVar9;
  undefined4 uVar10;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  
  uVar3 = ZEXT48(&stack0x00000000);
  puVar1 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  fn_82DDC940(param_1,param_2,uVar3 - 0x70);
  fn_82DDC940(param_1,uVar3 - 0x80,param_4);
  puVar1 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  vectorSubtractFloatingPoint(in_vs32,in_vs43);
  uVar6 = storeVectorElementWordIndexed(in_vs40,0,uVar3 - 0x90);
  *(undefined4 *)(uVar3 - 0x90) = uVar6;
  vectorSubtractFloatingPoint(in_vs38,in_vs43);
  uVar6 = storeVectorElementWordIndexed(in_vs36,0,uVar3 - 0x8c);
  *(undefined4 *)(uVar3 - 0x8c) = uVar6;
  if (fStack_90 < fStack_8c) {
    *param_5 = fStack_8c;
  }
  else {
    puVar1 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    puVar1 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar2 = (undefined4 *)(param_4 + 0x10U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    puVar1 = (undefined4 *)(param_4 + 0x20U & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    *(undefined4 *)(param_4 + 0x30) = uStack_40;
    *param_5 = fStack_90;
  }
  return;
}

