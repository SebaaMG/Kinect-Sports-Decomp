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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_4f;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_823FA2E8(int param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uStack_50;
  undefined1 auStack_4f [3];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 auStack_3c [3];
  undefined1 auStack_30 [48];
  
  (**(code **)(**(int **)(param_1 + 0x28) + 0x14))(*(int **)(param_1 + 0x28),param_2,&uStack_4c);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x14))(*(int **)(param_1 + 0x30),param_2,&uStack_48);
  (**(code **)(**(int **)(param_1 + 0x38) + 0x14))(*(int **)(param_1 + 0x38),param_2,&uStack_44);
  (**(code **)(**(int **)(param_1 + 0x40) + 0x14))(*(int **)(param_1 + 0x40),param_2,&uStack_40);
  (**(code **)(**(int **)(param_1 + 0x48) + 0x14))(*(int **)(param_1 + 0x48),param_2,auStack_3c);
  (**(code **)(**(int **)(param_1 + 0x50) + 0x14))(*(int **)(param_1 + 0x50),param_2,&uStack_50);
  (**(code **)(**(int **)(param_1 + 0x58) + 0x14))(*(int **)(param_1 + 0x58),param_2,auStack_4f);
  (**(code **)(**(int **)(param_1 + 0x60) + 0x14))(*(int **)(param_1 + 0x60),param_2,auStack_30);
  if (param_3 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + param_3) = uStack_4c;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + param_3) = uStack_48;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + param_3) = uStack_44;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + param_3) = uStack_40;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + param_3) = auStack_3c[0];
    *(undefined1 *)(*(int *)(param_1 + 0x1c) + param_3) = uStack_50;
    *(undefined1 *)(*(int *)(param_1 + 0x20) + param_3) = auStack_4f[0];
    puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x24) + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  return;
}

