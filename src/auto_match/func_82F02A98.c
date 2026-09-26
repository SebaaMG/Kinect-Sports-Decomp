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


void fn_82F02A98(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_2 * 0x58 + param_1;
  uVar1 = *(undefined4 *)(iVar7 + 0x6a8);
  *(undefined4 *)(param_1 + 0x548) = uVar1;
  uVar2 = *(undefined4 *)(iVar7 + 0x6ac);
  *(undefined4 *)(param_1 + 0x554) = uVar2;
  uVar3 = *(undefined4 *)(iVar7 + 0x6b0);
  *(undefined4 *)(param_1 + 0x550) = uVar3;
  uVar4 = *(undefined4 *)(iVar7 + 0x6b4);
  *(undefined4 *)(param_1 + 0x334) = uVar2;
  *(undefined4 *)(param_1 + 0x33c) = uVar4;
  *(undefined4 *)(param_1 + 0x55c) = uVar4;
  *(undefined4 *)(param_1 + 0x330) = uVar1;
  *(undefined4 *)(param_1 + 0x338) = uVar3;
  iVar6 = *(int *)(iVar7 + 0x6b8);
  *(int *)(param_1 + 0x31c) = iVar6;
  iVar5 = *(int *)(iVar7 + 0x6bc);
  *(int *)(param_1 + 800) = iVar5;
  *(int *)(param_1 + 0x324) = iVar6 * iVar5;
  *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(iVar7 + 0x6c0);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(iVar7 + 0x6c4);
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(iVar7 + 0x6c8);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(iVar7 + 0x6cc);
  iVar6 = *(int *)(iVar7 + 0x6d0);
  *(int *)(param_1 + 0x2d0) = iVar6;
  iVar6 = iVar6 * 0x600;
  if (iVar6 < 0x1800) {
    iVar6 = 0x1800;
  }
  *(int *)(param_1 + 0x1a4c) = iVar6;
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(iVar7 + 0x6d4);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(iVar7 + 0x6d8);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(iVar7 + 0x6dc);
  *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(iVar7 + 0x6e0);
  iVar6 = *(int *)(iVar7 + 0x6e4);
  *(int *)(param_1 + 0x568) = iVar6;
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(iVar7 + 0x6e8);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(iVar7 + 0x6ec);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(iVar7 + 0x6f0);
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(iVar7 + 0x6f4);
  *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(iVar7 + 0x6f8);
  *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(iVar7 + 0x6fc);
  *(int *)(param_1 + 0x584) = iVar6 << 4;
  *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x574);
  return;
}

