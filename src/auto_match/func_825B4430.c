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
extern int fn_8251E4D0();
extern int fn_825711A0();
extern int fn_8265BF48();
extern int fn_82A1EFC0();
extern int fn_82D93128();
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000050;
extern unsigned int stack0x00000060;
extern unsigned int stack0x00000070;
extern unsigned int stack0x00000080;
extern unsigned int uStack00000050;


int fn_825B4430(double param_1,int param_2,longlong param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,undefined8 param_9)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uStack00000050;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b4;
  
  uStack00000050 = param_9;
  iVar2 = fn_8251E4D0(param_2 + 0x758);
  fn_82A1EFC0(iVar2,0,0x3f0);
  *(undefined4 *)(iVar2 + 0xf4) = param_5;
  *(float *)(iVar2 + 0x3e0) = (float)param_1;
  *(int *)(iVar2 + 0xd4) = (int)param_3;
  *(int *)(iVar2 + 0xdc) = param_2;
  puVar1 = (undefined4 *)((uint)((int)&stack0x00000050 + in_r0) & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar1 = (undefined4 *)((uint)(&stack0x00000060 + in_r0) & 0xfffffff0);
  uVar15 = *puVar1;
  uVar16 = puVar1[1];
  uVar17 = puVar1[2];
  uVar18 = puVar1[3];
  puVar1 = (undefined4 *)((uint)(&stack0x00000070 + in_r0) & 0xfffffff0);
  uVar11 = *puVar1;
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  puVar1 = (undefined4 *)((uint)(&stack0x00000080 + in_r0) & 0xfffffff0);
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  *(undefined4 *)(iVar2 + 0xe0) = param_6;
  *(undefined4 *)(iVar2 + 0xf0) = 0;
  puVar1 = (undefined4 *)(in_r0 + iVar2 & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined4 *)(iVar2 + 0xec) = param_8;
  puVar1 = (undefined4 *)(iVar2 + 0x10U & 0xfffffff0);
  *puVar1 = uVar15;
  puVar1[1] = uVar16;
  puVar1[2] = uVar17;
  puVar1[3] = uVar18;
  *(int *)(iVar2 + 0xe4) = param_7;
  puVar1 = (undefined4 *)(iVar2 + 0x20U & 0xfffffff0);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  *(undefined4 *)(iVar2 + 0xd8) = param_4;
  puVar1 = (undefined4 *)(iVar2 + 0x30U & 0xfffffff0);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  *(undefined4 *)(iVar2 + 0xf8) = 0;
  puVar1 = (undefined4 *)(iVar2 + 0x80U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  *(undefined4 *)(iVar2 + 1000) = 0;
  *(undefined4 *)(iVar2 + 0x3e4) = 3;
  if (param_7 == 0) {
    *(undefined4 *)(iVar2 + 0xe8) = 0;
  }
  else {
    uVar3 = fn_8265BF48(*(undefined4 *)(param_7 + 0x19c),0);
    *(undefined4 *)(iVar2 + 0xe8) = uVar3;
  }
  fn_82D93128(param_3 + 0xe0);
  *(undefined4 *)(iVar2 + 0x180) = 0;
  *(undefined4 *)(iVar2 + 400) = 0;
  *(undefined4 *)(iVar2 + 0x194) = lbl_821CC160;
  fn_825711A0((double)*(float *)(param_2 + 0x448),iVar2 + 0x2d0,in_stack_000000ac,
                    in_stack_000000b4);
  return iVar2;
}

