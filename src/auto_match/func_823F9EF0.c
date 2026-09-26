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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82250D10();
extern int fn_82F68CC0();


void fn_823F9EF0(int param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 auStack_b0 [4];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  fn_82250D10(auStack_70);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))(*(int **)(param_1 + 0x1c),param_2,auStack_70);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x14))(*(int **)(param_1 + 0x24),param_2,auStack_a0);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(*(int **)(param_1 + 0x2c),param_2,auStack_90);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x14))(*(int **)(param_1 + 0x34),param_2,auStack_80);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x14))(*(int **)(param_1 + 0x3c),param_2,auStack_b0);
  if (param_3 != 0) {
    fn_82F68CC0(*(int *)(param_1 + 8) + param_3,auStack_70,0x4c);
    puVar1 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    puVar1 = (undefined4 *)((uint)(auStack_90 + in_r0) & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    puVar1 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x14) + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + param_3) = auStack_b0[0];
  }
  return;
}

