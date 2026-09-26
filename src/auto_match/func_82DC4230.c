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
extern int fn_82DC4190();


void fn_82DC4230(int param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x68);
  while (iVar4 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x68) = *puVar2;
    iVar4 = fn_82CE5410();
    (**(code **)(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),puVar2,0x1000);
    iVar4 = *(int *)(param_1 + 0x68);
  }
  iVar4 = *(int *)(param_1 + 0x78);
  while (iVar4 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x78) = *puVar2;
    iVar4 = fn_82CE5410();
    (**(code **)(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),puVar2,0x30);
    iVar4 = *(int *)(param_1 + 0x78);
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    iVar5 = fn_82CE5410();
    (**(code **)(**(int **)(iVar5 + 0x18) + 0x10))(*(int **)(iVar5 + 0x18),iVar4,uVar3,1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (1 < *(int *)(param_1 + 0x10)) {
    uVar1 = *(undefined2 *)(param_1 + 0x56);
    uVar3 = *(undefined4 *)(param_1 + 0x50);
    iVar4 = fn_82CE5410();
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))(*(int **)(iVar4 + 0x10),uVar3,uVar1,4);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  fn_82DC4190(param_1,1);
  return;
}

