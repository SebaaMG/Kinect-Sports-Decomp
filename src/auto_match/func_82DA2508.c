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
extern unsigned int *auStack_20;
extern int fn_82CE6010();
extern unsigned int lbl_82002AE0;


void fn_82DA2508(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_20 [32];
  
  uVar2 = lbl_82002AE0;
  puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar1 = (undefined4 *)(in_r0 + param_1 + 0x20 & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1 = (undefined4 *)(param_1 + 0x40U & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  fn_82CE6010(param_1 + 0x50);
  return;
}

