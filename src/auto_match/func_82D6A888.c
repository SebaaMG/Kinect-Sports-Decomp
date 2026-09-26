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
extern int fn_82D6A808();


int fn_82D6A888(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = fn_82CE5410();
  iVar6 = (**(code **)(**(int **)(iVar6 + 0x10) + 4))(*(int **)(iVar6 + 0x10),0x24);
  *(undefined2 *)(iVar6 + 4) = 0x24;
  iVar6 = fn_82D6A808(iVar6,param_1,param_2,param_4);
  if (*(int *)(iVar6 + 0x1c) == 0x1e) {
    piVar2 = (int *)*param_1;
    for (iVar1 = param_2[3]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    }
    puVar5 = (undefined4 *)param_1[3];
    puVar4 = param_1;
    while (puVar3 = puVar5, puVar3 != (undefined4 *)0x0) {
      puVar4 = puVar3;
      puVar5 = (undefined4 *)puVar3[3];
    }
    (**(code **)(*piVar2 + 0x2c))(piVar2,puVar4);
    *(int **)(iVar6 + 0x14) = piVar2;
  }
  if (*(int *)(iVar6 + 0x20) == 0x1e) {
    piVar2 = (int *)*param_2;
    puVar4 = (undefined4 *)param_1[3];
    while (puVar5 = puVar4, puVar5 != (undefined4 *)0x0) {
      param_1 = puVar5;
      puVar4 = (undefined4 *)puVar5[3];
    }
    puVar4 = (undefined4 *)param_2[3];
    while (puVar5 = puVar4, puVar5 != (undefined4 *)0x0) {
      param_2 = puVar5;
      puVar4 = (undefined4 *)puVar5[3];
    }
    (**(code **)(*piVar2 + 0x2c))(piVar2,param_2,param_1,param_3);
    *(int **)(iVar6 + 0x18) = piVar2;
  }
  return iVar6;
}

