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
extern int fn_8255E138();


int fn_822B6C98(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_20 [16];
  
  iVar1 = *(int *)(param_2 + 0x14);
  iVar2 = *(int *)(iVar1 + 0x4c);
  puVar3 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  if (iVar2 != 0) {
    if ((*(int *)(iVar1 + 0x8c0) != 0) &&
       (*(int *)((*(int *)(iVar2 + 0x44) + 0x20) * 4 + *(int *)(iVar1 + 0x8c0)) != 0)) {
      fn_8255E138(iVar1,param_3,auStack_20);
    }
  }
  puVar3 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puVar4 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  return param_1;
}

