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
extern int fn_8258AF18();
extern int fn_82A1DD38();


void fn_825A1440(int *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  fn_82A1DD38(param_1 + 0x38,param_2,0x40);
  puVar3 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puVar4 = (undefined4 *)((uint)(param_1 + 0x48) & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  fVar1 = *(float *)(param_2 + 0x30);
  fVar2 = *(float *)(param_2 + 0x24);
  puVar3 = (undefined4 *)(in_r0 + param_2 + 0x10 & 0xfffffff0);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puVar4 = (undefined4 *)((int)param_1 + in_r0 + 0x20 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  puVar3 = (undefined4 *)(in_r0 + param_2 + 0x10 & 0xfffffff0);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puVar4 = (undefined4 *)((int)param_1 + in_r0 + 0x30 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  param_1[10] = (int)((float)param_1[10] - fVar1);
  param_1[8] = (int)((float)param_1[8] - fVar1);
  param_1[0xc] = (int)((float)param_1[0xc] + fVar1);
  param_1[0xd] = (int)((float)param_1[0xd] + fVar2);
  param_1[0xe] = (int)((float)param_1[0xe] + fVar1);
  fn_8258AF18((ulonglong)*(uint *)(*param_1 + 0x4c) + 0x6d4);
  return;
}

