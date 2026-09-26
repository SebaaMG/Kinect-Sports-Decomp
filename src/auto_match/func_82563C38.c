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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82CE6010();
extern unsigned int lbl_821962C0;
extern unsigned int lbl_821CC160;
extern V16 vectorConditionalSelect();


void fn_82563C38(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [48];
  
  puVar1 = (undefined4 *)((uint)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  fn_82CE6010(auStack_60,0xffffffff82196750);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x1c))
            ((double)lbl_821CC160,*(int **)(param_1 + 0x10),auStack_60);
  puVar1 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  vectorConditionalSelect(in_vs32,in_vs45,in_vs42);
  vectorConditionalSelect(in_vs44,in_vs43,in_vs41);
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  *puVar1 = in_register_00010430;
  puVar1[1] = in_register_00010434;
  puVar1[2] = in_register_00010438;
  puVar1[3] = in_vr67;
  puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  return;
}

