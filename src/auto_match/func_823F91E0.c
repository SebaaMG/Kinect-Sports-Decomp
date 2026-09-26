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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_5e;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;


void fn_823F91E0(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_5e [2];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(*(int **)(param_1 + 0x2c),param_2,auStack_50);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x14))(*(int **)(param_1 + 0x34),param_2,auStack_40);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x14))(*(int **)(param_1 + 0x3c),param_2,auStack_30);
  (**(code **)(**(int **)(param_1 + 0x44) + 0x14))(*(int **)(param_1 + 0x44),param_2,&uStack_5c);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x14))(*(int **)(param_1 + 0x4c),param_2,&uStack_60);
  (**(code **)(**(int **)(param_1 + 0x54) + 0x14))(*(int **)(param_1 + 0x54),param_2,&uStack_5f);
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x14))(*(int **)(param_1 + 0x5c),param_2,auStack_5e);
  (**(code **)(**(int **)(param_1 + 100) + 0x14))(*(int **)(param_1 + 100),param_2,&uStack_58);
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x14))(*(int **)(param_1 + 0x6c),param_2,&uStack_54);
  if (param_3 != 0) {
    puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (undefined4 *)(*(int *)(param_1 + 8) + param_3 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) + param_3 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    puVar2 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x10) + param_3 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(*(int *)(param_1 + 0x14) + param_3) = uStack_5c;
    *(undefined1 *)(iVar1 + param_3) = uStack_60;
    *(undefined1 *)(*(int *)(param_1 + 0x1c) + param_3) = uStack_5f;
    *(undefined1 *)(*(int *)(param_1 + 0x20) + param_3) = auStack_5e[0];
    *(undefined4 *)(*(int *)(param_1 + 0x24) + param_3) = uStack_58;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + param_3) = uStack_54;
  }
  return;
}

