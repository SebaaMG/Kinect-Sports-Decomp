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
extern unsigned int *auStack_a0;
extern int fn_82F68CC0();
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


void fn_82392AB0(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 auStack_8c [3];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(*(int **)(param_1 + 0x2c),param_2,auStack_60);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x14))(*(int **)(param_1 + 0x34),param_2,&uStack_80);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x14))(*(int **)(param_1 + 0x3c),param_2,&uStack_9c);
  (**(code **)(**(int **)(param_1 + 0x44) + 0x14))(*(int **)(param_1 + 0x44),param_2,auStack_70);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x14))(*(int **)(param_1 + 0x4c),param_2,&uStack_98);
  (**(code **)(**(int **)(param_1 + 0x54) + 0x14))(*(int **)(param_1 + 0x54),param_2,&uStack_94);
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x14))(*(int **)(param_1 + 0x5c),param_2,&uStack_90);
  (**(code **)(**(int **)(param_1 + 100) + 0x14))(*(int **)(param_1 + 100),param_2,auStack_8c);
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x14))(*(int **)(param_1 + 0x6c),param_2,auStack_a0);
  if (param_3 != 0) {
    fn_82F68CC0(*(int *)(param_1 + 8) + param_3,auStack_60,0x40);
    iVar4 = *(int *)(param_1 + 0xc) + param_3;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + param_3) = uStack_80;
    *(undefined4 *)(iVar4 + 4) = uStack_7c;
    *(undefined4 *)(iVar4 + 8) = uStack_78;
    *(undefined4 *)(iVar4 + 0xc) = uStack_74;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + param_3) = uStack_9c;
    puVar2 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x14) + param_3 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + param_3) = uStack_98;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_3) = uStack_94;
    iVar4 = *(int *)(param_1 + 0x24);
    *(undefined4 *)(*(int *)(param_1 + 0x20) + param_3) = uStack_90;
    iVar1 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(iVar4 + param_3) = auStack_8c[0];
    *(undefined1 *)(iVar1 + param_3) = auStack_a0[0];
  }
  return;
}

