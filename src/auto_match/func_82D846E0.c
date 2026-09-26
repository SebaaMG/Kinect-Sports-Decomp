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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D81240();
extern int fn_82D839C8();
extern int fn_82D89688();
extern int fn_82D8ED60();
extern int fn_82DA6448();
extern int fn_82DAE3A0();
extern int fn_830884F8();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_8214134C;


void fn_82D846E0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_40 [64];
  
  iVar4 = param_1[0x1d];
  *param_1 = &lbl_8214134C;
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0xd4) != 0) {
      iVar3 = fn_82CE5410();
      (**(code **)(**(int **)(iVar3 + 0x10) + 8))
                (*(int **)(iVar3 + 0x10),*(undefined4 *)(iVar4 + 0xd4),0x200);
    }
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),iVar4,0x100);
  }
  fn_82CE4118(param_1[0x13]);
  param_1[0x13] = 0;
  iVar4 = param_1[0x2e];
  if (iVar4 != 0) {
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),iVar4,0x1c);
    param_1[0x2e] = 0;
  }
  iVar4 = param_1[0x31];
  if (iVar4 != 0) {
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),iVar4,0x1c);
    param_1[0x31] = 0;
  }
  iVar4 = param_1[0x30];
  if (iVar4 != 0) {
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),iVar4,0x1c);
    param_1[0x30] = 0;
  }
  if (param_1[0x14] != 0) {
    fn_82CE4118();
  }
  param_1[0x14] = 0;
  fn_82D839C8(param_1);
  fn_82D81240(auStack_40,param_1,param_1[9]);
  param_1[9] = 0;
  fn_82D8ED60(param_1,param_1[8]);
  puVar1 = (undefined4 *)param_1[8];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[8] = 0;
  fn_82DAE3A0(param_1);
  fn_82CE4118(param_1[0x16]);
  param_1[0x16] = 0;
  fn_82CE4118(param_1[0x20]);
  param_1[0x20] = 0;
  iVar4 = param_1[0x19];
  if (iVar4 != 0) {
    fn_830884F8(iVar4);
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),iVar4,0x10c);
  }
  if (param_1[0x6f] != 0) {
    fn_82CE4118();
  }
  puVar1 = (undefined4 *)param_1[0x1a];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined4 *)param_1[0x1b];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined4 *)param_1[0x1c];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  fn_82CE4118(param_1[0x1f]);
  fn_82CE4118(param_1[0x21]);
  iVar4 = *(int *)(param_1[0x1e] + 0x70);
  if (iVar4 != 0) {
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),iVar4,0x10);
  }
  if (param_1[0x1e] != 0) {
    fn_82D89688(param_1[0x1e],1);
  }
  fn_82CE4118(param_1[2]);
  iVar4 = param_1[0x22];
  if (iVar4 != 0) {
    fn_82DA6448(iVar4);
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),iVar4,0x28);
  }
  if (param_1[0x17] != 0) {
    fn_82CE4118();
  }
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0x6d] = 0;
  if ((param_1[0x6e] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x6c],param_1[0x6e] & 0x3fffffff,4);
  }
  param_1[0x6c] = 0;
  param_1[0x6e] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0x6a] = 0;
  if ((param_1[0x6b] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x69],param_1[0x6b] & 0x3fffffff,4);
  }
  param_1[0x69] = 0;
  param_1[0x6b] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0x67] = 0;
  if ((param_1[0x68] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x66],param_1[0x68] & 0x3fffffff,4);
  }
  param_1[0x66] = 0;
  param_1[0x68] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[100] = 0;
  if ((param_1[0x65] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[99],param_1[0x65] & 0x3fffffff,4);
  }
  param_1[99] = 0;
  param_1[0x65] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0x61] = 0;
  if ((param_1[0x62] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x60],param_1[0x62] & 0x3fffffff,4);
  }
  param_1[0x60] = 0;
  param_1[0x62] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0x5e] = 0;
  if ((param_1[0x5f] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x5d],param_1[0x5f] & 0x3fffffff,4);
  }
  param_1[0x5d] = 0;
  param_1[0x5f] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0x5b] = 0;
  if ((param_1[0x5c] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x5a],param_1[0x5c] & 0x3fffffff,4);
  }
  param_1[0x5a] = 0;
  param_1[0x5c] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0x58] = 0;
  if ((param_1[0x59] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x57],param_1[0x59] & 0x3fffffff,4);
  }
  param_1[0x57] = 0;
  param_1[0x59] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0x55] = 0;
  if ((param_1[0x56] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x54],param_1[0x56] & 0x3fffffff,4);
  }
  param_1[0x54] = 0;
  param_1[0x56] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0x52] = 0;
  if ((param_1[0x53] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x51],param_1[0x53] & 0x3fffffff,4);
  }
  param_1[0x51] = 0;
  param_1[0x53] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0x4f] = 0;
  if ((param_1[0x50] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x4e],param_1[0x50] & 0x3fffffff,4);
  }
  param_1[0x4e] = 0;
  param_1[0x50] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0x4c] = 0;
  if ((param_1[0x4d] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x4b],param_1[0x4d] & 0x3fffffff,4);
  }
  param_1[0x4b] = 0;
  param_1[0x4d] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0x49] = 0;
  if ((param_1[0x4a] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x48],param_1[0x4a] & 0x3fffffff,4);
  }
  param_1[0x48] = 0;
  param_1[0x4a] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0x46] = 0;
  if ((param_1[0x47] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x45],param_1[0x47] & 0x3fffffff,4);
  }
  param_1[0x45] = 0;
  param_1[0x47] = 0x80000000;
  if (param_1[0x14] != 0) {
    fn_82CE4118();
  }
  param_1[0x14] = 0;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0x11] = 0;
  if ((param_1[0x12] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0x10],param_1[0x12] & 0x3fffffff,4);
  }
  param_1[0x10] = 0;
  param_1[0x12] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0xe] = 0;
  if ((param_1[0xf] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0xd],param_1[0xf] & 0x3fffffff,4);
  }
  param_1[0xd] = 0;
  param_1[0xf] = 0x80000000;
  iVar4 = fn_82CE5410();
  piVar2 = *(int **)(iVar4 + 0x10);
  param_1[0xb] = 0;
  if ((param_1[0xc] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[10],param_1[0xc] & 0x3fffffff,4);
  }
  param_1[10] = 0;
  param_1[0xc] = 0x80000000;
  *param_1 = &lbl_8212FC60;
  return;
}

