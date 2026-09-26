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
extern int fn_82D43000();
extern int fn_82D43798();
extern unsigned int lbl_821388C0;
extern unsigned int lbl_821388E4;


void fn_82D4DCE8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar5;
  ulonglong uVar4;
  
  *param_1 = &lbl_821388E4;
  iVar2 = 0;
  param_1[4] = &lbl_821388C0;
  if (0 < (int)param_1[0x3d]) {
    iVar5 = 0;
    do {
      fn_82CE4118(*(undefined4 *)(param_1[0x3c] + iVar5));
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar2 < (int)param_1[0x3d]);
  }
  uVar4 = (ulonglong)(uint)param_1[0x31];
  uVar3 = (ulonglong)(uint)param_1[0x30];
  if (0 < (int)param_1[0x31]) {
    do {
      fn_82D43000(uVar3);
      uVar4 = uVar4 - 1;
      uVar3 = uVar3 + 0x40;
    } while (uVar4 != 0);
  }
  param_1[0x31] = 0;
  iVar2 = 0;
  if (0 < (int)param_1[0x40]) {
    iVar5 = 0;
    do {
      fn_82CE4118(*(undefined4 *)(iVar5 + param_1[0x3f]));
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar2 < (int)param_1[0x40]);
  }
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x40] = 0;
  if ((param_1[0x41] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x3f],param_1[0x41] & 0x3fffffff,4);
  }
  param_1[0x3f] = 0;
  param_1[0x41] = 0x80000000;
  iVar2 = fn_82CE5410();
  piVar1 = *(int **)(iVar2 + 0x10);
  param_1[0x3d] = 0;
  if ((param_1[0x3e] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[0x3c],param_1[0x3e] & 0x3fffffff,4);
  }
  param_1[0x3c] = 0;
  param_1[0x3e] = 0x80000000;
  fn_82D43798(param_1);
  return;
}

