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


void fn_82CA8498(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_2 * 0x54 + param_1;
  uVar1 = *(undefined4 *)(iVar7 + 0x3a30);
  uVar2 = *(undefined4 *)(iVar7 + 0x3a38);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  uVar3 = *(undefined4 *)(iVar7 + 0x3a34);
  *(undefined4 *)(param_1 + 0xc0) = uVar3;
  uVar4 = *(undefined4 *)(iVar7 + 0x3a3c);
  *(undefined4 *)(param_1 + 200) = uVar4;
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  *(undefined4 *)(param_1 + 0xb0) = uVar4;
  iVar5 = *(int *)(iVar7 + 0x3a40);
  *(int *)(param_1 + 0x9c) = iVar5;
  iVar6 = *(int *)(iVar7 + 0x3a44);
  *(int *)(param_1 + 0xa0) = iVar6;
  if (*(int *)(param_1 + 0x5118) != 0) {
    iVar5 = iVar5 + 1 >> 1;
    iVar6 = iVar6 + 1 >> 1;
    *(int *)(param_1 + 0xa8) = iVar5;
    *(int *)(param_1 + 0xb0) = iVar6;
    *(int *)(param_1 + 0xa4) = iVar5 << 1;
    *(int *)(param_1 + 0xac) = iVar6 << 1;
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar7 + 0x3a48);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(iVar7 + 0x3a4c);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar7 + 0x3a50);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar7 + 0x3a54);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar7 + 0x3a58);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar7 + 0x3a5c);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar7 + 0x3a60);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(iVar7 + 0x3a64);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(iVar7 + 0x3a68);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(iVar7 + 0x3a6c);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(iVar7 + 0x3a70);
  iVar5 = *(int *)(iVar7 + 0x3a74);
  *(int *)(param_1 + 0xdc) = iVar5;
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar7 + 0x3a78);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(iVar7 + 0x3a7c);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(iVar7 + 0x3a80);
  if (*(int *)(param_1 + 0xecc) != 0) {
    *(int *)(param_1 + 0xee4) = iVar5 + *(int *)(param_1 + 0xecc);
    return;
  }
  *(undefined4 *)(param_1 + 0xee4) = 0;
  return;
}

