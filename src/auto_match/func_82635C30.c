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


void fn_82635C30(int *param_1,ulonglong param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = *param_1;
  param_1[iVar1 * 0x9b4 + 0x9b3] = 0;
  iVar4 = iVar1 * 0x26d0 + 0x2528;
  *(ulonglong *)(param_1 + iVar1 * 0x9b4 + 0x944) =
       1L << (0x3f - ((param_2 & 0xffffffff) >> 2) & 0x7f) |
       *(ulonglong *)(param_1 + iVar1 * 0x9b4 + 0x944);
  param_2 = ((ulonglong)*(uint *)(param_1[iVar1 * 0x9b4 + 0x9b5] + 0x4db4) & 4) * 0x40 + param_2;
  uVar3 = (uint)param_2;
  uVar2 = (uint)((param_2 & 0xffffffff) >> 3) & 0x1ffffffc;
  piVar5 = param_1 + iVar1 * 0x9b4 + (uVar3 + 0x30) * 4 + 0x5c;
  *piVar5 = *param_3;
  piVar5[1] = param_3[1];
  piVar5[2] = param_3[2];
  piVar5[3] = param_3[3];
  *(uint *)((int)param_1 + uVar2 + iVar4) =
       1 << (uVar3 & 0x1f) | *(uint *)((int)param_1 + uVar2 + iVar4);
  return;
}

