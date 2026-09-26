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


void fn_82DDCA38(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_r0;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  iVar4 = iVar1 * 0x10;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x68) + iVar4 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  puVar2 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x60) + iVar4 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  puVar2 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (undefined4 *)(*(int *)(param_1 + 100) + iVar4 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  *(int *)(param_1 + 0x6c) = iVar1 + 1;
  return;
}

