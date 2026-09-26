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
extern int fn_82CE5410();
extern int fn_82D80C48();
extern int fn_82D8BA38();
extern unsigned int iStack_28;
extern unsigned int iStack_2c;


void fn_82D8BD30(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_30 [4];
  int iStack_2c;
  int iStack_28;
  
  if ((*(int *)(param_1 + 8) == 0) || (*(int *)(*(int *)(param_1 + 8) + 0x94) == 0)) {
    (**(code **)(*(int *)(param_1 + 0xe0) + 0x38))(param_1 + 0xe0,param_2,param_3);
    fn_82D8BA38(param_1);
  }
  else {
    auStack_30[0] = 0x18;
    iStack_2c = param_1;
    iVar3 = fn_82CE5410();
    iStack_28 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x20);
    puVar1 = (undefined4 *)(in_r0 + (int)param_2 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + iStack_28 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    puVar1 = (undefined4 *)(in_r0 + (int)param_3 & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)(iStack_28 + 0x10U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    fn_82D80C48(*(undefined4 *)(param_1 + 8),auStack_30);
  }
  return;
}

