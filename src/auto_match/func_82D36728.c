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
extern unsigned int *auStack_70;
extern int fn_82D33BC0();
extern int fn_82D362D8();
extern int fn_82D363A0();
extern unsigned int uStack_38;
extern unsigned int uStack_40;


undefined8 fn_82D36728(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_r0;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 auStack_70 [4];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  piVar7 = (int *)(param_1 + 0x14);
  puVar2 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar1 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  uStack_38 = 0x80000000;
  puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  piVar6 = (int *)(param_1 + 0x10);
  piVar5 = (int *)(param_1 + 0x1c);
  uStack_40 = param_3;
  uVar4 = fn_82D362D8(piVar5,piVar6,piVar7,auStack_60);
  if (*(int *)(param_1 + 0x14) == 0x7fffffff) {
    iVar3 = (int)uVar4 * 0x30 + *piVar5;
    *(undefined4 *)(iVar3 + 0x2c) = 0x7fffffff;
    *(uint *)(iVar3 + 0x28) = *(uint *)(iVar3 + 0x28) | 0x7fffffff;
    *piVar6 = iVar3;
    *piVar7 = (int)uVar4;
  }
  else {
    fn_82D363A0(piVar5,piVar6,piVar7,auStack_70);
    fn_82D33BC0(param_1,*piVar7,uVar4,auStack_70[0]);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return uVar4;
}

