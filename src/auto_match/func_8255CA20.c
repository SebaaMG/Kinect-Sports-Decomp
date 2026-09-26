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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_8c;
extern unsigned int *auStack_90;
extern int fn_8258B2F0();
extern int fn_8258B3F8();
extern int fn_8258B720();
extern int fn_825BC348();
extern int fn_826299A8();
extern unsigned int uStack_78;
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


void fn_8255CA20(int param_1,ushort *param_2,undefined4 param_3)

{
  float fVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  undefined4 *puVar5;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [12];
  ushort *puStack_80;
  code *pcStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  puVar5 = (undefined4 *)(param_1 + 0x6d4);
  iVar4 = fn_825BC348(puVar5);
  uVar2 = *param_2;
  if (uVar2 == 0) {
    fVar1 = *(float *)(param_2 + 0x1c);
  }
  else {
    if (uVar2 == 1) {
      puStack_80 = *(ushort **)(param_2 + 0x18);
      pcStack_7c = *(code **)(param_2 + 0x1a);
      uStack_78 = *(undefined4 *)(param_2 + 0x1c);
      puVar3 = (undefined4 *)((int)&puStack_80 + in_r0 & 0xfffffff0);
      uVar6 = *puVar3;
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      vectorSubtractFloatingPoint(in_vs45,in_vs32);
      vectorAddFloatingPoint(in_vs45,in_vs32);
      puVar3 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
      *puVar3 = in_register_000100c0;
      puVar3[1] = in_register_000100c4;
      puVar3[2] = in_register_000100c8;
      puVar3[3] = in_vr12;
      puVar3 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
      *puVar3 = uVar6;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      fn_8258B3F8(param_1 + 0x6dc,auStack_60,auStack_70,auStack_8c,auStack_90);
      fn_8258B720(*puVar5,param_1 + 0x6dc,auStack_60,auStack_70,auStack_8c,auStack_90,
                        0xffffffff826299a8,iVar4);
      goto LAB_8255cb38;
    }
    if (2 < uVar2) goto LAB_8255cb38;
    fVar1 = *(float *)(param_2 + 0x26);
    pcStack_7c = fn_826299A8;
    puStack_80 = param_2;
    uStack_78 = param_3;
  }
  fn_8258B2F0((double)fVar1,puVar5,param_2 + 0x10);
LAB_8255cb38:
  *(undefined1 *)(iVar4 + param_1 + 0x754) = 0;
  return;
}

