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
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82DA59C8(double param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar3 = fn_82CE5410();
  if (*(uint *)(param_2 + 0x1c) == (*(uint *)(param_2 + 0x20) & 0x3fffffff)) {
    fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),(int *)(param_2 + 0x18),0x30);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  *(int *)(param_2 + 0x1c) = iVar3 + 1;
  puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  iVar3 = iVar3 * 0x30 + *(int *)(param_2 + 0x18);
  puVar2 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar1 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  *(float *)(iVar3 + 0x20) = (float)param_1;
  puVar1 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  return;
}

