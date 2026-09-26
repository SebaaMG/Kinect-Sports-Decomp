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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_830A6170();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82D9D658(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  puVar1 = (undefined4 *)(in_r0 + in_r7 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  dVar4 = (double)lbl_82002AE0;
  puVar1 = (undefined4 *)(in_r7 + 0x10U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  fStack_40 = lbl_82002AE0;
  puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  fn_830A6170(auStack_60,in_r8,in_r9);
  fStack_3c = (float)dVar4;
  dVar3 = (double)lbl_821AAD20;
  fStack_40 = lbl_821AAD20;
  fn_830A6170(auStack_60,in_r8,in_r9);
  fStack_3c = (float)dVar3;
  fStack_38 = (float)dVar4;
  fn_830A6170(auStack_60,in_r8,in_r9);
  *(int *)(in_r7 + 0xb8) = *(int *)(in_r7 + 0xb8) + 3;
  return;
}

