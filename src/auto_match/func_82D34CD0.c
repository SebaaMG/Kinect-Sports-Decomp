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
extern int fn_82D33BC0();
extern int fn_82D33E78();


void fn_82D34CD0(int param_1,ulonglong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_r0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 auStack_30 [12];
  
  if ((ulonglong)*(uint *)(param_1 + 0x14) == (param_2 & 0xffffffff)) {
    iVar3 = (int)((param_2 + (param_2 & 0x7fffffff) * 2 & 0xffffffff) << 4) +
            *(int *)(param_1 + 0x1c);
    puVar1 = (undefined4 *)(param_3 + 0x10U & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  else {
    fn_82D33E78(param_1,param_2,auStack_30);
    puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    iVar3 = (int)((param_2 + (param_2 & 0x7fffffff) * 2 & 0xffffffff) << 4) +
            *(int *)(param_1 + 0x1c);
    puVar2 = (undefined4 *)(param_3 + 0x10U & 0xfffffff0);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar2 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    puVar1 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    fn_82D33BC0(param_1,*(undefined4 *)(param_1 + 0x14),param_2,auStack_30[0]);
  }
  return;
}

