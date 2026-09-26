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


ulonglong fn_82E67150(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x10834);
  uVar2 = *(uint *)(param_1 + 0x10824);
  iVar3 = *(int *)(param_1 + 0x107f8);
  iVar4 = *(int *)(param_1 + 0x107fc);
  iVar5 = *(int *)(param_1 + 0x10800);
  *(int *)(param_1 + 0x10810) = iVar3;
  *(int *)(param_1 + 0x10814) = iVar4;
  *(int *)(param_1 + 0x10870) = iVar4;
  *(uint *)(param_1 + 0x10804) = (int)uVar2 / (int)uVar1 + iVar3 + uVar2;
  *(uint *)(param_1 + 0x10808) = iVar4 + uVar1 * 4 + 4;
  *(uint *)(param_1 + 0x1080c) = iVar5 + uVar1 * 4 + 4;
  *(int *)(param_1 + 0x10818) = iVar5;
  *(undefined4 *)(param_1 + 0x10884) = 0;
  *(undefined4 *)(param_1 + 0x10888) = 0;
  *(undefined8 *)(param_1 + 0x10890) = 0;
  uVar7 = (((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1;
  *(undefined4 *)(param_1 + 0x1083c) = 0;
  trapWord(6,(ulonglong)uVar1,0);
  *(undefined4 *)(param_1 + 0x10840) = 0;
  *(int *)(param_1 + 0x1086c) = iVar3;
  *(int *)(param_1 + 0x10874) = iVar5;
  trapWord(5,(ulonglong)uVar1 & ~uVar7,0xffff);
  *(int *)(param_1 + 0x1081c) = iVar3;
  lVar6 = (ulonglong)*(uint *)(param_1 + 0x10860) * (ulonglong)*(uint *)(param_1 + 0x10848);
  *(undefined4 *)(param_1 + 0x108e8) = 0;
  *(longlong *)(param_1 + 0x10858) = lVar6;
  *(longlong *)(param_1 + 0x10850) = lVar6;
  *(undefined4 *)(param_1 + 0x108c0) = 0;
  return uVar7;
}

