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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82F4ED10();
extern int fn_82F538A0();
extern int fn_82F538B0();
extern int fn_82F538C8();
extern int fn_82F538E0();
extern int fn_82F597F0();
extern int fn_8306ED70();


void fn_82F4ED78(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  int in_stack_00000064;
  int in_stack_00000074;
  int in_stack_0000007c;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [96];
  
  if (in_stack_00000064 != 0) {
    iVar3 = fn_82F538A0(auStack_70,(ulonglong)*(uint *)(param_1 + 0xcf0) + 0x1040,param_2);
    puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    fn_82F597F0(param_3,param_4,param_5,param_6,param_7,param_8,in_stack_00000050,in_stack_00000058
                );
    puVar1 = (undefined4 *)(in_r0 + in_stack_00000064 & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    fn_82F4ED10(auStack_70,param_1);
    puVar1 = (undefined4 *)(in_r0 + in_stack_00000064 & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    fn_8306ED70();
    puVar1 = (undefined4 *)(in_r0 + in_stack_00000064 & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  if (in_stack_00000074 != 0) {
    iVar3 = fn_82F538B0(auStack_70,(ulonglong)*(uint *)(param_1 + 0xcf0) + 0x1040,param_2);
    puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + in_stack_00000074 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    fn_82F4ED10(auStack_60,param_1);
    puVar1 = (undefined4 *)(in_r0 + in_stack_00000074 & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    fn_8306ED70();
    puVar1 = (undefined4 *)(in_r0 + in_stack_00000074 & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  if (in_stack_0000007c != 0) {
    iVar3 = fn_82F538C8(auStack_60,(ulonglong)*(uint *)(param_1 + 0xcf0) + 0x1040,param_2);
    puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + in_stack_0000007c & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    if (*(char *)(param_1 + 0xcb1) != '\0') {
      *(float *)(in_stack_0000007c + 4) = -*(float *)(in_stack_0000007c + 4);
      *(float *)(in_stack_0000007c + 8) = -*(float *)(in_stack_0000007c + 8);
    }
  }
  fn_82F538E0((ulonglong)*(uint *)(param_1 + 0xcf0) + 0x1040,param_2);
  return;
}

