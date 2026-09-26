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
extern unsigned int uStack_32;
extern unsigned int uStack_3a;
extern unsigned int uStack_4e;
extern unsigned int uStack_50;


void fn_830855B0(int *param_1,ulonglong param_2,int param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined1 auStack_40 [6];
  undefined2 uStack_3a;
  undefined2 uStack_32;
  
  param_4 = (param_2 & 0xfffffff) * 0x10 + param_4;
  iVar4 = (int)param_2;
  while (iVar4 < param_3) {
    dataCacheBlockTouch(param_4 + 0x40);
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
    (**(code **)(*param_1 + 0x14))(param_1,uVar3,auStack_40);
    uStack_50 = (undefined2)((ulonglong)uVar3 >> 0x10);
    uStack_4e = (undefined2)uVar3;
    param_2 = param_2 + 1;
    puVar1 = (undefined4 *)((uint)(auStack_40 + (int)in_r0) & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (undefined4 *)((int)in_r0 + (int)param_4 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    param_4 = param_4 + 0x10;
    uStack_32 = uStack_4e;
    uStack_3a = uStack_50;
    iVar4 = (int)param_2;
  }
  return;
}

