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
extern unsigned int lbl_82191FB4;
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000020;
extern V16 vectorSubtractFloatingPoint();


void fn_823CBE48(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float fVar7;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  float in_stack_00000024;
  float afStack_10 [4];
  
  iVar1 = *(int *)(param_1 + 0x290);
  puVar3 = (undefined4 *)((uint)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  if (iVar1 == 0x18) {
    return;
  }
  if (*(int *)(param_1 + 0x3c4) == 0) {
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x240) + 0x94);
    if (((puVar3 != (undefined4 *)0x0) && (iVar1 = puVar3[7], iVar1 != 0)) &&
       (*(int *)(iVar1 + 0x40) == 0)) {
      *(undefined4 *)(iVar1 + 0x40) = *puVar3;
    }
    *(undefined4 *)(param_1 + 0x3c4) = 1;
  }
  if (lbl_82191FB4 < in_stack_00000024) {
    return;
  }
  if (*(int *)(param_1 + 0x3c0) == 0) {
    *(undefined4 *)(param_1 + 0x3c0) = 1;
    puVar3 = (undefined4 *)(param_1 + 0x3a0U & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    puVar3 = (undefined4 *)(param_1 + 0x3b0U & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
  }
  fVar7 = lbl_821CC160;
  uVar4 = param_1 + 0x3a0U & 0xfffffff0;
  uVar5 = in_r0 + param_1 + 0x3b0 & 0xfffffff0;
  vectorSubtractFloatingPoint(in_vs33,in_vs45);
  vectorSubtractFloatingPoint(in_vs32,in_vs44);
  fVar2 = *(float *)(uVar4 + 4) * *(float *)(uVar5 + 4) + 0.0 +
          *(float *)(uVar4 + 8) * *(float *)(uVar5 + 8);
  pfVar6 = (float *)((int)afStack_10 + in_r0 & 0xfffffff0);
  *pfVar6 = fVar2;
  pfVar6[1] = fVar2;
  pfVar6[2] = fVar2;
  pfVar6[3] = fVar2;
  if (afStack_10[0] <= fVar7) {
    return;
  }
  puVar3 = (undefined4 *)(in_r0 + param_1 + 0x3b0 & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  return;
}

