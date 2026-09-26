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
extern unsigned int *auStack_60;
extern unsigned int fStack_4c;
extern unsigned int fStack_5c;
extern int fn_82F534D8();
extern int fn_8306E7D8();
extern int fn_8306ECD8();
extern int fn_8306ED70();
extern int fn_8306EE38();
extern int fn_83075D30();
extern int fn_83075D80();
extern int fn_830760D0();
extern int fn_83076CB0();
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;


double fn_8306D898(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined8 in_r0;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  double dVar6;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_0000002c;
  undefined1 auStack_60 [4];
  float fStack_5c;
  undefined1 auStack_50 [4];
  float fStack_4c;
  
  puVar1 = (undefined4 *)((int)&stack0x00000020 + (int)in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  puVar1 = (undefined4 *)((uint)(&stack0x00000030 + (int)in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  dVar6 = (double)fn_8306EE38();
  if (dVar6 <= (double)lbl_82196080) {
    bVar2 = false;
    dVar6 = (double)fn_8306EE38();
    if (dVar6 <= (double)lbl_82196080) {
      fn_8306ECD8();
      puVar3 = auStack_60;
      puVar1 = (undefined4 *)((uint)(auStack_60 + (int)in_r0) & 0xfffffff0);
      *puVar1 = in_register_00010020;
      puVar1[1] = in_register_00010024;
      puVar1[2] = in_register_00010028;
      puVar1[3] = in_vr2;
    }
    else {
      puVar3 = &stack0x00000030;
    }
    puVar1 = (undefined4 *)((uint)(puVar3 + (int)in_r0) & 0xfffffff0);
    in_register_00010010 = *puVar1;
    in_register_00010014 = puVar1[1];
    in_register_00010018 = puVar1[2];
    in_vr1 = puVar1[3];
  }
  else {
    bVar2 = true;
    fn_82F534D8((double)in_stack_00000020,(double)in_stack_00000024,(double)in_stack_00000028,
                 (double)lbl_821AAD20);
  }
  fn_8306ED70();
  fn_8306ECD8();
  fn_83076CB0();
  uVar4 = 0;
  do {
    fn_83075D30(auStack_60,param_2,uVar4);
    uVar10 = in_vr1;
    uVar9 = in_register_00010018;
    uVar8 = in_register_00010014;
    uVar7 = in_register_00010010;
    fn_830760D0();
    puVar1 = (undefined4 *)((uint)(auStack_60 + (int)in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    in_vr1 = uVar10;
    in_register_00010018 = uVar9;
    in_register_00010014 = uVar8;
    in_register_00010010 = uVar7;
    fn_83075D80(param_2,uVar4);
    uVar4 = uVar4 + 1;
  } while ((uVar4 & 0xffffffff) < 0x14);
  if (bVar2) {
    dVar6 = -(double)in_stack_0000002c;
  }
  else {
    fn_83075D30(auStack_50,param_2,0xf);
    fn_83075D30(auStack_60,param_2,0x13);
    dVar6 = (double)fn_8306E7D8((double)fStack_4c,(double)fStack_5c);
  }
  lVar5 = 0;
  do {
    fn_83075D30(auStack_60,param_2,lVar5);
    fStack_5c = (float)((double)fStack_5c - dVar6);
    fn_83075D80(param_2,lVar5);
    lVar5 = lVar5 + 1;
  } while ((int)lVar5 < 0x14);
  return dVar6;
}

