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
extern unsigned int *auStack_80;
extern int fn_82F6A544();
extern int fn_82F6A590();
extern int fn_8306E888();
extern int fn_8306EB40();
extern int fn_8306ED98();
extern int fn_8306EDB0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8209A984;
extern unsigned int lbl_82138D2C;
extern unsigned int lbl_82186E2C;
extern unsigned int lbl_82186E68;
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000010;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;


void fn_830708B8(undefined8 param_1,ulonglong param_2)

{
  float fVar1;
  undefined4 *puVar2;
  int in_r0;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_00010030;
  undefined4 in_register_00010034;
  undefined4 in_register_00010038;
  undefined4 in_vr3;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_00000034;
  float in_stack_00000038;
  undefined1 auStack_80 [104];
  
  dVar4 = (double)fn_82F6A544();
  puVar2 = (undefined4 *)((uint)(&stack0x00000010 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  puVar2 = (undefined4 *)((uint)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010020;
  puVar2[1] = in_register_00010024;
  puVar2[2] = in_register_00010028;
  puVar2[3] = in_vr2;
  puVar2 = (undefined4 *)((uint)(&stack0x00000030 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010030;
  puVar2[1] = in_register_00010034;
  puVar2[2] = in_register_00010038;
  puVar2[3] = in_vr3;
  dVar5 = (double)fn_8306E888((double)in_stack_00000018);
  if ((((double)lbl_82196080 <= dVar5) &&
      (dVar5 = (double)fn_8306E888((double)in_stack_00000028), (double)lbl_82196080 <= dVar5)) &&
     (dVar5 = (double)fn_8306E888((double)in_stack_00000038), (double)lbl_82196080 <= dVar5)) {
    if ((in_stack_00000034 < in_stack_00000014) ||
       (bVar3 = false, in_stack_00000034 < in_stack_00000024)) {
      bVar3 = true;
    }
    dVar6 = (double)lbl_82002AE0;
    altv207_13(in_vs32,in_vs42);
    altv207_13(in_vs32,in_vs41);
    altv207_13(in_vs32,in_vs40);
    dVar5 = (double)fn_8306EB40(auStack_80);
    fVar1 = lbl_821AAD20;
    if (bVar3) {
      fVar1 = lbl_82138D2C;
    }
    if ((double)fVar1 < dVar5) {
      fVar1 = lbl_82186E68;
      if ((param_2 & 0xff) != 0) {
        fVar1 = lbl_8209A984;
      }
      if (dVar5 < (double)fVar1) {
        fn_8306EDB0();
        fn_8306EDB0();
        dVar5 = (double)fn_8306ED98();
        bVar3 = (float)((double)(float)(dVar6 - dVar5) * dVar4) < lbl_82186E2C;
        goto LAB_83070a90;
      }
    }
  }
  bVar3 = false;
LAB_83070a90:
  fn_82F6A590(bVar3);
  return;
}

