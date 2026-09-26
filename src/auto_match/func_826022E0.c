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
extern unsigned int *auStack_40;
extern int fn_8253D4E8();
extern int fn_82601A00();
extern int fn_82602058();
extern int fn_826267D0();
extern V16 vectorAddFloatingPoint();


void fn_826022E0(int param_1,int param_2,longlong param_3)

{
  undefined4 *puVar1;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  fn_82602058(param_1,auStack_40);
  puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  fn_82601A00(param_1,auStack_40,auStack_30);
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar1 = (undefined4 *)(in_r0 + param_2 + 0x40 & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  vectorAddFloatingPoint(in_vs32,in_vs45);
  puVar1 = (undefined4 *)(in_r0 + param_2 + 0x40 & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x9c);
  if (*(int *)(param_1 + 0x254) == 7) {
    fn_826267D0(param_2,*(undefined4 *)(param_1 + 0x294));
    fn_8253D4E8(param_3 + 0x1f0,param_3,*(undefined4 *)(param_2 + 0x30),0);
  }
  return;
}

