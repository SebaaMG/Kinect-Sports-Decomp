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
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_d0;
extern unsigned int fStack_100;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_8238EE00();
extern int fn_8288B760();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();
extern unsigned int lbl_832975B0;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_fc;


void fn_82377620(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,ulonglong param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  uint uVar5;
  double extraout_f1;
  double dVar6;
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
  undefined4 in_register_00010040;
  undefined4 in_register_00010044;
  undefined4 in_register_00010048;
  undefined4 in_vr4;
  undefined4 in_stack_000000a4;
  undefined4 in_stack_000000ac;
  undefined1 in_stack_000000c7;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_d0 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 uStack_b0;
  
  iVar3 = fn_82F6DA24();
  dVar6 = extraout_f1;
  iVar4 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar4 = fn_82250A18();
  }
  if ((*(char *)(iVar4 + 4) != '\0') && (iVar4 = *(int *)(iVar3 + 0x84), iVar4 != 0)) {
    piVar1 = *(int **)(**(int **)(iVar3 + 8) + (int)((param_7 & 0xffffffff) << 2));
    iVar3 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),param_8);
    if (*(int *)(iVar3 + 0x168) == 0) {
      uVar5 = *(uint *)(iVar3 + 0x16c);
    }
    else {
      uVar5 = fn_8288B760();
      uVar5 = uVar5 & 0xff;
    }
    if (uVar5 != 0) {
      puVar2 = (undefined4 *)((uint)(auStack_130 + in_r0) & 0xfffffff0);
      *puVar2 = in_register_00010010;
      puVar2[1] = in_register_00010014;
      puVar2[2] = in_register_00010018;
      puVar2[3] = in_vr1;
      puVar2 = (undefined4 *)((uint)(auStack_120 + in_r0) & 0xfffffff0);
      *puVar2 = in_register_00010020;
      puVar2[1] = in_register_00010024;
      puVar2[2] = in_register_00010028;
      puVar2[3] = in_vr2;
      fStack_100 = (float)dVar6;
      puVar2 = (undefined4 *)((uint)(auStack_110 + in_r0) & 0xfffffff0);
      *puVar2 = in_register_00010030;
      puVar2[1] = in_register_00010034;
      puVar2[2] = in_register_00010038;
      puVar2[3] = in_vr3;
      uStack_f0 = (undefined4)param_7;
      puVar2 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
      *puVar2 = in_register_00010040;
      puVar2[1] = in_register_00010044;
      puVar2[2] = in_register_00010048;
      puVar2[3] = in_vr4;
      fStack_b8 = (float)param_2;
      uStack_ec = (undefined4)param_8;
      fStack_b4 = (float)param_3;
      uStack_c0 = in_stack_000000a4;
      uStack_bc = in_stack_000000ac;
      uStack_b0 = in_stack_000000c7;
      iVar4 = *(int *)(iVar4 + 0x88);
      uStack_fc = param_6;
      uStack_e8 = param_9;
      uStack_e4 = param_10;
      uStack_e0 = param_11;
      if (iVar4 != 0) {
        fn_8238EE00(iVar4,auStack_130);
      }
    }
  }
  fn_82F6DCBC();
  return;
}

