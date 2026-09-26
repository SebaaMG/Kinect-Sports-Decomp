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
extern int fn_82CEBE20();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82DE54E0(double param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 in_r0;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  
  uVar4 = ZEXT48(&stack0x00000000);
  *(float *)(param_4 + 0x90) = (float)param_1;
  puVar1 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (undefined4 *)(param_4 + 0x80U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  iVar3 = (int)in_r0;
  puVar1 = (undefined4 *)(iVar3 + param_2 + 0x20 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (undefined4 *)(iVar3 + param_4 + 0x50 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (undefined4 *)(param_2 + 0x30U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (undefined4 *)(param_4 + 0x60U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (undefined4 *)(param_2 + 0x40U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  loadVectorLeftIndexed128(in_r0,uVar4 - 0x30);
  puVar2 = (undefined4 *)(param_4 + 0x70U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (undefined4 *)(iVar3 + (int)(uVar4 - 0x20) & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  fn_82CEBE20(param_4 + 0x50,uVar4 - 0x20,uVar4 - 0x20,uVar4 - 0x30);
  return;
}

