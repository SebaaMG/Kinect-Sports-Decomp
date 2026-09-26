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
extern int fn_8309C9D8();
extern unsigned int iStack_1c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82187C08;
extern unsigned int lbl_8326570C;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_83098750(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(int *)(param_3 + 0x28) = param_2;
  *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_2 + 0x30);
  iStack_1c = param_2 + 0x10;
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(int *)(param_3 + 0x24) = param_2;
  uStack_18 = 0x10;
  uStack_14 = 0;
  uStack_20 = 1;
  if (*(char *)(param_2 + 0x20) == '\0') {
    *(undefined4 *)(param_3 + 100) = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 0x18) + 0x10;
    if (*(int *)(param_3 + 0x18) == 0) {
      iVar2 = 0;
    }
    *(int *)(param_3 + 100) = iVar2;
  }
  uVar3 = lbl_82002AE0;
  if (*(char *)(param_2 + 0x3c) == '\0') {
    *(undefined4 *)(param_3 + 0x70) = 0;
  }
  else {
    if (param_4 == (undefined4 *)0x0) {
      param_4 = (undefined4 *)0x0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 0x34);
      uVar5 = *(undefined4 *)(param_2 + 0x30);
      param_4[1] = lbl_82002AE0;
      param_4[5] = 0;
      param_4[6] = 0;
      *param_4 = &lbl_82187C08;
      param_4[4] = uVar4;
      param_4[2] = uVar5;
      param_4[3] = uVar5;
    }
    *(undefined4 **)(param_3 + 0x70) = param_4;
    lbl_8326570C = fn_8309C9D8;
  }
  iVar2 = *(int *)(param_2 + 0x30);
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
  (**(code **)(*param_1 + 0x5c))(param_1,auStack_30,param_3,0);
  return;
}

