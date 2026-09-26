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


void fn_82DCDDD0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar3 = param_1 + 0x20;
  iVar4 = param_2 + 0x20;
  lVar5 = 2;
  do {
    puVar1 = (undefined4 *)(iVar4 - 0x20U & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (undefined4 *)(iVar3 - 0x20U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar1 = (undefined4 *)(iVar4 - 0x10U & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (undefined4 *)(iVar3 - 0x10U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar1 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    iVar4 = iVar4 + 0x30;
    puVar2 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    iVar3 = iVar3 + 0x30;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  return;
}

