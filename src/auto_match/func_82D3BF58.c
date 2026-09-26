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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_8307FB40();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82D3BF58(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 *in_r7;
  undefined4 *in_r8;
  undefined4 *in_r9;
  int in_r10;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int in_stack_00000054;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  fn_8307FB40();
  puVar1 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar2 = (undefined4 *)(in_r0 + in_r10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (undefined4 *)(in_r0 + in_stack_00000054 & 0xfffffff0);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *in_r8 = uStack_5c;
  *in_r9 = uStack_58;
  *in_r7 = uStack_60;
  return;
}

