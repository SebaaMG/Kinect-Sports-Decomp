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
extern unsigned int *auStack_30;
extern int fn_822BFBD0();
extern int fn_82321D30();
extern int fn_82409F90();
extern int fn_8240A638();


void fn_82409E10(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_30 [48];
  
  fn_8240A638();
  (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  fn_822BFBD0();
  (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  fn_822BFBD0();
  iVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  *(undefined4 *)(*(int *)(iVar3 + 0x5b0) + 4) = 1;
  fn_82321D30(auStack_30);
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + iVar3 + 0x80 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 8))();
  *(undefined4 *)(*(int *)(iVar3 + 0x5b0) + 4) = 1;
  fn_82321D30(auStack_30);
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + iVar3 + 0x80 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *(undefined4 *)(**(int **)(param_1 + 0x54) + 0x1d0) = 1;
  fn_82409F90(param_1,0);
  return;
}

