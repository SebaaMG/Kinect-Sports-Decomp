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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D587C0();
extern int fn_82DAB520();
extern int fn_82DAC0B0();
extern unsigned int lbl_821410AC;
extern unsigned int lbl_82141158;


void fn_82D80DF0(undefined8 param_1,undefined8 param_2)

{
  int iVar3;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar4;
  
  iVar3 = fn_82CE5410();
  iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0xc);
  *(undefined2 *)(iVar3 + 4) = 0xc;
  uVar1 = fn_82DAC0B0(iVar3,param_1);
  iVar3 = fn_82CE5410();
  iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0xc);
  *(undefined2 *)(iVar3 + 4) = 0xc;
  uVar2 = fn_82DAB520(iVar3,param_1);
  iVar3 = fn_82CE5410();
  puVar4 = (undefined4 *)(**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x14);
  *puVar4 = &lbl_82141158;
  *(undefined2 *)((int)puVar4 + 6) = 1;
  *(undefined2 *)(puVar4 + 1) = 0x14;
  puVar4[2] = &lbl_821410AC;
  *(undefined2 *)((int)puVar4 + 0xe) = 1;
  puVar4[4] = 3;
  fn_82D587C0(param_2,uVar1,1);
  fn_82D587C0(param_2,uVar2,2);
  fn_82D587C0(param_2,puVar4,3);
  fn_82CE4118(uVar1);
  fn_82CE4118(uVar2);
  fn_82CE4118(puVar4);
  return;
}

