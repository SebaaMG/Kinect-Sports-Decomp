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
extern int fn_82D44170();
extern unsigned int lbl_82135854;


undefined4 * fn_82D3D180(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  fn_82D44170((double)*(float *)(param_2 + 0x10),param_1,0xc,param_3,param_2,param_4);
  *param_1 = &lbl_82135854;
  iVar2 = (int)param_3;
  puVar1 = (undefined4 *)(in_r0 + iVar2 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar3 = (undefined4 *)((int)param_1 + in_r0 + 0x20 & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  puVar1 = (undefined4 *)(iVar2 + 0x10U & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar3 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  puVar1 = (undefined4 *)(iVar2 + 0x20U & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar3 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  puVar1 = (undefined4 *)(iVar2 + 0x30U & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar3 = (undefined4 *)((uint)(param_1 + 0x14) & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  return param_1;
}

