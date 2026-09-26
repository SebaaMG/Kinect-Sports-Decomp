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
extern int fn_82D35448();


void fn_82D362D8(int *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[4] == 0) {
    fn_82D35448(param_1,(ulonglong)(uint)param_1[1] + 0x80,param_2,param_3);
  }
  iVar3 = *(int *)(param_1[4] * 4 + param_1[3] + -4);
  param_1[4] = param_1[4] + -1;
  puVar1 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  iVar3 = iVar3 * 0x30 + *param_1;
  puVar2 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar1 = (undefined4 *)(param_4 + 0x10U & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(param_4 + 0x20);
  *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(param_4 + 0x24);
  *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(param_4 + 0x20);
  *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(param_4 + 0x28);
  *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(param_4 + 0x2c);
  return;
}

