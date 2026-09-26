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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int fStack0000001c;
extern int fn_82CEBE20();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_825A5420(double param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 in_r0;
  ulonglong uVar5;
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fStack0000001c;
  
  uVar5 = ZEXT48(&stack0x00000000);
  puVar1 = *(undefined4 **)(param_2 + 0x18);
  fStack0000001c = (float)param_1;
  *param_4 = *puVar1;
  param_4[1] = puVar1[1];
  puVar2 = (undefined4 *)((uint)(puVar1 + 4) & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(param_4 + 4) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  iVar4 = (int)in_r0;
  puVar2 = (undefined4 *)((int)puVar1 + iVar4 + 0x20 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (undefined4 *)(iVar4 + (int)(param_4 + 8) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar2 = (undefined4 *)((uint)(puVar1 + 0xc) & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(param_4 + 0xc) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar1 = (undefined4 *)((uint)(puVar1 + 0x10) & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  loadVectorLeftIndexed128(in_r0,uVar5 + 0x1c);
  puVar2 = (undefined4 *)((uint)(param_4 + 0x10) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  param_4[1] = (float)param_1;
  puVar1 = (undefined4 *)(iVar4 + (int)(uVar5 - 0x20) & 0xfffffff0);
  *puVar1 = in_register_00010000;
  puVar1[1] = in_ACC;
  puVar1[2] = in_register_00010008;
  puVar1[3] = in_vr0;
  fn_82CEBE20(param_4 + 8,uVar5 - 0x20,param_4,uVar5 - 0x20,uVar5 + 0x1c);
  return;
}

