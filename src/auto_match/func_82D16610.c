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
extern int fn_82D13390();


undefined4 * fn_82D16610(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1[1] != 0) {
    iVar4 = *(int *)*param_1;
    if (*(int *)(iVar4 + 0x800) != 0) goto LAB_82d16654;
  }
  iVar4 = fn_82D13390(param_1);
LAB_82d16654:
  puVar1 = *(undefined4 **)(iVar4 + 0x800);
  uVar5 = *puVar1;
  *(int *)(iVar4 + 0x804) = *(int *)(iVar4 + 0x804) + 1;
  *(undefined4 *)(iVar4 + 0x800) = uVar5;
  puVar2 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(puVar1 + 4) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  puVar1[8] = *(undefined4 *)(param_2 + 0x20);
  puVar1[9] = *(undefined4 *)(param_2 + 0x24);
  puVar1[10] = *(undefined4 *)(param_2 + 0x28);
  puVar1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  puVar1[0xc] = *(undefined4 *)(param_2 + 0x30);
  puVar1[0xd] = *(undefined4 *)(param_2 + 0x34);
  puVar1[1] = 0;
  *puVar1 = param_1[3];
  if (param_1[3] != 0) {
    *(undefined4 **)(param_1[3] + 4) = puVar1;
  }
  param_1[3] = puVar1;
  param_1[4] = param_1[4] + 1;
  return puVar1;
}

