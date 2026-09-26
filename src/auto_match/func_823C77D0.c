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
extern unsigned int *auStack_50;
extern unsigned int fStack_38;
extern unsigned int fStack_48;
extern int fn_82F65018();
extern unsigned int lbl_831D2F20;
extern unsigned int lbl_831D2F24;
extern V16 vectorSubtractFloatingPoint();


void fn_823C77D0(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  double dVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010000;
  undefined4 uVar7;
  undefined4 in_ACC;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_register_00010008;
  undefined4 uVar10;
  undefined4 in_vr0;
  undefined4 uVar11;
  undefined1 auStack_50 [8];
  float fStack_48;
  float afStack_40 [2];
  float fStack_38;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x240) + 0xe2c);
  puVar3 = *(ushort **)(((iVar2 == 0) + 0xa1) * 4 + *(int *)(param_1 + 0x240));
  uVar1 = *puVar3;
  if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
    puVar4 = (undefined4 *)((uint)(puVar3 + 0x10) & 0xfffffff0);
    in_register_00010000 = *puVar4;
    in_ACC = puVar4[1];
    in_register_00010008 = puVar4[2];
    in_vr0 = puVar4[3];
  }
  uVar7 = *(undefined4 *)(param_1 + 0x1f0);
  uVar9 = *(undefined4 *)(param_1 + 0x1f8);
  puVar4 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar4 = in_register_00010000;
  puVar4[1] = in_ACC;
  puVar4[2] = in_register_00010008;
  puVar4[3] = in_vr0;
  if (iVar2 == 0) {
    fStack_48 = lbl_831D2F20 + fStack_48;
  }
  else {
    fStack_48 = fStack_48 - lbl_831D2F20;
  }
  puVar4 = (undefined4 *)(param_1 + 0x1c0U & 0xfffffff0);
  uVar8 = puVar4[1];
  uVar10 = puVar4[2];
  uVar11 = puVar4[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  puVar5 = (undefined4 *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar8;
  puVar5[2] = uVar10;
  puVar5[3] = uVar11;
  dVar6 = (double)fn_82F65018(-(double)afStack_40[0],-(double)fStack_38);
  *(undefined4 *)(param_1 + 0x228) = lbl_831D2F24;
  *(undefined4 *)(param_1 + 0x214) = uVar7;
  *(undefined4 *)(param_1 + 0x21c) = uVar9;
  puVar4 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  uVar7 = *puVar4;
  uVar9 = puVar4[1];
  uVar8 = puVar4[2];
  uVar10 = puVar4[3];
  *(float *)(param_1 + 0x218) = (float)dVar6;
  puVar4 = (undefined4 *)(param_1 + 0x1a0U & 0xfffffff0);
  *puVar4 = uVar7;
  puVar4[1] = uVar9;
  puVar4[2] = uVar8;
  puVar4[3] = uVar10;
  return;
}

