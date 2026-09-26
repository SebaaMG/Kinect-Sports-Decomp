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


void fn_823873E0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 0x224);
  iVar3 = 0;
  iVar7 = 0;
  if (uVar1 == 0) {
    iVar7 = 0;
  }
  else if (uVar1 == 1) {
    iVar7 = 0x4b;
  }
  else if (uVar1 < 3) {
    iVar7 = 0x19;
  }
  else if (uVar1 == 3) {
    iVar7 = 0x32;
  }
  uVar4 = iVar7 + 0x2e2;
  iVar7 = 0;
  if (uVar1 == 0) {
    iVar7 = 0;
  }
  else if (uVar1 == 1) {
    iVar7 = 0x4b;
  }
  else if (uVar1 < 3) {
    iVar7 = 0x19;
  }
  else if (uVar1 == 3) {
    iVar7 = 0x32;
  }
  if (uVar4 <= iVar7 + 0x2faU) {
    iVar6 = ((iVar7 + 0x2faU) - uVar4) + 1;
    iVar7 = uVar4 * 4;
    do {
      iVar5 = (param_3 * 2 + param_4) * 0x22 + iVar3;
      iVar3 = iVar3 + 1;
      puVar2 = (undefined4 *)(*(int *)(param_2 + 0x100) + iVar7);
      iVar7 = iVar7 + 4;
      *(undefined4 *)((iVar5 + 1) * 4 + param_1) = *puVar2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  param_1 = (param_3 * 2 + param_4) * 0x88 + param_1;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0xb50);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0xb54);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0xb58);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0xb5c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0xb60);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0xb64);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0xb68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0xb6c);
  return;
}

