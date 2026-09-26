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


void fn_823A0A88(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 0x2c4);
  iVar3 = 0;
  iVar7 = 0;
  if (uVar1 == 0) {
    iVar7 = 0;
  }
  else if (uVar1 == 1) {
    iVar7 = 0x66;
  }
  else if (uVar1 < 3) {
    iVar7 = 0x22;
  }
  else if (uVar1 == 3) {
    iVar7 = 0x44;
  }
  uVar4 = iVar7 + 0x24c;
  iVar7 = 0;
  if (uVar1 == 0) {
    iVar7 = 0;
  }
  else if (uVar1 == 1) {
    iVar7 = 0x66;
  }
  else if (uVar1 < 3) {
    iVar7 = 0x22;
  }
  else if (uVar1 == 3) {
    iVar7 = 0x44;
  }
  if (uVar4 <= iVar7 + 0x26dU) {
    iVar6 = ((iVar7 + 0x26dU) - uVar4) + 1;
    iVar7 = uVar4 * 4;
    do {
      iVar5 = (param_3 * 2 + param_4) * 0x2c + iVar3;
      iVar3 = iVar3 + 1;
      puVar2 = (undefined4 *)(*(int *)(param_2 + 0x100) + iVar7);
      iVar7 = iVar7 + 4;
      *(undefined4 *)((iVar5 + 1) * 4 + param_1) = *puVar2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  param_1 = (param_3 * 2 + param_4) * 0xb0 + param_1;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0x90c);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0x910);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0x914);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0x918);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0x91c);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0x920);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0x924);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0x928);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(*(int *)(param_2 + 0x100) + 0x92c);
  return;
}

